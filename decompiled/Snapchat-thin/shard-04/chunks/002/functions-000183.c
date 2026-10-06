/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032a3b28; end: 1032a3b47;  */

void FUN_1032a3b28(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7b18);
  return;
}



/* Entry: 1032a3b48; end: 1032a3b8f; -[SCFollowCreatorsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3b48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51880;
  func_0x000107c61428(param_1 + _DAT_112f51880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a3b90; end: 1032a3be7; -[SCFollowCreatorsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51880;
  func_0x000107c61428(param_1 + _DAT_112f51880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032a3be8; end: 1032a3cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3be8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1032a30e8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f517a8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a3cc0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f517b0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f51888);
    *(long **)(unaff_x20 + _DAT_112f51888) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032a3cc0; end: 1032a3ce7; -[SCFollowCreatorsScopedServicesSaberEntryPoint begin] */

void FUN_1032a3cc0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032a3be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a3ce8; end: 1032a3e5f;  */

/* WARNING: Possible PIC construction at 0x0001032a3d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a3de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a3d54) */
/* WARNING: Removing unreachable block (ram,0x0001032a3dec) */
/* WARNING: Removing unreachable block (ram,0x0001032a3e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3ce8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f51888);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1032a3e60; end: 1032a3e67;  */

void FUN_1032a3e60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032a3e68; end: 1032a3e9b; -[SCFollowCreatorsScopedServicesSaberEntryPoint end] */

void FUN_1032a3e68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032a3ce8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032a3e9c; end: 1032a3fbb;  */

void FUN_1032a3e9c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "FollowCreatorsScopeGraphBridge/SCFollowCreatorsScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a3fbc);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032a3fbc; end: 1032a4067; -[SCFollowCreatorsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032a3fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1032a3e9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032a4068; end: 1032a40c7; -[SCFollowCreatorsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a4068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51880,0);
  *(undefined8 *)(param_1 + _DAT_112f51888) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a40c8; end: 1032a40fb;  */

void FUN_1032a40c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a40fc; end: 1032a4133; -[SCFollowCreatorsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a40fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51888));
  return;
}



/* Entry: 1032a4134; end: 1032a4153;  */

void FUN_1032a4134(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7be0);
  return;
}



/* Entry: 1032a4154; end: 1032a41bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a4154(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032a4548();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f518c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032a41c0; end: 1032a422b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a41c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f518c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a422c; end: 1032a428b; -[_TtC50FriendingNearbyFriendsScopedFactoryServiceProvider38SCFriendingNearbyFriendsScopedServices init] */

void FUN_1032a422c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingNearbyFriendsScopedFactoryServiceProvider.SCFriendingNearbyFriendsScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a4258);
  (*pcVar1)();
}



/* Entry: 1032a428c; end: 1032a429b; -[_TtC50FriendingNearbyFriendsScopedFactoryServiceProvider38SCFriendingNearbyFriendsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a428c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f518c0));
  return;
}



/* Entry: 1032a429c; end: 1032a4307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a429c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110633048;
  func_0x000107c613fc(&UNK_110633048,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032a4624,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032a4308; end: 1032a43a3;  */

void FUN_1032a4308(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110632f58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110632f58;
  return;
}



/* Entry: 1032a43a4; end: 1032a43db;  */

void FUN_1032a43a4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032a43dc; end: 1032a43e3;  */

undefined8 FUN_1032a43dc(void)

{
  return 0x1b;
}



/* Entry: 1032a43e4; end: 1032a4517;  */

void FUN_1032a43e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110633070;
  func_0x000107c613fc(&UNK_110633070,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a45fc;
  func_0x00010058fa64(FUN_1032a45fc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a4518; end: 1032a4547;  */

undefined ** FUN_1032a4518(void)

{
  return &PTR_DAT_112f51c28;
}



/* Entry: 1032a4548; end: 1032a4567;  */

void FUN_1032a4548(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7ca0);
  return;
}



/* Entry: 1032a4568; end: 1032a45b7;  */

undefined1  [16] FUN_1032a4568(void)

{
  return ZEXT816(0x110632fa8);
}



/* Entry: 1032a45b8; end: 1032a45fb;  */

void FUN_1032a45b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f51928 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126acf98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f51928 = puVar1;
  return;
}



/* Entry: 1032a45fc; end: 1032a4623;  */

void FUN_1032a45fc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032a4624; end: 1032a4627;  */

void FUN_1032a4624(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032a4628; end: 1032a473b;  */

/* WARNING: Possible PIC construction at 0x0001032a46e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a46f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a4708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a4718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a470c) */
/* WARNING: Removing unreachable block (ram,0x0001032a46fc) */
/* WARNING: Removing unreachable block (ram,0x0001032a46ec) */
/* WARNING: Removing unreachable block (ram,0x0001032a471c) */

void FUN_1032a4628(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1106330f8;
  func_0x000107c613fc(&UNK_1106330f8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112f51938;
  func_0x0001000285a8(0x112f51938,&UNK_10dba6f48);
  func_0x000107c613fc();
  uVar3 = 0x1032a4ce0;
  func_0x0001000841fc(0x1032a4ce0,puVar1,uVar2);
  func_0x000100084214(&UNK_10dba6f10,0x34,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1032a473c; end: 1032a475f;  */

/* WARNING: Possible PIC construction at 0x0001032a46e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a46f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a4708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a4718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a470c) */
/* WARNING: Removing unreachable block (ram,0x0001032a46fc) */
/* WARNING: Removing unreachable block (ram,0x0001032a46ec) */
/* WARNING: Removing unreachable block (ram,0x0001032a471c) */

void FUN_1032a473c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_1106330f8;
  func_0x000107c613fc(&UNK_1106330f8,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112f51938;
  func_0x0001000285a8(0x112f51938,&UNK_10dba6f48);
  func_0x000107c613fc();
  uVar9 = 0x1032a4ce0;
  func_0x0001000841fc(0x1032a4ce0,puVar7,uVar8);
  func_0x000100084214(&UNK_10dba6f10,0x34,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1032a4760; end: 1032a4c83;  */

void FUN_1032a4760(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_70 [2];
  
  uVar16 = *param_2;
  func_0x0001000285a8(0x112f51940,&UNK_10dba6f50);
  puVar1 = auStack_70;
  auStack_70[0] = uVar16;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001032a6c0c();
  pcVar3 = "SCChatCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatCameraScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1032a6c58();
  pcVar4 = "SCChatScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatScopeExposerSubjectServiceProvider",0x28,2);
  FUN_1032a6ca4();
  pcVar5 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1032a6cf0();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar6 = puVar2;
  FUN_1032a6c4c();
  func_0x000100082720("SCChatCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar7 = pcVar3;
  FUN_1032a6c98();
  func_0x000100082720("SCChatScopeExposerObservableServiceProvider",0x2b,2);
  pcVar8 = pcVar4;
  FUN_1032a6ce4();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar9 = pcVar5;
  FUN_1032a6d7c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1032a43a4;
  func_0x0001000823a8(FUN_1032a43a4,0);
  func_0x000100082720("SCFriendingNearbyFriendsScopedServicesCleanupRelayServiceProvider",0x41,2);
  puVar11 = puVar2;
  FUN_1032a695c(puVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("FriendingNearbyFriendsScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f51948,&UNK_10dba6f60);
  puVar12 = &UNK_110633120;
  func_0x000107c613fc(&UNK_110633120,0x78,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 *)(puVar12 + 0x18) = param_3;
  *(undefined8 *)(puVar12 + 0x20) = param_4;
  *(undefined8 *)(puVar12 + 0x28) = param_5;
  *(undefined8 *)(puVar12 + 0x30) = param_6;
  *(undefined8 *)(puVar12 + 0x38) = param_7;
  *(undefined8 *)(puVar12 + 0x40) = param_8;
  *(undefined8 *)(puVar12 + 0x48) = param_9;
  *(undefined8 *)(puVar12 + 0x50) = param_10;
  *(char **)(puVar12 + 0x58) = pcVar7;
  *(char **)(puVar12 + 0x60) = pcVar8;
  *(undefined8 **)(puVar12 + 0x68) = puVar6;
  *(char **)(puVar12 + 0x70) = pcVar9;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar9);
  uVar16 = 0x1032a4d10;
  func_0x0001000823a8(0x1032a4d10,puVar12);
  func_0x000100082720("SCFriendingNearbyFriendsPageEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f51950,&UNK_10dba6f68);
  puVar12 = &UNK_110633148;
  func_0x000107c613fc(&UNK_110633148,0x30,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 **)(puVar12 + 0x18) = puVar11;
  *(undefined8 *)(puVar12 + 0x20) = uVar16;
  *(code **)(puVar12 + 0x28) = pcVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(pcVar10);
  pcVar13 = FUN_1032a4d4c;
  func_0x0001000823a8(FUN_1032a4d4c,puVar12);
  func_0x000100082720("SCFriendingNearbyFriendsScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f518c8,&UNK_10dba6ca0);
  func_0x000107c6157c(pcVar13);
  uVar14 = 0x1032a4d58;
  func_0x0001000823a8(0x1032a4d58,pcVar13);
  func_0x000100082720("SCFriendingNearbyFriendsScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f518b8,&UNK_10dba6c90);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x1032a4d60;
  func_0x0001000823a8(0x1032a4d60,uVar14);
  func_0x000100082720("SCFriendingNearbyFriendsScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar12 = &UNK_110633170;
  func_0x000107c613fc(&UNK_110633170,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar15;
  *(code **)(puVar12 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar15 = 0x1032a4d68;
  func_0x0001000823a8(0x1032a4d68,puVar12);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000100082720("SCFriendingNearbyFriendsScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 1032a4c84; end: 1032a4d4b;  */

void FUN_1032a4c84(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032a4d4c; end: 1032a4d6f;  */

void FUN_1032a4d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032a6008(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCFriendingNearbyFriendsScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a4d70; end: 1032a5daf;  */

void FUN_1032a4d70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  FUN_1032a5f58();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar11 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar9;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar11 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x0001003b3b80();
  puVar9 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar9;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar11 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar9;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar11 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x30) = puVar9;
  puVar9 = PTR_PTR_1126acfa0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f135ed0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f03edc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f135ef0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar11);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  *param_1 = param_2;
  return;
}



/* Entry: 1032a5db0; end: 1032a5e4b;  */

void FUN_1032a5db0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1032a5e4c; end: 1032a5e53;  */

undefined8 FUN_1032a5e4c(void)

{
  return 0x1b;
}



/* Entry: 1032a5e54; end: 1032a5ed7;  */

void FUN_1032a5e54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032a5f98,param_2,FUN_1032a5f9c,param_2,FUN_1032a5fc4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032a5ed8; end: 1032a5f27;  */

undefined8 FUN_1032a5ed8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032a5f28; end: 1032a5f57;  */

undefined ** FUN_1032a5f28(void)

{
  return &PTR_DAT_112f51c28;
}



/* Entry: 1032a5f58; end: 1032a5f77;  */

void FUN_1032a5f58(void)

{
  func_0x000107c61168(&PTR_PTR_112f519c0);
  return;
}



/* Entry: 1032a5f78; end: 1032a5f9b;  */

undefined1  [16] FUN_1032a5f78(void)

{
  return ZEXT816(0x1106331c8);
}



/* Entry: 1032a5f9c; end: 1032a5fc3;  */

void FUN_1032a5f9c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032a5fc4; end: 1032a5fcb;  */

undefined8 FUN_1032a5fc4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032a5fcc; end: 1032a6007;  */

void FUN_1032a5fcc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032a6008();
  func_0x0001000a7f38("SCFriendingNearbyFriendsScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032a6008; end: 1032a61f3;  */

void FUN_1032a6008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110633648;
  ppuVar4 = &PTR_DAT_112f51c28;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110633218;
  func_0x000107c613fc(&UNK_110633218,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f51a80;
  func_0x0001000285a8(0x112f51a80,&UNK_10dba7110);
  func_0x0001000a6ee8(&UNK_110633520,
                      "FriendingNearbyFriendsScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1032a61f4,puVar2,uVar3,&UNK_110633520,&PTR_DAT_112f51b30);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106331c8,
                      "SCFriendingNearbyFriendsPageEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_1032a62a8,param_3,uVar3,&UNK_1106331c8,&PTR_DAT_112f51958);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110633240;
  func_0x000107c613fc(&UNK_110633240,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110632fe8,
                      "SCFriendingNearbyFriendsScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_1032a6358,puVar2,uVar3,&UNK_110632fe8,&PTR_DAT_112f518d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f51a88;
  func_0x0001000285a8(0x112f51a88,&UNK_10dba7118);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032a61f4; end: 1032a6233;  */

void FUN_1032a61f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032a6e1c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendingNearbyFriendsScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a6234; end: 1032a62a7;  */

void FUN_1032a6234(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032a6394;
  func_0x0001000823a8(0x1032a6394,param_3);
  func_0x000100082720("SCFriendingNearbyFriendsPageEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a62a8; end: 1032a62af;  */

void FUN_1032a62a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032a6394;
  func_0x0001000823a8();
  func_0x000100082720("SCFriendingNearbyFriendsPageEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a62b0; end: 1032a6357;  */

void FUN_1032a62b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110633268;
  func_0x000107c613fc(&UNK_110633268,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032a638c;
  func_0x0001000823a8(FUN_1032a638c,puVar1);
  func_0x000100082720("SCFriendingNearbyFriendsScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032a6358; end: 1032a635f;  */

void FUN_1032a6358(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110633268;
  func_0x000107c613fc(&UNK_110633268,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032a638c;
  func_0x0001000823a8(FUN_1032a638c,puVar3);
  func_0x000100082720("SCFriendingNearbyFriendsScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032a6360; end: 1032a638b;  */

void FUN_1032a6360(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032a638c; end: 1032a639b;  */

void FUN_1032a638c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110633070;
  func_0x000107c613fc(&UNK_110633070,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a45fc;
  func_0x00010058fa64(FUN_1032a45fc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a639c; end: 1032a6533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1032a639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1032a686c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f51a90) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f51a98) = param_6;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a6534);
  (*pcVar2)();
}



/* Entry: 1032a6534; end: 1032a6593; -[_TtC38FriendingNearbyFriendsScopeGraphBridge53FriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032a6534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingNearbyFriendsScopeGraphBridge.FriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a6560);
  (*pcVar1)();
}



/* Entry: 1032a6594; end: 1032a65cb; -[_TtC38FriendingNearbyFriendsScopeGraphBridge53FriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a65b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a65b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a6594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51a90));
  return;
}



/* Entry: 1032a65cc; end: 1032a65f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a65cc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f51a98),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f51a90));
  return;
}



/* Entry: 1032a65f4; end: 1032a6613;  */

void FUN_1032a65f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7d60);
  return;
}



/* Entry: 1032a6614; end: 1032a669b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032a6614(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51ac8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f51ad0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a669c);
  (*pcVar2)();
}



/* Entry: 1032a669c; end: 1032a6783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032a669c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f51ac8);
  *(undefined **)(unaff_x20 + _DAT_112f51ac8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f51ad0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f51ad0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110633358;
  func_0x000107c613fc(&UNK_110633358,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032a6788,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032a6784; end: 1032a678f;  */

void FUN_1032a6784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032a6790; end: 1032a67ef; -[_TtC38FriendingNearbyFriendsScopeGraphBridge53SCFriendingNearbyFriendsScopedServicesSaberEntryPoint init] */

void FUN_1032a6790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingNearbyFriendsScopeGraphBridge.SCFriendingNearbyFriendsScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a67bc);
  (*pcVar1)();
}



/* Entry: 1032a67f0; end: 1032a6827; -[_TtC38FriendingNearbyFriendsScopeGraphBridge53SCFriendingNearbyFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a67f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f51ad0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51ac8));
  return;
}



/* Entry: 1032a6828; end: 1032a682b;  */

void FUN_1032a6828(void)

{
  return;
}



/* Entry: 1032a682c; end: 1032a684b;  */

void FUN_1032a682c(void)

{
  FUN_1032a669c();
  return;
}



/* Entry: 1032a684c; end: 1032a686b;  */

void FUN_1032a684c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7e28);
  return;
}



/* Entry: 1032a686c; end: 1032a693b;  */

undefined8 FUN_1032a686c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f51b00,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1032a693c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032a693c; end: 1032a695b;  */

void FUN_1032a693c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7ef0);
  return;
}



/* Entry: 1032a695c; end: 1032a6abb;  */

void FUN_1032a695c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f51b08,&UNK_10dba71e8);
  puVar1 = &UNK_1106333a0;
  func_0x000107c613fc(&UNK_1106333a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1032a6abc,puVar1);
  return;
}



/* Entry: 1032a6abc; end: 1032a6ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a6abc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_1032a693c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f51b10) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f51b18) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f51b20) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f51b28) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1032a6ac8; end: 1032a6b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f51b10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f51b18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f51b20) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f51b28) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a6b54; end: 1032a6bb3; -[_TtC38FriendingNearbyFriendsScopeGraphBridge46FriendingNearbyFriendsScopeGraphBridgeServices init] */

void FUN_1032a6b54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingNearbyFriendsScopeGraphBridge.FriendingNearbyFriendsScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a6b80);
  (*pcVar1)();
}



/* Entry: 1032a6bb4; end: 1032a6c4b; -[_TtC38FriendingNearbyFriendsScopeGraphBridge46FriendingNearbyFriendsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a6bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a6bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a6bd4) */
/* WARNING: Removing unreachable block (ram,0x0001032a6bf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a6bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f51b10));
  return;
}



/* Entry: 1032a6c4c; end: 1032a6c57;  */

void FUN_1032a6c4c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1032a70d8,param_1);
  return;
}



/* Entry: 1032a6c58; end: 1032a6c97;  */

void FUN_1032a6c58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1032a70dc,0);
  return;
}



/* Entry: 1032a6c98; end: 1032a6ca3;  */

void FUN_1032a6c98(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1032a70d0,param_1);
  return;
}



/* Entry: 1032a6ca4; end: 1032a6ce3;  */

void FUN_1032a6ca4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1032a70e4,0);
  return;
}



/* Entry: 1032a6ce4; end: 1032a6cef;  */

void FUN_1032a6ce4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1032a70d4,param_1);
  return;
}



/* Entry: 1032a6cf0; end: 1032a6d7b;  */

void FUN_1032a6cf0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1032a70e8,0);
  return;
}



/* Entry: 1032a6d7c; end: 1032a6d87;  */

void FUN_1032a6d7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032a6de0,param_1);
  return;
}



/* Entry: 1032a6d88; end: 1032a6ddf;  */

void FUN_1032a6d88(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1032a6de0; end: 1032a6e13;  */

void FUN_1032a6de0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1032a6e14; end: 1032a6e1b;  */

undefined8 FUN_1032a6e14(void)

{
  return 0x1b;
}



/* Entry: 1032a6e1c; end: 1032a6f93;  */

void FUN_1032a6e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106333c8;
  func_0x000107c613fc(&UNK_1106333c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032a6f94,puVar1);
  return;
}



/* Entry: 1032a6f94; end: 1032a6f9b;  */

void FUN_1032a6f94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f51b00,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f51b00,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110633560;
  func_0x000107c613fc(&UNK_110633560,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032a70c8;
  func_0x00010058fa64(0x1032a70c8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a6f9c; end: 1032a6ff7;  */

void FUN_1032a6f9c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f51b00,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f51b00,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032a6ff8; end: 1032a70eb;  */

undefined ** FUN_1032a6ff8(void)

{
  return &PTR_DAT_112f51c28;
}



/* Entry: 1032a70ec; end: 1032a7133; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a70ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51b80;
  func_0x000107c61428(param_1 + _DAT_112f51b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a7134; end: 1032a718b; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7134(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51b80;
  func_0x000107c61428(param_1 + _DAT_112f51b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032a718c; end: 1032a71d3; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint sCChatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a718c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51b88;
  func_0x000107c61428(param_1 + _DAT_112f51b88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a71d4; end: 1032a71df; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setSCChatCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a71d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51b88;
  func_0x000107c61428(param_1 + _DAT_112f51b88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a71e0; end: 1032a7227; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint sCChatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a71e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51b90;
  func_0x000107c61428(param_1 + _DAT_112f51b90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a7228; end: 1032a7233; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setSCChatScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51b90;
  func_0x000107c61428(param_1 + _DAT_112f51b90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a7234; end: 1032a727b; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint sCFriendProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51b98;
  func_0x000107c61428(param_1 + _DAT_112f51b98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a727c; end: 1032a7287; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setSCFriendProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a727c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51b98;
  func_0x000107c61428(param_1 + _DAT_112f51b98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a7288; end: 1032a72cf; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7288(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51ba0;
  func_0x000107c61428(param_1 + _DAT_112f51ba0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a72d0; end: 1032a72db; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a72d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51ba0;
  func_0x000107c61428(param_1 + _DAT_112f51ba0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a72dc; end: 1032a7323; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint friendingNearbyFriendsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a72dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51ba8;
  func_0x000107c61428(param_1 + _DAT_112f51ba8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a7324; end: 1032a732f; -[SCFriendingNearbyFriendsScopeGraphBridgeSaberEntryPoint setFriendingNearbyFriendsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a7324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51ba8;
  func_0x000107c61428(param_1 + _DAT_112f51ba8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a7330; end: 1032a738f;  */

void FUN_1032a7330(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}


