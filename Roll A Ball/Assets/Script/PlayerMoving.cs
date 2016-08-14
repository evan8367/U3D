using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerMoving : MonoBehaviour {

	private Rigidbody _rigidbody;
	private int _score;
	public int _forceRatio;
	public Text _scoreText;
	public Text _winText;
	// Use this for initialization
	void Start () {
		_score = 0;
		_rigidbody = this.GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
		float h = Input.GetAxis ("Horizontal");
		float v = Input.GetAxis ("Vertical");

		Vector3 vector = new Vector3 (h, 0, v) * _forceRatio;
		_rigidbody.AddForce (vector);
	}

	private void OnCollisionEnter (Collision collision) {
		string colliderObjectTag = collision.collider.tag;
		if (colliderObjectTag.Equals ("PickUp")) {
		}
	}

	private void OnTriggerEnter(Collider collider) {
		if (collider.tag.Equals ("PickUp")) {
			Destroy (collider.gameObject);
			_score++;
			_scoreText.text = _score.ToString ();

			if (_score == 8) {
				_winText.gameObject.SetActive (true);
			}
		}
	}
}
