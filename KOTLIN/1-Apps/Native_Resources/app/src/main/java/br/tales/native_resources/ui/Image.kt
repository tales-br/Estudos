package br.tales.native_resources.ui

import android.Manifest
import android.annotation.SuppressLint
import android.content.Intent
import android.content.pm.PackageManager
import android.os.Build
import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import br.tales.native_resources.databinding.ActivityImageBinding

@SuppressLint("StaticFieldLeak")
private lateinit var imageBinding: ActivityImageBinding

class Image  : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        imageBinding = ActivityImageBinding.inflate(layoutInflater)
        val imageView = imageBinding.root
        setContentView(imageView)

        setListeners()

    }

    private fun setListeners()
    {
        imageBinding.btImgChange.setOnClickListener {

            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) //Foi a partir da SDK Marshmallow que começaram as permissões
            {
                if(checkSelfPermission(Manifest.permission.READ_EXTERNAL_STORAGE) == PackageManager.PERMISSION_DENIED)
                {
                    val permission = arrayOf(Manifest.permission.READ_EXTERNAL_STORAGE)
                    requestPermissions(permission, PERMISSION_CODE)
                }
                else
                {
                    pickImgFromGallery()
                }
            }
            else
            {
                pickImgFromGallery()
            }
        }
    }

    companion object
    {
        private val PERMISSION_CODE = 7
        private val IMG_PICK_CODE = 77
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    )
    {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)

        when (requestCode)
        {
            PERMISSION_CODE ->
            {
                if(grantResults.isNotEmpty() && grantResults[0] == PackageManager.PERMISSION_GRANTED)
                {
                    pickImgFromGallery()
                }
                else
                {
                    Toast.makeText(this,"Permissão negada!",Toast.LENGTH_SHORT).show()
                }
            }

        }

    }



    private fun pickImgFromGallery()
    {
        val intentImg = Intent(Intent.ACTION_PICK)
        intentImg.type = "image/*"
        startActivityForResult(intentImg, IMG_PICK_CODE)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if(resultCode == RESULT_OK && requestCode == IMG_PICK_CODE)
        {
            imageBinding.ivImgActivity.setImageURI(data?.data)
        }
    }

}