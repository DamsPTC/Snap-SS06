/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e088dc; end: 102e088e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e088dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar8 = &puStack_a0;
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f1c608;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + _DAT_112f1c608) == '\x01') {
      uVar9 = *(undefined8 *)(lVar4 + _DAT_112f1c640);
      puStack_90 = (undefined *)lVar4;
      func_0x000107c6157c(uVar9);
      func_0x000100087bd4(FUN_102e08d30,&puStack_a0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar9);
      *(undefined1 *)(lVar4 + lVar3) = 0;
      pcVar5 = "fireRecordingStateChanged(_:)";
      func_0x0001000c10c0("fireRecordingStateChanged(_:)");
      func_0x000107c61180();
      puVar6 = &UNK_1105d66f0;
      func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar4);
      puVar7 = &UNK_1105d6830;
      func_0x000107c613fc(&UNK_1105d6830,0x19,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      puVar7[0x18] = 0;
      uStack_80 = 0x102e08de0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1105d6848;
      puStack_78 = puVar7;
      func_0x000107c60bc4(&puStack_a0);
      func_0x000107c61574(puStack_78);
      func_0x000107c4e524(pcVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(pcVar5);
      func_0x0001007d6c6c(1,0x100000000000004d,0x800000010f10ef80,uVar2,&PTR_DAT_1105d8228);
      (*pcVar1)();
      func_0x000107c61170(lVar4);
      return;
    }
    func_0x000107c61170();
  }
  func_0x0001007d6c6c(1,0x1000000000000049,0x800000010f10ef30,uVar2,&PTR_DAT_1105d8228);
  (*pcVar1)();
  return;
}



/* Entry: 102e088e8; end: 102e08927;  */

void FUN_102e088e8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 102e08928; end: 102e08953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08928(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + _DAT_112f1c608) & 1) == 0) {
      if (*(char *)(lVar3 + _DAT_112f1c600) == '\x01') {
        if (*(char *)(lVar3 + _DAT_112f1c5f8) == '\x01') {
          *(undefined1 *)(lVar3 + _DAT_112f1c608) = 1;
          uVar9 = 0x112f1c690;
          lStack_b0 = lVar3;
          func_0x0001000285a8(0x112f1c690,&UNK_10db54d18);
          func_0x000100087bd4(&puStack_a0,FUN_102e08dfc,auStack_c0,uVar9);
          puVar1 = (undefined8 *)(lVar3 + _DAT_112f1c638);
          puVar1[1] = uStack_98;
          *puVar1 = puStack_a0;
          puVar1[3] = puStack_88;
          puVar1[2] = puStack_90;
          *(undefined1 *)(puVar1 + 4) = (undefined1)uStack_80;
          pcVar5 = "fireRecordingStateChanged(_:)";
          func_0x0001000c10c0("fireRecordingStateChanged(_:)");
          func_0x000107c61180();
          puVar6 = &UNK_1105d66f0;
          func_0x000107c613fc(&UNK_1105d66f0,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,lVar3);
          puVar7 = &UNK_1105d6920;
          func_0x000107c613fc(&UNK_1105d6920,0x19,7);
          *(undefined **)(puVar7 + 0x10) = puVar6;
          puVar7[0x18] = 1;
          uStack_80 = 0x102e08de4;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1105d6938;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_78);
          func_0x000107c4e524(pcVar5);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c615e8(pcVar5);
          uStack_98 = puVar1[1];
          puStack_a0 = (undefined *)*puVar1;
          puStack_88 = (undefined *)puVar1[3];
          puStack_90 = (undefined *)puVar1[2];
          uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)(puVar1 + 4));
          func_0x000102e09694(0);
          func_0x000107c613fc();
          ppuVar8 = &puStack_a0;
          FUN_102e09224();
          uVar9 = *(undefined8 *)(lVar3 + _DAT_112f1c640);
          lStack_b0 = lVar3;
          ppuStack_a8 = ppuVar8;
          func_0x000107c6157c(uVar9);
          func_0x000100087bd4(FUN_102e08954,auStack_c0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar9);
          func_0x0001007d6c6c(1,0xd00000000000003a,0x800000010f10f090,uVar2,&PTR_DAT_1105d8228);
          func_0x000107c61170(lVar3);
          func_0x000107c61574(ppuVar8);
          return;
        }
        uVar9 = 0x1000000000000062;
        uVar10 = 0x800000010f10f020;
        uVar4 = 2;
      }
      else {
        uVar9 = 0x1000000000000047;
        uVar10 = 0x800000010f10efd0;
        uVar4 = 1;
      }
    }
    else {
      uVar10 = 0x800000010f10f0d0;
      uVar4 = 1;
      uVar9 = 0x100000000000002c;
    }
    func_0x0001007d6c6c(uVar4,uVar9,uVar10,uVar2,&PTR_DAT_1105d8228);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e08954; end: 102e08993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08954(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c648);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c648) = uVar1;
  func_0x000107c61574(uVar2);
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 102e08994; end: 102e0899f;  */

void FUN_102e08994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_1105d6b28;
  func_0x000107c613fc(&UNK_1105d6b28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  uStack_40 = 0x102e08dec;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d6b40;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102e089a0; end: 102e089bf;  */

void FUN_102e089a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e089c0; end: 102e089cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e089c0(byte param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar1)();
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar4 + _DAT_112f1c5e0);
    puVar5 = &UNK_1105d6ad8;
    lStack_c0 = lVar12;
    func_0x000107c613fc(&UNK_1105d6ad8,0x38,7);
    puVar5[0x10] = param_1 & 1;
    *(long *)(puVar5 + 0x18) = lVar4;
    *(code **)(puVar5 + 0x20) = pcVar1;
    *(undefined8 *)(puVar5 + 0x28) = uVar7;
    *(undefined8 *)(puVar5 + 0x30) = uVar8;
    uStack_88 = 0x102e08a14;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1105d6af0;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61174(lVar4);
    func_0x000107c6157c(uVar7);
    func_0x000107c5f808(lVar3);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0x112d4af88;
    FUN_102e08710(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = 0x112d4af98;
    func_0x000102e08aac(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(puVar10,&puStack_b0,uVar8,uVar9,lVar2,uVar7);
    func_0x000107c5ffe8(0,lVar3,puVar10,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    (**(code **)(lStack_c0 + 8))(puVar10,lVar2);
    (**(code **)(lVar11 + 8))(lVar3,lStack_b8);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puStack_80);
  }
  return;
}



/* Entry: 102e089cc; end: 102e08a07;  */

void FUN_102e089cc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e08a08; end: 102e08a33;  */

void FUN_102e08a08(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102e06098();
    func_0x000107c61170(lVar2);
  }
  (*pcVar1)();
  return;
}



/* Entry: 102e08a34; end: 102e08a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08a34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c620);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c620) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102e08a6c; end: 102e08aef;  */

void FUN_102e08a6c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e08af0; end: 102e08bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08af0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long alStack_70 [2];
  undefined1 auStack_60 [16];
  
  func_0x000107c60a1c();
  func_0x000107c61180();
  puVar1 = PTR___sytN_11034f1b0;
  if (param_1 != 0) {
    func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_112f1c618),FUN_102e08bfc,auStack_60,
                        PTR___sytN_11034f1b0 + 8);
    uVar2 = 0x112f1c698;
    func_0x0001000285a8(0x112f1c698,&UNK_10db54d38);
    func_0x000100087bd4(alStack_70,FUN_102e08c3c,auStack_60,uVar2);
    if (alStack_70[0] != 0) {
      puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c610f8();
      func_0x000107c45b18();
      func_0x000100087bd4(0x102e08c64,auStack_60,puVar1 + 8);
      func_0x000107c61170(puVar3);
      func_0x000107c61574(alStack_70[0]);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e08bfc; end: 102e08c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08bfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c620);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c620) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 102e08c3c; end: 102e08c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08c3c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1c648);
  func_0x000107c6157c();
  return;
}



/* Entry: 102e08c7c; end: 102e08c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08c7c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f1c5c0;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + _DAT_112f1c600) == '\x01') {
      uVar4 = *(ulong *)(lVar3 + _DAT_112f1c5c0);
      func_0x000107c4a360();
      if ((uVar4 & 1) == 0) {
        func_0x0001007d6c6c(1,0x1000000000000039,0x800000010f10f560,uVar1,&PTR_DAT_1105d8228);
        func_0x000107c5bba0(*(undefined8 *)(lVar3 + lVar2));
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e08c84; end: 102e08cc3;  */

undefined8 FUN_102e08c84(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102e08cc4; end: 102e08ceb;  */

void FUN_102e08cc4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105d6c90;
  if (lRam0000000112f1c6b8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f1c6b8 = param_1;
  }
  return;
}



/* Entry: 102e08cec; end: 102e08d2f;  */

void FUN_102e08cec(long param_1,long *param_2,long param_3)

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



/* Entry: 102e08d30; end: 102e08d57;  */

void FUN_102e08d30(void)

{
  FUN_102e08870();
  return;
}



/* Entry: 102e08d58; end: 102e08dfb;  */

void FUN_102e08d58(long param_1,long param_2)

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



/* Entry: 102e08dfc; end: 102e08e23;  */

void FUN_102e08dfc(void)

{
  FUN_102e08788();
  return;
}



/* Entry: 102e08e24; end: 102e08fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102e08e24(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f1c6c8;
  puVar2 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f1c6c8;
  uVar5 = *(undefined8 *)(puVar3 + _DAT_112f1c6c8);
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c58fb4(uVar5);
  func_0x000107c5a51c(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c562fc(*(undefined8 *)(puVar3 + lVar1));
  puVar3 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c5a378(puVar4);
  func_0x000107c55528(puVar4);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f10f5d0);
  func_0x000107c520fc(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c52100(puVar4);
  uVar5 = 0x6e4f;
  func_0x000107c5fadc(0x6e4f,0xe200000000000000);
  func_0x000107c52104(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  return puVar4;
}



/* Entry: 102e08fdc; end: 102e09057; -[_TtC21PlayGamesServicesImpl26PlayGamesCameraOverlayView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e08fdc(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f1c6c8;
  puVar3 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlayGamesServicesImpl/PlayGamesCameraOverlayView.swift",0x36,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e09058);
  (*pcVar2)();
}



/* Entry: 102e09058; end: 102e0916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e09058(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c609cc();
  param_1 = param_1 * 0.5;
  func_0x000107c539d4(param_1,lVar1);
  func_0x000107c61170(lVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1c6c8);
  func_0x000107c3ec60();
  func_0x000107c54b80(uVar4);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  func_0x000107c539d4(param_1 * 0.5,uVar4);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4018000000000000,0x3fd6666666666666,0,0x4008000000000000,puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102e0916c; end: 102e09193; -[_TtC21PlayGamesServicesImpl26PlayGamesCameraOverlayView layoutSubviews] */

void FUN_102e0916c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e09058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e09194; end: 102e091f3; -[_TtC21PlayGamesServicesImpl26PlayGamesCameraOverlayView initWithFrame:] */

void FUN_102e09194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesCameraOverlayView",0x30,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e091c0);
  (*pcVar1)();
}



/* Entry: 102e091f4; end: 102e09203; -[_TtC21PlayGamesServicesImpl26PlayGamesCameraOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e091f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1c6c8));
  return;
}



/* Entry: 102e09204; end: 102e09223;  */

void FUN_102e09204(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7558);
  return;
}



/* Entry: 102e09224; end: 102e092a7;  */

void FUN_102e09224(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  FUN_102e09eb0();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar1 = PTR__CGRectNull_1103475e8;
  *(undefined4 *)(unaff_x20 + 0x68) = 0;
  uVar2 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(param_1 + 4);
  return;
}



/* Entry: 102e092a8; end: 102e092e3;  */

void FUN_102e092a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_2);
  return;
}



/* Entry: 102e092e4; end: 102e093bb;  */

ulong FUN_102e092e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x70);
  if (uVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c609ac(uVar3,uVar4,uVar5,uVar6,param_1,param_2,param_3,param_4);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
    func_0x000107c61170();
  }
  FUN_102e0b13c(param_1,param_2,param_3,param_4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  *(ulong *)(unaff_x20 + 0x70) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  *(undefined8 *)(unaff_x20 + 0x88) = param_3;
  *(undefined8 *)(unaff_x20 + 0x90) = param_4;
  return uVar1;
}



/* Entry: 102e093bc; end: 102e0964f;  */

void FUN_102e093bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  int iVar10;
  undefined8 uStack_150;
  undefined1 auStack_148 [224];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x000107c60ac8();
  lVar3 = param_1;
  func_0x000107c60ab8();
  func_0x000107c60ac0();
  puVar1 = PTR__kCFAllocatorDefault_11034ab78;
  lVar4 = *(long *)(unaff_x20 + 0x50);
  iVar10 = (int)param_1;
  if ((((lVar4 == 0) || (*(long *)(unaff_x20 + 0x58) != lVar2)) ||
      (*(long *)(unaff_x20 + 0x60) != lVar3)) || (*(int *)(unaff_x20 + 0x68) != iVar10)) {
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_148;
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 8;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    uVar5 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    puVar6 = PTR___ss6UInt32VN_11034f020;
    *(undefined1 **)(lVar4 + 0x28) = puVar8;
    *(undefined **)(lVar4 + 0x48) = puVar6;
    *(int *)(lVar4 + 0x30) = iVar10;
    uVar5 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
    func_0x000107c5faec();
    puVar6 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar4 + 0x50) = uVar5;
    *(undefined1 **)(lVar4 + 0x58) = puVar8;
    *(undefined **)(lVar4 + 0x78) = puVar6;
    *(long *)(lVar4 + 0x60) = lVar2;
    uVar5 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
    *(undefined1 **)(lVar4 + 0x88) = puVar8;
    *(undefined **)(lVar4 + 0xa8) = puVar6;
    *(long *)(lVar4 + 0x90) = lVar3;
    uVar5 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0xb0) = uVar5;
    *(undefined1 **)(lVar4 + 0xb8) = puVar8;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar5 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar4 + 0xd8) = uVar5;
    *(undefined **)(lVar4 + 0xc0) = puVar6;
    lVar7 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    uVar5 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar4 + 0x20),4,uVar5);
    uStack_150 = 0;
    uVar5 = *(undefined8 *)puVar1;
    lVar4 = lVar7;
    func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar7);
    func_0x000107c60ad4(uVar5,0,lVar4,&uStack_150);
    func_0x000107c61170(lVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = uStack_150;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    *(long *)(unaff_x20 + 0x58) = lVar2;
    *(long *)(unaff_x20 + 0x60) = lVar3;
    *(int *)(unaff_x20 + 0x68) = iVar10;
    func_0x000107c61170(uStack_150);
    lVar4 = *(long *)(unaff_x20 + 0x50);
    uVar5 = 0;
    if (lVar4 == 0) goto LAB_102e09614;
  }
  uStack_150 = 0;
  uVar9 = *(undefined8 *)puVar1;
  func_0x000107c61174();
  func_0x000107c60ad8(uVar9,lVar4,&uStack_150);
  func_0x000107c61170(lVar4);
  uVar5 = uStack_150;
  unaff_x20 = lVar4;
  if ((int)uVar9 != 0) {
    func_0x000107c61170(uStack_150);
    uVar5 = 0;
  }
LAB_102e09614:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x98,7);
  return;
}



/* Entry: 102e09650; end: 102e096b3;  */

void FUN_102e09650(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e096b4; end: 102e0987f;  */

void FUN_102e096b4(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x0001010f5ddc();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102e09880();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x000102e09cdc(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 102e09880; end: 102e09eaf;  */

void FUN_102e09880(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112d5dff0,&UNK_10db286d0);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_102e09964;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_102e09964:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e09a04);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102e099d4;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102e099d4:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102e09eb0; end: 102e0a10f;  */

undefined * FUN_102e09eb0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long alStack_c0 [3];
  long lStack_a8;
  undefined1 auStack_a0 [104];
  long lStack_38;
  
  lVar2 = 0x112ef9150;
  func_0x0001000285a8(0x112ef9150,&UNK_10db28670);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR__kCIContextCacheIntermediates_11034ad08;
  *(undefined **)(lVar2 + 0x40) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar2 + 0x28) = 0;
  func_0x000107c61174();
  lVar1 = lVar2;
  func_0x0001010fe1c8();
  func_0x000107c61588(lVar2);
  FUN_102e0a4a0((undefined8 *)(lVar2 + 0x20),0x112d5dff8,&UNK_10d9246e0);
  lVar2 = *(long *)PTR__kCGColorSpaceSRGB_110347640;
  lStack_38 = lVar1;
  func_0x000107c608c0();
  puVar7 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    puVar7 = *(undefined1 **)PTR__kCIContextWorkingColorSpace_11034ad28;
    lVar3 = 0;
    FUN_102e08cc4();
    alStack_c0[0] = lVar2;
    lStack_a8 = lVar3;
    if (lVar3 == 0) {
      func_0x000107c61174(puVar7);
      FUN_102e0a4a0(alStack_c0,0x112d387f8,&UNK_10d902650);
      func_0x000102e096b4(auStack_a0,puVar7);
      func_0x000107c61170(puVar7);
      puVar7 = auStack_a0;
      FUN_102e0a4a0(puVar7,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(alStack_c0,auStack_a0);
      func_0x000107c61174();
      lVar2 = lVar1;
      func_0x000107c61558(lVar1);
      alStack_c0[0] = lVar1;
      func_0x000102e09778(auStack_a0,puVar7,lVar2);
      func_0x000107c61170();
      lStack_38 = alStack_c0[0];
    }
  }
  func_0x000107c60ae4();
  lVar2 = lStack_38;
  lVar1 = lVar2;
  if (puVar7 == (undefined1 *)0x0) {
    puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c610f8(PTR__OBJC_CLASS___CIContext_1126b3120);
    uVar4 = 0;
    func_0x0001010f6448(0);
    uVar6 = uVar4;
    FUN_102b6b6dc();
    func_0x000107c5f9dc(lVar2,uVar4,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c47c98(puVar5);
    func_0x000107c6142c(lVar2);
  }
  else {
    uVar4 = 0;
    func_0x0001010f6448(0);
    uVar6 = uVar4;
    FUN_102b6b6dc();
    func_0x000107c5f9dc(lVar2,uVar4,PTR___sypN_11034f1a8 + 8,uVar6);
    puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c61168(PTR__OBJC_CLASS___CIContext_1126b3120);
    func_0x000107c40614();
    func_0x000107c61180();
    func_0x000107c6142c(lVar2);
    func_0x000107c615e8(puVar7);
  }
  func_0x000107c61170(lVar1);
  return puVar5;
}



/* Entry: 102e0a110; end: 102e0a42f;  */

/* WARNING: Possible PIC construction at 0x000102e0a2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0a3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0a2c0) */
/* WARNING: Removing unreachable block (ram,0x000102e0a3dc) */
/* WARNING: Removing unreachable block (ram,0x000102e0a368) */
/* WARNING: Removing unreachable block (ram,0x000102e0a3e4) */
/* WARNING: Removing unreachable block (ram,0x000102e0a40c) */

void FUN_102e0a110(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined1 auStack_1b0 [128];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  puVar5 = auStack_1b0;
  func_0x0001000285a8(0x112f1c7e0,&UNK_10db54e30);
  func_0x000100087bd4(&lStack_f0,FUN_102e0a430);
  lVar2 = lStack_f0;
  if (lStack_f0 != 0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c45b18();
    func_0x000107c42c78();
    if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar1);
    }
    else {
      dVar6 = param_3;
      dVar7 = param_4;
      func_0x000107c42c78(lVar2);
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x28);
      uStack_a0 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_80 = *(undefined1 *)(unaff_x20 + 0x40);
      FUN_102e0ad64(&lStack_f0,dVar6,dVar7,param_3,param_4,&uStack_a0);
      uStack_128 = uStack_c8;
      uStack_130 = uStack_d0;
      uStack_118 = uStack_b8;
      uStack_120 = uStack_c0;
      uStack_108 = uStack_a8;
      uStack_110 = uStack_b0;
      func_0x000107c45044(lVar2);
      func_0x000107c61180();
      func_0x000107c5fadc(0x57646e656c424943,0xef6b73614d687469);
      lVar2 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      uVar3 = *(undefined8 *)PTR__kCIInputMaskImageKey_11034ad88;
      func_0x000107c5faec();
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined1 **)(lVar2 + 0x28) = puVar5;
      FUN_102e092e4(lStack_f0,uStack_e8,uStack_e0,uStack_d8);
      uVar4 = 0;
      FUN_102e0a45c();
      *(undefined8 *)(lVar2 + 0x48) = uVar4;
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
      uVar3 = *(undefined8 *)PTR__kCIInputBackgroundImageKey_11034ad60;
      func_0x000107c5faec();
      *(undefined8 *)(lVar2 + 0x50) = uVar3;
      *(undefined1 **)(lVar2 + 0x58) = puVar5;
      *(undefined8 *)(lVar2 + 0x78) = uVar4;
      *(undefined **)(lVar2 + 0x60) = puVar1;
      param_5 = puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_5);
  return;
}



/* Entry: 102e0a430; end: 102e0a45b;  */

void FUN_102e0a430(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174();
  return;
}



/* Entry: 102e0a45c; end: 102e0a49f;  */

void FUN_102e0a45c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1c7e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f1c7e8 = puVar1;
  return;
}



/* Entry: 102e0a4a0; end: 102e0a4df;  */

undefined8 FUN_102e0a4a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102e0a4e0; end: 102e0a4fb;  */

void FUN_102e0a4e0(undefined8 param_1)

{
  FUN_102e0a4fc();
  uRam0000000112f1c7f8 = param_1;
  return;
}



/* Entry: 102e0a4fc; end: 102e0a68f;  */

undefined * FUN_102e0a4fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar1 = 0x112ef9150;
  func_0x0001000285a8(0x112ef9150,&UNK_10db28670);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  *puVar6 = *(undefined8 *)PTR__kCIContextWorkingColorSpace_11034ad28;
  uVar5 = *(undefined8 *)PTR__kCGColorSpaceSRGB_110347640;
  func_0x000107c61174();
  func_0x000107c608c0();
  uVar2 = 0x112f1c800;
  func_0x0001000285a8(0x112f1c800,&UNK_10db54e38);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  lVar3 = lVar1;
  func_0x0001010fe1c8(lVar1);
  func_0x000107c61588(lVar1);
  FUN_102b6b694();
  func_0x000107c60ae4();
  lVar1 = lVar3;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c610f8(PTR__OBJC_CLASS___CIContext_1126b3120);
    uVar5 = 0;
    func_0x0001010f6448(0);
    uVar2 = uVar5;
    FUN_102b6b6dc();
    func_0x000107c5f9dc(lVar3,uVar5,PTR___sypN_11034f1a8 + 8,uVar2);
    func_0x000107c6142c(lVar3);
    func_0x000107c47c98(puVar4);
  }
  else {
    uVar5 = 0;
    func_0x0001010f6448(0);
    uVar2 = uVar5;
    FUN_102b6b6dc();
    func_0x000107c5f9dc(lVar3,uVar5,PTR___sypN_11034f1a8 + 8,uVar2);
    func_0x000107c6142c(lVar3);
    puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c61168(PTR__OBJC_CLASS___CIContext_1126b3120);
    func_0x000107c40614();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
  }
  func_0x000107c61170(lVar1);
  return puVar4;
}



/* Entry: 102e0a690; end: 102e0a6f3;  */

void FUN_102e0a690(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e0a6f4);
  (*pcVar2)();
}



/* Entry: 102e0a6f4; end: 102e0ac17;  */

undefined *
FUN_102e0a6f4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined *param_5
             ,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_180 [128];
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar17 = param_5;
  func_0x000107c450e0();
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61174();
    pcVar1 = (code *)0x0;
    puVar17 = (undefined *)0x0;
  }
  else {
    uVar2 = 0;
    FUN_102e0ac9c(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c614e8();
    func_0x000107c415a4();
    func_0x000107c61180();
    func_0x000107c51820(param_5);
    func_0x000107c58bfc(uVar2);
    func_0x000107c5b078(param_5);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8();
    func_0x000107c486fc(param_1,param_2);
    puVar17 = &UNK_1105d6d58;
    func_0x000107c613fc(&UNK_1105d6d58,0x18,7);
    *(undefined **)(puVar17 + 0x10) = param_5;
    puVar4 = &UNK_1105d6d80;
    func_0x000107c613fc(&UNK_1105d6d80,0x20,7);
    pcVar1 = FUN_102e0ac18;
    *(code **)(puVar4 + 0x10) = FUN_102e0ac18;
    *(undefined **)(puVar4 + 0x18) = puVar17;
    uStack_a8 = 0x102e0ac50;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_100f9148c;
    puStack_b0 = &UNK_1105d6d98;
    ppuVar5 = &puStack_c8;
    puStack_a0 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puStack_a0;
    func_0x000107c61174(param_5);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    param_5 = puVar3;
    func_0x000107c45138();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    puVar6 = puVar4;
    func_0x000107c61544(puVar4,"",0x7e,0x20,0x55,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0a89c);
      (*pcVar1)();
    }
  }
  puVar4 = param_5;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c45af0();
    func_0x000107c42c78();
    if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
      func_0x000107c61170(puVar6);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
      dVar19 = param_3;
      dVar20 = param_4;
      func_0x000107c610f8();
      func_0x000107c45b18();
      func_0x000107c42c78();
      FUN_102e0ad64(&puStack_c8,dVar19,dVar20,param_3,param_4,param_7);
      puStack_f8 = puStack_a0;
      uStack_100 = uStack_a8;
      uStack_e8 = uStack_90;
      uStack_f0 = uStack_98;
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      puVar7 = puVar3;
      func_0x000107c45044();
      func_0x000107c61180();
      puVar8 = puVar7;
      FUN_102e0b13c(puStack_c8,uStack_c0,puStack_b8,puStack_b0);
      uVar9 = 0x57646e656c424943;
      func_0x000107c5fadc(0x57646e656c424943,0xef6b73614d687469);
      lVar10 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar16 = auStack_180;
      func_0x000107c61534();
      uVar18 = 2;
      *(undefined8 *)(lVar10 + 0x18) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 2;
      uVar2 = *(undefined8 *)PTR__kCIInputMaskImageKey_11034ad88;
      func_0x000107c5faec();
      *(undefined8 *)(lVar10 + 0x20) = uVar2;
      *(undefined1 **)(lVar10 + 0x28) = puVar16;
      uVar2 = 0x112f1c7e8;
      uVar11 = 0;
      FUN_102e0ac9c(0,0x112f1c7e8,&PTR__OBJC_CLASS___CIImage_1126b3128);
      *(undefined8 *)(lVar10 + 0x48) = uVar11;
      *(undefined **)(lVar10 + 0x30) = puVar8;
      uVar12 = *(undefined8 *)PTR__kCIInputBackgroundImageKey_11034ad60;
      func_0x000107c5faec();
      *(undefined8 *)(lVar10 + 0x50) = uVar12;
      *(undefined8 *)(lVar10 + 0x58) = uVar2;
      *(undefined8 *)(lVar10 + 0x78) = uVar11;
      *(undefined **)(lVar10 + 0x60) = puVar6;
      func_0x000107c61174();
      func_0x000107c61174(puVar6);
      lVar13 = lVar10;
      func_0x000100214a84(lVar10);
      func_0x000107c61588(lVar10);
      uVar2 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,uVar2);
      lVar10 = lVar13;
      func_0x000107c5f9dc(lVar13,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar13);
      puVar14 = puVar7;
      func_0x000107c45040(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar10);
      if (lRam0000000112f1c7f0 != -1) {
        func_0x000107c61568(0x112f1c7f0,FUN_102e0a4e0);
      }
      lVar10 = lRam0000000112f1c7f8;
      func_0x000107c42c78(puVar6);
      func_0x000107c4094c();
      if (lVar10 != 0) {
        func_0x000107c51820(param_5);
        puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c45afc(uVar18);
        func_0x000107c61170(param_5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar10);
        func_0x000102e0ac8c(pcVar1,puVar17);
        return puVar15;
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      puVar4 = puVar14;
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_5);
  func_0x000102e0ac8c(pcVar1,puVar17);
  return (undefined *)0x0;
}



/* Entry: 102e0ac18; end: 102e0ac6f;  */

void FUN_102e0ac18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5b078(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_1,param_2,uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 102e0ac70; end: 102e0ac9b;  */

void FUN_102e0ac70(long param_1,long param_2)

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



/* Entry: 102e0ac9c; end: 102e0ad07;  */

void FUN_102e0ac9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e0ad08; end: 102e0ad63;  */

int FUN_102e0ad08(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102e0ad64; end: 102e0b13b;  */

void FUN_102e0ad64(double *param_1,double param_2,double param_3,double param_4,double param_5,
                  double *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_170;
  double dStack_160;
  double dStack_150;
  double dStack_148;
  undefined8 uStack_130;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  param_2 = ABS(param_2);
  param_3 = ABS(param_3);
  dVar18 = param_3;
  if (param_2 <= param_3) {
    dVar18 = param_2;
  }
  dVar19 = (param_2 - dVar18) * 0.5;
  dVar20 = (param_3 - dVar18) * 0.5;
  dVar14 = (double)(long)(param_4 * 0.28) * 0.5;
  if (*(char *)(param_6 + 4) == '\x01') {
    dStack_150 = 0.0;
    dStack_148 = 0.0;
    dStack_160 = 0.0;
    dVar17 = (double)(long)dVar14;
  }
  else {
    dStack_150 = *param_6;
    dStack_148 = param_6[1];
    dStack_160 = param_6[3];
    dVar17 = (double)(long)(dVar14 * param_6[2]);
    if (param_6[2] <= 0.01) {
      dVar17 = (double)(long)(dVar14 * 0.01);
    }
  }
  dVar16 = dVar17 + dVar17;
  func_0x000107c60888(&dStack_90,0x3ff921fb54442d18);
  dVar7 = dStack_68;
  dVar6 = dStack_70;
  dVar5 = dStack_78;
  dVar4 = dStack_80;
  dVar13 = dStack_88;
  dVar11 = dStack_90;
  uVar8 = func_0x000107c609b8(dVar19,dVar20,dVar18,dVar18);
  dVar19 = (double)func_0x000107c609c4(dVar19,dVar20,dVar18,dVar18);
  func_0x000107c60890(&dStack_90,uVar8,-dVar19);
  dStack_b8 = dStack_88;
  dStack_c0 = dStack_90;
  dStack_a8 = dStack_78;
  dStack_b0 = dStack_80;
  dStack_98 = dStack_68;
  dStack_a0 = dStack_70;
  dStack_90 = dVar11;
  dStack_88 = dVar13;
  dStack_80 = dVar4;
  dStack_78 = dVar5;
  dStack_70 = dVar6;
  dStack_68 = dVar7;
  func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
  dVar5 = dStack_c8;
  dVar4 = dStack_d0;
  dVar13 = dStack_d8;
  dVar11 = dStack_e0;
  dVar20 = dStack_e8;
  dVar19 = dStack_f0;
  func_0x000107c6088c(&dStack_90,dVar16 / dVar18,dVar16 / dVar18);
  dStack_98 = dStack_68;
  dStack_a0 = dStack_70;
  dStack_a8 = dStack_78;
  dStack_b0 = dStack_80;
  dStack_b8 = dStack_88;
  dStack_c0 = dStack_90;
  dStack_78 = dVar13;
  dStack_80 = dVar11;
  dStack_68 = dVar5;
  dStack_70 = dVar4;
  dStack_88 = dVar20;
  dStack_90 = dVar19;
  func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
  dVar19 = dStack_d8;
  dVar18 = dStack_e8;
  auVar10._8_8_ = dStack_d8;
  auVar10._0_8_ = dStack_e0;
  auVar15._8_8_ = dStack_c8;
  auVar15._0_8_ = dStack_d0;
  auVar12._8_8_ = dStack_e8;
  auVar12._0_8_ = dStack_f0;
  auVar15 = NEON_ext(auVar15,auVar15,8,1);
  dVar13 = dStack_f0;
  dVar11 = dStack_e0;
  uStack_130 = auVar15._0_8_;
  dVar20 = dStack_d0;
  if (dStack_160 == 0.0) {
    auVar10 = NEON_ext(auVar10,auVar10,8,1);
    auVar12 = NEON_ext(auVar12,auVar12,8,1);
    uStack_170 = auVar10._0_8_;
    dStack_160 = auVar12._0_8_;
  }
  else {
    func_0x000107c60890(&dStack_90,-dVar17,-dVar17);
    dStack_a8 = dStack_78;
    dStack_b8 = dStack_88;
    dStack_88 = dVar18;
    dStack_78 = dVar19;
    dStack_c0 = dStack_90;
    dStack_b0 = dStack_80;
    dStack_98 = dStack_68;
    dStack_a0 = dStack_70;
    dStack_90 = dVar13;
    dStack_80 = dVar11;
    dStack_70 = dVar20;
    dStack_68 = (double)uStack_130;
    func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
    dVar4 = dStack_c8;
    dVar13 = dStack_d0;
    dVar11 = dStack_d8;
    dVar20 = dStack_e0;
    dVar19 = dStack_e8;
    dVar18 = dStack_f0;
    func_0x000107c60888(&dStack_90,dStack_160);
    dStack_98 = dStack_68;
    dStack_a0 = dStack_70;
    dStack_a8 = dStack_78;
    dStack_b0 = dStack_80;
    dStack_b8 = dStack_88;
    dStack_c0 = dStack_90;
    dStack_78 = dVar11;
    dStack_80 = dVar20;
    dStack_68 = dVar4;
    dStack_70 = dVar13;
    dStack_88 = dVar19;
    dStack_90 = dVar18;
    func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
    dVar4 = dStack_c8;
    dVar13 = dStack_d0;
    dVar11 = dStack_d8;
    dVar20 = dStack_e0;
    dVar19 = dStack_e8;
    dVar18 = dStack_f0;
    func_0x000107c60890(&dStack_90,dVar17,dVar17);
    dStack_98 = dStack_68;
    dStack_a0 = dStack_70;
    dStack_a8 = dStack_78;
    dStack_b0 = dStack_80;
    dStack_b8 = dStack_88;
    dStack_c0 = dStack_90;
    dStack_78 = dVar11;
    dStack_80 = dVar20;
    dStack_68 = dVar4;
    dStack_70 = dVar13;
    dStack_88 = dVar19;
    dStack_90 = dVar18;
    func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
    auVar2._8_8_ = dStack_d8;
    auVar2._0_8_ = dStack_e0;
    auVar3._8_8_ = dStack_c8;
    auVar3._0_8_ = dStack_d0;
    auVar1._8_8_ = dStack_e8;
    auVar1._0_8_ = dStack_f0;
    auVar12 = NEON_ext(auVar3,auVar3,8,1);
    uStack_130 = auVar12._0_8_;
    auVar10 = NEON_ext(auVar2,auVar2,8,1);
    auVar12 = NEON_ext(auVar1,auVar1,8,1);
    uStack_170 = auVar10._0_8_;
    dStack_160 = auVar12._0_8_;
  }
  dVar20 = dStack_d0;
  dVar19 = dStack_e0;
  dVar18 = dStack_f0;
  dVar14 = (((param_5 - dVar14) - (double)(long)(param_4 * 0.022)) + param_5 * dStack_148) - dVar17;
  dVar17 = (param_4 * 0.5 + param_4 * dStack_150) - dVar17;
  uVar8 = func_0x000107c609c4(dVar17,dVar14,dVar16,dVar16);
  uVar9 = func_0x000107c609c8(dVar17,dVar14,dVar16,dVar16);
  func_0x000107c60890(&dStack_90,uVar8,uVar9);
  dStack_98 = dStack_68;
  dStack_a0 = dStack_70;
  dStack_a8 = dStack_78;
  dStack_b0 = dStack_80;
  dStack_b8 = dStack_88;
  dStack_c0 = dStack_90;
  dStack_78 = (double)uStack_170;
  dStack_80 = dVar19;
  dStack_68 = (double)uStack_130;
  dStack_70 = dVar20;
  dStack_88 = dStack_160;
  dStack_90 = dVar18;
  func_0x000107c60884(&dStack_f0,&dStack_90,&dStack_c0);
  *param_1 = dVar17;
  param_1[1] = dVar14;
  param_1[2] = dVar16;
  param_1[3] = dVar16;
  param_1[5] = dStack_e8;
  param_1[4] = dStack_f0;
  param_1[7] = dStack_d8;
  param_1[6] = dStack_e0;
  param_1[9] = dStack_c8;
  param_1[8] = dStack_d0;
  return;
}



/* Entry: 102e0b13c; end: 102e0b417;  */

undefined * FUN_102e0b13c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f10f670);
  puVar3 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x000107c61168();
  func_0x000107c43510();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    dVar6 = param_1;
    func_0x000107c609bc(param_1,param_2,param_3,param_4);
    dVar7 = param_1;
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    puVar4 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
    func_0x000107c610f8(PTR__OBJC_CLASS___CIVector_1126d8aa0);
    func_0x000107c495f4(dVar6,dVar7);
    func_0x000107c5a4a0(puVar3);
    func_0x000107c61170(puVar4);
    dVar6 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar7 = dVar6 * 0.5 + -1.0;
    dVar6 = 0.0;
    if (0.0 < dVar7) {
      dVar6 = dVar7;
    }
    func_0x000107c5f06c(dVar6);
    uVar5 = 0x6461527475706e69;
    uVar2 = uVar5;
    func_0x000107c5fadc(0x6461527475706e69,0xec00000030737569);
    func_0x000107c5a4a0(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c5f06c(param_1 * 0.5);
    func_0x000107c5fadc(0x6461527475706e69,0xec00000031737569);
    func_0x000107c5a4a0(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    puVar4 = PTR__OBJC_CLASS___CIColor_1126c9738;
    func_0x000107c61168(PTR__OBJC_CLASS___CIColor_1126c9738);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    uVar5 = 0x6c6f437475706e69;
    uVar2 = uVar5;
    func_0x000107c5fadc(0x6c6f437475706e69,0xeb0000000030726f);
    func_0x000107c5a4a0(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___CIColor_1126c9738;
    func_0x000107c610f8(PTR__OBJC_CLASS___CIColor_1126c9738);
    func_0x000107c482a8(0,0,0,0);
    func_0x000107c5fadc(0x6c6f437475706e69,0xeb0000000031726f);
    func_0x000107c5a4a0(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    puVar4 = puVar3;
    func_0x000107c4e138();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c4253c();
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0b418);
  (*pcVar1)();
}



/* Entry: 102e0b418; end: 102e0bd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e0b418(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_11);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    uVar3 = *(undefined8 *)(param_3 + _DAT_113092298);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(param_3);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_10;
    *(undefined8 *)(unaff_x20 + 0x28) = param_9;
    uVar3 = *(undefined8 *)(param_5 + _DAT_113091b80);
    func_0x000107c61174();
    func_0x000107c61170(param_5);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    uVar3 = *(undefined8 *)(param_4 + _DAT_113097748);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(param_4);
    *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x40) = param_6;
    *(undefined8 *)(unaff_x20 + 0x48) = param_7;
    *(undefined8 *)(unaff_x20 + 0x50) = param_8;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0b548);
  (*pcVar1)();
}



/* Entry: 102e0bd60; end: 102e0bdaf;  */

void FUN_102e0bd60(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102e18238();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x20) = 1;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1105d7ac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
  return;
}



/* Entry: 102e0bdb0; end: 102e0bdb7;  */

void FUN_102e0bdb0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_102e18238();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x20) = 1;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1105d7ac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar2);
  return;
}



/* Entry: 102e0bdb8; end: 102e0bed7;  */

void FUN_102e0bdb8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  
  puVar1 = &UNK_1105d6f70;
  func_0x000107c613fc(&UNK_1105d6f70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x0001000285a8(0x112ef0710,&UNK_10db20580);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  pcVar2 = FUN_102e0c254;
  func_0x0001000bdd8c(FUN_102e0c254,puVar1);
  lVar3 = 0;
  FUN_102e13cbc();
  func_0x000107c613fc();
  *(undefined4 *)(lVar3 + 0x30) = 0;
  *(undefined2 *)(lVar3 + 0x34) = 0x201;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined2 *)(lVar3 + 0x40) = 0x201;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 1;
  *(undefined4 *)(lVar3 + 0x51) = 0x2020202;
  *(undefined1 *)(lVar3 + 0x55) = 2;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined1 *)(lVar3 + 0x60) = 1;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined1 *)(lVar3 + 0x70) = 1;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined1 *)(lVar3 + 0x80) = 1;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x20) = param_4;
  *(code **)(lVar3 + 0x28) = pcVar2;
  *param_1 = lVar3;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 102e0bed8; end: 102e0bf07;  */

void FUN_102e0bed8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = &UNK_1105d6f70;
  func_0x000107c613fc(&UNK_1105d6f70,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  func_0x0001000285a8(0x112ef0710,&UNK_10db20580);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar6 = FUN_102e0c254;
  func_0x0001000bdd8c(FUN_102e0c254,puVar5);
  lVar7 = 0;
  FUN_102e13cbc();
  func_0x000107c613fc();
  *(undefined4 *)(lVar7 + 0x30) = 0;
  *(undefined2 *)(lVar7 + 0x34) = 0x201;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined2 *)(lVar7 + 0x40) = 0x201;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined1 *)(lVar7 + 0x50) = 1;
  *(undefined4 *)(lVar7 + 0x51) = 0x2020202;
  *(undefined1 *)(lVar7 + 0x55) = 2;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined1 *)(lVar7 + 0x60) = 1;
  *(undefined8 *)(lVar7 + 0x68) = 0;
  *(undefined1 *)(lVar7 + 0x70) = 1;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  *(undefined1 *)(lVar7 + 0x80) = 1;
  *(undefined8 *)(lVar7 + 0x88) = 0;
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(code **)(lVar7 + 0x28) = pcVar6;
  *param_1 = lVar7;
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102e0bf08; end: 102e0bff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0bf08(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = 0;
  FUN_102e0d77c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar5 = lVar4 + _DAT_112f1cb20;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined8 *)(lVar4 + _DAT_112f1cb28) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f1cb30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112f1cb38) = 0;
  ppuVar2 = (undefined **)0x0;
  if (param_2 != 0) {
    ppuVar2 = &PTR_DAT_1105d7430;
  }
  *(undefined ***)(lVar5 + 8) = ppuVar2;
  func_0x000107c61604();
  plVar6 = &lStack_58;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61170(param_2);
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105d7030;
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 102e0bff8; end: 102e0c0c7;  */

/* WARNING: Possible PIC construction at 0x000102e0c014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0c024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0c034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0c028) */
/* WARNING: Removing unreachable block (ram,0x000102e0c018) */
/* WARNING: Removing unreachable block (ram,0x000102e0c038) */

void FUN_102e0bff8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e0c0c8; end: 102e0c0eb;  */

void FUN_102e0c0c8(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102e0b664();
  *param_1 = param_2;
  return;
}



/* Entry: 102e0c0ec; end: 102e0c0f3;  */

void FUN_102e0c0ec(void)

{
  func_0x00010484f5ec(0x102e12a00);
  return;
}



/* Entry: 102e0c0f4; end: 102e0c13f;  */

void FUN_102e0c0f4(long param_1,undefined8 param_2)

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



/* Entry: 102e0c140; end: 102e0c15b;  */

void FUN_102e0c140(long param_1,long param_2)

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



/* Entry: 102e0c15c; end: 102e0c197;  */

void FUN_102e0c15c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105d7418;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 102e0c198; end: 102e0c1bf;  */

void FUN_102e0c198(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e0c1c0; end: 102e0c253;  */

void FUN_102e0c1c0(undefined8 param_1)

{
  if (lRam0000000112f1c868 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e732b68);
  return;
}



/* Entry: 102e0c254; end: 102e0c293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0c254(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e0c294; end: 102e0c5af;  */

void FUN_102e0c294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  return;
}



/* Entry: 102e0c5b0; end: 102e0c5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0c5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcab38);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e0c5f0; end: 102e0c603;  */

void FUN_102e0c5f0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = &PTR_DAT_1105d7828;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e0c604; end: 102e0c74b;  */

/* WARNING: Possible PIC construction at 0x000102e0c610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0c620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0c630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0c640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0c634) */
/* WARNING: Removing unreachable block (ram,0x000102e0c624) */
/* WARNING: Removing unreachable block (ram,0x000102e0c614) */
/* WARNING: Removing unreachable block (ram,0x000102e0c644) */

void FUN_102e0c604(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e0c74c; end: 102e0c76f;  */

void FUN_102e0c74c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102e0c314();
  *param_1 = param_2;
  return;
}



/* Entry: 102e0c770; end: 102e0c7e3;  */

void FUN_102e0c770(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102e0c7e4; end: 102e0c837;  */

void FUN_102e0c7e4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e0c838; end: 102e0c92b;  */

void FUN_102e0c838(undefined1 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar2 = &UNK_1105d7018;
  func_0x000107c613fc(&UNK_1105d7018,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102e0c92c;
  puVar4 = puVar2;
  (**(code **)(*param_4 + 0x60))(FUN_102e0c92c);
  func_0x000107c61574(puVar2);
  func_0x000107c614f0(pcVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar5 = *(code **)(puVar4 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar5)();
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102e0c92c; end: 102e0c933;  */

void FUN_102e0c92c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102e0c934; end: 102e0ca17;  */

void FUN_102e0c934(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c51a94();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c42e80();
    if ((int)lVar2 == 4) {
      lVar2 = param_1;
      func_0x000107c3f808();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0ca14);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c42e6c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5d0fc();
        if ((int)lVar2 == 1) {
          lVar2 = lVar3;
          func_0x000107c4b6d0();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c43ccc();
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(param_1);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0ca18);
          (*pcVar1)();
        }
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e0ca18; end: 102e0cac3;  */

void FUN_102e0ca18(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e0cac4; end: 102e0cad7;  */

bool FUN_102e0cac4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e0cad8; end: 102e0cbeb;  */

void FUN_102e0cad8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  pcVar1 = "requestSendConsent(completion:)";
  func_0x0001000c10c0("requestSendConsent(completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105d7050;
  func_0x000107c613fc(&UNK_1105d7050,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105d7078;
  func_0x000107c613fc(&UNK_1105d7078,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = unaff_x20;
  pcStack_50 = FUN_102e0d7e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105d7090;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e0cbec; end: 102e0cd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0cbec(long param_1,code *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)(2);
  }
  else {
    plVar1 = (long *)(param_1 + _DAT_112f1cb30);
    if (*plVar1 == 0) {
      lVar4 = param_1 + _DAT_112f1cb20;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar3 = 0;
        FUN_102e0e538(0);
        FUN_102e0e674();
        func_0x000107c615e8(lVar4);
        lVar4 = *plVar1;
        lVar2 = plVar1[1];
        *plVar1 = (long)param_2;
        plVar1[1] = param_3;
        func_0x000102e0d810(lVar4,lVar2);
        func_0x000107c6157c(param_3);
        FUN_102e0cd60(uVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61574(uVar3);
        return;
      }
      pcVar6 = "requestSendConsent(completion:)";
      uVar3 = 2;
      uVar5 = 0x1000000000000030;
    }
    else {
      pcVar6 = s_consent_request_failed_no_games_o_10f10f750 + 0x20;
      uVar5 = 0x1000000000000037;
      uVar3 = 1;
    }
    func_0x0001007d6c6c(uVar3,uVar5,(ulong)pcVar6 | 0x8000000000000000,param_4,&PTR_DAT_1105d82c8);
    (*param_2)(2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e0cd60; end: 102e0ce5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0cd60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  plVar6 = *(long **)(unaff_x20 + _DAT_112f1cb38);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cb38) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574();
  FUN_102e0d820();
  func_0x000104884898();
  puVar2 = &UNK_1105d7050;
  func_0x000107c613fc(&UNK_1105d7050,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102e0d860;
  puVar5 = puVar2;
  (**(code **)(*plVar6 + 0x60))(FUN_102e0d860);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(uVar1,pcVar4,puVar5);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 102e0ce5c; end: 102e0cf97;  */

void FUN_102e0ce5c(char *param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        pcVar2 = "resolve(_:)";
        func_0x0001000c10c0("resolve(_:)");
        func_0x000107c61180();
        puVar3 = &UNK_1105d7050;
        func_0x000107c613fc(&UNK_1105d7050,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_2);
        puVar4 = &UNK_1105d70c8;
        func_0x000107c613fc(&UNK_1105d70c8,0x19,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        puVar4[0x18] = 2;
        uStack_58 = 0x102e0d868;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_1105d70e0;
        ppuVar5 = &puStack_78;
        puStack_50 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_50);
        func_0x000107c4e524(pcVar2);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(pcVar2);
        return;
      }
      FUN_102e0cf98();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e0cf98; end: 102e0d3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0cf98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = _DAT_112f1cb28;
  if ((*(long *)(unaff_x20 + _DAT_112f1cb30) != 0) && (*(long *)(unaff_x20 + _DAT_112f1cb28) == 0))
  {
    lVar2 = unaff_x20 + _DAT_112f1cb20;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2 + _DAT_112f1cba8;
      func_0x000107c61618();
      func_0x000107c615e8(lVar2);
      if (lVar3 != 0) {
        FUN_102e20514();
        puVar10 = &UNK_1105d7050;
        puVar4 = puVar10;
        func_0x000107c613fc(&UNK_1105d7050,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        func_0x000107c6157c(puVar4);
        func_0x000107c5fadc(lVar2,param_2);
        func_0x000107c6142c(param_2);
        uVar12 = 0x800000010f10f7c0;
        uVar5 = 0xd00000000000001d;
        func_0x000107c5fadc(0xd00000000000001d,0x800000010f10f7c0);
        pcStack_80 = FUN_102e0d8ec;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100de205c;
        puStack_88 = &UNK_1105d7108;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar4;
        func_0x000107c60bc4(ppuVar6);
        puVar7 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        puVar8 = puVar7;
        func_0x000107c3dac4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar5);
        puVar9 = puStack_78;
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar9);
        func_0x000102e205e0();
        func_0x000107c613fc(&UNK_1105d7050,0x18,7);
        func_0x000107c61614(puVar10 + 0x10);
        func_0x000107c6157c(puVar10);
        func_0x000107c5fadc(puVar9,uVar12);
        func_0x000107c6142c(uVar12);
        uVar12 = 0x800000010f10f7e0;
        uVar5 = 0xd00000000000001d;
        func_0x000107c5fadc(0xd00000000000001d,0x800000010f10f7e0);
        pcStack_80 = (code *)0x102e0d920;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100de205c;
        puStack_88 = &UNK_1105d7130;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar10;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c3dac4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar5);
        puVar9 = puStack_78;
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar9);
        func_0x000102e206ac();
        lVar2 = 0x112d360a8;
        FUN_102e0d874(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x18) = 5;
        *(undefined8 *)(lVar2 + 0x10) = 2;
        *(undefined **)(lVar2 + 0x20) = puVar8;
        *(undefined **)(lVar2 + 0x28) = puVar7;
        puVar10 = PTR_PTR_1126aed78;
        func_0x000107c610f8();
        func_0x000107c61174(puVar8);
        func_0x000107c61174(puVar7);
        func_0x000107c5fadc(puVar9,uVar12);
        func_0x000107c6142c(uVar12);
        uVar5 = 0;
        FUN_102e0d954(0,0x112d360a8,&PTR_PTR_1126aed70);
        lVar11 = lVar2;
        func_0x000107c5fc48(lVar2,uVar5);
        func_0x000107c61574(lVar2);
        func_0x000107c48d54();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar11);
        func_0x000107c53fcc(puVar10);
        uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
        *(undefined **)(unaff_x20 + lVar1) = puVar10;
        func_0x000107c61174(puVar10);
        func_0x000107c61170(uVar5);
        func_0x000107c4f018(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar10);
      }
    }
  }
  return;
}



/* Entry: 102e0d3b0; end: 102e0d49b;  */

void FUN_102e0d3b0(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pcVar1 = "resolve(_:)";
  func_0x0001000c10c0("resolve(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105d7050;
  func_0x000107c613fc(&UNK_1105d7050,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105d7208;
  func_0x000107c613fc(&UNK_1105d7208,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  uStack_40 = 0x102e0db58;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d7220;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e0d49c; end: 102e0d5bf;  */

void FUN_102e0d49c(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = "resolve(_:)";
    func_0x0001000c10c0("resolve(_:)");
    func_0x000107c61180();
    puVar2 = &UNK_1105d7050;
    func_0x000107c613fc(&UNK_1105d7050,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x000107c613fc(param_3,0x19,7);
    *(undefined **)(param_3 + 0x10) = puVar2;
    *(undefined1 *)(param_3 + 0x18) = param_4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar3 = &puStack_98;
    uStack_80 = param_6;
    uStack_78 = param_5;
    lStack_70 = param_3;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(lStack_70);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 102e0d5c0; end: 102e0d6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0d5c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112f1cb30);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar6 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f1cb38);
      *(undefined8 *)(param_1 + _DAT_112f1cb38) = 0;
      func_0x000107c61574(uVar2);
      lVar7 = *(long *)(param_1 + _DAT_112f1cb28);
      *(undefined8 *)(param_1 + _DAT_112f1cb28) = 0;
      if (lVar7 != 0) {
        lVar3 = lVar7;
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c4f090();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c61170();
          func_0x000107c420a8(lVar3);
        }
        func_0x000107c61170(lVar3);
      }
      (*pcVar5)(param_2);
      func_0x000107c61170(lVar7);
      func_0x000102e0d810(pcVar5,uVar6);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e0d6c0; end: 102e0d71f; -[_TtC21PlayGamesServicesImpl28GamesMessageConsentPresenter init] */

void FUN_102e0d6c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.GamesMessageConsentPresenter",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0d6ec);
  (*pcVar1)();
}



/* Entry: 102e0d720; end: 102e0d77b; -[_TtC21PlayGamesServicesImpl28GamesMessageConsentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0d720(long param_1)

{
  func_0x000102e0d994(param_1 + _DAT_112f1cb20);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1cb28));
  func_0x000102e0d810(*(undefined8 *)(param_1 + _DAT_112f1cb30),
                      ((undefined8 *)(param_1 + _DAT_112f1cb30))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1cb38));
  return;
}



/* Entry: 102e0d77c; end: 102e0d79b;  */

void FUN_102e0d77c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7618);
  return;
}



/* Entry: 102e0d79c; end: 102e0d7bb;  */

void FUN_102e0d79c(void)

{
  FUN_102e0cad8();
  return;
}



/* Entry: 102e0d7bc; end: 102e0d7e7; -[_TtC21PlayGamesServicesImpl28GamesMessageConsentPresenter dialogDidDismiss:] */

void FUN_102e0d7bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e0d3b0(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e0d7e8; end: 102e0d81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0d7e8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    (*pcVar4)(2);
  }
  else {
    plVar1 = (long *)(lVar5 + _DAT_112f1cb30);
    if (*plVar1 == 0) {
      lVar7 = lVar5 + _DAT_112f1cb20;
      func_0x000107c61618();
      if (lVar7 != 0) {
        uVar8 = 0;
        FUN_102e0e538(0);
        FUN_102e0e674();
        func_0x000107c615e8(lVar7);
        lVar7 = *plVar1;
        lVar3 = plVar1[1];
        *plVar1 = (long)pcVar4;
        plVar1[1] = lVar2;
        func_0x000102e0d810(lVar7,lVar3);
        func_0x000107c6157c(lVar2);
        FUN_102e0cd60(uVar8);
        func_0x000107c61170(lVar5);
        func_0x000107c61574(uVar8);
        return;
      }
      pcVar10 = "requestSendConsent(completion:)";
      uVar6 = 2;
      uVar9 = 0x1000000000000030;
    }
    else {
      pcVar10 = s_consent_request_failed_no_games_o_10f10f750 + 0x20;
      uVar9 = 0x1000000000000037;
      uVar6 = 1;
    }
    func_0x0001007d6c6c(uVar6,uVar9,(ulong)pcVar10 | 0x8000000000000000,uVar8,&PTR_DAT_1105d82c8);
    (*pcVar4)(2);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102e0d820; end: 102e0d85f;  */

void FUN_102e0d820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55084;
  func_0x000107c61520(&UNK_10db55084,&UNK_1105d72c8);
  puRam0000000112f1cb68 = puVar1;
  return;
}



/* Entry: 102e0d860; end: 102e0d873;  */

void FUN_102e0d860(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        pcVar3 = "resolve(_:)";
        func_0x0001000c10c0("resolve(_:)");
        func_0x000107c61180();
        puVar4 = &UNK_1105d7050;
        func_0x000107c613fc(&UNK_1105d7050,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar2);
        puVar5 = &UNK_1105d70c8;
        func_0x000107c613fc(&UNK_1105d70c8,0x19,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        puVar5[0x18] = 2;
        uStack_58 = 0x102e0d868;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_1105d70e0;
        ppuVar6 = &puStack_78;
        puStack_50 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_50);
        func_0x000107c4e524(pcVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(pcVar3);
        return;
      }
      FUN_102e0cf98();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102e0d874; end: 102e0d8eb;  */

void FUN_102e0d874(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102e0d954(0,param_1,param_2);
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



/* Entry: 102e0d8ec; end: 102e0d953;  */

void FUN_102e0d8ec(void)

{
  FUN_102e0d49c();
  return;
}



/* Entry: 102e0d954; end: 102e0d9b7;  */

void FUN_102e0d954(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e0d9b8; end: 102e0db5b;  */

int FUN_102e0d9b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e0da34;
        goto LAB_102e0da18;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e0da18:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102e0da34:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e0db5c; end: 102e0dbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e0db5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1cc18;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1cc18);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000102e1bac8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 0;
    func_0x000107c61614(lVar2 + 0x10,0);
    *(undefined ***)(lVar2 + 0x18) = &PTR_DAT_1105d73b8;
    func_0x000107c61604(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 102e0dbf4; end: 102e0dc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e0dbf4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f1cc20;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1cc20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb90);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb98);
    func_0x000102e1c270();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(lVar2);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 102e0dc8c; end: 102e0dd47;  */

void FUN_102e0dc8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010484f5ec(0x102e12a00,param_2,FUN_102e0e108,0,0x102e0e10c,0,0x102e0e110,0);
  return;
}


