using UnityEngine;
using System.Collections;

public class Shell : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void OnCollisionEnter(Collision collision) {
		
		this.gameObject.SetActive (false);
	}
}
