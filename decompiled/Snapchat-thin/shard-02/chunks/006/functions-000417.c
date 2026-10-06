/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f7f7f8; end: 101f7ff3f;  */

void FUN_101f7f7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101f81140(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x0001000bfde0(param_4,0,uVar1);
  uVar1 = param_4;
  func_0x0001004575f0();
  func_0x000107c61574(param_4);
  uVar2 = uVar1;
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101f7ff40; end: 101f7ff7b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator isSettingSupportedWithSetting:] */

uint FUN_101f7ff40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000101f7f89c(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101f7ff7c; end: 101f807e3;  */

/* WARNING: Possible PIC construction at 0x000101f805a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8054c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f804a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f801d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f800bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f80100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f803f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f802ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f803f4) */
/* WARNING: Removing unreachable block (ram,0x000101f803f8) */
/* WARNING: Removing unreachable block (ram,0x000101f80104) */
/* WARNING: Removing unreachable block (ram,0x000101f80108) */
/* WARNING: Removing unreachable block (ram,0x000101f80154) */
/* WARNING: Removing unreachable block (ram,0x000101f80158) */
/* WARNING: Removing unreachable block (ram,0x000101f800c0) */
/* WARNING: Removing unreachable block (ram,0x000101f8006c) */
/* WARNING: Removing unreachable block (ram,0x000101f80070) */
/* WARNING: Removing unreachable block (ram,0x000101f80680) */
/* WARNING: Removing unreachable block (ram,0x000101f8008c) */
/* WARNING: Removing unreachable block (ram,0x000101f80244) */
/* WARNING: Removing unreachable block (ram,0x000101f80248) */
/* WARNING: Removing unreachable block (ram,0x000101f80024) */
/* WARNING: Removing unreachable block (ram,0x000101f80028) */
/* WARNING: Removing unreachable block (ram,0x000101f801d4) */
/* WARNING: Removing unreachable block (ram,0x000101f801d8) */
/* WARNING: Removing unreachable block (ram,0x000101f80498) */
/* WARNING: Removing unreachable block (ram,0x000101f8049c) */
/* WARNING: Removing unreachable block (ram,0x000101f80550) */
/* WARNING: Removing unreachable block (ram,0x000101f80634) */
/* WARNING: Removing unreachable block (ram,0x000101f805a8) */
/* WARNING: Removing unreachable block (ram,0x000101f806bc) */
/* WARNING: Removing unreachable block (ram,0x000101f805ac) */
/* WARNING: Removing unreachable block (ram,0x000101f802f0) */
/* WARNING: Removing unreachable block (ram,0x000101f802f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f7ff7c(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar8 = &stack0xffffffffffffffa0;
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    uVar1 = 0;
    goto code_r0x000101f80408;
  case 5:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c418a8();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 6:
    func_0x000107c50680(*(undefined8 *)(unaff_x20 + _DAT_112e470f8),param_2,
                        *(undefined8 *)(unaff_x20 + _DAT_112e470e8));
    pcVar7 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar4 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    goto code_r0x000101f8051c;
  case 7:
    ppuVar3 = &puStack_90;
    ppuVar5 = &puStack_90;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
    puVar4 = &UNK_1104aad18;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,unaff_x20);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x101f80f8c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104aae20;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,unaff_x20);
    uStack_70 = 0x101f80f94;
    puStack_90 = puVar6;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104aae48;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c274(uVar10);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    return;
  case 8:
    uVar1 = 1;
code_r0x000101f80408:
    ppuVar3 = &puStack_90;
    ppuVar5 = &puStack_90;
    puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,1);
    func_0x000100087c34(&puStack_90);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e470f8);
    puVar4 = &UNK_1104aad18;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,unaff_x20);
    puVar6 = &UNK_1104aae80;
    func_0x000107c613fc(&UNK_1104aae80,0x19,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    puVar6[0x18] = uVar1;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x101f80f9c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104aae98;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,unaff_x20);
    uStack_70 = 0x101f80fa8;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104aaec0;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c3fa68(uVar10);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    return;
  case 9:
    func_0x000107c43844(*(undefined8 *)(unaff_x20 + _DAT_112e470f8),param_2,
                        *(undefined8 *)(unaff_x20 + _DAT_112e470e8));
    break;
  case 10:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c4ec1c();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 0xb:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c4ec1c();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 0xc:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c418a8();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 0xd:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) != 0) {
      func_0x000107c4e0dc();
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
  case 0xf:
    break;
  case 0xe:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c4191c();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 0x10:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c4191c();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    goto code_r0x000107c61170;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) == 0) {
      return;
    }
    func_0x000107c4c0f4();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  case 0x1a:
    pcVar7 = *(char **)(unaff_x20 + _DAT_112e470e8);
    func_0x000107c498b0(pcVar7);
    func_0x000107c61180();
    goto code_r0x000101f80664;
  case 0x1b:
    pcVar7 = *(char **)(unaff_x20 + _DAT_112e470e8);
    func_0x000107c498b0(pcVar7);
    func_0x000107c61180();
code_r0x000101f80664:
    func_0x000107c5450c();
    goto code_r0x000107c615e8;
  case 0x1c:
    if (*(long *)(unaff_x20 + _DAT_112e470f0) != 0) {
      func_0x000107c3e4e0();
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
    pcVar7 = "publishState()";
    func_0x0001000c10c0("publishState()");
    func_0x000107c61180();
    puVar4 = &UNK_1104aad18;
    func_0x000107c613fc(&UNK_1104aad18,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
code_r0x000101f8051c:
    func_0x000107c60bc4(&stack0xffffffffffffffa0);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar7);
    func_0x000107c60bd0(puVar8);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar7);
    return;
  case 0x1d:
    lVar9 = unaff_x20 + _DAT_112e47110;
    func_0x000107c61618();
    if (lVar9 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112e470f0) != 0) {
        func_0x000107c3e4e0(*(long *)(unaff_x20 + _DAT_112e470f0));
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
      }
      goto code_r0x000107c61170;
    }
  default:
    goto LAB_101f806a8;
  }
  func_0x0001002a64a8(&stack0xffffffffffffffa0);
LAB_101f806a8:
  return;
}



/* Entry: 101f807e4; end: 101f80813; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator handleActionWithAction:] */

void FUN_101f807e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101f7ff7c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f80814; end: 101f8090f;  */

void FUN_101f80814(undefined4 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "handleToggleSetting(withAction:isOn:)";
  func_0x0001000c10c0("handleToggleSetting(withAction:isOn:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104aad18;
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104aad40;
  func_0x000107c613fc(&UNK_1104aad40,0x1d,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined4 *)(puVar3 + 0x18) = param_1;
  puVar3[0x1c] = param_2;
  uStack_50 = 0x101f80f50;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104aad58;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101f80910; end: 101f80d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f80910(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        func_0x000107c55708(*(undefined8 *)(param_1 + _DAT_112e47138));
        lVar1 = *(long *)(param_1 + _DAT_112e470f0);
        if (lVar1 == 0) goto LAB_101f80bec;
        func_0x000107c4b8f8();
        func_0x000107c61180();
        lVar5 = lVar1;
        func_0x000107c5c734();
      }
      else {
        if (param_2 != 1) goto LAB_101f80bec;
        func_0x000107c55714(*(undefined8 *)(param_1 + _DAT_112e47138));
        lVar1 = *(long *)(param_1 + _DAT_112e470f0);
        if (lVar1 == 0) goto LAB_101f80bec;
        func_0x000107c4c108();
        func_0x000107c61180();
        lVar5 = lVar1;
        func_0x000107c5c734();
      }
    }
    else if (param_2 == 2) {
      func_0x000107c557d0(*(undefined8 *)(param_1 + _DAT_112e47138));
      lVar1 = *(long *)(param_1 + _DAT_112e470f0);
      if (lVar1 == 0) goto LAB_101f80bec;
      func_0x000107c4f82c();
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5c734();
    }
    else {
      if (param_2 != 3) goto LAB_101f80bec;
      func_0x000107c55600(*(undefined8 *)(param_1 + _DAT_112e47138));
      lVar1 = *(long *)(param_1 + _DAT_112e470f0);
      if (lVar1 == 0) goto LAB_101f80bec;
      func_0x000107c418a0();
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5c734();
    }
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar5 == 0) goto LAB_101f80bec;
    func_0x000107c5d600(lVar5);
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      func_0x000107c55758(*(undefined8 *)(param_1 + _DAT_112e47138));
      lVar1 = *(long *)(param_1 + _DAT_112e470f0);
      if (lVar1 == 0) goto LAB_101f80bec;
      func_0x000107c4191c();
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 == 0) goto LAB_101f80bec;
      func_0x000107c42644(lVar5);
    }
    else {
      if (param_2 != 5) goto LAB_101f80bec;
      func_0x000107c55574(*(undefined8 *)(param_1 + _DAT_112e47138));
      lVar1 = *(long *)(param_1 + _DAT_112e470f0);
      if (lVar1 == 0) goto LAB_101f80bec;
      func_0x000107c4191c();
      func_0x000107c61180();
      lVar5 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 == 0) goto LAB_101f80bec;
      func_0x000107c4257c(lVar5);
    }
  }
  else if (param_2 == 6) {
    func_0x000107c5555c(*(undefined8 *)(param_1 + _DAT_112e47138));
    lVar1 = *(long *)(param_1 + _DAT_112e470f0);
    if (lVar1 == 0) goto LAB_101f80bec;
    func_0x000107c3ec88();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar5 == 0) goto LAB_101f80bec;
    func_0x000107c52a58(lVar5);
  }
  else {
    if (param_2 != 7) goto LAB_101f80bec;
    func_0x000107c55748(*(undefined8 *)(param_1 + _DAT_112e47138));
    lVar1 = *(long *)(param_1 + _DAT_112e470f0);
    if (lVar1 == 0) goto LAB_101f80bec;
    func_0x000107c3e3fc();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar5 == 0) goto LAB_101f80bec;
    func_0x000107c4d304(lVar5);
  }
  func_0x000107c615e8(lVar5);
LAB_101f80bec:
  pcVar2 = "publishState()";
  func_0x0001000c10c0("publishState()");
  func_0x000107c61180();
  puVar3 = &UNK_1104aad18;
  func_0x000107c613fc(&UNK_1104aad18,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  uStack_58 = 0x101f80f7c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1104aad80;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 101f80d0c; end: 101f80d4f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator handleToggleSettingWithAction:isOn:] */

void FUN_101f80d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_101f80814(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f80d50; end: 101f80ef3;  */

undefined8 FUN_101f80d50(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  lVar2 = param_1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90);
    func_0x000107c615e8(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar3 = 0;
    FUN_101f81140(0,0x112e469c8,&PTR_PTR_1126c19c0);
    ppuVar4 = &puStack_98;
    puVar6 = &uStack_70;
    func_0x000107c6147c(ppuVar4,puVar6,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)ppuVar4 & 1) != 0) {
      func_0x000102991150(0);
      puVar5 = puStack_98;
      func_0x00010298f890(puStack_98);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
      func_0x000107c59e18(unaff_x20);
      func_0x000107c61170(puVar5);
      uVar3 = 0;
      puVar5 = puStack_98;
      func_0x00010298f960(puStack_98,0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
      func_0x000107c59a8c(unaff_x20);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puStack_98);
      puVar1 = puVar5;
    }
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
  }
  return unaff_x20;
}



/* Entry: 101f80ef4; end: 101f80f13;  */

void FUN_101f80ef4(void)

{
  func_0x000107c61168(&PTR_PTR_11280e7a8);
  return;
}



/* Entry: 101f80f14; end: 101f8102f;  */

void FUN_101f80f14(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104aacb8;
  if (lRam0000000112e47178 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e47178 = param_1;
  }
  return;
}



/* Entry: 101f81030; end: 101f81067;  */

void FUN_101f81030(void)

{
  FUN_101f7de68();
  return;
}



/* Entry: 101f81068; end: 101f8107f;  */

void FUN_101f81068(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104ab290;
  func_0x000107c613fc(&UNK_1104ab290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101f81078;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_101f81080;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101f81494;
  puStack_58 = &UNK_1104ab2a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x72,0xea,0x21,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f7c910);
  (*pcVar1)();
}



/* Entry: 101f81080; end: 101f8109f;  */

void FUN_101f81080(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f810a0; end: 101f810bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f810a0(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar5);
      func_0x000107c3ebcc(param_1);
      func_0x000107c557d0(uVar5);
      func_0x000107c61170(uVar5);
      pcVar2 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar3 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar1);
      uStack_58 = 0x101f81464;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab370;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 101f810c0; end: 101f810d7;  */

void FUN_101f810c0(void)

{
  FUN_101f7da88();
  return;
}



/* Entry: 101f810d8; end: 101f810df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f810d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c43844(*(undefined8 *)(lVar1 + _DAT_112e470f8));
    uStack_48 = 1;
    uStack_40 = 1;
    func_0x0001002a64a8(&uStack_48);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101f810e0; end: 101f81117;  */

void FUN_101f810e0(void)

{
  FUN_101f7de68();
  return;
}



/* Entry: 101f81118; end: 101f8113f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81118(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112e47138);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar5);
      func_0x000107c3ebcc(param_1);
      func_0x000107c55574(uVar5);
      func_0x000107c61170(uVar5);
      pcVar2 = "publishState()";
      func_0x0001000c10c0("publishState()");
      func_0x000107c61180();
      puVar3 = &UNK_1104aad18;
      func_0x000107c613fc(&UNK_1104aad18,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar1);
      uStack_58 = 0x101f81474;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104ab780;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 101f81140; end: 101f8117f;  */

void FUN_101f81140(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101f81180; end: 101f811a7;  */

void FUN_101f81180(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ab9e8;
  if (lRam0000000112e471a0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e471a0 = param_1;
  }
  return;
}



/* Entry: 101f811a8; end: 101f811eb;  */

void FUN_101f811a8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101f811ec; end: 101f8143f;  */

void FUN_101f811ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f81440; end: 101f81443; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator spectaclesDeviceDidUpdateDeviceName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81440(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112e470e8)) {
    return;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101f7aee4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f81444; end: 101f81497; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl25DeviceSettingsCoordinator spectaclesDeviceDidUpdateState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81444(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112e470e8)) {
    return;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101f7aee4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f81498; end: 101f81517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f81498(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e471c8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e471c8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c30a40();
    func_0x000107c61180();
    func_0x000107c53224();
    func_0x000107c54b74(0x3ff0000000000000,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 101f81518; end: 101f816d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f81518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar2 = &stack0xffffffffffffffb0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112e471c0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e471c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e471b0) = param_2;
  func_0x000101f81d0c();
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c49460();
  *(long *)(unaff_x20 + _DAT_112e471b8) = lVar1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithRootViewController__1125edab8,lVar1);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c53dec();
  FUN_101f81498();
  func_0x000107c5a048(puVar2);
  func_0x000107c615e8(puVar3);
  func_0x000107c30a48(4);
  func_0x000107c5677c(puVar2);
  puVar3 = puVar2;
  func_0x000107c61170();
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112e471c8);
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  uVar4 = 0;
  FUN_101f81da4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(param_1);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c497d0(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 101f816d8; end: 101f8172b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101f816d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112e471c0) = 1;
  *(undefined8 *)(param_1 + _DAT_112e471c8) = 0;
  func_0x000107c61464(param_1,lVar1,0x28,7);
  return 0;
}



/* Entry: 101f8172c; end: 101f817bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8172c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c614f0();
  lVar1 = _DAT_11307b2b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e471b0);
  func_0x000107c61428(lVar2 + _DAT_11307b2b0,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5b700();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f817c0; end: 101f81863; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f817c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_11307b2b0;
  lVar3 = *(long *)(param_1 + _DAT_112e471b0);
  func_0x000107c61428(lVar3 + _DAT_11307b2b0,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar3 != 0) {
    func_0x000107c5b700(lVar3);
    func_0x000107c615e8(lVar3);
  }
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f81864; end: 101f818ab; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81864(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e471b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e471b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e471c8));
  return;
}



/* Entry: 101f818ac; end: 101f818d7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController initWithNavigationBarClass:toolbarClass:] */

void FUN_101f818ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeviceSettingsNavController",0x42,
                      "init(navigationBarClass:toolbarClass:)",0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f818d8);
  (*pcVar1)();
}



/* Entry: 101f818d8; end: 101f81903; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController initWithRootViewController:] */

void FUN_101f818d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeviceSettingsNavController",0x42,
                      "init(rootViewController:)",0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f81904);
  (*pcVar1)();
}



/* Entry: 101f81904; end: 101f8194f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController initWithNibName:bundle:] */

void FUN_101f81904(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeviceSettingsNavController",0x42,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f81930);
  (*pcVar1)();
}



/* Entry: 101f81950; end: 101f81a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101f81950(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112e471c0) == '\x01') {
    FUN_101f81da4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e471b8);
    uVar2 = uVar3;
    func_0x000107c5dbdc(uVar3);
    func_0x000107c61180();
    func_0x000107c60118(param_3,uVar2);
    func_0x000107c61170(uVar2);
    if ((param_3 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      func_0x000107c5dbdc(uVar3);
      func_0x000107c61180();
      uVar2 = uVar3;
      func_0x000107c3f42c(param_1,param_2);
      func_0x000107c61170(uVar3);
      uVar1 = (uint)uVar2 ^ 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 101f81a40; end: 101f81ab3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_101f81a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_101f81950(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 101f81ab4; end: 101f81abf; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController cardTransitionWillBeginWithView:] */

void FUN_101f81ab4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 101f81ac0; end: 101f81ac3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController cardToExpandTransition] */

void FUN_101f81ac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101f81ac4; end: 101f81b5b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl27DeviceSettingsNavController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81ac4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307b2b0;
  if (param_4 == 1) {
    lVar2 = *(long *)(param_1 + _DAT_112e471b0);
    func_0x000107c61428(lVar2 + _DAT_11307b2b0,auStack_48,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61174(param_1);
      func_0x000107c5b700(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 101f81b5c; end: 101f81b9f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl33DeviceSettingsValdiViewController initWithValdiView:] */

void FUN_101f81b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 101f81ba0; end: 101f81c57; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl33DeviceSettingsValdiViewController initWithNibName:bundle:] */

undefined1 * FUN_101f81ba0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 101f81c58; end: 101f81cd7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl33DeviceSettingsValdiViewController initWithCoder:] */

undefined1 * FUN_101f81c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101f81cd8; end: 101f81d2b;  */

void FUN_101f81cd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f81d2c; end: 101f81d6f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl33DeviceSettingsValdiViewController defaultProjectNameV2] */

void FUN_101f81d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001040704dc();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101f81d70; end: 101f81da3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl33DeviceSettingsValdiViewController defaultSubProjectName] */

void FUN_101f81d70(void)

{
  func_0x000107c5fadc(0x5320656369766544,0xef73676e69747465);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f81da4; end: 101f81de3;  */

void FUN_101f81da4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101f81de4; end: 101f81e43; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl26DeveloperModeBridgeManager init] */

void FUN_101f81de4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeveloperModeBridgeManager",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f81e10);
  (*pcVar1)();
}



/* Entry: 101f81e44; end: 101f81e53; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl26DeveloperModeBridgeManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e47220));
  return;
}



/* Entry: 101f81e54; end: 101f81e73;  */

void FUN_101f81e54(void)

{
  func_0x000107c61168(&PTR_PTR_11280ea78);
  return;
}



/* Entry: 101f81e74; end: 101f81e83; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl26DeveloperModeBridgeManager setDeveloperKeyWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c164f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e47220),PTR_s_setAdbKey__112636de0);
  return;
}



/* Entry: 101f81e84; end: 101f81e8f; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl26DeveloperModeBridgeManager pushToValdiMarshaller:] */

void FUN_101f81e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a875dc(param_3,param_1);
  func_0x000105a875c0();
  func_0x000105a875b8();
  func_0x000105a8752c();
  func_0x000105a8756c();
  return;
}



/* Entry: 101f81e90; end: 101f81eef; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager init] */

void FUN_101f81e90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.DeviceNameManager",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f81ebc);
  (*pcVar1)();
}



/* Entry: 101f81ef0; end: 101f81f27; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f81f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f81f10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e47250));
  return;
}



/* Entry: 101f81f28; end: 101f81f47;  */

void FUN_101f81f28(void)

{
  func_0x000107c61168(&PTR_PTR_11280eb38);
  return;
}



/* Entry: 101f81f48; end: 101f81fbb; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager deviceName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f81f48(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112e47250);
  func_0x000107c61174();
  func_0x000107c4d3e4();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c42140();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f81fbc);
  (*pcVar1)();
}



/* Entry: 101f81fbc; end: 101f820db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101f81fbc(ulong param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e47250);
  lVar7 = param_2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c42140();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    if (param_1 == uVar3 && param_2 == lVar7) {
      func_0x000107c6142c(lVar7);
      uVar2 = 1;
    }
    else {
      uVar4 = param_1;
      func_0x000107c605b8(param_1,param_2,uVar3,lVar7,0);
      func_0x000107c6142c(lVar7);
      if ((uVar4 & 1) == 0) {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e47258);
        func_0x000107c4c25c(uVar5);
        func_0x000107c61180();
        func_0x000107c5fadc(param_1,param_2);
        uVar6 = uVar5;
        func_0x000107c49c5c(uVar5);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(param_1);
        uVar2 = (uint)uVar6 ^ 1;
      }
      else {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f820dc);
  (*pcVar1)();
}



/* Entry: 101f820dc; end: 101f82143; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager isDeviceNameAvailableWithName:] */

uint FUN_101f820dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101f81fbc(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101f82144; end: 101f82167; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager nameDeviceWithName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82144(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e47258),
             PTR_s_renameDevice_inputNameWithoutEmo_112629768,
             *(undefined8 *)(param_1 + _DAT_112e47250),param_3);
  return;
}



/* Entry: 101f82168; end: 101f82173; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl17DeviceNameManager pushToValdiMarshaller:] */

void FUN_101f82168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a875dc(param_3,param_1);
  func_0x000105a875c0();
  func_0x000105a875b8();
  func_0x000105a8752c();
  func_0x000105a8756c();
  return;
}



/* Entry: 101f82174; end: 101f8227f;  */

undefined * FUN_101f82174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c5047c();
  func_0x000107c4e6d4();
  lVar1 = unaff_x20;
  func_0x000107c4b94c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c4223c();
    func_0x000107c61170(lVar1);
  }
  puVar2 = PTR_PTR_1126a9b80;
  func_0x000107c610f8(PTR_PTR_1126a9b80);
  func_0x000107c46f64(param_1);
  lVar1 = unaff_x20;
  func_0x000107c5d9cc();
  if ((int)lVar1 != 0) {
    func_0x000107c5ca20();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c49820();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5609c(puVar2,param_3,puVar3);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(puVar3);
    }
  }
  return puVar2;
}



/* Entry: 101f82280; end: 101f824ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
  func_0x000107c5218c(uVar9,param_2,2);
  uVar2 = uVar9;
  func_0x000107c41950(uVar9);
  func_0x000107c61180();
  puVar7 = &UNK_1104aba50;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101f844fc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101f846b0;
  puStack_78 = &UNK_1104abc70;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = uVar9;
  func_0x000107c5a318(uVar9);
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_70 = 0x101f84504;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101f846b4;
  puStack_78 = &UNK_1104abc98;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c41958(uVar9);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  uStack_70 = 0x101f8450c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101f846b8;
  puStack_78 = &UNK_1104abcc0;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = uVar9;
  func_0x000107c5c320(uVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f82500; end: 101f825db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82500(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "refreshSettings()";
  func_0x0001000c10c0("refreshSettings()");
  func_0x000107c61180();
  puVar2 = &UNK_1104aba50;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_101f844f4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104abc48;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  func_0x000107c50444(*(undefined8 *)(unaff_x20 + _DAT_112e47290));
  return;
}



/* Entry: 101f825dc; end: 101f8279f;  */

void FUN_101f825dc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_1104abed8;
    func_0x000107c613fc(&UNK_1104abed8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_1104abf00;
    func_0x000107c613fc(&UNK_1104abf00,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101f845fc;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x101f846ac;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101f846bc;
    puStack_90 = &UNK_1104abf18;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1104abf50;
    func_0x000107c613fc(&UNK_1104abf50,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_1104abf78;
    func_0x000107c613fc(&UNK_1104abf78,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x101f84604;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_88 = FUN_101f8460c;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101f828a4;
    puStack_90 = &UNK_1104abf90;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4c6f4(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f827a0; end: 101f82817;  */

/* WARNING: Possible PIC construction at 0x000101f827e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f827fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f827e4) */
/* WARNING: Removing unreachable block (ram,0x000101f82800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f827a0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_101f82174();
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e472f0);
    *(long *)(param_2 + _DAT_112e472f0) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 101f82818; end: 101f828a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82818(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2 - 1U < 2) {
    uStack_28 = 0;
    func_0x0001002a64a8(&uStack_28);
    FUN_101f82500();
  }
  else if (param_2 == 3) {
    uStack_24 = 0;
    func_0x0001002a64a8(&uStack_24);
    puVar1 = (undefined8 *)(param_3 + _DAT_112e472e0);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 101f828a4; end: 101f828e3;  */

void FUN_101f828a4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101f828e4; end: 101f82aa7;  */

void FUN_101f828e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_1104abde8;
    func_0x000107c613fc(&UNK_1104abde8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    puVar3 = &UNK_1104abe10;
    func_0x000107c613fc(&UNK_1104abe10,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101f84580;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_101f84588;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x101f846c0;
    puStack_90 = &UNK_1104abe28;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1104abe60;
    func_0x000107c613fc(&UNK_1104abe60,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    puVar5 = &UNK_1104abe88;
    func_0x000107c613fc(&UNK_1104abe88,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x101f845a8;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_88 = (code *)0x101f846a8;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101e77518;
    puStack_90 = &UNK_1104abea0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c4c6f4(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f82aa8; end: 101f82b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82aa8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((param_1 == 0) || (func_0x000107c50650(), param_1 == 2)) {
    uStack_34 = 0;
    puVar3 = &uStack_34;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 0) {
        lVar2 = ((undefined8 *)(param_2 + _DAT_112e472e0))[1];
        if (lVar2 != 0) {
          puVar1 = (undefined8 *)(param_2 + _DAT_112e472d8);
          uVar4 = puVar1[1];
          *puVar1 = *(undefined8 *)(param_2 + _DAT_112e472e0);
          puVar1[1] = lVar2;
          func_0x000107c61434();
          func_0x000107c6142c(uVar4);
        }
      }
      goto LAB_101f82b4c;
    }
    uStack_38 = 1;
    puVar3 = &uStack_38;
  }
  func_0x0001002a64a8(puVar3);
LAB_101f82b4c:
  puVar1 = (undefined8 *)(param_2 + _DAT_112e472e0);
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101f82b74; end: 101f82db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82b74(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  
  ppuVar5 = &puStack_b0;
  ppuVar7 = &puStack_b0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_79 = 0;
    puVar3 = &UNK_1104abcf8;
    func_0x000107c613fc(&UNK_1104abcf8,0x20,7);
    *(undefined1 **)(puVar3 + 0x10) = &uStack_79;
    *(long *)(puVar3 + 0x18) = param_2;
    puVar4 = &UNK_1104abd20;
    func_0x000107c613fc(&UNK_1104abd20,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x101f84514;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = FUN_101f8451c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_100e2fcec;
    puStack_98 = &UNK_1104abd38;
    puStack_88 = puVar4;
    func_0x000107c60bc4(&puStack_b0);
    puVar4 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1104abd70;
    func_0x000107c613fc(&UNK_1104abd70,0x18,7);
    *(long *)(puVar4 + 0x10) = param_2;
    puVar6 = &UNK_1104abd98;
    func_0x000107c613fc(&UNK_1104abd98,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x101f8453c;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_90 = (code *)0x101f846a4;
    puStack_b0 = puVar2;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_101e77518;
    puStack_98 = &UNK_1104abdb0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(&puStack_b0);
    puVar6 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c4c6f4(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    uVar8 = *(undefined8 *)(param_2 + _DAT_112e472c0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(uVar8);
    func_0x000107c45a48(puVar6);
    func_0x000107c4d664(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar6);
    puVar1 = (undefined8 *)(param_2 + _DAT_112e472e8);
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar8);
  }
  return;
}



/* Entry: 101f82db4; end: 101f82e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82db4(ulong param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 & 1) != 0) {
    *param_2 = 1;
    lVar2 = ((undefined8 *)(param_3 + _DAT_112e472e8))[1];
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(param_3 + _DAT_112e472d8);
      uVar3 = puVar1[1];
      *puVar1 = *(undefined8 *)(param_3 + _DAT_112e472e8);
      puVar1[1] = lVar2;
      func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 101f82e10; end: 101f82e5b;  */

void FUN_101f82e10(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101f82e5c; end: 101f82ebb; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager init] */

void FUN_101f82e5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceSettingsComposerImpl.SecurityBridgeManager",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f82e88);
  (*pcVar1)();
}



/* Entry: 101f82ebc; end: 101f82fc3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f82ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f82f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f82f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f82fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f82f60) */
/* WARNING: Removing unreachable block (ram,0x000101f82f30) */
/* WARNING: Removing unreachable block (ram,0x000101f82edc) */
/* WARNING: Removing unreachable block (ram,0x000101f82fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47288));
  return;
}



/* Entry: 101f82fc4; end: 101f82fe3;  */

void FUN_101f82fc4(void)

{
  func_0x000107c61168(&PTR_PTR_11280ec00);
  return;
}



/* Entry: 101f82fe4; end: 101f83107;  */

/* WARNING: Possible PIC construction at 0x000101f83068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f830bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8306c) */
/* WARNING: Removing unreachable block (ram,0x000101f830c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f82fe4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e472f8);
  if (param_1 == 0) {
    if (lVar3 != 0) {
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f83108);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c48af4(puVar2);
  }
  else {
    if (lVar3 == 0) {
      return;
    }
    FUN_101f844b4(0,0x112e47328,&PTR_PTR_1126c1ff0);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(param_1);
    func_0x000107c60118();
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101f83108; end: 101f83197; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager numericEntryView:didReachPincodeLengthWithPinCode:] */

void FUN_101f83108(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101f82fe4(param_3,param_4,param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101f83198; end: 101f831a3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager pushToValdiMarshaller:] */

void FUN_101f83198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105a875dc(param_3,param_1);
  func_0x000105a875c0();
  func_0x000105a875b8();
  func_0x000105a8752c();
  func_0x000105a8756c();
  return;
}



/* Entry: 101f831a4; end: 101f831b3; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager isProximityUnlockSupported] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101f831a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e472a8);
}



/* Entry: 101f831b4; end: 101f831db; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager securitySettingsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f831b4(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e472b8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f831dc; end: 101f83213;  */

void FUN_101f831dc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar1;
  return;
}



/* Entry: 101f83214; end: 101f832bb; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager alertsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83214(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  FUN_101f844b4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  pcVar2 = FUN_101f831dc;
  func_0x0001000bfde0(FUN_101f831dc,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  pcVar2 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 101f832bc; end: 101f83467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f832bc(byte param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "setPasscodeRequiredWithIsRequired(_:)";
  func_0x0001000c10c0("setPasscodeRequiredWithIsRequired(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104aba50;
  func_0x000107c613fc(&UNK_1104aba50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104abc08;
  func_0x000107c613fc(&UNK_1104abc08,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  uStack_50 = 0x101f844a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104abc20;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  if ((param_1 & 1) == 0) {
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112e472d8))[1];
    if (lVar5 == 0) {
      puStack_70 = (undefined *)((ulong)puStack_70 & 0xffffffff00000000);
      func_0x0001002a64a8(&puStack_70);
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e472d8);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112e472a0))[1];
      if (lVar6 == 0) {
        func_0x000107c61434(lVar5);
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e472a0);
        func_0x000107c61434(lVar5);
        func_0x000107c5fadc(uVar9,lVar6);
      }
      func_0x000107c5fadc(uVar8,lVar5);
      func_0x000107c6142c(lVar5);
      func_0x000107c5d0c0(uVar7);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 101f83468; end: 101f834e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83468(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c55784(*(undefined8 *)(param_1 + _DAT_112e472f0));
    func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112e472b8));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f834e8; end: 101f83517; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager setPasscodeRequiredWithIsRequired:] */

void FUN_101f834e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101f832bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f83518; end: 101f836c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83518(byte param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112e472d8))[1];
  if (lVar5 != 0) {
    lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112e472a0))[1];
    if (lVar8 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e472d8);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e472a0);
      func_0x000107c61434(lVar5);
      pcVar1 = "setPhoneProximityEnabledWithIsEnabled(_:)";
      func_0x0001000c10c0("setPhoneProximityEnabledWithIsEnabled(_:)");
      func_0x000107c61180();
      puVar2 = &UNK_1104aba50;
      func_0x000107c613fc(&UNK_1104aba50,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1104abbb8;
      func_0x000107c613fc(&UNK_1104abbb8,0x19,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = param_1 & 1;
      uStack_60 = 0x101f8449c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1104abbd0;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(pcVar1);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
      func_0x000107c5fadc(uVar9,lVar8);
      func_0x000107c5fadc(uVar7,lVar5);
      func_0x000107c6142c(lVar5);
      func_0x000107c5736c(uVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar7);
      return;
    }
  }
  puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffff00000000);
  func_0x0001002a64a8(&puStack_80);
  return;
}



/* Entry: 101f836c4; end: 101f83743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f836c4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c557cc(*(undefined8 *)(param_1 + _DAT_112e472f0));
    func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112e472b8));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101f83744; end: 101f83773; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager setPhoneProximityEnabledWithIsEnabled:] */

void FUN_101f83744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101f83518(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f83774; end: 101f8399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83774(double param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112e472d8))[1];
  if (lVar6 != 0) {
    lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112e472a0))[1];
    if (lVar8 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e472d8);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e472a0);
      func_0x000107c61434(lVar6);
      pcVar2 = "setLockoutTimeSettingWithSeconds(_:)";
      func_0x0001000c10c0("setLockoutTimeSettingWithSeconds(_:)");
      func_0x000107c61180();
      puVar3 = &UNK_1104aba50;
      func_0x000107c613fc(&UNK_1104aba50,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1104abb68;
      func_0x000107c613fc(&UNK_1104abb68,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(double *)(puVar4 + 0x18) = param_1;
      uStack_70 = 0x101f84490;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1104abb80;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar2);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f83994);
        (*pcVar1)();
      }
      if (-9.223372036854778e+18 < param_1) {
        if (param_1 < 9.223372036854776e+18) {
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c5fadc(uVar10,lVar8);
          func_0x000107c5fadc(uVar9,lVar6);
          func_0x000107c6142c(lVar6);
          func_0x000107c5608c(uVar7);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar9);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8399c);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f83998);
      (*pcVar1)();
    }
  }
  puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffff00000000);
  func_0x0001002a64a8(&puStack_90);
  return;
}



/* Entry: 101f8399c; end: 101f83a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8399c(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c560a0(param_1,*(undefined8 *)(param_2 + _DAT_112e472f0));
    func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112e472b8));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f83a24; end: 101f83a5b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager setLockoutTimeSettingWithSeconds:] */

void FUN_101f83a24(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101f83774(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101f83a5c; end: 101f83af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101f83a5c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e47290);
  uVar1 = uVar3;
  func_0x000107c4194c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d9cc();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x000107c4194c();
    func_0x000107c61180();
    uVar1 = uVar3;
    func_0x000107c5047c();
    func_0x000107c61170(uVar3);
    if ((int)uVar1 != 0) {
      return *(long *)(unaff_x20 + _DAT_112e472d8 + 8) == 0;
    }
  }
  return false;
}



/* Entry: 101f83af8; end: 101f83b2b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager isPasscodeVerificationRequired] */

uint FUN_101f83af8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f83a5c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101f83b2c; end: 101f83b43; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager unpersistVerifiedPasscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83b2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e472d8);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101f83b44; end: 101f83c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83b44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e47290);
    func_0x000107c4194c();
    func_0x000107c61180();
    uVar1 = uVar2;
    FUN_101f82174();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e472f0);
    *(undefined8 *)(param_1 + _DAT_112e472f0) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112e472b8));
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101f83c0c; end: 101f83c33; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager refreshSettings] */

void FUN_101f83c0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f82500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f83c34; end: 101f83c5b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager verifyPasscodeResultObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83c34(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e472c0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f83c5c; end: 101f83ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83c5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e472d8);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e472e8);
    uVar2 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_2);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5dd0c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f83cec; end: 101f83d4b; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager verifyPasscodeWithPasscode:shouldPersist:] */

void FUN_101f83cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101f83c5c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101f83d4c; end: 101f83e8b;  */

/* WARNING: Possible PIC construction at 0x000101f83e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f83e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83d4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e472d8);
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e472a0))[1];
    if (lVar3 == 0) {
      func_0x000107c61434(param_2);
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e472a0);
      func_0x000107c61434(param_2);
      func_0x000107c5fadc(uVar2,lVar3);
    }
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5d0c8(uVar4);
  }
  else {
    uVar2 = *puVar1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e472e0);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47290);
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(uVar2,lVar3);
    func_0x000107c6142c(lVar3);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c3f798(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101f83e8c; end: 101f83ee7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager setPasscodeWithPasscode:] */

void FUN_101f83e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101f83d4c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101f83ee8; end: 101f83ef7; -[_TtC38SCSpectaclesDeviceSettingsComposerImpl21SecurityBridgeManager logPresentPasscodeOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f83ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112e47290),PTR_s_logPasscodeOptionPresentation_112608a28
            );
  return;
}


