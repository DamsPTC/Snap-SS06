/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10862feb4; end: 10862ff27;  */

void FUN_10862feb4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000108630500();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    FUN_108630398(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    func_0x00010069b2b4(&uStack_40);
  }
  func_0x0001086304f8();
  return;
}



/* Entry: 10862ff28; end: 10862ff7f;  */

void FUN_10862ff28(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x000108630500();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_10861a438(auStack_48);
    func_0x00010863057c();
    func_0x00010528d870();
    func_0x00010863054c();
  }
  func_0x0001086304f8();
  return;
}



/* Entry: 10862ff80; end: 10862ffe3;  */

void FUN_10862ff80(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108630500();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    FUN_10863e198(&uStack_38);
    unaff_x20[1] = uStack_30;
    *unaff_x20 = uStack_38;
    unaff_x20[2] = uStack_28;
    *(undefined1 *)(unaff_x20 + 3) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862ffe4; end: 108630313;  */

void FUN_10862ffe4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = PTR_PTR_1126ba670;
  _objc_alloc();
  lVar5 = param_1;
  func_0x000107c28044();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = *(int *)(param_1 + 0x18);
  lVar6 = param_1 + 0x20;
  FUN_108634c9c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x1f0;
  FUN_10861bf78();
  _objc_retainAutoreleasedReturnValue();
  iVar3 = *(int *)(param_1 + 0x208);
  lVar8 = param_1 + 0x210;
  FUN_108630314();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x228);
  lVar9 = param_1 + 0x230;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x240;
  func_0x0001006d1308();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006afaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0x2a8;
  func_0x0001006abd0c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0x2c8;
  func_0x0001006b035c();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x338) == '\x01') {
    FUN_108624080();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x344) == '\x01') {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x340)
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001006afad4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006d1308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002ba0(puVar4,param_2,lVar5,(long)iVar2,lVar6,lVar7,(long)iVar3,lVar8,uVar1);
  func_0x000108630544();
  func_0x0001086304f8();
  func_0x000108630534();
  func_0x000108630594();
  _objc_release(lVar12);
  _objc_release(lVar11);
  func_0x00010863055c();
  _objc_release(lVar10);
  _objc_release(lVar9);
  func_0x00010863059c();
  func_0x000108630554();
  func_0x0001006ae32c();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108630314; end: 108630397;  */

void FUN_108630314(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001006abc68();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107c28044(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001006ae31c();
    func_0x0001006ae32c();
  }
  func_0x00010bf51e00(param_1);
  func_0x0001006ae334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108630398; end: 10863049b;  */

/* WARNING: Possible PIC construction at 0x0001086303d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108630428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086303d8) */
/* WARNING: Removing unreachable block (ram,0x0001086303e0) */
/* WARNING: Removing unreachable block (ram,0x00010863042c) */
/* WARNING: Removing unreachable block (ram,0x0001086303e8) */
/* WARNING: Removing unreachable block (ram,0x0001086303ec) */
/* WARNING: Removing unreachable block (ram,0x0001086303f4) */
/* WARNING: Removing unreachable block (ram,0x0001086303f8) */
/* WARNING: Removing unreachable block (ram,0x000108630428) */
/* WARNING: Removing unreachable block (ram,0x000108630434) */
/* WARNING: Removing unreachable block (ram,0x00010863044c) */
/* WARNING: Removing unreachable block (ram,0x000108630460) */
/* WARNING: Removing unreachable block (ram,0x000108630480) */
/* WARNING: Removing unreachable block (ram,0x000108630498) */
/* WARNING: Removing unreachable block (ram,0x000108630444) */
/* WARNING: Removing unreachable block (ram,0x0001086304cc) */

void FUN_108630398(void)

{
  undefined8 *unaff_x20;
  
  func_0x0001086304b0();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x0001086305a4();
  func_0x000100697518();
  func_0x0001086304e4();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10863049c; end: 1086305b3;  */

void FUN_10863049c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1086305b4; end: 10863071b;  */

void FUN_1086305b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_68);
  uVar2 = param_2;
  func_0x00010bf4dac0(param_2);
  uVar3 = param_2;
  func_0x00010c14ab60(param_2);
  uVar4 = param_2;
  func_0x00010bfeba20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862fd5c(auStack_80);
  uVar5 = param_2;
  func_0x00010c12a260(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862feb4(auStack_a0);
  FUN_10863071c(param_1,auStack_68,uVar2,uVar3,auStack_80,auStack_a0);
  func_0x00010069b2d8(auStack_a0);
  _objc_release(uVar5);
  func_0x000104bee630(auStack_80);
  _objc_release(uVar4);
  func_0x000107c27914(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10863071c; end: 1086307bb;  */

undefined8 *
FUN_10863071c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = uVar1;
  param_1[6] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  func_0x000100699ef0(param_1 + 7,param_6);
  return param_1;
}



/* Entry: 1086307bc; end: 10863082f;  */

void FUN_1086307bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daac0;
  _objc_alloc(PTR_PTR_1126daac0);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028b00(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_108630830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108630830; end: 108630837;  */

void FUN_108630830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108630838; end: 1086308af; -[SCNMessagingMassSnapSendManager initWithCpp:] */

undefined1 * FUN_108630838(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108630c98();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c28658(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1086308b0; end: 1086309ab; -[SCNMessagingMassSnapSendManager retryMassSnapByMassSnapId:callback:] */

void FUN_1086308b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_48,param_3);
  FUN_10861a5ac(auStack_58,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_58);
  func_0x000104be3970(auStack_58);
  func_0x000107c27914(auStack_48);
  func_0x000108630ca8();
  func_0x000108630cb0();
  return;
}



/* Entry: 1086309ac; end: 108630ae7; -[SCNMessagingMassSnapSendManager deleteMassSnapRecipient:snapId:callback:] */

void FUN_1086309ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_58,param_3);
  func_0x000107c2874c(auStack_70,param_4);
  FUN_10861a5ac(auStack_80,param_5);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_58,auStack_70,auStack_80);
  func_0x000104be3970(auStack_80);
  func_0x000107c27914(auStack_70);
  func_0x000107c27914(auStack_58);
  _objc_release(param_5);
  func_0x000108630ca8();
  func_0x000108630cb0();
  return;
}



/* Entry: 108630ae8; end: 108630b13;  */

void FUN_108630ae8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108630bac();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108630b14; end: 108630b67; -[SCNMessagingMassSnapSendManager .cxx_destruct] */

void FUN_108630b14(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5e300;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28658((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108630b68; end: 108630bab; -[SCNMessagingMassSnapSendManager .cxx_construct] */

undefined8 * FUN_108630b68(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108630c98();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108630bac; end: 108630c23;  */

void FUN_108630bac(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5e300;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108630c98();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108630c24);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108630cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108630c24; end: 108630c97;  */

void FUN_108630c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daac8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108630c98();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c28658(&uStack_30);
  return;
}



/* Entry: 108630c98; end: 108630cdb;  */

void FUN_108630c98(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108630cdc; end: 108630dd3;  */

void FUN_108630cdc(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e3a8;
  puVar4[3] = &PTR_DAT_110a5e428;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x000108631228();
  puVar4[3] = &PTR_FUN_110a5e3f8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1086311dc(&uStack_50);
  return;
}



/* Entry: 108630dd4; end: 108630dd7;  */

void FUN_108630dd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e3a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108630dd8; end: 108630deb;  */

void FUN_108630dd8(void)

{
  FUN_1086311cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108630dec; end: 108630df7;  */

long FUN_108630dec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e368;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    FUN_108631208();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108630df8; end: 108630e37;  */

void FUN_108630df8(void)

{
  func_0x000108631254();
  return;
}



/* Entry: 108630e38; end: 108630f4f;  */

void FUN_108630e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001006a7d84(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086310b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5220(uVar2);
  _objc_release(param_5);
  func_0x000108631228();
  _objc_release(param_3);
  func_0x000107c31afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108630f50; end: 10863101f;  */

void FUN_108630f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10863113c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5200(uVar2);
  _objc_release(param_4);
  FUN_108631208();
  func_0x000107c31afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108631020; end: 1086310af;  */

long FUN_108631020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e368;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    FUN_108631208();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086310b0; end: 10863113b;  */

void FUN_1086310b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x000108631230();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 4) {
    func_0x00010863078c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108631210();
    func_0x000108631208();
  }
  func_0x00010bf51e00(param_1);
  func_0x000107c31afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10863113c; end: 1086311cb;  */

void FUN_10863113c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x000108631230();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_10861af74(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108631210();
    func_0x000108631208();
  }
  func_0x00010bf51e00(param_1);
  func_0x000107c31afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1086311cc; end: 1086311db;  */

void FUN_1086311cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e3a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086311dc; end: 108631207;  */

long FUN_1086311dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108631208; end: 10863125f;  */

void FUN_108631208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108631260; end: 1086312af;  */

undefined8 FUN_108631260(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2927e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000107c28304();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1086312b0; end: 108631387;  */

void FUN_1086312b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_48);
  func_0x00010c085300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_60);
  func_0x00010528e228(param_1,auStack_48,auStack_60);
  func_0x000107c27914(auStack_60);
  _objc_release(param_2);
  func_0x000107c27914(auStack_48);
  FUN_108631420();
  func_0x000108631428();
  return;
}



/* Entry: 108631388; end: 10863141f;  */

void FUN_108631388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cb280;
  _objc_alloc(PTR_PTR_1126cb280);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar1,param_2,lVar2,param_1);
  FUN_108631420();
  func_0x000108631428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108631420; end: 10863142f;  */

void FUN_108631420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108631430; end: 10863149f;  */

void FUN_108631430(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0c4ca0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086314a0(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000104bee500(&uStack_40);
  FUN_108631708();
  return;
}



/* Entry: 1086314a0; end: 108631613;  */

void FUN_1086314a0(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_150 [48];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010528e4e4(param_1,puVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x000108631710();
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        FUN_1086312b0(auStack_150,uVar7);
        func_0x00010528e854(param_1,auStack_150);
        puVar3 = auStack_150;
        func_0x000104be0e14();
        func_0x000108631724();
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar2);
      func_0x000108631710();
      puVar2 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x000108631708();
  func_0x000108631708();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000108631708();
    func_0x000104bee500(param_1);
    func_0x000108631708();
    __Unwind_Resume();
    puVar5 = PTR_PTR_1126daad0;
    _objc_alloc(PTR_PTR_1126daad0);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = plVar4[1];
    for (lVar8 = *plVar4; lVar8 != lVar1; lVar8 = lVar8 + 0x30) {
      FUN_108631388(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      func_0x000108631724();
    }
    func_0x00010bf51e00(puVar6);
    func_0x000108631708();
    func_0x00010c029420(puVar5);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 108631614; end: 108631707;  */

void FUN_108631614(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126daad0;
  _objc_alloc(PTR_PTR_1126daad0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x30) {
    lVar4 = lVar5;
    FUN_108631388(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    func_0x000108631724();
  }
  func_0x00010bf51e00(puVar3);
  func_0x000108631708();
  func_0x00010c029420(puVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108631708; end: 10863172f;  */

void FUN_108631708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108631730; end: 108631743;  */

void FUN_108631730(void)

{
  FUN_108631898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108631744; end: 10863174f;  */

long FUN_108631744(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e4a0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108631750; end: 10863178f;  */

void FUN_108631750(void)

{
  func_0x0001086318a8();
  return;
}



/* Entry: 108631790; end: 108631803;  */

void FUN_108631790(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10861c168(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4ea0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108631804; end: 108631897;  */

long FUN_108631804(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e4a0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108631898; end: 1086318b3;  */

void FUN_108631898(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5e4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086318b4; end: 10863192b;  */

void FUN_1086318b4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126daad8;
  _objc_alloc(PTR_PTR_1126daad8);
  puVar2 = param_1 + 1;
  uVar3 = *param_1;
  func_0x000107c27f28(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0107e0(puVar1,param_2,uVar3,puVar2);
  FUN_10863192c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10863192c; end: 108631933;  */

void FUN_10863192c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108631934; end: 1086319d3;  */

void FUN_108631934(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126daae0;
  _objc_alloc(PTR_PTR_1126daae0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (param_1[0x30] == '\x01') {
    puVar4 = param_1 + 0x10;
    FUN_1086318b4(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  func_0x00010c01f920(puVar3,param_2,uVar1,uVar2,uVar5,puVar4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  FUN_108631a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1086319d4; end: 108631a1f;  */

undefined1 *
FUN_1086319d4(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  FUN_108631a20(param_1 + 0x10,param_5);
  *(undefined8 *)(param_1 + 0x38) = param_6;
  *(undefined8 *)(param_1 + 0x40) = param_7;
  return param_1;
}



/* Entry: 108631a20; end: 108631a5f;  */

void FUN_108631a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_1 = *param_2;
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



/* Entry: 108631a60; end: 108631a93;  */

long FUN_108631a60(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  return param_1;
}



/* Entry: 108631a94; end: 108631a9f;  */

void FUN_108631a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108631aa0; end: 108631c33;  */

void FUN_108631aa0(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_retain();
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_78);
  uVar1 = param_2;
  func_0x00010c0c55e0(param_2);
  uVar2 = param_2;
  func_0x00010c0c6c20(param_2);
  uVar3 = param_2;
  func_0x00010c0c61e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_90);
  uVar4 = param_2;
  func_0x00010c299d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_108631c34();
  func_0x00010c0cc800(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108631ca0();
  func_0x00010528eb58(param_1,auStack_78,uVar1,uVar2,auStack_90,uVar5,param_3 & 0xff,
                      uVar6 & 0xffffffffff);
  _objc_release(param_2);
  _objc_release(uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  _objc_release(uVar3);
  func_0x000107c27914(auStack_78);
  func_0x0001006ae1a0();
  func_0x0001006ae1a8();
  return;
}



/* Entry: 108631c34; end: 108631c9f;  */

undefined1  [16] FUN_108631c34(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    FUN_1086465ac(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  func_0x0001006ae1a8();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 108631ca0; end: 108631cbf;  */

ulong FUN_108631ca0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_108631cc0();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 108631cc0; end: 108631cf7;  */

undefined8 FUN_108631cc0(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x0001006ae1a8();
  return param_1;
}



/* Entry: 108631cf8; end: 108631d67;  */

void FUN_108631cf8(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0c6260();
  _objc_retainAutoreleasedReturnValue();
  FUN_108631d68(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001006994c8(&uStack_40);
  func_0x0001006ae314();
  return;
}



/* Entry: 108631d68; end: 108631ee3;  */

void FUN_108631d68(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x00010528f4a8(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar1 = param_2;
  _objc_retain();
  FUN_108631ee4();
  if (uVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      uVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(ulong *)(lStack_118 + uVar5 * 8);
        _objc_retain(uVar3);
        FUN_108631aa0(auStack_178,uVar3);
        func_0x00010528f5ec(param_1,auStack_178);
        func_0x0001006a0e58(auStack_178);
        _objc_release();
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      FUN_108631ee4();
      uVar1 = uVar3;
    } while (uVar3 != 0);
  }
  uVar2 = 0;
  func_0x0001006ae314();
  func_0x0001006ae314();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006ae314();
  func_0x0001006994c8(param_1);
  func_0x0001006ae314();
  __Unwind_Resume(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_countByEnumeratingWithState_obje_1125b2440,&uStack_120,auStack_d8,0x10);
  return;
}



/* Entry: 108631ee4; end: 108631f0f;  */

void FUN_108631ee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108631f10; end: 108631fc3;  */

void FUN_108631f10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2874c(&uStack_50);
  func_0x00010c0cb5a0();
  uVar1 = uStack_40;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  param_1[2] = uVar1;
  param_1[3] = param_2;
  func_0x000107c27914(&uStack_50);
  _objc_release(uVar2);
  func_0x0001006ab7c8();
  return;
}



/* Entry: 108631fc4; end: 108632133;  */

void FUN_108631fc4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861c36c(auStack_58);
  func_0x00010c258040(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108632134(auStack_70);
  func_0x00010c0fb120(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ecc8(auStack_88);
  func_0x00010c0bc3e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108632288(auStack_a0);
  func_0x0001052916b0(param_1,auStack_58,auStack_70,auStack_88,auStack_a0);
  func_0x000104bee7a0(auStack_a0);
  _objc_release(param_2);
  func_0x000104bee7dc(auStack_88);
  func_0x0001086325b4();
  func_0x000104bee864(auStack_70);
  func_0x00010863259c();
  func_0x000107c27a04(auStack_58);
  func_0x0001086325a4();
  func_0x00010863256c();
  return;
}



/* Entry: 108632134; end: 108632287;  */

void FUN_108632134(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_178 [11];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  func_0x000108632580();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x000105291718();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar6 = unaff_x19;
  _objc_retain();
  func_0x000108632574();
  if (puVar6 != (undefined8 *)0x0) {
    lVar4 = *plStack_110;
    do {
      puVar5 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation();
        }
        func_0x0001086325d4(uStack_118);
        FUN_10863f29c(auStack_178);
        func_0x000105291a88();
        puVar1 = auStack_178;
        func_0x000104bee8ec();
        func_0x0001086325ac();
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        in_ZR = puVar5 == puVar6;
      } while (puVar5 < puVar6);
      func_0x000108632574();
      puVar6 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  uVar2 = 0;
  func_0x00010863256c();
  func_0x00010863256c();
  func_0x0001086325bc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010863256c();
    func_0x000104bee864();
    func_0x00010863256c();
    __Unwind_Resume(uVar2);
    func_0x000108632580();
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    func_0x00010bf529e0();
    func_0x000105291fc0();
    _objc_retain();
    func_0x000108632574();
    lVar4 = lRam0000000000000000;
    while (unaff_x19 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation();
        }
        func_0x0001086325d4(0);
        func_0x00010c27dd80();
        puVar5 = unaff_x20;
        func_0x000105292128();
        func_0x0001086325ac();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == unaff_x19;
      } while (puVar6 < unaff_x19);
      func_0x000108632574();
      unaff_x19 = puVar5;
    }
    lVar4 = 0;
    func_0x00010863256c();
    func_0x00010863256c();
    func_0x0001086325bc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010863256c();
    func_0x000104bee7a0();
    func_0x00010863256c();
    __Unwind_Resume(lVar4);
    puVar3 = PTR_PTR_1126be748;
    _objc_alloc(PTR_PTR_1126be748);
    func_0x000107c285c4(lVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_1086324b4(lVar4 + 0x18);
    _objc_retainAutoreleasedReturnValue();
    FUN_10862ee3c(lVar4 + 0x30);
    _objc_retainAutoreleasedReturnValue();
    FUN_1086310b0(lVar4 + 0x48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0059c0(puVar3);
    func_0x0001086325b4();
    func_0x00010863259c();
    func_0x0001086325a4();
    func_0x00010863256c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108632288; end: 1086323c3;  */

void FUN_108632288(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  
  func_0x000108632580();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x000105291fc0();
  _objc_retain();
  func_0x000108632574();
  lVar2 = lRam0000000000000000;
  while (unaff_x19 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation();
      }
      func_0x0001086325d4(0);
      func_0x00010c27dd80();
      puVar1 = unaff_x20;
      func_0x000105292128();
      func_0x0001086325ac();
      puVar4 = (undefined8 *)((long)puVar4 + 1);
      in_ZR = puVar4 == unaff_x19;
    } while (puVar4 < unaff_x19);
    func_0x000108632574();
    unaff_x19 = puVar1;
  }
  lVar2 = 0;
  func_0x00010863256c();
  func_0x00010863256c();
  func_0x0001086325bc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010863256c();
  func_0x000104bee7a0();
  func_0x00010863256c();
  __Unwind_Resume(lVar2);
  puVar3 = PTR_PTR_1126be748;
  _objc_alloc(PTR_PTR_1126be748);
  func_0x000107c285c4(lVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086324b4(lVar2 + 0x18);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ee3c(lVar2 + 0x30);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086310b0(lVar2 + 0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0059c0(puVar3);
  func_0x0001086325b4();
  func_0x00010863259c();
  func_0x0001086325a4();
  func_0x00010863256c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1086323c4; end: 1086324b3;  */

void FUN_1086323c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126be748;
  _objc_alloc(PTR_PTR_1126be748);
  lVar2 = param_1;
  func_0x000107c285c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  FUN_1086324b4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  FUN_10862ee3c(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  FUN_1086310b0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0059c0(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x0001086325b4();
  func_0x00010863259c();
  func_0x0001086325a4();
  func_0x00010863256c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086324b4; end: 10863256b;  */

void FUN_1086324b4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x58) {
    lVar3 = lVar4;
    FUN_10863f3dc(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    func_0x00010863259c();
  }
  func_0x00010bf51e00(puVar2);
  func_0x00010863256c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10863256c; end: 1086325df;  */

void FUN_10863256c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086325e0; end: 1086326c7;  */

void FUN_1086325e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861c36c(auStack_48);
  uVar2 = param_2;
  func_0x00010c258040(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108632134(auStack_60);
  FUN_1086326c8(param_1,auStack_48,auStack_60);
  func_0x000104bee864(auStack_60);
  _objc_release(uVar2);
  func_0x000107c27a04(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1086326c8; end: 10863270b;  */

void FUN_1086326c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10863270c; end: 10863273b;  */

void FUN_10863270c(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10863273c; end: 10863274b;  */

void FUN_10863273c(void)

{
  return;
}



/* Entry: 10863274c; end: 10863285b;  */

void FUN_10863274c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [40];
  
  _objc_retain();
  func_0x00010bf0f460(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10863285c(auStack_78);
  uVar1 = param_2;
  func_0x00010c22ac40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086328d4();
  func_0x00010c242c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_108632934();
  func_0x000104be727c(param_1,auStack_78);
  *(ulong *)(param_1 + 0x28) = uVar1 & 0xffffffffff;
  *(ulong *)(param_1 + 0x30) = uVar2 & 0xffffffffff;
  _objc_release(param_2);
  func_0x000108632aa0();
  func_0x000104be1498(auStack_78);
  func_0x000108632a98();
  func_0x000108632a90();
  return;
}



/* Entry: 10863285c; end: 1086328d3;  */

void FUN_10863285c(undefined1 *param_1,long param_2)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_108619744(auStack_50,param_2);
    func_0x000105293ee8(param_1,auStack_50);
    func_0x000104be14c8(auStack_48);
  }
  FUN_108632a90();
  return;
}



/* Entry: 1086328d4; end: 108632933;  */

ulong FUN_1086328d4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    param_1 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c25a420(param_1);
    uVar1 = param_1 & 0xffffff00;
    param_1 = param_1 & 0xff;
    uVar2 = 0x100000000;
  }
  FUN_108632a90();
  return uVar2 | param_1 | uVar1;
}



/* Entry: 108632934; end: 108632993;  */

ulong FUN_108632934(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    param_1 = 0;
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c25a420(param_1);
    uVar1 = param_1 & 0xffffff00;
    param_1 = param_1 & 0xff;
    uVar2 = 0x100000000;
  }
  FUN_108632a90();
  return uVar2 | param_1 | uVar1;
}



/* Entry: 108632994; end: 108632a8f;  */

void FUN_108632994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126be958;
  _objc_alloc(PTR_PTR_1126be958);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar2 = param_1;
    FUN_108619950(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    lVar3 = param_1 + 0x28;
    FUN_10863d778(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    param_1 = param_1 + 0x30;
    FUN_10863e2e8(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010bff5300(puVar1,param_2,lVar2,lVar3,param_1);
  func_0x000108632aa0();
  func_0x000108632a98();
  func_0x000108632a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108632a90; end: 108632abb;  */

void FUN_108632a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108632abc; end: 108632bc3;  */

void FUN_108632abc(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c2e00();
  uVar2 = param_2;
  func_0x00010c252120();
  uVar3 = param_2;
  func_0x00010c252040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28134();
  uVar5 = param_2;
  func_0x00010c0de040();
  uVar6 = param_2;
  func_0x00010c0de020();
  uVar7 = param_2;
  func_0x00010c0d96a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000107c28304();
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar2;
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  param_1[6] = (int)uVar5;
  param_1[7] = (int)uVar6;
  *(short *)(param_1 + 8) = (short)uVar8;
  _objc_release(uVar7);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108632bc4; end: 108632c3b; -[SCNMessagingMessageWindowManager initWithCpp:] */

undefined1 * FUN_108632bc4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108633098();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27a78(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108632c3c; end: 108632d2b; -[SCNMessagingMessageWindowManager initWindow:params:isReset:] */

void FUN_108632c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2874c(auStack_48,param_3);
  FUN_108632abc(auStack_70,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_70,param_5);
  func_0x000107c27914(auStack_48);
  _objc_release(param_4);
  func_0x000108633084();
  return;
}



/* Entry: 108632d2c; end: 108632da7; -[SCNMessagingMessageWindowManager moveForward:numMessages:] */

void FUN_108632d2c(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086330b0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863308c();
  func_0x0001086330c4(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001086330a8();
  func_0x000108633084();
  return;
}



/* Entry: 108632da8; end: 108632e23; -[SCNMessagingMessageWindowManager moveBack:numMessages:] */

void FUN_108632da8(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001086330b0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010863308c();
  func_0x0001086330c4(*(undefined8 *)(*plVar1 + 0x20));
  func_0x0001086330a8();
  func_0x000108633084();
  return;
}



/* Entry: 108632e24; end: 108632eb3; -[SCNMessagingMessageWindowManager clipFrontToNewestCommitted:] */

void FUN_108632e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010863308c();
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48);
  func_0x0001086330a8();
  func_0x000108633084();
  return;
}



/* Entry: 108632eb4; end: 108632edf;  */

void FUN_108632eb4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108632f78();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108632ee0; end: 108632f33; -[SCNMessagingMessageWindowManager .cxx_destruct] */

void FUN_108632ee0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5e570;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27a78((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108632f34; end: 108632f77; -[SCNMessagingMessageWindowManager .cxx_construct] */

undefined8 * FUN_108632f34(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108633098();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108632f78; end: 108632fef;  */

void FUN_108632f78(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5e570;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108633098();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108632ff0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086330f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108632ff0; end: 108633063;  */

void FUN_108632ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dab00;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108633098();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27a78(&uStack_30);
  return;
}



/* Entry: 108633064; end: 1086330fb;  */

undefined1 * FUN_108633064(undefined8 param_1)

{
  undefined1 *puStack_28;
  undefined8 uStack_20;
  
  puStack_28 = &stack0x00000008;
  uStack_20 = param_1;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 1086330fc; end: 1086331f7;  */

void FUN_1086330fc(undefined8 *param_1,long *param_2)

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
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e608;
  puVar4[3] = &PTR_DAT_110a5e690;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
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
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5e658;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1086334b0(&uStack_50);
  return;
}



/* Entry: 1086331f8; end: 1086331fb;  */

void FUN_1086331f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086331fc; end: 10863320f;  */

void FUN_1086331fc(void)

{
  FUN_1086334a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108633210; end: 10863321b;  */

long FUN_108633210(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e5c8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000108633508();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10863321c; end: 10863325b;  */

void FUN_10863321c(void)

{
  func_0x0001086334fc();
  return;
}



/* Entry: 10863325c; end: 108633333;  */

void FUN_10863325c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 >> 0x20 & 1) != 0) {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_1086336d8(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7cc0(uVar2);
  _objc_release(param_4);
  func_0x000108633508();
  func_0x000107c31b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108633334; end: 1086333a7;  */

void FUN_108633334(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7ca0(uVar2);
  FUN_1086334dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1086333a8; end: 10863340f;  */

void FUN_1086333a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7c60(uVar2);
  FUN_1086334dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108633410; end: 10863349f;  */

long FUN_108633410(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e5c8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000108633508();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1086334a0; end: 1086334af;  */

void FUN_1086334a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


