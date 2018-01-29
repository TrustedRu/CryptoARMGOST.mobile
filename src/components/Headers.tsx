import * as React from "react";
import { Container, Header, Title, Content, Footer, FooterTab, Button, Left, Right, Body, Icon, Text } from "native-base";
import {Image} from "react-native";

interface HeadersProps {
    title: string;
    goBack(): void;
  }

export class Headers extends React.Component<HeadersProps> {

    onPress() {
        this.props.goBack();
    }

    render() {
        return (
            <Header style={{backgroundColor: "#be3817"}}>
                <Left style={{maxWidth: 50}}>
                <Button transparent onPress={this.onPress.bind(this)}>
                    <Image style={{width: "80%", height: "80%"}} source={require("../../imgs/general/home_icon.png")}/>
                </Button>
                </Left>
                <Body>
                <Title><Text style={{color: "white" }}>{this.props.title}</Text></Title>
                </Body>
                <Right style={{maxWidth: 50}}/>
            </Header>
        );
    }
}