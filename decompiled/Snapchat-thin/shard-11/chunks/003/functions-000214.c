/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084105e0; end: 108410673;  */

uint FUN_1084105e0(ulong *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar4 = 0xffffffff;
  if (param_1 == (ulong *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == (ushort *)0x0) {
    return 0xffffffff;
  }
  puVar5 = (ushort *)*param_1;
  puVar3 = param_2;
  if (puVar5 == (ushort *)0x0) goto LAB_108410660;
  puVar3 = puVar5 + 1;
  if (puVar3 <= param_2 && ((ulong)puVar5 & 1) == 0) {
    uVar2 = *puVar5;
    uVar4 = (uint)uVar2;
    uVar1 = uVar2 & 0xfc00;
    if (uVar1 != 0xdc00) {
      if (uVar1 != 0xd800) goto LAB_108410660;
      if ((puVar5 + 2 <= param_2) && ((*puVar3 & 0xfc00) == 0xdc00)) {
        uVar4 = (uint)*puVar3 + (uint)uVar2 * 0x400 + 0xfca02400;
        puVar3 = puVar5 + 2;
        goto LAB_108410660;
      }
    }
  }
  uVar4 = 0xffffffff;
  puVar3 = param_2;
LAB_108410660:
  *param_1 = (ulong)puVar3;
  return uVar4;
}



/* Entry: 108410674; end: 10841071b;  */

long FUN_108410674(ulong param_1,undefined1 *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte abStack_4 [4];
  
  if (((uint)(param_1 >> 0x10) & 0xffff) < 0x11) {
    if ((uint)param_1 < 0x80) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = (char)param_1;
      }
      lVar2 = 1;
    }
    else {
      lVar3 = 0;
      while( true ) {
        if ((int)(uint)param_1 <= (int)(0x7fU >> (ulong)((int)lVar3 + 1U & 0x1f))) break;
        abStack_4[lVar3] = (byte)param_1 & 0x3f | 0x80;
        param_1 = (ulong)((uint)param_1 >> 6);
        lVar3 = lVar3 + 1;
      }
      lVar2 = lVar3 + 1;
      if (param_2 != (undefined1 *)0x0) {
        pbVar5 = abStack_4;
        pbVar1 = pbVar5 + lVar3;
        pbVar4 = param_2 + lVar3;
        for (; pbVar5 < pbVar1; pbVar5 = pbVar5 + 1) {
          *pbVar4 = *pbVar5;
          pbVar4 = pbVar4 + -1;
        }
        *pbVar4 = (byte)(-0x100 >> ((uint)lVar2 & 0x1f)) | (byte)param_1;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 10841071c; end: 10841076b;  */

undefined8 FUN_10841071c(ulong param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  if (0x10 < ((uint)(param_1 >> 0x10) & 0xffff)) {
    return 0;
  }
  if (param_2 != (ushort *)0x0) {
    if ((uint)param_1 < 0x10000) {
      *param_2 = (ushort)param_1;
    }
    else {
      *param_2 = (short)((uint)param_1 >> 10) + 0xd7c0;
      param_2[1] = (ushort)param_1 & 0x3ff | 0xdc00;
    }
  }
  uVar1 = 1;
  if ((param_1 & 0xffff0000) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10841076c; end: 1084107a3;  */

void FUN_10841076c(undefined8 param_1)

{
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,param_1,&stack0x00000000);
  return;
}



/* Entry: 1084107a4; end: 1084107e7;  */

undefined8 FUN_1084107a4(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    _free();
    param_1 = 0;
  }
  else {
    _realloc();
    FUN_1084107ec(param_2,param_1);
  }
  return param_1;
}



/* Entry: 1084107e8; end: 1084107eb;  */

void FUN_1084107e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 1084107ec; end: 108410807;  */

ulong FUN_1084107ec(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    _abort();
    uVar1 = param_1;
    if ((param_2 & 1) == 0) {
      _malloc();
    }
    else {
      _calloc();
    }
    if (((uint)param_2 >> 1 & 1) != 0) {
      FUN_1084107ec(param_1,uVar1);
    }
    return uVar1;
  }
  return param_2;
}



/* Entry: 108410808; end: 10841085b;  */

undefined8 FUN_108410808(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  if ((param_2 & 1) == 0) {
    _malloc();
  }
  else {
    _calloc(param_1,1);
  }
  if ((param_2 >> 1 & 1) != 0) {
    FUN_1084107ec(param_1,uVar1);
  }
  return uVar1;
}



/* Entry: 10841085c; end: 108410913;  */

void FUN_10841085c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a480c8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108410914);
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
    FUN_108410cf4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108410914; end: 108410a07;  */

void FUN_108410914(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110a48108;
  puVar4[3] = &PTR_DAT_110a48190;
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
  func_0x000108410d30();
  puVar4[3] = &PTR_FUN_110a48158;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108410cf4(&uStack_50);
  return;
}



/* Entry: 108410a08; end: 108410a0b;  */

void FUN_108410a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a48108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108410a0c; end: 108410a1f;  */

void FUN_108410a0c(void)

{
  FUN_108410ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108410a20; end: 108410a2b;  */

long FUN_108410a20(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a480c8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000108410d44();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108410a2c; end: 108410a6b;  */

void FUN_108410a2c(void)

{
  func_0x000108410d38();
  return;
}



/* Entry: 108410a6c; end: 108410b4b;  */

void FUN_108410a6c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b981730(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000108410d28();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010c0fe320(param_1,lVar2);
  }
  func_0x000108410d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108410b4c; end: 108410bdf;  */

void FUN_108410b4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108410d44();
  func_0x00010b9813b8(param_1,uVar2);
  func_0x000108410d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108410be0; end: 108410c53;  */

undefined8 FUN_108410be0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010b98101c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98640(uVar2);
  func_0x000108410d28();
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 108410c54; end: 108410ce3;  */

long FUN_108410c54(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a480c8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000108410d44();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108410ce4; end: 108410cf3;  */

void FUN_108410ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a48108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108410cf4; end: 108410d1f;  */

long FUN_108410cf4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108410d20; end: 108410d4b;  */

void FUN_108410d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108410d4c; end: 108410dcb; -[SCNValdiRuntimeMessageHandlerCppProxy initWithCpp:] */

undefined1 * FUN_108410d4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fc738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    func_0x000108411128(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 108410dcc; end: 108410ec7; -[SCNValdiRuntimeMessageHandlerCppProxy onUncaughtJsError:moduleName:errorMessage:stackTrace:] */

void FUN_108410dcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001084111bc();
  func_0x0001084111b0();
  func_0x0001084111a4();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3,auStack_48,auStack_60,auStack_78);
  func_0x000108411154();
  func_0x00010841118c();
  func_0x000108411184();
  func_0x000108411194();
  func_0x00010841119c();
  func_0x00010841115c();
  return;
}



/* Entry: 108410ec8; end: 108410fc3; -[SCNValdiRuntimeMessageHandlerCppProxy onJsCrash:errorMessage:stackTrace:isANR:] */

void FUN_108410ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001084111bc();
  func_0x0001084111b0();
  func_0x0001084111a4();
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48,auStack_60,auStack_78,param_6);
  func_0x000108411154();
  func_0x00010841118c();
  func_0x000108411184();
  func_0x000108411194();
  func_0x00010841119c();
  func_0x00010841115c();
  return;
}



/* Entry: 108410fc4; end: 10841107f; -[SCNValdiRuntimeMessageHandlerCppProxy onDebugMessage:message:] */

void FUN_108410fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_4);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,auStack_48);
  FUN_108411154();
  func_0x00010841115c();
  return;
}



/* Entry: 108411080; end: 1084110db; -[SCNValdiRuntimeMessageHandlerCppProxy .cxx_destruct] */

void FUN_108411080(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a481b8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000108411128((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1084110dc; end: 108411153; -[SCNValdiRuntimeMessageHandlerCppProxy .cxx_construct] */

undefined8 * FUN_1084110dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
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



/* Entry: 108411154; end: 1084111c7;  */

void FUN_108411154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1084111c8; end: 108411387;  */

void FUN_1084111c8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d9508;
  _objc_retain();
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf86ca0(param_1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf34840(param_1);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf348c0(param_1);
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c141a80(param_1);
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_1;
  func_0x00010c081660(param_1);
  func_0x00010c0df6e0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010beffa20();
  uVar8 = param_1;
  func_0x00010c06e940();
  _objc_release(param_1);
  if ((uVar8 & 1) == 0) {
    if (2 < uVar6 - 1) {
      uVar9 = 0;
      goto LAB_10841130c;
    }
    uVar9 = *(undefined8 *)(&UNK_10df2d258 + (uVar6 - 1) * 8);
  }
  else {
    uVar9 = 0xffffffff86df6221;
  }
  func_0x00010b76bb4c(uVar9);
  _objc_retainAutoreleasedReturnValue();
LAB_10841130c:
  func_0x00010c013be0(puVar1,param_2,puVar2,puVar3,puVar4,puVar5,puVar7,uVar9,0,0);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108411388; end: 108411393; -[SCSearchSession initWithUserSession:launchSource:locationProvider:] */

void FUN_108411388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserSession_launchSource_1125f5108,param_3,param_4,7,param_5);
  return;
}



/* Entry: 108411394; end: 10841145b; -[SCSearchSession initWithUserSession:launchSource:pageType:locationProvider:] */

undefined1 *
FUN_108411394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126fc740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10841145c; end: 10841155b; -[SCSearchSession debugInfo] */

void FUN_10841145c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  lVar2 = param_1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed6238);
  _objc_release(lVar2);
  func_0x00010c08bda0();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed6258);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf51c80(uVar4);
  func_0x00010bf51c80(uVar4);
  func_0x00010bf01f00(uVar4);
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ed6278);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10841155c; end: 108411563; -[SCSearchSession sessionId] */

undefined8 FUN_10841155c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108411564; end: 10841156b; -[SCSearchSession userSession] */

undefined8 FUN_108411564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10841156c; end: 108411573; -[SCSearchSession launchSource] */

undefined8 FUN_10841156c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108411574; end: 10841157b; -[SCSearchSession locationProvider] */

undefined8 FUN_108411574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10841157c; end: 1084115b7; -[SCSearchSession .cxx_destruct] */

void FUN_10841157c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084115b8; end: 10841187b; -[SCSearchResultsViewController initWithSearchSession:queryCoordinator:sectionCreator:initialQuery:galleryLogger:currentPageTracker:locationProvider:legacyStoryMediaCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1084115b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fc748;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127748dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127748e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127748e0) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127748e4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127748e8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127748ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127748f0) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127748f4) = 1;
    lVar7 = (long)_DAT_1127748f8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127748fc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c09ea00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) {
      puVar3 = PTR_PTR_1126b1158;
      _objc_alloc();
      puVar6 = puVar3;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03c440();
      uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112774900);
      *(undefined **)((long)puVar1 + (long)_DAT_112774900) = puVar3;
      _objc_release(uVar4);
    }
    else {
      lVar5 = param_6;
      func_0x00010bf51e00();
      puVar6 = *(undefined **)((long)puVar1 + (long)_DAT_112774900);
      *(long *)((long)puVar1 + (long)_DAT_112774900) = lVar5;
    }
    _objc_release(puVar6);
    lVar5 = (long)_DAT_112774904;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10841187c; end: 1084119eb; -[SCSearchResultsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841187c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long *plStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ed7978;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dddc38;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar13);
  _objc_release(puVar1);
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127748e0);
  lVar14 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar12);
  _objc_release(lVar14);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  _objc_release(lVar13);
  puStack_60 = PTR_PTR_1126fc748;
  plVar2 = &lStack_68;
  lStack_68 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1084119ec;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126fc748;
  plStack_108 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&plStack_108,PTR_s_viewDidLoad_112684cd8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110de3ab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de3ab8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112774908;
  uVar12 = *(undefined8 *)((long)plVar2 + lVar14);
  func_0x00010c0d68c0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8640();
  _objc_release(uVar12);
  _objc_release(ppuVar3);
  func_0x00010beaf700(plVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  plVar4 = plVar2;
  func_0x00010c29bf00(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c182b00(plVar2);
  _objc_release(puVar1);
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010bf4dce0(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c29bf00(plVar2);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar2;
  func_0x00010bf4dce0(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(plVar4);
  _objc_release(plVar5);
  _objc_release(plVar4);
  puVar1 = PTR_PTR_1126b56b0;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  plVar4 = plVar2;
  func_0x00010bf4dce0(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar6);
  func_0x00010c1ed580(plVar2);
  _objc_release(puVar6);
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0700();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167a20();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(plVar4);
  puVar6 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar13 = (long)_DAT_112774910;
  uVar12 = *(undefined8 *)((long)plVar2 + lVar13);
  *(undefined **)((long)plVar2 + lVar13) = puVar6;
  _objc_release(uVar12);
  func_0x00010bef9980(*(undefined8 *)((long)plVar2 + lVar13));
  func_0x00010c18b5e0(*(undefined8 *)((long)plVar2 + lVar13));
  func_0x00010c17e720(*(undefined8 *)((long)plVar2 + lVar13));
  lVar15 = (long)_DAT_112774900;
  func_0x00010c1e6360(*(undefined8 *)((long)plVar2 + lVar13));
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  plVar4 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(plVar4);
  plVar4 = plVar2;
  func_0x00010bf4dce0(plVar2);
  _objc_retainAutoreleasedReturnValue();
  plVar5 = plVar2;
  func_0x00010c13cf80(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(plVar4);
  _objc_release(plVar5);
  _objc_release(plVar4);
  uVar7 = *(undefined8 *)((long)plVar2 + lVar14);
  func_0x00010c0d6280(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)((long)plVar2 + lVar15);
  func_0x00010c11da20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(uVar7);
  *(undefined1 *)((long)plVar2 + (long)_DAT_112774914) = 0;
  plVar4 = plVar2;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ed7978;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ed79f8;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(plVar4);
  _objc_release(puVar9);
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ed79b8;
  plVar5 = plVar2;
  func_0x00010c073ce0();
  ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
  if ((int)plVar5 == 0) {
    ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(plVar4);
  _objc_release(puVar9);
  uVar12 = *(undefined8 *)((long)plVar2 + (long)_DAT_1127748e0);
  plVar5 = plVar2;
  _objc_opt_class(plVar2);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  plVar10 = plVar4;
  func_0x00010bf51e00(plVar4);
  func_0x00010bf7dbc0(uVar12);
  _objc_release(plVar10);
  _objc_release(plVar5);
  *(undefined1 *)((long)plVar2 + (long)_DAT_112774918) = 1;
  _objc_release(plVar4);
  _objc_release(puVar6);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_108411f7c;
  puStack_148 = PTR_PTR_1126fc748;
  puStack_150 = puVar9;
  plStack_140 = plVar4;
  puStack_138 = puVar6;
  puStack_130 = puVar1;
  plStack_128 = plVar2;
  ppuStack_120 = &puStack_80;
  _objc_msgSendSuper2(&puStack_150,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beaf700(puVar9);
  uVar8 = *(undefined8 *)(puVar9 + _DAT_112774908);
  func_0x00010c0d6280(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar9 + _DAT_1127748e4);
  func_0x00010bf5fc60(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar8);
  return;
}



/* Entry: 1084119ec; end: 108411f7b; -[SCSearchResultsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084119ec(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fc748;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3ab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110de3ab8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112774908;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0d68c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8640();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  func_0x00010beaf700(param_1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar3);
  func_0x00010c182b00(param_1);
  _objc_release(puVar3);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar10);
  puVar3 = PTR_PTR_1126b56b0;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar5);
  func_0x00010c1ed580(param_1);
  _objc_release(puVar5);
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0700();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167a20();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar10 = (long)_DAT_112774910;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar5;
  _objc_release(uVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar10));
  lVar12 = (long)_DAT_112774900;
  func_0x00010c1e6360(*(undefined8 *)(param_1 + lVar10));
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c178280();
  lVar10 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar10);
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c13cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar10);
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0d6280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c11da20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  *(undefined1 *)(param_1 + _DAT_112774914) = 0;
  lVar10 = param_1;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ed7978;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ed79f8;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar10);
  _objc_release(puVar8);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ed79b8;
  lVar4 = param_1;
  func_0x00010c073ce0();
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
  if ((int)lVar4 == 0) {
    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(lVar10);
  _objc_release(puVar8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127748e0);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf51e00(lVar10);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(lVar11);
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + _DAT_112774918) = 1;
  _objc_release(lVar10);
  _objc_release(puVar5);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_108411f7c;
  puStack_d8 = PTR_PTR_1126fc748;
  puStack_e0 = puVar8;
  lStack_d0 = lVar10;
  puStack_c8 = puVar5;
  puStack_c0 = puVar3;
  lStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beaf700(puVar8);
  uVar7 = *(undefined8 *)(puVar8 + _DAT_112774908);
  func_0x00010c0d6280(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar8 + _DAT_1127748e4);
  func_0x00010bf5fc60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar7);
  return;
}



/* Entry: 108411f7c; end: 10841204f; -[SCSearchResultsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108411f7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fc748;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beaf700(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774908);
  func_0x00010c0d6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127748e4);
  func_0x00010bf5fc60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108412050; end: 1084121bf; -[SCSearchResultsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412050(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fc748;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  func_0x00010beaf700(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127748ec);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar5);
  puVar2 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar2);
  if ((*(char *)(param_1 + _DAT_112774918) == '\x01') &&
     (lVar6 = (long)_DAT_11277491c, *(long *)(param_1 + lVar6) != 0)) {
    *(undefined1 *)(param_1 + _DAT_112774918) = 0;
    func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_112774910));
    uVar3 = *(undefined8 *)(param_1 + _DAT_112774908);
    func_0x00010c0d6280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c11da20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2139c0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 1084121c0; end: 10841227b; -[SCSearchResultsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084121c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf3ace0(*(undefined8 *)(param_1 + (long)_DAT_1127748fc));
  uVar2 = param_1;
  func_0x00010c06d1a0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_112774908);
    func_0x00010c06d1a0();
    if (((param_3 & 1) != 0) || (iVar1 == 0)) goto LAB_108412258;
  }
  else if ((param_3 & 1) != 0) goto LAB_108412258;
  lVar3 = param_1 + (long)_DAT_112774920;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c154120(0);
  _objc_release(lVar3);
LAB_108412258:
  *(undefined1 *)(param_1 + (long)_DAT_112774924) = 0;
  func_0x00010be55a20(param_1);
  return;
}



/* Entry: 10841227c; end: 1084124b3; -[SCSearchResultsViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841227c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fc748;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewWillLayoutSubviews_112526958);
  lVar3 = param_5;
  func_0x00010c13cf80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  lVar7 = (long)_DAT_112774908;
  dVar8 = param_1;
  dVar10 = param_2;
  dVar9 = param_3;
  dVar12 = param_4;
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar7));
  bVar1 = false;
  if ((param_2 == dVar10) && (bVar1 = false, !NAN(param_1) && !NAN(dVar8))) {
    bVar1 = param_1 == dVar8;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_4) && !NAN(dVar12))) {
    bVar2 = param_4 == dVar12;
  }
  if (bVar2) {
    dVar10 = dVar9;
    _objc_release(lVar3);
    if (param_3 == dVar9) {
      return;
    }
  }
  else {
    _objc_release(lVar3);
    dVar10 = dVar9;
  }
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar7));
  uVar11 = 0xc02e000000000000;
  dVar12 = dVar8 + -15.0;
  lVar3 = param_5;
  func_0x00010c13cf80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010c13cf80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar7));
  lVar4 = *(long *)(param_5 + _DAT_112774910);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar7));
  lVar5 = lVar4;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  dVar9 = 10.0;
  dVar13 = 4.0;
  if (lVar6 != 0) {
    dVar13 = 10.0;
  }
  func_0x00010b816218(0x4024000000000000);
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c181f80(dVar12,uVar11,dVar10 + (double)(long)(dVar13 * dVar9) / dVar9,lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  dVar10 = ABS(dVar12 - dVar8);
  dVar9 = dVar10 * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
    bVar1 = dVar10 < dVar9;
  }
  if (!bVar1) {
    lVar3 = param_5;
    func_0x00010c13cf80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(lVar3);
    func_0x00010c13cf80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182300(0,dVar9 - (dVar12 - dVar8));
    _objc_release(param_5);
  }
  return;
}



/* Entry: 1084124b4; end: 10841259f; -[SCSearchResultsViewController _setupRequestManagerContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084124b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_1127748dc);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183600(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193b00();
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar5 = *(long *)(lVar1 + _DAT_112774910);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar5);
  if (lVar6 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 1084125a0; end: 108412677; -[SCSearchResultsViewController _dismissIfEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084125a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c153720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193b00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + _DAT_112774910);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 108412678; end: 1084126df; -[SCSearchResultsViewController _sendSearchRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127748e4);
  func_0x00010bf2d060(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_1127748f4) = 1;
    func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_112774910),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084126e0; end: 10841271b; -[SCSearchResultsViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1084126e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_1127748dc);
  func_0x00010c08bda0();
  uVar1 = 0x108;
  if (lVar3 != 1) {
    uVar1 = 0xfb;
  }
  uVar2 = 0x107;
  if (lVar3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10841271c; end: 108412723; -[SCSearchResultsViewController shouldPopToRootViewController] */

undefined8 FUN_10841271c(void)

{
  return 1;
}



/* Entry: 108412724; end: 10841272b; -[SCSearchResultsViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_108412724(void)

{
  return 1;
}



/* Entry: 10841272c; end: 108412733; -[SCSearchResultsViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_10841272c(void)

{
  return 1;
}



/* Entry: 108412734; end: 10841273b; -[SCSearchResultsViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_108412734(void)

{
  return 1;
}



/* Entry: 10841273c; end: 108412787; -[SCSearchResultsViewController viewControllerDismissSelf] */

void FUN_10841273c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf84b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be034d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSearchResultsViewControl_11255e6d0,2)
  ;
  return;
}



/* Entry: 108412788; end: 10841291f; -[SCSearchResultsViewController searchControllerShouldReturnWithSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108412788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127748f8);
  func_0x00010c09ea00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bea01c0(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = 0;
  func_0x000107c312b8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108412920;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x000107c27d8c(uVar4,&puStack_80);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108412920; end: 10841294b;  */

void FUN_108412920(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10841294c; end: 108412ad7; -[SCSearchResultsViewController searchControllerDidChangeToText:byChangingCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10841294c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_6);
  ppuVar7 = &PTR____CFConstantStringClassReference_110ed7618;
  _objc_retain(&PTR____CFConstantStringClassReference_110ed7618);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar7 = &PTR_PTR_110a481c8;
  }
  else {
    lVar1 = param_6;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      ppuVar7 = &PTR_PTR_110a481e0;
    }
    else {
      lVar1 = param_6;
      func_0x00010c25d0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 != 0) goto LAB_108412a0c;
      ppuVar7 = &PTR_PTR_110a481e8;
    }
  }
  ppuVar7 = (undefined **)*ppuVar7;
  _objc_retain(ppuVar7);
  _objc_release(&PTR____CFConstantStringClassReference_110ed7618);
LAB_108412a0c:
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127748f8);
  func_0x00010c09ea00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar3,param_2,ppuVar7,param_3,puVar5,uVar6,0);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be2ce00(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108412ad8; end: 108412b47; -[SCSearchResultsViewController _canDismissResultsViewController] */

bool FUN_108412ad8(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x00010c13cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010c13cf80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  return 0.0 <= param_2 + param_1;
}



/* Entry: 108412b48; end: 108412b4f; -[SCSearchResultsViewController visibleSectionHeaderViewForTransitionAnimation] */

undefined8 FUN_108412b48(void)

{
  return 0;
}



/* Entry: 108412b50; end: 108412c07; -[SCSearchResultsViewController searchControllerDidTapClearButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412b50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127748e0);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110ed76d8,param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108412c08; end: 108412c4f; -[SCSearchResultsViewController didTapCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412c08(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112774924) = 1;
  lVar1 = param_1;
  func_0x00010bdd9a40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be034d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__dismissSearchResultsViewControl_11255e6d0,0);
    return;
  }
  return;
}



/* Entry: 108412c50; end: 108412cbf; -[SCSearchResultsViewController updateOverscrollPercent:] */

void FUN_108412c50(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf4c7c0(param_5);
  dVar1 = param_1;
  _objc_release(param_5);
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar2 = NEON_fminnm((param_2 + param_1) / dVar1,0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010c1d7ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,param_3,PTR_s_setOverscrollPercent__1126538d0);
  return;
}



/* Entry: 108412cc0; end: 108412d33; -[SCSearchResultsViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412cc0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  _objc_retain(param_5);
  func_0x00010bed4f60(param_3,param_4,param_5);
  func_0x00010bdfeae0(param_3,param_4,param_5);
  func_0x00010bf4cdc0(param_5);
  _objc_release(param_5);
  dVar1 = *(double *)(param_3 + _DAT_112774928);
  if (dVar1 <= param_2) {
    dVar1 = param_2;
  }
  *(double *)(param_3 + _DAT_112774928) = dVar1;
  return;
}



/* Entry: 108412d34; end: 108412d37; -[SCSearchResultsViewController scrollViewWillBeginDecelerating:] */

void FUN_108412d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didEndOverscrollWithScrollView__11255cf98);
  return;
}



/* Entry: 108412d38; end: 108412e8b; -[SCSearchResultsViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412d38(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  *(undefined1 *)(param_3 + _DAT_112774914) = 1;
  _objc_retain(param_5);
  func_0x00010be01ce0(param_3);
  func_0x00010bdfc480(param_3,param_4,param_5);
  func_0x00010bf4cdc0(param_5);
  dVar6 = param_2;
  func_0x00010bf4c7c0(param_5);
  uVar1 = param_5;
  func_0x00010c0f36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0f36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(uVar1,param_4,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((param_2 + param_1 <= 0.0) && (0.0 < dVar6)) {
    return;
  }
  func_0x00010c153720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193b00();
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108412e8c; end: 108412ffb; -[SCSearchResultsViewController _didOverscrollWithScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412e8c(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  if (*(char *)(param_3 + (long)_DAT_11277492c) == '\x01') {
    func_0x00010bf4cdc0(param_5);
    func_0x00010bf4c7c0(param_5);
    param_2 = param_2 + param_1;
    dVar4 = 100.0;
    if ((100.0 <= param_2) || (uVar1 = param_3, func_0x00010c06d1a0(), (uVar1 & 1) != 0)) {
      lVar2 = *(long *)(param_3 + (long)_DAT_112774908);
      func_0x00010c0d68c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cb720(0,0xc000000000000000);
    }
    else {
      func_0x00010c0f0660(param_3);
      dVar5 = dVar4;
      func_0x00010c2883a0(param_3,param_4,param_5);
      func_0x00010c0f0660(param_3);
      dVar6 = 0.0;
      if (dVar5 <= 0.0) {
        dVar6 = dVar5;
      }
      if ((0.0 <= dVar6) && (0.0 <= dVar4)) goto LAB_108412f28;
      dVar4 = 0.0;
      if (param_2 <= 0.0) {
        dVar4 = param_2;
      }
      dVar5 = -dVar4;
      if (0.0 <= dVar4) {
        dVar5 = dVar4;
      }
      uVar3 = *(undefined8 *)(param_3 + (long)_DAT_112774908);
      func_0x00010c0d68c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cb720(0,dVar5 * 0.5 + dVar6 * -12.0 + -2.0);
      _objc_release(uVar3);
      lVar2 = param_3 + (long)_DAT_112774920;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c154120(param_2);
    }
    _objc_release(lVar2);
  }
LAB_108412f28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108412ffc; end: 1084130e7; -[SCSearchResultsViewController _didBeginOverscrollWithScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108412ffc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (*(char *)(param_3 + _DAT_11277492c) == '\x01') {
    _objc_retain(param_5);
    func_0x00010bf4cdc0(param_5);
    dVar4 = param_2;
    func_0x00010bf4c7c0(param_5);
    uVar1 = param_5;
    func_0x00010c0f36c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0f36c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    uVar3 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(uVar1,param_4,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    *(bool *)(param_3 + _DAT_112774930) = 0.0 <= dVar4 && param_2 + param_1 <= 0.0;
  }
  return;
}



/* Entry: 1084130e8; end: 1084132af; -[SCSearchResultsViewController _didEndOverscrollWithScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084130e8(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  )

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  if (*(char *)(param_3 + (long)_DAT_11277492c) == '\x01') {
    func_0x00010bf4cdc0(param_5);
    dVar5 = param_2;
    func_0x00010bf4c7c0(param_5);
    param_2 = param_2 + param_1;
    func_0x00010bf4cdc0(param_5);
    lVar4 = (long)_DAT_112774930;
    bVar1 = false;
    if ((*(char *)(param_3 + lVar4) == '\x01') && (bVar1 = false, !NAN(param_2))) {
      bVar1 = param_2 < -60.0;
    }
    if ((bVar1) && (uVar2 = param_3, func_0x00010c06d1a0(), (uVar2 & 1) == 0)) {
      func_0x00010c1f7b20(param_5);
      func_0x00010c182300(param_1,dVar5,param_5);
      func_0x00010c2883a0(param_3);
      uVar2 = param_3;
      func_0x00010c27a740();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        _objc_initWeak(auStack_68,param_3);
        _objc_copyWeak(auStack_78,auStack_68);
        uVar2 = param_3;
        dStack_70 = param_2;
        func_0x00010c27a740(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ae340();
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_68);
      }
      func_0x00010be034c0(param_3);
    }
    *(undefined1 *)(param_3 + lVar4) = 0;
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1084132b0; end: 1084133b7;  */

void FUN_1084132b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c154120(*(undefined8 *)(param_1 + 0x28),lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3feccccccccccccd,0,puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1084133b8; end: 1084133e3;  */

void FUN_1084133b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcaec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084133e4; end: 1084134a7; -[SCSearchResultsViewController _animateOverscroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084133e4(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277490c;
  func_0x00010bf4c7c0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010c1822e0(0,-param_1,*(undefined8 *)(param_2 + lVar2));
  func_0x00010c2883a0(param_2,param_3,*(undefined8 *)(param_2 + lVar2));
  uVar1 = *(undefined8 *)(param_2 + _DAT_112774908);
  func_0x00010c0d68c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb720(0,0xc000000000000000);
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar2);
  param_2 = param_2 + _DAT_112774920;
  _objc_loadWeakRetained(param_2);
  func_0x00010c154120(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084134a8; end: 10841359b; -[SCSearchResultsViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_1084134a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fc748;
  uStack_40 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&uStack_40,PTR_s_viewWillTransitionToSize_withTra_112685490,
                      param_5);
  _objc_initWeak(auStack_48,param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf02c20(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 10841359c; end: 1084135c7;  */

void FUN_10841359c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084135c8; end: 1084135cb; -[SCSearchResultsViewController _updateForRotationTransitions] */

void FUN_1084135c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateResultCollectionViewL_11256d020);
  return;
}



/* Entry: 1084135cc; end: 1084135db; -[SCSearchResultsViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084135cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127748e0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1084135dc; end: 1084135eb; -[SCSearchResultsViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084135dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127748e0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1084135ec; end: 1084135f7; +[SCSearchResultsViewController announcerIdentifier] */

undefined ** FUN_1084135ec(void)

{
  return &PTR____CFConstantStringClassReference_110ed6298;
}



/* Entry: 1084135f8; end: 108413733; -[SCSearchResultsViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084135f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f16818);
  if ((int)uVar4 == 0) {
    lVar2 = param_1;
    func_0x00010be0d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127748e0);
    lVar3 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010bf7dbc0(uVar4,param_2,param_3,param_4,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_1;
    func_0x00010c153720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d6280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c154720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193b00();
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010be01ce0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108413734; end: 108413aa7; -[SCSearchResultsViewController _extraLoggingDataFromBasicSearchViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413734(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar12 = (long)_DAT_1127748dc;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c15ffa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110ed7798);
  _objc_release(uVar3);
  lVar13 = (long)_DAT_112774910;
  ppuVar4 = *(undefined ***)(param_1 + lVar13);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110f8a678);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf940,
                      &PTR____CFConstantStringClassReference_110ed77f8);
  func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf958,
                      &PTR____CFConstantStringClassReference_110ed77d8);
  func_0x00010c1d0640(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8,
                      &PTR____CFConstantStringClassReference_110dae878);
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c11da20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ed62b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar10,&PTR____CFConstantStringClassReference_110ed7938);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar11 = *(undefined8 *)(param_1 + _DAT_1127748f8);
  func_0x00010c09ea00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b6598;
  func_0x00010bf51c80();
  func_0x00010bf33ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6400();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04e18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar10,&PTR____CFConstantStringClassReference_110ed77b8);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_112774914));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar10,&PTR____CFConstantStringClassReference_110ed7918);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar12 = *(long *)(param_1 + lVar12);
  func_0x00010c08bda0();
  uVar3 = 0x21;
  if (lVar12 != 0) {
    uVar3 = 0x1c;
  }
  func_0x00010c0df780(puVar10,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar10,&PTR____CFConstantStringClassReference_110dae8d8);
  _objc_release(puVar10);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108413aa8; end: 108413aaf; -[SCSearchResultsViewController searchModalPresenterPresentViewController:animated:] */

void FUN_108413aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,0);
  return;
}



/* Entry: 108413ab0; end: 108413abb; -[SCSearchResultsViewController searchModalPresenterDismissViewController:animated:] */

void FUN_108413ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_4,0);
  return;
}



/* Entry: 108413abc; end: 108413b6b; -[SCSearchResultsViewController performSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112774908);
  _objc_retain(param_3);
  func_0x00010c0d6280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2139c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010be2ce00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108413b6c; end: 108413b97; -[SCSearchResultsViewController searchQueryResultControllerDidDelayReloadFreshResult:] */

void FUN_108413b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf5fcc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beda410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateLastLoadingStartTimeWithR_1125942a8,param_3);
  return;
}



/* Entry: 108413b98; end: 108413ba7; -[SCSearchResultsViewController searchQueryResultControllerShouldReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108413b98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127748f4);
}



/* Entry: 108413ba8; end: 108413bdb; -[SCSearchResultsViewController searchQueryResultControllerDidUpdateQueryResult:] */

void FUN_108413ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf5fcc0(param_3);
  func_0x00010beda400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be2f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleResultsCollectionViewUpda_1125696d8);
  return;
}



/* Entry: 108413bdc; end: 108413cc3; -[SCSearchResultsViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413bdc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == param_7) {
    _objc_release(param_7);
    _objc_release(param_6);
  }
  else {
    if (param_7 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_6;
      func_0x00010c071ae0(param_6,param_4,param_7);
      _objc_release(param_7);
      _objc_release(param_6);
      if ((uVar1 & 1) != 0) goto LAB_108413c9c;
    }
    lVar2 = (long)_DAT_11277490c;
    func_0x00010bf4c7c0(*(undefined8 *)(param_3 + lVar2));
    func_0x00010c182300(-param_2,-param_1,*(undefined8 *)(param_3 + lVar2),param_4,0);
  }
LAB_108413c9c:
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108413cc4; end: 108413cc7; -[SCSearchResultsViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_108413cc4(void)

{
  return;
}



/* Entry: 108413cc8; end: 108413d6f; -[SCSearchResultsViewController _logMaxScrollHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413cc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_d3;
  
  lVar1 = param_1;
  func_0x00010c13cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar1);
  if (in_d3 != 0.0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112774904);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = *(double *)(param_1 + _DAT_112774928);
    dVar4 = -dVar3;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    func_0x00010c1f8620(dVar4 / in_d3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108413d70; end: 108413d9b; -[SCSearchResultsViewController _handleNewQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413d70(long param_1)

{
  func_0x00010bea01c0();
  *(undefined1 *)(param_1 + _DAT_112774914) = 0;
  return;
}



/* Entry: 108413d9c; end: 108413ea7; -[SCSearchResultsViewController _disableLoadRefreshContentIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413d9c(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112774910;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010bf5fcc0();
  if (lVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if (((int)uVar4 == 0) || (*(long *)(param_2 + _DAT_112774934) == 0)) {
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (2.0 < param_1) {
      *(undefined1 *)(param_2 + _DAT_1127748f4) = 0;
    }
  }
  return;
}



/* Entry: 108413ea8; end: 108413ee3; -[SCSearchResultsViewController _invalidateResultCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413ea8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277490c);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108413ee4; end: 108413f4b; -[SCSearchResultsViewController _updateCellLayoutIfNeededWithScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413ee4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277490c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108413f4c; end: 108413fa7; -[SCSearchResultsViewController _resetCollectionViewResetContentOffsetAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413f4c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277490c);
  func_0x00010c13cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c182300(0,-param_1,uVar1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108413fa8; end: 108413fb7; -[SCSearchResultsViewController _handleResultsCollectionViewUpdateCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateCellLayoutIfNeededWithScr_112592d80,
             *(undefined8 *)(param_1 + _DAT_11277490c));
  return;
}



/* Entry: 108413fb8; end: 10841401f; -[SCSearchResultsViewController _updateLastLoadingStartTimeWithResultState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108413fb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112774934;
  lVar1 = *(long *)(param_1 + lVar3);
  if (param_3 == 2) {
    if (lVar1 != 0) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar3);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  *(undefined **)(param_1 + lVar3) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108414020; end: 10841406f; -[SCSearchResultsViewController _dismissSearchResultsViewControllerWithDismissAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414020(long param_1)

{
  func_0x00010be526a0();
  param_1 = param_1 + _DAT_112774920;
  _objc_loadWeakRetained(param_1);
  func_0x00010c154100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108414070; end: 1084141bb; -[SCSearchResultsViewController _logDismissEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414070(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf970;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010be0d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127748e0);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110ed76d8,param_1,puVar2)
  ;
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar5 = *(undefined8 *)(puVar2 + _DAT_1127748e0);
  _objc_opt_class(puVar2);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110ed76d8,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084141bc; end: 108414273; -[SCSearchResultsViewController _announceSearchBarReturnAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084141bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be0d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127748e0);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110ed76d8,param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108414274; end: 108414283; -[SCSearchResultsViewController searchContentViewControllerContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108414274(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774908);
}



/* Entry: 108414284; end: 1084142c3; -[SCSearchResultsViewController setSearchContentViewControllerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774908;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084142c4; end: 1084142e3; -[SCSearchResultsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084142c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112774920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


