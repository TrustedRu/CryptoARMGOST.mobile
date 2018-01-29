import * as React from "react";
import { Container, Header, Title, Content, Footer, FooterTab, Button, Left, Right, Body, Icon, Text } from "native-base";

interface DiagnosticProps {
  navigation: any;
}

export class Diagnostic extends React.Component<DiagnosticProps> {

  static navigationOptions = {
    header: null
  };
  render() {
    return (
      <Container>
        <Header style={{backgroundColor: "#be3817"}}>
        <Left style={{maxWidth: 50}}>
          <Button transparent onPress={() => this.props.navigation.goBack()}>
            <Icon name="home" style={{color: "white"}}/>
          </Button>
        </Left>
        <Body>
          <Title><Text style={{color: "white" }}>Диагностика</Text></Title>
        </Body>
        <Right style={{maxWidth: 50}}/>
      </Header>
      </Container>
    );
  }
}