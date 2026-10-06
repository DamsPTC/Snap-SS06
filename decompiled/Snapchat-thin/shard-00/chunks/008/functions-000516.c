/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009efaec; end: 1009efbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009efaec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1000a2e50();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305b5c0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11305b5c8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11305b5d0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11305b5d8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11305b5e0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11305b5e8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009efbe0; end: 1009efc57;  */

void FUN_1009efbe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009efc58; end: 1009efc7b;  */

undefined ** FUN_1009efc58(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009efc7c; end: 1009efcfb;  */

void FUN_1009efc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110740b48;
  func_0x000107c613fc(&UNK_110740b48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009efcfc,puVar1);
  return;
}



/* Entry: 1009efcfc; end: 1009efd03;  */

void FUN_1009efcfc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305bad8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305bad8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740be0;
  func_0x000107c613fc(&UNK_110740be0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10409dc20;
  FUN_10058fa64(&UNK_10409dc20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009efd04; end: 1009efdfb;  */

void FUN_1009efd04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11305bad8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11305bad8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110740be0;
  func_0x000107c613fc(&UNK_110740be0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10409dc20;
  FUN_10058fa64(&UNK_10409dc20,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009efdfc; end: 1009efe1f;  */

void FUN_1009efdfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009efe20; end: 1009efe27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009efe20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100095d98();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_11305bae8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009efe28; end: 1009efe93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009efe28(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100095d98();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11305bae8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009efe94; end: 1009efebf;  */

void FUN_1009efe94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009efec0; end: 1009efecb;  */

undefined ** FUN_1009efec0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009efecc; end: 1009eff57;  */

void FUN_1009efecc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009eff58,param_1);
  return;
}



/* Entry: 1009eff58; end: 1009eff5f;  */

void FUN_1009eff58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd33c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009eff60; end: 1009effe3;  */

void FUN_1009eff60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd33c,param_2,FUN_1009effe4,param_2,&UNK_1014bd340,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009effe4; end: 1009f000b;  */

void FUN_1009effe4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009f000c; end: 1009f0017;  */

void FUN_1009f000c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a00d0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009f064c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009f0018; end: 1009f00c7;  */

void FUN_1009f0018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a00d0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1009f064c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009f00c8; end: 1009f0537;  */

void FUN_1009f00c8(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcStack_c0;
  long lStack_b8;
  char *pcStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar9 = 0x112d373d8;
  puStack_a8 = param_1;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar12 = (long)&pcStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar13 - extraout_x12_01;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  uVar3 = 0x6174736e4977654e;
  func_0x000107c5fadc(0x6174736e4977654e,0xea00000000006c6c);
  puVar4 = puVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lStack_b8 = lVar9;
  if (puVar4 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,puVar4);
    func_0x000107c615e8(puVar4);
  }
  FUN_1009f0538(&uStack_80,0x112d387f8,&UNK_10d902650);
  uVar3 = 0xd000000000000014;
  pcStack_b0 = "Unable to decode Tweak Value";
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef84590);
  puVar5 = puVar2;
  func_0x000107c3ebc0();
  func_0x000107c61170(uVar3);
  pcStack_c0 = "system_scope_has_run";
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef845b0);
  puVar6 = puVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar6 == (undefined *)0x0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,puVar6);
    func_0x000107c615e8(puVar6);
  }
  uVar1 = (uint)(puVar4 == (undefined *)0x0) & ((uint)puVar5 ^ 1);
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_1009f0538(&uStack_80,0x112d387f8,&UNK_10d902650);
    lVar9 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar11,1,1,lVar9);
    if (uVar1 == 0) goto LAB_1009f0430;
LAB_1009f0330:
    func_0x000107c5eea0(lVar13);
    lVar8 = 0;
    func_0x000107c5eea4();
    lVar10 = *(long *)(lVar8 + -8);
    (**(code **)(lVar10 + 0x38))(lVar13,0,1,lVar8);
    func_0x000100ed9cbc(lVar13,lVar11);
    lVar9 = lStack_b8;
    func_0x0001009f0578(lVar11,lStack_b8);
    lVar13 = lVar9;
    (**(code **)(lVar10 + 0x30))(lVar9,1,lVar8);
    lVar7 = 0;
    if ((int)lVar13 != 1) {
      func_0x000107c5ee70();
      (**(code **)(lVar10 + 8))(lVar9,lVar8);
      lVar7 = lVar13;
    }
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,(ulong)pcStack_c0 | 0x8000000000000000);
    func_0x000107c56bcc(puVar2);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar3);
  }
  else {
    lVar7 = 0;
    func_0x000107c5eea4();
    lVar9 = lVar11;
    func_0x000107c6147c(lVar11,&uStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar11,(uint)lVar9 ^ 1,1,lVar7);
    if (uVar1 != 0) goto LAB_1009f0330;
LAB_1009f0430:
    if (puVar4 == (undefined *)0x0 || ((ulong)puVar5 & 1) != 0) goto LAB_1009f0474;
  }
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,(ulong)pcStack_b0 | 0x8000000000000000);
  func_0x000107c52de0(puVar2);
  func_0x000107c61170(uVar3);
LAB_1009f0474:
  func_0x0001009f0578(lVar11,lVar12);
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar7 + -8);
  lVar9 = lVar12;
  (**(code **)(lVar8 + 0x30))(lVar12,1,lVar7);
  lVar13 = 0;
  if ((int)lVar9 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar8 + 8))(lVar12,lVar7);
    lVar13 = lVar9;
  }
  puVar4 = PTR_PTR_1126a7180;
  func_0x000107c610f8();
  func_0x000107c46f44();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar13);
  *puStack_a8 = puVar4;
  FUN_1009f0538(lVar11,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1009f0538; end: 1009f05c7;  */

undefined8 FUN_1009f0538(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1009f05c8; end: 1009f064b; -[SCSystemInstallServices initWithIsFirstForInstall:firstInstallDate:] */

undefined1 *
FUN_1009f05c8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702b78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1009f064c; end: 1009f07ef;  */

void FUN_1009f064c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7428;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef857a0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1009f07f0; end: 1009f2657;  */

undefined8 FUN_1009f07f0(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulong *puVar4;
  
  puVar3 = param_1;
  func_0x0001009e3c70();
  uVar1 = *puVar3;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && (puVar4 = *(ulong **)(param_1 + 0x1e), puVar4 != (ulong *)0x0)) {
    if (*puVar4 <= (ulong)uVar1) {
      return 0;
    }
    uVar2 = *(undefined8 *)(puVar4[1] + (ulong)uVar1 * 8);
  }
  return uVar2;
}



/* Entry: 1009f2658; end: 1009f26b7; -[SCAppInstallAttributionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f2658(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11275a99c;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c49d90();
  func_0x000107c61170(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitAdServiceTokenJob_11258f118);
    return;
  }
  return;
}



/* Entry: 1009f26b8; end: 1009f26bf; -[SCSystemInstallServices isFirstForInstall] */

undefined1 FUN_1009f26b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1009f26c0; end: 1009f26f3;  */

void FUN_1009f26c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009f26f4; end: 1009f26ff;  */

undefined ** FUN_1009f26f4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009f2700; end: 1009f278b;  */

void FUN_1009f2700(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009f27dc,param_1);
  return;
}



/* Entry: 1009f278c; end: 1009f27db;  */

void FUN_1009f278c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c41d54(*(undefined8 *)(lVar1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1009f27dc; end: 1009f27e3;  */

void FUN_1009f27dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd46c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009f27e4; end: 1009f2867;  */

void FUN_1009f27e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd46c,param_2,FUN_1009f2868,param_2,&UNK_1014bd470,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009f2868; end: 1009f288f;  */

void FUN_1009f2868(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009f2890; end: 1009f289b;  */

void FUN_1009f2890(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a0188();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001009f294c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009f289c; end: 1009f2aef;  */

void FUN_1009f289c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a0188();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001009f294c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009f2af0; end: 1009f2bf7; -[SCSnapchattersDataRequestListenerAnnouncer didStartSnapchattersFetchDataRequest:] */

/* WARNING: Possible PIC construction at 0x0001009f2b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009f2b6c) */

void FUN_1009f2af0(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_50;
  long *plStack_48;
  
  func_0x000107c61174(param_3);
  FUN_1009f2bf8(&puStack_50,param_1 + 0x48);
  if ((puStack_50 == (ulong *)0x0) || (uVar4 = *puStack_50, uVar4 == puStack_50[1])) {
    uVar4 = param_3;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plStack_48);
      }
    }
  }
  else {
    func_0x000107c61148();
    uVar5 = uVar4;
    func_0x000107c61164();
    if ((uVar5 & 1) != 0) {
      func_0x000107c41d54(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1009f2bf8; end: 1009f2c57;  */

void FUN_1009f2bf8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1009f2c58; end: 1009f446b;  */

ulong FUN_1009f2c58(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ushort *puVar3;
  
  puVar1 = (ulong *)(param_1 + 0x60);
  if (*puVar1 < 2) {
    return 0;
  }
  func_0x0001009f4488();
  if ((char)*puVar1 == '\n') {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x74) < 0x49) {
      return 2;
    }
    puVar3 = (ushort *)((long)puVar1 + 2);
  }
  else {
    if ((char)*puVar1 != '\x13') {
      return 0;
    }
    puVar3 = (ushort *)(puVar1[1] + 0x10);
  }
  uVar2 = (ulong)*puVar3;
  func_0x0001009de4d8(uVar2);
  return uVar2 & 0xffffffff;
}



/* Entry: 1009f446c; end: 1009f446f; -[SCDocObjectFideliusFriendMetadataObservableRepository didStartSnapchattersFetchDataRequest:] */

void FUN_1009f446c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea9390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpFideliusFriendMetadataMapI_112587e88);
  return;
}



/* Entry: 1009f4470; end: 1009f63c3;  */

void FUN_1009f4470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001009f447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6d8) + 0x88))();
  return;
}



/* Entry: 1009f63c4; end: 1009f6427; -[SCDocObjectFideliusFriendMetadataObservableRepository _setUpFideliusFriendMetadataMapIfNecessary] */

void FUN_1009f63c4(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1009f6c90;
  puStack_20 = &UNK_110842e18;
  if (*(long *)(param_1 + 0x40) != -1) {
    lStack_18 = param_1;
    FUN_10002a2fc((long *)(param_1 + 0x40),&puStack_38);
  }
  return;
}



/* Entry: 1009f6428; end: 1009f6ad3;  */

long FUN_1009f6428(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[1];
  if (uVar1 < *param_1) {
    uVar1 = param_1[3] + uVar1;
  }
  return uVar1 - *param_1;
}



/* Entry: 1009f6ad4; end: 1009f6bf7;  */

undefined8
FUN_1009f6ad4(long *param_1,ulong param_2,long *param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  if (CARRY8(param_8,(ulong)*(byte *)(*param_1 + 2))) {
    uVar1 = 0x75;
    uVar2 = 0x7b;
LAB_1009f6b8c:
    FUN_1004d2c58(0x1e,0,uVar1,&UNK_10f6c6d00,uVar2);
  }
  else {
    if (param_4 < param_8) {
      uVar1 = 0x67;
      uVar2 = 0x80;
      goto LAB_1009f6b8c;
    }
    if (((param_7 != param_2) && (param_7 < param_4 + param_2)) && (param_2 < param_8 + param_7)) {
      uVar1 = 0x73;
      uVar2 = 0x85;
      goto LAB_1009f6b8c;
    }
    (**(code **)(*param_1 + 0x28))
              (param_1,param_2,param_2 + param_8,&lStack_38,param_4 - param_8,param_5,param_6,
               param_7,param_8,0,0,param_9,param_10);
    if ((int)param_1 != 0) {
      lStack_38 = lStack_38 + param_8;
      uVar1 = 1;
      goto LAB_1009f6ba8;
    }
  }
  if (param_4 != 0) {
    func_0x000107c60ee4(param_2,param_4);
  }
  lStack_38 = 0;
  uVar1 = 0;
LAB_1009f6ba8:
  *param_3 = lStack_38;
  return uVar1;
}



/* Entry: 1009f6bf8; end: 1009f6c5b;  */

long FUN_1009f6bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1 + 0x58;
  FUN_1009f6ad4(lVar1,param_8,auStack_28,*(long *)(param_1 + 0x18) + param_7,param_2,param_3,param_6
                ,param_7,param_4,param_5);
  if ((int)lVar1 == 0) {
    func_0x000107c37e30();
  }
  return lVar1;
}



/* Entry: 1009f6c5c; end: 1009f6c8f;  */

void FUN_1009f6c5c(long param_1)

{
  FUN_100229494(param_1 + 8);
  return;
}



/* Entry: 1009f6c90; end: 1009f6ccf;  */

void FUN_1009f6c90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c43388();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1009f6cd0; end: 1009f701b;  */

void FUN_1009f6cd0(void)

{
  return;
}



/* Entry: 1009f701c; end: 1009f7167; -[SCDocObjectFideliusFriendMetadataCoordinator fideliusFriendMetadataMap] */

void FUN_1009f701c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100a0c340;
  puStack_58 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4e524(uVar1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_100a097b4;
  uStack_80 = 0x100a11a88;
  uStack_78 = 0;
  func_0x000107c4e530(*(undefined8 *)(param_1 + 0x10));
  uVar1 = puStack_98[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009f7168; end: 1009f71f3; -[SCAppInstallUpdateConversionValueJobProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f7168(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d1488;
  func_0x000107c610fc();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275a9a8);
  *(undefined **)(param_1 + _DAT_11275a9a8) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c3be10(param_1);
  lVar2 = param_1 + _DAT_11275a9ac;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c49d90();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitJob_11258f1e8);
    return;
  }
  return;
}



/* Entry: 1009f71f4; end: 1009f7267; -[SCGrapheneSkadnetworkUpdateValueMetric2 init] */

undefined1 * FUN_1009f71f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5a80;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009f7268; end: 1009f72fb; -[SCAppInstallUpdateConversionValueJobProviderEntryPoint _logDeviceVersion] */

/* WARNING: Possible PIC construction at 0x0001009f72e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009f72e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009f7268(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275a9a8);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5c650();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fec4();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  if (puVar3 != (undefined *)0xffffffffffffffff) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  }
  FUN_1009f8f74(uVar4,&PTR____CFConstantStringClassReference_110db8118,ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1009f72fc; end: 1009f8f73;  */

void FUN_1009f72fc(byte *param_1,long param_2,undefined1 (*param_3) [16],long param_4)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined5 *puVar6;
  undefined5 *puVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  if (param_4 == 0x10) {
    param_1[8] = 0xaa;
    param_1[9] = 0xaa;
    param_1[10] = 0xaa;
    param_1[0xb] = 0xaa;
    param_1[0xc] = 0xaa;
    param_1[0xd] = 0xaa;
    param_1[0xe] = 0xaa;
    param_1[0xf] = 0xaa;
    param_1[0x10] = 0xaa;
    param_1[0x11] = 0xaa;
    param_1[0x12] = 0xaa;
    param_1[0x13] = 0xaa;
    param_1[0x14] = 0xaa;
    param_1[0x15] = 0xaa;
    param_1[0x16] = 0xaa;
    param_1[0x17] = 0xaa;
    param_1[0] = 0xaa;
    param_1[1] = 0xaa;
    param_1[2] = 0xaa;
    param_1[3] = 0xaa;
    param_1[4] = 0xaa;
    param_1[5] = 0xaa;
    param_1[6] = 0xaa;
    param_1[7] = 0xaa;
    func_0x000107c60c54(param_1,0x10,0);
    pbVar2 = *(byte **)param_1;
    if (-1 < (char)param_1[0x17]) {
      pbVar2 = param_1;
    }
    uVar25 = *(undefined4 *)(param_2 + 0x2b0);
    uVar9 = (undefined1)uVar25;
    uVar10 = (undefined1)((uint)uVar25 >> 8);
    uVar11 = (undefined1)((uint)uVar25 >> 0x10);
    uVar12 = (undefined1)((uint)uVar25 >> 0x18);
    uVar25 = *(undefined4 *)(param_2 + 0x2b4);
    uVar13 = (undefined1)uVar25;
    uVar14 = (undefined1)((uint)uVar25 >> 8);
    uVar15 = (undefined1)((uint)uVar25 >> 0x10);
    uVar16 = (undefined1)((uint)uVar25 >> 0x18);
    uVar25 = *(undefined4 *)(param_2 + 0x2b8);
    uVar17 = (undefined1)uVar25;
    uVar18 = (undefined1)((uint)uVar25 >> 8);
    uVar19 = (undefined1)((uint)uVar25 >> 0x10);
    uVar20 = (undefined1)((uint)uVar25 >> 0x18);
    uVar25 = *(undefined4 *)(param_2 + 700);
    uVar21 = (undefined1)uVar25;
    uVar22 = (undefined1)((uint)uVar25 >> 8);
    uVar23 = (undefined1)((uint)uVar25 >> 0x10);
    uVar24 = (undefined1)((uint)uVar25 >> 0x18);
    auVar29 = *param_3;
    uVar25 = *(undefined4 *)(param_2 + 0x2c0);
    uVar26 = *(undefined4 *)(param_2 + 0x2c4);
    uVar27 = *(undefined4 *)(param_2 + 0x2c8);
    uVar28 = *(undefined4 *)(param_2 + 0x2cc);
    puVar6 = (undefined5 *)(param_2 + 0x2d0);
    iVar8 = *(int *)(param_2 + 0x3a0) + -2;
    do {
      puVar7 = puVar6;
      auVar30[1] = uVar10;
      auVar30[0] = uVar9;
      auVar30[2] = uVar11;
      auVar30[3] = uVar12;
      auVar30[4] = uVar13;
      auVar30[5] = uVar14;
      auVar30[6] = uVar15;
      auVar30[7] = uVar16;
      auVar30[8] = uVar17;
      auVar30[9] = uVar18;
      auVar30[10] = uVar19;
      auVar30[0xb] = uVar20;
      auVar30[0xc] = uVar21;
      auVar30[0xd] = uVar22;
      auVar30[0xe] = uVar23;
      auVar30[0xf] = uVar24;
      auVar29 = NEON_aese(auVar29,auVar30);
      auVar30 = NEON_aesmc(auVar29,auVar29);
      uVar5 = *(undefined4 *)puVar7;
      uVar9 = (undefined1)uVar5;
      uVar10 = (undefined1)((uint)uVar5 >> 8);
      uVar11 = (undefined1)((uint)uVar5 >> 0x10);
      uVar12 = (undefined1)((uint)uVar5 >> 0x18);
      uVar5 = *(undefined4 *)((long)puVar7 + 4);
      uVar13 = (undefined1)uVar5;
      uVar14 = (undefined1)((uint)uVar5 >> 8);
      uVar15 = (undefined1)((uint)uVar5 >> 0x10);
      uVar16 = (undefined1)((uint)uVar5 >> 0x18);
      uVar5 = *(undefined4 *)(puVar7 + 1);
      uVar17 = (undefined1)uVar5;
      uVar18 = (undefined1)((uint)uVar5 >> 8);
      uVar19 = (undefined1)((uint)uVar5 >> 0x10);
      uVar20 = (undefined1)((uint)uVar5 >> 0x18);
      uVar5 = *(undefined4 *)((long)puVar7 + 0xc);
      uVar21 = (undefined1)uVar5;
      uVar22 = (undefined1)((uint)uVar5 >> 8);
      uVar23 = (undefined1)((uint)uVar5 >> 0x10);
      uVar24 = (undefined1)((uint)uVar5 >> 0x18);
      iVar3 = iVar8 + -2;
      auVar29._4_4_ = uVar26;
      auVar29._0_4_ = uVar25;
      auVar29._8_4_ = uVar27;
      auVar29._12_4_ = uVar28;
      auVar29 = NEON_aese(auVar30,auVar29);
      auVar29 = NEON_aesmc(auVar29,auVar29);
      uVar25 = *(undefined4 *)*(undefined1 (*) [16])(puVar7 + 2);
      uVar26 = *(undefined4 *)((long)puVar7 + 0x14);
      uVar27 = *(undefined4 *)(puVar7 + 3);
      uVar28 = *(undefined4 *)((long)puVar7 + 0x1c);
      bVar1 = 1 < iVar8;
      puVar6 = puVar7 + 4;
      iVar8 = iVar3;
    } while (iVar3 != 0 && bVar1);
    auVar4[5] = uVar14;
    auVar4._0_5_ = *puVar7;
    auVar4[6] = uVar15;
    auVar4[7] = uVar16;
    auVar4[8] = uVar17;
    auVar4[9] = uVar18;
    auVar4[10] = uVar19;
    auVar4[0xb] = uVar20;
    auVar4[0xc] = uVar21;
    auVar4[0xd] = uVar22;
    auVar4[0xe] = uVar23;
    auVar4[0xf] = uVar24;
    auVar29 = NEON_aese(auVar29,auVar4);
    auVar29 = NEON_aesmc(auVar29,auVar29);
    uVar25 = *(undefined4 *)(puVar7 + 4);
    uVar26 = *(undefined4 *)((long)puVar7 + 0x24);
    uVar27 = *(undefined4 *)(puVar7 + 5);
    uVar28 = *(undefined4 *)((long)puVar7 + 0x2c);
    auVar29 = NEON_aese(auVar29,*(undefined1 (*) [16])(puVar7 + 2));
    *pbVar2 = auVar29[0] ^ (byte)uVar25;
    pbVar2[1] = auVar29[1] ^ (byte)((uint)uVar25 >> 8);
    pbVar2[2] = auVar29[2] ^ (byte)((uint)uVar25 >> 0x10);
    pbVar2[3] = auVar29[3] ^ (byte)((uint)uVar25 >> 0x18);
    pbVar2[4] = auVar29[4] ^ (byte)uVar26;
    pbVar2[5] = auVar29[5] ^ (byte)((uint)uVar26 >> 8);
    pbVar2[6] = auVar29[6] ^ (byte)((uint)uVar26 >> 0x10);
    pbVar2[7] = auVar29[7] ^ (byte)((uint)uVar26 >> 0x18);
    pbVar2[8] = auVar29[8] ^ (byte)uVar27;
    pbVar2[9] = auVar29[9] ^ (byte)((uint)uVar27 >> 8);
    pbVar2[10] = auVar29[10] ^ (byte)((uint)uVar27 >> 0x10);
    pbVar2[0xb] = auVar29[0xb] ^ (byte)((uint)uVar27 >> 0x18);
    pbVar2[0xc] = auVar29[0xc] ^ (byte)uVar28;
    pbVar2[0xd] = auVar29[0xd] ^ (byte)((uint)uVar28 >> 8);
    pbVar2[0xe] = auVar29[0xe] ^ (byte)((uint)uVar28 >> 0x10);
    pbVar2[0xf] = auVar29[0xf] ^ (byte)((uint)uVar28 >> 0x18);
    return;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



/* Entry: 1009f8f74; end: 1009f91a3;  */

undefined * FUN_1009f8f74(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3bf00d;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_78,puVar1);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3bf00d;
    }
    else {
      func_0x000107c61178(param_3);
      puVar1 = param_3;
      func_0x000107c3ac4c(param_3);
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110967ce8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    FUN_10007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  func_0x000107c61170(param_3);
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  if (((puVar1[0x155a] == '\x01') && (*(long *)(puVar1 + 6000) == 0x7fffffffffffffff)) &&
     (puVar1[0x1559] == '\x01')) {
    uVar2 = (byte)puVar1[0x15d8] ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return (undefined *)(ulong)(uVar2 & 1);
}



/* Entry: 1009f91a4; end: 1009fab97;  */

byte FUN_1009f91a4(long param_1)

{
  byte bVar1;
  
  if (((*(char *)(param_1 + 0x155a) == '\x01') && (*(long *)(param_1 + 6000) == 0x7fffffffffffffff))
     && (*(char *)(param_1 + 0x1559) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x15d8) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1009fab98; end: 1009fabcb;  */

void FUN_1009fab98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009fabcc; end: 1009fabd7;  */

undefined ** FUN_1009fabcc(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009fabd8; end: 1009fac63;  */

void FUN_1009fabd8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009fac64,param_1);
  return;
}



/* Entry: 1009fac64; end: 1009fac6b;  */

void FUN_1009fac64(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7270;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_1014ad76c);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fac6c; end: 1009fad0f;  */

void FUN_1009fac6c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7270;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_1014ad76c,param_2,&UNK_1014ad770,param_2,&UNK_1014ad798,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fad10; end: 1009fad1b;  */

void FUN_1009fad10(void)

{
  return;
}



/* Entry: 1009fad1c; end: 1009fad77; +[SCAppStartExperimentReaderExperimentLoggerEntryPoint attributedTask] */

void FUN_1009fad1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126b7408;
  func_0x000107c3de44(PTR_PTR_1126b7408);
  func_0x000107c61180();
  func_0x000107c3fcd4(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1009fad78; end: 1009fad7f; +[SCAttributedCOFTask appStartExperimentLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fad78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae20) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309ae28) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009fad80; end: 1009fe0fb;  */

void FUN_1009fad80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int extraout_w8;
  undefined1 auStack_70 [32];
  
  func_0x0001009ec1a0();
  if (extraout_w8 != 0) {
    func_0x000107c36e64();
    func_0x000107c2fa54(auStack_70,param_5);
    func_0x000107c36ea4();
    func_0x000107c2cf14();
    func_0x000107c36eb0();
    func_0x000107c2e008(auStack_70,param_2);
    func_0x000107c36e78();
    func_0x000107c36e9c();
    func_0x000107c36ed0();
    func_0x000107c2cf08();
    func_0x000107c2e004(auStack_70,param_9);
    func_0x000107c36ea4();
    func_0x000107c2cf00();
    func_0x000107c36e9c();
    func_0x0001009fda08(auStack_70,param_6);
    func_0x000107c36ea4();
    func_0x000107c36ec0();
    func_0x000107c36eb0();
    func_0x000107c36e68();
    func_0x000107c36e80();
    func_0x000107c36e7c();
  }
  return;
}



/* Entry: 1009fe0fc; end: 1009fe123;  */

undefined ** FUN_1009fe0fc(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009fe124; end: 1009fe163;  */

void FUN_1009fe124(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009fe108();
  FUN_100082720("SCApplicationInstallLoggerServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009fe164; end: 1009fe16b;  */

void FUN_1009fe164(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014bd878);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe16c; end: 1009fe1ef;  */

void FUN_1009fe16c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014bd878,param_2,&UNK_1014bd87c,param_2,&UNK_1014bd8a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe1f0; end: 1009fe1fb;  */

undefined ** FUN_1009fe1f0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009fe1fc; end: 1009fe287;  */

void FUN_1009fe1fc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009fe288,param_1);
  return;
}



/* Entry: 1009fe288; end: 1009fe28f;  */

void FUN_1009fe288(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b10b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe290; end: 1009fe313;  */

void FUN_1009fe290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b10b0,param_2,FUN_1009fe314,param_2,&UNK_1014b10b4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe314; end: 1009fe33b;  */

void FUN_1009fe314(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009fe33c; end: 1009fe343;  */

void FUN_1009fe33c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_60);
  FUN_10009d204();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  puVar2 = PTR_PTR_1126a72b0;
  func_0x000107c610f8();
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar4 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar5 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef38f70);
  func_0x000107c5a49c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009fe344; end: 1009fe4c3;  */

void FUN_1009fe344(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10009d204();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126a72b0;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef38f70);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1009fe4c4; end: 1009fe52f; -[SCApplicationLoggerEventObserverEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1009fe4c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1ff0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b848);
    *(undefined **)((long)puVar1 + (long)_DAT_11274b848) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009fe530; end: 1009fe5cb; -[SCApplicationLoggerEventObserverEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001009fe578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fe5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009fe57c) */
/* WARNING: Removing unreachable block (ram,0x0001009fe5b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fe530(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11274b84c;
  func_0x000107c61148();
  func_0x000107c5c5e0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274b850);
  *(long *)(param_1 + _DAT_11274b850) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1009fe5cc; end: 1009fe76f; -[SCApplicationLoggerEventObserverEntryPoint _scheduleObservableEventFunctions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fe5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  uVar1 = param_3;
  func_0x000107c5e39c(param_3);
  func_0x000107c61180();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_1065e597c;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c41b80(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1009fe770; end: 1009fe79b;  */

void FUN_1009fe770(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009fe79c; end: 1009fe7a7;  */

undefined ** FUN_1009fe79c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009fe7a8; end: 1009fe833;  */

void FUN_1009fe7a8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009fe834,param_1);
  return;
}



/* Entry: 1009fe834; end: 1009fe8d3;  */

void FUN_1009fe834(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7240;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_1014abf08);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe8d4; end: 1009fe92f; +[SCAudioSessionConfiguratorEntryPoint attributedTask] */

void FUN_1009fe8d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126c82e8;
  func_0x000107c3d03c(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1009fe930; end: 1009fe95f; +[SCAttributedCameraTask activateAudioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fe930(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0xb;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009fe960; end: 1009fe99f;  */

void FUN_1009fe960(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009fe944();
  FUN_100082720("SCAuthenticationWatchdogFactoryServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009fe9a0; end: 1009fe9a7;  */

void FUN_1009fe9a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4fc4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fe9a8; end: 1009fea2b;  */

void FUN_1009fe9a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4fc4,param_2,&UNK_1014a4fc8,param_2,&UNK_1014a4ff0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009fea2c; end: 1009fea37;  */

undefined ** FUN_1009fea2c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009fea38; end: 1009feac3;  */

void FUN_1009fea38(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009feac4,param_1);
  return;
}



/* Entry: 1009feac4; end: 1009feacb;  */

void FUN_1009feac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b11e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009feacc; end: 1009feb4f;  */

void FUN_1009feacc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b11e0,param_2,FUN_1009feb50,param_2,&UNK_1014b11e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009feb50; end: 1009feb77;  */

void FUN_1009feb50(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009feb78; end: 1009feb83;  */

void FUN_1009feb78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a034c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001009fec34(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009feb84; end: 1009fedd7;  */

void FUN_1009feb84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a034c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x0001009fec34(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009fedd8; end: 1009feddf; -[SCBlizzardBackgroundUploadEntryPoint begin] */

void FUN_1009fedd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleUpdatingJob__1125847f8,0x3c);
  return;
}



/* Entry: 1009fede0; end: 1009fefdf; -[SCBlizzardBackgroundUploadEntryPoint _scheduleUpdatingJob:] */

/* WARNING: Possible PIC construction at 0x0001009fee6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fee90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009feeb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fef90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fefa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fefb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009fefc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009fefb4) */
/* WARNING: Removing unreachable block (ram,0x0001009fefa4) */
/* WARNING: Removing unreachable block (ram,0x0001009fef94) */
/* WARNING: Removing unreachable block (ram,0x0001009feeb8) */
/* WARNING: Removing unreachable block (ram,0x0001009fee94) */
/* WARNING: Removing unreachable block (ram,0x0001009fee70) */
/* WARNING: Removing unreachable block (ram,0x0001009fefc4) */

void FUN_1009fede0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7238;
  func_0x000107c61160(PTR_PTR_1126b7238);
  func_0x000107c57f50();
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c61160(PTR_PTR_1126b7248);
  func_0x000107c57d34();
  func_0x000107c57c1c(puVar1,param_2,puVar2);
  puVar1 = PTR_PTR_1126b7240;
  func_0x000107c61160(PTR_PTR_1126b7240);
  func_0x000107c3de68();
  func_0x000107c61180();
  func_0x000107c3d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1009fefe0; end: 1009ff0cf; -[GPBOneofDescriptor fieldWithNumber:] */

void FUN_1009fefe0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          func_0x000107c61128(lVar2);
        }
        if (*(int *)(*(long *)(*(long *)(lStack_108 + lVar4 * 8) + 8) + 0x10) == param_3)
        goto LAB_1009ff09c;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
LAB_1009ff09c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x10));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x18));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(lVar2,0x28,7);
  return;
}



/* Entry: 1009ff0d0; end: 1009ff103;  */

void FUN_1009ff0d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ff104; end: 1009ff27b;  */

void FUN_1009ff104(long param_1,undefined8 param_2)

{
  int extraout_w8;
  
  if (-1 < (int)param_2) {
    if (*(int *)(*(long *)(param_1 + 0x250) + 0x44) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x250) + 0x44) != 0) {
        func_0x00010b3b4b80(*(long *)(param_1 + 0x250),0x52,param_1 + 0x240,0,
                            &stack0xffffffffffffffe0);
      }
      return;
    }
    return;
  }
  if ((int)param_2 < 0) {
    func_0x0001001b43dc(param_1 + 0x240,0x54,&UNK_10f755f7d,9,param_2);
    if (extraout_w8 != 0) {
      func_0x000107c36a30();
      func_0x000107c36a4c();
      func_0x000107c36a34();
      func_0x000107c36a44();
      func_0x000107c36a3c();
    }
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x250) + 0x44) == 0) {
    return;
  }
  func_0x000107c2dfec(*(long *)(param_1 + 0x250),0x54,param_1 + 0x240,0,&stack0xffffffffffffffd0);
  func_0x000107c36a28();
  return;
}



/* Entry: 1009ff27c; end: 1009ff287;  */

undefined ** FUN_1009ff27c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009ff288; end: 1009ff313;  */

void FUN_1009ff288(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009ff314,param_1);
  return;
}



/* Entry: 1009ff314; end: 1009ff31b;  */

void FUN_1009ff314(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b13e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ff31c; end: 1009ff39f;  */

void FUN_1009ff31c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b13e4,param_2,FUN_1009ff3a0,param_2,&UNK_1014b13e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


