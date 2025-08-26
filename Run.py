import pyttsx3

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Set voice rate (optional: adjust speed)
engine.setProperty('rate', 170)

# Set volume (0.0 to 1.0)
engine.setProperty('volume', 1.0)

# Your message text
text = """
Dear Vertos,

“At the outset, I request you to bear with me and read this entire message carefully.”

I have spoken to most of the students in the auditorium about the same a few weeks back, but some of the students were not present during that session.
So, I would like to share the same thought again with all of you to help you understand the importance of certain drives which we have been talking about for the past few days, and certain drives which will come up in the upcoming weeks.

The IT industry today is going through a redefining phase. With rapid changes in technology, automation, and global market shifts, companies are being more selective and cautious in hiring.

At such a time, the smartest step is to start where you can, rather than waiting endlessly for the ‘perfect’ job. A job in hand not only gives you income security but also valuable experience, skills, and adaptability—things that matter far more than waiting idle.

Remember, careers are built step by step. Your first job may not define your destination, but it will definitely set you in motion. In a transforming industry, those who begin, learn, and adapt are the ones who grow the fastest.

Why I am writing this message and asking you to take the offers through the DAY1 opportunities is because, in this turbulent scenario, things might not end up the way you and I want them to. So, if we mitigate the risk and secure the best offering from each Day1 company, then you will be in a much safer zone—and can then try to aim higher (it’s a boxing reference: “hit above your weight category”).

Yes, the drives and openings in the industry are getting limited, but let me assure you all that whatever best opportunities are out there—or will come up in the upcoming days in terms of package or domain-specific roles for freshers—your university will leave no stone unturned to bring those opportunities to the campus.

At the same time, I again urge you all not to take these opportunities lightly. Once they are gone, there will be no turning back, and none of us can predict the future in the current scenario—or go back in time to fix things.

Also, if we can showcase to the industry that we have the best talent through results and selections in these companies, we will be able to attract more top product-based companies to campus, since many of them look at these results as benchmarks.

What’s the benchmark? It’s how many students are able to secure the most elite packages offered by Day1 companies.
For example: how many students are selected for 6.75 LPA, 7.5 LPA, or 9.5 LPA in different companies at their respective highest offering.

And for those students who have been asking, “Why was my CV not shortlisted?”
Let me assure and inform you that those of you who secure the highest offering from these companies will, by default, be included in the shortlisting for companies above 10 LPA where shortlisting is done by the university.

Where companies conduct shortlisting and it’s a domain-specific role, but your CV is not shortlisted and you hold one of the highest offers—I commit to you that we will speak on your behalf to request the company to at least allow you to appear for their test round. I cannot guarantee that every company will agree, but I am positive that most of them will, because you will have substance to show with external validation.

Remember, your parents and university will always think in your best interest and guide you to choose wisely.

To end, I am sharing a small real-life inspired story (names changed) to help you understand the scenario:

The Mountaineers

Two friends set out to climb a mountain. Raj was stronger and faster, racing ahead with heavy gear. Aarav was less muscular but observant—he adjusted his pace, conserved energy, and changed routes when the weather shifted.
Halfway up, Raj collapsed from exhaustion, unable to continue. Aarav, though slower, adapted to the mountain’s challenges and reached the summit safely.

Understanding: True strength lies not in brute power, but in adapting wisely to the situation.

Regards

Sami Anand
"""

# Save audio to file
engine.save_to_file(text, "vertos_message.mp3")

# Run the speech engine
engine.runAndWait()

print("Audio saved as vertos_message.mp3")