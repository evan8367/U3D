using UnityEngine;
using System.Collections;

public class TankHealth : MonoBehaviour {

	// Use this for initialization
	public int _hp = 100;
	public GameObject _hurt;
	public AudioSource _hurtAudioSource;
	private GameObject _hurtInstant;
	void Start () {
		_hurtAudioSource = this.GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void TakeDamage () {
		_hp -= 20;
		_hurtAudioSource.Play ();
		if (_hp <= 50 && _hp > 0) {
			if(!_hurtInstant)
				_hurtInstant = (GameObject)GameObject.Instantiate (_hurt, this.transform.position + new Vector3(0,1/4,0), this.transform.rotation, this.transform);
		} 
		if (_hp <= 0) {
			if (_hurtInstant) {
				GameObject.Destroy (_hurtInstant);
			}
			GameObject.Destroy (this.gameObject);
		}
	}

}
