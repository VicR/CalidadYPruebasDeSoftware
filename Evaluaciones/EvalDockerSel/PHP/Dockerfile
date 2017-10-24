FROM tutum/apache-php

RUN apk install --update \
				python \
				python-dev \
				py-pip \
		&& pip install pipenv \
		&& pip install Redist \
		&& pip install Flask \

WORKDIR /app
