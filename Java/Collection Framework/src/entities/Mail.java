package entities;

import java.time.LocalDateTime;

public class Mail implements Comparable<Mail>{
	private Long mailId;
	private String from;
	private String subject;
	private String body;
	private LocalDateTime recTime;
	
	public Mail() {
		
	}

	public Mail(Long mailId, String from, String subject, String body, LocalDateTime recTime) {
		this.mailId = mailId;
		this.from = from;
		this.subject = subject;
		this.body = body;
		this.recTime = recTime;
	}

	
	public String toString() {
		return "\nId : "+mailId+"\nfrom : "+from+"\nsubject : "+subject+"\nbody : "+body+"\nDate : "+recTime;
	}

	@Override
	public int compareTo(Mail m) {
		return m.recTime.compareTo(this.recTime);
	}
	
}
