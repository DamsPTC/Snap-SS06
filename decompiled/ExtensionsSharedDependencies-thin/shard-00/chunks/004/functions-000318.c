/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0063a71c; end: 0063a72f;  */

void FUN_0063a71c(void)

{
  FUN_0063a83c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063a730; end: 0063a73b;  */

long FUN_0063a730(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0bbb8;
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



/* Entry: 0063a73c; end: 0063a7a7;  */

void FUN_0063a73c(void)

{
  func_0x0063a8a0();
  return;
}



/* Entry: 0063a7a8; end: 0063a83b;  */

long FUN_0063a7a8(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0bbb8;
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



/* Entry: 0063a83c; end: 0063a84b;  */

void FUN_0063a83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bbf8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063a84c; end: 0063a873;  */

long FUN_0063a84c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063a874; end: 0063a8ab;  */

void FUN_0063a874(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0063a8ac; end: 0063a963;  */

void FUN_0063a8ac(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_00ac3668;
  _objc_alloc(PTR_PTR_00ac3668);
  iVar1 = *param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  piVar3 = param_1 + 4;
  FUN_0047c844(piVar3);
  _objc_retainAutoreleasedReturnValue();
  piVar4 = param_1 + 10;
  FUN_0047c844(piVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784f40(puVar2,param_2,(long)iVar1,uVar5,piVar3,piVar4,*(undefined8 *)(param_1 + 0x10),
                  (char)param_1[0x12]);
  FUN_0063a964();
  _objc_release(piVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0063a964; end: 0063a96f;  */

void FUN_0063a964(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0063a970; end: 0063a9e7; -[SCNShimsLoggerCppProxy initWithCpp:] */

undefined1 * FUN_0063a970(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_00ac4570;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063b234();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0063b20c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063a9e8; end: 0063aadf; -[SCNShimsLoggerCppProxy logTimedEvent:interval:params:] */

void FUN_0063a9e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_0047c764(auStack_48,param_3);
  FUN_0047d3e8(auStack_70,param_5);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,param_4,auStack_70);
  func_0x00459d84(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0063b254();
  func_0x0063b244();
  return;
}



/* Entry: 0063aae0; end: 0063abe7; -[SCNShimsLoggerCppProxy log:context:tag:message:] */

void FUN_0063aae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_0047c764(auStack_58,param_5);
  FUN_0047c764(auStack_70,param_6);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_4,auStack_58,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0063b254();
  func_0x0063b244();
  return;
}



/* Entry: 0063abe8; end: 0063acd7;  */

void FUN_0063abe8(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_00ac3670;
    _objc_opt_class(PTR_PTR_00ac3670);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a0bcf0;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_0063addc);
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
      FUN_0063b100(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_0063b234();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0063b244();
  return;
}



/* Entry: 0063acd8; end: 0063ad47;  */

void FUN_0063acd8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_00a0bc98,&PTR_DAT_00a0bca8,0);
    if (lVar1 == 0) {
      FUN_0063b128(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0063ad48; end: 0063ad9b; -[SCNShimsLoggerCppProxy .cxx_destruct] */

void FUN_0063ad48(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bdd0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0063b20c((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063ad9c; end: 0063addb; -[SCNShimsLoggerCppProxy .cxx_construct] */

undefined8 * FUN_0063ad9c(undefined8 *param_1)

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
      FUN_0063b234();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063addc; end: 0063aec7;  */

void FUN_0063addc(undefined8 *param_1,long *param_2)

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
  *pqVar1 = (qword)&PTR_FUN_00a0bd30;
  pqVar1[3] = (qword)&PTR_DAT_00a0bdb0;
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
      FUN_0063b234();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x0063b24c();
  pqVar1[3] = (qword)&PTR_FUN_00a0bd80;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_0063b100(&uStack_50);
  return;
}



/* Entry: 0063aec8; end: 0063aecb;  */

void FUN_0063aec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bd30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063aecc; end: 0063aedf;  */

void FUN_0063aecc(void)

{
  FUN_0063b0f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063aee0; end: 0063aeeb;  */

long FUN_0063aee0(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0bcf0;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    func_0x0063b2ac();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 0063aeec; end: 0063af27;  */

void FUN_0063aeec(void)

{
  func_0x0063b294();
  return;
}



/* Entry: 0063af28; end: 0063afbf;  */

void FUN_0063af28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047d8b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788a80(uVar2);
  func_0x0063b24c();
  func_0x0063b244();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 0063afc0; end: 0063b05f;  */

void FUN_0063afc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0047c844(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_0047c844(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788660(uVar2);
  func_0x0063b2ac();
  func_0x0063b244();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 0063b060; end: 0063b0ef;  */

long FUN_0063b060(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0bcf0;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    func_0x0063b2ac();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 0063b0f0; end: 0063b0ff;  */

void FUN_0063b0f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bd30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063b100; end: 0063b127;  */

long FUN_0063b100(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063b128; end: 0063b19b;  */

void FUN_0063b128(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a0bdd0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_0063b234();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_0063b19c);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063b2a0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063b19c; end: 0063b20b;  */

void FUN_0063b19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac3670;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063b234();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_0063b20c(&uStack_30);
  return;
}



/* Entry: 0063b20c; end: 0063b233;  */

long FUN_0063b20c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063b234; end: 0063b2bb;  */

void FUN_0063b234(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0063b2bc; end: 0063b32f; -[SCNShimsLoggerScope initWithCpp:] */

undefined1 * FUN_0063b2bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_00ac4578;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063bf20();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0063bfc4();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063b330; end: 0063b3ef; +[SCNShimsLoggerScope produce:] */

void FUN_0063b330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  FUN_0063abe8(auStack_50,param_3);
  FUN_0063e86c(auStack_40,auStack_50);
  FUN_0063b20c(auStack_50);
  puVar1 = auStack_40;
  FUN_0063b604(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063bfc4();
  func_0x0063bfb0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0063b3f0; end: 0063b487; -[SCNShimsLoggerScope dispose] */

void FUN_0063b3f0(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0063b488(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063bf30();
  func_0x0063bf58();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063b488; end: 0063b51f;  */

void FUN_0063b488(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_PTR_00ac3680;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00783f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  FUN_0063b7f4(auStack_40,param_1,&puStack_48);
  func_0x0040d2ac(auStack_40);
  _objc_release(puStack_48);
  func_0x0063bfb0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0063b520; end: 0063b5b3; -[SCNShimsLoggerScope getLogger] */

void FUN_0063b520(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_0063acd8(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063bf60();
  FUN_0063b20c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063b5b4; end: 0063b603;  */

void FUN_0063b5b4(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        FUN_0063bf20();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0063b604; end: 0063b62f;  */

void FUN_0063b604(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0063b6ec();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063b630; end: 0063b683; -[SCNShimsLoggerScope .cxx_destruct] */

void FUN_0063b630(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bde0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0063b7cc((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063b684; end: 0063b6eb; -[SCNShimsLoggerScope .cxx_construct] */

undefined8 * FUN_0063b684(undefined8 *param_1)

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
      FUN_0063bf20();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063b6ec; end: 0063b75f;  */

void FUN_0063b6ec(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a0bde0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_0063bf20();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_0063b760);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063bf60();
  FUN_0047df30();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063b760; end: 0063b7cb;  */

void FUN_0063b760(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac3678;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063bf20();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_0063b7cc(&uStack_30);
  return;
}



/* Entry: 0063b7cc; end: 0063b7f3;  */

long FUN_0063b7cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063b7f4; end: 0063b9bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0063b7f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [7];
  
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_0063b9c0(alStack_58 + 3,param_2,alStack_58 + 1);
  FUN_0063ba14(alStack_58 + 5,alStack_58 + 3);
  func_0x0063b6c4(alStack_58 + 3);
  func_0x0063b6c4(alStack_58 + 1);
  FUN_0040cf9c(alStack_58);
  FUN_0040cfec(alStack_58 + 3,alStack_58[0]);
  uStack_68 = *param_3;
  *param_3 = 0;
  lStack_60 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_88 = alStack_58[5] + 0x38;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_58[5];
  func_0x0063ba54();
  if ((int)lVar1 == 0) {
    FUN_0063bb84(&lStack_90,&uStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_58[5] + 0x80);
    *(long *)(alStack_58[5] + 0x80) = lVar1;
    if (lVar2 != 0) {
      func_0x0063bf3c();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x0063bf3c();
      }
    }
  }
  else {
    FUN_0063ba14(&lStack_78,alStack_58 + 5);
  }
  FUN_0040d514(&lStack_88);
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        FUN_0063bf20();
      } while (extraout_w10 != 0);
    }
    FUN_0063ba9c(&uStack_68,&lStack_a0);
    func_0x0063bf50();
  }
  param_1[1] = alStack_58[4];
  *param_1 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  func_0x0063b6c4(&lStack_78);
  FUN_0063bed4(&uStack_68);
  func_0x0040d2ac(alStack_58 + 3);
  lVar1 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar1 != 0) {
    func_0x0063bf3c();
  }
  func_0x0063bfa8();
  return;
}



/* Entry: 0063b9c0; end: 0063ba13;  */

void FUN_0063b9c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 0063ba14; end: 0063ba9b;  */

undefined8 * FUN_0063ba14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0063bf50();
  return param_1;
}



/* Entry: 0063ba9c; end: 0063bb83;  */

void FUN_0063ba9c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0063bc58(param_1,&uStack_40);
  func_0x0063bfa0();
  func_0x0063bf58();
  FUN_0040d544(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 0063bb84; end: 0063bbc7;  */

void FUN_0063bb84(undefined8 *param_1,undefined8 *param_2)

{
  dword *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_00a0be00;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(pdVar1 + 4) = uVar3;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  *param_1 = pdVar1;
  return;
}



/* Entry: 0063bbc8; end: 0063bbcb;  */

undefined8 * FUN_0063bbc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0be00;
  FUN_0063bed4(param_1 + 1);
  return param_1;
}



/* Entry: 0063bbcc; end: 0063bbdf;  */

void FUN_0063bbcc(void)

{
  FUN_0063bc2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063bbe0; end: 0063bc2b;  */

void FUN_0063bbe0(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063bf20();
    } while (extraout_w10 != 0);
  }
  FUN_0063ba9c(param_1 + 8,&uStack_30);
  func_0x0063bf50();
  return;
}



/* Entry: 0063bc2c; end: 0063bc57;  */

undefined8 * FUN_0063bc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0be00;
  FUN_0063bed4(param_1 + 1);
  return param_1;
}



/* Entry: 0063bc58; end: 0063bd8f;  */

void FUN_0063bc58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  FUN_0063bd90(param_2);
  FUN_00649d8c(auStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791140(uVar1);
  func_0x0063bf80();
  return;
}



/* Entry: 0063bd90; end: 0063be8b;  */

void FUN_0063bd90(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0063b9c0(&lStack_40,param_1,&uStack_50);
  FUN_0063ba14(&lStack_30,&lStack_40);
  func_0x0063b6c4(&lStack_40);
  func_0x0063bfa0();
  lStack_40 = lStack_30 + 0x38;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0063be8c(lStack_30 + 8,&lStack_40,&lStack_60);
  func_0x0063bf58();
  if (*(long *)(lStack_30 + 0x78) == 0) {
    FUN_0040d514(&lStack_40);
    func_0x0063bfa8();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x63be54);
  (*pcVar4)();
}



/* Entry: 0063be8c; end: 0063becb;  */

void FUN_0063be8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_0063becc(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 0063becc; end: 0063bed3;  */

bool FUN_0063becc(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 1) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x78) != 0;
    func_0x0063bf98();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 0063bed4; end: 0063bf1f;  */

undefined8 * FUN_0063bed4(undefined8 *param_1)

{
  FUN_0040d650(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 0063bf20; end: 0063bff3;  */

void FUN_0063bf20(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0063bff4; end: 0063c0ab;  */

void FUN_0063bff4(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_00a0be98;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_0063c0ac);
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
    FUN_0063c328(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 0063c0ac; end: 0063c1ab;  */

void FUN_0063c0ac(undefined8 *param_1,long *param_2)

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
  *pqVar4 = (qword)&PTR_FUN_00a0bed8;
  pqVar4[3] = (qword)&PTR_DAT_00a0bf50;
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
  pqVar4[3] = (qword)&PTR_FUN_00a0bf28;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_0063c328(&uStack_50);
  return;
}



/* Entry: 0063c1ac; end: 0063c1af;  */

void FUN_0063c1ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bed8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063c1b0; end: 0063c1c3;  */

void FUN_0063c1b0(void)

{
  FUN_0063c318();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063c1c4; end: 0063c1cf;  */

long FUN_0063c1c4(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0be98;
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



/* Entry: 0063c1d0; end: 0063c20f;  */

void FUN_0063c1d0(void)

{
  FUN_0063c354();
  return;
}



/* Entry: 0063c210; end: 0063c283;  */

void FUN_0063c210(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_0063a8ac(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b620(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 0063c284; end: 0063c317;  */

long FUN_0063c284(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0be98;
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



/* Entry: 0063c318; end: 0063c327;  */

void FUN_0063c318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bed8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063c328; end: 0063c353;  */

long FUN_0063c328(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063c354; end: 0063c35f;  */

long FUN_0063c354(long param_1)

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
    ppuStack_38 = &PTR_DAT_00a0be98;
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



/* Entry: 0063c360; end: 0063c3d7; -[SCNShimsPlatform initWithCpp:] */

undefined1 * FUN_0063c360(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR__OBJC_CLASS___SCNShimsPlatform_00ac4580;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0063ce74();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0063cce8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063c3d8; end: 0063c44f; -[SCNShimsPlatform setErrorReporter:] */

void FUN_0063c3d8(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x0063cea0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x0063ce38();
  func_0x0063cebc(*(undefined8 *)(*plVar1 + 0x10));
  func_0x0063ce64();
  func_0x0063ce30();
  return;
}



/* Entry: 0063c450; end: 0063c49f;  */

void FUN_0063c450(undefined8 *param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_0063bff4(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0063c4a0; end: 0063c517; -[SCNShimsPlatform setNonFatalReporter:] */

void FUN_0063c4a0(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x0063cea0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x0063ce38();
  func_0x0063cebc(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0063ce64();
  func_0x0063ce30();
  return;
}



/* Entry: 0063c518; end: 0063c5e7; +[SCNShimsPlatform init:logger:] */

void FUN_0063c518(void)

{
  undefined8 in_x3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  func_0x0063ce44();
  _objc_retain(in_x3);
  FUN_0063cedc();
  FUN_0063abe8(auStack_48,in_x3);
  FUN_0063e1c0(auStack_38,auStack_48);
  FUN_0063b20c(auStack_48);
  _objc_release(in_x3);
  func_0x0063ce30();
  return;
}



/* Entry: 0063c5e8; end: 0063c657; +[SCNShimsPlatform setThreadPoolSchedulerPriorityMapping:] */

void FUN_0063c5e8(void)

{
  undefined1 auStack_5c [60];
  
  func_0x0063ce44();
  FUN_0063cfa4(auStack_5c);
  FUN_0064bf98(auStack_5c);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0063c658; end: 0063c663; +[SCNShimsPlatform setThreadPoolSchedulerMaxThreads:] */

void FUN_0063c658(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uRam0000000000b24bb0 = param_3;
  return;
}



/* Entry: 0063c664; end: 0063c6d3; +[SCNShimsPlatform installErrorReporter:] */

void FUN_0063c664(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0063ce44();
  func_0x0063ce38();
  FUN_0063e3c8(auStack_40);
  func_0x0063ce64();
  func_0x0063ce30();
  return;
}



/* Entry: 0063c6d4; end: 0063c743; +[SCNShimsPlatform installNonFatalReporter:] */

void FUN_0063c6d4(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0063ce44();
  func_0x0063ce38();
  func_0x0063e3f4(auStack_40);
  func_0x0063ce64();
  func_0x0063ce30();
  return;
}



/* Entry: 0063c744; end: 0063c857; +[SCNShimsPlatform getStaticBuildIdentifiers] */

void FUN_0063c744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  func_0x0063e4b0(&lStack_48);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,(lStack_40 - lStack_48) / 0x30);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x30) {
    lVar2 = lStack_48;
    FUN_00638f60(lStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00780e20(puVar1);
  func_0x0063ce30();
  func_0x0063cb24(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0063c858; end: 0063ca5b; +[SCNShimsPlatform setThreadAffinity:exclusiveCoreIds:] */

undefined8 FUN_0063c858(void)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong in_x3;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(in_x3);
  _objc_retain(in_x3);
  lStack_128 = 0;
  uStack_120 = 0;
  lStack_130 = 0;
  uVar3 = in_x3;
  func_0x00780e80();
  if (uVar3 != 0) {
    if (uVar3 >> 0x3e != 0) goto LAB_0063c9dc;
    FUN_0053af20(&lStack_c8,uVar3,0,&uStack_120);
    lVar5 = lStack_c0 - (lStack_128 - lStack_130);
    _memcpy(lVar5);
    uVar1 = uStack_120;
    uStack_120 = uStack_b0;
    lStack_128 = lStack_b8;
    lStack_b8 = lStack_130;
    uStack_b0 = uVar1;
    lStack_c8 = lStack_130;
    lStack_c0 = lStack_130;
    lStack_130 = lVar5;
    FUN_0053afa8(&lStack_c8);
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uVar3 = in_x3;
  _objc_retain();
  func_0x0063ce84();
  if (uVar3 != 0) {
    lVar5 = *plStack_100;
    do {
      uVar7 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(in_x3);
        }
        uVar6 = *(ulong *)(lStack_108 + uVar7 * 8);
        _objc_retain(uVar6);
        uVar4 = uVar6;
        FUN_004d264c();
        uStack_114 = (undefined4)uVar4;
        func_0x0063cd38(&lStack_130,&uStack_114);
        _objc_release();
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
      func_0x0063ce84();
      uVar3 = uVar6;
    } while (uVar6 != 0);
  }
  func_0x0063ce30();
  func_0x0063ce30();
  func_0x0053b048(&lStack_130);
  func_0x0063ce30();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return 0xffffffff;
  }
  ___stack_chk_fail();
LAB_0063c9dc:
  FUN_0053af0c();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x63ca34);
  (*pcVar2)();
}



/* Entry: 0063ca5c; end: 0063ca63; +[SCNShimsPlatform lockThreadCurrentCore:] */

undefined8 FUN_0063ca5c(void)

{
  return 0xffffffff;
}



/* Entry: 0063ca64; end: 0063ca8f;  */

void FUN_0063ca64(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0063cc04();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063ca90; end: 0063cae3; -[SCNShimsPlatform .cxx_destruct] */

void FUN_0063ca90(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bf68;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0063cce8((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063cae4; end: 0063cb97; -[SCNShimsPlatform .cxx_construct] */

undefined8 * FUN_0063cae4(undefined8 *param_1)

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
      func_0x0063ce74();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063cb98; end: 0063cb9f;  */

void FUN_0063cb98(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0063cbdc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 0063cba0; end: 0063cc03;  */

void FUN_0063cba0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x0063cbdc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 0063cc04; end: 0063cc77;  */

void FUN_0063cc04(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a0bf68;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x0063ce74();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_0063cc78);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063cec8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063cc78; end: 0063cce7;  */

void FUN_0063cc78(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___SCNShimsPlatform_00ac3688;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0063ce74();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_0063cce8(&uStack_30);
  return;
}



/* Entry: 0063cce8; end: 0063cd7b;  */

long FUN_0063cce8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063cd7c; end: 0063ce0f;  */

long FUN_0063cd7c(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_0053ae4c(param_1,(param_1[1] - *param_1 >> 2) + 1);
  FUN_0053af20(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  FUN_0053ae8c(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_0053afa8(auStack_48);
  return lVar2;
}



/* Entry: 0063ce10; end: 0063cedb;  */

void FUN_0063ce10(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0063cedc; end: 0063cf3f;  */

ulong FUN_0063cedc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0077f2e0(param_1);
  uVar2 = param_1;
  func_0x00789440(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 0063cf40; end: 0063cfa3;  */

ulong FUN_0063cf40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00781ca0(param_1);
  uVar2 = param_1;
  func_0x007899a0(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 0063cfa4; end: 0063d153;  */

void FUN_0063cfa4(undefined8 *param_1,undefined8 param_2,uint param_3)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00787220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0063d154();
  uVar3 = param_2;
  uVar11 = param_3;
  func_0x007839c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_0063d154();
  uVar5 = param_2;
  uVar12 = uVar11;
  func_0x00783140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_0063d154();
  uVar7 = param_2;
  uVar13 = uVar12;
  func_0x0077f6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_0063d154();
  uVar9 = param_2;
  uVar14 = uVar13;
  func_0x007845e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  FUN_0063d154();
  *param_1 = uVar2;
  *(uint *)(param_1 + 1) = param_3 & 0xff;
  *(undefined8 *)((long)param_1 + 0xc) = uVar4;
  *(uint *)((long)param_1 + 0x14) = uVar11 & 0xff;
  param_1[3] = uVar6;
  *(uint *)(param_1 + 4) = uVar12 & 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = uVar8;
  *(uint *)((long)param_1 + 0x2c) = uVar13 & 0xff;
  param_1[6] = uVar10;
  *(uint *)(param_1 + 7) = uVar14 & 0xff;
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 0063d154; end: 0063d1bf;  */

undefined1  [16] FUN_0063d154(ulong param_1)

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
    FUN_0063cf40(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_0063d1c0();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 0063d1c0; end: 0063d1c7;  */

void FUN_0063d1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0063d1c8; end: 0063d23f; -[SCNShimsSystemScope initWithCpp:] */

undefined1 * FUN_0063d1c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_00ac4588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063d6c0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0063d694(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063d240; end: 0063d3c7; +[SCNShimsSystemScope produce:platformParameters:mapping:threadCount:] */

void FUN_0063d240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int extraout_w10;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_68;
  undefined **appuStack_60 [2];
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_0063b5b4(appuStack_60,param_3);
  uVar1 = param_4;
  FUN_0063cedc();
  uStack_68 = uVar1;
  FUN_0063cfa4(&lStack_a8,param_5);
  FUN_0063f3d4(&lStack_50,appuStack_60,&uStack_68,&lStack_a8,param_6);
  FUN_0063b7cc(appuStack_60);
  if (lStack_50 == 0) {
    param_6 = 0;
  }
  else {
    appuStack_60[0] = &PTR_DAT_00a0bf78;
    lStack_a8 = lStack_50;
    lStack_a0 = lStack_48;
    if (lStack_48 != 0) {
      do {
        FUN_0063d6c0();
      } while (extraout_w10 != 0);
    }
    FUN_00718534(appuStack_60,&lStack_a8,FUN_0063d628);
    _objc_retainAutoreleasedReturnValue();
    func_0x0063d6fc();
  }
  FUN_0063d694(&lStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_6);
  return;
}



/* Entry: 0063d3c8; end: 0063d477; -[SCNShimsSystemScope dispose] */

void FUN_0063d3c8(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0063b488(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063d6d0();
  func_0x0063b6c4();
  func_0x0063b6c4(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063d478; end: 0063d503; -[SCNShimsSystemScope getLoggerScope] */

void FUN_0063d478(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_0063b604(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063d6d0();
  FUN_0063b7cc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063d504; end: 0063d58f; -[SCNShimsSystemScope getPlatform] */

void FUN_0063d504(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  FUN_0063ca64(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063d6d0();
  FUN_0063cce8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}


