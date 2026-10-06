/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a384d8; end: 102a3855f;  */

void FUN_102a384d8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0e43a0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Entry: 102a38560; end: 102a388d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a38560(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_112ee39a0);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(&puStack_d0);
  func_0x000107c61574(uVar8);
  if ((char)puStack_d0 != '\x01') {
    func_0x000107c61170(param_2);
    return;
  }
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar12 == 0) {
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&puStack_a0);
    func_0x000107c615e8(lVar12);
  }
  uStack_c8 = uStack_98;
  puStack_d0 = puStack_a0;
  puStack_b8 = (undefined *)lStack_88;
  puStack_c0 = (undefined *)uStack_90;
  lStack_f0 = lVar13;
  lStack_e8 = lVar2;
  lStack_e0 = lVar10;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&puStack_d0);
  }
  else {
    uVar8 = 0;
    FUN_102a3a3a4(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    puVar3 = &uStack_d8;
    ppuVar14 = &puStack_d0;
    func_0x000107c6147c(puVar3,ppuVar14,PTR___sypN_11034f1a8 + 8,uVar8,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = uStack_d8;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c61170(uStack_d8);
      uVar8 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      goto LAB_102a38730;
    }
  }
  uVar8 = 0;
  ppuVar14 = (undefined **)0x0;
LAB_102a38730:
  uStack_f8 = *(undefined8 *)(param_2 + _DAT_112ee3978);
  puVar5 = &UNK_11058a3e0;
  func_0x000107c613fc(&UNK_11058a3e0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_2);
  puVar6 = &UNK_11058a4a8;
  func_0x000107c613fc(&UNK_11058a4a8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar8;
  *(undefined ***)(puVar6 + 0x20) = ppuVar14;
  uStack_b0 = 0x102a3a398;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000b0c7c;
  puStack_b8 = &UNK_11058a4c0;
  ppuVar14 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4(ppuVar14);
  func_0x000107c6157c(puVar5);
  func_0x000107c5f808(lVar11);
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_102a3a304(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar4 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x000102a3a344(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_a0,uVar4,uVar7,lVar1,uVar8);
  func_0x000107c5ffe8(0,lVar11,puVar9,ppuVar14);
  func_0x000107c60bd0(ppuVar14);
  (**(code **)(lStack_e0 + 8))(puVar9,lVar1);
  (**(code **)(lStack_f0 + 8))(lVar11,lStack_e8);
  func_0x000107c61170(param_2);
  puVar6 = puStack_a8;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 102a388d4; end: 102a389f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a388d4(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  puVar1 = (ulong *)(param_1 + _DAT_112ee3980);
  uVar5 = puVar1[1];
  if (param_3 == 0) {
    if (uVar5 == 0) goto LAB_102a389d8;
  }
  else if ((uVar5 != 0) &&
          (((uVar6 = *puVar1, param_2 == uVar6 && param_3 == uVar5 ||
            (uVar3 = param_2, func_0x000107c605b8(param_2,param_3,uVar6,uVar5,0), (uVar3 & 1) != 0))
           || (uVar3 = param_2, func_0x000107c605b8(param_2,param_3,uVar6,uVar5,0), (uVar3 & 1) != 0
              )))) goto LAB_102a389d8;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar5);
  puVar2 = (undefined8 *)(param_1 + _DAT_112ee3988);
  uVar4 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar4);
  puVar2 = (undefined8 *)(param_1 + _DAT_112ee3990);
  uVar4 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(param_1 + _DAT_112ee3998) = 0;
  FUN_102a395a0();
LAB_102a389d8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102a389f8; end: 102a38a6f;  */

void FUN_102a389f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102a38a70(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102a38a70; end: 102a391bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a38a70(undefined **param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auStack_80 [8];
  
  pcVar1 = (code *)0x0;
  pcVar11 = param_2;
  func_0x000107c5ede0();
  lVar16 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar4 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  ppuVar2 = ppuVar4;
  func_0x000107c5faec();
  pcVar14 = pcVar11;
  func_0x000107c61170(ppuVar4);
  ppuVar4 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar18 - extraout_x12_00);
  func_0x000107c61170();
  func_0x000107c5edc8();
  pcVar17 = *(code **)(lVar16 + 8);
  pcVar12 = pcVar1;
  (*pcVar17)(lVar18 - extraout_x12_00);
  if (pcVar14 == (code *)0x0) {
LAB_102a38cbc:
    func_0x000107c6142c(pcVar11);
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar15);
    func_0x000107c61170(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    uVar5 = 0x2064696c61766e69;
    func_0x000107c5fadc(0x2064696c61766e69,0xef74736575716572);
    puVar9 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    func_0x000107c4913c(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar9);
    (*param_2)(puVar7);
    func_0x000107c61170(puVar7);
    (*pcVar17)(puVar15,pcVar1);
    return;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd6d58;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && pcVar14 == pcVar12) {
    pcVar13 = pcVar12;
    func_0x000107c6142c(pcVar14);
    func_0x000107c6142c(pcVar12);
  }
  else {
    pcVar13 = pcVar14;
    func_0x000107c605b8(ppuVar4,pcVar14,ppuVar3,pcVar12,0);
    func_0x000107c6142c(pcVar14);
    func_0x000107c6142c(pcVar12);
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_102a38cbc;
  }
  ppuVar4 = param_1;
  func_0x000107c4ce5c();
  func_0x000107c61180();
  ppuVar3 = ppuVar4;
  func_0x000107c5faec();
  pcVar14 = pcVar13;
  func_0x000107c61170(ppuVar4);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dada18;
  func_0x000107c5faec();
  if ((ppuVar3 == ppuVar4) && (pcVar13 == pcVar14)) {
    pcVar12 = pcVar14;
    func_0x000107c6142c(pcVar13);
    func_0x000107c6142c(pcVar14);
  }
  else {
    pcVar12 = pcVar13;
    func_0x000107c605b8(ppuVar3,pcVar13,ppuVar4,pcVar14,0);
    func_0x000107c6142c(pcVar13);
    func_0x000107c6142c(pcVar14);
    if (((ulong)ppuVar3 & 1) == 0) goto LAB_102a38cbc;
  }
  uVar10 = (ulong)ppuVar2 & 0xffffffffffff;
  if (((ulong)pcVar11 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)pcVar11 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) goto LAB_102a38cbc;
  pcVar14 = (code *)((ulong *)(unaff_x20 + _DAT_112ee3980))[1];
  if (pcVar14 == (code *)0x0) {
    func_0x000107c6142c(pcVar11);
LAB_102a38eb4:
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar15);
    func_0x000107c61170(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar9 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    func_0x000107c4913c(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    (*param_2)(puVar7);
    func_0x000107c61170(puVar7);
    (*pcVar17)(puVar15,pcVar1);
    return;
  }
  if ((ppuVar2 == *(undefined ***)(unaff_x20 + _DAT_112ee3980)) && (pcVar14 == pcVar11)) {
    func_0x000107c6142c(pcVar11);
  }
  else {
    pcVar12 = pcVar11;
    func_0x000107c605b8();
    func_0x000107c6142c(pcVar11);
    if (((ulong)ppuVar2 & 1) == 0) goto LAB_102a38eb4;
  }
  ppuVar4 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar18);
  func_0x000107c61170();
  func_0x000107c5edc4();
  (*pcVar17)(lVar18,pcVar1);
  uVar10 = 0;
  if (((ppuVar4 == (undefined **)0xd000000000000016) && (pcVar12 == (code *)0x800000010f0e4330)) ||
     (func_0x000107c605b8(0xd000000000000016,0x800000010f0e4330,ppuVar4,pcVar12,0),
     (uVar10 & 1) != 0)) {
    func_0x000107c6142c(pcVar12);
    func_0x000102a397b4(param_1,param_2,param_3);
    return;
  }
  if ((ppuVar4 == (undefined **)0xd000000000000015) && (pcVar12 == (code *)0x800000010f0e4350)) {
    func_0x000107c6142c(0x800000010f0e4350);
  }
  else {
    uVar10 = 0xd000000000000015;
    func_0x000107c605b8(0xd000000000000015,0x800000010f0e4350,ppuVar4,pcVar12,0);
    func_0x000107c6142c(pcVar12);
    if ((uVar10 & 1) == 0) {
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(puVar15);
      func_0x000107c61170(param_1);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar7 = PTR_PTR_1126b1ce0;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar8 = puVar7;
      func_0x000107c5ed90();
      uVar5 = 0x656c646e61686e75;
      func_0x000107c5fadc(0x656c646e61686e75,0xee00687461702064);
      puVar9 = puVar6;
      func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar6);
      func_0x000107c4913c(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(uVar5);
      goto LAB_102a39198;
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ee3998) = 1;
  func_0x000102a395a0();
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar15);
  func_0x000107c61170(param_1);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar7 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar8 = puVar7;
  func_0x000107c5ed90();
  puVar9 = puVar6;
  func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar6);
  func_0x000107c4913c(puVar7);
  func_0x000107c61170(puVar8);
LAB_102a39198:
  func_0x000107c61170(puVar9);
  (*param_2)(puVar7);
  func_0x000107c61170(puVar7);
  (*pcVar17)(puVar15,pcVar1);
  return;
}



/* Entry: 102a391c0; end: 102a3923b; -[_TtC33BitmojiLensAvatarNotifyURIHandler33BitmojiLensAvatarNotifyURIHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x000102a39224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a39228) */

void FUN_102a391c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102a39eec(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a3923c; end: 102a39477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3923c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_90);
  if ((char)puStack_90 == '\x01') {
    uStack_a0 = *(undefined8 *)(unaff_x20 + _DAT_112ee3978);
    puVar4 = &UNK_11058a3e0;
    func_0x000107c613fc(&UNK_11058a3e0,0x18,7);
    lStack_a8 = lVar12;
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_70 = FUN_102a39d40;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11058a3f8;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c6157c(puVar4);
    func_0x000107c5f808(lVar11);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    FUN_102a3a304(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = 0x112d4af98;
    lStack_b0 = lVar3;
    func_0x000102a3a344(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
    func_0x000107c5ffe8(0,lVar11,lVar9,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    (**(code **)(lStack_a8 + 8))(lVar9,lVar2);
    (**(code **)(lVar10 + 8))(lVar11,lStack_b0);
    puVar1 = puStack_68;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 102a39478; end: 102a39577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a39478(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112ee3980);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
    puVar1 = (undefined8 *)(param_1 + _DAT_112ee3988);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
    puVar1 = (undefined8 *)(param_1 + _DAT_112ee3990);
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar2);
    *(undefined1 *)(param_1 + _DAT_112ee3998) = 0;
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c52ae8(lStack_50);
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102a39578; end: 102a3959f; -[_TtC33BitmojiLensAvatarNotifyURIHandler33BitmojiLensAvatarNotifyURIHandler reset] */

void FUN_102a39578(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a3923c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a395a0; end: 102a39c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a395a0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_a8 [5];
  undefined8 uStack_80;
  long alStack_78 [3];
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(byte *)(unaff_x20 + _DAT_112ee3998) & 1) != 0) {
LAB_102a396e8:
    func_0x0001000d224c(alStack_a8);
    if (alStack_a8[0] == 0) {
      func_0x000107c6142c(puVar6);
    }
    else {
      puVar4 = puVar6;
      func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar6);
      lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112ee3980))[1];
      if (lVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ee3980);
        func_0x000107c61434(lVar10);
        func_0x000107c5fadc(uVar8,lVar10);
        func_0x000107c6142c(lVar10);
      }
      func_0x000107c52ae8(alStack_a8[0]);
      func_0x000107c615e8(alStack_a8[0]);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar8);
    }
    return;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee3988);
  uVar8 = puVar1[1];
  alStack_78[0] = puVar1[1];
  uStack_80 = *puVar1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee3990);
  alStack_78[2] = puVar1[1];
  alStack_78[1] = *puVar1;
  func_0x000107c61434(puVar1[1]);
  func_0x000107c61434(uVar8);
  lVar10 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    plVar3 = alStack_78 + lVar10 * 2;
    do {
      plVar7 = plVar3;
      lVar10 = lVar10 + 1;
      if (lVar10 == 3) {
        uVar8 = 0x112d35ff8;
        func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
        func_0x000107c61408(&uStack_80,2,uVar8);
        goto LAB_102a396e8;
      }
      lVar9 = *plVar7;
      plVar3 = plVar7 + 2;
    } while (lVar9 == 0);
    lVar11 = plVar7[-1];
    func_0x000107c61434(lVar9);
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar2 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      func_0x0001000d182c(puVar6,uVar2 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
    *(long *)(puVar6 + uVar2 * 0x10 + 0x20) = lVar11;
    *(long *)(puVar6 + uVar2 * 0x10 + 0x28) = lVar9;
  } while( true );
}



/* Entry: 102a39c1c; end: 102a39c7b; -[_TtC33BitmojiLensAvatarNotifyURIHandler33BitmojiLensAvatarNotifyURIHandler init] */

void FUN_102a39c1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiLensAvatarNotifyURIHandler.BitmojiLensAvatarNotifyURIHandler",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a39c48);
  (*pcVar1)();
}



/* Entry: 102a39c7c; end: 102a39d1f; -[_TtC33BitmojiLensAvatarNotifyURIHandler33BitmojiLensAvatarNotifyURIHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a39c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a39cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a39c9c) */
/* WARNING: Removing unreachable block (ram,0x000102a39cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a39c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee3960));
  return;
}



/* Entry: 102a39d20; end: 102a39d3f;  */

void FUN_102a39d20(void)

{
  func_0x000107c61168(&PTR_PTR_112881c20);
  return;
}



/* Entry: 102a39d40; end: 102a39d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a39d40(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ee3980);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ee3988);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ee3990);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
    *(undefined1 *)(lVar2 + _DAT_112ee3998) = 0;
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c52ae8(lStack_50);
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102a39d64; end: 102a39eeb;  */

/* WARNING: Removing unreachable block (ram,0x000102a39ea4) */
/* WARNING: Removing unreachable block (ram,0x000102a39e2c) */

undefined1 * FUN_102a39d64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112ee39d8;
  func_0x0001000285a8(0x112ee39d8,&UNK_10db0eaa0);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102a3a5e4();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11058a5e8,&UNK_11058a5e8,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604d4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604d4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 102a39eec; end: 102a3a2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a39eec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar12 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar2 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11058a430;
  func_0x000107c613fc(&UNK_11058a430,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x0001000d224c(&puStack_90);
  if ((char)puStack_90 == '\x01') {
    lStack_b8 = *(long *)(param_2 + _DAT_112ee3978);
    puVar8 = &UNK_11058a3e0;
    func_0x000107c613fc(&UNK_11058a3e0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,param_2);
    puVar9 = &UNK_11058a458;
    func_0x000107c613fc(&UNK_11058a458,0x30,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = param_1;
    *(code **)(puVar9 + 0x20) = FUN_102a3a2a8;
    *(undefined **)(puVar9 + 0x28) = puVar3;
    uStack_70 = 0x102a3a2b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11058a470;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c(puVar8);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar3);
    func_0x000107c5f808(lVar2);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar5 = 0x112d4af88;
    FUN_102a3a304(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar6 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar7 = 0x112d4af98;
    func_0x000102a3a344(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(lVar12,&puStack_98,uVar6,uVar7,lVar1,uVar5);
    func_0x000107c5ffe8(0,lVar2,lVar12,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    (**(code **)(lStack_a0 + 8))(lVar12,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar2,lStack_a8);
    puVar9 = puStack_68;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar8);
    puVar3 = puVar9;
  }
  else {
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar14);
    func_0x000107c61170(param_1);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar9 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar10 = puVar9;
    func_0x000107c5ed90();
    puVar11 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar8);
    func_0x000107c4913c(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
    (**(code **)(param_3 + 0x10))(param_3,puVar9);
    func_0x000107c61170(puVar9);
    (**(code **)(lVar13 + 8))(puVar14,lStack_b8);
  }
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102a3a2a8; end: 102a3a2c3;  */

void FUN_102a3a2a8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102a3a2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102a3a2c4; end: 102a3a303;  */

void FUN_102a3a2c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0ea74;
  func_0x000107c61520(&UNK_10db0ea74,&UNK_11058a550);
  puRam0000000112ee39d0 = puVar1;
  return;
}



/* Entry: 102a3a304; end: 102a3a387;  */

void FUN_102a3a304(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102a3a388; end: 102a3a3a3;  */

void FUN_102a3a388(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0e43a0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  *param_1 = (char)uVar2;
  return;
}



/* Entry: 102a3a3a4; end: 102a3a473;  */

void FUN_102a3a3a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a3a474; end: 102a3a4df;  */

undefined8 * FUN_102a3a474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a3a4e0; end: 102a3a523;  */

undefined8 * FUN_102a3a4e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102a3a524; end: 102a3a5e3;  */

int FUN_102a3a524(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102a3a5e4; end: 102a3a623;  */

void FUN_102a3a5e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eb6c;
  func_0x000107c61520(&UNK_10db0eb6c,&UNK_11058a5e8);
  puRam0000000112ee39e0 = puVar1;
  return;
}



/* Entry: 102a3a624; end: 102a3a78b;  */

int FUN_102a3a624(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a3a6a0;
        goto LAB_102a3a684;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a3a684:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102a3a6a0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a3a78c; end: 102a3a7cb;  */

void FUN_102a3a78c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eb44;
  func_0x000107c61520(&UNK_10db0eb44,&UNK_11058a5e8);
  puRam0000000112ee39e8 = puVar1;
  return;
}



/* Entry: 102a3a7cc; end: 102a3a7cf;  */

void FUN_102a3a7cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eadc;
  func_0x000107c61520(&UNK_10db0eadc,&UNK_11058a5e8);
  puRam0000000112ee39f0 = puVar1;
  return;
}



/* Entry: 102a3a7d0; end: 102a3a80f;  */

void FUN_102a3a7d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eadc;
  func_0x000107c61520(&UNK_10db0eadc,&UNK_11058a5e8);
  puRam0000000112ee39f0 = puVar1;
  return;
}



/* Entry: 102a3a810; end: 102a3a813;  */

void FUN_102a3a810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eab4;
  func_0x000107c61520(&UNK_10db0eab4,&UNK_11058a5e8);
  puRam0000000112ee39f8 = puVar1;
  return;
}



/* Entry: 102a3a814; end: 102a3a853;  */

void FUN_102a3a814(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee39f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eab4;
  func_0x000107c61520(&UNK_10db0eab4,&UNK_11058a5e8);
  puRam0000000112ee39f8 = puVar1;
  return;
}



/* Entry: 102a3a854; end: 102a3a863;  */

void FUN_102a3a854(long param_1,long param_2)

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



/* Entry: 102a3a864; end: 102a3aab7;  */

void FUN_102a3a864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
  puVar1 = &UNK_11058a6a8;
  func_0x000107c613fc(&UNK_11058a6a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102a3aab8,puVar1);
  return;
}



/* Entry: 102a3aab8; end: 102a3ab03;  */

void FUN_102a3aab8(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112ee3a30,&UNK_10db0ec50,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_102a3ab04;
  func_0x0001000bdd8c(FUN_102a3ab04,uVar4);
  func_0x0001000285a8(0x112ee3a38,&UNK_10db0ec58);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_102a3ab38;
  func_0x0001000bdd8c(FUN_102a3ab38,uVar1);
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(lStack_48);
  FUN_102a39d20(0);
  func_0x000107c610f8();
  FUN_102a380d0(pcVar2,pcVar3,uVar4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd6d58;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
  puVar6 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8();
  func_0x000107c61174(pcVar2);
  func_0x000107c5fadc(ppuVar5,pcVar3);
  func_0x000107c6142c(pcVar3);
  uVar4 = 0x2f696a6f6d746962;
  func_0x000107c5fadc(0x2f696a6f6d746962,0xee00796669746f6e);
  func_0x000107c46c6c();
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(uVar4);
  *param_1 = puVar6;
  return;
}



/* Entry: 102a3ab04; end: 102a3ab37;  */

void FUN_102a3ab04(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102a3ab38; end: 102a3ab3b;  */

void FUN_102a3ab38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar5);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar5);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c();
  }
  else {
    uStack_120 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580();
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar2,uVar3,&UNK_104857794);
      func_0x000107c61574();
      func_0x0001000834e4(auStack_a8);
      param_1 = uStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c();
    func_0x00010008a938(auStack_e8);
    param_1 = uStack_118;
  }
  func_0x000100083ec8();
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar5);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar5);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574();
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar5);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 102a3ab3c; end: 102a3ab5f;  */

void FUN_102a3ab3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a3ab60; end: 102a3abb7;  */

long FUN_102a3ab60(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3f630();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 102a3abb8; end: 102a3ac07;  */

void FUN_102a3abb8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ee3af0 != 0) {
    return;
  }
  puVar1 = &UNK_11058a800;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ee3af0 = param_1;
  return;
}



/* Entry: 102a3ac08; end: 102a3afa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102a3ac08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_11058a840;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11058a868;
  func_0x000107c613fc(&UNK_11058a868,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)&UNK_1007fc6a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1007fc698;
  puStack_88 = &UNK_11058a880;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c6157c(unaff_x20);
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113082480);
  uVar9 = *(undefined8 *)(param_4 + _DAT_1130385d8);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  puVar3 = &UNK_11058a8b8;
  func_0x000107c613fc(&UNK_11058a8b8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(long *)(puVar3 + 0x28) = param_1;
  pcStack_80 = (code *)&UNK_1005e02e0;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1005e029c;
  puStack_88 = &UNK_11058a8d0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_11058a840;
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  func_0x000107c61574(unaff_x20);
  puVar3 = &UNK_11058a908;
  func_0x000107c613fc(&UNK_11058a908,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_80 = FUN_102a3b01c;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x102a3b058;
  puStack_88 = &UNK_11058a920;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar6 = PTR_PTR_1126abdd0;
  func_0x000107c610f8(PTR_PTR_1126abdd0);
  func_0x000107c47444();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  return unaff_x20;
}



/* Entry: 102a3afa4; end: 102a3b01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3afa4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61574();
    uVar1 = *(undefined8 *)(param_2 + _DAT_113091b70);
    FUN_102a3b82c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar1);
    FUN_102a3b73c();
  }
  return;
}



/* Entry: 102a3b01c; end: 102a3b05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b01c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c61574();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_113091b70);
    FUN_102a3b82c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar3);
    FUN_102a3b73c();
  }
  return;
}



/* Entry: 102a3b05c; end: 102a3b07b;  */

void FUN_102a3b05c(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102a3b07c; end: 102a3b08b;  */

void FUN_102a3b07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a3b08c; end: 102a3b0af;  */

void FUN_102a3b08c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010073a0f8();
  *param_1 = param_2;
  return;
}



/* Entry: 102a3b0b0; end: 102a3b117;  */

long FUN_102a3b0b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000c6518(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_102a3b568();
  func_0x000107c61170(param_2);
  func_0x0001000834e4(param_1);
  return lVar1;
}



/* Entry: 102a3b118; end: 102a3b193;  */

void FUN_102a3b118(undefined8 param_1,undefined8 param_2)

{
  func_0x0001043da1e4(0x102a3b640);
  func_0x0001043da274(0x102a3b660,param_2);
  func_0x0001043da474(0x102a3b680,param_2);
  func_0x0001043da518(0x102a3b6a0,param_2);
  func_0x0001043da5bc(0x102a3b6c0,param_2);
  func_0x0001043da7bc(0x102a3b6e0,param_2);
  return;
}



/* Entry: 102a3b194; end: 102a3b23b;  */

void FUN_102a3b194(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + *param_4);
    puVar1 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    if (param_1 == 0) {
      func_0x000107c4d73c();
    }
    else {
      func_0x000107c4e01c();
    }
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102a3b23c; end: 102a3b297; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider init] */

void FUN_102a3b23c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselOnCameraServicesImpl.LensCameraCapturerStateUpdatesProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3b268);
  (*pcVar1)();
}



/* Entry: 102a3b298; end: 102a3b36f; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3b2c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3b2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3b304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3b324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3b344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3b328) */
/* WARNING: Removing unreachable block (ram,0x000102a3b308) */
/* WARNING: Removing unreachable block (ram,0x000102a3b2e8) */
/* WARNING: Removing unreachable block (ram,0x000102a3b2c8) */
/* WARNING: Removing unreachable block (ram,0x000102a3b348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b298(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112ee3c58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3ca8));
  return;
}



/* Entry: 102a3b370; end: 102a3b37f; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didChangeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c60));
  return;
}



/* Entry: 102a3b380; end: 102a3b38f; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider didChangeRingFlashActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c68));
  return;
}



/* Entry: 102a3b390; end: 102a3b39f; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider willBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3c78));
  return;
}



/* Entry: 102a3b3a0; end: 102a3b3af; -[_TtC34SCLensCarouselOnCameraServicesImpl38LensCameraCapturerStateUpdatesProvider willCapturePhoto] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3ca0));
  return;
}



/* Entry: 102a3b3b0; end: 102a3b567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102a3b3b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_4;
  uStack_38 = param_5;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  lVar1 = _DAT_112ee3c60;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c68;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c70;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c78;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c80;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c88;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c90;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3c98;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3ca0;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3cb0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_3 + lVar1) = puVar2;
  puVar3 = auStack_58;
  func_0x0001007fc974(puVar3,param_3 + _DAT_112ee3c58);
  *(undefined8 *)(param_3 + _DAT_112ee3ca8) = param_2;
  func_0x0001007fc7a4();
  puVar2 = PTR_s_init_1125d9248;
  lStack_68 = param_3;
  puStack_60 = puVar3;
  func_0x000107c61174(param_2);
  plVar4 = &lStack_68;
  func_0x000107c61154(plVar4,puVar2);
  func_0x000107c61180();
  func_0x0001007fc9b8();
  func_0x000107c61170(plVar4);
  func_0x0001000834e4(auStack_58);
  return plVar4;
}



/* Entry: 102a3b568; end: 102a3b60f;  */

void FUN_102a3b568(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  uVar1 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x0001007fc7a4();
  func_0x000107c610f8();
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_4);
  FUN_102a3b3b0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,uVar1,
                param_4,param_5);
  return;
}



/* Entry: 102a3b610; end: 102a3b61f;  */

void FUN_102a3b610(void)

{
  func_0x0001043da1e4(0x102a3b640);
  func_0x0001043da274(0x102a3b660);
  func_0x0001043da474(0x102a3b680);
  func_0x0001043da518(0x102a3b6a0);
  func_0x0001043da5bc(0x102a3b6c0);
  func_0x0001043da7bc(0x102a3b6e0);
  return;
}



/* Entry: 102a3b620; end: 102a3b6ff;  */

void FUN_102a3b620(void)

{
  func_0x000100c3d3e0();
  return;
}



/* Entry: 102a3b700; end: 102a3b70b;  */

void FUN_102a3b700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3b70c; end: 102a3b73b;  */

void FUN_102a3b70c(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102a3b73c(param_1);
  return;
}



/* Entry: 102a3b73c; end: 102a3b82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a3b73c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ee3ce0;
  puVar4 = &stack0xffffffffffffffc0;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112ee3ce8;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3cf0) = 0;
  lVar1 = _DAT_112ee3cf8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3d00) = param_1;
  FUN_102a3b82c();
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar3);
  func_0x000107c61180();
  FUN_102a3b84c();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(param_1);
  return puVar4;
}



/* Entry: 102a3b82c; end: 102a3b84b;  */

void FUN_102a3b82c(void)

{
  func_0x000107c61168(&PTR_PTR_112881e40);
  return;
}



/* Entry: 102a3b84c; end: 102a3bab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3b84c(void)

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
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ee3d00);
  uVar2 = uVar9;
  func_0x000107c5e370(uVar9);
  func_0x000107c61180();
  puVar7 = &UNK_11058ab60;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_11058ab60,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102a3bc8c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_11058ab78;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = uVar9;
  func_0x000107c419f0(uVar9);
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_11058ab60,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_80 = FUN_102a3bccc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_11058aba0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c41b80(uVar9);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11058ab60,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcStack_80 = (code *)0x102a3bcf0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_11058abc8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar2 = uVar9;
  func_0x000107c5c320(uVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102a3bab8; end: 102a3bb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bab8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000100087bd4(param_4,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102a3bb44; end: 102a3bbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bb44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_112ee3cf0) = param_2;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ee3cf8);
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c60110(param_2,uVar1);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102a3bbb8; end: 102a3bc13; -[_TtC34SCLensCarouselOnCameraServicesImpl30LensesApplicationStateProvider init] */

void FUN_102a3bbb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselOnCameraServicesImpl.LensesApplicationStateProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3bbe4);
  (*pcVar1)();
}



/* Entry: 102a3bc14; end: 102a3bc6b; -[_TtC34SCLensCarouselOnCameraServicesImpl30LensesApplicationStateProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3bc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3bc54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bc14(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee3d00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ee3ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3ce8));
  return;
}



/* Entry: 102a3bc6c; end: 102a3bc7b; -[_TtC34SCLensCarouselOnCameraServicesImpl30LensesApplicationStateProvider lensesApplicationStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bc6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3cf8));
  return;
}



/* Entry: 102a3bc7c; end: 102a3bc8b; -[_TtC34SCLensCarouselOnCameraServicesImpl30LensesApplicationStateProvider lensesApplicationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a3bc7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ee3cf0);
}



/* Entry: 102a3bc8c; end: 102a3bcaf;  */

void FUN_102a3bc8c(void)

{
  FUN_102a3bab8();
  return;
}



/* Entry: 102a3bcb0; end: 102a3bccb;  */

void FUN_102a3bcb0(long param_1,long param_2)

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



/* Entry: 102a3bccc; end: 102a3bd2b;  */

void FUN_102a3bccc(void)

{
  FUN_102a3bab8();
  return;
}



/* Entry: 102a3bd2c; end: 102a3bd3b;  */

void FUN_102a3bd2c(long param_1,long param_2)

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



/* Entry: 102a3bd3c; end: 102a3bd63;  */

void FUN_102a3bd3c(void)

{
  func_0x000102a3bd14();
  return;
}



/* Entry: 102a3bd64; end: 102a3bdab;  */

void FUN_102a3bd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x0001005e03ac(param_1,param_2,param_3);
  return;
}



/* Entry: 102a3bdac; end: 102a3bdbb;  */

void FUN_102a3bdac(void)

{
  return;
}



/* Entry: 102a3bdbc; end: 102a3be4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bdbc(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [16];
  undefined1 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_60 = param_3;
    lStack_58 = param_2;
    func_0x000100087bd4(param_4,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102a3be4c; end: 102a3bea7; -[_TtC34SCLensCarouselOnCameraServicesImpl44LensesCameraViewControllerVisibilityProvider init] */

void FUN_102a3be4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselOnCameraServicesImpl.LensesCameraViewControllerVisibilityProvider"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3be78);
  (*pcVar1)();
}



/* Entry: 102a3bea8; end: 102a3bf0f; -[_TtC34SCLensCarouselOnCameraServicesImpl44LensesCameraViewControllerVisibilityProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3bec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3bef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3bec8) */
/* WARNING: Removing unreachable block (ram,0x000102a3bef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3d50));
  return;
}



/* Entry: 102a3bf10; end: 102a3bf1f; -[_TtC34SCLensCarouselOnCameraServicesImpl44LensesCameraViewControllerVisibilityProvider visibleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3bf10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee3d40));
  return;
}



/* Entry: 102a3bf20; end: 102a3bf2f; -[_TtC34SCLensCarouselOnCameraServicesImpl44LensesCameraViewControllerVisibilityProvider isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102a3bf20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ee3d48);
}



/* Entry: 102a3bf30; end: 102a3bf93;  */

void FUN_102a3bf30(void)

{
  func_0x0001008546f4(0x102a3bdb0,0,0x102a3bdb4,0,0x102a3bfc0);
  return;
}



/* Entry: 102a3bf94; end: 102a3bf9b;  */

void FUN_102a3bf94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3bf9c; end: 102a3c007;  */

void FUN_102a3bf9c(void)

{
  func_0x0001008d0964();
  return;
}



/* Entry: 102a3c008; end: 102a3c00b;  */

void FUN_102a3c008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3c00c; end: 102a3c033;  */

void FUN_102a3c00c(void)

{
  func_0x0001008d0a94();
  return;
}



/* Entry: 102a3c034; end: 102a3c093; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider init] */

void FUN_102a3c034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselOnCameraServicesImpl.LensesFeaturesInfoProvider",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3c060);
  (*pcVar1)();
}



/* Entry: 102a3c094; end: 102a3c0db; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3c0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3c0b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3c094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3d90));
  return;
}



/* Entry: 102a3c0dc; end: 102a3c293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3c0dc(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112ee3d98);
  func_0x000107c42ef0();
  func_0x000107c61180();
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  lVar6 = lVar5;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar5);
  puVar10 = (ulong *)(lVar6 + 0x38);
  uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar9 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar9 = uVar9 & *puVar10;
  func_0x000107c61434(lVar6);
  lVar5 = 0;
  lVar11 = lVar5;
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      func_0x0001007bbd18(*(long *)(lVar6 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                          lVar5 * 0xa00,auStack_88);
      func_0x0001007bbd18(auStack_88,auStack_b0);
      uVar7 = 0x112ee3de0;
      func_0x0001000285a8(0x112ee3de0,&UNK_10db0ee50);
      puVar8 = &uStack_b8;
      func_0x000107c6147c(puVar8,auStack_b0,puVar2,uVar7,6);
      uVar7 = uStack_b8;
      if ((int)puVar8 != 0) {
        func_0x000107c5a114(uStack_b8);
        func_0x000107c615e8(uVar7);
      }
      func_0x0001007bbff0(auStack_88);
      lVar11 = lVar5;
    }
    bVar4 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar12 >> 6) <= lVar5) {
      func_0x000100ba5608(lVar6,puVar10,~uVar12,lVar11,0);
      func_0x000107c6142c(lVar6);
      return;
    }
    uVar9 = puVar10[lVar5];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3c294);
  (*pcVar3)();
}



/* Entry: 102a3c294; end: 102a3c2c3; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider setUIHidden:] */

void FUN_102a3c294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102a3c0dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a3c2c4; end: 102a3c4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a3c2c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_c8;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ee3d98);
  func_0x000107c42ef0();
  func_0x000107c61180();
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  lVar8 = lVar7;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar7);
  puVar12 = (ulong *)(lVar8 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar16 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  func_0x000107c61434(lVar8);
  lVar7 = 0;
  uVar1 = uVar16;
  lVar4 = lVar7;
  do {
    while (lVar14 = lVar4, uVar15 = uVar1, uVar16 != 0) {
      uVar1 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      func_0x0001007bbd18(*(long *)(lVar8 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                          lVar7 * 0xa00,auStack_98);
      func_0x0001007bbd18(auStack_98,auStack_c0);
      uVar13 = 0x112ee3de0;
      func_0x0001000285a8(0x112ee3de0,&UNK_10db0ee50);
      puVar9 = &uStack_c8;
      func_0x000107c6147c(puVar9,auStack_c0,puVar2,uVar13,6);
      uVar3 = uStack_c8;
      uVar1 = uVar16;
      lVar4 = lVar7;
      if ((int)puVar9 == 0) {
        func_0x0001007bbff0(auStack_98);
      }
      else {
        uVar10 = uStack_c8;
        func_0x000107c4a1e4(param_1,param_2);
        func_0x000107c615e8(uVar3);
        func_0x0001007bbff0(auStack_98);
        if ((uVar10 & 1) != 0) {
          uVar13 = 1;
LAB_102a3c460:
          func_0x000100ba5608(lVar8,puVar12,~uVar11,lVar14,uVar15);
          func_0x000107c6142c(lVar8);
          return uVar13;
        }
      }
    }
    bVar6 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102a3c4b0);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar7) {
      uVar15 = 0;
      uVar13 = 0;
      goto LAB_102a3c460;
    }
    uVar16 = puVar12[lVar7];
    uVar1 = uVar15;
    lVar4 = lVar14;
  } while( true );
}



/* Entry: 102a3c4b0; end: 102a3c4fb; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider isPointInsideView:] */

uint FUN_102a3c4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_102a3c2c4(param_1,param_2);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102a3c4fc; end: 102a3c52f; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider isCameraRecordingDisabled] */

uint FUN_102a3c4fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3c530();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102a3c530; end: 102a3c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a3c530(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ee3d90);
  func_0x000107c42ef0();
  func_0x000107c61180();
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  lVar8 = lVar7;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar7);
  puVar12 = (ulong *)(lVar8 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar16 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  func_0x000107c61434(lVar8);
  lVar7 = 0;
  uVar1 = uVar16;
  lVar4 = lVar7;
  do {
    while (lVar14 = lVar4, uVar15 = uVar1, uVar16 != 0) {
      uVar1 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      func_0x0001007bbd18(*(long *)(lVar8 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                          lVar7 * 0xa00,auStack_88);
      func_0x0001007bbd18(auStack_88,auStack_b0);
      uVar13 = 0x112ee3dd8;
      func_0x0001000285a8(0x112ee3dd8,&UNK_10db0ee48);
      puVar9 = &uStack_b8;
      func_0x000107c6147c(puVar9,auStack_b0,puVar2,uVar13,6);
      uVar3 = uStack_b8;
      uVar1 = uVar16;
      lVar4 = lVar7;
      if ((int)puVar9 == 0) {
        func_0x0001007bbff0(auStack_88);
      }
      else {
        uVar10 = uStack_b8;
        func_0x000107c49b14();
        func_0x000107c615e8(uVar3);
        func_0x0001007bbff0(auStack_88);
        if ((uVar10 & 1) != 0) {
          uVar13 = 1;
LAB_102a3c6b8:
          func_0x000100ba5608(lVar8,puVar12,~uVar11,lVar14,uVar15);
          func_0x000107c6142c(lVar8);
          return uVar13;
        }
      }
    }
    bVar6 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102a3c704);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar7) {
      uVar15 = 0;
      uVar13 = 0;
      goto LAB_102a3c6b8;
    }
    uVar16 = puVar12[lVar7];
    uVar1 = uVar15;
    lVar4 = lVar14;
  } while( true );
}



/* Entry: 102a3c704; end: 102a3c737; -[_TtC34SCLensCarouselOnCameraServicesImpl26LensesFeaturesInfoProvider isPickerOpen] */

uint FUN_102a3c704(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3c738();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102a3c738; end: 102a3c90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a3c738(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ee3da0);
  func_0x000107c42ef0();
  func_0x000107c61180();
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  lVar8 = lVar7;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar7);
  puVar12 = (ulong *)(lVar8 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar16 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  func_0x000107c61434(lVar8);
  lVar7 = 0;
  uVar1 = uVar16;
  lVar4 = lVar7;
  do {
    while (lVar14 = lVar4, uVar15 = uVar1, uVar16 != 0) {
      uVar1 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      func_0x0001007bbd18(*(long *)(lVar8 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                          lVar7 * 0xa00,auStack_88);
      func_0x0001007bbd18(auStack_88,auStack_b0);
      uVar13 = 0x112ee3dd0;
      func_0x0001000285a8(0x112ee3dd0,&UNK_10db0ee40);
      puVar9 = &uStack_b8;
      func_0x000107c6147c(puVar9,auStack_b0,puVar2,uVar13,6);
      uVar3 = uStack_b8;
      uVar1 = uVar16;
      lVar4 = lVar7;
      if ((int)puVar9 == 0) {
        func_0x0001007bbff0(auStack_88);
      }
      else {
        uVar10 = uStack_b8;
        func_0x000107c4a1a4();
        func_0x000107c615e8(uVar3);
        func_0x0001007bbff0(auStack_88);
        if ((uVar10 & 1) != 0) {
          uVar13 = 1;
LAB_102a3c8c0:
          func_0x000100ba5608(lVar8,puVar12,~uVar11,lVar14,uVar15);
          func_0x000107c6142c(lVar8);
          return uVar13;
        }
      }
    }
    bVar6 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102a3c90c);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar7) {
      uVar15 = 0;
      uVar13 = 0;
      goto LAB_102a3c8c0;
    }
    uVar16 = puVar12[lVar7];
    uVar1 = uVar15;
    lVar4 = lVar14;
  } while( true );
}



/* Entry: 102a3c90c; end: 102a3c933;  */

byte FUN_102a3c90c(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_2[1] ^ param_1[1]) ^ 0xff) & 1;
}



/* Entry: 102a3c934; end: 102a3c993; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature init] */

void FUN_102a3c934(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExclusiveLensCaptureStyleFeature.ExclusiveLensCameraRingStyleFeature",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3c960);
  (*pcVar1)();
}



/* Entry: 102a3c994; end: 102a3c9eb; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3c994(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ee3de8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ee3df0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ee3df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee3e00));
  return;
}



/* Entry: 102a3c9ec; end: 102a3ca0b;  */

void FUN_102a3c9ec(void)

{
  func_0x000107c61168(&PTR_PTR_112882130);
  return;
}


