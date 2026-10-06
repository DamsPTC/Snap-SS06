/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107245a44; end: 107245bb3;  */

void FUN_107245a44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong unaff_x20;
  undefined **ppuVar2;
  
  func_0x000107245d60();
  func_0x00010c0d3c80();
  uVar1 = unaff_x20;
  func_0x000107245d38();
  if ((uVar1 & 1) == 0) {
    func_0x000107245d38();
    if ((uVar1 & 1) == 0) {
      func_0x000107245d38();
      if ((uVar1 & 1) == 0) {
        func_0x000107245d38();
        if ((uVar1 & 1) == 0) {
          func_0x000107245d38();
          if ((uVar1 & 1) == 0) {
            func_0x000107245d38();
            if ((uVar1 & 1) == 0) {
              func_0x000107245d38();
              if ((uVar1 & 1) == 0) goto LAB_107245a90;
              ppuVar2 = &PTR____CFConstantStringClassReference_110ea4838;
            }
            else {
              ppuVar2 = &PTR____CFConstantStringClassReference_110ea47f8;
            }
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_110ea47b8;
          }
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110ea4778;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110ea4738;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea46f8;
    }
  }
  else {
    ppuVar2 = *(undefined ***)PTR__NSStringTransformToLatin_11034aad0;
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
LAB_107245a90:
      func_0x000107245d84();
      goto LAB_107245b78;
    }
  }
  func_0x00010c25ce60(unaff_x20,param_2,ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107245d7c();
LAB_107245b78:
  func_0x000107245d40();
  func_0x000107245d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 107245bb4; end: 107245bcf;  */

undefined1  [16] FUN_107245bb4(ulong param_1)

{
  undefined1 auVar1 [16];
  
  func_0x00010c08fa60();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1 << 0x40;
}



/* Entry: 107245bd0; end: 107245d37;  */

void FUN_107245bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  uVar1 = param_1;
  func_0x00010c25cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14f820(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107245d50();
  func_0x00010c17ace0(puVar2,param_2,0);
  uStack_48 = 0;
  func_0x00010c14ea40(puVar2,param_2,param_3,&uStack_48);
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  uVar3 = param_1;
  func_0x00010c25cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107245d58();
  func_0x00010c08fa60(uVar1);
  func_0x00010c08fa60(uVar3);
  func_0x00010bf0e4e0(param_1,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107245d70();
  func_0x000107245d50();
  func_0x000107245d40();
  func_0x000107245d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107245d38; end: 107245d8b;  */

void FUN_107245d38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107245d8c; end: 107245e4b; +[MGLLoggingConfiguration sharedConfiguration] */

void FUN_107245d8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x107245e14;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136ca118 != -1) {
    func_0x00010002a2fc(0x1136ca118,&puStack_48);
  }
  uVar1 = uRam00000001136ca120;
  _objc_retain(uRam00000001136ca120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107245e4c; end: 107245ea3; -[MGLLoggingConfiguration setHandler:] */

void FUN_107245e4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010bf68e60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    _objc_retainBlock();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001072461a0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107245ea4; end: 107245f8f; -[MGLLoggingConfiguration logCallingFunction:functionLine:messageType:format:] */

void FUN_107245ea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013d00();
  lVar3 = *(long *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,param_5,puVar2,param_4,puVar1);
  _objc_release(puVar2);
  func_0x0001072461b8();
  func_0x0001072461b0();
  return;
}



/* Entry: 107245f90; end: 107245f9b; -[MGLLoggingConfiguration defaultBlockHandler] */

undefined ** FUN_107245f90(void)

{
  return &PTR___NSConcreteGlobalBlock_110994d28;
}



/* Entry: 107245f9c; end: 1072460df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107245f9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (lRam00000001136ca110 != -1) {
    func_0x00010002a2fc(0x1136ca110,&PTR___NSConcreteGlobalBlock_110994d48);
  }
  if (param_2 - 1U < 4) {
    uVar3 = *(undefined8 *)(&PTR_DAT_110994d68)[param_2 - 1U];
    _objc_retain(uVar3);
  }
  else {
    uVar3 = 0;
  }
  uVar1 = (&UNK_10de20e80)[param_2];
  _objc_retain(uVar3);
  uVar2 = uVar3;
  _os_log_type_enabled(uVar3,uVar1);
  if ((int)uVar2 != 0) {
    FUN_107246150(auStack_70,param_3,param_4,param_5);
    __os_log_impl(0x100000000,uVar3,uVar1,"%@ - %lu: %@",auStack_70,0x20);
  }
  _objc_release(uVar3);
  _objc_release();
  func_0x0001072461b8();
  func_0x0001072461b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072461a8();
  uVar2 = _DAT_1136ca128;
  _DAT_1136ca128 = uVar3;
  func_0x0001072461a0(uVar2);
  func_0x0001072461a8();
  uVar2 = _DAT_1136ca130;
  _DAT_1136ca130 = uVar3;
  func_0x0001072461a0(uVar2);
  func_0x0001072461a8();
  uVar2 = _DAT_1136ca138;
  _DAT_1136ca138 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1072460e0; end: 10724614f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072460e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001072461a8(param_1,"INFO");
  uVar1 = _DAT_1136ca128;
  _DAT_1136ca128 = param_1;
  func_0x0001072461a0(uVar1);
  func_0x0001072461a8();
  uVar1 = _DAT_1136ca130;
  _DAT_1136ca130 = param_1;
  func_0x0001072461a0(uVar1);
  func_0x0001072461a8();
  uVar1 = _DAT_1136ca138;
  _DAT_1136ca138 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107246150; end: 10724617b;  */

void FUN_107246150(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x8400302;
  *(undefined8 *)(param_1 + 1) = param_2;
  *(undefined2 *)(param_1 + 3) = 0x800;
  *(undefined8 *)((long)param_1 + 0xe) = param_3;
  *(undefined2 *)((long)param_1 + 0x16) = 0x840;
  *(undefined8 *)(param_1 + 6) = param_4;
  return;
}



/* Entry: 10724617c; end: 107246183; -[MGLLoggingConfiguration handler] */

undefined8 FUN_10724617c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107246184; end: 10724618b; -[MGLLoggingConfiguration loggingLevel] */

undefined8 FUN_107246184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10724618c; end: 107246193; -[MGLLoggingConfiguration setLoggingLevel:] */

void FUN_10724618c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107246194; end: 107246213; -[MGLLoggingConfiguration .cxx_destruct] */

void FUN_107246194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107246214; end: 1072462af;  */

undefined1  [16] FUN_107246214(void)

{
  undefined1 auStack_30 [16];
  
  FUN_107246514(auStack_30,0);
  return auStack_30;
}



/* Entry: 1072462b0; end: 1072463af;  */

double FUN_1072462b0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                    double param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x000107246334(param_3,param_1,0,0x4039800000000000);
  dVar1 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  dVar2 = (param_2 * -3.141592653589793) / 180.0 + 1.5707963267948966;
  _sin(dVar2);
  return dVar2 * ((param_5 * param_3 * 0.5) / dVar1);
}



/* Entry: 1072463b0; end: 10724645b;  */

void FUN_1072463b0(double param_1,double param_2,double param_3,undefined8 param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 1.5707963267948966 - (param_2 * 3.141592653589793) / 180.0;
  _sin(dVar1);
  dVar2 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  dVar3 = (param_3 * 3.141592653589793) / 180.0;
  _cos(dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log2_11034c530)
            (((dVar3 * 6.283185307179586 * 6378137.0) /
             ((dVar2 * (param_1 / dVar1 + param_1 / dVar1)) / param_5)) * 0.001953125);
  return;
}



/* Entry: 10724645c; end: 107246503;  */

double FUN_10724645c(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (param_1 * 3.141592653589793) / 180.0;
  param_3 = param_3 * 3.141592653589793;
  dVar1 = (param_4 * 3.141592653589793) / 180.0 - (param_2 * 3.141592653589793) / 180.0;
  dVar5 = param_3 / 180.0;
  ___sincos_stret(dVar1);
  dVar2 = param_3;
  ___sincos_stret(dVar5);
  dVar1 = dVar2 * dVar1;
  dVar3 = dVar2;
  ___sincos_stret(dVar4);
  _atan2(dVar1,-(param_3 * dVar4 * dVar2) + dVar5 * dVar3);
  return (dVar1 * 180.0) / 3.141592653589793;
}



/* Entry: 107246504; end: 107246513;  */

undefined1  [16] FUN_107246504(double param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = (double)param_2[1];
  dVar1 = (double)NEON_fminnm(*param_2,0x40554345b1a549d7);
  if (dVar1 <= -85.0511287798066) {
    dVar1 = -85.0511287798066;
  }
  dVar1 = (dVar1 * 3.141592653589793) / 360.0 + 0.7853981633974483;
  _tan(dVar1);
  _log();
  dVar3 = (param_1 * 512.0) / 360.0;
  auVar4._0_8_ = dVar3 * (dVar2 + 180.0);
  auVar4._8_8_ = dVar3 * (dVar1 * -57.29577951308232 + 180.0);
  return auVar4;
}



/* Entry: 107246514; end: 10724660f;  */

double * FUN_107246514(double param_1,double param_2,double *param_3,int param_4)

{
  double *pdVar1;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  if (NAN(param_1)) {
    FUN_107246768();
    FUN_107246610();
  }
  else if (NAN(param_2)) {
    FUN_107246768();
    FUN_107246610();
  }
  else if (90.0 < ABS(param_1)) {
    FUN_107246768();
    FUN_107246610();
  }
  else {
    if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
      if (param_4 != 0) {
        FUN_107246614(param_3);
      }
      return param_3;
    }
    FUN_107246768();
    FUN_107246610();
  }
  pdVar1 = param_3;
  ___cxa_throw(param_3,PTR___ZTISt12domain_error_110352230,PTR___ZNSt12domain_errorD1Ev_110346160);
  ___cxa_free_exception(param_3);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *pdVar1 = (double)(PTR___ZTVSt12domain_error_110346b50 + 0x10);
  return pdVar1;
}



/* Entry: 107246610; end: 107246613;  */

void FUN_107246610(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12domain_error_110346b50 + 0x10);
  return;
}



/* Entry: 107246614; end: 10724664b;  */

void FUN_107246614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_107246670(uVar1,0xc066800000000000,0x4066800000000000);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10724664c; end: 10724666f;  */

void FUN_10724664c(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12domain_error_110346b50 + 0x10);
  return;
}



/* Entry: 107246670; end: 107246767;  */

double FUN_107246670(double param_1,double param_2,double param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = false;
  if ((param_2 <= param_1) && (bVar1 = false, !NAN(param_1) && !NAN(param_3))) {
    bVar1 = param_1 < param_3;
  }
  dVar3 = param_1;
  if ((!bVar1) && (dVar3 = param_2, param_1 != param_3)) {
    dVar2 = param_1 - param_2;
    _fmod(dVar2,param_3 - param_2);
    dVar3 = (param_3 - param_2) + param_2 + dVar2;
    if (param_2 <= param_1) {
      dVar3 = param_2 + dVar2;
    }
  }
  return dVar3;
}



/* Entry: 107246768; end: 10724676f;  */

void FUN_107246768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_allocate_exception_110346b90)(0x10);
  return;
}



/* Entry: 107246770; end: 10724681f; -[MGLNetworkConfiguration init] */

undefined1 * FUN_107246770(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1fd880(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107247a58(uVar3);
    puVar2 = &UNK_10f405de0;
    _dispatch_queue_create(&UNK_10f405de0,PTR___dispatch_queue_attr_concurrent_11034be28);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107247a58(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107246820; end: 1072468a3; +[MGLNetworkConfiguration sharedManager] */

void FUN_107246820(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107247a2c();
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1072468a4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136ca140 != -1) {
    func_0x00010002a2fc(0x1136ca140,auStack_48);
  }
  func_0x00010c139080(uRam00000001136ca148);
  uVar1 = uRam00000001136ca148;
  func_0x0001072479e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1072468a4; end: 1072468cb;  */

void FUN_1072468a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136ca148;
  uRam00000001136ca148 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072468cc; end: 10724690f; -[MGLNetworkConfiguration resetNativeNetworkManagerDelegate] */

void FUN_1072468cc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5590;
  func_0x00010c22bc20(PTR_PTR_1126d5590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107246910; end: 107246973; +[MGLNetworkConfiguration defaultSessionConfiguration] */

void FUN_107246910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  func_0x00010bf6a380(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215ba0(0x403e000000000000);
  func_0x00010c1a4fa0(puVar1,param_2,8);
  func_0x00010c1ebb00(puVar1,param_2,1);
  func_0x00010c21b040(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107246974; end: 107246a2f; -[MGLNetworkConfiguration sessionForNetworkManager:] */

void FUN_107246974(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010724796c();
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15fec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724796c();
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107246a30; end: 107246a67; -[MGLNetworkConfiguration sessionConfiguration] */

void FUN_107246a30(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001072479cc();
  func_0x000107247a60();
  func_0x00010724796c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107246a68; end: 107246ae7; -[MGLNetworkConfiguration setSessionConfiguration:] */

void FUN_107246a68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001072479b4();
  func_0x0001072479e8();
  _objc_sync_enter(param_1);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126d5598;
    func_0x00010bf6a380();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
  }
  else {
    func_0x0001072479cc();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
  }
  _objc_release(uVar1);
  func_0x000107247a60();
  func_0x00010724796c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107246ae8; end: 107246bf7; -[MGLNetworkConfiguration startDownloadEvent:type:] */

void FUN_107246ae8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107247a10();
  func_0x0001072479b4();
  func_0x0001072479cc();
  if ((unaff_x19 != 0) && (unaff_x20 != 0)) {
    func_0x00010bf99d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x21 == 0) {
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1977c0();
      func_0x0001072479bc();
      func_0x00010724797c();
    }
  }
  func_0x0001072479ac();
  func_0x00010724796c();
  func_0x000107247a68(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072479bc();
  func_0x00010724797c();
  func_0x0001072479ac();
  func_0x00010724796c();
  func_0x000107247a3c();
                    /* WARNING: Could not recover jumptable at 0x00010c15bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107246bf8; end: 107246bff; -[MGLNetworkConfiguration stopDownloadEventForResponse:] */

void FUN_107246bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sendEventForURLResponse_withActi_112634940,param_3,0);
  return;
}



/* Entry: 107246c00; end: 107246c0b; -[MGLNetworkConfiguration cancelDownloadEventForResponse:] */

void FUN_107246c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sendEventForURLResponse_withActi_112634940,param_3,
             &PTR____CFConstantStringClassReference_110daf8b8);
  return;
}



/* Entry: 107246c0c; end: 107246c0f; -[MGLNetworkConfiguration debugLog:] */

void FUN_107246c0c(void)

{
  return;
}



/* Entry: 107246c10; end: 107246cef; -[MGLNetworkConfiguration errorLog:] */

void FUN_107246c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001072479b4();
  puVar1 = PTR_PTR_1126c5b68;
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x000107247974();
    func_0x0001072479ac();
    if ((long)puVar1 < 2) goto LAB_107246ca8;
    func_0x00010c22b860(PTR_PTR_1126c5b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1f00();
  }
  func_0x0001072479ac();
LAB_107246ca8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107246cf0; end: 107246e53; -[MGLNetworkConfiguration sendEventForURLResponse:withAction:] */

void FUN_107246cf0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001072479b4();
  func_0x0001072479cc();
  puVar1 = PTR__OBJC_CLASS___NSURLResponse_1126d55a0;
  _objc_opt_class(PTR__OBJC_CLASS___NSURLResponse_1126d55a0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072479bc();
    if (param_3 != 0) {
      lVar3 = param_1;
      func_0x00010bf99d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010bf99ba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c1e0(param_1);
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_107246e54;
        puStack_58 = &UNK_110883780;
        lStack_50 = param_1;
        lStack_48 = lVar3;
        _objc_retain(lVar3);
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
        func_0x000107247a00();
        func_0x0001072479bc();
      }
    }
    func_0x000107247974();
  }
  func_0x0001072479ac();
  func_0x00010724796c();
  return;
}



/* Entry: 107246e54; end: 107246e8f;  */

void FUN_107246e54(undefined8 param_1)

{
  func_0x000107247a7c();
  func_0x00010c0cccc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107246e90; end: 1072474cf; -[MGLNetworkConfiguration eventAttributesForURL:withAction:] */

void FUN_107246e90(double param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong unaff_x19;
  long unaff_x20;
  undefined *puVar11;
  undefined8 unaff_x21;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  
  func_0x000107247a10();
  func_0x0001072479b4();
  func_0x0001072479cc();
  uVar1 = unaff_x19;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724797c();
  func_0x00010bf99d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  func_0x00010c189b60();
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107247974();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072479f0();
  func_0x000107247974();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724798c();
  func_0x00010724797c();
  func_0x000107247974();
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  _objc_opt_isKindOfClass();
  if ((unaff_x19 & 1) != 0) {
    func_0x00010c252ee0();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724798c();
    func_0x00010724797c();
    func_0x000107247974();
  }
  puVar6 = PTR_PTR_1126d55a8;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120800(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07bb60();
  func_0x00010724797c();
  func_0x000107247974();
  func_0x0001072479bc();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724798c();
  func_0x00010724797c();
  func_0x000107247974();
  if (unaff_x20 != 0) {
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072479f0();
    func_0x000107247974();
  }
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724797c();
  func_0x000107247974();
  _objc_release(puVar7);
  func_0x0001072479bc();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(unaff_x21);
  func_0x000107247a00();
  uVar10 = uVar1;
  _objc_release();
  func_0x000107247a08();
  func_0x00010724796c();
  func_0x000107247a68(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724797c();
    func_0x000107247974();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x21);
    func_0x000107247a00();
    _objc_release(uVar1);
    func_0x000107247a08();
    func_0x00010724796c();
    func_0x000107247984();
    puStack_200 = puVar9;
    puStack_1f8 = puVar8;
    func_0x00010724799c();
    puStack_228 = &uStack_230;
    uStack_230 = 0;
    uStack_220 = 0x3032000000;
    pcStack_218 = FUN_1072475b8;
    uStack_210 = 0x1072475c8;
    uStack_208 = 0;
    func_0x00010bf9a5c0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107247a2c();
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_1072475d0;
    puStack_250 = &UNK_110994c48;
    func_0x0001072479e8();
    func_0x00010006eaa4(uVar10,auStack_268);
    func_0x000107247974();
    puVar11 = (undefined *)puStack_228[5];
    func_0x0001072479cc();
    func_0x000107247a08();
    func_0x000107247a44();
    _objc_release(uStack_208);
    func_0x00010724796c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1072474d0; end: 1072475b7; -[MGLNetworkConfiguration eventDictionaryForKey:] */

void FUN_1072474d0(void)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010724799c();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1072475b8;
  uStack_40 = 0x1072475c8;
  uStack_38 = 0;
  func_0x00010bf9a5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107247a2c();
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1072475d0;
  puStack_80 = &UNK_110994c48;
  func_0x0001072479e8();
  func_0x00010006eaa4(unaff_x20,auStack_98);
  func_0x000107247974();
  uVar1 = puStack_58[5];
  func_0x0001072479cc();
  func_0x000107247a08();
  func_0x000107247a44();
  _objc_release(uStack_38);
  func_0x00010724796c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1072475b8; end: 1072475cf;  */

void FUN_1072475b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1072475d0; end: 107247627;  */

void FUN_1072475d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107247a7c();
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x000107247a58(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107247628; end: 1072476df; -[MGLNetworkConfiguration setEventDictionary:forKey:] */

void FUN_107247628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001072479b4();
  func_0x0001072479cc();
  uVar1 = param_1;
  func_0x00010bf9a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107247a2c();
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1072476e0;
  puStack_50 = &UNK_110896e48;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x0001072479cc();
  func_0x0001072479e8();
  func_0x00010010a3e8(uVar1,auStack_68);
  func_0x000107247974();
  _objc_release(uStack_38);
  func_0x000107247a08();
  func_0x0001072479ac();
  func_0x00010724796c();
  return;
}



/* Entry: 1072476e0; end: 10724771b;  */

void FUN_1072476e0(undefined8 param_1)

{
  func_0x000107247a7c();
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724771c; end: 1072477b7; -[MGLNetworkConfiguration removeEventDictionaryForKey:] */

void FUN_10724771c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001072479b4();
  uVar1 = param_1;
  func_0x00010bf9a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1072477b8;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x0001072479e8();
  func_0x00010010a3e8(uVar1,&puStack_60);
  func_0x0001072479ac();
  func_0x000107247a00();
  func_0x00010724796c();
  return;
}



/* Entry: 1072477b8; end: 1072477f3;  */

void FUN_1072477b8(undefined8 param_1)

{
  func_0x000107247a7c();
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072477f4; end: 10724780b; -[MGLNetworkConfiguration delegate] */

void FUN_1072477f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724780c; end: 107247817; -[MGLNetworkConfiguration setDelegate:] */

void FUN_10724780c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107247818; end: 10724781f; -[MGLNetworkConfiguration events] */

undefined8 FUN_107247818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107247820; end: 10724783f; -[MGLNetworkConfiguration setEvents:] */

void FUN_107247820(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010724799c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107247840; end: 107247857; -[MGLNetworkConfiguration metricsDelegate] */

void FUN_107247840(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107247858; end: 107247863; -[MGLNetworkConfiguration setMetricsDelegate:] */

void FUN_107247858(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107247864; end: 10724786b; -[MGLNetworkConfiguration eventsQueue] */

undefined8 FUN_107247864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10724786c; end: 10724788b; -[MGLNetworkConfiguration setEventsQueue:] */

void FUN_10724786c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010724799c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724788c; end: 1072478d7; -[MGLNetworkConfiguration .cxx_destruct] */

void FUN_10724788c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1072478d8; end: 107247917; +[MGLNetworkConfiguration testing_clearNativeNetworkManagerDelegate] */

void FUN_1072478d8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5590;
  func_0x00010c22bc20(PTR_PTR_1126d5590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107247918; end: 10724795f; +[MGLNetworkConfiguration testing_nativeNetworkManagerDelegate] */

void FUN_107247918(void)

{
  func_0x00010c22bc20(PTR_PTR_1126d5590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  FUN_107247960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107247960; end: 107247a87;  */

void FUN_107247960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107247a88; end: 107247bdb;  */

void FUN_107247a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c297120(param_3,param_4,&uStack_20,&UNK_10f405e70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107247bdc; end: 107247bef;  */

void FUN_107247bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_valueWithBytes_objCType__112683670,param_3,&UNK_10f405f02);
  return;
}



/* Entry: 107247bf0; end: 107247c43;  */

void FUN_107247bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_20,&UNK_10f405f83);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107247c44; end: 107247c5b;  */

void FUN_107247c44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getValue__1125d0998);
  return;
}



/* Entry: 107247c5c; end: 107247c7f; +[MGLReachability reachabilityWithHostName:] */

void FUN_107247c5c(void)

{
  func_0x00010c120820(PTR_PTR_1126d55a8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107247c80; end: 107247d0f; +[MGLReachability reachabilityWithHostname:] */

void FUN_107247c80(void)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001072486e4();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  lVar1 = 0;
  _SCNetworkReachabilityCreateWithName(0,unaff_x19);
  if (lVar1 == 0) {
    unaff_x20 = 0;
  }
  else {
    _objc_alloc();
    func_0x00010c03ce40();
    _CFRelease(lVar1);
  }
  func_0x0001072486f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 107247d10; end: 107247d77; +[MGLReachability reachabilityWithAddress:] */

void FUN_107247d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _SCNetworkReachabilityCreateWithAddress(lVar1,param_3);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    _objc_alloc(param_1);
    func_0x00010c03ce40();
    _CFRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107247d78; end: 107247dbb; +[MGLReachability reachabilityForInternetConnection] */

undefined1 * FUN_107247d78(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *unaff_x19;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined2 auStack_78 [2];
  undefined4 uStack_74;
  
  func_0x0001072486fc();
  puVar1 = unaff_x19;
  func_0x00010c1207e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107248758();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072486fc();
    auStack_78[0] = 0x210;
    uStack_74 = 0xfea9;
    puVar2 = auStack_78;
    func_0x00010c1207e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107248758();
    puVar1 = unaff_x19;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = auStack_c0;
      puStack_b8 = PTR_PTR_1126f8d28;
      _objc_msgSendSuper2(auStack_c0,PTR_s_init_1125d9248);
      if (puVar1 != (undefined1 *)0x0) {
        puVar1[8] = 1;
        _CFRetain();
        *(undefined2 **)(puVar1 + 0x20) = puVar2;
        puVar3 = &UNK_10f405fc9;
        _dispatch_queue_create(&UNK_10f405fc9,0);
        uVar4 = *(undefined8 *)(puVar1 + 0x28);
        *(undefined **)(puVar1 + 0x28) = puVar3;
        _objc_release(uVar4);
      }
      return puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107247dbc; end: 107247e07; +[MGLReachability reachabilityForLocalWiFi] */

undefined1 * FUN_107247dbc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *unaff_x19;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined2 auStack_38 [2];
  undefined4 uStack_34;
  
  func_0x0001072486fc();
  auStack_38[0] = 0x210;
  uStack_34 = 0xfea9;
  puVar2 = auStack_38;
  func_0x00010c1207e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107248758();
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return unaff_x19;
  }
  ___stack_chk_fail();
  puVar1 = auStack_80;
  puStack_78 = PTR_PTR_1126f8d28;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    puVar1[8] = 1;
    _CFRetain();
    *(undefined2 **)(puVar1 + 0x20) = puVar2;
    puVar3 = &UNK_10f405fc9;
    _dispatch_queue_create(&UNK_10f405fc9,0);
    uVar4 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined **)(puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
  }
  return puVar1;
}



/* Entry: 107247e08; end: 107247ea7; -[MGLReachability initWithReachabilityRef:] */

undefined1 * FUN_107247e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
    _CFRetain();
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    puVar2 = &UNK_10f405fc9;
    _dispatch_queue_create(&UNK_10f405fc9,0);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107247ea8; end: 107247f47; -[MGLReachability dealloc] */

void FUN_107247ea8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256380();
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f8d28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107247f48; end: 107248047; -[MGLReachability startNotifier] */

undefined8 FUN_107247f48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c120760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c120760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    func_0x000107248724();
    if (lVar1 == param_1) {
      return 1;
    }
  }
  func_0x000107248750();
  _SCNetworkReachabilitySetCallback();
  if ((int)lVar2 != 0) {
    func_0x000107248750();
    lVar1 = param_1;
    func_0x00010c1207a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _SCNetworkReachabilitySetDispatchQueue(lVar2,lVar1);
    func_0x000107248724();
    if ((int)lVar2 != 0) {
      uVar3 = 1;
      goto LAB_107248018;
    }
    func_0x000107248750();
    func_0x0001072487a0();
  }
  uVar3 = 0;
LAB_107248018:
  func_0x00010c1e7a60(param_1);
  return uVar3;
}



/* Entry: 107248048; end: 10724809f;  */

void FUN_107248048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  func_0x00010c1206c0(param_3);
  _objc_autoreleasePoolPop(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072480a0; end: 1072480d7; -[MGLReachability stopNotifier] */

void FUN_1072480a0(undefined8 param_1)

{
  func_0x00010c120780();
  func_0x0001072487a0();
  func_0x000107248750();
  _SCNetworkReachabilitySetDispatchQueue();
                    /* WARNING: Could not recover jumptable at 0x00010c1e7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setReachabilityObject__1126578c0,0);
  return;
}



/* Entry: 1072480d8; end: 10724810f; -[MGLReachability isReachableWithFlags:] */

uint FUN_1072480d8(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((param_3 ^ 0xffffffff) & 5) != 0) {
    uVar1 = param_3 >> 1 & 1;
  }
  if ((param_3 >> 0x12 & 1) != 0) {
    func_0x00010c120860();
    uVar1 = uVar1 & param_1;
  }
  return uVar1;
}



/* Entry: 107248110; end: 10724814f; -[MGLReachability isReachable] */

void FUN_107248110(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c120780();
  iVar1 = (int)uVar2;
  _SCNetworkReachabilityGetFlags();
  if (iVar1 != 0) {
    func_0x00010c07bb80(param_1);
  }
  return;
}



/* Entry: 107248150; end: 10724818f; -[MGLReachability isReachableViaWWAN] */

undefined8 FUN_107248150(int param_1)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  
  func_0x000107248780();
  func_0x000107248748();
  if ((param_1 == 0) || (((uStack_14 ^ 0xffffffff) & 0x40002) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107248190; end: 1072481c3; -[MGLReachability isReachableViaWiFi] */

void FUN_107248190(void)

{
  func_0x000107248780();
  func_0x000107248748();
  return;
}



/* Entry: 1072481c4; end: 1072481c7; -[MGLReachability isConnectionRequired] */

void FUN_1072481c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_connectionRequired_1125afce8);
  return;
}



/* Entry: 1072481c8; end: 1072481f3; -[MGLReachability connectionRequired] */

uint FUN_1072481c8(int param_1)

{
  uint uVar1;
  undefined4 uStack_14;
  
  func_0x00010c120780();
  func_0x000107248748();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uStack_14 >> 2 & 1;
  }
  return uVar1;
}



/* Entry: 1072481f4; end: 107248227; -[MGLReachability isConnectionOnDemand] */

void FUN_1072481f4(void)

{
  func_0x00010c120780();
  func_0x000107248748();
  return;
}



/* Entry: 107248228; end: 107248257; -[MGLReachability isInterventionRequired] */

bool FUN_107248228(int param_1)

{
  uint uStack_14;
  
  func_0x00010c120780();
  func_0x000107248748();
  return ((uStack_14 ^ 0xffffffff) & 0x14) == 0 && param_1 != 0;
}



/* Entry: 107248258; end: 107248297; -[MGLReachability currentReachabilityStatus] */

undefined8 FUN_107248258(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c07bb40();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c07bb60();
    uVar2 = 1;
    if (param_1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 107248298; end: 1072482bf; -[MGLReachability reachabilityFlags] */

undefined4 FUN_107248298(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  func_0x000107248780();
  func_0x000107248748();
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uStack_14;
  }
  return uVar1;
}



/* Entry: 1072482c0; end: 10724836f; -[MGLReachability currentReachabilityString] */

void FUN_1072482c0(long param_1)

{
  func_0x00010bf5fd40();
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 2) {
    func_0x000107248734();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 1) {
    func_0x000107248734();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107248734();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001072486d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107248370; end: 107248427; -[MGLReachability currentReachabilityFlags] */

void FUN_107248370(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c120720();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ea49f8);
  return;
}



/* Entry: 107248428; end: 107248523; -[MGLReachability reachabilityChanged:] */

void FUN_107248428(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c07bb80();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c281de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1072484c4;
    lVar1 = param_1;
    func_0x00010c281de0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
  }
  else {
    lVar1 = param_1;
    func_0x00010c120840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1072484c4;
    lVar1 = param_1;
    func_0x00010c120840();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
  }
  func_0x000107248724();
LAB_1072484c4:
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107248524;
  puStack_30 = &UNK_11087bb00;
  lStack_28 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 107248524; end: 10724856f;  */

void FUN_107248524(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107248570; end: 10724860b; -[MGLReachability description] */

void FUN_107248570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea49d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107248788();
  func_0x0001072486f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10724860c; end: 107248613; -[MGLReachability reachableBlock] */

undefined8 FUN_10724860c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107248614; end: 10724861b; -[MGLReachability setReachableBlock:] */

void FUN_107248614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10724861c; end: 107248623; -[MGLReachability unreachableBlock] */

undefined8 FUN_10724861c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107248624; end: 10724862b; -[MGLReachability setUnreachableBlock:] */

void FUN_107248624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10724862c; end: 107248633; -[MGLReachability reachableOnWWAN] */

undefined1 FUN_10724862c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107248634; end: 10724863b; -[MGLReachability setReachableOnWWAN:] */

void FUN_107248634(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10724863c; end: 107248643; -[MGLReachability reachabilityRef] */

undefined8 FUN_10724863c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107248644; end: 10724864b; -[MGLReachability setReachabilityRef:] */

void FUN_107248644(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10724864c; end: 107248653; -[MGLReachability reachabilitySerialQueue] */

undefined8 FUN_10724864c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107248654; end: 107248673; -[MGLReachability setReachabilitySerialQueue:] */

void FUN_107248654(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001072486e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


