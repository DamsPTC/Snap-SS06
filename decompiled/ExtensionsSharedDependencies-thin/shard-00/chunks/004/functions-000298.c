/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005d482c; end: 005d486f; -[SCNGrpcClientStreamSendHandler .cxx_construct] */

undefined8 * FUN_005d482c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_005d4980();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d4870; end: 005d48e3;  */

void FUN_005d4870(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a06e40;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_005d4980();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_005d48e4);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d49a4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d48e4; end: 005d4953;  */

void FUN_005d48e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac31c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_005d4980();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_005d4954(&uStack_30);
  return;
}



/* Entry: 005d4954; end: 005d497f;  */

long FUN_005d4954(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d4980; end: 005d49bf;  */

void FUN_005d4980(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 005d49c0; end: 005d4a6b;  */

void FUN_005d49c0(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_00a06ea8;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_005d4a6c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_005d4f50(&uStack_50);
  }
  func_0x005d4f88();
  return;
}



/* Entry: 005d4a6c; end: 005d4b67;  */

void FUN_005d4a6c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a06ee8;
  pqVar4[3] = (qword)&PTR_DAT_00a06f88;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
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
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_00a06f38;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d4f50(&uStack_50);
  return;
}



/* Entry: 005d4b68; end: 005d4b6b;  */

void FUN_005d4b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06ee8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d4b6c; end: 005d4b7f;  */

void FUN_005d4b6c(void)

{
  FUN_005d4f40();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d4b80; end: 005d4b8b;  */

long FUN_005d4b80(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a06ea8;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x005d4f90();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d4b8c; end: 005d4bcb;  */

void FUN_005d4b8c(void)

{
  func_0x005d4fbc();
  return;
}



/* Entry: 005d4bcc; end: 005d4c23;  */

void FUN_005d4bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x005d4fb0();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_005d7bfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00788aa0(uVar1,param_2,unaff_x20);
  func_0x005d4f98();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(param_1);
  return;
}



/* Entry: 005d4c24; end: 005d4c7b;  */

void FUN_005d4c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x005d4fb0();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_005d7348();
  _objc_retainAutoreleasedReturnValue();
  func_0x00788a40(uVar1,param_2,unaff_x20);
  func_0x005d4f98();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(param_1);
  return;
}



/* Entry: 005d4c7c; end: 005d4cb7;  */

undefined8 FUN_005d4c7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00788880(uVar2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 005d4cb8; end: 005d4d8f;  */

void FUN_005d4cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x007888e0(uVar2);
  _objc_release(param_4);
  func_0x005d4f90();
  func_0x005d4f88();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d4d90; end: 005d4e77;  */

void FUN_005d4d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x007888c0(uVar2);
  _objc_release(param_4);
  func_0x005d4f90();
  func_0x005d4f88();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d4e78; end: 005d4eaf;  */

void FUN_005d4e78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00788860(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d4eb0; end: 005d4f3f;  */

long FUN_005d4eb0(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a06ea8;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x005d4f90();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d4f40; end: 005d4f4f;  */

void FUN_005d4f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a06ee8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d4f50; end: 005d4f7b;  */

long FUN_005d4f50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d4f7c; end: 005d4fc7;  */

void FUN_005d4f7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)();
  return;
}



/* Entry: 005d4fc8; end: 005d5077;  */

void FUN_005d4fc8(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_00a07020;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_005d5078);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_005d5618(&uStack_50);
  }
  FUN_005d5644();
  return;
}



/* Entry: 005d5078; end: 005d5177;  */

void FUN_005d5078(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a07060;
  pqVar4[3] = (qword)&PTR_DAT_00a070e0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
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
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_00a070b0;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d5618(&uStack_50);
  return;
}



/* Entry: 005d5178; end: 005d517b;  */

void FUN_005d5178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07060;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d517c; end: 005d518f;  */

void FUN_005d517c(void)

{
  FUN_005d5608();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d5190; end: 005d519b;  */

long FUN_005d5190(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a07020;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x005d564c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d519c; end: 005d51db;  */

void FUN_005d519c(void)

{
  func_0x005d566c();
  return;
}



/* Entry: 005d51dc; end: 005d533b;  */

void FUN_005d51dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d5544(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2e40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d55d8(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788820(uVar2);
  _objc_release(param_7);
  func_0x005d5664();
  func_0x005d565c();
  func_0x005d564c();
  func_0x005d5654();
  func_0x005d5644();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d533c; end: 005d54b3;  */

void FUN_005d533c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d5544(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_6);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d2e40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d55d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00788800(uVar2);
  func_0x005d5664();
  _objc_release(param_7);
  func_0x005d565c();
  func_0x005d564c();
  func_0x005d5654();
  func_0x005d5644();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d54b4; end: 005d5543;  */

long FUN_005d54b4(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a07020;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x005d564c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d5544; end: 005d5607;  */

void FUN_005d5544(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000000b62bc8 & 1) == 0) {
    iVar1 = 0xb62bc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      lVar2 = 0;
      __ZNSt3__16chrono12system_clock11from_time_tEl();
      lRam0000000000b62bc0 = lVar2;
      ___cxa_guard_release(0xb62bc8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00781930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            ((double)(*param_1 - lRam0000000000b62bc0) / 1000000.0,PTR__OBJC_CLASS___NSDate_00ac2c88
             ,PTR_s_dateWithTimeIntervalSince1970__00abb340);
  return;
}



/* Entry: 005d5608; end: 005d5617;  */

void FUN_005d5608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07060;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d5618; end: 005d5643;  */

long FUN_005d5618(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d5644; end: 005d5677;  */

void FUN_005d5644(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d5678; end: 005d56f7; -[SCNGrpcFlipperLoggerFactory initWithCpp:] */

undefined1 * FUN_005d5678(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x005d5850(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 005d56f8; end: 005d57a7; +[SCNGrpcFlipperLoggerFactory setEventLoggerDelegate:] */

void FUN_005d56f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  FUN_005d4fc8(auStack_40,param_3);
  FUN_005b91dc(auStack_40);
  func_0x005c7e9c(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 005d57a8; end: 005d5803; -[SCNGrpcFlipperLoggerFactory .cxx_destruct] */

void FUN_005d57a8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a07100;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x005d5850((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d5804; end: 005d587b; -[SCNGrpcFlipperLoggerFactory .cxx_construct] */

undefined8 * FUN_005d5804(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_00718574();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d587c; end: 005d58f3; -[SCNGrpcGrpcCallHandle initWithCpp:] */

undefined1 * FUN_005d587c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_00ac40d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_005d5b24();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_005d5af8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d58f4; end: 005d594f; -[SCNGrpcGrpcCallHandle cancel] */

void FUN_005d58f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 005d5950; end: 005d597b;  */

void FUN_005d5950(long *param_1)

{
  if (*param_1 != 0) {
    FUN_005d5a14();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d597c; end: 005d59cf; -[SCNGrpcGrpcCallHandle .cxx_destruct] */

void FUN_005d597c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a07110;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_005d5af8((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d59d0; end: 005d5a13; -[SCNGrpcGrpcCallHandle .cxx_construct] */

undefined8 * FUN_005d59d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_005d5b24();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d5a14; end: 005d5a87;  */

void FUN_005d5a14(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a07110;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_005d5b24();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_005d5a88);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d5b34();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d5a88; end: 005d5af7;  */

void FUN_005d5a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac31d0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_005d5b24();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_005d5af8(&uStack_30);
  return;
}



/* Entry: 005d5af8; end: 005d5b23;  */

long FUN_005d5af8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d5b24; end: 005d5b53;  */

void FUN_005d5b24(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 005d5b54; end: 005d5bd3; -[SCNGrpcGrpcManager initWithCpp:] */

undefined1 * FUN_005d5b54(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_00ac40d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x005d5d80(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 005d5bd4; end: 005d5c27; +[SCNGrpcGrpcManager enableMetrics] */

void FUN_005d5bd4(void)

{
  FUN_005bc9cc();
  return;
}



/* Entry: 005d5c28; end: 005d5cd7; +[SCNGrpcGrpcManager setEventLoggerDelegate:] */

void FUN_005d5c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  FUN_005d49c0(auStack_40,param_3);
  FUN_005bca20(auStack_40);
  func_0x005bb7c4(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 005d5cd8; end: 005d5d33; -[SCNGrpcGrpcManager .cxx_destruct] */

void FUN_005d5cd8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a07120;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x005d5d80((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d5d34; end: 005d5dab; -[SCNGrpcGrpcManager .cxx_construct] */

undefined8 * FUN_005d5d34(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_00718574();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d5dac; end: 005d6033;  */

void FUN_005d5dac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00782940();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(auStack_80);
  uVar2 = param_2;
  func_0x0078bd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0047e5f8();
  uVar4 = param_2;
  uVar9 = param_3;
  func_0x00780120();
  uVar5 = param_2;
  func_0x007933a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_a0);
  uVar6 = param_2;
  func_0x007928a0(param_2);
  func_0x0078b800(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_c0);
  uVar7 = param_2;
  func_0x00781240();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_0047e5f8();
  func_0x0078c840(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c7c8(auStack_e0);
  func_0x0078b920();
  func_0x00793300();
  func_0x00788fa0();
  _objc_retainAutoreleasedReturnValue();
  FUN_0047e5f8();
  FUN_00466ec8(param_1,auStack_80,uVar3,param_3 & 0xff,uVar4,auStack_a0,uVar6,auStack_c0,uVar8,
               uVar9 & 0xff,auStack_e0,(char)param_2);
  FUN_005d61d4();
  FUN_00457530(auStack_e0);
  func_0x005d61e4();
  _objc_release(uVar7);
  FUN_00457530(auStack_c0);
  func_0x005d61dc();
  FUN_00457530(auStack_a0);
  _objc_release(uVar5);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar1);
  func_0x005d61ec();
  return;
}



/* Entry: 005d6034; end: 005d61d3;  */

void FUN_005d6034(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = PTR__OBJC_CLASS___SCNGrpcGrpcParameters_00ac3198;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcGrpcParameters_00ac3198);
  lVar4 = param_1;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x18;
  func_0x0047e61c(lVar5);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = *(int *)(param_1 + 0x28);
  lVar6 = param_1 + 0x30;
  FUN_0047c88c(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  lVar7 = param_1 + 0x58;
  FUN_0047c88c(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x78;
  func_0x0047e61c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x88;
  FUN_0047c88c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined2 *)(param_1 + 0xa8);
  func_0x0047e61c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00785480(puVar3,param_2,lVar4,lVar5,(long)iVar2,lVar6,uVar10,lVar7,lVar8,lVar9,uVar1);
  FUN_005d61d4();
  _objc_release(lVar9);
  func_0x005d61dc();
  _objc_release(lVar7);
  func_0x005d61e4();
  _objc_release(lVar5);
  func_0x005d61ec();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 005d61d4; end: 005d61f3;  */

void FUN_005d61d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d61f4; end: 005d626b; -[SCNGrpcGrpcParametersBuilderCppProxy initWithCpp:] */

undefined1 * FUN_005d61f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_00ac40e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_005d671c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0046fae0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005d626c; end: 005d62fb; -[SCNGrpcGrpcParametersBuilderCppProxy build] */

void FUN_005d626c(long param_1)

{
  undefined1 auStack_e0 [192];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_e0);
  FUN_005d6034(auStack_e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x005d6738();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d62fc; end: 005d63f7;  */

void FUN_005d62fc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac31d8;
    _objc_opt_class(PTR_PTR_00ac31d8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a07178;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_005d6494);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_005d66f4(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_005d671c();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 005d63f8; end: 005d6453; -[SCNGrpcGrpcParametersBuilderCppProxy .cxx_destruct] */

void FUN_005d63f8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a07248;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0046fae0((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 005d6454; end: 005d6493; -[SCNGrpcGrpcParametersBuilderCppProxy .cxx_construct] */

undefined8 * FUN_005d6454(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_005d671c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 005d6494; end: 005d6587;  */

void FUN_005d6494(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a071b8;
  pqVar1[3] = (qword)&PTR_DAT_00a07230;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_005d671c();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a07208;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d66f4(&uStack_50);
  return;
}



/* Entry: 005d6588; end: 005d658b;  */

void FUN_005d6588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a071b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d658c; end: 005d659f;  */

void FUN_005d658c(void)

{
  FUN_005d66e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d65a0; end: 005d65ab;  */

long FUN_005d65a0(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a07178;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d65ac; end: 005d65e7;  */

void FUN_005d65ac(void)

{
  func_0x005d672c();
  return;
}



/* Entry: 005d65e8; end: 005d664f;  */

void FUN_005d65e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x0077fcc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d5dac(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d6650; end: 005d66e3;  */

long FUN_005d6650(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a07178;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d66e4; end: 005d66f3;  */

void FUN_005d66e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a071b8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d66f4; end: 005d671b;  */

long FUN_005d66f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d671c; end: 005d6753;  */

void FUN_005d671c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 005d6754; end: 005d6847;  */

void FUN_005d6754(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x00788040(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(&uStack_48);
  func_0x00793580(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  FUN_005d68e0();
  func_0x005d68e8();
  return;
}



/* Entry: 005d6848; end: 005d68df;  */

void FUN_005d6848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_00ac2fd0;
  _objc_alloc(PTR_PTR_00ac2fd0);
  lVar2 = param_1;
  FUN_0047c844(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_0047c844(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007859e0(puVar1,param_2,lVar2,param_1);
  FUN_005d68e0();
  func_0x005d68e8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 005d68e0; end: 005d68ef;  */

void FUN_005d68e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d68f0; end: 005d6a4f;  */

void FUN_005d68f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar8 = PTR_PTR_00ac31e0;
  _objc_alloc(PTR_PTR_00ac31e0);
  lVar9 = param_1;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x18;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  iVar7 = *(int *)(param_1 + 0x30);
  lVar11 = param_1 + 0x38;
  FUN_0047c844(lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined1 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 100);
  lVar12 = param_1 + 0x68;
  FUN_0047c844();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x80;
  FUN_005d2ef8();
  _objc_retainAutoreleasedReturnValue();
  func_0x007867c0(puVar8,param_2,lVar9,lVar10,(long)iVar7,lVar11,uVar6,uVar1,uVar3,uVar2,uVar4,uVar5
                  ,lVar12,param_1);
  func_0x005d6a60();
  func_0x005d6a50();
  _objc_release(lVar11);
  _objc_release(lVar10);
  func_0x005d6a58();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar5);
  return;
}



/* Entry: 005d6a50; end: 005d6a6b;  */

void FUN_005d6a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d6a6c; end: 005d6b23;  */

void FUN_005d6a6c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_00a072b0;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_005d6b24);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_005d6da0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 005d6b24; end: 005d6c23;  */

void FUN_005d6b24(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a072f0;
  pqVar4[3] = (qword)&PTR_DAT_00a07368;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
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
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_00a07340;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d6da0(&uStack_50);
  return;
}



/* Entry: 005d6c24; end: 005d6c27;  */

void FUN_005d6c24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a072f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d6c28; end: 005d6c3b;  */

void FUN_005d6c28(void)

{
  FUN_005d6d90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d6c3c; end: 005d6c47;  */

long FUN_005d6c3c(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a072b0;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d6c48; end: 005d6c87;  */

void FUN_005d6c48(void)

{
  FUN_005d6dcc();
  return;
}



/* Entry: 005d6c88; end: 005d6cfb;  */

void FUN_005d6c88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_005d72c8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a120(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d6cfc; end: 005d6d8f;  */

long FUN_005d6cfc(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a072b0;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d6d90; end: 005d6d9f;  */

void FUN_005d6d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a072f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d6da0; end: 005d6dcb;  */

long FUN_005d6da0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d6dcc; end: 005d6dd7;  */

long FUN_005d6dcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a072b0;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d6dd8; end: 005d6e87;  */

void FUN_005d6dd8(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_00a073d8;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_005d6e88);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_005d71d4(&uStack_50);
  }
  FUN_005d7200();
  return;
}



/* Entry: 005d6e88; end: 005d6f7f;  */

void FUN_005d6e88(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a07418;
  pqVar4[3] = (qword)&PTR_DAT_00a07498;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
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
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x005d7208();
  pqVar4[3] = (qword)&PTR_FUN_00a07468;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_005d71d4(&uStack_50);
  return;
}



/* Entry: 005d6f80; end: 005d6f83;  */

void FUN_005d6f80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07418;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d6f84; end: 005d6f97;  */

void FUN_005d6f84(void)

{
  FUN_005d71c4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005d6f98; end: 005d6fa3;  */

long FUN_005d6f98(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a073d8;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 005d6fa4; end: 005d6fe3;  */

void FUN_005d6fa4(void)

{
  func_0x005d7210();
  return;
}



/* Entry: 005d6fe4; end: 005d708b;  */

void FUN_005d6fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x005d55d8(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_005d7194(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a060(uVar2);
  func_0x005d7208();
  func_0x005d7200();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d708c; end: 005d70ff;  */

void FUN_005d708c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_005d72c8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a100(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 005d7100; end: 005d7193;  */

long FUN_005d7100(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a073d8;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 005d7194; end: 005d71c3;  */

void FUN_005d7194(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_005d72c8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005d71c4; end: 005d71d3;  */

void FUN_005d71c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a07418;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005d71d4; end: 005d71ff;  */

long FUN_005d71d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005d7200; end: 005d721b;  */

void FUN_005d7200(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 005d721c; end: 005d72c7;  */

void FUN_005d721c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00791ca0();
  func_0x00782e00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c764(&uStack_48);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_40;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(param_2);
  FUN_005d7340();
  return;
}


