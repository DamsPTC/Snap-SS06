/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10595e9e8; end: 10595e9fb;  */

long FUN_10595e9e8(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1d88;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10595e9fc; end: 10595ea2b;  */

void FUN_10595e9fc(void)

{
  _objc_alloc(PTR_PTR_1126c0838);
  func_0x00010c03d860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595ea2c; end: 10595eae3;  */

void FUN_10595ea2c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1108c1ea0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10595eae4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10595ed1c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10595eae4; end: 10595ebe3;  */

void FUN_10595eae4(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_1108c1ee0;
  puVar4[3] = &PTR_DAT_1108c1f58;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
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
  puVar4[3] = &PTR_FUN_1108c1f30;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10595ed1c(&uStack_50);
  return;
}



/* Entry: 10595ebe4; end: 10595ebe7;  */

void FUN_10595ebe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c1ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595ebe8; end: 10595ebfb;  */

void FUN_10595ebe8(void)

{
  FUN_10595ed0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595ebfc; end: 10595ec07;  */

long FUN_10595ebfc(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1ea0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10595ec08; end: 10595ec77;  */

void FUN_10595ec08(void)

{
  FUN_10595ed48();
  return;
}



/* Entry: 10595ec78; end: 10595ed0b;  */

long FUN_10595ec78(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1ea0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10595ed0c; end: 10595ed1b;  */

void FUN_10595ed0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c1ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595ed1c; end: 10595ed47;  */

long FUN_10595ed1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595ed48; end: 10595ed53;  */

long FUN_10595ed48(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1ea0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10595ed54; end: 10595ed6f;  */

void FUN_10595ed54(void)

{
  _objc_alloc_init(PTR_PTR_1126c0840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595ed70; end: 10595ede7; -[SCNNotificationsTokenRegistrar initWithCpp:] */

undefined1 * FUN_10595ed70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126eb120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10595f2a0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010595f278(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10595ede8; end: 10595f077; +[SCNNotificationsTokenRegistrar create:queue:deviceTokenFetcher:encryptionInfoFetcher:appEventSubscriptionManager:authContextDelegate:] */

void FUN_10595ede8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined **appuStack_148 [2];
  long lStack_138;
  long lStack_130;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  FUN_10595f2d0(&lStack_138,param_3);
  func_0x00010049e05c(appuStack_148,param_4);
  FUN_10595a200(auStack_158,param_5);
  FUN_10595a9ec(auStack_168,param_6);
  FUN_105959efc(auStack_178,param_7);
  func_0x000100459fd0(auStack_188,param_8);
  FUN_105981044(&lStack_70,&lStack_138,appuStack_148,auStack_158,auStack_168,auStack_178,auStack_188
               );
  func_0x00010048b850(auStack_188);
  func_0x0001059598c0(auStack_178);
  func_0x00010595f250(auStack_168);
  func_0x00010595f228(auStack_158);
  func_0x000100554470(appuStack_148);
  func_0x00010595f16c(&lStack_138);
  if (lStack_70 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_148[0] = &PTR_DAT_1108c1f70;
    lStack_138 = lStack_70;
    lStack_130 = lStack_68;
    if (lStack_68 != 0) {
      do {
        FUN_10595f2a0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_148;
    func_0x00010015c218(pppuVar1,&lStack_138,FUN_10595f1b4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_138);
  }
  func_0x00010595f278(&lStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10595f078; end: 10595f0d7; -[SCNNotificationsTokenRegistrar dispose] */

void FUN_10595f078(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10595f0d8; end: 10595f12b; -[SCNNotificationsTokenRegistrar .cxx_destruct] */

void FUN_10595f0d8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1f70;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010595f278((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10595f12c; end: 10595f1b3; -[SCNNotificationsTokenRegistrar .cxx_construct] */

undefined8 * FUN_10595f12c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10595f2a0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10595f1b4; end: 10595f227;  */

void FUN_10595f1b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c0848;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10595f2a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010595f278(&uStack_30);
  return;
}



/* Entry: 10595f228; end: 10595f29f;  */

long FUN_10595f228(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595f2a0; end: 10595f2cf;  */

void FUN_10595f2a0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10595f2d0; end: 10595f5ef;  */

void FUN_10595f2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [48];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008fef48(&uStack_80);
  uVar2 = param_2;
  func_0x00010c2912a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_98);
  uVar3 = param_2;
  func_0x00010bf70720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_b8);
  uVar4 = param_2;
  func_0x00010bf24a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_d8);
  uVar5 = param_2;
  func_0x00010c0ccce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_f8);
  uVar6 = param_2;
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008ff4a8(auStack_128);
  uVar7 = param_2;
  func_0x00010c23e560();
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[2] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  param_1[4] = uStack_90;
  param_1[3] = uStack_98;
  param_1[5] = uStack_88;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (cStack_a0 == '\x01') {
    param_1[7] = uStack_b0;
    param_1[6] = uStack_b8;
    param_1[8] = uStack_a8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (cStack_c0 == '\x01') {
    param_1[0xb] = uStack_d0;
    param_1[10] = uStack_d8;
    param_1[0xc] = uStack_c8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (cStack_e0 == '\x01') {
    param_1[0xf] = uStack_f0;
    param_1[0xe] = uStack_f8;
    param_1[0x10] = uStack_e8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  func_0x000100900140(param_1 + 0x12,auStack_128);
  *(char *)(param_1 + 0x18) = (char)uVar7;
  func_0x0001009001f4(auStack_128);
  _objc_release(uVar6);
  func_0x0001001148fc(&uStack_f8);
  _objc_release(uVar5);
  func_0x0001001148fc(&uStack_d8);
  _objc_release(uVar4);
  func_0x0001001148fc(&uStack_b8);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  _objc_release(uVar2);
  func_0x000100100fec(&uStack_80);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10595f5f0; end: 10595f637;  */

void FUN_10595f5f0(long param_1,long param_2)

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



/* Entry: 10595f638; end: 10595f657;  */

void FUN_10595f638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10595f658; end: 10595f70f;  */

void FUN_10595f658(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1108c1fd8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10595f710);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10595f990(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10595f710; end: 10595f80f;  */

void FUN_10595f710(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_1108c2018;
  puVar4[3] = &PTR_DAT_1108c2098;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
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
  puVar4[3] = &PTR_FUN_1108c2068;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10595f990(&uStack_50);
  return;
}



/* Entry: 10595f810; end: 10595f813;  */

void FUN_10595f810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595f814; end: 10595f827;  */

void FUN_10595f814(void)

{
  FUN_10595f980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595f828; end: 10595f833;  */

long FUN_10595f828(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1fd8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10595f834; end: 10595f873;  */

void FUN_10595f834(void)

{
  func_0x00010595f9c8();
  return;
}



/* Entry: 10595f874; end: 10595f8eb;  */

void FUN_10595f874(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10595f8ec; end: 10595f97f;  */

long FUN_10595f8ec(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1fd8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10595f980; end: 10595f98f;  */

void FUN_10595f980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595f990; end: 10595f9bb;  */

long FUN_10595f990(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595f9bc; end: 10595f9d3;  */

void FUN_10595f9bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10595f9d4; end: 10595fb2f; -[SCNNotificationsAckConfig initWithUserAgentPrefix:sessionId:deviceId:deviceToken:ackDisplayedNotifications:ackSuppressedNotifications:] */

undefined1 *
FUN_10595f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb128;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10595fbe4(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10595fbe4(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10595fbe4(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_10595fbe4(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10595fb30; end: 10595fb47; -[SCNNotificationsAckConfig initWithUserAgentPrefix:ackDisplayedNotifications:ackSuppressedNotifications:] */

void FUN_10595fb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserAgentPrefix_sessionI_1125f4420,param_3,0,0,0,param_4,param_5)
  ;
  return;
}



/* Entry: 10595fb48; end: 10595fb4f; -[SCNNotificationsAckConfig userAgentPrefix] */

undefined8 FUN_10595fb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10595fb50; end: 10595fb57; -[SCNNotificationsAckConfig setUserAgentPrefix:] */

void FUN_10595fb50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fb58; end: 10595fb5f; -[SCNNotificationsAckConfig sessionId] */

undefined8 FUN_10595fb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10595fb60; end: 10595fb67; -[SCNNotificationsAckConfig setSessionId:] */

void FUN_10595fb60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fb68; end: 10595fb6f; -[SCNNotificationsAckConfig deviceId] */

undefined8 FUN_10595fb68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10595fb70; end: 10595fb77; -[SCNNotificationsAckConfig setDeviceId:] */

void FUN_10595fb70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fb78; end: 10595fb7f; -[SCNNotificationsAckConfig deviceToken] */

undefined8 FUN_10595fb78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10595fb80; end: 10595fb87; -[SCNNotificationsAckConfig setDeviceToken:] */

void FUN_10595fb80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fb88; end: 10595fb8f; -[SCNNotificationsAckConfig ackDisplayedNotifications] */

undefined1 FUN_10595fb88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10595fb90; end: 10595fb97; -[SCNNotificationsAckConfig setAckDisplayedNotifications:] */

void FUN_10595fb90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10595fb98; end: 10595fb9f; -[SCNNotificationsAckConfig ackSuppressedNotifications] */

undefined1 FUN_10595fb98(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10595fba0; end: 10595fba7; -[SCNNotificationsAckConfig setAckSuppressedNotifications:] */

void FUN_10595fba0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10595fba8; end: 10595fbe3; -[SCNNotificationsAckConfig .cxx_destruct] */

void FUN_10595fba8(long param_1)

{
  func_0x00010595fbec(param_1 + 0x28);
  func_0x00010595fbec(param_1 + 0x20);
  func_0x00010595fbec(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10595fbe4; end: 10595fbf3;  */

void FUN_10595fbe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10595fbf4; end: 10595fc27; -[SCNNotificationsConversationMuteOptionsData init] */

void FUN_10595fbf4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eb130;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10595fc28; end: 10595fcd3; -[SCNNotificationsDeviceToken initWithToken:type:] */

undefined1 *
FUN_10595fc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb138;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10595fcd4; end: 10595fcdb; -[SCNNotificationsDeviceToken token] */

undefined8 FUN_10595fcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10595fcdc; end: 10595fce3; -[SCNNotificationsDeviceToken setToken:] */

void FUN_10595fcdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fce4; end: 10595fceb; -[SCNNotificationsDeviceToken type] */

undefined8 FUN_10595fce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10595fcec; end: 10595fcf3; -[SCNNotificationsDeviceToken setType:] */

void FUN_10595fcec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10595fcf4; end: 10595fcff; -[SCNNotificationsDeviceToken .cxx_destruct] */

void FUN_10595fcf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10595fd00; end: 10595fdab; -[SCNNotificationsEncryptionInfo initWithKey:type:] */

undefined1 *
FUN_10595fd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb140;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10595fdac; end: 10595fdb3; -[SCNNotificationsEncryptionInfo key] */

undefined8 FUN_10595fdac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10595fdb4; end: 10595fdbb; -[SCNNotificationsEncryptionInfo setKey:] */

void FUN_10595fdb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10595fdbc; end: 10595fdc3; -[SCNNotificationsEncryptionInfo type] */

undefined8 FUN_10595fdbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10595fdc4; end: 10595fdcb; -[SCNNotificationsEncryptionInfo setType:] */

void FUN_10595fdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10595fdcc; end: 10595fdd7; -[SCNNotificationsEncryptionInfo .cxx_destruct] */

void FUN_10595fdcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10595fdd8; end: 10595fe9f; -[SCNNotificationsGroupingAction initWithType:showConversationMuteOptionsData:suppressData:] */

undefined1 *
FUN_10595fdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb148;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10595fea0; end: 10595feab; -[SCNNotificationsGroupingAction initWithType:] */

void FUN_10595fea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c056030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithType_showConversationMut_1125f3218,param_3,0,0);
  return;
}



/* Entry: 10595feac; end: 10595feb3; -[SCNNotificationsGroupingAction type] */

undefined8 FUN_10595feac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10595feb4; end: 10595febb; -[SCNNotificationsGroupingAction setType:] */

void FUN_10595feb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10595febc; end: 10595fec3; -[SCNNotificationsGroupingAction showConversationMuteOptionsData] */

undefined8 FUN_10595febc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10595fec4; end: 10595fee7; -[SCNNotificationsGroupingAction setShowConversationMuteOptionsData:] */

void FUN_10595fec4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10595ff44();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10595fee8; end: 10595feef; -[SCNNotificationsGroupingAction suppressData] */

undefined8 FUN_10595fee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10595fef0; end: 10595ff13; -[SCNNotificationsGroupingAction setSuppressData:] */

void FUN_10595fef0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10595ff44();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10595ff14; end: 10595ff43; -[SCNNotificationsGroupingAction .cxx_destruct] */

void FUN_10595ff14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10595ff44; end: 10595ff53;  */

void FUN_10595ff44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10595ff54; end: 10595fff7; -[SCNNotificationsGroupingResult initWithActions:] */

undefined1 * FUN_10595ff54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb150;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10595fff8; end: 10595ffff; -[SCNNotificationsGroupingResult actions] */

undefined8 FUN_10595fff8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105960000; end: 105960007; -[SCNNotificationsGroupingResult setActions:] */

void FUN_105960000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960008; end: 105960013; -[SCNNotificationsGroupingResult .cxx_destruct] */

void FUN_105960008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105960014; end: 10596001b; -[SCNNotificationsInAppReminderConfig initWithNotifTypes:minDelayMs:] */

void FUN_105960014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithNotifTypes_minDelayMs_ma_1125e9908,param_3,param_4,0);
  return;
}



/* Entry: 10596001c; end: 105960023; -[SCNNotificationsInAppReminderConfig setNotifTypes:] */

void FUN_10596001c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105960024; end: 10596002b; -[SCNNotificationsInAppReminderConfig setMinDelayMs:] */

void FUN_105960024(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10596002c; end: 10596005b; -[SCNNotificationsInAppReminderConfig setMaxNotifCountPerRedrive:] */

void FUN_10596002c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10596005c; end: 105960183; -[SCNNotificationsNotification initWithProperties:json:source:receiveTimestampMs:redriveMetadata:] */

undefined1 *
FUN_10596005c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eb160;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105960184; end: 10596019b; -[SCNNotificationsNotification initWithSource:receiveTimestampMs:] */

void FUN_105960184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithProperties_json_source_r_1125ec7e0,0,0,param_3,param_4,0);
  return;
}



/* Entry: 10596019c; end: 1059601a3; -[SCNNotificationsNotification properties] */

undefined8 FUN_10596019c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059601a4; end: 1059601ab; -[SCNNotificationsNotification setProperties:] */

void FUN_1059601a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1059601ac; end: 1059601b3; -[SCNNotificationsNotification json] */

undefined8 FUN_1059601ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059601b4; end: 1059601bb; -[SCNNotificationsNotification setJson:] */

void FUN_1059601b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1059601bc; end: 1059601c3; -[SCNNotificationsNotification source] */

undefined8 FUN_1059601bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059601c4; end: 1059601cb; -[SCNNotificationsNotification setSource:] */

void FUN_1059601c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1059601cc; end: 1059601d3; -[SCNNotificationsNotification receiveTimestampMs] */

undefined8 FUN_1059601cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1059601d4; end: 1059601db; -[SCNNotificationsNotification setReceiveTimestampMs:] */

void FUN_1059601d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1059601dc; end: 1059601e3; -[SCNNotificationsNotification redriveMetadata] */

undefined8 FUN_1059601dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1059601e4; end: 105960213; -[SCNNotificationsNotification setRedriveMetadata:] */

void FUN_1059601e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105960214; end: 10596024f; -[SCNNotificationsNotification .cxx_destruct] */

void FUN_105960214(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105960250; end: 105960333; -[SCNNotificationsNotificationDisplayContext initWithAppState:displayDelayMs:displayDelayReason:] */

undefined1 *
FUN_105960250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105960334; end: 10596033f; -[SCNNotificationsNotificationDisplayContext initWithAppState:] */

void FUN_105960334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff3730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAppState_displayDelayMs__1125da790,param_3,0,0);
  return;
}



/* Entry: 105960340; end: 105960347; -[SCNNotificationsNotificationDisplayContext appState] */

undefined8 FUN_105960340(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105960348; end: 10596034f; -[SCNNotificationsNotificationDisplayContext setAppState:] */

void FUN_105960348(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105960350; end: 105960357; -[SCNNotificationsNotificationDisplayContext displayDelayMs] */

undefined8 FUN_105960350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


