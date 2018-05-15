import * as React from "react";
import {Header, Title, Button, Left, Right, Body, Text} from "native-base";
import {Image} from "react-native";
import {styles} from "../styles";

interface HeadersProps {
    title: string;
    goBack?(): void;
  }

export class Headers extends React.Component<HeadersProps> {

    render() {
        return (
            <Header style={styles.header}>
                { this.props.goBack ? <Left style={styles.left}>
                    <Button transparent onPress={() => this.props.goBack()}>
                        <Image style={styles.headerImage}
                        source={require("../../imgs/general/back_icon.png")}/>
                    </Button>
                </Left> : null}
                <Body>
                    <Title><Text style={{color: "white" }}>{this.props.title}</Text></Title>
                </Body>
                {/*<Right style={styles.right}>
                    <Button transparent>
                        <Image style={styles.headerImage} source={require("../../imgs/general/contextm_menu_icon.png")}/>
                    </Button>
        </Right>*/}
            </Header>
        );
    }
}