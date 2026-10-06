/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100456024; end: 100456077;  */

void FUN_100456024(undefined8 *param_1)

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



/* Entry: 100456078; end: 10045607f;  */

void FUN_100456078(long *param_1)

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
  FUN_100095690();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100457cdc(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100457edc();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_100457f04();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100456080; end: 100456163;  */

void FUN_100456080(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100095690();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100457cdc(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100457edc();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_100457f04();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100456164; end: 10045616b;  */

void FUN_100456164(undefined8 *param_1)

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



/* Entry: 10045616c; end: 1004561bf;  */

void FUN_10045616c(undefined8 *param_1)

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



/* Entry: 1004561c0; end: 1004561c7;  */

void FUN_1004561c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000950dc();
  func_0x000107c613fc();
  FUN_100456278(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001004562f0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_10045630c();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1004561c8; end: 100456277;  */

void FUN_1004561c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000950dc();
  func_0x000107c613fc();
  FUN_100456278(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001004562f0();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_10045630c();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 100456278; end: 10045630b;  */

void FUN_100456278(undefined8 param_1)

{
  if (lRam0000000112da55c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63d958);
  return;
}



/* Entry: 10045630c; end: 10045663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10045630c(void)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *aplStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  plVar2 = (long *)PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4d73c();
  func_0x000107c61180();
  plStack_90 = plVar2;
  FUN_1000285a8(0x112da5588,&UNK_10d94ac70);
  func_0x000107c613fc();
  pplVar3 = &plStack_90;
  FUN_10042e6a0();
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  FUN_1000285a8(0x112da5590,&UNK_10d94ac78);
  func_0x000107c613fc();
  pplVar4 = &plStack_90;
  FUN_10042e6a0();
  uVar5 = 0x112da5598;
  FUN_1000285a8(0x112da5598,&UNK_10d94ac80);
  func_0x000107c613fc();
  FUN_1000c2754();
  lVar6 = 0;
  FUN_100456d68();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112da5690;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(pplVar3);
  func_0x000107c6157c(pplVar4);
  uVar11 = uVar5;
  func_0x000107c6157c();
  FUN_1000c6580();
  *(undefined8 *)(lVar7 + lVar1) = uVar11;
  *(undefined **)(lVar7 + _DAT_112da5698) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long ***)(lVar7 + _DAT_112da5670) = pplVar3;
  *(long ***)(lVar7 + _DAT_112da5678) = pplVar4;
  *(undefined8 *)(lVar7 + _DAT_112da5680) = uVar5;
  FUN_10006a340(0);
  func_0x000107c613fc();
  func_0x000107c6157c(pplVar3);
  func_0x000107c6157c(pplVar4);
  uVar11 = uVar5;
  func_0x000107c6157c();
  FUN_10006a360();
  *(undefined8 *)(lVar7 + _DAT_112da5688) = uVar11;
  plVar2 = &lStack_a0;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  puVar8 = &UNK_1103c9870;
  func_0x000107c613fc(&UNK_1103c9870,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar2);
  puVar9 = &UNK_1103c9898;
  func_0x000107c613fc(&UNK_1103c9898,0x21,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  puVar9[0x20] = 2;
  plVar10 = plVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0x11;
  func_0x0001001ca524(0x11,0,0x28,2,0,0,&UNK_10d94ac88,puVar9,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(plVar10);
  func_0x000107c61574(pplVar3);
  func_0x000107c61574(pplVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long **)(unaff_x20 + 0x10) = plVar2;
  func_0x000107c61170(uVar11);
  FUN_1004575f0();
  ppuStack_70 = &PTR_DAT_1103c98d8;
  ppuStack_a8 = &PTR_DAT_1103c98c8;
  aplStack_c8[0] = plVar10;
  lStack_b0 = lVar6;
  plStack_90 = plVar10;
  lStack_78 = lVar6;
  FUN_100095118(0);
  func_0x000107c610f8();
  func_0x000107c61174(plVar10);
  func_0x000107c61174();
  FUN_100457c3c(uVar11,pplVar4,&plStack_90,aplStack_c8);
  func_0x000107c61574(pplVar3);
  func_0x000107c61170(plVar10);
  func_0x000107c61574(uVar5);
  return uVar11;
}



/* Entry: 10045663c; end: 10045668b;  */

void FUN_10045663c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045668c; end: 1004566cb;  */

void FUN_10045668c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setDelegate__112640798,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1004566cc; end: 1004566d3;  */

void FUN_1004566cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004566d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1004566d4; end: 10045676f;  */

void FUN_1004566d4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100456770; end: 100456793;  */

bool FUN_100456770(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&puStack_20;
  puStack_20 = &UNK_10f82f6ba;
  uStack_18 = 8;
  if (param_4 == 8) {
    FUN_100067218(&puStack_20,param_3,8);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 100456794; end: 1004567e7;  */

void FUN_100456794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined1 uStack_31;
  
  uVar3 = param_3;
  func_0x000100456780();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_2;
  }
  func_0x000107c613d0(uVar3);
  FUN_1000d0424(param_1,&uStack_31,uVar2,uVar1,param_3,uVar3);
  return;
}



/* Entry: 1004567e8; end: 1004567f7;  */

void FUN_1004567e8(void)

{
  return;
}



/* Entry: 1004567f8; end: 10045684b;  */

void FUN_1004567f8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  FUN_1000daf80(param_1,param_2 + 1);
  lVar1 = param_2[3];
  plVar2 = param_1 + 2;
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = param_2[4];
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  *plVar2 = param_2[6];
  return;
}



/* Entry: 10045684c; end: 100456927;  */

undefined8 * FUN_10045684c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x3c] = 0;
  *param_1 = &PTR_SUB_11087cd00;
  param_1[0x36] = &PTR_DAT_11087cd50;
  param_1[2] = &PTR_DAT_11087cd28;
  FUN_1004567f8(param_1,&PTR_PTR_11087cd68,param_1 + 3);
  *param_1 = &PTR_SUB_11087cd00;
  param_1[0x36] = &PTR_DAT_11087cd50;
  param_1[2] = &PTR_DAT_11087cd28;
  FUN_1000daff0(param_1 + 3);
  puVar1 = param_1 + 3;
  func_0x0001000db26c(puVar1,param_2,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100456928();
    func_0x000100456934();
  }
  return param_1;
}



/* Entry: 100456928; end: 10045695f;  */

void FUN_100456928(void)

{
  return;
}



/* Entry: 100456960; end: 1004569cf;  */

void FUN_100456960(long param_1,long param_2)

{
  long extraout_x8;
  
  func_0x00010045694c();
  *(undefined8 *)(param_1 + *(long *)(extraout_x8 + -0x18)) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x48);
  FUN_1004569d0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev_110346538)();
  return;
}



/* Entry: 1004569d0; end: 100456a37;  */

void FUN_1004569d0(long param_1)

{
  FUN_1000db0b0();
  FUN_100456a38();
  if ((*(char *)(param_1 + 400) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x000107c60e10();
  }
  if ((*(char *)(param_1 + 0x191) == '\x01') && (*(long *)(param_1 + 0x68) != 0)) {
    func_0x000107c60e10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_110346568)(param_1);
  return;
}



/* Entry: 100456a38; end: 100456adb;  */

long * FUN_100456a38(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    puStack_38 = PTR__fclose_11034c270;
    plVar1 = param_1;
    lStack_40 = lVar2;
    (**(code **)(*param_1 + 0x30))();
    lStack_40 = 0;
    func_0x000107c60fac();
    param_1[0xf] = 0;
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
    if ((int)lVar2 != 0 || (int)plVar1 != 0) {
      param_1 = (long *)0x0;
    }
    FUN_100558048(&lStack_40);
  }
  return param_1;
}



/* Entry: 100456adc; end: 100456af7;  */

void FUN_100456adc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 100456af8; end: 100456b07;  */

undefined1  [16] FUN_100456af8(void)

{
  return ZEXT816(0x11046b7d0);
}



/* Entry: 100456b08; end: 100456b13; -[SCCameraViewfinderRenderAgentImpl setDelegate:] */

void FUN_100456b08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf0,param_3);
  return;
}



/* Entry: 100456b14; end: 100456c1f; -[SCCameraViewfinderRenderAgentImpl _setupRenderModule:] */

/* WARNING: Possible PIC construction at 0x000100456b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100456bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100456b68) */
/* WARNING: Removing unreachable block (ram,0x000100456b88) */
/* WARNING: Removing unreachable block (ram,0x000100456bb0) */
/* WARNING: Removing unreachable block (ram,0x000100456b9c) */
/* WARNING: Removing unreachable block (ram,0x000100456bc4) */
/* WARNING: Removing unreachable block (ram,0x000100456ba0) */
/* WARNING: Removing unreachable block (ram,0x000100456bbc) */
/* WARNING: Removing unreachable block (ram,0x000100456bc8) */
/* WARNING: Removing unreachable block (ram,0x000100456b74) */
/* WARNING: Removing unreachable block (ram,0x000100456bfc) */

void FUN_100456b14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar2,param_2,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100456c20; end: 100456c9f; -[SCCameraViewfinderMetalRenderer init] */

undefined1 * FUN_100456c20(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8520;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610fc();
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x40);
    *(undefined **)((long)puVar2 + 0x40) = puVar3;
    func_0x000107c61170();
    *(undefined1 *)((long)puVar2 + 0x48) = 1;
    FUN_100456ca0();
    *(undefined1 *)((long)puVar2 + 0x50) = uVar1;
    *(undefined4 *)((long)puVar2 + 0x4c) = 0;
    func_0x000107c3c614(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 100456ca0; end: 100456d1f;  */

byte FUN_100456ca0(void)

{
  byte bVar1;
  
  if (lRam00000001137fbfe8 != -1) {
    FUN_10002a2fc(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = bRam00000001137fbfd1;
    if (lRam00000001137fbfe0 != -1) {
      FUN_10002a2fc(0x1137fbfe0,&PTR___NSConcreteGlobalBlock_110d66298);
      bVar1 = bRam00000001137fbfd1;
    }
  }
  return bVar1 & 1;
}



/* Entry: 100456d20; end: 100456d67;  */

void FUN_100456d20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5d9bc();
  uRam00000001137fbfd2 = puVar2 == (undefined *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100456d68; end: 100456d87;  */

void FUN_100456d68(void)

{
  func_0x000107c61168(&PTR_PTR_1127da710);
  return;
}



/* Entry: 100456d88; end: 10045730b; -[SCCameraViewfinderMetalRenderer _setup] */

void FUN_100456d88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  puVar2 = &UNK_10f3f894a;
  FUN_1000ba800();
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3e750();
  func_0x000107c61170();
  FUN_10045730c();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4e444();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uStack_68 = 0;
  puVar5 = puVar3;
  func_0x000107c4d63c(puVar3);
  uVar1 = uStack_68;
  func_0x000107c61174(uStack_68);
  puVar7 = puVar3;
  func_0x000107c4d628();
  uVar11 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar7;
  func_0x000107c61170(uVar11);
  puVar7 = PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
  func_0x000107c61160(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240);
  puVar8 = puVar7;
  func_0x000107c3fdbc();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c573d4();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  puVar8 = puVar5;
  func_0x000107c4d630(puVar5);
  func_0x000107c5a4ec(puVar7);
  func_0x000107c61170(puVar8);
  puVar8 = puVar5;
  func_0x000107c4d630(puVar5);
  func_0x000107c54b78(puVar7);
  func_0x000107c61170(puVar8);
  puVar8 = PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248;
  func_0x000107c5dd20(PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c3e37c();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c54b40();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c3e37c(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c56c1c();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c3e37c(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c52e64();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c3e37c(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c54b40();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c3e37c(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c56c1c();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c3e37c(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c52e64();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c4ac28(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c5987c();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c4ac28(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c59878();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c4ac28(puVar8);
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c4d9a4();
  func_0x000107c61180();
  func_0x000107c599fc();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c5a4e8(puVar7);
  puVar9 = puVar3;
  func_0x000107c4d644();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar9;
  func_0x000107c61170(uVar11);
  puVar9 = puVar5;
  func_0x000107c4d630(puVar5);
  func_0x000107c54b78(puVar7);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4d644();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar9;
  func_0x000107c61170(uVar11);
  func_0x000107c60a94(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,0,puVar3,0,param_1 + 0x20);
  func_0x000107c55728(param_1);
  func_0x000107c61144(auStack_70,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_100c44abc;
  puStack_88 = &UNK_110846540;
  func_0x000107c6111c(auStack_80,auStack_70);
  puStack_78 = puVar4;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x0001000e2a84(puVar2);
  return;
}



/* Entry: 10045730c; end: 100457317;  */

void FUN_10045730c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b2930,PTR_s_currentMetalDevice_1125b56c8);
  return;
}



/* Entry: 100457318; end: 10045736b; +[SCDevice currentMetalDevice] */

void FUN_100457318(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc7d0 != -1) {
    FUN_10002a2fc(0x1137fc7d0,&PTR___NSConcreteGlobalBlock_110d66e60);
  }
  uVar1 = uRam00000001137fc7c8;
  func_0x000107c61174(uRam00000001137fc7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10045736c; end: 1004575cb;  */

undefined1  [16] FUN_10045736c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  code *unaff_x19;
  undefined8 uVar13;
  code *unaff_x20;
  undefined1 *unaff_x21;
  code *unaff_x22;
  undefined8 uVar14;
  code *unaff_x24;
  int unaff_w25;
  code *unaff_x27;
  long unaff_x29;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined *in_stack_00000000;
  undefined8 in_stack_00000008;
  code *in_stack_00000010;
  undefined **in_stack_00000018;
  code *in_stack_00000020;
  code *in_stack_00000028;
  code *in_stack_000000a0;
  
  uVar7 = 0xef64726f63655265;
  pcVar1 = (code *)0x746f4e6563696f56;
  pcVar9 = (char *)(param_2 & 0xff);
  ppuVar12 = (undefined **)&UNK_10dd3f3e5;
  pcVar2 = pcVar1;
  pcVar10 = (code *)pcVar9;
  switch(pcVar9) {
  default:
    pcVar1 = (code *)0x13;
  case (char *)0x33:
  case (char *)0x41:
  case (char *)0x81:
  case (char *)0x9d:
  case (char *)0xdb:
  case (char *)0xe9:
    pcVar1 = (code *)((ulong)pcVar1 & 0xffffffffffff | 0xd000000000000000);
code_r0x0001004573b4:
    pcVar9 = "VideoFilterCoordinator";
code_r0x0001004573b8:
    pcVar9 = pcVar9 + 0x9e0;
code_r0x0001004573bc:
code_r0x0001004575a0:
    auVar29._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    auVar29._0_8_ = pcVar1;
    return auVar29;
  case (char *)0x1:
    auVar22._8_8_ = 0x800000010f216970;
    auVar22._0_8_ = 0xd000000000000024;
    return auVar22;
  case (char *)0x2:
    pcVar9 = "FeedTableHeaderViewUpdate";
    break;
  case (char *)0x3:
    pcVar9 = "FeedTableFooterViewUpdate";
    break;
  case (char *)0x4:
    auVar17._8_8_ = 0x800000010f216910;
    auVar17._0_8_ = 0xd00000000000001a;
    return auVar17;
  case (char *)0x5:
    uVar7 = 0x800000010f2168e0;
    pcVar9 = (char *)0x13;
  case (char *)0xbb:
  case (char *)0xf3:
    pcVar9 = (char *)((ulong)pcVar9 | 0xd000000000000000);
code_r0x000100457534:
    auVar25._8_8_ = uVar7;
    auVar25._0_8_ = pcVar9 + 0x13;
    return auVar25;
  case (char *)0x6:
  case (char *)0xb4:
    pcVar9 = "VideoFilterCoordinator";
  case (char *)0xb3:
    uVar7 = (ulong)(pcVar9 + 0x8c0) | 0x8000000000000000;
code_r0x00010045754c:
    pcVar9 = (char *)0x13;
code_r0x000100457550:
    pcVar1 = (code *)(((ulong)pcVar9 | 0xd000000000000000) - 2);
code_r0x000100457558:
    auVar26._8_8_ = uVar7;
    auVar26._0_8_ = pcVar1;
    return auVar26;
  case (char *)0x7:
    uVar7 = 0x800000010f216860;
  case (char *)0xab:
    pcVar9 = (char *)0xd000000000000013;
code_r0x0001004574b8:
    auVar21._8_8_ = uVar7;
    auVar21._0_8_ = pcVar9 + 2;
    return auVar21;
  case (char *)0x8:
  case (char *)0xcb:
    pcVar1 = (code *)0xd000000000000013;
    pcVar9 = "PinnedConversations";
    goto code_r0x0001004575a0;
  case (char *)0x9:
    pcVar9 = "SnapChattersRepository";
  case (char *)0xe4:
code_r0x000100457504:
    auVar24._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = 0xd000000000000016;
    return auVar24;
  case (char *)0xa:
    pcVar9 = "VideoFilterCoordinator";
  case (char *)0xae:
    pcVar9 = pcVar9 + 0x840;
code_r0x000100457578:
    pcVar9 = pcVar9 + -0x20;
code_r0x00010045757c:
    uVar7 = (ulong)pcVar9 | 0x8000000000000000;
code_r0x000100457580:
    pcVar9 = (char *)0x13;
code_r0x000100457584:
    auVar28._0_8_ = (ulong)pcVar9 | 0xd000000000000004;
    auVar28._8_8_ = uVar7;
    return auVar28;
  case (char *)0xb:
    pcVar9 = "VideoFilterCoordinator";
  case (char *)0x47:
    pcVar9 = pcVar9 + 0x820;
code_r0x00010045742c:
    uVar7 = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    pcVar9 = (char *)0x13;
code_r0x000100457438:
    pcVar9 = (char *)((ulong)pcVar9 | 0xd000000000000000);
code_r0x00010045743c:
    auVar18._8_8_ = uVar7;
    auVar18._0_8_ = pcVar9 + 10;
    return auVar18;
  case (char *)0xc:
    pcVar9 = "MessagingSystemSearchIndexing";
    goto code_r0x00010045742c;
  case (char *)0xd:
    uVar7 = 0x800000010f2167c0;
    pcVar9 = (char *)0xd000000000000013;
  case (char *)0x23:
    pcVar1 = (code *)(pcVar9 + 9);
code_r0x0001004573f4:
    auVar16._8_8_ = uVar7;
    auVar16._0_8_ = pcVar1;
    return auVar16;
  case (char *)0xe:
  case (char *)0x8f:
    uVar7 = 0xef737265646e696d;
    pcVar1 = (code *)0x6b6165727453;
  case (char *)0xf8:
    pcVar1 = (code *)((ulong)pcVar1 & 0xffffffffffff | 0x6552000000000000);
code_r0x00010045747c:
    auVar19._8_8_ = uVar7;
    auVar19._0_8_ = pcVar1;
    return auVar19;
  case (char *)0xf:
  case (char *)0x37:
  case (char *)0x4a:
  case (char *)0x8a:
  case (char *)0xa6:
  case (char *)0xf2:
    uVar7 = 0xe700000000000000;
    pcVar1 = (code *)0x65727453;
  case (char *)0xcf:
    auVar15._0_8_ = (ulong)pcVar1 & 0xffffffff | 0x736b6100000000;
    auVar15._8_8_ = uVar7;
    return auVar15;
  case (char *)0x10:
    goto code_r0x0001004573f4;
  case (char *)0x11:
    auVar23._8_8_ = 0xea00000000007070;
    auVar23._0_8_ = 0x41534f6863746157;
    return auVar23;
  case (char *)0x12:
  case (char *)0x4f:
    uVar7 = 0xe600000000000000;
  case (char *)0xdf:
    pcVar1 = (code *)0x7544;
code_r0x000100457564:
    pcVar1 = (code *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x6c700000);
code_r0x000100457568:
    auVar27._0_8_ = (ulong)pcVar1 & 0xffff0000ffffffff | 0x786500000000;
    auVar27._8_8_ = uVar7;
    return auVar27;
  case (char *)0x13:
    auVar30._8_8_ = 0x800000010f2169a0;
    auVar30._0_8_ = 0xd000000000000014;
    return auVar30;
  case (char *)0x14:
  case (char *)0x87:
  case (char *)0xba:
    pcVar9 = "CalendarEventDataFetch";
    goto code_r0x000100457504;
  case (char *)0x24:
  case (char *)0x38:
    goto code_r0x0001004577a4;
  case (char *)0x25:
  case (char *)0x39:
  case (char *)0x4d:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x8d:
  case (char *)0x95:
  case (char *)0xcd:
  case (char *)0xe1:
  case (char *)0xf5:
    goto code_r0x000100457644;
  case (char *)0x26:
  case (char *)0x3a:
  case (char *)0x4e:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x8e:
  case (char *)0x96:
  case (char *)0x99:
  case (char *)0xce:
  case (char *)0xe2:
  case (char *)0xf6:
    goto code_r0x0001004573b4;
  case (char *)0x27:
  case (char *)0x49:
  case (char *)0x89:
  case (char *)0xa5:
  case (char *)0xf1:
    unaff_x19 = (code *)PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    pcVar10 = FUN_10047263c;
  case (char *)0x6b:
    in_stack_00000000 = PTR___NSConcreteStackBlock_11034bd00;
    in_stack_00000008 = 0x42000000;
    pcVar9 = (char *)0x1004725e8;
    ppuVar12 = &PTR___ss5ErrorP7_domainSSvgTq_1107a7000;
    in_stack_00000020 = pcVar10;
    in_stack_00000028 = unaff_x20;
code_r0x000100457644:
    in_stack_00000018 = ppuVar12 + 0x19;
    in_stack_00000010 = (code *)pcVar9;
    func_0x000107c60bc4();
    func_0x000107c6157c();
    unaff_x21 = (undefined1 *)register0x00000008;
    unaff_x22 = in_stack_00000028;
code_r0x000100457664:
    func_0x000107c61574(unaff_x22);
    func_0x000107c408f0(unaff_x19);
    func_0x000107c61180();
code_r0x000100457684:
    func_0x000107c60bd0(unaff_x21);
code_r0x00010045768c:
    auVar31._8_8_ = uVar7;
    auVar31._0_8_ = unaff_x19;
    return auVar31;
  case (char *)0x28:
  case (char *)0x50:
  case (char *)0x90:
  case (char *)0xd0:
    goto code_r0x00010045747c;
  case (char *)0x29:
  case (char *)0x51:
  case (char *)0x91:
  case (char *)0xd1:
  case (char *)0xf9:
    goto code_r0x000100457664;
  case (char *)0x31:
  case (char *)0x59:
  case (char *)0xd9:
    goto code_r0x0001004573b8;
  case (char *)0x3b:
  case (char *)0xa3:
    goto code_r0x00010045768c;
  case (char *)0x3c:
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0x7c:
    goto code_r0x000100457438;
  case (char *)0x3d:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x7d:
  case (char *)0xa1:
  case (char *)0xe5:
    goto code_r0x000100457684;
  case (char *)0x3e:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x7e:
  case (char *)0xa2:
  case (char *)0xe6:
    goto code_r0x000100457784;
  case (char *)0x48:
  case (char *)0x88:
  case (char *)0xa4:
  case (char *)0xf0:
    goto code_r0x000100457748;
  case (char *)0x4b:
    goto code_r0x000100457790;
  case (char *)0x4c:
  case (char *)0x60:
  case (char *)0x68:
  case (char *)0x70:
  case (char *)0x78:
  case (char *)0x8c:
    goto code_r0x0001004577a0;
  case (char *)0x5b:
  case (char *)0x9b:
    goto code_r0x0001004573bc;
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
    goto code_r0x000100457760;
  case (char *)0x63:
  case (char *)0x65:
    *(undefined8 *)(unaff_x29 + -0xa0) = 0x746f4e6563696f56;
    pcVar2 = (code *)PTR_PTR_1126ba558;
    func_0x000107c610f4(PTR_PTR_1126ba558,0xef64726f63655265);
    unaff_x22 = *(code **)(unaff_x21 + 0x150);
    func_0x000107c4f8fc(unaff_x22);
    func_0x000107c61180();
  case (char *)0x73:
    pcVar1 = unaff_x22;
    func_0x000107c46228();
    unaff_x19 = pcVar2;
code_r0x00010045771c:
    func_0x000107c61170(pcVar1);
    pcVar1 = (code *)PTR_PTR_1126ba560;
    in_stack_000000a0 = unaff_x19;
code_r0x00010045772c:
code_r0x000100457730:
    func_0x000107c497bc(pcVar1);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x158);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
code_r0x000100457748:
    pcVar1 = (code *)PTR_PTR_1126ba568;
    func_0x000107c610f4();
code_r0x00010045775c:
code_r0x000100457760:
    func_0x000107c458e4();
    *(code **)(unaff_x29 + -0xb0) = pcVar1;
code_r0x00010045776c:
    unaff_x24 = *(code **)(unaff_x21 + 0x168);
    func_0x000107c5c734();
    func_0x000107c61180();
    pcVar2 = unaff_x24;
    func_0x000107c42628();
code_r0x000100457784:
    pcVar1 = unaff_x24;
    unaff_w25 = (int)pcVar2;
code_r0x00010045778c:
    func_0x000107c61170(pcVar1);
code_r0x000100457790:
    if (unaff_w25 == 0) {
      unaff_x27 = (code *)0x0;
    }
    else {
      pcVar1 = *(code **)(unaff_x21 + 0x1a8);
      func_0x000107c5c734();
code_r0x00010045779c:
code_r0x0001004577a0:
      func_0x000107c61180();
code_r0x0001004577a4:
      unaff_x27 = pcVar1;
code_r0x0001004577a8:
    }
    func_0x000107c6071c();
    puVar5 = PTR_PTR_1126ba570;
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x21 + 8);
    *(undefined **)(unaff_x29 + -200) = puVar5;
    uVar6 = *(undefined8 *)(unaff_x21 + 0x60);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x21 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x100);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x108);
    uVar13 = *(undefined8 *)(unaff_x21 + 0xf0);
    uVar4 = *(undefined8 *)(unaff_x21 + 0x1b0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(code **)(unaff_x29 + -0xb8) = unaff_x27;
    in_stack_00000020 = *(code **)(unaff_x29 + -0xa0);
    uVar11 = *(undefined8 *)(unaff_x29 + -200);
    in_stack_00000000 = (undefined *)uVar6;
    in_stack_00000008 = uVar13;
    in_stack_00000010 = (code *)uVar3;
    in_stack_00000018 = (undefined **)uVar14;
    func_0x000107c40904();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x40);
    *(undefined8 *)(unaff_x21 + 0x40) = uVar11;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (unaff_x21[0x170] == '\x01') {
      uVar13 = *(undefined8 *)(unaff_x21 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x21 + 0x68);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      func_0x000107c3d790(uVar13);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c53640(*(undefined8 *)(unaff_x21 + 0x40));
    func_0x000107c53ca4(PTR_PTR_1126ba578);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x28);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c4bf28(param_1);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x128);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(puVar5);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x40);
    func_0x000107c61174(uVar14);
    puVar5 = PTR_PTR_1126ba580;
    func_0x000107c610f4();
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x21 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x138);
    uVar13 = *(undefined8 *)(unaff_x21 + 0x140);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x70);
    func_0x000107c5d984();
    func_0x000107c61180();
    in_stack_00000018 = *(undefined ***)(unaff_x21 + 0x150);
    in_stack_00000020 = *(code **)(unaff_x21 + 0x160);
    in_stack_00000000 = (undefined *)uVar3;
    in_stack_00000008 = uVar13;
    in_stack_00000010 = (code *)uVar6;
    func_0x000107c47954();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x80);
    *(undefined **)(unaff_x21 + 0x80) = puVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    puVar5 = PTR_PTR_1126ba588;
    func_0x000107c610f4();
    func_0x000107c47958();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x88);
    *(undefined **)(unaff_x21 + 0x88) = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ba590;
    func_0x000107c610f4();
    func_0x000107c4795c();
    uVar3 = *(undefined8 *)(unaff_x21 + 200);
    *(undefined **)(unaff_x21 + 200) = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ba598;
    func_0x000107c610f4();
    func_0x000107c47960();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x90);
    *(undefined **)(unaff_x21 + 0x90) = puVar5;
    func_0x000107c61170(uVar3);
    uVar13 = *(undefined8 *)(unaff_x21 + 0x168);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar13;
    func_0x000107c4a07c();
    if ((int)uVar3 == 0) {
      uVar6 = *(undefined8 *)(unaff_x21 + 0x168);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar3 = uVar6;
      func_0x000107c4a298();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar13);
      uVar13 = *(undefined8 *)(unaff_x29 + -0xb8);
      if ((int)uVar3 == 0) goto LAB_100457ae8;
    }
    else {
      func_0x000107c61170(uVar13);
      uVar13 = *(undefined8 *)(unaff_x29 + -0xb8);
    }
    puVar5 = PTR_PTR_1126ba5a0;
    func_0x000107c610f4();
    func_0x000107c47964();
    uVar3 = *(undefined8 *)(unaff_x21 + 0x98);
    *(undefined **)(unaff_x21 + 0x98) = puVar5;
    func_0x000107c61170(uVar3);
LAB_100457ae8:
    func_0x000107c61144(unaff_x29 + -0x70);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x188);
    func_0x000107c421ac();
    func_0x000107c61180();
    *(undefined **)(unaff_x29 + -0x98) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x29 + -0x90) = 0xc2000000;
    *(code **)(unaff_x29 + -0x88) = FUN_10060824c;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_110876508;
    lVar8 = unaff_x29 + -0x70;
    func_0x000107c6111c(unaff_x29 + -0x78,lVar8);
    uVar3 = uVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(unaff_x21 + 0x180);
    *(undefined8 *)(unaff_x21 + 0x180) = uVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar6);
    func_0x000107c61120(unaff_x29 + -0x78);
    func_0x000107c61120(unaff_x29 + -0x70);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(*(undefined8 *)(unaff_x29 + -0xb0));
    func_0x000107c61170(*(undefined8 *)(unaff_x29 + -0xa8));
    func_0x000107c61170(in_stack_000000a0);
    uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
    func_0x000107c61170(uVar3);
    auVar32._8_8_ = lVar8;
    auVar32._0_8_ = uVar3;
    return auVar32;
  case (char *)0x64:
    break;
  case (char *)0x7b:
    goto code_r0x00010045778c;
  case (char *)0x8b:
    goto code_r0x000100457730;
  case (char *)0x93:
    goto code_r0x00010045776c;
  case (char *)0x94:
    goto code_r0x00010045779c;
  case (char *)0x9f:
    goto code_r0x00010045754c;
  case (char *)0xa0:
    goto code_r0x00010045743c;
  case (char *)0xac:
  case (char *)0xad:
  case (char *)0xb2:
    goto code_r0x00010045757c;
  case (char *)0xaf:
    goto code_r0x000100457550;
  case (char *)0xb0:
    goto code_r0x000100457534;
  case (char *)0xb1:
    goto code_r0x000100457580;
  case (char *)0xb5:
    goto code_r0x0001004574b8;
  case (char *)0xb6:
  case (char *)0xb9:
    goto code_r0x000100457568;
  case (char *)0xb7:
    goto code_r0x000100457564;
  case (char *)0xb8:
    goto code_r0x000100457584;
  case (char *)0xbc:
    goto code_r0x000100457578;
  case (char *)0xbd:
    goto code_r0x000100457558;
  case (char *)0xcc:
  case (char *)0xe0:
  case (char *)0xf4:
    goto code_r0x0001004577a8;
  case (char *)0xe3:
    goto code_r0x00010045771c;
  case (char *)0xef:
    goto code_r0x00010045775c;
  case (char *)0xf7:
    goto code_r0x00010045772c;
  }
  auVar20._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
  auVar20._0_8_ = 0xd000000000000019;
  return auVar20;
}



/* Entry: 1004575cc; end: 1004575ef;  */

void FUN_1004575cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c60ae4();
  uVar1 = uRam00000001137fc7c8;
  uRam00000001137fc7c8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004575f0; end: 1004576a3;  */

undefined * FUN_1004575f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  pcStack_40 = FUN_10047263c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1004725e8;
  puStack_48 = &UNK_1107a70c8;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c408f0(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return puVar1;
}



/* Entry: 1004576a4; end: 100457bf7; -[SCNativeMessagingSessionManager _createSession] */

void FUN_1004576a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b4ec0;
  func_0x000107c610f4();
  func_0x000107c47de8();
  puVar2 = PTR_PTR_1126ba558;
  func_0x000107c610f4();
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  func_0x000107c4f8fc(uVar3);
  func_0x000107c61180();
  func_0x000107c46228();
  func_0x000107c61170(uVar3);
  func_0x000107c497bc(PTR_PTR_1126ba560);
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ba568;
  func_0x000107c610f4();
  func_0x000107c458e4();
  uVar6 = *(undefined8 *)(param_2 + 0x168);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c42628();
  func_0x000107c61170(uVar6);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x1a8);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  func_0x000107c6071c();
  puVar7 = PTR_PTR_1126ba570;
  uVar6 = *(undefined8 *)(param_2 + 0x1b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c40904();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = puVar7;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  if (*(char *)(param_2 + 0x170) == '\x01') {
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c5c734(uVar6);
    func_0x000107c61180();
    func_0x000107c3d790(uVar8);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c53640(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c53ca4(PTR_PTR_1126ba578);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c5c734(uVar6);
  func_0x000107c61180();
  func_0x000107c4bf28(param_1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x128);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d664(uVar6);
  func_0x000107c61170(puVar7);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174(uVar10);
  puVar7 = PTR_PTR_1126ba580;
  func_0x000107c610f4();
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c47954();
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  *(undefined **)(param_2 + 0x80) = puVar7;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126ba588;
  func_0x000107c610f4();
  func_0x000107c47958();
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  *(undefined **)(param_2 + 0x88) = puVar7;
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126ba590;
  func_0x000107c610f4();
  func_0x000107c4795c();
  uVar6 = *(undefined8 *)(param_2 + 200);
  *(undefined **)(param_2 + 200) = puVar7;
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126ba598;
  func_0x000107c610f4();
  func_0x000107c47960();
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x90) = puVar7;
  func_0x000107c61170(uVar6);
  uVar8 = *(undefined8 *)(param_2 + 0x168);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = uVar8;
  func_0x000107c4a07c();
  if ((int)uVar6 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x168);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar9;
    func_0x000107c4a298();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    if ((int)uVar6 == 0) goto LAB_100457ae8;
  }
  else {
    func_0x000107c61170(uVar8);
  }
  puVar7 = PTR_PTR_1126ba5a0;
  func_0x000107c610f4();
  func_0x000107c47964();
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  *(undefined **)(param_2 + 0x98) = puVar7;
  func_0x000107c61170(uVar6);
LAB_100457ae8:
  func_0x000107c61144(auStack_80,param_2);
  uVar8 = *(undefined8 *)(param_2 + 0x188);
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_80);
  uVar6 = uVar8;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_2 + 0x180) = uVar6;
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100457bf8; end: 100457c3b;  */

long FUN_100457bf8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100457c3c; end: 100457cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100457c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112e18028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e18030) = param_2;
  FUN_100457bf8(param_3,unaff_x20 + _DAT_112e18038);
  FUN_100457bf8(param_4,unaff_x20 + _DAT_112e18040);
  FUN_100095118();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_4);
  func_0x0001000834e4(param_3);
  return puVar1;
}



/* Entry: 100457cdc; end: 100457d57;  */

void FUN_100457cdc(undefined8 param_1)

{
  if (lRam0000000113444610 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63da5c);
  return;
}



/* Entry: 100457d58; end: 100457dcb; -[SCNativeDispatchQueue initWithPerformer:] */

undefined1 * FUN_100457d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127060e8;
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



/* Entry: 100457dcc; end: 100457deb; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger rawCrashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100457dcc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ddbaa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100457dec; end: 100457e5f; -[SCNativeErrorReporter initWithCrashLogger:] */

undefined1 * FUN_100457dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbd18;
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



/* Entry: 100457e60; end: 100457ecf; +[SCNShimsPlatform installErrorReporter:] */

void FUN_100457e60(void)

{
  undefined1 auStack_40 [16];
  
  FUN_100457ed0();
  func_0x000100458844();
  FUN_100458b38(auStack_40);
  func_0x000100458dfc();
  func_0x000100458e04();
  return;
}



/* Entry: 100457ed0; end: 100457edb;  */

void FUN_100457ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100457edc; end: 100457f03;  */

void FUN_100457edc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100457f04; end: 100457fef;  */

undefined * FUN_100457f04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_1103c99b0;
  func_0x000107c613fc(&UNK_1103c99b0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puStack_40 = &UNK_1014b0c84;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1014b0d48;
  puStack_48 = &UNK_1103c99c8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a72a0;
  func_0x000107c610f8(PTR_PTR_1126a72a0);
  func_0x000107c4958c();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100457ff0; end: 100458013;  */

void FUN_100457ff0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100458014; end: 100458027;  */

void FUN_100458014(long param_1,long param_2)

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



/* Entry: 100458028; end: 10045809b; -[SCWatchDetectorServices initWithWatchDetector:] */

undefined1 * FUN_100458028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702cb8;
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



/* Entry: 10045809c; end: 1004580c7;  */

void FUN_10045809c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004580c8; end: 1004580cf;  */

void FUN_1004580c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004580d0; end: 100458123;  */

void FUN_1004580d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100458124; end: 10045812b;  */

void FUN_100458124(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10009e9f8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1004581b4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045812c; end: 1004581b3;  */

void FUN_10045812c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10009e9f8();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1004581b4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004581b4; end: 100458283;  */

void FUN_1004581b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_100458284(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  FUN_1004587ec();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100458284);
  (*pcVar1)();
}



/* Entry: 100458284; end: 1004582a3;  */

void FUN_100458284(void)

{
  func_0x000107c61168(&PTR_PTR_112da6fb0);
  return;
}



/* Entry: 1004582a4; end: 1004587c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004582a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *apuStack_98 [3];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c4d868();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  uVar12 = *(undefined8 *)(param_1 + _DAT_113091b78);
  puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x000107c61168();
  func_0x000107c615f0(uVar12);
  func_0x000107c40f90();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_100458a58(0,0x112da6ee0,&PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  ppuStack_b8 = &PTR_DAT_1103cb5a0;
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  puStack_d8 = puVar3;
  puStack_c0 = (undefined *)uVar4;
  func_0x000107c61168();
  func_0x000107c41570();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_100458a58(0,0x112da7028,&PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  ppuStack_78 = &PTR_DAT_1103cb5b0;
  lVar6 = 0;
  apuStack_98[0] = puVar5;
  uStack_80 = uVar4;
  FUN_100458ac4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112da6ef0;
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar7 + lVar1) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112da6ef8) = 0;
  lVar1 = _DAT_112da6f00;
  *(undefined8 *)(lVar7 + _DAT_112da6f00) = 0;
  lVar2 = _DAT_112da6f08;
  *(undefined8 *)(lVar7 + _DAT_112da6f08) = 0;
  *(undefined8 *)(lVar7 + _DAT_112da6f30) = 0;
  *(undefined8 *)(lVar7 + _DAT_112da6ee8) = uVar12;
  *(undefined8 *)(lVar7 + lVar1) = 0;
  *(undefined1 *)(lVar7 + _DAT_112da6f10) = 0;
  *(undefined8 *)(lVar7 + _DAT_112da6f18) = 0;
  *(undefined8 *)(lVar7 + lVar2) = 0;
  FUN_100458bfc(&puStack_d8,lVar7 + _DAT_112da6f20);
  FUN_100458bfc(apuStack_98,lVar7 + _DAT_112da6f28);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar12);
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112da6f38) = puVar3;
  puVar5 = PTR_PTR_1126a7370;
  func_0x000107c610f8(PTR_PTR_1126a7370);
  func_0x000107c61174(puVar3);
  func_0x000107c458ac(puVar5);
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  plVar8 = &lStack_a8;
  lStack_a8 = lVar7;
  lStack_a0 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c615e8(uVar12);
  func_0x0001000834e4(apuStack_98);
  func_0x0001000834e4(&puStack_d8);
  *(long **)(unaff_x20 + 0x18) = plVar8;
  uVar11 = *(undefined8 *)(param_1 + _DAT_113091b70);
  uVar4 = uVar11;
  func_0x000107c419f0(uVar11);
  func_0x000107c61180();
  puVar3 = &UNK_1103cb720;
  puVar9 = puVar3;
  func_0x000107c613fc(&UNK_1103cb720,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_b8 = (undefined **)&UNK_100c7832c;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100c1de60;
  puStack_c0 = &UNK_1103cb738;
  ppuVar10 = &puStack_d8;
  puStack_b0 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_b0;
  func_0x000107c6157c();
  func_0x000107c61574(puVar9);
  uVar12 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar12);
  func_0x000107c61170(uVar12);
  uVar4 = uVar11;
  func_0x000107c5e39c();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c613fc(&UNK_1103cb720,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  ppuStack_b8 = (undefined **)&UNK_1014b8b5c;
  puStack_d8 = puVar5;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100c1de60;
  puStack_c0 = &UNK_1103cb760;
  ppuVar10 = &puStack_d8;
  puStack_b0 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_b0);
  uVar12 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c5bc9c(uVar11);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1103cb720,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  func_0x000107c61574();
  ppuStack_b8 = (undefined **)&UNK_100c81af8;
  puStack_d8 = puVar5;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100c81aa4;
  puStack_c0 = &UNK_1103cb788;
  ppuVar10 = &puStack_d8;
  puStack_b0 = puVar3;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_b0);
  uVar4 = uVar11;
  func_0x000107c5c320(uVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126a7378;
  func_0x000107c610f8(PTR_PTR_1126a7378);
  func_0x000107c47b34();
  func_0x000107c42c20(param_3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1004587c8; end: 1004587eb;  */

void FUN_1004587c8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004587ec; end: 10045883b;  */

undefined8 FUN_1004587ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1004582a4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 10045883c; end: 10045884f; -[SCLegacyPermissionRequestServices notificationsPermissionRequester] */

undefined8 FUN_10045883c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100458850; end: 10045889f;  */

void FUN_100458850(undefined8 *param_1,long param_2)

{
  func_0x000107c61174(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1004588a0(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1004588a0; end: 100458957;  */

void FUN_1004588a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110d99518;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_100458958);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000100458a98(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100458958; end: 100458a57;  */

void FUN_100458958(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110d99558;
  puVar4[3] = &PTR_DAT_110d995d0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110d995a8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  func_0x000100458a98(&uStack_50);
  return;
}



/* Entry: 100458a58; end: 100458ac3;  */

void FUN_100458a58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100458ac4; end: 100458b37;  */

void FUN_100458ac4(void)

{
  func_0x000107c61168(&PTR_PTR_1127da9b8);
  return;
}



/* Entry: 100458b38; end: 100458b63;  */

void FUN_100458b38(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100458ae4();
  FUN_100458ba4();
  FUN_100458c90();
  FUN_100458ba4();
  FUN_100458d18();
  uStack_28 = param_1;
  func_0x000100458d6c(0x113404370,&uStack_28);
  return;
}



/* Entry: 100458b64; end: 100458ba3;  */

void FUN_100458b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 100458ba4; end: 100458bfb;  */

void FUN_100458ba4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100458b64(param_1,&uStack_30);
  func_0x000100458c4c();
  return;
}



/* Entry: 100458bfc; end: 100458c3f;  */

long FUN_100458bfc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100458c40; end: 100458c53;  */

void FUN_100458c40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 100458c54; end: 100458c7b;  */

long FUN_100458c54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100458c7c; end: 100458c8f;  */

void FUN_100458c7c(void)

{
  return;
}



/* Entry: 100458c90; end: 100458ce3;  */

undefined8 FUN_100458c90(void)

{
  int iVar1;
  
  if ((bRam0000000113847118 & 1) == 0) {
    iVar1 = 0x13847118;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113847108 = 0;
      uRam0000000113847110 = 0;
      func_0x000107c60e4c(0x113847118);
    }
  }
  return 0x113847108;
}



/* Entry: 100458ce4; end: 100458d17;  */

void FUN_100458ce4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  FUN_100458c90();
  FUN_100458ba4();
  FUN_100458d18();
  uStack_28 = param_1;
  func_0x000100458d6c(0x113404370,&uStack_28);
  return;
}



/* Entry: 100458d18; end: 100458ddb;  */

undefined8 FUN_100458d18(void)

{
  int iVar1;
  
  if ((bRam0000000113404368 & 1) == 0) {
    iVar1 = 0x13404368;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113404358 = 0;
      uRam0000000113404360 = 0;
      func_0x000107c60e4c(0x113404368);
    }
  }
  return 0x113404358;
}



/* Entry: 100458ddc; end: 100458e1b;  */

void FUN_100458ddc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)**(long **)*param_1;
  *puVar1 = *(undefined8 *)(*(long **)*param_1)[1];
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 100458e1c; end: 100458e9f; -[SCNotificationOSSettingsInfo initWithAuthorizationStatus:badgeSetting:soundSetting:alertSetting:displayInNotificationCenter:displayOnLockScreen:timeSensitiveSetting:directMessagesSetting:alertStyle:scheduledDeliverySetting:] */

void FUN_100458e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112702d88;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
  }
  return;
}



/* Entry: 100458ea0; end: 100458f2b;  */

void FUN_100458ea0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100458f2c; end: 100458f3f;  */

void FUN_100458f2c(long param_1,long param_2)

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



/* Entry: 100458f40; end: 100459023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100458f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c4cd00(uStack_50);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_50);
  FUN_100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_113091b70);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_58);
  puVar2 = PTR_PTR_1126a76b8;
  func_0x000107c610f8();
  func_0x000107c466f0();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 100459024; end: 100459027;  */

void FUN_100459024(long param_1,long param_2)

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



/* Entry: 100459028; end: 1004592bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100459028(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar6 = PTR_PTR_1126b8238;
  func_0x000107c61168();
  func_0x000107c5d8e4();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126db3b8;
    func_0x000107c61168();
    FUN_100083b20(&puStack_a8);
    FUN_100083b20(&lStack_78);
    lVar4 = lStack_78;
    func_0x000107c409d4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puStack_a8);
    func_0x000107c61170(puVar6);
    if (puVar7 != (undefined *)0x0) {
      FUN_100083b20(&lStack_78);
      uVar8 = *(undefined8 *)(lStack_78 + _DAT_113091ae0);
      func_0x000107c61174(uVar8);
      func_0x000107c61170(lStack_78);
      puVar6 = &UNK_1103d9130;
      func_0x000107c613fc(&UNK_1103d9130,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar7;
      *(undefined8 *)(puVar6 + 0x18) = uVar1;
      *(undefined8 *)(puVar6 + 0x20) = uVar2;
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_10048d8e8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100288f10;
      puStack_90 = &UNK_1103d9148;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar9);
      puVar6 = puStack_80;
      func_0x000107c615f0(puVar7);
      func_0x000107c6157c(uVar1);
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar6);
      puVar6 = &UNK_1103d9180;
      func_0x000107c613fc(&UNK_1103d9180,0x18,7);
      *(undefined **)(puVar6 + 0x10) = puVar7;
      pcStack_88 = (code *)&UNK_10152715c;
      puStack_a8 = puVar3;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100e2e93c;
      puStack_90 = &UNK_1103d9198;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar10);
      puVar6 = puStack_80;
      func_0x000107c615f0(puVar7);
      func_0x000107c61574(puVar6);
      puVar6 = &UNK_1103d91d0;
      func_0x000107c613fc(&UNK_1103d91d0,0x18,7);
      *(undefined **)(puVar6 + 0x10) = puVar7;
      pcStack_88 = (code *)&UNK_101527148;
      puStack_a8 = puVar3;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_101527164;
      puStack_90 = &UNK_1103d91e8;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar11);
      puVar6 = puStack_80;
      func_0x000107c615f0(puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c4c6fc(uVar8);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar8);
    }
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1004592c0);
  (*pcVar5)();
}



/* Entry: 1004592c0; end: 1004592d3; -[SCApplicationLifecycleEventsImpl startupComplete_DEPRECATED] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004592c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091de0));
  return;
}



/* Entry: 1004592d4; end: 10045934f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004592d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307e0b8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_38);
  puVar2 = PTR_PTR_1126b8288;
  func_0x000107c610f8();
  func_0x000107c487ec();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100459350; end: 1004593f3; -[SCNotificationPermissionServices initWithNotificationsPermissionRequester:notificationOSSettingsRetriever:] */

undefined1 *
FUN_100459350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702d80;
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



/* Entry: 1004593f4; end: 10045941f;  */

void FUN_1004593f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100459420; end: 100459427; -[SCGrpcAuthContextDelegate initWithSnapTokenProvider:] */

void FUN_100459420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c048930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSnapTokenProvider_attest_1125efc48,param_3,0);
  return;
}



/* Entry: 100459428; end: 1004595bb; -[SCNotificationsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100459428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100507c0c;
  puStack_68 = &UNK_110878fc0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721784);
  *(undefined **)(param_1 + _DAT_112721784) = puVar1;
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b7568;
  func_0x000107c610f4();
  func_0x000107c47b0c();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272178c);
  *(undefined **)(param_1 + _DAT_11272178c) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112721790));
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 1004595bc; end: 10045965f; -[SCNotificationsServices initWithNotificationProcessingManager:appNotificationProvider:] */

undefined1 *
FUN_1004595bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705e50;
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



/* Entry: 100459660; end: 1004596bb;  */

void FUN_100459660(void)

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



/* Entry: 1004596bc; end: 1004596c3;  */

void FUN_1004596bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004596c4; end: 100459717;  */

void FUN_1004596c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100459718; end: 1004599b3;  */

void FUN_100459718(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_1002adbe4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  func_0x00010045a8e4();
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  FUN_10045a980();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  uVar11 = uVar10;
  func_0x000107c6157c();
  func_0x00010045ab08();
  func_0x000107c61574(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(param_2 + 0x58) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 1004599b4; end: 1004599e7;  */

void FUN_1004599b4(void)

{
  long unaff_x20;
  
  FUN_100459718(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1004599e8; end: 100459a7b;  */

void FUN_1004599e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6f40;
  func_0x000107c610f8();
  func_0x000107c45668();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100459a7c; end: 100459b47; -[SCComposerCoreUIServices initWithAlertPresenterFactory:actionSheetPresenterFactory:notificationPresenterFactory:] */

undefined1 *
FUN_100459a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112704fa0;
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



/* Entry: 100459b48; end: 100459b7b;  */

void FUN_100459b48(void)

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



/* Entry: 100459b7c; end: 100459c23;  */

void FUN_100459b7c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a76c8;
  func_0x000107c610f8();
  func_0x000107c458e0();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100459bd4);
  (*pcVar1)();
}



/* Entry: 100459c24; end: 100459cb7;  */

void FUN_100459c24(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b7ccc();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100459cb8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10045a2b0();
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}


