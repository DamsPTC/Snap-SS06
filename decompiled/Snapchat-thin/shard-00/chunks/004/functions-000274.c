/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100609b90; end: 100609ccb;  */

void FUN_100609b90(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    auStack_78[0] = false;
  }
  else {
    lVar1 = param_1 + 0x18;
    func_0x000100609b44(lVar1,param_2);
    auStack_78[0] = param_1 + 0x20 == lVar1;
  }
  plVar2 = *(long **)(param_1 + 8);
  func_0x000107c60c94(&uStack_90,param_2);
  func_0x000107c60c94(&uStack_a8,param_4);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_60 = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_50 = uStack_a0;
  uStack_58 = uStack_a8;
  uStack_48 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_100609d8c(&uStack_d0,param_5);
  uStack_b8 = uStack_c8;
  uStack_c0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_78,&uStack_c0);
  func_0x00010049410c(&uStack_c0);
  FUN_10061db68(&uStack_d0);
  FUN_1004a5664(auStack_78);
  FUN_10061db8c();
  func_0x00010061db94();
  return;
}



/* Entry: 100609ccc; end: 100609d17;  */

long FUN_100609ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006075dc();
  while (param_3 != 0) {
    cVar2 = (char)unaff_x20 + ' ';
    func_0x000100125af4();
    lVar1 = 8;
    if (-1 < cVar2) {
      lVar1 = 0;
      unaff_x19 = unaff_x20;
    }
    unaff_x20 = *(long *)(unaff_x20 + lVar1);
    param_3 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 100609d18; end: 100609d8b;  */

void FUN_100609d18(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100608e7c();
  uStack_28 = extraout_x8;
  FUN_100609ddc(auStack_40,1);
  FUN_100609e38(uStack_30,param_2);
  FUN_100609404();
  FUN_100609f24();
  FUN_100601c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053953f4();
  FUN_100609f24();
  func_0x0001053953cc();
  pcStack_48 = FUN_100609d8c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100609d18(&uStack_51,uStack_30);
  return;
}



/* Entry: 100609d8c; end: 100609ddb;  */

void FUN_100609d8c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100609d18(&uStack_11,param_1);
  return;
}



/* Entry: 100609ddc; end: 100609e03;  */

long FUN_100609ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100609dac();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100609e04; end: 100609e17;  */

undefined8 * FUN_100609e04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087ff08;
  return param_1 + 1;
}



/* Entry: 100609e18; end: 100609e37;  */

void FUN_100609e18(void)

{
  FUN_100609e04();
  FUN_100609e74();
  return;
}



/* Entry: 100609e38; end: 100609e73;  */

undefined8 * FUN_100609e38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11087feb8;
  FUN_100609e18(param_1 + 3);
  return param_1;
}



/* Entry: 100609e74; end: 100609f23;  */

undefined8 * FUN_100609e74(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  FUN_1006098dc(param_1 + 4,param_2 + 4);
  FUN_10060996c(param_1 + 0x25,param_2 + 0x25);
  FUN_1006099c0(param_1 + 0x29,param_2 + 0x29);
  uVar2 = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x49] = uVar2;
  return param_1;
}



/* Entry: 100609f24; end: 100609f33;  */

void FUN_100609f24(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100609f34; end: 10060a2bf;  */

/* WARNING: Possible PIC construction at 0x000100609fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100609fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100609ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060a258) */
/* WARNING: Removing unreachable block (ram,0x00010060a260) */
/* WARNING: Removing unreachable block (ram,0x00010060a248) */
/* WARNING: Removing unreachable block (ram,0x00010060a1c0) */
/* WARNING: Removing unreachable block (ram,0x00010060a13c) */
/* WARNING: Removing unreachable block (ram,0x00010060a12c) */
/* WARNING: Removing unreachable block (ram,0x00010060a11c) */
/* WARNING: Removing unreachable block (ram,0x00010060a058) */
/* WARNING: Removing unreachable block (ram,0x00010060a014) */
/* WARNING: Removing unreachable block (ram,0x000100609ffc) */
/* WARNING: Removing unreachable block (ram,0x000100609fe8) */
/* WARNING: Removing unreachable block (ram,0x000100609fcc) */
/* WARNING: Removing unreachable block (ram,0x00010060a278) */
/* WARNING: Removing unreachable block (ram,0x00010060a284) */

void FUN_100609f34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x000107c433a8();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 == 10) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
      func_0x000107c5c734(uVar6);
      func_0x000107c61180();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c41900();
      func_0x000107c61180();
      func_0x000107c4bbe4(uVar6,param_2,1,0,&PTR____CFConstantStringClassReference_110e108d8,
                          &PTR____CFConstantStringClassReference_110daafd8,uVar1,uVar2,9999,9999,
                          lVar5);
    }
    else {
      func_0x000107c4b85c();
      func_0x000107c61180();
      func_0x000107c3fcb0();
      func_0x000107c51804(puVar3,param_2,&PTR____CFConstantStringClassReference_110e0ea58);
      func_0x000107c61180();
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar7 + 0x10) == 0) {
      func_0x000107c43374(lVar4);
      func_0x000107c61180();
      func_0x000107c44074();
      func_0x000107c61180();
      lVar5 = lVar4;
    }
    else {
      func_0x000107c61174(lVar4);
      lVar5 = *(long *)(lVar7 + 0x98);
      *(long *)(lVar7 + 0x98) = lVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10060a2c0; end: 10060a493; -[SCFideliusManager _postReadyNotification:identity:source:] */

/* WARNING: Possible PIC construction at 0x00010060a368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060a448) */
/* WARNING: Removing unreachable block (ram,0x00010060a40c) */
/* WARNING: Removing unreachable block (ram,0x00010060a3c0) */
/* WARNING: Removing unreachable block (ram,0x00010060a36c) */
/* WARNING: Removing unreachable block (ram,0x00010060a458) */

void FUN_10060a2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_1000ba800(&UNK_10f3109c9);
  func_0x000107c54978(param_1,param_2,5);
  func_0x000107c60f70(*(undefined8 *)(param_1 + 0x78));
  func_0x000107c4dba0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x000107c52018(param_1);
  func_0x000107c61180();
  func_0x000107c4138c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10060a494; end: 10060a65f; -[SCFideliusUserDatabaseFetcher onDatabaseReady:] */

/* WARNING: Possible PIC construction at 0x00010060a4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060a82c) */
/* WARNING: Removing unreachable block (ram,0x00010060a7f8) */
/* WARNING: Removing unreachable block (ram,0x00010060a7d8) */
/* WARNING: Removing unreachable block (ram,0x00010060a7ac) */
/* WARNING: Removing unreachable block (ram,0x00010060a744) */
/* WARNING: Removing unreachable block (ram,0x00010060a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010060a748) */
/* WARNING: Removing unreachable block (ram,0x00010060a72c) */
/* WARNING: Removing unreachable block (ram,0x00010060a71c) */
/* WARNING: Removing unreachable block (ram,0x00010060a650) */
/* WARNING: Removing unreachable block (ram,0x00010060a658) */
/* WARNING: Removing unreachable block (ram,0x00010060a5d8) */
/* WARNING: Removing unreachable block (ram,0x00010060a614) */
/* WARNING: Removing unreachable block (ram,0x00010060a640) */
/* WARNING: Removing unreachable block (ram,0x00010060a5f0) */
/* WARNING: Removing unreachable block (ram,0x00010060a5c0) */
/* WARNING: Removing unreachable block (ram,0x00010060a4f4) */
/* WARNING: Removing unreachable block (ram,0x00010060a528) */
/* WARNING: Removing unreachable block (ram,0x00010060a550) */
/* WARNING: Removing unreachable block (ram,0x00010060a554) */
/* WARNING: Removing unreachable block (ram,0x00010060a564) */
/* WARNING: Removing unreachable block (ram,0x00010060a56c) */
/* WARNING: Removing unreachable block (ram,0x00010060a59c) */
/* WARNING: Removing unreachable block (ram,0x00010060a5b8) */
/* WARNING: Removing unreachable block (ram,0x00010060a83c) */

void FUN_10060a494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 0x20);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10060a660; end: 10060a85b; -[SCFideliusServiceCoordinator dbReady:identity:] */

/* WARNING: Possible PIC construction at 0x00010060a718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060a838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060a82c) */
/* WARNING: Removing unreachable block (ram,0x00010060a7f8) */
/* WARNING: Removing unreachable block (ram,0x00010060a7d8) */
/* WARNING: Removing unreachable block (ram,0x00010060a7ac) */
/* WARNING: Removing unreachable block (ram,0x00010060a744) */
/* WARNING: Removing unreachable block (ram,0x00010060a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010060a748) */
/* WARNING: Removing unreachable block (ram,0x00010060a72c) */
/* WARNING: Removing unreachable block (ram,0x00010060a71c) */
/* WARNING: Removing unreachable block (ram,0x00010060a83c) */

void FUN_10060a660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3e890(param_4);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c0640;
  func_0x000107c610f4(PTR_PTR_1126c0640);
  lVar2 = param_1 + 0x10;
  func_0x000107c61148(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5b4dc(uVar3);
  func_0x000107c61180();
  func_0x000107c463cc(puVar1,param_2,lVar2,uVar3,param_4,param_3,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  func_0x000107c5946c(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060a85c; end: 10060a917; -[SCFriendsFeedLoadingStatusStream initWithMessagingExperimentService:] */

undefined1 * FUN_10060a85c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8d98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ba478;
    func_0x000107c610f4(PTR_PTR_1126ba478);
    func_0x000107c474a8();
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ba4a8;
    func_0x000107c3b2c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10060a918; end: 10060a91f; +[SCFriendsFeedLoadingStatusStream _createLoadingStatusStream:] */

void FUN_10060a918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10060a920; end: 10060a977; -[SCFriendsFeedLoadingStatusStream updateLoadingStatus:triggerType:] */

void FUN_10060a920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba478;
  func_0x000107c610f4(PTR_PTR_1126ba478);
  func_0x000107c474a8();
  func_0x000107c4d664(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060a978; end: 10060a97f;  */

void FUN_10060a978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_run_11262e3c0);
  return;
}



/* Entry: 10060a980; end: 10060a9db; -[SCNShimsDispatchTaskCppProxy run] */

void FUN_10060a980(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10060a9dc; end: 10060a9f7;  */

void FUN_10060a9dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010060a9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar1 + 2,puVar1 + 5);
  return;
}



/* Entry: 10060a9f8; end: 10060ab1f;  */

void FUN_10060a9f8(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x000107c6110c();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 200) {
    lVar4 = lVar6;
    func_0x000107c28630(lVar6);
    func_0x000107c61180();
    func_0x000107c3d798(puVar3);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c40794(puVar3);
  FUN_10060ab20();
  FUN_10060ab28(param_3);
  func_0x000107c61180();
  func_0x000107c4dc28(uVar5);
  FUN_10060ab20();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10060ab20; end: 10060ab27;  */

void FUN_10060ab20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10060ab28; end: 10060abdf;  */

void FUN_10060ab28(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar3 = lVar4;
    FUN_1006a7d84(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    func_0x0001006a7df0();
  }
  func_0x000107c40794(puVar2);
  FUN_10060abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10060abe0; end: 10060abe7;  */

void FUN_10060abe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10060abe8; end: 10060ac3b; -[SCGroupsDataPublisher onGroupsUpdated:removedGroups:] */

void FUN_10060abe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x18),param_2,0);
  }
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10060ac3c; end: 10060ac97;  */

long FUN_10060ac3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3e8();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 10060ac98; end: 10060ae6f; -[SCGroupsUpdateNotificationPresenter _currentUserDidInviteWithGroupUpdates:] */

long FUN_10060ac98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4080c();
  lVar5 = 0;
  if (lVar1 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          func_0x000107c61128(param_3);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar6 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x000107c44548();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c44518();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
        func_0x000107c4080c();
        if (lVar2 != 0) {
          lVar7 = *plStack_1e0;
          do {
            lVar8 = 0;
            do {
              if (*plStack_1e0 != lVar7) {
                func_0x000107c61128(lVar3);
              }
              lVar4 = *(long *)(lStack_1e8 + lVar8 * 8);
              func_0x000107c4451c();
              if (lVar4 == 2) {
                func_0x000107c61170(lVar3);
                lVar5 = 1;
                goto LAB_10060ae20;
              }
              lVar8 = lVar8 + 1;
            } while (lVar2 != lVar8);
            lVar2 = lVar3;
            func_0x000107c4080c();
          } while (lVar2 != 0);
        }
        func_0x000107c61170(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar1);
      lVar1 = param_3;
      func_0x000107c4080c();
    } while (lVar1 != 0);
    lVar5 = 0;
  }
LAB_10060ae20:
  func_0x000107c61170(param_3);
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar5;
  }
  func_0x000107c60e78();
  pcStack_1f8 = FUN_10060ae70;
  lVar6 = lVar1 + 8;
  lStack_210 = lVar5;
  lStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar1 + 0x18) != 0) {
    ppuStack_218 = &PTR_DAT_110d99210;
    FUN_1004a52a0(lVar6,&ppuStack_218);
  }
  FUN_100576684((long *)(lVar1 + 0x18));
  FUN_1004a5588(lVar6);
  return lVar6;
}



/* Entry: 10060ae70; end: 10060aec3; -[SCNShimsDispatchTaskCppProxy .cxx_destruct] */

void FUN_10060ae70(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110d99210;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_100576684((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 10060aec4; end: 10060af73;  */

void FUN_10060aec4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x000107c49d0c(uVar1,param_2,&PTR____CFConstantStringClassReference_110e10d58);
  if ((uVar1 & 1) == 0) {
    func_0x000107c49d0c(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110e10d78);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c4bf88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10060af74; end: 10060b0b3; -[SCFideliusLogger logUserDbOps:result:errorMessage:withNewDb:withIdentityMissing:] */

/* WARNING: Possible PIC construction at 0x00010060b04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060b084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060b094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060b050) */
/* WARNING: Removing unreachable block (ram,0x00010060b088) */

void FUN_10060af74(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c4bb00(param_1,param_2,param_3,param_4,0,0,9999,0);
  if (param_3 == 6) {
    param_4 = PTR_PTR_1126c04d8;
    func_0x000107c4b790(PTR_PTR_1126c04d8);
    func_0x000107c61180();
  }
  else {
    if (param_3 != 7) goto code_r0x000107c61170;
    param_4 = PTR_PTR_1126c04d8;
    func_0x000107c4fae0(PTR_PTR_1126c04d8);
    func_0x000107c61180();
  }
  func_0x000107c5e508();
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10060b0b4; end: 10060b457; -[SCFideliusLogger logDbOperation:result:table:databaseType:errorCode:statement:source:errorMessage:freeDiskSpaceMb:totalDiskSpaceMb:freeNodes:totalNodes:withNewDb:withIdentityMissing:dbSizeByte:totalDbSizeByte:numDbs:] */

void FUN_10060b0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,long param_18,long param_19,long param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puVar1 = PTR_PTR_1126c0590;
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c610fc();
  func_0x000107c54700();
  func_0x000107c5703c(puVar1,param_3,param_5);
  func_0x000107c53e0c(puVar1,param_3,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c53e10(puVar1,param_3,param_7);
  func_0x000107c61170(param_7);
  if (-1 < param_8) {
    func_0x000107c5465c(puVar1);
  }
  func_0x000107c59848(puVar1,param_3,param_9);
  func_0x000107c59558(puVar1,param_3,param_10);
  func_0x000107c54664(puVar1,param_3,param_11);
  func_0x000107c61170(param_11);
  func_0x000107c54bac(puVar1,param_3,param_12);
  func_0x000107c61170(param_12);
  func_0x000107c59f64(puVar1,param_3,param_13);
  func_0x000107c61170(param_13);
  func_0x000107c54bb4(puVar1,param_3,param_14);
  func_0x000107c61170(param_14);
  func_0x000107c59f88(puVar1,param_3,param_15);
  func_0x000107c61170(param_15);
  func_0x000107c5a784(puVar1,param_3,(undefined1)param_16);
  func_0x000107c5a76c(puVar1,param_3,param_16._1_1_);
  if (-1 < param_18) {
    func_0x000107c53e58(puVar1);
  }
  if (-1 < param_19) {
    func_0x000107c59f5c(puVar1,param_3,param_19);
  }
  if (-1 < param_20) {
    func_0x000107c53e54(puVar1,param_3,param_20);
  }
  func_0x000107c4ba3c(param_2,param_3,puVar1);
  FUN_10060c084();
  func_0x000107c61180();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dce878;
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar3 = param_10;
  puStack_90 = puVar2;
  if (param_10 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e0fdd8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar3;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_20);
  func_0x000107c61180();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e0fdf8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar4;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_19);
  func_0x000107c61180();
  uVar12 = 4;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar5;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_90,&ppuStack_b0);
  func_0x000107c61180();
  uVar10 = param_4;
  puVar11 = puVar6;
  func_0x000107c3d8e8(param_2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  if (param_10 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
  }
  if (param_5 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  uVar14 = param_1;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c6071c();
  uVar7 = *(undefined8 *)(param_5 + 0x10);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar8 = uVar10;
  func_0x000107c503dc(uVar10);
  func_0x000107c61180();
  uVar9 = uVar10;
  func_0x000107c4d5e4(uVar10);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_10060c718;
  puStack_1a0 = &UNK_110a5b490;
  uStack_180 = uVar14;
  func_0x000107c61174(uVar10);
  uStack_198 = uVar10;
  func_0x000107c61174(uVar12);
  uStack_190 = uVar12;
  uStack_178 = param_1;
  func_0x000107c61174(puVar11);
  puStack_200 = puVar1;
  uStack_1f8 = 0xc2000000;
  puStack_1f0 = &UNK_10860ac14;
  puStack_1e8 = &UNK_110a5b4c0;
  uStack_1e0 = uVar10;
  uStack_1d8 = uVar12;
  puStack_1d0 = puVar11;
  uStack_1c8 = uVar14;
  uStack_1c0 = param_1;
  puStack_188 = puVar11;
  func_0x000107c61174(puVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c42fb8(uVar7,param_3,uVar8,uVar9,uVar13,&puStack_1b8,&puStack_200);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puStack_1d0);
  func_0x000107c61170(uStack_1d8);
  func_0x000107c61170(uStack_1e0);
  func_0x000107c61170(puStack_188);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(uStack_198);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 10060b458; end: 10060b62f; -[SCGrpcAuthContextDelegate _fetchClientAttestation:callback:accessToken:authLatency:] */

void FUN_10060b458(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar6 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c6071c();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c503dc(param_4);
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4d5e4(param_4);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10060c718;
  puStack_b0 = &UNK_110a5b490;
  uStack_90 = uVar6;
  func_0x000107c61174(param_4);
  uStack_a8 = param_4;
  func_0x000107c61174(param_6);
  uStack_a0 = param_6;
  uStack_88 = param_1;
  func_0x000107c61174(param_5);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_10860ac14;
  puStack_f8 = &UNK_110a5b4c0;
  uStack_f0 = param_4;
  uStack_e8 = param_6;
  uStack_e0 = param_5;
  uStack_d8 = uVar6;
  uStack_d0 = param_1;
  uStack_98 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c42fb8(uVar2,param_3,uVar3,uVar4,uVar5,&puStack_c8,&puStack_110);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10060b630; end: 10060b807; -[SCArgosImpl fetchArgosHeaders:requestId:completionPerformer:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010060b7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060b7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060b7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060b75c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010060b7a8) */
/* WARNING: Removing unreachable block (ram,0x00010060b7c8) */

void FUN_10060b630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x000107c45cd4();
  puVar3 = *(undefined **)(param_1 + 0x18);
  func_0x000107c43ee8();
  func_0x000107c61180();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000107c49cd8();
  if (((iVar1 == 0) || (puVar3 == (undefined *)0x0)) ||
     (puVar4 = puVar3, func_0x000107c4d078(), (int)puVar4 == 1)) {
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10061ce70;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_1;
    if (lRam00000001136bb6b0 != -1) {
      FUN_10002a2fc(0x1136bb6b0,&puStack_88);
    }
  }
  else {
    func_0x000105387c48(*(undefined8 *)(param_1 + 8));
    func_0x000107c51e6c();
    if ((int)puVar3 != 0) {
      func_0x000107c56bcc(puVar2);
    }
    puVar3 = PTR_PTR_1126b7eb8;
    func_0x000107c610f4(PTR_PTR_1126b7eb8);
    func_0x000107c48218();
    func_0x000107c43eec(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10060b808; end: 10060ba2f; -[SCArgosConfig getArgosConfigForPath:] */

void FUN_10060b808(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3fe64();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          func_0x000107c61128(lVar2);
        }
        lVar6 = *(long *)(lStack_1a8 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x000107c42b1c();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c40404();
        func_0x000107c61170(lVar3);
        if ((int)lVar4 != 0) {
          func_0x000107c61174(lVar6);
          goto LAB_10060b9d4;
        }
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar3 = lVar6;
        func_0x000107c4ed70();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c4080c();
        if (lVar4 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                func_0x000107c61128(lVar3);
              }
              uVar5 = param_3;
              func_0x000107c44a40(param_3,param_2,*(undefined8 *)(lStack_1e8 + lVar10 * 8));
              if ((uVar5 & 1) != 0) {
                func_0x000107c61174(lVar6);
                func_0x000107c61170(lVar3);
                goto LAB_10060b9d4;
              }
              lVar10 = lVar10 + 1;
            } while (lVar4 != lVar10);
            lVar4 = lVar3;
            func_0x000107c4080c(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar4 != 0);
        }
        func_0x000107c61170(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar1);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  lVar6 = 0;
LAB_10060b9d4:
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    lVar2 = param_3 + 0x28;
    func_0x000107c61148(lVar2);
    lVar6 = lVar2;
    func_0x000107c3b1cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10060ba30; end: 10060ba77;  */

void FUN_10060ba30(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b1cc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10060ba78; end: 10060bfeb; -[SCArgosConfig _createArgosConfigWithCircumstanceEngine:] */

/* WARNING: Removing unreachable block (ram,0x00010060be00) */

void FUN_10060ba78(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c49cd8();
  if ((param_1 & 1) == 0) {
    puVar12 = PTR_PTR_1126b7e58;
    func_0x000107c610fc(PTR_PTR_1126b7e58);
    goto LAB_10060bfa4;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126b7e60;
  func_0x000107c610fc();
  puVar12 = puVar2;
  func_0x000107c42b1c();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar12);
  puVar12 = puVar2;
  func_0x000107c4ed70(puVar2);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar12);
  func_0x000107c5678c(puVar2);
  func_0x000107c58ec4(puVar2);
  puVar3 = PTR_PTR_1126b7e60;
  func_0x000107c610fc(PTR_PTR_1126b7e60);
  puVar12 = puVar3;
  func_0x000107c4ed70();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar12);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar12);
  func_0x000107c5678c(puVar3);
  func_0x000107c58ec4(puVar3);
  puVar4 = PTR_PTR_1126b7e60;
  func_0x000107c610fc(PTR_PTR_1126b7e60);
  puVar12 = puVar4;
  func_0x000107c4ed70();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar12);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar12);
  func_0x000107c5678c(puVar4);
  func_0x000107c58ec4(puVar4);
  puVar5 = PTR_PTR_1126b7e60;
  func_0x000107c610fc(PTR_PTR_1126b7e60);
  puVar12 = puVar5;
  func_0x000107c42b1c();
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c61170(puVar12);
  puVar12 = puVar5;
  func_0x000107c4ed70(puVar5);
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c61170(puVar12);
  func_0x000107c5678c(puVar5);
  func_0x000107c58ec4(puVar5);
  puVar6 = PTR_PTR_1126b7e60;
  func_0x000107c610fc(PTR_PTR_1126b7e60);
  puVar12 = puVar6;
  func_0x000107c4ed70();
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c61170(puVar12);
  func_0x000107c5678c(puVar6);
  func_0x000107c58ec4(puVar6);
  func_0x000107c3d798(puVar1);
  func_0x000107c3d798(puVar1);
  func_0x000107c3d798(puVar1);
  func_0x000107c3d798(puVar1);
  func_0x000107c3d798(puVar1);
  lVar7 = param_3;
  func_0x000107c4f558();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126b7e58;
  func_0x000107c610f4(PTR_PTR_1126b7e58);
  lVar8 = lVar7;
  func_0x000107c5dc0c(lVar7);
  func_0x000107c61180();
  func_0x000107c4636c(puVar12);
  func_0x000107c61170(lVar8);
  puVar9 = puVar12;
  func_0x000107c3fe64(puVar12);
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c61170(puVar9);
  puVar9 = PTR_PTR_1126b7e68;
  func_0x000107c3e128();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4adac();
  if (puVar10 == (undefined *)0x0) {
LAB_10060bf4c:
    func_0x000107c61170(puVar9);
  }
  else {
    puVar10 = PTR_PTR_1126b7e68;
    func_0x000107c3e128();
    func_0x000107c61180();
    puVar11 = puVar10;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    if (((ulong)puVar11 & 1) == 0) {
      puVar10 = PTR_PTR_1126b7e68;
      func_0x000107c3e128(PTR_PTR_1126b7e68);
      func_0x000107c61180();
      puVar9 = puVar10;
      func_0x000107c3ff54();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = PTR_PTR_1126b7e60;
      func_0x000107c610fc(PTR_PTR_1126b7e60);
      puVar11 = puVar10;
      func_0x000107c4ed70();
      func_0x000107c61180();
      func_0x000107c3d7a0();
      func_0x000107c61170(puVar11);
      func_0x000107c5678c(puVar10);
      func_0x000107c4a554(PTR_PTR_1126b7e68);
      func_0x000107c58ec4(puVar10);
      puVar11 = puVar12;
      func_0x000107c3fe64(puVar12);
      func_0x000107c61180();
      func_0x000107c3d798();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      goto LAB_10060bf4c;
    }
  }
  func_0x000107c61170(lVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
LAB_10060bfa4:
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110dd5638,1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10060bfec; end: 10060c003; -[SCArgosConfig isEnabled] */

void FUN_10060bfec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd5638,1,0);
  return;
}



/* Entry: 10060c004; end: 10060c083; -[SCAFideliusDbOperation setEventType:] */

/* WARNING: Possible PIC construction at 0x00010060c06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060c070) */

void FUN_10060c004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_10060c084(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110e795d8,9,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10060c084; end: 10060c0a3;  */

undefined * FUN_10060c084(ulong param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_PTR_110d88238)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10060c0a4; end: 10060c187; +[CommonEndpointConfiguration descriptor] */

void FUN_10060c0a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73980,
                        &PTR____CFConstantStringClassReference_110f61ff8,&PTR_DAT_11336f408,
                        &PTR_DAT_11336f420,4,0x18,0x1c);
    puRam00000001137f4878 = puVar1;
  }
  return;
}



/* Entry: 10060c188; end: 10060c19f; -[SCAFideliusDbOperation setOperationResult:] */

void FUN_10060c188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef758,0xc,param_3,0);
  return;
}



/* Entry: 10060c1a0; end: 10060c1b7; -[SCAFideliusDbOperation setDatabaseTable:] */

void FUN_10060c1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef5d8,5,param_3,0);
  return;
}



/* Entry: 10060c1b8; end: 10060c1c7; -[GPBAutocreatedArray count] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060c1b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10060c1c8; end: 10060c243; -[GPBAutocreatedArray insertObject:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10060c1c8(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = (long)_DAT_112796b2c;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    *(undefined **)(param_1 + lVar8) = puVar3;
  }
  func_0x000107c49740();
  lVar8 = *(long *)(param_1 + _DAT_112796b30);
  if (lVar8 == 0) {
    return;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar8;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar7 = *(long *)(lVar4 + 8);
  lVar4 = lVar7;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
LAB_10060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar7);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar6 = lVar9;
      func_0x000107c433d8();
      if ((int)lVar6 == 1) {
        lVar6 = 0;
        if (*(long *)(lVar8 + 0x40) != 0) {
          lVar6 = *(long *)(*(long *)(lVar8 + 0x40) + (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18))
          ;
        }
        if (lVar6 == param_1) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_1 + *piVar1) = 0;
          FUN_100109ff0(lVar8);
          goto LAB_10060c364;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar7;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10060c244; end: 10060c39b;  */

void FUN_10060c244(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  func_0x000107c61158();
  func_0x000107c41800();
  lVar6 = *(long *)(lVar3 + 8);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_10060c364:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(lVar6);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar5 = lVar7;
      func_0x000107c433d8();
      if ((int)lVar5 == 1) {
        lVar5 = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x40) +
                           (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0x18));
        }
        if (lVar5 == param_2) {
          piVar1 = (int *)&DAT_112796b30;
          if (3 < *(byte *)(*(long *)(lVar7 + 8) + 0x1e) - 0xd) {
            piVar1 = (int *)&DAT_112796b34;
          }
          *(undefined8 *)(param_2 + *piVar1) = 0;
          FUN_100109ff0(param_1);
          goto LAB_10060c364;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10060c39c; end: 10060c3b3; -[SCAFideliusDbOperation setDatabaseType:] */

void FUN_10060c39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef718,6,param_3,0);
  return;
}



/* Entry: 10060c3b4; end: 10060c407; -[SCAFideliusDbOperation setErrorCode:] */

void FUN_10060c3b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110db0dd8,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c408; end: 10060c413;  */

bool FUN_10060c408(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10060c414; end: 10060c42b; -[SCAFideliusDbOperation setStatement:] */

void FUN_10060c414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef778,0xf,param_3,0);
  return;
}



/* Entry: 10060c42c; end: 10060c443; -[SCAFideliusDbOperation setSource:] */

void FUN_10060c42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,0xe,param_3,0);
  return;
}



/* Entry: 10060c444; end: 10060c45b; -[SCAFideliusDbOperation setErrorMessage:] */

void FUN_10060c444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,8,param_3,0);
  return;
}



/* Entry: 10060c45c; end: 10060c473; -[SCAFideliusDbOperation setFreeDiskSpaceMb:] */

void FUN_10060c45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e29c78,10,param_3,0);
  return;
}



/* Entry: 10060c474; end: 10060c48b; -[SCAFideliusDbOperation setTotalDiskSpaceMb:] */

void FUN_10060c474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef798,0x10,param_3,0);
  return;
}



/* Entry: 10060c48c; end: 10060c4a3; -[SCAFideliusDbOperation setFreeNodes:] */

void FUN_10060c48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef738,0xb,param_3,0);
  return;
}



/* Entry: 10060c4a4; end: 10060c4bb; -[SCAFideliusDbOperation setTotalNodes:] */

void FUN_10060c4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fef7b8,0x11,param_3,0);
  return;
}



/* Entry: 10060c4bc; end: 10060c50f; -[SCAFideliusDbOperation setWithNewDb:] */

void FUN_10060c4bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef7f8,0x13,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c510; end: 10060c563; -[SCAFideliusDbOperation setWithIdentityMissing:] */

void FUN_10060c510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef7d8,0x12,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c564; end: 10060c5b7; -[SCAFideliusDbOperation setDbSizeByte:] */

void FUN_10060c564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef6d8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c5b8; end: 10060c60b; -[SCAFideliusDbOperation setTotalDbSizByte:] */

void FUN_10060c5b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef6f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c60c; end: 10060c65f; -[SCAFideliusDbOperation setDbCount:] */

void FUN_10060c60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef6b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060c660; end: 10060c6c7; +[ArgosConfig descriptor] */

void FUN_10060c660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73930,
                        &PTR____CFConstantStringClassReference_110f61fd8,&PTR_DAT_11336f408,
                        &PTR_DAT_11336f4a0,5,0x18,0x1c);
    puRam00000001137f4870 = puVar1;
  }
  return;
}



/* Entry: 10060c6c8; end: 10060c6d3; -[SCAFideliusDbOperation getEventName] */

undefined ** FUN_10060c6c8(void)

{
  return &PTR____CFConstantStringClassReference_110fef698;
}



/* Entry: 10060c6d4; end: 10060c6df; -[SCAFideliusDbOperation getPerUserSamplingRateV2] */

undefined8 FUN_10060c6d4(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10060c6e0; end: 10060c70b; +[SCGrapheneFideliusMetric loadUserDb] */

void FUN_10060c6e0(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10060c70c; end: 10060c717; +[SCArgosTweak argosAllowedListPrefixEndpoint] */

undefined ** FUN_10060c70c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10060c718; end: 10060c817;  */

/* WARNING: Possible PIC construction at 0x00010060c7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060c7e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060c7d8) */
/* WARNING: Removing unreachable block (ram,0x00010060c7e8) */

void FUN_10060c718(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c6071c();
  dVar2 = *(double *)(param_2 + 0x38);
  puVar1 = PTR_PTR_1126b4ea8;
  func_0x000107c610f4(PTR_PTR_1126b4ea8);
  func_0x000107c4d954((param_1 - dVar2) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d954(*(double *)(param_2 + 0x40) * 1000.0);
  func_0x000107c61180();
  func_0x000107c48354(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10060c818; end: 10060ca97;  */

void FUN_10060c818(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar9;
  undefined *puVar10;
  long lStack_440;
  long lStack_438;
  undefined1 auStack_430 [56];
  long lStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [264];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [256];
  long alStack_1c0 [3];
  undefined1 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *(long **)(param_1 + 0x20);
  func_0x000107c4e430();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5c174();
  func_0x000107c61180();
  func_0x000107c61170(plVar2);
  puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar10;
  func_0x000107c40528();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar5 = puVar4;
  func_0x000107c40808();
  puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  puStack_140 = puVar5;
  func_0x000107c415e0();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lStack_138 = param_1;
  func_0x000107c4e430(uVar6);
  func_0x000107c61180();
  puVar5 = puVar9;
  func_0x000107c3e388();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c43454();
  puStack_148 = puVar7;
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar9);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x000107c4080c();
  if (puVar5 != (undefined *)0x0) {
    puVar10 = (undefined *)*puStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != puVar10) {
          func_0x000107c61128(puVar4);
        }
        plVar2 = plVar3;
        func_0x000107c5c168(plVar3);
        func_0x000107c61180();
        puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c43454();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(plVar2);
        puVar9 = puVar9 + 1;
      } while (puVar5 != puVar9);
      puVar5 = puVar4;
      func_0x000107c4080c();
    } while (puVar5 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar4);
  uVar6 = *(undefined8 *)(*(long *)(lStack_138 + 0x28) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4baf8();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar4);
  plVar2 = plVar3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    plVar2 = plVar2 + 1;
    pcStack_158 = FUN_10060ca98;
    puStack_180 = puVar10;
    puStack_178 = puVar4;
    uStack_170 = uVar6;
    plStack_168 = plVar3;
    puStack_160 = &stack0xfffffffffffffff0;
    FUN_100601ad8();
    uStack_188 = extraout_x8;
    FUN_10060cc10(plVar2[2]);
    (*extraout_x8_00)();
    lStack_438 = plVar3[1];
    lStack_440 = *plVar3;
    if (plVar3[1] != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10 != 0);
    }
    func_0x0001004a2448(auStack_430,param_2);
    lStack_3f0 = plVar3[3];
    lStack_3f8 = plVar3[2];
    if (plVar3[3] != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10_00 != 0);
    }
    FUN_1006098dc(auStack_3e8,plVar3 + 4);
    FUN_10060996c(auStack_2e0,plVar3 + 0x25);
    FUN_1006099c0(auStack_2c0,plVar3 + 0x29);
    plVar2 = alStack_1c0;
    func_0x000107c60c94(plVar2,plVar3 + 0x3d);
    uStack_1a8 = (undefined1)plVar3[0x3c];
    lStack_198 = plVar3[0x4a];
    lStack_1a0 = plVar3[0x49];
    FUN_10060cc80();
    uVar1 = *plVar2 == *(long *)(*plVar3 + 0x38);
    if ((bool)uVar1) {
      FUN_10060cc90(&lStack_440);
    }
    else {
      FUN_1006297a0(*(long *)(*plVar3 + 0x38),&lStack_440);
    }
    FUN_10061cccc();
    FUN_100601c64(uStack_188);
    if (!(bool)uVar1) {
      func_0x000107c60e78();
      func_0x0001053953f4();
      FUN_10061cccc();
      func_0x0001053953cc();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10060ca98; end: 10060ca9f;  */

void FUN_10060ca98(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [264];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  long alStack_70 [3];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  param_1 = param_1 + 8;
  FUN_100601ad8();
  uStack_38 = extraout_x8;
  FUN_10060cc10(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_2e0,param_2);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10_00 != 0);
  }
  FUN_1006098dc(auStack_298,unaff_x19 + 4);
  FUN_10060996c(auStack_190,unaff_x19 + 0x25);
  FUN_1006099c0(auStack_170,unaff_x19 + 0x29);
  plVar2 = alStack_70;
  func_0x000107c60c94(plVar2,unaff_x19 + 0x3d);
  uStack_58 = (undefined1)unaff_x19[0x3c];
  lStack_48 = unaff_x19[0x4a];
  lStack_50 = unaff_x19[0x49];
  FUN_10060cc80();
  uVar1 = *plVar2 == *(long *)(*unaff_x19 + 0x38);
  if ((bool)uVar1) {
    FUN_10060cc90(&lStack_2f0);
  }
  else {
    FUN_1006297a0(*(long *)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  FUN_10061cccc();
  FUN_100601c64(uStack_38);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053953f4();
    FUN_10061cccc();
    func_0x0001053953cc();
    return;
  }
  return;
}



/* Entry: 10060caa0; end: 10060cc0f;  */

void FUN_10060caa0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [56];
  long lStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [264];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [256];
  long alStack_70 [3];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  FUN_100601ad8();
  uStack_38 = extraout_x8;
  FUN_10060cc10(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  lStack_2e8 = unaff_x19[1];
  lStack_2f0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(auStack_2e0,param_2);
  lStack_2a0 = unaff_x19[3];
  lStack_2a8 = unaff_x19[2];
  if (unaff_x19[3] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10_00 != 0);
  }
  FUN_1006098dc(auStack_298,unaff_x19 + 4);
  FUN_10060996c(auStack_190,unaff_x19 + 0x25);
  FUN_1006099c0(auStack_170,unaff_x19 + 0x29);
  plVar2 = alStack_70;
  func_0x000107c60c94(plVar2,unaff_x19 + 0x3d);
  uStack_58 = (undefined1)unaff_x19[0x3c];
  lStack_48 = unaff_x19[0x4a];
  lStack_50 = unaff_x19[0x49];
  FUN_10060cc80();
  uVar1 = *plVar2 == *(long *)(*unaff_x19 + 0x38);
  if ((bool)uVar1) {
    FUN_10060cc90(&lStack_2f0);
  }
  else {
    FUN_1006297a0(*(long *)(*unaff_x19 + 0x38),&lStack_2f0);
  }
  FUN_10061cccc();
  FUN_100601c64(uStack_38);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053953f4();
    FUN_10061cccc();
    func_0x0001053953cc();
    return;
  }
  return;
}



/* Entry: 10060cc10; end: 10060cc5b;  */

void FUN_10060cc10(void)

{
  return;
}



/* Entry: 10060cc5c; end: 10060cc7f;  */

void FUN_10060cc5c(long param_1)

{
  long lVar1;
  
  func_0x0001005529b4(param_1 + 0x40);
  lVar1 = param_1 + 0x60;
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    FUN_1004b4e98();
    *(long *)(param_1 + 0x68) = lVar1;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 10060cc80; end: 10060cc8f;  */

void FUN_10060cc80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010060cc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  return;
}



/* Entry: 10060cc90; end: 10060cfff;  */

void FUN_10060cc90(double param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plStack_58 = param_2 + 0x2c;
  plVar4 = param_2 + 0x30;
  plStack_50 = plVar4;
  plStack_48 = param_2 + 9;
  FUN_10007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x53] == '\x01') {
      func_0x0001053954ec();
    }
    else {
      func_0x000105395484(param_2 + 0x50);
    }
    FUN_10002b838(&uStack_100,"Service disposed");
    func_0x0001053953ec(auStack_1f0);
    func_0x000105395414();
  }
  else {
    FUN_100609808();
    FUN_10046778c();
    FUN_100467768();
    FUN_1004a2704(param_2 + 0x50,(long)param_1);
    iVar2 = (int)param_2 + 0x10;
    FUN_1004a4bf8();
    if (iVar2 == 0) {
      func_0x000107c60c94(&uStack_118,param_2 + 0x50);
      FUN_10046985c(auStack_1f0,*(long *)(*param_2 + 0x18) + 0x80);
      FUN_10048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*param_2 + 0xa0);
      FUN_10002b838(&uStack_208,"unknown");
      FUN_10002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x00010539549c();
      func_0x0001053954dc();
      func_0x000107c60ca0(&uStack_130);
      FUN_100469c34(auStack_1f0);
      func_0x000107c60ca0(&uStack_118);
      plVar4 = param_2 + 2;
      func_0x000107c2bfa4(plVar4);
      if ((char)param_2[0x53] == '\x01') {
        func_0x000107c2bfac(param_2 + 0x50,plVar4);
        func_0x00010539554c();
        func_0x000107c2bfb8();
      }
      else {
        func_0x000107c2bfb0(param_2 + 0x50,plVar4);
        func_0x00010539554c();
        func_0x000107c2bfc0();
      }
      func_0x0001006b1fa8();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x000105395414();
      func_0x000105395494();
      func_0x0001006b1fc4();
      func_0x000100bf5670(&uStack_100);
      goto LAB_10060cef8;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      plVar3 = (long *)param_2[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_10060d064(param_2 + 0xb,param_2 + 2,(long)param_1,plVar4);
      goto LAB_10060cef8;
    }
    if ((char)param_2[0x53] == '\x01') {
      func_0x0001053954ec();
    }
    else {
      func_0x000105395484(param_2 + 0x50);
    }
    FUN_10002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001053953ec(auStack_1f0);
    func_0x000105395414();
  }
  func_0x000105395494();
  func_0x000107c60ca0(&uStack_100);
LAB_10060cef8:
  FUN_100078bd8(auStack_70);
  return;
}



/* Entry: 10060d000; end: 10060d03f;  */

void FUN_10060d000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010060d00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  return;
}



/* Entry: 10060d040; end: 10060d063;  */

void FUN_10060d040(long param_1)

{
  long lVar1;
  
  func_0x0001005529b4(param_1 + 0x60);
  lVar1 = param_1 + 0x80;
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_1004b4e98();
    *(long *)(param_1 + 0x88) = lVar1;
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}



/* Entry: 10060d064; end: 10060d2e3;  */

void FUN_10060d064(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_128 [24];
  long alStack_68 [3];
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x34) == '\x01') {
    func_0x000107c2bfb0(param_1 + 0x1c,0x10);
    func_0x0001053954e4();
    func_0x0001053953dc();
    func_0x00010539544c();
    func_0x0001053953b0();
  }
  else {
    if (*(byte **)(param_4 + 0xf0) != (byte *)0x0) {
      if ((**(byte **)(param_4 + 0xf0) & 1) != 0) {
        func_0x000105395484(param_1 + 0x1c);
        func_0x0001053954e4();
        func_0x0001053953dc();
        func_0x00010539544c();
        func_0x0001053953b0();
        goto LAB_10060d248;
      }
      lVar2 = *param_1;
    }
    if (*(long *)(lVar2 + 0x68) != 0) {
      auStack_128[0] = *(undefined8 *)(lVar2 + 0x80);
      FUN_10060d2e4(alStack_68,lVar2 + 0x38,param_1 + 0x1f,param_4,lVar2 + 0x30,auStack_128);
      if (*(long *)(param_4 + 0xf0) != 0) {
        FUN_10062a520(*(long *)(param_4 + 0xf0),alStack_68[0] + 0x120);
      }
      lVar2 = alStack_68[0];
      if (*(char *)(param_4 + 0x90) == '\x01') {
        func_0x0001006b1fa8();
        FUN_1004b5d48(lVar2 + 0x120,auStack_128,param_4 + 0x78);
        func_0x0001006b1fc4();
      }
      lVar2 = alStack_68[0];
      lVar3 = *param_1;
      FUN_10046985c(auStack_128,*(long *)(lVar3 + 0x18) + 0x80);
      FUN_10060d450(lVar3,lVar2 + 0x120,param_4,param_3,auStack_128,param_2);
      puVar1 = auStack_128;
      FUN_100469c34(puVar1);
      lVar2 = alStack_68[0];
      FUN_100488bd8();
      FUN_100611478(auStack_128,param_1 + 2,lVar2 + 0x120,param_1 + 0x1b,param_4,puVar1);
      FUN_1006126e4(*(undefined8 *)(*param_1 + 0x80),param_4,alStack_68[0]);
      lVar2 = alStack_68[0];
      alStack_68[0] = 0;
      func_0x000100612c54(auStack_128[0],lVar2 + 0x318,lVar2 + 0x2e0);
      lVar2 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar2 == 0) {
        return;
      }
      func_0x000105395420();
      return;
    }
    func_0x000105395484(param_1 + 0x1c);
    func_0x0001053954e4();
    func_0x0001053953dc();
    func_0x00010539544c();
    func_0x0001053953b0();
  }
LAB_10060d248:
  FUN_100601c8c(auStack_128);
  func_0x000107c60ca0(alStack_68);
  return;
}



/* Entry: 10060d2e4; end: 10060d34b;  */

void FUN_10060d2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x340;
  func_0x000107c60e20();
  FUN_10060d3dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10060d34c; end: 10060d3db;  */

undefined8 *
FUN_10060d34c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001004b6e88();
  *puVar1 = &PTR_DAT_11087ffd8;
  FUN_1006099c0(puVar1 + 4,param_3);
  FUN_1004a5a8c(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[99] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 100) = param_4;
  return param_1;
}



/* Entry: 10060d3dc; end: 10060d427;  */

void FUN_10060d3dc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int extraout_w10;
  
  FUN_10060d34c(param_1,param_2,param_4,param_5);
  FUN_10060d428();
  lVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x328) = *param_3;
  *(long *)(param_1 + 0x330) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x338) = param_6;
  return;
}



/* Entry: 10060d428; end: 10060d44f;  */

void FUN_10060d428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087ff58;
  return;
}



/* Entry: 10060d450; end: 10060d4b7;  */

void FUN_10060d450(long param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  long *plVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000100609810();
    (*extraout_x8)();
    FUN_10060cc10(*(undefined8 *)(param_1 + 0x58));
    func_0x00010060981c();
  }
  plVar1 = (long *)(param_3 + 0x58);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1004b5d48(param_2,plVar1 + 2,plVar1 + 5);
  }
  return;
}



/* Entry: 10060d4b8; end: 10060d4bf;  */

void FUN_10060d4b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000020);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10060d4c0; end: 10060d65b;  */

void FUN_10060d4c0(undefined8 param_1,long param_2,long param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10060d4b8(param_1,&UNK_10f50ec19);
  FUN_1004b5d48(param_2,&uStack_60,param_3);
  FUN_10060d65c();
  if (*(char *)(param_3 + 0xe8) == '\x01') {
    FUN_10060d4b8();
    func_0x00010060d664();
    FUN_10060d65c();
  }
  FUN_10060d4b8();
  func_0x00010060d664();
  FUN_10060d65c();
  FUN_10060d4b8();
  func_0x000107c60de8(alStack_78);
  func_0x00010060d664();
  func_0x00010060d66c();
  FUN_10060d65c();
  if (*(char *)(param_6 + 0x2c) == '\x01') {
    FUN_10060d4b8();
    param_4 = (ulong)*(uint *)(param_6 + 0x28);
    func_0x000107c60ddc(alStack_78);
    func_0x00010060d664();
    func_0x00010060d66c();
    FUN_10060d65c();
  }
  if (*(char *)(param_3 + 200) == '\x01') {
    uVar1 = (ulong)(int)*(uint *)(param_3 + 0xc4);
    uVar2 = (ulong)*(uint *)(param_3 + 0xc4);
  }
  else {
    if (*(char *)(param_5 + 0x20) != '\x01') goto LAB_10060d60c;
    uVar1 = *(ulong *)(param_5 + 0x18);
    uVar2 = uVar1;
  }
  func_0x000107c60da0();
  alStack_78[0] = param_4 + (uVar1 & 0x1fffffffffffff00 | uVar2 & 0xff) * 1000;
  FUN_10060d674(alStack_78,&uStack_60);
  *(undefined8 *)(param_2 + 0x70) = uStack_58;
  *(undefined8 *)(param_2 + 0x68) = uStack_60;
LAB_10060d60c:
  FUN_1004b6020(param_2,param_6);
  return;
}



/* Entry: 10060d65c; end: 10060d673;  */

void FUN_10060d65c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000020);
  return;
}



/* Entry: 10060d674; end: 10060d70f;  */

void FUN_10060d674(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
  plVar3 = param_2;
  if (lVar4 != 0x7fffffffffffffff) {
    lVar1 = lVar4 / 1000000;
    lVar2 = 1;
    FUN_100466584();
    if (-1000000 < lVar4 && lVar1 < lVar2) {
      *param_2 = lVar1;
      *(int *)(param_2 + 1) = ((int)lVar4 + (int)lVar1 * -1000000) * 1000;
      *(undefined4 *)((long)param_2 + 0xc) = 1;
      return;
    }
  }
  lVar4 = 1;
  FUN_100466584();
  *param_2 = lVar4;
  param_2[1] = (long)plVar3;
  return;
}



/* Entry: 10060d710; end: 10060d90b;  */

void FUN_10060d710(long param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_58;
  long alStack_40 [2];
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_10060d764;
  }
  else if (*(char *)(param_1 + 0x1f) == '\0') goto LAB_10060d764;
  FUN_10002b838(&uStack_70,"x-snap-route-tag");
  func_0x000100611354();
  func_0x00010061135c();
LAB_10060d764:
  (**(code **)(**(long **)(param_1 + 0x50) + 0x38))(alStack_40);
  if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x18) != 0)) {
    func_0x000107c29ddc(&uStack_70);
    FUN_10002b838(auStack_88,&UNK_10f4be43d);
    func_0x000107c3036c(auStack_a0,&uStack_70);
    func_0x000100611354();
    func_0x000107c3410c();
    func_0x00010061134c();
    func_0x000107c3041c(&uStack_70);
  }
  plVar1 = *(long **)(param_1 + 0x60);
  (**(code **)(*plVar1 + 0x20))();
  if (*(long *)(param_1 + 0x20) * 1000000 <= (long)plVar1 - *(long *)(param_1 + 0x28)) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(&uStack_70);
    if (cStack_58 == '\x01') {
      func_0x0001005f7044(auStack_88,uStack_70,uStack_68);
      func_0x000100602604(param_1 + 0x30,auStack_88);
      func_0x00010061134c();
    }
    else {
      func_0x000104bffddc(param_1 + 0x30);
    }
    *(long **)(param_1 + 0x28) = plVar1;
    FUN_1002a2294(&uStack_70);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10002b838(&uStack_70,&UNK_10f4be458);
    func_0x000100611354();
    func_0x00010061135c();
  }
  FUN_1004a65f8(alStack_40);
  return;
}



/* Entry: 10060d90c; end: 10060d93f;  */

void FUN_10060d90c(undefined1 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010060d920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,0x49);
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10060d940; end: 10060d993;  */

void FUN_10060d940(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x00010060d930();
  func_0x000107c4429c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x000107c61180();
  FUN_10029a65c();
  func_0x000100611338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10060d994; end: 10060d9df; -[SCLazyCircumstanceEngineProxy getSequenceIdsInNamespace:] */

void FUN_10060d994(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3b5e8();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4429c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10060d9e0; end: 10060d9e7; -[SCCircumstanceEngine getSequenceIdsInNamespace:] */

void FUN_10060d9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfca110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_getSequenceIdsInNamespace__1125d01e8);
  return;
}



/* Entry: 10060d9e8; end: 10060da57; -[SCConfigManagerImpl getSequenceIdsInNamespace:] */

void FUN_10060d9e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c44298();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b7820;
  func_0x000107c61160(PTR_PTR_1126b7820);
  func_0x000107c58f6c();
  puVar2 = puVar1;
  func_0x000107c41214(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10060da58; end: 10060dbcf; -[SCConfigManagerImpl getSequenceIdArrayInNamespace:] */

void FUN_10060da58(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x000107c43fa0();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b7828;
  func_0x000107c61160(PTR_PTR_1126b7828);
  func_0x000107c61174(lVar6);
  lVar3 = lVar6;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar4 = uVar7;
      func_0x000107c44c1c();
      if ((int)uVar4 != 0) {
        func_0x000107c51f30(uVar7);
        func_0x000107c3d93c(puVar2);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar6);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c2a1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0xd0),PTR_s_waitForRecovery_112685ef8);
  return;
}



/* Entry: 10060dbd0; end: 10060dbdb;  */

void FUN_10060dbd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),PTR_s_waitForRecovery_112685ef8);
  return;
}



/* Entry: 10060dbdc; end: 10060dc43; +[PartialToken descriptor] */

void FUN_10060dbdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137effe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1fec0,
                        &PTR____CFConstantStringClassReference_110f39e18,
                        &PTR_s_snapchat_cdp_cof_113332f10,&PTR_DAT_113332f28,1,0x10,0x1c);
    puRam00000001137effe0 = puVar1;
  }
  return;
}



/* Entry: 10060dc44; end: 10060dccb; -[SCFriendsFeedFetchContext initWithIdentifier:triggerType:] */

undefined1 *
FUN_10060dc44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112703b10;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10060dccc; end: 10060dd1f;  */

uint FUN_10060dccc(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5d028();
    uVar2 = 1;
    if (uVar1 < 0xb) {
      uVar2 = 0x8e >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  func_0x000107c61170(param_1);
  return uVar2 & 1;
}



/* Entry: 10060dd20; end: 10060dd27; -[SCFriendsFeedFetchContext triggerType] */

undefined8 FUN_10060dd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10060dd28; end: 10060ddb7; -[SCGhostToFeedLogger setFetchContext:] */

void FUN_10060dd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100628cd0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10060ddb8; end: 10060de5f;  */

/* WARNING: Possible PIC construction at 0x00010060de28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060de3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060de2c) */

void FUN_10060ddb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c44070(param_2);
    func_0x000107c61180();
    param_2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c5c734(param_2);
    func_0x000107c61180();
    func_0x000107c4bf28(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10060de60; end: 10060df87; -[SCNativeFeedManager updateFriendsFeedForFetchContext:] */

/* WARNING: Possible PIC construction at 0x00010060debc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060def4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060df5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010060df6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060df60) */
/* WARNING: Removing unreachable block (ram,0x00010060dec0) */
/* WARNING: Removing unreachable block (ram,0x00010060def8) */
/* WARNING: Removing unreachable block (ram,0x00010060df30) */
/* WARNING: Removing unreachable block (ram,0x00010060df20) */
/* WARNING: Removing unreachable block (ram,0x00010060df34) */
/* WARNING: Removing unreachable block (ram,0x00010060decc) */
/* WARNING: Removing unreachable block (ram,0x00010060df70) */

void FUN_10060de60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x000107c44fdc(param_3);
  func_0x000107c61180();
  func_0x000107c3ac58(puVar1,param_2,param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


