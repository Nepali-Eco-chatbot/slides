---
title: Project Architecture, WP api setup and basic project setup. 
author: Saroj Regmi
date: 2026-06-27
styles:
    slides:
      bg: default
    code:
      style: gruvbox-dark
---

# Things you will learn:
<!-- stop -->
1. Project Architecture; what, why and how.
<!-- stop -->
1. Meta whatsapp api requirements.
<!-- stop -->
1. Meta Api Setup.
<!-- stop -->
1. Webhook server setup.
<!-- stop -->
1. Assignment. 

---
# Project Architecture.
As discussed in the first introductory session we want our project to architecture in such a way that it doesnot brek our bank and stays up for as long as possible.
So, according to the requirements we want.
1. Something that can scale to zero when idle.
1. Something that can server a decent number of clients.
1. For the costing to be zero or ~zero.

<!-- stop -->
## Something that can scale to zero when idle.
To solve this we can opt into serverless architecture, which can effectively scale to zero when needed.
For example:
    Cloudflare workers, Vercel functions, Aws Lamda.

---
## Something that can server a decent number of clients and 
## For the costing to be zero or ~zero.
We will be going with [cloudflare](https://www.cloudflare.com/plans/#developer-platform). But yeah you can absolutely go with [vercel functions](https://vercel.com/docs/functions/usage-and-pricing) as well, They have very generous free tier.

<!-- stop -->
so, what is cpu time?

---
## Meta whatsapp api requirements.
<!-- stop -->
1. Facebook account.
<!-- stop -->
1. Meta account, Ironically you will need to have both.
<!-- stop -->
1. For whatsapp chatbot obviously whatsapp.
<!-- stop -->
1. Meta for developers account.

---

## Meta Api Setup. ( Demo )

---

## Webhook server setup.

---

## Assignment. 
<!-- stop -->
1. See the github. 
