/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ee0294; end: 100ee029b;  */

void FUN_100ee0294(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100ee02d8(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100ee029c; end: 100ee02d7;  */

undefined8 FUN_100ee029c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ee02d8; end: 100ee080b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee02d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  lVar5 = 0;
  puStack_70 = puVar11;
  func_0x000107c5eea4();
  lStack_68 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar6 = 0;
  func_0x000100ee69c0();
  func_0x000107c5314c();
  func_0x000107c55704();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100ee080c);
    (*pcVar4)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar12);
  uVar15 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  lVar12 = param_1[3];
  puStack_78 = puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + _DAT_112d48ec8) == '\x01') {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d48e88);
    uVar7 = uVar13;
    func_0x000107c61174(uVar13);
    FUN_100ee2778(uVar13,uVar15,uVar3,uVar2,lVar12);
    func_0x000107c61170(uVar7);
    lVar12 = lStack_68;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d48e90);
    uVar7 = uVar13;
    lStack_80 = lVar5;
    func_0x000107c61174(uVar13);
    uStack_88 = uVar2;
    func_0x000100ee28b8(uVar13,uVar15,uVar3,uVar2,lVar12);
    func_0x000107c61170(uVar7);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d48e98);
    uVar15 = param_1[4];
    uVar3 = param_1[5];
    uVar2 = param_1[6];
    lVar5 = param_1[7];
    uVar7 = uVar13;
    func_0x000107c61174(uVar13);
    func_0x000100ee28b8(uVar13,uVar15,uVar3,uVar2,lVar5);
    func_0x000107c61170(uVar7);
    lVar14 = lVar12;
    if (lVar12 == 0) {
      func_0x000107c61434(lVar5);
      lVar14 = lVar5;
      uStack_88 = uVar2;
    }
    lVar5 = lStack_80;
    lVar16 = _DAT_112d48ea0;
    lVar8 = *(long *)(unaff_x20 + _DAT_112d48ea0);
    if (lVar8 == 0) {
      func_0x000107c61434(lVar12);
      lVar12 = lStack_68;
      lVar5 = lStack_80;
    }
    else {
      if (lVar14 == 0) {
        func_0x000107c61174();
        func_0x000107c61434(lVar12);
        uVar15 = 0;
      }
      else {
        func_0x000107c61174();
        func_0x000107c61434(lVar14);
        func_0x000107c61434(lVar12);
        uVar15 = uStack_88;
        func_0x000107c5fadc(uStack_88,lVar14);
        func_0x000107c6142c(lVar14);
      }
      func_0x000107c52120(lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar15);
      lVar12 = lStack_68;
      if (*(long *)(unaff_x20 + lVar16) != 0) {
        func_0x000107c59840();
        lVar16 = *(long *)(unaff_x20 + lVar16);
        if (lVar16 != 0) {
          if (lVar14 == 0) {
            func_0x000107c61174(lVar16);
          }
          else {
            func_0x000107c61174(lVar16);
            func_0x000107c6142c(lVar14);
          }
          func_0x000107c550d8(lVar16);
          func_0x000107c61170(lVar16);
          goto LAB_100ee05c0;
        }
      }
    }
    func_0x000107c6142c(lVar14);
  }
LAB_100ee05c0:
  puVar10 = puStack_70;
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar6 + 0x20),puStack_70);
  puVar9 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar5);
  puVar11 = puStack_78;
  if ((int)puVar9 == 1) {
    func_0x0001000d1dcc(puVar10);
    puVar11 = puVar10;
  }
  else {
    puVar9 = puStack_78;
    (**(code **)(lVar12 + 0x20))(puStack_78,puVar10,lVar5);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d48ed8);
    func_0x000107c5ee70();
    func_0x000107c53e1c(uVar15);
    func_0x000107c61170(puVar9);
    (**(code **)(lVar12 + 8))(puVar11,lVar5);
  }
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d48ed8);
  func_0x000107c5ee70((long)*(int *)(lVar6 + 0x24));
  func_0x000107c566e8(uVar15);
  func_0x000107c61170(puVar11);
  func_0x000107c5ee70((long)*(int *)(lVar6 + 0x28));
  func_0x000107c56388(uVar15);
  func_0x000107c61170(puVar11);
  if ((*(char *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) == '\x01') &&
     (lVar5 = *(long *)(unaff_x20 + _DAT_112d48ea8), lVar5 != 0)) {
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40));
    uVar15 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61174();
    func_0x000107c5fadc(uVar15,uVar2);
    func_0x000107c59c8c(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar15);
  }
  if (*(char *)((long)param_1 + (long)*(int *)(lVar6 + 0x38)) == '\x01') {
    FUN_100ee080c();
  }
  lVar5 = _DAT_112d48ea8;
  lVar12 = *(long *)(unaff_x20 + _DAT_112d48ea8);
  if (*(char *)((long)param_1 + (long)*(int *)(lVar6 + 0x44)) == '\x01') {
    if (lVar12 == 0) {
      return;
    }
    func_0x000107c61174();
    lVar6 = lVar12;
    func_0x00010537c2ac();
    func_0x000107c61180();
    func_0x000107c52120(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar6);
    lVar5 = *(long *)(unaff_x20 + lVar5);
  }
  else {
    if (lVar12 == 0) {
      return;
    }
    lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d48ed0))[1];
    if (lVar6 == 0) {
      func_0x000107c61174();
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d48ed0);
      func_0x000107c61174();
      func_0x000107c5fadc(uVar15,lVar6);
    }
    func_0x000107c52120(lVar12);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(uVar15);
    lVar5 = *(long *)(unaff_x20 + lVar5);
  }
  if (lVar5 != 0) {
    func_0x000107c59840();
  }
  return;
}



/* Entry: 100ee080c; end: 100ee0a2b;  */

void FUN_100ee080c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000108b9a8dc();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee0a28);
    (*pcVar1)();
  }
  puVar2 = &UNK_110365cb0;
  func_0x000107c613fc(&UNK_110365cb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_60 = FUN_100ee29c4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100de205c;
  puStack_68 = &UNK_110365cc8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c6157c(puVar2);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  puVar5 = puStack_58;
  func_0x000107c61574(puVar2);
  func_0x000107c61574();
  func_0x00010537c474();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    lVar6 = 0x112d360a8;
    FUN_100ee1fbc(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 3;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x20) = puVar4;
    puVar2 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    uVar7 = 0;
    FUN_100ee29e8(0,0x112d360a8,&PTR_PTR_1126aed70);
    func_0x000107c61174(puVar4);
    lVar8 = lVar6;
    func_0x000107c5fc48(lVar6,uVar7);
    func_0x000107c61574(lVar6);
    func_0x000107c4656c(puVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar8);
    func_0x000107c59bc8(puVar2);
    func_0x000107c4f018();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee0a2c);
  (*pcVar1)();
}



/* Entry: 100ee0a2c; end: 100ee11cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ee0a2c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*(char *)(unaff_x20 + _DAT_112d48ec8) != '\x01') {
    lVar1 = *(long *)PTR__UITextContentTypeGivenName_110345de8;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x00010537c30c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c5fadc(lVar11,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar4 = PTR_PTR_1126af0a0;
    func_0x000107c610f8();
    func_0x000107c48cc0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar11);
    func_0x000107c52a84(puVar4);
    func_0x000107c53fcc(puVar4);
    func_0x000107c5a44c(puVar4);
    lVar11 = -0x7ffffffef10e7c40;
    uVar3 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014);
    func_0x000107c59c84(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61174();
    func_0x000107c5a050();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d48e90);
    *(undefined **)(unaff_x20 + _DAT_112d48e90) = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = *(long *)PTR__UITextContentTypeFamilyName_110345de0;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x00010537c324();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar12 = 0;
      lVar10 = 0;
      lVar9 = lVar11;
    }
    else {
      lVar12 = lVar2;
      func_0x000107c5faec();
      lVar9 = lVar11;
      func_0x000107c61170();
      lVar10 = lVar11;
    }
    func_0x00010537c354();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar11 = 0;
      lVar9 = 0;
      if (lVar10 == 0) goto LAB_100ee0e08;
LAB_100ee0dc4:
      func_0x000107c5fadc(lVar12,lVar10);
      func_0x000107c6142c(lVar10);
      if (lVar9 != 0) goto LAB_100ee0de0;
LAB_100ee0e10:
      lVar11 = 0;
    }
    else {
      lVar11 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      if (lVar10 != 0) goto LAB_100ee0dc4;
LAB_100ee0e08:
      lVar12 = 0;
      if (lVar9 == 0) goto LAB_100ee0e10;
LAB_100ee0de0:
      func_0x000107c5fadc(lVar11,lVar9);
      func_0x000107c6142c(lVar9);
    }
    puVar5 = PTR_PTR_1126af0a0;
    func_0x000107c610f8();
    func_0x000107c48cc0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c52a84(puVar5);
    func_0x000107c53fcc(puVar5);
    func_0x000107c5a44c(puVar5);
    uVar3 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef183e0);
    func_0x000107c59c84(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61174();
    func_0x000107c5a050();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d48e98);
    *(undefined **)(unaff_x20 + _DAT_112d48e98) = puVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0x112d360b0;
    FUN_100ee1fbc(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
    lVar1 = lVar2;
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 5;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined **)(lVar1 + 0x20) = puVar4;
    *(undefined **)(lVar1 + 0x28) = puVar5;
    puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    uVar3 = 0;
    FUN_100ee29e8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    lVar11 = lVar1;
    func_0x000107c5fc48(lVar1,uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c45784();
    func_0x000107c61170(lVar11);
    func_0x000107c52b2c(puVar6);
    func_0x000107c54280(puVar6);
    func_0x000107c52610(puVar6);
    func_0x000107c59594(0x4028000000000000,puVar6);
    func_0x000107c61174();
    func_0x000107c5a050();
    puVar7 = puVar4;
    func_0x000107c44d9c(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar8 = puVar7;
    func_0x000107c402a0(0x4056800000000000,puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c521e8(puVar8);
    func_0x000107c61170(puVar8);
    puVar7 = puVar5;
    func_0x000107c44d9c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar8 = puVar7;
    func_0x000107c402a0(0x4056800000000000,puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c521e8(puVar8);
    func_0x000107c61170(puVar8);
    puVar7 = PTR_PTR_1126d0d08;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d48ea0);
    *(undefined **)(unaff_x20 + _DAT_112d48ea0) = puVar7;
    func_0x000107c61174();
    func_0x000107c61170(uVar13);
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    *(undefined **)(lVar2 + 0x20) = puVar6;
    *(undefined **)(lVar2 + 0x28) = puVar7;
    puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    lVar1 = lVar2;
    func_0x000107c5fc48(lVar2,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c45784(puVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c52b2c(puVar8);
    func_0x000107c52610(puVar8);
    func_0x000107c59594(0x4020000000000000,puVar8);
    func_0x000107c61174(puVar8);
    func_0x000107c5a050();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    goto LAB_100ee11a4;
  }
  lVar1 = *(long *)PTR__UITextContentTypeName_110345df0;
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x00010537c36c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar11 = 0;
    lVar9 = 0;
    lVar12 = param_2;
  }
  else {
    lVar11 = lVar2;
    func_0x000107c5faec();
    lVar12 = param_2;
    func_0x000107c61170();
    lVar9 = param_2;
  }
  func_0x00010537c384();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar10 = 0;
    lVar12 = 0;
    if (lVar9 == 0) goto LAB_100ee0c80;
LAB_100ee0b38:
    func_0x000107c5fadc(lVar11,lVar9);
    func_0x000107c6142c(lVar9);
    if (lVar12 != 0) goto LAB_100ee0b54;
LAB_100ee0c88:
    lVar10 = 0;
  }
  else {
    lVar10 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    if (lVar9 != 0) goto LAB_100ee0b38;
LAB_100ee0c80:
    lVar11 = 0;
    if (lVar12 == 0) goto LAB_100ee0c88;
LAB_100ee0b54:
    func_0x000107c5fadc(lVar10,lVar12);
    func_0x000107c6142c(lVar12);
  }
  puVar8 = PTR_PTR_1126af0a0;
  func_0x000107c610f8();
  func_0x000107c48cc0();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c52a84(puVar8);
  func_0x000107c53fcc(puVar8);
  func_0x000107c5a44c(puVar8);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef183c0);
  func_0x000107c59c84(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar4 = puVar8;
  func_0x000107c44d9c(puVar8);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c402a0(0x4056800000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c521e8(puVar5);
  func_0x000107c61170(puVar5);
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112d48e88);
  *(undefined **)(unaff_x20 + _DAT_112d48e88) = puVar8;
LAB_100ee11a4:
  func_0x000107c61170(puVar4);
  return puVar8;
}



/* Entry: 100ee11d0; end: 100ee192b;  */

/* WARNING: Possible PIC construction at 0x000100ee12b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee13d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee13f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee14a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee15a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee15c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee16ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee16d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee17dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee18dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee17b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee17b8) */
/* WARNING: Removing unreachable block (ram,0x000100ee1918) */
/* WARNING: Removing unreachable block (ram,0x000100ee18e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee1888) */
/* WARNING: Removing unreachable block (ram,0x000100ee17e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee16d4) */
/* WARNING: Removing unreachable block (ram,0x000100ee16b0) */
/* WARNING: Removing unreachable block (ram,0x000100ee1678) */
/* WARNING: Removing unreachable block (ram,0x000100ee161c) */
/* WARNING: Removing unreachable block (ram,0x000100ee15c4) */
/* WARNING: Removing unreachable block (ram,0x000100ee15a4) */
/* WARNING: Removing unreachable block (ram,0x000100ee1558) */
/* WARNING: Removing unreachable block (ram,0x000100ee1538) */
/* WARNING: Removing unreachable block (ram,0x000100ee14a8) */
/* WARNING: Removing unreachable block (ram,0x000100ee1808) */
/* WARNING: Removing unreachable block (ram,0x000100ee14b4) */
/* WARNING: Removing unreachable block (ram,0x000100ee1454) */
/* WARNING: Removing unreachable block (ram,0x000100ee13fc) */
/* WARNING: Removing unreachable block (ram,0x000100ee13dc) */
/* WARNING: Removing unreachable block (ram,0x000100ee138c) */
/* WARNING: Removing unreachable block (ram,0x000100ee136c) */
/* WARNING: Removing unreachable block (ram,0x000100ee12b8) */
/* WARNING: Removing unreachable block (ram,0x000100ee1754) */
/* WARNING: Removing unreachable block (ram,0x000100ee17d0) */
/* WARNING: Removing unreachable block (ram,0x000100ee17d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee11d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20;
  func_0x000107c51a60();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d48eb0);
  if (lVar2 != 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112d48ef0) & 1) == 0) {
      func_0x000107c61174();
      func_0x000107c3ec1c(param_1);
      func_0x000107c61180();
      func_0x000107c5cbe4(lVar2);
      func_0x000107c61180();
      func_0x000107c40284(0xc030000000000000,param_1);
      func_0x000107c61180();
      lVar3 = param_1;
    }
    else {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d48ee0);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c3ec1c(param_1);
        func_0x000107c61180();
        func_0x000107c5cbe4(lVar2);
        func_0x000107c61180();
        func_0x000107c40284(0xc030000000000000,param_1);
        func_0x000107c61180();
        lVar3 = param_1;
      }
      else {
        lVar2 = lVar3;
        func_0x000107c4f26c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c61174(lVar2);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee192c);
          (*pcVar1)();
        }
        func_0x000107c3d89c();
        lVar3 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100ee192c; end: 100ee1a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee192c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d48ed8);
  func_0x000107c41324();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(lVar3);
    (**(code **)(lVar7 + 0x20))(lVar5,lVar6,lVar2);
    (**(code **)(lVar7 + 0x10))(puVar4,lVar5,lVar2);
    func_0x000107c6159c(puVar4,lVar1,1);
    func_0x0001002a64a8(puVar4);
    FUN_100ee029c(puVar4);
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  return;
}



/* Entry: 100ee1a80; end: 100ee1aa7; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController birthdayPickerDidChange] */

void FUN_100ee1a80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ee192c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ee1aa8; end: 100ee1b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee1aa8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c420a8(param_1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c6159c(puVar2,lVar1,9);
    func_0x0001002a64a8(puVar2);
    FUN_100ee029c(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100ee1b78; end: 100ee1c1b; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController checklistView:allChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = param_4;
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100ee029c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee1c1c; end: 100ee1d37; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController checklistView:selectedLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee1c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar4,param_4);
  (**(code **)(lVar5 + 0x10))(puVar3,lVar4,lVar2);
  func_0x000107c6159c(puVar3,lVar1,3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar3);
  FUN_100ee029c(puVar3);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee1d38; end: 100ee1ddb; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee1d38(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *puVar2 = param_3;
  func_0x000107c6159c(puVar2);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(puVar2);
  FUN_100ee029c(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ee1ddc; end: 100ee1e07; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController initWithStepIndex:totalSteps:continueButtonText:currentPageTracker:] */

void FUN_100ee1ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.SCNGORegistrationDisplayNameBirthdayViewController"
                      ,0x5b,"init(step:totalSteps:continueButtonText:currentPageTracker:)",0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee1e08);
  (*pcVar1)();
}



/* Entry: 100ee1e08; end: 100ee1e33; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController initWithContinueButtonText:] */

void FUN_100ee1e08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.SCNGORegistrationDisplayNameBirthdayViewController"
                      ,0x5b,"init(continueButtonText:)",0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee1e34);
  (*pcVar1)();
}



/* Entry: 100ee1e34; end: 100ee1e5f; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController initWithNibName:bundle:] */

void FUN_100ee1e34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.SCNGORegistrationDisplayNameBirthdayViewController"
                      ,0x5b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee1e60);
  (*pcVar1)();
}



/* Entry: 100ee1e60; end: 100ee1ebf; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController initWithNibName:bundle:transitionType:] */

void FUN_100ee1e60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.SCNGORegistrationDisplayNameBirthdayViewController"
                      ,0x5b,"init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee1e8c);
  (*pcVar1)();
}



/* Entry: 100ee1ec0; end: 100ee1f9b; -[_TtC40SCRegistrationDisplayNameBirthdayFeature50SCNGORegistrationDisplayNameBirthdayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ee1f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee1f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee1f50) */
/* WARNING: Removing unreachable block (ram,0x000100ee1f30) */
/* WARNING: Removing unreachable block (ram,0x000100ee1f10) */
/* WARNING: Removing unreachable block (ram,0x000100ee1f84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee1ec0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d48ec0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d48e78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d48e80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48e88));
  return;
}



/* Entry: 100ee1f9c; end: 100ee1fbb;  */

void FUN_100ee1f9c(void)

{
  func_0x000107c61168(&PTR_PTR_11279e830);
  return;
}



/* Entry: 100ee1fbc; end: 100ee214b;  */

void FUN_100ee1fbc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100ee29e8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100ee214c; end: 100ee2777;  */

undefined1  [16] FUN_100ee214c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  uint uVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  puVar5 = (undefined *)0x0;
  func_0x000107c5ef14();
  lVar15 = *(long *)(puVar5 + -8);
  puVar19 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  func_0x00010537c264();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) {
    puVar13 = (undefined *)0xe200000000000000;
    puStack_90 = (undefined *)0x4444;
    puVar9 = param_2;
  }
  else {
    puVar13 = puVar19;
    func_0x000107c5faec();
    puVar9 = param_2;
    puStack_90 = puVar13;
    func_0x000107c61170();
    puVar13 = param_2;
  }
  func_0x00010537c27c();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) {
    puVar14 = (undefined *)0xe200000000000000;
    puStack_98 = (undefined *)0x4d4d;
    puVar16 = puVar9;
  }
  else {
    puVar14 = puVar19;
    func_0x000107c5faec();
    puVar16 = puVar9;
    puStack_98 = puVar14;
    func_0x000107c61170();
    puVar14 = puVar9;
  }
  func_0x00010537c294();
  func_0x000107c61180();
  if (puVar19 == (undefined *)0x0) {
    puVar16 = (undefined *)0xe400000000000000;
    puVar9 = (undefined *)0x59595959;
  }
  else {
    puVar9 = puVar19;
    func_0x000107c5faec();
    func_0x000107c61170(puVar19);
  }
  puVar19 = (undefined *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(puVar19 + 0x18) = 6;
  *(undefined8 *)(puVar19 + 0x10) = 3;
  *(undefined **)(puVar19 + 0x20) = puStack_90;
  *(undefined **)(puVar19 + 0x28) = puVar13;
  *(undefined **)(puVar19 + 0x30) = puStack_98;
  *(undefined **)(puVar19 + 0x38) = puVar14;
  *(undefined **)(puVar19 + 0x40) = puVar9;
  *(undefined **)(puVar19 + 0x48) = puVar16;
  puStack_a8 = puVar9;
  puStack_88 = puVar19;
  func_0x000107c61434(puVar13);
  func_0x000107c61434(puVar14);
  func_0x000107c61434(puVar16);
  uVar10 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar10;
  func_0x00010011d734();
  uVar6 = 0x202f20;
  uVar11 = 0xe300000000000000;
  uStack_c8 = uVar7;
  uStack_c0 = uVar10;
  func_0x000107c5fa80(0x202f20,0xe300000000000000,uVar10);
  uStack_b8 = uVar6;
  uStack_b0 = uVar11;
  func_0x000107c61574(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c61168();
  uVar7 = 0x797979794d4d6464;
  func_0x000107c5fadc(0x797979794d4d6464,0xe800000000000000);
  uVar10 = uVar7;
  func_0x000107c5ef04(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ef00();
  (**(code **)(lVar15 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c4133c();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  if (puVar19 == (undefined *)0x0) {
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar14);
  }
  else {
    puVar9 = puVar19;
    puStack_a0 = puVar16;
    func_0x000107c5faec();
    puVar8 = puVar5;
    func_0x000107c61170();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_70 = (ulong)puVar9 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uStack_70 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    uStack_78 = 0;
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_88 = puVar9;
    puStack_80 = puVar5;
    func_0x000107c5fb84();
    if (puVar8 != (undefined *)0x0) {
      bVar2 = false;
      bVar3 = false;
      uVar18 = 0;
      do {
        if ((puVar19 == (undefined *)0x64) && (puVar8 == (undefined *)0xe100000000000000)) {
          puVar5 = puVar8;
          if (!bVar2) {
LAB_100ee2450:
            func_0x000107c6142c(puVar8);
            func_0x000107c61434(puVar13);
            puVar19 = puVar16;
            func_0x000107c61558();
            if (((ulong)puVar19 & 1) == 0) {
              puVar5 = (undefined *)(*(long *)(puVar16 + 0x10) + 1);
              puVar19 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar5,1,puVar16);
              puVar16 = puVar19;
            }
            uVar17 = *(ulong *)(puVar16 + 0x10);
            puVar9 = (undefined *)(uVar17 + 1);
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
              puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
              puVar5 = puVar9;
              func_0x0001000d182c(puVar19,puVar9,1,puVar16);
              puVar16 = puVar19;
            }
            *(undefined **)(puVar16 + 0x10) = puVar9;
            *(undefined **)(puVar16 + uVar17 * 0x10 + 0x20) = puStack_90;
            *(undefined **)(puVar16 + uVar17 * 0x10 + 0x28) = puVar13;
            puStack_68 = puVar16;
            func_0x000107c5fb84();
            if (puVar5 == (undefined *)0x0) break;
            puVar8 = puVar5;
            if ((puVar19 != (undefined *)0x64) || (puVar5 != (undefined *)0xe100000000000000)) {
              func_0x000107c605b8(puVar19,puVar5,100,0xe100000000000000,0);
              bVar2 = true;
              goto LAB_100ee2514;
            }
          }
          bVar4 = true;
          puVar19 = (undefined *)0x64;
          bVar2 = true;
LAB_100ee24c8:
          puVar9 = puVar19;
          puVar5 = puVar8;
          func_0x000107c605b8(puVar19,puVar8,0x4d,0xe100000000000000,0);
          if (!bVar3 && (((uint)puVar9 ^ 0xffffffff) & 1) == 0) goto LAB_100ee258c;
          bVar1 = false;
          if (puVar19 == (undefined *)0x79) {
            bVar1 = bVar4;
          }
          puVar9 = puVar8;
          if (bVar1) {
LAB_100ee25dc:
            func_0x000107c6142c();
            if ((uVar18 & 1) != 0) {
              uVar18 = 1;
              goto LAB_100ee23fc;
            }
LAB_100ee25f0:
            puVar8 = puStack_a0;
            func_0x000107c61434(puStack_a0);
            puVar9 = puVar16;
            func_0x000107c61558();
            if (((ulong)puVar9 & 1) == 0) {
              puVar5 = (undefined *)(*(long *)(puVar16 + 0x10) + 1);
              puVar9 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar5,1,puVar16);
              puVar16 = puVar9;
            }
            uVar17 = *(ulong *)(puVar16 + 0x10);
            puVar19 = (undefined *)(uVar17 + 1);
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
              puVar5 = puVar19;
              func_0x0001000d182c(puVar9,puVar19,1,puVar16);
              puVar16 = puVar9;
            }
            uVar18 = 1;
            puVar12 = puStack_a8;
            goto LAB_100ee23ec;
          }
LAB_100ee2530:
          puVar8 = puVar19;
          puVar5 = puVar9;
          func_0x000107c605b8(puVar19,puVar9,0x79,0xe100000000000000,0);
          bVar1 = false;
          if (puVar19 == (undefined *)0x59) {
            bVar1 = bVar4;
          }
          if ((((ulong)puVar8 & 1) != 0) || (bVar1)) goto LAB_100ee25dc;
          puVar5 = puVar9;
          func_0x000107c605b8(puVar19,puVar9,0x59,0xe100000000000000,0);
          func_0x000107c6142c();
          if (((uVar18 | (uint)puVar19 ^ 0xffffffff) & 1) == 0) goto LAB_100ee25f0;
          uVar18 = (uint)puVar19 | uVar18;
        }
        else {
          puVar9 = puVar19;
          puVar5 = puVar8;
          func_0x000107c605b8(puVar19,puVar8,100,0xe100000000000000,0);
          if (!bVar2 && (((uint)puVar9 ^ 0xffffffff) & 1) == 0) goto LAB_100ee2450;
LAB_100ee2514:
          bVar4 = puVar8 == (undefined *)0xe100000000000000;
          if ((puVar19 != (undefined *)0x4d) || (!bVar4)) goto LAB_100ee24c8;
          if (bVar3) {
            bVar4 = true;
            puVar19 = (undefined *)0x4d;
            bVar3 = true;
            puVar9 = puVar8;
            goto LAB_100ee2530;
          }
LAB_100ee258c:
          func_0x000107c6142c(puVar8);
          func_0x000107c61434(puVar14);
          puVar9 = puVar16;
          func_0x000107c61558();
          if (((ulong)puVar9 & 1) == 0) {
            puVar5 = (undefined *)(*(long *)(puVar16 + 0x10) + 1);
            puVar9 = (undefined *)0x0;
            func_0x0001000d182c(0,puVar5,1,puVar16);
            puVar16 = puVar9;
          }
          uVar17 = *(ulong *)(puVar16 + 0x10);
          puVar19 = (undefined *)(uVar17 + 1);
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            puVar5 = puVar19;
            func_0x0001000d182c(puVar9,puVar19,1,puVar16);
            puVar16 = puVar9;
          }
          bVar3 = true;
          puVar12 = puStack_98;
          puVar8 = puVar14;
LAB_100ee23ec:
          *(undefined **)(puVar16 + 0x10) = puVar19;
          *(undefined **)(puVar16 + uVar17 * 0x10 + 0x20) = puVar12;
          *(undefined **)(puVar16 + uVar17 * 0x10 + 0x28) = puVar8;
          puStack_68 = puVar16;
        }
LAB_100ee23fc:
        func_0x000107c5fb84();
        puVar8 = puVar5;
        puVar19 = puVar9;
      } while (puVar5 != (undefined *)0x0);
    }
    puVar19 = puStack_80;
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(puVar14);
    func_0x000107c6142c(puStack_a0);
    func_0x000107c6142c(puVar19);
    if (*(long *)(puVar16 + 0x10) == 3) {
      func_0x000107c6142c(uStack_b0);
      uVar10 = 0x202f20;
      uVar7 = 0xe300000000000000;
      func_0x000107c5fa80(0x202f20,0xe300000000000000,uStack_c0,uStack_c8);
      func_0x000107c6142c(puVar16);
      uStack_b8 = uVar10;
      uStack_b0 = uVar7;
      goto LAB_100ee2758;
    }
  }
  func_0x000107c6142c(puVar16);
LAB_100ee2758:
  auVar20._8_8_ = uStack_b0;
  auVar20._0_8_ = uStack_b8;
  return auVar20;
}



/* Entry: 100ee2778; end: 100ee29c3;  */

/* WARNING: Possible PIC construction at 0x000100ee27d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee2870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee2890) */
/* WARNING: Removing unreachable block (ram,0x000100ee27d4) */
/* WARNING: Removing unreachable block (ram,0x000100ee281c) */
/* WARNING: Removing unreachable block (ram,0x000100ee27d8) */
/* WARNING: Removing unreachable block (ram,0x000100ee27e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee2828) */
/* WARNING: Removing unreachable block (ram,0x000100ee27e8) */
/* WARNING: Removing unreachable block (ram,0x000100ee27f4) */
/* WARNING: Removing unreachable block (ram,0x000100ee2874) */

void FUN_100ee2778(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c5c850();
    func_0x000107c61180();
    if (lVar1 == 0) {
      if (param_3 == 0) {
        if (param_5 == 0) {
          param_2 = 0;
        }
        else {
          func_0x000107c5fadc(param_4,param_5);
          param_2 = param_4;
        }
        func_0x000107c52120(param_1);
      }
      else {
        func_0x000107c5fadc(param_2,param_3);
        func_0x000107c59c8c(param_1);
      }
    }
    else {
      func_0x000107c5faec();
      param_2 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100ee29c4; end: 100ee29e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee29c4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c420a8(param_1);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c6159c(puVar3,lVar1,9);
    func_0x0001002a64a8(puVar3);
    FUN_100ee029c(puVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100ee29e8; end: 100ee2a27;  */

void FUN_100ee29e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ee2a28; end: 100ee3087;  */

long * FUN_100ee2a28(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 == 3) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 3;
    }
    else if (iVar2 == 1) {
      lVar6 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 1;
    }
    else {
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
        return param_1;
      }
      lVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar6;
      lVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar6;
      func_0x000107c61434();
      func_0x000107c61434(lVar6);
      uVar4 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100ee3088; end: 100ee3ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ee3088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,uint param_18,undefined4 param_19,ulong *param_20,
                  undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long alStack_180 [2];
  code *pcStack_170;
  undefined8 uStack_168;
  long alStack_160 [2];
  code *pcStack_150;
  long alStack_148 [4];
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lStack_c0 = param_17;
  puStack_a0 = param_20;
  alStack_148[2] = param_21;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,param_18) & 0xffffffff000000ff;
  uStack_110 = param_16;
  uStack_b0 = param_13;
  uStack_a8 = param_15;
  uStack_b8 = param_12;
  uStack_100 = param_11;
  uStack_f8 = param_14;
  uStack_168 = CONCAT44(uStack_168._4_4_,param_18 >> 8) & 0xffffffff000000ff;
  lVar8 = 0;
  alStack_148[3] = param_2;
  uStack_118 = param_1;
  lStack_108 = param_8;
  uStack_e0 = param_7;
  uStack_d8 = param_5;
  uStack_d0 = param_3;
  uStack_c8 = param_4;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar8 + -8);
  alStack_160[1] = lVar8;
  alStack_148[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)alStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar9 = 0;
  alStack_148[0] = lVar13;
  func_0x000100ee69c0();
  alStack_160[0] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_120 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)(lVar13 - extraout_x12_00);
  func_0x000107c613fc();
  pcStack_150 = *(code **)(lVar14 + 0x38);
  (*pcStack_150)(unaff_x20 + _DAT_112d48fd8,1,1,lVar8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d48fe0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d48fe8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d48ff0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d48ff8);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d49000);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d49008);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49010) = 0;
  lVar8 = _DAT_112d49018;
  func_0x000107c61614(unaff_x20 + _DAT_112d49018,0);
  uVar17 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = uStack_d0;
  func_0x000107c61434();
  func_0x000107c6142c(uVar17);
  uVar17 = puVar2[1];
  *puVar2 = uStack_c8;
  puVar2[1] = uStack_d8;
  func_0x000107c61434();
  func_0x000107c6142c(uVar17);
  uStack_e8 = param_6;
  func_0x000107c61604(unaff_x20 + lVar8,param_6);
  uVar7 = uStack_a8;
  uVar6 = uStack_b8;
  uVar10 = uStack_f8;
  lVar8 = lStack_108;
  uVar17 = uStack_110;
  *(char *)(unaff_x20 + _DAT_112d49020) = (char)uStack_168;
  *(undefined8 *)(unaff_x20 + _DAT_112d49028) = uStack_e0;
  *(long *)(unaff_x20 + _DAT_112d49030) = lStack_108;
  *(undefined8 *)(unaff_x20 + _DAT_112d49038) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d49040) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d49048);
  *puVar1 = uStack_100;
  puVar1[1] = uStack_b8;
  *(undefined8 *)(unaff_x20 + _DAT_112d49050) = uStack_f8;
  *(undefined8 *)(unaff_x20 + _DAT_112d49058) = uStack_110;
  *(undefined8 *)(unaff_x20 + _DAT_112d49060) = uStack_a8;
  *(long *)(unaff_x20 + _DAT_112d49068) = lStack_c0;
  *(char *)(unaff_x20 + _DAT_112d49070) = (char)uStack_f0;
  pcStack_170 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_a0) + 0x68);
  lVar9 = lStack_c0;
  func_0x000107c61174();
  alStack_180[1] = lVar9;
  func_0x000107c61174();
  uStack_168 = lVar8;
  func_0x000107c61174();
  lStack_108 = param_9;
  func_0x000107c61174();
  uStack_100 = param_10;
  func_0x000107c6157c(uVar6);
  func_0x000107c61174();
  uStack_f8 = uVar10;
  func_0x000107c61174();
  uStack_f0 = uVar17;
  func_0x000107c615f0(uVar7);
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar10 = 0;
  uStack_110 = uVar17;
  (*pcStack_170)();
  *(undefined8 *)(unaff_x20 + _DAT_112d49078) = uVar10;
  *(long *)(unaff_x20 + _DAT_112d49080) = alStack_148[2];
  *(undefined1 *)(unaff_x20 + _DAT_112d49088) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112d49090) = 1;
  lVar8 = alStack_148[2];
  func_0x000107c61174();
  uVar17 = uStack_b0;
  uStack_e0 = lVar8;
  func_0x000106b9003c();
  func_0x000107c61180();
  lVar14 = alStack_148[0];
  func_0x000107c5ee94(alStack_148[0]);
  func_0x000107c61170(uVar17);
  lVar5 = lStack_128;
  func_0x000107c5eea0(lStack_128);
  pcVar15 = pcStack_150;
  lVar13 = alStack_160[1];
  lVar9 = alStack_160[0];
  lVar8 = (long)*(int *)(alStack_160[0] + 0x20);
  (*pcStack_150)((long)puVar16 + lVar8,1,1,alStack_160[1]);
  lVar19 = (long)*(int *)(lVar9 + 0x2c);
  (*pcVar15)((long)puVar16 + lVar19,1,1,lVar13);
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  func_0x000100ee64e8((long)puVar16 + lVar8,0x112d373d8,&UNK_10d9014c0);
  (*pcVar15)((long)puVar16 + lVar8,1,1,lVar13);
  lVar4 = alStack_148[1];
  pcVar18 = *(code **)(alStack_148[1] + 0x10);
  (*pcVar18)((long)puVar16 + (long)*(int *)(lVar9 + 0x24),lVar14,lVar13);
  (*pcVar18)((long)puVar16 + (long)*(int *)(lVar9 + 0x28),lVar5,lVar13);
  func_0x000100ee64e8((long)puVar16 + lVar19,0x112d373d8,&UNK_10d9014c0);
  lVar8 = uStack_168;
  (*pcVar15)((long)puVar16 + lVar19,1,1,lVar13);
  uVar17 = uStack_118;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x30)) = 0;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x34)) = 0;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x38)) = 0;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x3c)) = 0;
  pcVar15 = *(code **)(lVar4 + 8);
  (*pcVar15)(lVar5,lVar13);
  (*pcVar15)(lVar14,lVar13);
  puVar1 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x40));
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar9 + 0x44)) = 0;
  uVar6 = uStack_c8;
  uVar10 = uStack_d0;
  *puVar16 = alStack_148[3];
  puVar16[1] = uVar10;
  uVar10 = uStack_d8;
  puVar16[4] = uVar6;
  puVar16[5] = uVar10;
  lVar9 = lStack_120;
  FUN_100ee4238(puVar16,lStack_120,0x100ee69c0);
  func_0x000103dbf4dc();
  func_0x000100ee3904(uVar17);
  lVar13 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 != 0) {
    puVar11 = PTR_PTR_1126af710;
    func_0x000107c610f8(PTR_PTR_1126af710);
    func_0x000107c453e4();
    func_0x000107c57c6c();
    lVar14 = *(long *)(lVar13 + _DAT_112d492f0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c4be1c();
      func_0x000107c615e8(lVar14);
    }
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar13);
  }
  lVar13 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar13 + _DAT_112d492f0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c4bd54();
      func_0x000107c615e8(lVar14);
    }
    func_0x000107c61170(lVar13);
  }
  if (lStack_c0 == 0) {
    func_0x000100ee64e8(uVar17,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615e8(uStack_e8);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lStack_108);
    func_0x000107c61170(uStack_100);
    func_0x000107c61574(uStack_b8);
    func_0x000107c615e8(uStack_b0);
    func_0x000107c61170(uStack_f8);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(puStack_a0);
    func_0x000107c61170(uStack_e0);
    lVar13 = 0;
  }
  else {
    puVar11 = &UNK_110365d00;
    func_0x000107c613fc(&UNK_110365d00,0x18,7);
    func_0x000107c61644(puVar11 + 0x10,lVar9);
    pcStack_78 = FUN_100ee3cc4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100b5fdac;
    puStack_80 = &UNK_110365d18;
    ppuVar12 = &puStack_98;
    puStack_70 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_70;
    lVar14 = alStack_180[1];
    func_0x000107c61174();
    func_0x000107c61574(puVar11);
    lVar13 = lVar14;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(uStack_e8);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lStack_108);
    func_0x000107c61170(uStack_100);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c61170(uStack_e0);
    func_0x000107c615e8(uStack_b0);
    func_0x000107c61170(puStack_a0);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar14);
    func_0x000100ee64e8(uVar17,0x112d373d8,&UNK_10d9014c0);
  }
  uVar17 = *(undefined8 *)(lVar9 + _DAT_112d49010);
  *(long *)(lVar9 + _DAT_112d49010) = lVar13;
  func_0x000107c61170(uVar17);
  FUN_100ee6530(puVar16,0x100ee69c0);
  return lVar9;
}



/* Entry: 100ee3ba4; end: 100ee3cc3;  */

void FUN_100ee3ba4(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = 
  "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
  ;
  func_0x0001000c10c0(
                     "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110365d00;
  func_0x000107c613fc(&UNK_110365d00,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_110365d78;
  func_0x000107c613fc(&UNK_110365d78,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_58 = FUN_100ee6528;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110365d90;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 100ee3cc4; end: 100ee3ccb;  */

void FUN_100ee3cc4(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = 
  "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
  ;
  func_0x0001000c10c0(
                     "init(birthday:firstName:lastName:delegate:signupTransitionLogger:birthdayLogger:userInitialInputLogger:ageVerificationInfoProvider:resetClientId:circumstanceEngine:dateFormatter:performer:localNotificationScheduling:registrationRequest:displayNameValidationEnabled:shouldShowCombinedDisplayNameLabel:inputValidationServiceFactory:usernameSuggestionFetcher:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110365d00;
  func_0x000107c613fc(&UNK_110365d00,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648(lVar3);
  func_0x000107c61644(puVar2 + 0x10,lVar3);
  func_0x000107c61574(lVar3);
  puVar4 = &UNK_110365d78;
  func_0x000107c613fc(&UNK_110365d78,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_58 = FUN_100ee6528;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110365d90;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 100ee3ccc; end: 100ee3dbf;  */

void FUN_100ee3ccc(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c3ebcc();
    *puVar3 = param_2;
    func_0x000107c6159c(puVar3,lVar1,5);
    func_0x0001000285a8(0x112d492c0,&UNK_10d90fc48);
    puVar2 = puVar3;
    func_0x000100854cb0(puVar3);
    func_0x000103dbf524();
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar2);
    FUN_100ee6530(puVar3,0x100ee2de0);
  }
  return;
}



/* Entry: 100ee3dc0; end: 100ee3ddb;  */

void FUN_100ee3dc0(long param_1,long param_2)

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



/* Entry: 100ee3ddc; end: 100ee4237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee3ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar13;
  byte bVar14;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lStack_70;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&lStack_70 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar4 + -8);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar16 = (undefined8 *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)((long)puVar16 - extraout_x12);
  lVar4 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = (undefined8 *)((long)puVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100ee4238(param_3,param_1,0x100ee69c0);
  FUN_100ee4238(param_2,puVar17,0x100ee2de0);
  puVar5 = puVar17;
  func_0x000107c614c4(puVar17,lVar4);
  lVar4 = lStack_70;
  iVar3 = (int)puVar5;
  if (iVar3 < 5) {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        uVar6 = *puVar17;
        uVar1 = puVar17[1];
        uVar15 = puVar17[3];
        if (*(char *)(unaff_x20 + _DAT_112d49020) == '\x01') {
          func_0x000107c6142c(uVar15);
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_112d48fe0);
          uVar15 = puVar5[1];
          *puVar5 = uVar6;
          puVar5[1] = uVar1;
          func_0x000107c6142c(uVar15);
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_112d48ff0);
          uVar6 = puVar5[1];
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        else {
          uVar18 = puVar17[2];
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_112d48fe0);
          uVar9 = puVar5[1];
          *puVar5 = uVar6;
          puVar5[1] = uVar1;
          func_0x000107c6142c(uVar9);
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_112d48ff0);
          uVar6 = puVar5[1];
          *puVar5 = uVar18;
          puVar5[1] = uVar15;
        }
        func_0x000107c6142c(uVar6);
        FUN_100ee427c();
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d48fe0);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d48fe0))[1];
        uVar15 = param_1[1];
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(uVar15);
        *param_1 = uVar6;
        param_1[1] = uVar1;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d48fe8);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d48fe8))[1];
        uVar15 = param_1[3];
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(uVar15);
        param_1[2] = uVar6;
        param_1[3] = uVar1;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d48ff0);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d48ff0))[1];
        uVar15 = param_1[5];
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(uVar15);
        param_1[4] = uVar6;
        param_1[5] = uVar1;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d48ff8);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d48ff8))[1];
        bVar14 = (byte)param_1[7];
        func_0x000107c61434(uVar1);
        func_0x000107c6142c();
        param_1[6] = uVar6;
        param_1[7] = uVar1;
        goto LAB_100ee4168;
      }
      (**(code **)(lVar12 + 0x20))(puVar19,puVar17,lStack_70);
      FUN_100ee496c(puVar19,param_1);
      pcVar13 = *(code **)(lVar12 + 8);
      puVar16 = puVar19;
    }
    else {
      if (iVar3 == 2) {
        *(undefined1 *)(unaff_x20 + _DAT_112d49088) = *(undefined1 *)puVar17;
        bVar14 = 0;
LAB_100ee4168:
        FUN_100ee4780();
        lVar4 = 0;
        func_0x000100ee69c0();
        iVar3 = *(int *)(lVar4 + 0x30);
        bVar14 = bVar14 & 1;
        goto LAB_100ee4180;
      }
      if (iVar3 != 3) {
        *(undefined1 *)(unaff_x20 + _DAT_112d49090) = *(undefined1 *)puVar17;
        return;
      }
      lVar4 = 0;
      func_0x000107c5ede0();
      pcVar13 = *(code **)(*(long *)(lVar4 + -8) + 8);
      puVar16 = puVar17;
    }
LAB_100ee4098:
    (*pcVar13)(puVar16,lVar4);
  }
  else {
    if (iVar3 - 7U < 3) {
      return;
    }
    if (iVar3 == 5) {
      uVar2 = *(undefined1 *)puVar17;
      lVar4 = 0;
      func_0x000100ee69c0();
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) = uVar2;
      return;
    }
    lVar7 = 0;
    func_0x000100ee69c0();
    func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar7 + 0x20),lVar10);
    lVar4 = lStack_70;
    lVar8 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,lStack_70);
    if ((int)lVar8 == 1) {
      func_0x000100ee64e8(lVar10,0x112d373d8,&UNK_10d9014c0);
      return;
    }
    (**(code **)(lVar12 + 0x20))(puVar16,lVar10,lVar4);
    lVar10 = *(long *)(unaff_x20 + _DAT_112d49040);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 == 0) {
      pcVar13 = *(code **)(lVar12 + 8);
      goto LAB_100ee4098;
    }
    lVar8 = lVar10;
    func_0x000107c5ee70();
    lVar11 = lVar10;
    func_0x000107c4a660();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar8);
    (**(code **)(lVar12 + 8))(puVar16,lVar4);
    if ((int)lVar11 == 0) {
      return;
    }
    iVar3 = *(int *)(lVar7 + 0x38);
    bVar14 = 1;
LAB_100ee4180:
    *(byte *)((long)param_1 + (long)iVar3) = bVar14;
  }
  return;
}



/* Entry: 100ee4238; end: 100ee427b;  */

undefined8 FUN_100ee4238(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ee427c; end: 100ee477f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee427c(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_112d48fe8);
  lVar5 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c6142c(lVar5);
  plVar2 = (long *)(unaff_x20 + _DAT_112d48ff8);
  lVar5 = plVar2[1];
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107c6142c(lVar5);
  if (*(char *)(unaff_x20 + _DAT_112d49070) != '\x01') {
    return;
  }
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d48fe0))[1];
  if (lVar5 == 0) {
    uVar10 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d48fe0);
  }
  uStack_70 = uVar10;
  lStack_68 = lVar5;
  if (*(char *)(unaff_x20 + _DAT_112d49020) == '\x01') {
    func_0x000107c61434();
    lVar9 = lVar5;
    func_0x000107c61434(lVar5);
    func_0x000107c5eb68(puVar11);
    FUN_100e8b654();
    puVar6 = puVar11;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar11,PTR___sSSN_11034da80,lVar9);
    (**(code **)(lVar12 + 8))(puVar11,lVar4);
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(puVar7);
    uVar3 = (ulong)puVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_112d49078);
      lVar4 = lVar5;
      func_0x000107c5fadc(uVar10);
      func_0x000107c6142c(lVar5);
      func_0x000107c5dbf8();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (lVar12 == 0) {
        lVar9 = 0;
        lVar4 = 0;
      }
      else {
        lVar9 = lVar12;
        func_0x000107c5faec();
        func_0x000107c61170(lVar12);
      }
      lVar5 = plVar1[1];
      *plVar1 = lVar9;
      plVar1[1] = lVar4;
    }
  }
  else {
    lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112d48ff0))[1];
    if (lVar9 == 0) {
      uStack_78 = 0;
      lVar8 = -0x2000000000000000;
    }
    else {
      uStack_78 = *(undefined8 *)(unaff_x20 + _DAT_112d48ff0);
      lVar8 = lVar9;
    }
    plStack_88 = plVar1;
    func_0x000107c61434();
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar9);
    func_0x000107c5eb68(puVar11);
    FUN_100e8b654();
    puVar6 = puVar11;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar11,PTR___sSSN_11034da80,lVar9);
    pcVar13 = *(code **)(lVar12 + 8);
    uStack_90 = uVar10;
    (*pcVar13)(puVar11,lVar4);
    lStack_80 = lVar5;
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(puVar7);
    uStack_98 = (ulong)puVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uStack_98 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    uStack_70 = uStack_78;
    lStack_68 = lVar8;
    func_0x000107c61434(lVar8);
    func_0x000107c5eb68(puVar11);
    puVar6 = puVar11;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar11,PTR___sSSN_11034da80,lVar9);
    (*pcVar13)(puVar11,lVar4);
    func_0x000107c6142c(lVar8);
    func_0x000107c6142c(puVar7);
    uVar3 = (ulong)puVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    plVar1 = plStack_88;
    uVar10 = uStack_78;
    if (uStack_98 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112d49078);
      uVar10 = uStack_90;
      lVar4 = lStack_80;
      func_0x000107c5fadc(uStack_90);
      func_0x000107c5dbf8();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (lVar5 == 0) {
        lVar12 = 0;
        lVar4 = 0;
      }
      else {
        lVar12 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
      }
      plVar1 = plStack_88;
      lVar5 = plStack_88[1];
      *plStack_88 = lVar12;
      plStack_88[1] = lVar4;
      func_0x000107c6142c(lVar5);
      uVar10 = uStack_78;
    }
    uStack_78 = uVar10;
    if (uVar3 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112d49078);
      lVar4 = lVar8;
      func_0x000107c5fadc(uVar10);
      func_0x000107c5dbf8();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (lVar5 == 0) {
        lVar12 = 0;
        lVar4 = 0;
      }
      else {
        lVar12 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
      }
      lVar5 = plVar2[1];
      *plVar2 = lVar12;
      plVar2[1] = lVar4;
      func_0x000107c6142c(lVar5);
      lVar5 = lStack_80;
      if ((uStack_98 != 0) && (plVar1[1] == 0)) {
        if (plVar2[1] == 0) {
          lVar9 = *(long *)(unaff_x20 + _DAT_112d49078);
          uStack_70 = uStack_90;
          lStack_68 = lStack_80;
          func_0x000107c61434(lStack_80);
          func_0x000107c5fb78(uStack_78,lVar8);
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar8);
          lVar4 = lStack_68;
          uVar10 = uStack_70;
          lVar12 = lStack_68;
          func_0x000107c5fadc(uStack_70);
          func_0x000107c6142c(lVar4);
          func_0x000107c5dbf8();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (lVar9 == 0) {
            lVar4 = 0;
            lVar12 = 0;
          }
          else {
            lVar4 = lVar9;
            func_0x000107c5faec();
            func_0x000107c61170(lVar9);
          }
          lVar5 = plVar1[1];
          *plVar1 = lVar4;
          plVar1[1] = lVar12;
          func_0x000107c61434(lVar12);
          func_0x000107c6142c(lVar5);
          lVar5 = plVar2[1];
          *plVar2 = lVar4;
          plVar2[1] = lVar12;
        }
        else {
          func_0x000107c6142c(lVar8);
        }
        goto LAB_100ee4680;
      }
    }
    func_0x000107c6142c(lVar8);
    lVar5 = lStack_80;
  }
LAB_100ee4680:
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 100ee4780; end: 100ee496b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ee4780(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = _DAT_112d48fd8;
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112d48fd8,auStack_68,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,puVar7);
  puVar3 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000100ee64e8(puVar7,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar8,puVar7,lVar2);
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112d49040);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5ee70();
      uVar6 = uVar4;
      func_0x000107c4a6b4();
      func_0x000107c615e8(uVar4);
      func_0x000107c61170();
      if (((int)uVar6 != 0) && (*(char *)(unaff_x20 + _DAT_112d49088) == '\x01')) {
        func_0x000100ee5794();
        (**(code **)(lVar9 + 8))(lVar8,lVar2);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (*(long *)(unaff_x20 + _DAT_112d48fe8 + 8) != 0) {
          return 0;
        }
        if (*(long *)(unaff_x20 + _DAT_112d48ff8 + 8) != 0) {
          return 0;
        }
        return 1;
      }
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
  }
  return 0;
}



/* Entry: 100ee496c; end: 100ee5cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee496c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  pcVar12 = *(code **)(lVar11 + 0x10);
  (*pcVar12)(puVar8,param_1,lVar3);
  pcVar13 = *(code **)(lVar11 + 0x38);
  bVar10 = 1;
  (*pcVar13)(puVar8,0,1,lVar3);
  lVar11 = _DAT_112d48fd8;
  func_0x000107c61428(unaff_x20 + _DAT_112d48fd8,auStack_78,0x21,0);
  func_0x000100ed9cbc(puVar8,unaff_x20 + lVar11);
  func_0x000107c614a8(auStack_78);
  lVar4 = 0;
  func_0x000100ee69c0();
  lVar11 = (long)*(int *)(lVar4 + 0x20);
  func_0x000100ee64e8(param_2 + lVar11,0x112d373d8,&UNK_10d9014c0);
  (*pcVar12)(param_2 + lVar11,param_1,lVar3);
  lVar11 = param_2 + lVar11;
  uVar7 = 0;
  (*pcVar13)(lVar11,0,1,lVar3);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d49050);
  func_0x000107c5ee70();
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  uVar5 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x40));
  bVar2 = (byte)puVar1[1];
  func_0x000107c6142c();
  *puVar1 = uVar5;
  puVar1[1] = uVar7;
  *(undefined1 *)(param_2 + *(int *)(lVar4 + 0x34)) = 1;
  FUN_100ee4780();
  *(byte *)(param_2 + *(int *)(lVar4 + 0x30)) = bVar2 & 1;
  lVar11 = *(long *)(unaff_x20 + _DAT_112d49040);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 != 0) {
    lVar3 = lVar11;
    func_0x000107c5ee70();
    lVar6 = lVar11;
    func_0x000107c4a6b4();
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(lVar3);
    bVar10 = (byte)lVar6 ^ 1;
  }
  *(byte *)(param_2 + *(int *)(lVar4 + 0x44)) = bVar10;
  return;
}



/* Entry: 100ee5cdc; end: 100ee5da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee5cdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d49058);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      func_0x000107c5fc48();
      func_0x000107c4ffe4(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100ee5da4; end: 100ee5dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee5da4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d49058);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      func_0x000107c5fc48();
      func_0x000107c4ffe4(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100ee5dac; end: 100ee5f23;  */

/* WARNING: Possible PIC construction at 0x000100ee5e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee5e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee5e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee5ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee5efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee5ed0) */
/* WARNING: Removing unreachable block (ram,0x000100ee5e9c) */
/* WARNING: Removing unreachable block (ram,0x000100ee5e7c) */
/* WARNING: Removing unreachable block (ram,0x000100ee5e5c) */
/* WARNING: Removing unreachable block (ram,0x000100ee5f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee5dac(void)

{
  long unaff_x20;
  
  func_0x000100ee64e8(unaff_x20 + _DAT_112d48fd8,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d48fe0 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d48fe8 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d48ff0 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d48ff8 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d49000 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112d49008 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112d49010));
  return;
}



/* Entry: 100ee5f24; end: 100ee60b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ee5f24(long param_1)

{
  func_0x000103dbf870();
  func_0x000100ee64e8(param_1 + _DAT_112d48fd8,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d48fe0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d48fe8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d48ff0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d48ff8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d49000 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d49008 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49010));
  FUN_100ee63b8(param_1 + _DAT_112d49018);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49030));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49040));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d49048 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49050));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49058));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d49060));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49068));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d49078));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d49080));
  return param_1;
}



/* Entry: 100ee60b4; end: 100ee60d3;  */

void FUN_100ee60b4(void)

{
  FUN_100ee5f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ee60d4; end: 100ee63b7;  */

long FUN_100ee60d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ec74();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar13 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef64();
  lStack_70 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar6 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  lStack_68 = lVar6;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = lVar6 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar15 - extraout_x12;
  func_0x0001009f0578(param_1,lVar6);
  lVar3 = lVar6;
  (**(code **)(lVar12 + 0x30))(lVar6,1,lVar4);
  if ((int)lVar3 == 1) {
    func_0x000100ee64e8(lVar6,0x112d373d8,&UNK_10d9014c0);
    lVar3 = 0;
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar14,lVar6,lVar4);
    func_0x000107c5ef54(lStack_68);
    lVar3 = 0x112d36588;
    func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
    lVar6 = 0;
    func_0x000107c5ef5c();
    lVar8 = *(long *)(lVar6 + -8);
    uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    lStack_80 = lVar10;
    lStack_78 = lVar1;
    func_0x000107c613fc(lVar3,uVar11 + *(long *)(lVar8 + 0x48),uVar7 | 7);
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    (**(code **)(lVar8 + 0x68))
              (lVar3 + uVar11,
               *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,lVar6)
    ;
    lVar1 = lVar3;
    FUN_100ddce0c(lVar3);
    lStack_88 = lVar2;
    func_0x000107c61588(lVar3);
    (**(code **)(lVar8 + 8))(lVar3 + uVar11,lVar6);
    func_0x000107c6145c(lVar3,0x20,7);
    func_0x000107c5eea0(lVar15);
    lVar3 = lStack_68;
    func_0x000107c5ef28(puVar13,lVar1,lVar14,lVar15);
    func_0x000107c6142c(lVar1);
    pcVar9 = *(code **)(lVar12 + 8);
    lVar1 = lVar4;
    (*pcVar9)(lVar15);
    uVar5 = (uint)lVar1;
    func_0x000107c5ec54();
    (**(code **)(lStack_80 + 8))(puVar13,lStack_78);
    (**(code **)(lStack_70 + 8))(lVar3,lStack_88);
    (*pcVar9)(lVar14,lVar4);
    lVar3 = 0;
    if ((uVar5 & 0xff) != 1) {
      lVar3 = lVar15;
    }
  }
  return lVar3;
}



/* Entry: 100ee63b8; end: 100ee63db;  */

undefined8 FUN_100ee63b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ee63dc; end: 100ee6413;  */

void FUN_100ee63dc(undefined8 param_1)

{
  if (lRam0000000112d490c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61802c);
  return;
}



/* Entry: 100ee6414; end: 100ee6527;  */

void FUN_100ee6414(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_e0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_d8 = &UNK_10d90fbc0;
    puStack_d0 = &UNK_10d90fbc0;
    puStack_c8 = &UNK_10d90fbc0;
    puStack_c0 = &UNK_10d90fbc0;
    puStack_b8 = &UNK_10d90fbd8;
    puStack_b0 = &UNK_10d90fbd8;
    puStack_a8 = &UNK_10d90fbc0;
    puStack_a0 = &UNK_10d90fbc0;
    puStack_98 = &UNK_10d90fbf0;
    puStack_90 = &UNK_10d90fbd8;
    puStack_88 = &UNK_10d90fc08;
    puStack_78 = PTR___sBOWV_11034d658 + 0x40;
    puStack_80 = &UNK_10d90fbf0;
    puStack_60 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_48 = &UNK_10d90fc20;
    puStack_40 = &UNK_10d90fbf0;
    puStack_38 = &UNK_10d90fbd8;
    puStack_30 = &UNK_10d90fc20;
    puStack_70 = puStack_78;
    puStack_68 = puStack_78;
    puStack_58 = puStack_78;
    puStack_50 = puStack_78;
    puStack_28 = puStack_78;
    func_0x000107c61524(param_1,0x100,0x18,&lStack_e0,param_1 + 0xd8);
  }
  return;
}



/* Entry: 100ee6528; end: 100ee652f;  */

void FUN_100ee6528(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000100ee2de0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c3ebcc();
    *puVar5 = uVar1;
    func_0x000107c6159c(puVar5,lVar2,5);
    func_0x0001000285a8(0x112d492c0,&UNK_10d90fc48);
    puVar4 = puVar5;
    func_0x000100854cb0(puVar5);
    func_0x000103dbf524();
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar4);
    FUN_100ee6530(puVar5,0x100ee2de0);
  }
  return;
}



/* Entry: 100ee6530; end: 100ee656b;  */

undefined8 FUN_100ee6530(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ee656c; end: 100ee657b;  */

void FUN_100ee656c(long param_1,long param_2)

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



/* Entry: 100ee657c; end: 100ee6583; -[_TtC40SCRegistrationDisplayNameBirthdayFeature43SCRegistrationDisplayNameBirthdayDatePicker datePickerType] */

undefined8 FUN_100ee657c(void)

{
  return 0;
}



/* Entry: 100ee6584; end: 100ee65ef; -[_TtC40SCRegistrationDisplayNameBirthdayFeature43SCRegistrationDisplayNameBirthdayDatePicker initWithFrame:] */

void FUN_100ee6584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 100ee65f0; end: 100ee666b; -[_TtC40SCRegistrationDisplayNameBirthdayFeature43SCRegistrationDisplayNameBirthdayDatePicker initWithCoder:] */

undefined1 * FUN_100ee65f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100ee666c; end: 100ee66bf;  */

void FUN_100ee666c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ee66c0; end: 100ee6723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee66c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d492f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d492f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ee6724; end: 100ee6837;  */

/* WARNING: Possible PIC construction at 0x000100ee67a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee67f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee67a4) */
/* WARNING: Removing unreachable block (ram,0x000100ee67c0) */
/* WARNING: Removing unreachable block (ram,0x000100ee67e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee67e4) */
/* WARNING: Removing unreachable block (ram,0x000100ee67f8) */
/* WARNING: Removing unreachable block (ram,0x000100ee680c) */
/* WARNING: Removing unreachable block (ram,0x000100ee6820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee6724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af718;
  func_0x000107c610f8(PTR_PTR_1126af718);
  func_0x000107c453e4();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d492f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c3ece0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c55430(puVar1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100ee6838; end: 100ee6907;  */

/* WARNING: Possible PIC construction at 0x000100ee688c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee68c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee6890) */
/* WARNING: Removing unreachable block (ram,0x000100ee6894) */
/* WARNING: Removing unreachable block (ram,0x000100ee68b0) */
/* WARNING: Removing unreachable block (ram,0x000100ee68c4) */
/* WARNING: Removing unreachable block (ram,0x000100ee68e0) */
/* WARNING: Removing unreachable block (ram,0x000100ee68f4) */

void FUN_100ee6838(void)

{
  undefined *puVar1;
  
  func_0x000107c610f8(PTR_PTR_1126af720);
  func_0x000107c453e4();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  func_0x000107c5c1d4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ee6908; end: 100ee6967; -[_TtC40SCRegistrationDisplayNameBirthdayFeature39SCRegistrationDisplayNameBirthdayLogger init] */

void FUN_100ee6908(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCRegistrationDisplayNameBirthdayFeature.SCRegistrationDisplayNameBirthdayLogger"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ee6934);
  (*pcVar1)();
}



/* Entry: 100ee6968; end: 100ee699f; -[_TtC40SCRegistrationDisplayNameBirthdayFeature39SCRegistrationDisplayNameBirthdayLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ee6984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee6988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee6968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d492f0));
  return;
}



/* Entry: 100ee69a0; end: 100ee69f7;  */

void FUN_100ee69a0(void)

{
  func_0x000107c61168(&PTR_PTR_11279ea68);
  return;
}



/* Entry: 100ee69f8; end: 100ee6c23;  */

long * FUN_100ee69f8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar13 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar13;
    lVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
    lVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar4;
    lVar15 = (long)*(int *)(param_3 + 0x20);
    lVar8 = 0;
    func_0x000107c5eea4();
    lVar10 = *(long *)(lVar8 + -8);
    pcVar14 = *(code **)(lVar10 + 0x30);
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar4);
    lVar9 = (long)param_2 + lVar15;
    (*pcVar14)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      pcVar12 = *(code **)(lVar10 + 0x10);
      (*pcVar12)((long)param_1 + lVar15,(long)param_2 + lVar15,lVar8);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar15,(long)param_2 + lVar15,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      pcVar12 = *(code **)(lVar10 + 0x10);
    }
    (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x24),
               (long)param_2 + (long)*(int *)(param_3 + 0x24),lVar8);
    (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x28),
               (long)param_2 + (long)*(int *)(param_3 + 0x28),lVar8);
    lVar13 = (long)*(int *)(param_3 + 0x2c);
    lVar9 = (long)param_2 + lVar13;
    (*pcVar14)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (*pcVar12)((long)param_1 + lVar13,(long)param_2 + lVar13,lVar8);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x34);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0x3c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0x44);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    func_0x000107c61434();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar11 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar9 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 100ee6c24; end: 100ee6cff;  */

/* WARNING: Possible PIC construction at 0x000100ee6c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee6c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee6c48) */
/* WARNING: Removing unreachable block (ram,0x000100ee6c58) */
/* WARNING: Removing unreachable block (ram,0x000100ee6c90) */
/* WARNING: Removing unreachable block (ram,0x000100ee6c9c) */
/* WARNING: Removing unreachable block (ram,0x000100ee6cd4) */
/* WARNING: Removing unreachable block (ram,0x000100ee6ce0) */

void FUN_100ee6c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100ee6d00; end: 100ee71d3;  */

undefined8 * FUN_100ee6d00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  lVar13 = (long)*(int *)(param_3 + 0x20);
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar8 + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar12)(lVar9,1,lVar8);
  if ((int)lVar9 == 0) {
    pcVar11 = *(code **)(lVar10 + 0x10);
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,lVar8);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,lVar8);
  }
  else {
    lVar9 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                        *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    pcVar11 = *(code **)(lVar10 + 0x10);
  }
  (*pcVar11)((long)param_1 + (long)*(int *)(param_3 + 0x24),
             (long)param_2 + (long)*(int *)(param_3 + 0x24),lVar8);
  (*pcVar11)((long)param_1 + (long)*(int *)(param_3 + 0x28),
             (long)param_2 + (long)*(int *)(param_3 + 0x28),lVar8);
  lVar13 = (long)*(int *)(param_3 + 0x2c);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar12)(lVar9,1,lVar8);
  if ((int)lVar9 == 0) {
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,lVar8);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,lVar8);
  }
  else {
    lVar9 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                        *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x44);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100ee71d4; end: 100ee737b;  */

undefined8 * FUN_100ee71d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  lVar9 = (long)*(int *)(param_3 + 0x20);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    pcVar8 = *(code **)(lVar6 + 0x20);
    (*pcVar8)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    pcVar8 = *(code **)(lVar6 + 0x20);
  }
  (*pcVar8)((long)param_1 + (long)*(int *)(param_3 + 0x24),
            (long)param_2 + (long)*(int *)(param_3 + 0x24),lVar4);
  (*pcVar8)((long)param_1 + (long)*(int *)(param_3 + 0x28),
            (long)param_2 + (long)*(int *)(param_3 + 0x28),lVar4);
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x44);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 100ee737c; end: 100ee75f7;  */

undefined8 * FUN_100ee737c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  
  uVar3 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  uVar3 = param_2[3];
  uVar5 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar5);
  uVar3 = param_2[5];
  uVar5 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  func_0x000107c6142c(uVar5);
  uVar3 = param_2[7];
  uVar5 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c6142c(uVar5);
  lVar11 = (long)*(int *)(param_3 + 0x20);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar7 = (long)param_1 + lVar11;
  (*pcVar10)(lVar7,1,lVar6);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar10)(lVar8,1,lVar6);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar11,lVar6);
      goto LAB_100ee746c;
    }
    (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
  }
  else {
LAB_100ee746c:
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                        *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  pcVar12 = *(code **)(lVar9 + 0x28);
  (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x24),
             (long)param_2 + (long)*(int *)(param_3 + 0x24),lVar6);
  (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x28),
             (long)param_2 + (long)*(int *)(param_3 + 0x28),lVar6);
  lVar11 = (long)*(int *)(param_3 + 0x2c);
  lVar7 = (long)param_1 + lVar11;
  (*pcVar10)(lVar7,1,lVar6);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar10)(lVar8,1,lVar6);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (*pcVar12)((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      goto LAB_100ee755c;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar11,lVar6);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    goto LAB_100ee755c;
  }
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                      *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
LAB_100ee755c:
  iVar4 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar5);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  return param_1;
}



/* Entry: 100ee75f8; end: 100ee760f;  */

void FUN_100ee75f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100ee7610; end: 100ee76c3;  */

void FUN_100ee7610(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_90 = &UNK_10d90fce0;
  puStack_88 = &UNK_10d90fce0;
  puStack_80 = &UNK_10d90fce0;
  puStack_78 = &UNK_10d90fce0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8) + 0x40;
    lVar2 = 0x13f;
    lStack_70 = lVar1;
    func_0x000107c5eea4();
    if (param_2 < 0x40) {
      lStack_68 = *(long *)(lVar2 + -8) + 0x40;
      puStack_50 = &UNK_10d90fcf8;
      puStack_48 = &UNK_10d90fcf8;
      puStack_40 = &UNK_10d90fcf8;
      puStack_38 = &UNK_10d90fcf8;
      puStack_30 = &UNK_10d90fd10;
      puStack_28 = &UNK_10d90fcf8;
      lStack_60 = lStack_68;
      lStack_58 = lVar1;
      func_0x000107c6153c(param_1,0x100,0xe,&puStack_90,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 100ee76c4; end: 100ee76cf; -[SCRegistrationDisplayNameBirthdayEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee76c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d493e8;
  func_0x000107c61428(param_1 + _DAT_112d493e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee76d0; end: 100ee76db; -[SCRegistrationDisplayNameBirthdayEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee76d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d493e8;
  func_0x000107c61428(param_1 + _DAT_112d493e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee76dc; end: 100ee76e7; -[SCRegistrationDisplayNameBirthdayEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee76dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d493f0;
  func_0x000107c61428(param_1 + _DAT_112d493f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee76e8; end: 100ee76f3; -[SCRegistrationDisplayNameBirthdayEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee76e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d493f0;
  func_0x000107c61428(param_1 + _DAT_112d493f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee76f4; end: 100ee76ff; -[SCRegistrationDisplayNameBirthdayEntryPoint identityLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee76f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d493f8;
  func_0x000107c61428(param_1 + _DAT_112d493f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7700; end: 100ee770b; -[SCRegistrationDisplayNameBirthdayEntryPoint setIdentityLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d493f8;
  func_0x000107c61428(param_1 + _DAT_112d493f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee770c; end: 100ee7717; -[SCRegistrationDisplayNameBirthdayEntryPoint ageVerificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee770c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49400;
  func_0x000107c61428(param_1 + _DAT_112d49400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7718; end: 100ee7723; -[SCRegistrationDisplayNameBirthdayEntryPoint setAgeVerificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49400;
  func_0x000107c61428(param_1 + _DAT_112d49400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee7724; end: 100ee772f; -[SCRegistrationDisplayNameBirthdayEntryPoint registrationLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49408;
  func_0x000107c61428(param_1 + _DAT_112d49408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7730; end: 100ee773b; -[SCRegistrationDisplayNameBirthdayEntryPoint setRegistrationLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49408;
  func_0x000107c61428(param_1 + _DAT_112d49408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee773c; end: 100ee7747; -[SCRegistrationDisplayNameBirthdayEntryPoint blizzardClientIdProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee773c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49410;
  func_0x000107c61428(param_1 + _DAT_112d49410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7748; end: 100ee7753; -[SCRegistrationDisplayNameBirthdayEntryPoint setBlizzardClientIdProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49410;
  func_0x000107c61428(param_1 + _DAT_112d49410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee7754; end: 100ee775f; -[SCRegistrationDisplayNameBirthdayEntryPoint systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49418;
  func_0x000107c61428(param_1 + _DAT_112d49418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7760; end: 100ee776b; -[SCRegistrationDisplayNameBirthdayEntryPoint setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49418;
  func_0x000107c61428(param_1 + _DAT_112d49418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee776c; end: 100ee7777; -[SCRegistrationDisplayNameBirthdayEntryPoint multiSourceCountryProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee776c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49420;
  func_0x000107c61428(param_1 + _DAT_112d49420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7778; end: 100ee7783; -[SCRegistrationDisplayNameBirthdayEntryPoint setMultiSourceCountryProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49420;
  func_0x000107c61428(param_1 + _DAT_112d49420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee7784; end: 100ee778f; -[SCRegistrationDisplayNameBirthdayEntryPoint deviceInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49428;
  func_0x000107c61428(param_1 + _DAT_112d49428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7790; end: 100ee779b; -[SCRegistrationDisplayNameBirthdayEntryPoint setDeviceInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49428;
  func_0x000107c61428(param_1 + _DAT_112d49428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee779c; end: 100ee77a7; -[SCRegistrationDisplayNameBirthdayEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee779c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49430;
  func_0x000107c61428(param_1 + _DAT_112d49430,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee77a8; end: 100ee77b3; -[SCRegistrationDisplayNameBirthdayEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49430;
  func_0x000107c61428(param_1 + _DAT_112d49430,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee77b4; end: 100ee77bf; -[SCRegistrationDisplayNameBirthdayEntryPoint localNotificationSchedulingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49438;
  func_0x000107c61428(param_1 + _DAT_112d49438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee77c0; end: 100ee77cb; -[SCRegistrationDisplayNameBirthdayEntryPoint setLocalNotificationSchedulingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49438;
  func_0x000107c61428(param_1 + _DAT_112d49438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee77cc; end: 100ee77d7; -[SCRegistrationDisplayNameBirthdayEntryPoint attributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49440;
  func_0x000107c61428(param_1 + _DAT_112d49440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee77d8; end: 100ee77e3; -[SCRegistrationDisplayNameBirthdayEntryPoint setAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49440;
  func_0x000107c61428(param_1 + _DAT_112d49440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee77e4; end: 100ee77ef; -[SCRegistrationDisplayNameBirthdayEntryPoint privacyPolicyViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49448;
  func_0x000107c61428(param_1 + _DAT_112d49448,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee77f0; end: 100ee77fb; -[SCRegistrationDisplayNameBirthdayEntryPoint setPrivacyPolicyViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49448;
  func_0x000107c61428(param_1 + _DAT_112d49448,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee77fc; end: 100ee7807; -[SCRegistrationDisplayNameBirthdayEntryPoint inputValidationServiceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee77fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49450;
  func_0x000107c61428(param_1 + _DAT_112d49450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7808; end: 100ee7813; -[SCRegistrationDisplayNameBirthdayEntryPoint setInputValidationServiceFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49450;
  func_0x000107c61428(param_1 + _DAT_112d49450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee7814; end: 100ee781f; -[SCRegistrationDisplayNameBirthdayEntryPoint usernameSuggestionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7814(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49458;
  func_0x000107c61428(param_1 + _DAT_112d49458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7820; end: 100ee7863;  */

void FUN_100ee7820(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ee7864; end: 100ee786f; -[SCRegistrationDisplayNameBirthdayEntryPoint setUsernameSuggestionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49458;
  func_0x000107c61428(param_1 + _DAT_112d49458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee7870; end: 100ee78c3;  */

void FUN_100ee7870(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ee78c4; end: 100ee790b; -[SCRegistrationDisplayNameBirthdayEntryPoint declaredAgeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee78c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d49460;
  func_0x000107c61428(param_1 + _DAT_112d49460,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ee790c; end: 100ee796f; -[SCRegistrationDisplayNameBirthdayEntryPoint setDeclaredAgeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee790c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d49460;
  func_0x000107c61428(param_1 + _DAT_112d49460,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ee7970; end: 100ee8117;  */

/* WARNING: Possible PIC construction at 0x000100ee7d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee80f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee8010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ee7dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ee7dd4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7df4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e24) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e14) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e54) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e44) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e34) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e84) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e74) */
/* WARNING: Removing unreachable block (ram,0x000100ee7e64) */
/* WARNING: Removing unreachable block (ram,0x000100ee7ec4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7eb4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7ea4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f14) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f04) */
/* WARNING: Removing unreachable block (ram,0x000100ee7ef4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7ee4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f64) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f54) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f44) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f34) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f24) */
/* WARNING: Removing unreachable block (ram,0x000100ee7fb4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7fa4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f94) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f84) */
/* WARNING: Removing unreachable block (ram,0x000100ee7f74) */
/* WARNING: Removing unreachable block (ram,0x000100ee8014) */
/* WARNING: Removing unreachable block (ram,0x000100ee8004) */
/* WARNING: Removing unreachable block (ram,0x000100ee7ff4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7fe4) */
/* WARNING: Removing unreachable block (ram,0x000100ee7fd4) */
/* WARNING: Removing unreachable block (ram,0x000100ee8084) */
/* WARNING: Removing unreachable block (ram,0x000100ee8074) */
/* WARNING: Removing unreachable block (ram,0x000100ee8064) */
/* WARNING: Removing unreachable block (ram,0x000100ee8054) */
/* WARNING: Removing unreachable block (ram,0x000100ee8044) */
/* WARNING: Removing unreachable block (ram,0x000100ee8034) */
/* WARNING: Removing unreachable block (ram,0x000100ee80f4) */
/* WARNING: Removing unreachable block (ram,0x000100ee80e4) */
/* WARNING: Removing unreachable block (ram,0x000100ee80d4) */
/* WARNING: Removing unreachable block (ram,0x000100ee80c4) */
/* WARNING: Removing unreachable block (ram,0x000100ee80b4) */
/* WARNING: Removing unreachable block (ram,0x000100ee80a4) */
/* WARNING: Removing unreachable block (ram,0x000100ee8094) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d80) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d70) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d60) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d50) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d40) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d30) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d20) */
/* WARNING: Removing unreachable block (ram,0x000100ee7d10) */
/* WARNING: Removing unreachable block (ram,0x000100ee7dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ee7970(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3da3c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c4fd10();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = unaff_x20;
        func_0x000107c3eaa0();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar7 = unaff_x20;
          func_0x000107c5c5ec();
          func_0x000107c61180();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar2);
            lVar2 = lVar3;
          }
          else {
            lVar8 = unaff_x20;
            func_0x000107c4d1c8();
            func_0x000107c61180();
            if (lVar8 != 0) {
              lVar9 = unaff_x20;
              func_0x000107c41918();
              func_0x000107c61180();
              if (lVar9 != 0) {
                lVar10 = unaff_x20;
                func_0x000107c5c78c();
                func_0x000107c61180();
                if (lVar10 == 0) {
                  func_0x000107c61170(lVar2);
                  lVar2 = lVar3;
                }
                else {
                  lVar11 = unaff_x20;
                  func_0x000107c4b81c();
                  func_0x000107c61180();
                  if (lVar11 == 0) {
                    func_0x000107c61170(lVar2);
                    lVar2 = lVar3;
                  }
                  else {
                    lVar12 = unaff_x20;
                    func_0x000107c3e3a4();
                    func_0x000107c61180();
                    if (lVar12 != 0) {
                      lVar13 = unaff_x20;
                      func_0x000107c4f268();
                      func_0x000107c61180();
                      if (lVar13 != 0) {
                        lVar14 = unaff_x20;
                        func_0x000107c49700();
                        func_0x000107c61180();
                        if (lVar14 == 0) {
                          func_0x000107c61170(lVar2);
                          lVar2 = lVar3;
                        }
                        else {
                          lVar15 = unaff_x20;
                          func_0x000107c5db30();
                          func_0x000107c61180();
                          if (lVar15 == 0) {
                            func_0x000107c61170(lVar2);
                            lVar2 = lVar3;
                          }
                          else {
                            lVar16 = unaff_x20;
                            func_0x000107c4143c();
                            func_0x000107c61180();
                            if (lVar16 != 0) {
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c44ff0();
                              func_0x000107c61180();
                              lVar17 = 0;
                              FUN_100ede820();
                              lVar18 = lVar17;
                              func_0x000107c610f8();
                              *(undefined8 *)(lVar18 + _DAT_112d48d70) = 0;
                              *(undefined8 *)(lVar18 + _DAT_112d48d78) = 0;
                              *(undefined8 *)(lVar18 + _DAT_112d48d80) = 0;
                              *(undefined8 *)(lVar18 + _DAT_112d48d88) = 0;
                              *(long *)(lVar18 + _DAT_112d48d90) = lVar2;
                              *(long *)(lVar18 + _DAT_112d48d98) = lVar3;
                              *(long *)(lVar18 + _DAT_112d48da0) = unaff_x20;
                              *(long *)(lVar18 + _DAT_112d48da8) = lVar4;
                              *(long *)(lVar18 + _DAT_112d48db0) = lVar5;
                              *(long *)(lVar18 + _DAT_112d48db8) = lVar6;
                              *(long *)(lVar18 + _DAT_112d48dc0) = lVar7;
                              *(long *)(lVar18 + _DAT_112d48dc8) = lVar8;
                              *(long *)(lVar18 + _DAT_112d48dd0) = lVar9;
                              *(long *)(lVar18 + _DAT_112d48dd8) = lVar10;
                              *(long *)(lVar18 + _DAT_112d48de0) = lVar11;
                              *(long *)(lVar18 + _DAT_112d48de8) = lVar12;
                              *(long *)(lVar18 + _DAT_112d48df0) = lVar13;
                              *(long *)(lVar18 + _DAT_112d48df8) = lVar14;
                              *(long *)(lVar18 + _DAT_112d48e00) = lVar15;
                              *(long *)(lVar18 + _DAT_112d48e08) = lVar16;
                              puVar1 = PTR_s_init_1125d9248;
                              lStack_70 = lVar18;
                              lStack_68 = lVar17;
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174();
                              func_0x000107c61174(lVar10);
                              func_0x000107c61174(lVar11);
                              func_0x000107c61174(lVar12);
                              func_0x000107c61174(lVar13);
                              func_0x000107c61174(lVar14);
                              func_0x000107c61174(lVar15);
                              func_0x000107c61174(lVar16);
                              func_0x000107c61154(&lStack_70,puVar1);
                              FUN_100edc8cc();
                              lVar2 = lVar16;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ee8118; end: 100ee813f; -[SCRegistrationDisplayNameBirthdayEntryPoint begin] */

void FUN_100ee8118(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ee7970();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ee8140; end: 100ee8183; -[SCRegistrationDisplayNameBirthdayEntryPoint end] */

void FUN_100ee8140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


