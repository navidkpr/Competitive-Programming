# -*- coding: utf-8 -*-
# Generated by Django 1.11.17 on 2019-02-16 19:04
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Medicine',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=50)),
                ('timeGap', models.IntegerField()),
                ('number', models.CharField(max_length=20)),
            ],
        ),
    ]
