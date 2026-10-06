/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10042dd0c; end: 10042dd13;  */

void FUN_10042dd0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042dd14; end: 10042dd67;  */

void FUN_10042dd14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042dd68; end: 10042dd6f;  */

void FUN_10042dd68(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001d502c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10042de54(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10042ded0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10042def8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10042dd70; end: 10042de53;  */

void FUN_10042dd70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001d502c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10042de54(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10042ded0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10042def8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10042de54; end: 10042decf;  */

void FUN_10042de54(undefined8 param_1)

{
  if (lRam0000000112dd4730 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e659088);
  return;
}



/* Entry: 10042ded0; end: 10042def7;  */

void FUN_10042ded0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10042def8; end: 10042dff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10042def8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  puVar1 = &UNK_110413108;
  func_0x000107c613fc(&UNK_110413108,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_1000285a8(0x112dcef88,&UNK_10d997110);
  func_0x000107c613fc();
  puVar2 = &UNK_101925f58;
  FUN_1000bdd8c(&UNK_101925f58,puVar1);
  lVar3 = 0;
  func_0x00010042e01c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined **)(lVar4 + _DAT_112dd46d0) = puVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c6157c(puVar2);
  func_0x000107c61154(&lStack_40,puVar1);
  FUN_1001deedc(0);
  func_0x000107c610f8();
  func_0x000107c61174(plVar5);
  puVar6 = (undefined1 *)plVar5;
  FUN_10042e03c();
  func_0x000107c61170(plVar5);
  func_0x000107c61574(puVar2);
  return puVar6;
}



/* Entry: 10042dff8; end: 10042e03b;  */

void FUN_10042dff8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042e03c; end: 10042e087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042e03c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113013078) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042e088; end: 10042e0b3;  */

void FUN_10042e088(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042e0b4; end: 10042e203;  */

void FUN_10042e0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10042e204(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  FUN_10042e224(param_1,param_2,param_3,uVar4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  FUN_10042e270();
  func_0x000107c61574(param_1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e200);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x38) = lVar3;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x40) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e204);
  (*pcVar1)();
}



/* Entry: 10042e204; end: 10042e223;  */

void FUN_10042e204(void)

{
  func_0x000107c61168(&PTR_PTR_112dd4bf8);
  return;
}



/* Entry: 10042e224; end: 10042e26f;  */

void FUN_10042e224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10042e270; end: 10042e47b;  */

void FUN_10042e270(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  func_0x000107c61644(&uStack_58);
  func_0x000107c61640(&uStack_58);
  FUN_1000285a8(0x112dd4ba8,&UNK_10d9974e0);
  func_0x000107c613fc();
  pcVar1 = FUN_10042e508;
  FUN_1000bdd8c(FUN_10042e508,0);
  func_0x000107c61644(&uStack_58);
  func_0x000107c61640(&uStack_58);
  FUN_1000285a8(0x112dd4bb0,&UNK_10d9974e8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  puVar2 = &UNK_101929510;
  FUN_1000bdd8c(&UNK_101929510,pcVar1);
  uVar3 = 0;
  FUN_1002323d4(0);
  func_0x000107c610f8();
  puVar4 = puVar2;
  func_0x000107c6157c(puVar2);
  FUN_10042e49c();
  lVar5 = 0;
  FUN_10042e4e8();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1000d224c(&uStack_58);
  FUN_10042e7b4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar5);
  uVar9 = uStack_58;
  FUN_10042e7d4(uStack_58,lVar5);
  func_0x000107c61574(uStack_58);
  func_0x000107c61574(lVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar9;
  func_0x000107c61574(uVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c610f8(uVar3);
  puVar7 = puVar2;
  func_0x000107c6157c(puVar2);
  FUN_10042e49c();
  func_0x000107c42c20(uVar9);
  func_0x000107c61170(puVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100232398(0);
  func_0x000107c610f8();
  lVar8 = lVar5;
  func_0x000107c6157c(lVar5);
  FUN_10042edd4();
  func_0x000107c42c20(uVar9);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 10042e47c; end: 10042e49b;  */

void FUN_10042e47c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd4d60);
  return;
}



/* Entry: 10042e49c; end: 10042e4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042e49c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11306c0d0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042e4e8; end: 10042e507;  */

void FUN_10042e4e8(void)

{
  func_0x000107c61168(&PTR_PTR_112dd5070);
  return;
}



/* Entry: 10042e508; end: 10042e587;  */

void FUN_10042e508(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  FUN_10042e47c();
  func_0x000107c613fc();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1000285a8(0x112dd4c78,&UNK_10d997590);
  func_0x000107c613fc();
  puVar2 = &uStack_48;
  FUN_10042e6a0();
  *(undefined8 **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 10042e588; end: 10042e5a7;  */

undefined1  [16] FUN_10042e588(void)

{
  return ZEXT816(0x1107557a8);
}



/* Entry: 10042e5a8; end: 10042e64f;  */

void FUN_10042e5a8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x88);
    lVar1 = 0x13f;
    func_0x000107c6143c();
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      puStack_40 = &UNK_10dd3ca08;
      puStack_38 = PTR___sBoWV_11034d678 + 0x40;
      puStack_30 = puStack_38;
      puStack_28 = puStack_38;
      func_0x000107c61524(param_1,0,6,&lStack_50,param_1 + 0x90);
    }
  }
  return;
}



/* Entry: 10042e650; end: 10042e69f; +[SCExtensionSharedDirectory databasesDirectoryForUserId:] */

void FUN_10042e650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c41ea0();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3ac08();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10042e6a0; end: 10042e7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042e6a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar5 = *unaff_x20;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_1138154f8);
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)) = 0;
  lVar6 = *(long *)(*unaff_x20 + 0xa8);
  uVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar6) = uVar1;
  lVar6 = *(long *)(*unaff_x20 + 0xb0);
  lVar5 = *(long *)(lVar5 + 0x88);
  uVar2 = 0;
  FUN_100087590(0,lVar5);
  uVar1 = uVar2;
  func_0x000100087628();
  *(undefined8 *)((long)unaff_x20 + lVar6) = uVar1;
  FUN_100087768(0,lVar5);
  puVar3 = &DAT_10dd3c840;
  uStack_48 = uVar1;
  func_0x000107c61520(&DAT_10dd3c840,uVar2);
  puVar4 = &uStack_48;
  FUN_1000877c8(puVar4,uVar2,puVar3);
  *(undefined8 **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)) = puVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98),param_1,lVar5);
  FUN_100087bcc();
  return;
}



/* Entry: 10042e7b4; end: 10042e7d3;  */

void FUN_10042e7b4(void)

{
  func_0x000107c61168(&PTR_PTR_112dd4e20);
  return;
}



/* Entry: 10042e7d4; end: 10042e8ff;  */

void FUN_10042e7d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  puVar2 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(long *)(unaff_x20 + 0x10) = param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_10042edb0;
  FUN_1000d5158(FUN_10042edb0,0,&UNK_1107557a8);
  func_0x000107c61574(uVar1);
  puVar2 = &UNK_110413520;
  func_0x000107c613fc(&UNK_110413520,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar4 = &UNK_101929bec;
  puVar5 = puVar2;
  (**(code **)(*(long *)pcVar3 + 0x60))(&UNK_101929bec);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar2);
  puVar2 = puVar4;
  func_0x000107c614f0(puVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),puVar2,puVar5);
  func_0x000107c615e8(puVar4);
  return;
}



/* Entry: 10042e900; end: 10042e923;  */

void FUN_10042e900(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042e924; end: 10042ead3;  */

undefined1  [16] FUN_10042e924(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  
  lVar3 = *(long *)(*unaff_x20 + 0x88);
  lVar2 = 0;
  auStack_a0[0] = param_1;
  func_0x000107c61510(0,lVar3,PTR___sSbN_11034dd40,0,0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)auStack_a0 - extraout_x8;
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000b69f8(param_1,param_2,param_3);
  uStack_80 = param_2;
  lStack_78 = param_3;
  FUN_100087bd4(lVar6,FUN_10042ebfc,auStack_90,lVar2);
  cVar1 = *(char *)(lVar6 + *(int *)(lVar2 + 0x30));
  (**(code **)(lVar4 + 0x20))(lVar5,lVar6,lVar3);
  (**(code **)(param_3 + 0x18))(lVar5,param_2,param_3);
  if (cVar1 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_1000b66c4(0,lVar3);
  func_0x000107c6157c();
  FUN_1000b6858();
  (**(code **)(lVar4 + 8))(lVar5,lVar3);
  auVar7._8_8_ = &PTR_DAT_1107aac80;
  auVar7._0_8_ = unaff_x20;
  return auVar7;
}



/* Entry: 10042ead4; end: 10042eb53; -[SCFideliusLogger logBlizzardEventWithBestEffortUserTracking:] */

/* WARNING: Possible PIC construction at 0x00010042eb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010042eb44) */

void FUN_10042ead4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61174(param_3);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c4bf8c();
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
    func_0x000107c4bfb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10042eb54; end: 10042ebfb;  */

void FUN_10042eb54(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  lVar3 = *(long *)(lVar4 + 0x88);
  lVar2 = 0;
  func_0x000107c61510(0,lVar3,PTR___sSbN_11034dd40,0,0);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar2 = *(long *)(lVar4 + 0x98);
  func_0x000107c61428((long)param_2 + lVar2,auStack_58,0,0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,(long)param_2 + lVar2,lVar3);
  *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)((long)param_2 + *(long *)(*param_2 + 0xa0));
  return;
}



/* Entry: 10042ebfc; end: 10042ec17;  */

void FUN_10042ebfc(void)

{
  long unaff_x20;
  
  FUN_10042eb54(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10042ec18; end: 10042ec5f;  */

int FUN_10042ec18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10042ec60; end: 10042ed8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042ec60(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = 0;
  func_0x000107c60188(0,lVar4);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)((long)unaff_x20 + _DAT_113094318))(puVar5,param_1);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar2 == 1) {
    pcVar3 = *(code **)(lVar8 + 8);
    puVar6 = puVar5;
    lVar4 = lVar1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar6,puVar5,lVar4);
    func_0x000100087f6c(puVar6);
    pcVar3 = *(code **)(lVar7 + 8);
  }
  (*pcVar3)(puVar6,lVar4);
  return;
}



/* Entry: 10042ed90; end: 10042edaf;  */

void FUN_10042ed90(void)

{
  FUN_10042ec60();
  return;
}



/* Entry: 10042edb0; end: 10042edc7;  */

void FUN_10042edb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10042edc8; end: 10042edd3; -[SCAFideliusGraphRead getEventName] */

undefined ** FUN_10042edc8(void)

{
  return &PTR____CFConstantStringClassReference_110fef8b8;
}



/* Entry: 10042edd4; end: 10042ee1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042edd4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11306c0a0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10042ee20; end: 10042ee2f; -[_TtC28SponsoredLensTrackerServices28SponsoredLensTrackerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042ee20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306c0d0));
  return;
}



/* Entry: 10042ee30; end: 10042ee63;  */

void FUN_10042ee30(void)

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



/* Entry: 10042ee64; end: 10042ee6b;  */

void FUN_10042ee64(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042ee6c; end: 10042eebf;  */

void FUN_10042ee6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10042eec0; end: 10042eecb;  */

void FUN_10042eec0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002110f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10042f034(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10042f0b0();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x00010042f0f0();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10042eecc; end: 10042f033;  */

void FUN_10042eecc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002110f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10042f034(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10042f0b0();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  func_0x00010042f0f0();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10042f034; end: 10042f0af;  */

void FUN_10042f034(undefined8 param_1)

{
  if (lRam0000000112dd4af8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e659274);
  return;
}



/* Entry: 10042f0b0; end: 10042f193;  */

void FUN_10042f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  return;
}



/* Entry: 10042f194; end: 10042f1bf;  */

void FUN_10042f194(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042f1c0; end: 10042f22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10042f1c0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_1000bf56c();
  *(long *)(unaff_x20 + _DAT_1130130a8) = lVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10042f230; end: 10042f26b;  */

void FUN_10042f230(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042f26c; end: 10042f36b; -[SCNativeMessagingSessionManager _createDeltaSyncDbDirectory:] */

void FUN_10042f26c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar1 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10042f310;
    puStack_30 = &UNK_110842e18;
    func_0x000107c61174(param_3);
    lStack_28 = param_3;
    FUN_10007380c(uVar1,&puStack_48);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lStack_28);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10042f36c; end: 10042f6eb; -[SCAdUnlockableTrackingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042f36c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b9170;
  func_0x000107c610f4();
  lVar11 = param_1 + _DAT_112723888;
  func_0x000107c61148(lVar11);
  lVar2 = lVar11;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  lVar11 = (long)_DAT_11272388c;
  func_0x000107c61174(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100b8dd78;
  puStack_90 = &UNK_11088a1f0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_e0 = puVar9;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_100b8d898;
  puStack_c8 = &UNK_11088a220;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_c0 = puVar5;
  puStack_b8 = puVar4;
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_110 = puVar9;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_10544bdb0;
  puStack_f8 = &UNK_11088a250;
  func_0x000107c6111c(auStack_e8,auStack_80);
  puStack_f0 = puVar5;
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_148 = puVar9;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_10544bdf8;
  puStack_130 = &UNK_11088a220;
  func_0x000107c6111c(auStack_118,auStack_80);
  puStack_128 = puVar5;
  puStack_120 = puVar4;
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_150,auStack_80);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126b9180;
  func_0x000107c610f4(PTR_PTR_1126b9180);
  func_0x000107c48730();
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_150);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_118);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10042f6ec; end: 10042f75f; -[SCUnlockableTrackerConfigImpl initWithCircumstanceEngine:] */

undefined1 * FUN_10042f6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5788;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042f760; end: 10042f8b3; -[SCAdUnlockableTrackingServices initWithSnapAdsUnlockableTracker:adLensCarouselInteractionHistoryTracker:unlockableLensTracker:unlockableGeoFilterTracker:unlockableUCOTracker:unlockableVideoCallingLensTracker:] */

undefined1 *
FUN_10042f760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126fd688;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10042f8b4; end: 10042f95f;  */

void FUN_10042f8b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10042f960; end: 10042fbc3; -[SCLensLoggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042f960(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3bcfc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100741cd8;
  puStack_90 = &UNK_11089cc20;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c61174(lVar1);
  lStack_88 = lVar1;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_78);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bbb88;
  func_0x000107c610f4(PTR_PTR_1126bbb88);
  func_0x000107c47434();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112726560));
  puVar5 = PTR_PTR_1126bbb90;
  func_0x000107c610f4(PTR_PTR_1126bbb90);
  func_0x000107c471f4();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112726564));
  puVar6 = PTR_PTR_1126bbb98;
  func_0x000107c610f4(PTR_PTR_1126bbb98);
  func_0x000107c471f0();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112726568));
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 10042fbc4; end: 10042fccb; -[SCLensLoggerEntryPoint _lensThumbnailLogger] */

void FUN_10042fbc4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  func_0x000107c61144(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10042fccc; end: 10042fd0b;  */

void FUN_10042fccc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bf1c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10042fd0c; end: 10043009f; -[SCMessagingExperimentServiceProvider _messagingExperimentServiceImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042fd0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127252d4;
    func_0x000107c61148();
  }
  lVar1 = lVar11;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127252d0;
    func_0x000107c61148();
  }
  lVar2 = lVar11;
  func_0x000107c5da68();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c49e14();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  if ((int)lVar3 != 0) {
    if (param_1 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = param_1 + _DAT_1127252dc;
      func_0x000107c61148(lVar11);
    }
    lVar2 = lVar11;
    func_0x000107c444a4(lVar11);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3f888();
    func_0x000107c61180();
    func_0x00010551d554(lVar1,lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar11);
  }
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ba440;
  func_0x000107c610f4(PTR_PTR_1126ba440);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127252d8;
    func_0x000107c61148(lVar11);
  }
  param_1 = param_1 + _DAT_1127252cc;
  func_0x000107c61148();
  lVar2 = param_1;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c477b8(puVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1004300a0; end: 1004303fb; -[SCMessagingExperimentServiceImpl initWithMessagingUIConfigProvider:messagingCoreConfigProvider:mcsConfigProvider:notificationConfigProvider:myAiConfigProvider:plusServices:appStartExperimentReader:] */

undefined8 *
FUN_1004300a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_80 = PTR_PTR_1126e8d40;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004303fc; end: 100430587; -[SCNativeMessagingSessionManager _nativeBulkLoadCofMarshallersForMessagingExperimentService:] */

void FUN_1004303fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_3;
  func_0x000107c4c908();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar4 = lVar3;
  FUN_10010fab4(lVar3,PTR_DAT_1126a4f88);
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar1);
    func_0x000107c61170(puVar5);
  }
  lVar3 = param_3;
  func_0x000107c4cdf8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar6 = lVar4;
  FUN_10010fab4(lVar4,PTR_DAT_1126a4f88);
  lVar3 = lVar4;
  if ((int)lVar6 == 0) {
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  func_0x000107c61170(lVar4);
  if (lVar3 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar1);
    func_0x000107c61170(puVar5);
  }
  puVar5 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100430588; end: 1004305af; -[SCMessagingExperimentServiceImpl mcsConfigProvider] */

void FUN_100430588(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004305b0; end: 1004305bb;  */

void FUN_1004305b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf55450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createConfigProviderForNamespace_1125b2eb8,0x49);
  return;
}



/* Entry: 1004305bc; end: 100430687; -[SCLensLoggerServices initWithLensUserProvider:lensInPreviewLogger:lensThumbnailLogger:] */

undefined1 *
FUN_1004305bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270a248;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100430688; end: 10043072b; -[SCLensCarouselLoggerServices initWithLensCarouselSessionLogger:lensSwipesProvider:] */

undefined1 *
FUN_100430688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a4b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10043072c; end: 10043079f; -[SCLensCarouselLoggerPrivateServices initWithLensCarouselSessionInteractor:] */

undefined1 * FUN_10043072c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a4a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004307a0; end: 100430843;  */

void FUN_1004307a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100430844; end: 100430903;  */

void FUN_100430844(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_40 = &UNK_101c62cdc;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101c62cf8;
  puStack_48 = &UNK_11045f608;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_10029ad80(0);
  func_0x000107c610f8();
  FUN_100430918(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 100430904; end: 100430917;  */

void FUN_100430904(long param_1,long param_2)

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



/* Entry: 100430918; end: 100430963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430918(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff14b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100430964; end: 100430ebf; -[SCStoriesMetricServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430964(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126bd388;
  func_0x000107c61160();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126c12a0;
  func_0x000107c610f4();
  func_0x000107c47568();
  puVar6 = PTR_PTR_1126c12a0;
  func_0x000107c610f4();
  func_0x000107c47568();
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  func_0x000107c61170(puVar8);
  func_0x000107c61144(auStack_80,param_1);
  puVar8 = PTR_PTR_1126ae720;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_105a185fc;
  puStack_a0 = &UNK_1108cddb8;
  func_0x000107c6111c(auStack_88,auStack_80);
  puStack_98 = puVar7;
  puStack_90 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar9 = param_1 + _DAT_11272d7ec;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  lVar9 = param_1 + _DAT_11272d7f0;
  func_0x000107c61148();
  lVar12 = lVar9;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar13 = PTR_PTR_1126c12a8;
  func_0x000107c610f4();
  lVar9 = param_1 + _DAT_11272d7f4;
  func_0x000107c61148();
  lVar14 = lVar9;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_11272d7f8;
  func_0x000107c61148(lVar10);
  lVar15 = lVar10;
  func_0x000107c4b254();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_11272d7fc;
  func_0x000107c61148(lVar16);
  lVar17 = lVar16;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar18 = param_1;
  FUN_100431084();
  func_0x000107c61180();
  lVar19 = lVar18;
  func_0x000107c4b320();
  func_0x000107c61180();
  lVar20 = param_1;
  FUN_100431084();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c4b30c();
  func_0x000107c61180();
  lVar22 = param_1 + _DAT_11272d800;
  func_0x000107c61148();
  func_0x000107c49414();
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar9);
  puVar23 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_80);
  func_0x000107c3e4fc(puVar23);
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(param_1 + _DAT_11272d814);
  }
  func_0x000107c61174(uVar25);
  puVar24 = PTR_PTR_1126c12b0;
  func_0x000107c610f4(PTR_PTR_1126c12b0);
  func_0x000107c46bac();
  func_0x000107c42c20(uVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(uVar25);
  if (param_1 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(param_1 + _DAT_11272d818);
  }
  func_0x000107c61174(uVar25);
  puVar24 = PTR_PTR_1126c12b8;
  func_0x000107c610f4(PTR_PTR_1126c12b8);
  func_0x000107c45a10();
  func_0x000107c42c20(uVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(puVar23);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100430ec0; end: 100430f23; -[SCStoriesGrapheneMetricsEmitter init] */

undefined1 * FUN_100430ec0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebd58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c2438;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100430f24; end: 100430f97; -[SCGrapheneStoryMetric2 init] */

undefined1 * FUN_100430f24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa608;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100430f98; end: 10043106b; -[SCStoriesGhostToStoriesMetricsEmitter initWithLoggingType:] */

undefined1 * FUN_100430f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebd50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126c2438;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    func_0x000107c61170(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10043106c; end: 10043107b; -[_TtC24SCActiveUserSessionScope24SCActiveUserSessionScope userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043106c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083f78));
  return;
}



/* Entry: 10043107c; end: 100431083; -[SCLensLoggerServices lensLogger] */

undefined8 FUN_10043107c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100431084; end: 1004310a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100431084(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272d808);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004310a8; end: 1004310b7; -[SCLensPlusServices lensPlusTierServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004310a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036460));
  return;
}



/* Entry: 1004310b8; end: 1004310c7; -[SCLensPlusServices lensPlusCofServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004310b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130364a0));
  return;
}



/* Entry: 1004310c8; end: 1004313af; -[SCStoriesBlizzardLogger initWithUserTrackedLogger:lazyLensLogger:postingLogger:snapProProfilesProvider:currentUserId:performer:unlockableCounterBlock:circumstanceEngine:lensPlusTierService:lensPlusCofService:editContentDivergenceServices:] */

undefined8 *
FUN_1004310c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126fa5f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_9;
    func_0x000107c61184();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126b02d0;
    func_0x000107c61160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d7450;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004313b0; end: 100431463; -[SCEventListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004313b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_113083960;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_113083968) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113083950;
  uVar2 = 0x113083940;
  FUN_1000285a8(0x113083940,&UNK_10dd14690);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_100431464();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100431464; end: 100431483;  */

void FUN_100431464(void)

{
  func_0x000107c61168(&PTR_PTR_1129cba90);
  return;
}



/* Entry: 100431484; end: 1004314a3; -[SCStoriesBlizzardEventLoggingListenerAnnouncer .cxx_construct] */

void FUN_100431484(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1004314a4; end: 10043161f; -[SCStoriesMetricServices initWithGrapheneMetricsEmitter:ghostToMyStoriesMetricsEmitter:ghostToFriendStoriesMetricsEmitter:postingLogger:upNextGrapheneMetricsEmitter:syncCacheGrapheneMetricsEmitter:feedCardGrapheneMetricsEmitter:] */

undefined1 *
FUN_1004314a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_112702de8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100431620; end: 1004316c3; -[SCStoriesBlizzardLoggingServices initWithBlizzardLogger:topicsLogger:] */

undefined1 *
FUN_100431620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702a50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004316c4; end: 10043172f;  */

void FUN_1004316c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100431730; end: 100431737;  */

void FUN_100431730(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100431738; end: 10043178b;  */

void FUN_100431738(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043178c; end: 100431797;  */

void FUN_10043178c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b80a0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9950;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a850);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100431798; end: 100431a47;  */

void FUN_100431798(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b80a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9950;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a850);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100431a48; end: 100431b2b; -[SCDiscoverFeedInteractionHistoryServiceProvider provide] */

void FUN_100431a48(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c1148;
  func_0x000107c610f4(PTR_PTR_1126c1148);
  func_0x000107c47128();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100431b2c; end: 100431b83; -[_TtC40SCDiscoverFeedInteractionHistoryServices40SCDiscoverFeedInteractionHistoryServices initWithLazyDiscoverFeedInteractionHistoryManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100431b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f34ec0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100431b84; end: 100431bbf;  */

void FUN_100431b84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100431bc0; end: 100431bc7;  */

void FUN_100431bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100431bc8; end: 100431c1b;  */

void FUN_100431bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100431c1c; end: 100431c2b;  */

void FUN_100431c1c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002bb81c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a9940;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01a7d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100431c2c; end: 100431feb;  */

void FUN_100431c2c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002bb81c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a9940;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01a7d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100431fec; end: 100432163;  */

void FUN_100431fec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100432164; end: 1004321bf; -[SCDiscoverFeedCardConversionServiceProvider provide] */

void FUN_100432164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110879170);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b75e0;
  func_0x000107c610f4(PTR_PTR_1126b75e0);
  func_0x000107c468b0();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004321c0; end: 100432217; -[_TtC36SCDiscoverFeedCardConversionServices36SCDiscoverFeedCardConversionServices initWithFeedCardConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004321c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11305d088) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100432218; end: 1004322fb; -[SCDiscoverFeedCardRequestSenderServiceProvider provide] */

void FUN_100432218(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c1118;
  func_0x000107c610f4(PTR_PTR_1126c1118);
  func_0x000107c468b4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004322fc; end: 100432323; -[SCMessagingExperimentServiceImpl messagingCoreConfigProvider] */

void FUN_1004322fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100432324; end: 10043237b; -[_TtC39SCDiscoverFeedCardRequestSenderServices39SCDiscoverFeedCardRequestSenderServices initWithFeedCardRequestSenderCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100432324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff11d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10043237c; end: 1004323c7;  */

void FUN_10043237c(void)

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


