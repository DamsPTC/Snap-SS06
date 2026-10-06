/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108640d68; end: 108640e0f; -[SCNMessagingTaskSendManager deleteTaskByTaskId:callback:] */

void FUN_108640d68(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x000108640fd0();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108641048();
  func_0x00010864103c();
  func_0x000108640fec(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000108640fe4();
  func_0x000108641018();
  func_0x000108641020();
  func_0x000108641028();
  return;
}



/* Entry: 108640e10; end: 108640e3b;  */

void FUN_108640e10(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108640ed4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108640e3c; end: 108640e8f; -[SCNMessagingTaskSendManager .cxx_destruct] */

void FUN_108640e3c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f6b8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28714((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108640e90; end: 108640ed3; -[SCNMessagingTaskSendManager .cxx_construct] */

undefined8 * FUN_108640e90(undefined8 *param_1)

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
      FUN_108640fc0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108640ed4; end: 108640f4b;  */

void FUN_108640ed4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f6b8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108640fc0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108640f4c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108641054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108640f4c; end: 108640fbf;  */

void FUN_108640f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac70;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108640fc0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c28714(&uStack_30);
  return;
}



/* Entry: 108640fc0; end: 10864105f;  */

void FUN_108640fc0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108641060; end: 10864112f;  */

void FUN_108641060(undefined4 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0fa9c0();
  uVar2 = param_2;
  func_0x00010c117720();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c284cc();
  uVar3 = param_2;
  func_0x00010bf0d880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28124();
  *param_1 = (int)uVar1;
  *(ulong *)(param_1 + 2) = uVar2;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  *(ulong *)(param_1 + 6) = uVar4 & 0xffffffffff;
  _objc_release(uVar3);
  FUN_108641130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108641130; end: 10864113f;  */

void FUN_108641130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108641140; end: 1086411a3;  */

undefined1  [16] FUN_108641140(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c55e0(param_1);
  uVar2 = param_1;
  func_0x00010c0c6200(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2 & 0xffffffff;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1086411a4; end: 1086411d7;  */

void FUN_1086411a4(void)

{
  _objc_alloc(PTR_PTR_1126dac80);
  func_0x00010c0298e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086411d8; end: 1086412af;  */

void FUN_1086411d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  plVar3 = (long *)(param_1 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    param_1 = (long)(plVar3 + 3);
    func_0x000107c27f28();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = (long)(plVar3 + 2);
    FUN_108619710(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,param_1,lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  func_0x00010bf51e00(puVar1);
  FUN_10864130c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1086412b0; end: 1086412c3;  */

void FUN_1086412b0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 1086412c4; end: 10864130b;  */

void FUN_1086412c4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10864130c; end: 108641367;  */

void FUN_10864130c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108641368; end: 10864141f;  */

void FUN_108641368(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5f720;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108641420);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108641698(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108641420; end: 10864151f;  */

void FUN_108641420(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110a5f760;
  puVar4[3] = &PTR_DAT_110a5f7e0;
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
  puVar4[3] = &PTR_FUN_110a5f7b0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108641698(&uStack_50);
  return;
}



/* Entry: 108641520; end: 108641523;  */

void FUN_108641520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108641524; end: 108641537;  */

void FUN_108641524(void)

{
  FUN_108641688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108641538; end: 108641543;  */

long FUN_108641538(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5f720;
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



/* Entry: 108641544; end: 108641583;  */

void FUN_108641544(void)

{
  func_0x0001086416d0();
  return;
}



/* Entry: 108641584; end: 1086415f3;  */

void FUN_108641584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e6c80(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1086415f4; end: 108641687;  */

long FUN_1086415f4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5f720;
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



/* Entry: 108641688; end: 108641697;  */

void FUN_108641688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f760;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108641698; end: 1086416c3;  */

long FUN_108641698(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086416c4; end: 1086416db;  */

void FUN_1086416c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 1086416dc; end: 108641827;  */

void FUN_1086416dc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2a1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  uVar2 = param_2;
  func_0x00010bf977c0(param_2);
  uVar3 = param_2;
  func_0x00010bf79900(param_2);
  uVar4 = param_2;
  func_0x00010c2a18a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_80);
  uVar5 = param_2;
  func_0x00010c07eda0(param_2);
  func_0x00010c083980(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x000107c28304();
  FUN_108641828(param_1,uVar1 & 0xffffffffff,uVar2,uVar3,auStack_80,uVar5,uVar6 & 0xffff);
  _objc_release(param_2);
  func_0x000107c279a4(auStack_80);
  _objc_release(uVar4);
  func_0x000108641880();
  func_0x000108641888();
  return;
}



/* Entry: 108641828; end: 10864188f;  */

void FUN_108641828(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined1 param_6,undefined2 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = param_4;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[4] = param_5[2];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  *(undefined1 *)(param_1 + 6) = param_6;
  *(undefined2 *)((long)param_1 + 0x31) = param_7;
  return;
}



/* Entry: 108641890; end: 108641907; -[SCNMessagingUpdateIncidentalAttachmentsCallback initWithCpp:] */

undefined1 * FUN_108641890(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd2f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108641bf0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108641bc4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108641908; end: 108641a13; -[SCNMessagingUpdateIncidentalAttachmentsCallback onUpdateIncidentalAttachmentsComplete:updatedIncidentalAttachments:] */

void FUN_108641908(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_58 = 0;
  }
  else {
    FUN_10862fd5c(&uStack_50,param_4);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_60 = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_58 = 1;
    func_0x000104bee630(&uStack_50);
  }
  func_0x000108641c00();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3,&uStack_70);
  func_0x00010068e19c(&uStack_70);
  func_0x000108641c00();
  return;
}



/* Entry: 108641a14; end: 108641a3f;  */

void FUN_108641a14(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108641ad8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108641a40; end: 108641a93; -[SCNMessagingUpdateIncidentalAttachmentsCallback .cxx_destruct] */

void FUN_108641a40(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f800;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108641bc4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108641a94; end: 108641ad7; -[SCNMessagingUpdateIncidentalAttachmentsCallback .cxx_construct] */

undefined8 * FUN_108641a94(undefined8 *param_1)

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
      FUN_108641bf0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108641ad8; end: 108641b4f;  */

void FUN_108641ad8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f800;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108641bf0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108641b50);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108641c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108641b50; end: 108641bc3;  */

void FUN_108641b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac88;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108641bf0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108641bc4(&uStack_30);
  return;
}



/* Entry: 108641bc4; end: 108641bef;  */

long FUN_108641bc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108641bf0; end: 108641c1f;  */

void FUN_108641bf0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108641c20; end: 108641c97; -[SCNMessagingUploadCallback initWithCpp:] */

undefined1 * FUN_108641c20(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108643030();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108642610(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108641c98; end: 108641f93; -[SCNMessagingUploadCallback onUploadFinished:localMessageContent:] */

void FUN_108641c98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_500 [904];
  long lStack_178;
  ulong uStack_170;
  ulong auStack_168 [3];
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined8 uStack_70;
  
  puVar8 = auStack_500;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar5 = *(long **)(param_1 + 0x18);
  func_0x0001086430c8();
  auStack_168[0] = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  uVar2 = param_3;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    in_ZR = uVar2 == 0xea0ea0ea0ea0eb;
    if (0xea0ea0ea0ea0ea < uVar2) goto LAB_108641edc;
    FUN_108642708(auStack_500,uVar2,0,auStack_168);
    FUN_108642644(&lStack_178,auStack_500);
    func_0x0001086429f0();
    puVar3 = puVar8;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  auStack_168[2] = 0;
  auStack_168[1] = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x0001086430c8();
  func_0x000108642fd4();
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = *plStack_150;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        puVar6 = *(undefined1 **)(auStack_168[2] + (long)puVar8 * 8);
        _objc_retain(puVar6);
        FUN_1086455f4(auStack_500,puVar6);
        if (uStack_170 < auStack_168[0]) {
          FUN_108642798(uStack_170,auStack_500);
          uVar2 = uStack_170 + 0x118;
        }
        else {
          plVar4 = &lStack_178;
          FUN_108642a38(plVar4,(long)(uStack_170 - lStack_178) / 0x118 + 1);
          FUN_108642708(auStack_118,plVar4,(long)(uStack_170 - lStack_178) / 0x118,auStack_168);
          FUN_108642798(lStack_108,auStack_500);
          lStack_108 = lStack_108 + 0x118;
          FUN_108642644(&lStack_178,auStack_118);
          uVar2 = uStack_170;
          func_0x0001086429f0(auStack_118);
        }
        uStack_170 = uVar2;
        func_0x000108642334(auStack_500);
        _objc_release();
        puVar8 = puVar8 + 1;
        in_ZR = puVar8 == puVar3;
      } while (puVar8 < puVar3);
      func_0x000108642fd4();
      puVar3 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x000108642fe0();
  func_0x000108642fe0();
  FUN_10862f7c0(auStack_500,param_4);
  (**(code **)(*plVar5 + 0x10))(plVar5,&lStack_178,auStack_500);
  func_0x000104bee3a8(auStack_500);
  func_0x0001086430d0();
  _objc_release(param_4);
  func_0x000108642fe0();
  func_0x0001086430fc(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108641edc:
  FUN_108642638();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108641f60);
  (*pcVar1)();
}



/* Entry: 108641f94; end: 10864204f; -[SCNMessagingUploadCallback onUploadProgress:] */

void FUN_108641f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108642050(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48);
  FUN_108642450(auStack_48);
  func_0x000108642fe0();
  return;
}



/* Entry: 108642050; end: 1086421cf;  */

void FUN_108642050(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_218 [248];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  puVar2 = param_1;
  FUN_108642a90(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x0001086430c8();
  func_0x000108642fd4();
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = *(undefined8 **)(lStack_118 + (long)puVar6 * 8);
        _objc_retain(puVar4);
        FUN_108645a28(auStack_218,puVar4);
        func_0x000108642e78(param_1,auStack_218);
        func_0x0001086424f4(auStack_218);
        _objc_release();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar2;
      } while (puVar6 < puVar2);
      func_0x000108642fd4();
      puVar2 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  plVar3 = (long *)0x0;
  func_0x000108642fe0();
  func_0x000108642fe0();
  func_0x0001086430fc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108642fe0();
    FUN_108642450(param_1);
    func_0x000108642fe0();
    __Unwind_Resume();
    if (*plVar3 != 0) {
      FUN_10864252c();
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1086421d0; end: 1086421fb;  */

void FUN_1086421d0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10864252c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086421fc; end: 10864224f; -[SCNMessagingUploadCallback .cxx_destruct] */

void FUN_1086421fc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f810;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108642610((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108642250; end: 1086422f7; -[SCNMessagingUploadCallback .cxx_construct] */

undefined8 * FUN_108642250(undefined8 *param_1)

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
      func_0x000108643030();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1086422f8; end: 1086422ff;  */

void FUN_1086422f8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x118;
    func_0x000108642334();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108642300; end: 10864237f;  */

void FUN_108642300(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x118;
    func_0x000108642334();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108642380; end: 1086423bf;  */

void FUN_108642380(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 1086423c0; end: 108642437;  */

long FUN_1086423c0(long param_1)

{
  func_0x0001086423e8(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_108642438(param_1,0);
  return param_1;
}



/* Entry: 108642438; end: 10864244f;  */

void FUN_108642438(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108642450; end: 1086424b7;  */

undefined8 FUN_108642450(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010864247c(&uStack_28);
  return param_1;
}



/* Entry: 1086424b8; end: 1086424bf;  */

void FUN_1086424b8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xf8;
    func_0x0001086424f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086424c0; end: 10864252b;  */

void FUN_1086424c0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xf8;
    func_0x0001086424f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10864252c; end: 10864259f;  */

void FUN_10864252c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f810;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108643030();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_1086425a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086430d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086425a0; end: 10864260f;  */

void FUN_1086425a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac90;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108643030();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108642610(&uStack_30);
  return;
}



/* Entry: 108642610; end: 108642637;  */

long FUN_108642610(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108642638; end: 108642643;  */

void FUN_108642638(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001086430e4();
  func_0x00010864305c();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *(long *)(param_2 + 8) + ((lVar1 - lVar2) / -0x118) * 0x118;
  plStack_80 = param_1 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  lStack_58 = lVar4;
  lStack_60 = lVar4;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x118) {
    FUN_108642798(lStack_58,lVar3);
    lStack_58 = lStack_58 + 0x118;
  }
  uStack_68 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x118) {
    func_0x000108642334(lVar2);
  }
  FUN_108642970(&plStack_80);
  *(long *)(unaff_x19 + 8) = lVar4;
  func_0x000108642fe8();
  return;
}



/* Entry: 108642644; end: 108642707;  */

void FUN_108642644(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010864305c();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *(long *)(param_2 + 8) + ((lVar1 - lVar2) / -0x118) * 0x118;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x118) {
    FUN_108642798(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x118;
  }
  uStack_58 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x118) {
    func_0x000108642334(lVar2);
  }
  FUN_108642970(&plStack_70);
  *(long *)(unaff_x19 + 8) = lVar4;
  func_0x000108642fe8();
  return;
}



/* Entry: 108642708; end: 108642767;  */

void FUN_108642708(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108642744(param_4);
  }
  func_0x000108643068(0x118);
  return;
}



/* Entry: 108642768; end: 108642797;  */

undefined8 * FUN_108642768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < (undefined8 *)0xea0ea0ea0ea0eb) {
    param_2 = (undefined8 *)((long)param_2 * 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  func_0x000104bd35f4();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x0001006b78fc(param_1 + 6,param_2 + 6);
  param_1[10] = param_2[10];
  FUN_10864284c(param_1 + 0xb,param_2 + 0xb);
  FUN_1086428bc(param_1 + 0x10,param_2 + 0x10);
  FUN_108642918(param_1 + 0x1a,param_2 + 0x1a);
  func_0x000107c27afc(param_1 + 0x1e,param_2 + 0x1e);
  param_1[0x22] = param_2[0x22];
  return param_1;
}



/* Entry: 108642798; end: 10864284b;  */

undefined8 * FUN_108642798(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x0001006b78fc(param_1 + 6,param_2 + 6);
  param_1[10] = param_2[10];
  FUN_10864284c(param_1 + 0xb,param_2 + 0xb);
  FUN_1086428bc(param_1 + 0x10,param_2 + 0x10);
  FUN_108642918(param_1 + 0x1a,param_2 + 0x1a);
  func_0x000107c27afc(param_1 + 0x1e,param_2 + 0x1e);
  param_1[0x22] = param_2[0x22];
  return param_1;
}



/* Entry: 10864284c; end: 1086428bb;  */

void FUN_10864284c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1086428bc; end: 1086428e7;  */

undefined1 * FUN_1086428bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_1086428e8();
  return param_1;
}



/* Entry: 1086428e8; end: 1086428fb;  */

void FUN_1086428e8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    func_0x00010529099c();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 1086428fc; end: 108642917;  */

void FUN_1086428fc(long param_1)

{
  func_0x00010529099c();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 108642918; end: 108642943;  */

undefined1 * FUN_108642918(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_108642944();
  return param_1;
}



/* Entry: 108642944; end: 10864296f;  */

void FUN_108642944(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000108643080();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 108642970; end: 10864299f;  */

long FUN_108642970(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086429a0(param_1);
  }
  return param_1;
}



/* Entry: 1086429a0; end: 1086429bf;  */

void FUN_1086429a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x118;
    func_0x000108642334();
  }
  return;
}



/* Entry: 1086429c0; end: 108642a37;  */

void FUN_1086429c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x118;
    func_0x000108642334();
  }
  return;
}



/* Entry: 108642a38; end: 108642a8f;  */

long * FUN_108642a38(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_58 [5];
  
  if (param_2 < (long *)0xea0ea0ea0ea0eb) {
    uVar1 = (param_1[2] - *param_1) / 0x118;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x75075075075074 < uVar1) {
      plVar3 = (long *)0xea0ea0ea0ea0ea;
    }
    return plVar3;
  }
  FUN_108642638();
  if ((long *)((param_1[2] - *param_1) / 0xf8) < param_2) {
    if ((long *)0x108421084210842 < param_2) {
      FUN_108642b1c();
      plVar3 = param_1;
      func_0x000108643048();
      func_0x000108643040();
      func_0x0001086430e4();
      func_0x00010864305c();
      plVar2 = plVar3 + 2;
      lVar4 = param_2[1] + ((plVar3[1] - *plVar3) / -0xf8) * 0xf8;
      FUN_108642c08(plVar2,*plVar3,plVar3[1],lVar4);
      param_1[1] = lVar4;
      func_0x000108642fe8();
      return plVar2;
    }
    param_1 = alStack_58;
    FUN_108642b78(param_1);
    func_0x0001086430a4();
    func_0x000108643048();
  }
  return param_1;
}



/* Entry: 108642a90; end: 108642b1b;  */

void FUN_108642a90(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0xf8) < param_2) {
    if (0x108421084210842 < param_2) {
      FUN_108642b1c();
      plVar1 = param_1;
      func_0x000108643048();
      func_0x000108643040();
      func_0x0001086430e4();
      func_0x00010864305c();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0xf8) * 0xf8;
      FUN_108642c08(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      func_0x000108642fe8();
      return;
    }
    FUN_108642b78(auStack_48,param_2,(param_1[1] - *param_1) / 0xf8);
    func_0x0001086430a4();
    func_0x000108643048();
  }
  return;
}



/* Entry: 108642b1c; end: 108642b27;  */

void FUN_108642b1c(long *param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  
  func_0x0001086430e4();
  func_0x00010864305c();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xf8) * 0xf8;
  FUN_108642c08(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  func_0x000108642fe8();
  return;
}



/* Entry: 108642b28; end: 108642b77;  */

void FUN_108642b28(long *param_1,long param_2)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010864305c();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xf8) * 0xf8;
  FUN_108642c08(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  func_0x000108642fe8();
  return;
}



/* Entry: 108642b78; end: 108642bd7;  */

void FUN_108642b78(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000108642bb4(param_4);
  }
  func_0x000108643068(0xf8);
  return;
}



/* Entry: 108642bd8; end: 108642c07;  */

void FUN_108642bd8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x108421084210843) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xf8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xf8) {
    func_0x000108642cdc(param_4,uVar1);
    param_4 = lStack_48 + 0xf8;
  }
  uStack_58 = 1;
  func_0x000108642cac(param_1,param_2,param_3);
  FUN_108642d90(&uStack_70);
  return;
}



/* Entry: 108642c08; end: 108642cab;  */

void FUN_108642c08(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xf8) {
    func_0x000108642cdc(param_4,lVar1);
    param_4 = lStack_38 + 0xf8;
  }
  uStack_48 = 1;
  func_0x000108642cac(param_1,param_2,param_3);
  FUN_108642d90(&uStack_60);
  return;
}



/* Entry: 108642cac; end: 108642d8f;  */

void FUN_108642cac(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xf8) {
    func_0x0001086424f4();
  }
  return;
}



/* Entry: 108642d90; end: 108642dbf;  */

long FUN_108642d90(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108642dc0(param_1);
  }
  return param_1;
}



/* Entry: 108642dc0; end: 108642ddf;  */

void FUN_108642dc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xf8;
    func_0x0001086424f4();
  }
  return;
}



/* Entry: 108642de0; end: 108642e3b;  */

void FUN_108642de0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xf8;
    func_0x0001086424f4();
  }
  return;
}



/* Entry: 108642e3c; end: 108642e43;  */

void FUN_108642e3c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xf8;
    func_0x0001086424f4();
  }
  return;
}



/* Entry: 108642e44; end: 108642edb;  */

void FUN_108642e44(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010864305c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xf8;
    func_0x0001086424f4();
  }
  return;
}



/* Entry: 108642edc; end: 108642f73;  */

long FUN_108642edc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108642f74(param_1,(param_1[1] - *param_1) / 0xf8 + 1);
  FUN_108642b78(auStack_58,plVar1,(param_1[1] - *param_1) / 0xf8,param_1 + 2);
  func_0x000108642cdc(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xf8;
  func_0x0001086430a4();
  lVar2 = param_1[1];
  func_0x000108643048();
  return lVar2;
}



/* Entry: 108642f74; end: 108642fcb;  */

long * FUN_108642f74(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x108421084210842 < param_2) {
    FUN_108642b1c();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0xf8;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x84210842108420 < uVar1) {
    plVar2 = (long *)0x108421084210842;
  }
  return plVar2;
}



/* Entry: 108642fcc; end: 108643113;  */

void FUN_108642fcc(void)

{
  return;
}



/* Entry: 108643114; end: 108643127;  */

void FUN_108643114(void)

{
  FUN_108643404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108643128; end: 108643133;  */

long FUN_108643128(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5f878;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000108643424();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108643134; end: 108643173;  */

void FUN_108643134(void)

{
  func_0x000108643464();
  return;
}



/* Entry: 108643174; end: 10864322f;  */

void FUN_108643174(void)

{
  undefined8 in_x3;
  
  func_0x000108643414();
  func_0x00010864344c();
  FUN_10862ffe4();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086323c4();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086421d0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28e1e0();
  _objc_release(in_x3);
  func_0x000108643424();
  func_0x000107c31bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108643230; end: 10864329b;  */

void FUN_108643230(void)

{
  func_0x000108643414();
  func_0x00010864344c();
  FUN_10861bf78();
  _objc_retainAutoreleasedReturnValue();
  FUN_108644314();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108643438();
  func_0x00010c28e240();
  func_0x000108643424();
  func_0x000107c31bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10864329c; end: 108643307;  */

void FUN_10864329c(void)

{
  func_0x000108643414();
  func_0x00010864344c();
  FUN_10861bf78();
  _objc_retainAutoreleasedReturnValue();
  FUN_108646020();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108643438();
  func_0x00010c11dae0();
  func_0x000108643424();
  func_0x000107c31bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108643308; end: 108643373;  */

void FUN_108643308(void)

{
  func_0x000108643414();
  func_0x00010864344c();
  FUN_10861bf78();
  _objc_retainAutoreleasedReturnValue();
  FUN_108644bfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108643438();
  func_0x00010c139b80();
  func_0x000108643424();
  func_0x000107c31bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108643374; end: 108643403;  */

long FUN_108643374(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5f878;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000108643424();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108643404; end: 10864346f;  */

void FUN_108643404(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5f8b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108643470; end: 1086435e7;  */

void FUN_108643470(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c252d60(param_2);
  func_0x00010bf4cce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_70);
  func_0x00010bf93e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861abfc(auStack_a8);
  uVar2 = param_2;
  func_0x00010bf9fd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010862476c();
  func_0x00010c270960(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086435e8(auStack_d0);
  FUN_1086436f4(param_1,uVar1,auStack_70,auStack_a8,uVar3 & 0xffffffffff,auStack_d0);
  FUN_1086423c0(auStack_d0);
  _objc_release(param_2);
  _objc_release(uVar2);
  func_0x0001006b7bc8(auStack_a8);
  func_0x000108643f64();
  func_0x000107c279c4(auStack_70);
  func_0x000108643f2c();
  func_0x000108643f0c();
  return;
}



/* Entry: 1086435e8; end: 1086436f3;  */

void FUN_1086435e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_108643750;
  uStack_68 = 0x10864375c;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  FUN_1086437ec(&uStack_58,uVar1);
  func_0x00010bf97ce0(param_2);
  FUN_108643c70(param_1,puStack_80 + 6);
  func_0x000108643f6c();
  FUN_1086423c0(&uStack_58);
  func_0x000108643f0c();
  return;
}



/* Entry: 1086436f4; end: 10864374f;  */

undefined4 *
FUN_1086436f4(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  func_0x0001006b78fc(param_1 + 2,param_3);
  func_0x0001006b7b9c(param_1 + 10,param_4);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  FUN_10864284c(param_1 + 0x1a,param_6);
  return param_1;
}



/* Entry: 108643750; end: 108643763;  */

void FUN_108643750(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 108643764; end: 1086437d3;  */

void FUN_108643764(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_3);
  uStack_34 = param_2;
  FUN_1086248d4();
  func_0x000107c2813c();
  FUN_108643f0c();
  uStack_40 = param_3;
  FUN_1086437d4(lVar1 + 0x30,&uStack_34,&uStack_40);
  return;
}



/* Entry: 1086437d4; end: 1086437eb;  */

void FUN_1086437d4(void)

{
  func_0x0001086439fc();
  return;
}


