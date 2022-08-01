package br.tales.native_resources.ui

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.CalendarContract
import android.provider.CalendarContract.Events.*
import br.tales.native_resources.databinding.ActivityMainBinding

private lateinit var MainBinding: ActivityMainBinding

class MainActivity : AppCompatActivity()
{
    override fun onCreate(savedInstanceState: Bundle?)
    {
        super.onCreate(savedInstanceState)
        MainBinding = ActivityMainBinding.inflate(layoutInflater)
        val view = MainBinding.root
        setContentView(view)

        setMainActivityListeners()

    }

    private fun setMainActivityListeners()
    {
        MainBinding.btPrincipal.setOnClickListener{

            val intentAgenda = Intent (Intent.ACTION_INSERT)
                .setData(CONTENT_URI)
                .putExtra(TITLE, "Bootcamp Santander")
                .putExtra(EVENT_LOCATION, "Online")
                .putExtra(CalendarContract.EXTRA_EVENT_BEGIN_TIME, System.currentTimeMillis()) //afim de exemplo, horário corrente do sistema
                .putExtra(CalendarContract.EXTRA_EVENT_END_TIME, System.currentTimeMillis() + (60*60*1000)) //tempo em mili secs

            startActivity(intentAgenda)
        }

        MainBinding.btIrContatos.setOnClickListener {
            val intentAbrirContatos = Intent(this, br.tales.native_resources.ui.Contacts::class.java)
        startActivity(intentAbrirContatos)
        }

        MainBinding.btIrImagem.setOnClickListener{
            val intentAbrirImagem = Intent(this, br.tales.native_resources.ui.Image::class.java)
        startActivity(intentAbrirImagem)
        }

        MainBinding.btIrMaps.setOnClickListener{
            val intentAbrirMaps = Intent(this, br.tales.native_resources.ui.MapsActivity::class.java)
            startActivity(intentAbrirMaps)
        }

    }

}