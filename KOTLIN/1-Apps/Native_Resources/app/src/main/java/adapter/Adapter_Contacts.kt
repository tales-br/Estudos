package adapter
import android.os.Parcel
import android.os.Parcelable
import android.view.LayoutInflater
import android.view.View
import data.Data_Contacts

import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import br.tales.native_resources.R

class Adapter_Contacts(val contactList: ArrayList<Data_Contacts>): RecyclerView.Adapter<Adapter_Contacts.ViewHolder>()
{

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): Adapter_Contacts.ViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.contact_view, parent, false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: Adapter_Contacts.ViewHolder, position: Int) {
        holder.bindItem(contactList[position])
    }

    override fun getItemCount(): Int {
        return contactList.size
    }

    class ViewHolder (itemView : View) : RecyclerView.ViewHolder(itemView)
    {
        fun bindItem (contacts: Data_Contacts)
        {
            val textoNome = itemView.findViewById<TextView>(R.id.tv_contactView_Nome)
            val textoNumero = itemView.findViewById<TextView>(R.id.tv_contactView_Numero)

            textoNome.text = contacts.name
            textoNumero.text = contacts.phone_number
        }
    }

}