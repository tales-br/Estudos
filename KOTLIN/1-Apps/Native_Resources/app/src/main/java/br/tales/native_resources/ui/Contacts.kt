package br.tales.native_resources.ui

import adapter.Adapter_Contacts
import android.Manifest
import android.annotation.SuppressLint
import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.ContactsContract
import androidx.core.app.ActivityCompat
import androidx.recyclerview.widget.LinearLayoutManager
import br.tales.native_resources.databinding.ActivityContactsBinding
import data.Data_Contacts

private lateinit var ContactsBinding: ActivityContactsBinding

class Contacts : AppCompatActivity() {

    val REQUES_CONTACT = 1
    val LINEAR_LAYOUT_VERTICAL = 1

    override fun onCreate(savedInstanceState: Bundle?)
    {
        super.onCreate(savedInstanceState)
        ContactsBinding = ActivityContactsBinding.inflate(layoutInflater)
        val contactsView = ContactsBinding.root
        setContentView(contactsView)

        if (ActivityCompat.checkSelfPermission(this,Manifest.permission.READ_CONTACTS)!= PackageManager.PERMISSION_GRANTED)
        {
            ActivityCompat.requestPermissions(
                this,
                arrayOf(Manifest.permission.READ_CONTACTS),
                REQUES_CONTACT
            )
        }
        else
        {
            setContacts()
        }
    }

    override fun onRequestPermissionsResult(requestCode: Int, permissions: Array<out String>, grantResults: IntArray)
    {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        if(requestCode == REQUES_CONTACT)
        {
            setContacts()
        }
    }
    @SuppressLint("Range")
    private fun setContacts()
    {
        val listaContatos: ArrayList<Data_Contacts> = ArrayList()

        val cursor = contentResolver.query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI,null,null,null,null)

        if (cursor != null)
        {
            while (cursor.moveToNext())
            {
                listaContatos.add(
                    Data_Contacts(
                        cursor.getString(cursor.getColumnIndex(ContactsContract.CommonDataKinds.Phone.DISPLAY_NAME)),
                        cursor.getString(cursor.getColumnIndex(ContactsContract.CommonDataKinds.Phone.NUMBER))
                    )
                )
            }
        }
        cursor?.close()
        val adapter = Adapter_Contacts(listaContatos)
        val contactRecyclerview = ContactsBinding.rvContacts

        contactRecyclerview.layoutManager = LinearLayoutManager (this,
            LINEAR_LAYOUT_VERTICAL,
            false)

        contactRecyclerview.adapter = adapter
    }
}