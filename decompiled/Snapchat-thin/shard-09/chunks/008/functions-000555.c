/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10724fe58; end: 10724fe5f; -[MGLMetalMapViewImplDelegate drawInMTKView:] */

void FUN_10724fe58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010724f1f4(uVar1);
  func_0x00010c130280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724fe60; end: 107250053;  */

undefined8 * FUN_10724fe60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_60 [3];
  undefined8 *puStack_48;
  
  puVar4 = auStack_60;
  puVar1 = param_1;
  FUN_10724ea04();
  puVar1[2] = &PTR_DAT_110995810;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[6] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &PTR_FUN_1109956d0;
  puVar1[0x11] = &PTR_DAT_110995890;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = &PTR_FUN_110995900;
  puVar3 = PTR_PTR_1126d55d0;
  _objc_alloc();
  func_0x00010c01d300();
  puVar2[1] = puVar3;
  puVar2[2] = 0;
  auStack_60[0] = 0;
  puStack_48 = puVar2;
  func_0x000107895fb4(puVar1 + 0x11,0,&puStack_48);
  if (puStack_48 != (undefined8 *)0x0) {
    func_0x000107250b78();
  }
  func_0x000107250ae4();
  *param_1 = &PTR_FUN_1109956d0;
  param_1[2] = &PTR_DAT_110995810;
  param_1[0x11] = &PTR_DAT_110995890;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  _MTLCreateSystemDefaultDevice();
  uVar5 = param_1[0x17];
  param_1[0x17] = puVar4;
  func_0x000107250b90(uVar5);
  func_0x00010785f1f4();
  func_0x00010002b838(auStack_60,&UNK_10f4063ae);
  func_0x00010785eeac(puVar4,auStack_60);
  *(bool *)(param_1 + 0x18) = (((uint)puVar4 ^ 0xffffffff) & 0x101) == 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar5 = 3;
    _dispatch_semaphore_create();
    uVar6 = param_1[0x19];
    param_1[0x19] = uVar5;
    func_0x000107250b90(uVar6);
  }
  return param_1;
}



/* Entry: 107250054; end: 1072500d7;  */

undefined8 * FUN_107250054(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109959b0;
  FUN_10725080c(param_1 + 3);
  FUN_10724faa8(param_1 + 2);
  return param_1;
}



/* Entry: 1072500d8; end: 1072500eb;  */

long FUN_1072500d8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 200));
  _objc_release(*(undefined8 *)(param_1 + 0xb8));
  FUN_107250054(param_1 + 0x88);
  func_0x0001078922f8(param_1 + 0x10);
  _objc_destroyWeak(param_1 + 8);
  return param_1;
}



/* Entry: 1072500ec; end: 1072500ff;  */

void FUN_1072500ec(void)

{
  func_0x000107250094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107250100; end: 10725010f;  */

void FUN_107250100(long param_1)

{
  func_0x000107250094(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107250110; end: 10725018b;  */

void FUN_107250110(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAMetalLayer_1126c9000;
  _objc_opt_class(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  func_0x000107250b54();
  func_0x000107250b14();
  func_0x00010c1d4c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10725018c; end: 107250207;  */

void FUN_10725018c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAMetalLayer_1126c9000;
  _objc_opt_class(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  func_0x000107250b54();
  func_0x000107250b14();
  func_0x00010c1e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107250208; end: 107250213;  */

void FUN_107250208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 107250214; end: 1072504cb;  */

void FUN_107250214(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar5 + 0x10) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126c5b68;
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x000107250b1c();
    func_0x000107250b14();
    if ((long)puVar2 < 4) goto LAB_107250308;
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860(PTR_PTR_1126c5b68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000107250b34();
    func_0x00010bf20c00();
    func_0x000107250b34();
    func_0x00010bf20c00();
    func_0x000107250b70(puVar2);
    _objc_release(puVar3);
    func_0x000107250b1c();
  }
  func_0x000107250b14();
LAB_107250308:
  puVar2 = PTR__OBJC_CLASS___MTKView_1126d55c8;
  _objc_alloc();
  func_0x000107250b34();
  func_0x00010bf20c00();
  func_0x00010c014360();
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined **)(lVar5 + 0x10) = puVar2;
  func_0x000107250b90(uVar4);
  func_0x000107250b14();
  func_0x00010c18b5e0(*(undefined8 *)(lVar5 + 0x10));
  func_0x00010c16d4a0(*(undefined8 *)(lVar5 + 0x10));
  FUN_1072504cc();
  func_0x00010c1826c0(*(undefined8 *)(lVar5 + 0x10));
  func_0x00010c182220(*(undefined8 *)(lVar5 + 0x10));
  func_0x00010c17e980(*(undefined8 *)(lVar5 + 0x10));
  func_0x00010c18bf60(*(undefined8 *)(lVar5 + 0x10));
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    func_0x00010c18bfa0(*(undefined8 *)(lVar5 + 0x10));
  }
  func_0x000107250b34();
  func_0x00010c079180();
  func_0x00010c1d4c20(*(undefined8 *)(lVar5 + 0x10));
  func_0x000107250b14();
  func_0x000107250b34();
  func_0x00010c079180();
  func_0x00010c08c0e0(*(undefined8 *)(lVar5 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4c20();
  func_0x000107250b1c();
  func_0x000107250b14();
  func_0x00010c195200(*(undefined8 *)(lVar5 + 0x10));
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e15a0();
  func_0x00010c1d4c20(uVar4);
  func_0x00010c18c700(uVar4);
  func_0x00010c1dc0a0(uVar4);
  func_0x00010c19f5e0(uVar4);
  func_0x000107250b14();
  func_0x000107250b34();
  func_0x00010c066fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1072504cc; end: 10725051f;  */

undefined8 FUN_1072504cc(undefined8 param_1)

{
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  func_0x000107250b24();
  return param_1;
}



/* Entry: 107250520; end: 10725054b;  */

void FUN_107250520(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10725054c; end: 10725058b;  */

void FUN_10725054c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10),PTR_s_releaseDrawables_112627b78);
  return;
}



/* Entry: 10725058c; end: 1072505c7;  */

bool FUN_10725058c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x10);
  func_0x00010bf5e760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1072505c8; end: 1072505cf;  */

bool FUN_1072505c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
  func_0x00010bf5e760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1072505d0; end: 10725071b;  */

void FUN_1072505d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c5b68;
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x000107250b1c();
    func_0x000107250b24();
    if ((long)puVar1 < 4) goto LAB_107250664;
    func_0x00010c22b860(PTR_PTR_1126c5b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107250b70();
  }
  func_0x000107250b24();
LAB_107250664:
  lVar3 = *(long *)(param_1 + 0x98);
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  _objc_alloc(PTR__OBJC_CLASS___CIImage_1126b3128);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x00010bf5e760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ce20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027e00(puVar1,param_2,uVar2,0);
  func_0x000107250b1c();
  func_0x000107250b14();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010bffa2a0();
  func_0x000107250b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10725071c; end: 1072507ab;  */

void FUN_10725071c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  
  FUN_1072504cc();
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  _objc_loadWeakRetained(param_5 + 8);
  func_0x00010bf20c00();
  *(ulong *)(param_5 + 0x90) = CONCAT44((int)(param_1 * param_4),(int)(param_1 * param_3));
  func_0x000107250b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1072507ac; end: 10725080b;  */

void FUN_1072507ac(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 200));
    return;
  }
  return;
}



/* Entry: 10725080c; end: 107250833;  */

long FUN_10725080c(long param_1)

{
  FUN_107250834();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107250834; end: 10725089f;  */

void FUN_107250834(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1072508a0; end: 1072508cb;  */

void FUN_1072508a0(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&uStack_20);
  return;
}



/* Entry: 1072508cc; end: 1072508f3;  */

long FUN_1072508cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072508f4; end: 1072508f7;  */

long FUN_1072508f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1072508f8; end: 10725090b;  */

void FUN_1072508f8(void)

{
  func_0x000107250ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10725090c; end: 10725090f;  */

void FUN_10725090c(void)

{
  return;
}



/* Entry: 107250910; end: 107250937;  */

void FUN_107250910(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107250b64();
  func_0x00010bf5e760();
  _objc_retainAutoreleasedReturnValue();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 107250938; end: 107250983;  */

void FUN_107250938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  func_0x000107250b64();
  func_0x00010bf5e760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26ce20();
  _objc_retainAutoreleasedReturnValue();
  *unaff_x19 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107250984; end: 1072509fb;  */

void FUN_107250984(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107250b64();
  func_0x00010bf6dea0();
  _objc_retainAutoreleasedReturnValue();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1072509fc; end: 107250a13;  */

undefined8 FUN_1072509fc(void)

{
  return 0x50;
}



/* Entry: 107250a14; end: 107250b13;  */

undefined8 FUN_107250a14(double param_1,double param_2,long param_3)

{
  func_0x00010bf89d80(*(undefined8 *)(param_3 + 0x10));
  func_0x00010bf89d80(*(undefined8 *)(param_3 + 0x10));
  return CONCAT44((int)param_2,(int)param_1);
}



/* Entry: 107250b14; end: 107250b97;  */

void FUN_107250b14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107250b98; end: 107250c17;  */

void FUN_107250b98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000107250e18(&DAT_10f3678c5,0,&uStack_28);
  uVar1 = uStack_28;
  _malloc(uStack_28);
  func_0x000107250e18(&DAT_10f3678c5,uVar1,&uStack_28);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _free(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107250c18; end: 107250dfb;  */

undefined * FUN_107250c18(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110ea4db8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d00a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar4 = puVar1;
  _objc_retain();
  FUN_107250dfc();
  if (puVar4 != (undefined *)0x0) {
    lVar5 = *plStack_120;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        puVar2 = *(undefined **)(lStack_128 + (long)puVar6 * 8);
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010bfda7c0();
        _objc_release();
        if ((uVar3 & 1) != 0) {
          puVar4 = (undefined *)0x1;
          goto LAB_107250d68;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar4);
      FUN_107250dfc();
      puVar4 = puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
  puVar4 = (undefined *)0x0;
LAB_107250d68:
  func_0x000107250e10();
  uVar3 = param_1;
  _objc_release(param_1);
  func_0x000107250e10();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107250e10();
  _objc_release(param_1);
  func_0x000107250e10();
  __Unwind_Resume(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_1125b2440,&uStack_130,auStack_e8,0x10);
  return puVar1;
}



/* Entry: 107250dfc; end: 107250e23;  */

void FUN_107250dfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107250e24; end: 107250ee3;  */

undefined1 * FUN_107250e24(undefined1 *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  long unaff_x25;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  puVar4 = param_2;
  func_0x00010725bc5c();
  _objc_retain(puVar4);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010725c4f0();
  func_0x00010bfc4180();
  func_0x00010bfc4180(param_2);
  func_0x00010725aa9c((double)fStack_30,(double)fStack_2c,(double)fStack_38,(double)fStack_34);
  func_0x00010725be1c();
  func_0x00010725bb10(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010725be1c();
  func_0x00010725be3c();
  func_0x00010725bb48();
  func_0x00010725bde0();
  func_0x00010725bf5c();
  func_0x00010725c270();
  puVar1 = &stack0xffffffffffffff40;
  func_0x00010725bb34(puVar1,PTR_s_initWithFrame__1125e2948);
  _objc_msgSendSuper2();
  if (puVar1 == (undefined1 *)0x0) goto LAB_107251078;
  puVar2 = puVar1;
  func_0x00010725c870();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c1f8();
  if (puVar2 == (undefined1 *)0x0) {
LAB_107250fd0:
    func_0x00010725be34();
  }
  else {
    lVar3 = *(long *)(unaff_x25 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x00010725be7c();
    func_0x00010725be34();
    if (3 < lVar3) {
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c794();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c0c4();
      func_0x00010725be7c();
      goto LAB_107250fd0;
    }
  }
  func_0x00010bf429a0(puVar1);
  func_0x00010725c370();
  func_0x00010c20eba0();
  lVar3 = *(long *)(unaff_x25 + 0xb68);
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c1f8();
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x25 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x00010725be7c();
    func_0x00010725be34();
    if (lVar3 < 4) goto LAB_107251078;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c794();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
    func_0x00010725be7c();
  }
  func_0x00010725be34();
LAB_107251078:
  func_0x00010725be24();
  func_0x00010725be1c();
  return puVar1;
}



/* Entry: 107250ee4; end: 107251103; -[MGLMapView initWithFrame:styleURL:mapSdk:] */

undefined1 * FUN_107250ee4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x25;
  
  func_0x00010725bb48();
  func_0x00010725bde0();
  func_0x00010725bf5c();
  func_0x00010725c270();
  puVar1 = &stack0xffffffffffffff80;
  func_0x00010725bb34(puVar1,PTR_s_initWithFrame__1125e2948);
  _objc_msgSendSuper2();
  if (puVar1 == (undefined1 *)0x0) goto LAB_107251078;
  puVar2 = puVar1;
  func_0x00010725c870();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c1f8();
  if (puVar2 == (undefined1 *)0x0) {
LAB_107250fd0:
    func_0x00010725be34();
  }
  else {
    lVar3 = *(long *)(unaff_x25 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x00010725be7c();
    func_0x00010725be34();
    if (3 < lVar3) {
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c794();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c0c4();
      func_0x00010725be7c();
      goto LAB_107250fd0;
    }
  }
  func_0x00010bf429a0(puVar1);
  func_0x00010725c370();
  func_0x00010c20eba0();
  lVar3 = *(long *)(unaff_x25 + 0xb68);
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c1f8();
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x25 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x00010725be7c();
    func_0x00010725be34();
    if (lVar3 < 4) goto LAB_107251078;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c794();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
    func_0x00010725be7c();
  }
  func_0x00010725be34();
LAB_107251078:
  func_0x00010725be24();
  func_0x00010725be1c();
  return puVar1;
}



/* Entry: 107251104; end: 1072511eb; -[MGLMapView styleURL] */

void FUN_107251104(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  func_0x00010725bcf4();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (extraout_x8 == 0) {
    func_0x00010c13a0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c3c00();
    func_0x0001077c3734(appuStack_38,*(undefined8 *)(*param_1 + 0x10f8));
    if (-1 < cStack_21) {
      appuStack_38[0] = appuStack_38;
    }
    func_0x00010c25da80(puVar1,param_2,appuStack_38[0]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cd040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bc6c();
    func_0x00010725c438();
    if (puVar1 == (undefined *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      param_1 = (long *)PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010725be1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1072511ec; end: 10725143f; -[MGLMapView setStyleURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072511ec(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x00010725bb24();
  if (unaff_x19 != 0) {
    param_1 = unaff_x19;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010725bbb4();
    if (unaff_x22 != 0) {
      func_0x00010725c424();
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      if (param_1 == 0) {
LAB_10725129c:
        func_0x00010725be2c();
      }
      else {
        lVar1 = *(long *)(unaff_x24 + 0xb68);
        func_0x00010c22b860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725c1f8();
        func_0x00010725be34();
        func_0x00010725be2c();
        if (3 < lVar1) {
          func_0x00010c22b860(*(undefined8 *)(unaff_x24 + 0xb68));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725c0c4();
          goto LAB_10725129c;
        }
      }
      func_0x00010c0ccf60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be1c();
      plVar2 = *(long **)(unaff_x20 + _DAT_112765fc4);
      *(undefined8 *)(unaff_x20 + _DAT_112765fc4) = 0;
      _objc_release();
      func_0x00010725c004();
      uVar3 = *(undefined8 *)(*plVar2 + 0x10f8);
      func_0x00010beec820(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010002b838(auStack_58,unaff_x19);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = 0x3f800000;
      func_0x0001077c372c(uVar3,auStack_58,0,&uStack_80);
      func_0x00010028ad98(&uStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      func_0x00010725be1c();
      goto LAB_1072513bc;
    }
  }
  func_0x00010725c838();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bef4();
  if (param_1 != 0) {
    lVar1 = *(long *)(unaff_x23 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    func_0x00010725be24();
    func_0x00010725be2c();
    if (lVar1 < 4) goto LAB_1072513bc;
    func_0x00010c22b860(*(undefined8 *)(unaff_x23 + 0xb68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
  }
  func_0x00010725be2c();
LAB_1072513bc:
  func_0x00010725be1c();
  return;
}



/* Entry: 107251440; end: 107251487; -[MGLMapView mbglMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107251440(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112765fc0;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110ea4e98,
                        &PTR____CFConstantStringClassReference_110ea4f38);
    lVar1 = *(long *)(param_1 + lVar2);
  }
  return lVar1;
}



/* Entry: 107251488; end: 1072514eb; -[MGLMapView mapSdkSession] */

void FUN_107251488(long param_1)

{
  undefined8 *puVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010725c1c4();
  puVar1 = (undefined8 *)(param_1 + extraout_x8);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010725c1b4();
    } while (extraout_w10 != 0);
  }
  func_0x0001079260b4(&uStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072514ec; end: 1072514ff; -[MGLMapView renderer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1072514ec(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + _DAT_112765fcc) + 8);
}



/* Entry: 107251500; end: 1072523b3; -[MGLMapView commonInitWithMapSdk:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107251500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  undefined4 uVar18;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  undefined4 *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x00010725bba8();
  _objc_storeWeak(unaff_x20 + _DAT_112765fd0,param_3);
  *(undefined1 *)(unaff_x20 + _DAT_112765fd4) = 0;
  func_0x00010c22bc20(PTR_PTR_1126d5598);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0ccfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  func_0x00010725be34();
  func_0x00010725be2c();
  func_0x00010c161080();
  func_0x00010bf41620(0x3fee1e1e1e1e1e1e,0x3fed9d9d9d9d9d9e,0x3fecdcdcdcdcdcdd,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x00010c16e440();
  func_0x00010725be2c();
  func_0x00010725c66c();
  func_0x00010c17d4c0();
  func_0x00010725c66c();
  func_0x00010c160fe0();
  func_0x00010785f1f4();
  uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
  FUN_10724e2c8(lVar6 + 0x4a0,&uStack_1d0);
  FUN_10724e8fc(&uStack_1d0);
  lVar16 = (long)_DAT_112765fd8;
  lVar6 = *(long *)(unaff_x20 + lVar16);
  *(ulong *)(unaff_x20 + lVar16) = uStack_1d0;
  if (lVar6 != 0) {
    func_0x00010725bcdc();
  }
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  uVar2 = (uint)puVar7;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c7a8();
  func_0x00010725bbb4();
  if (puVar5 != (undefined *)0x2) {
    plVar8 = *(long **)(unaff_x20 + lVar16);
    (**(code **)(*plVar8 + 0xd0))();
    uVar2 = (uint)plVar8;
  }
  func_0x000107527e54(&lStack_a8);
  func_0x00010785f1f4();
  func_0x00010725c7a0();
  func_0x00010725c6e8();
  uVar3 = uVar2;
  func_0x00010725c4a8();
  func_0x00010725c7a0();
  func_0x00010725c6e8();
  func_0x00010725c4a8();
  if (((uVar2 & 0x101) != 0x101) && ((uVar3 & 0x101) != 0x101)) {
    _NSSearchPathForDirectoriesInDomains(0xd,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bedc();
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    func_0x00010725bedc();
    puVar7 = PTR_PTR_1126d55d8;
    func_0x00010c22bce0(PTR_PTR_1126d55d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010002b838(auStack_c0,puVar7);
    func_0x000100066230(lStack_a8 + 0x30,auStack_c0);
    puVar7 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c13b4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010002b838(auStack_d8,puVar11);
    func_0x000100066230(lStack_a8 + 0x48,auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    func_0x00010725c158();
    func_0x00010725bedc();
    func_0x00010725be7c();
    func_0x00010725be2c();
  }
  puVar7 = PTR_PTR_1126d55e0;
  func_0x00010bf5e440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c09d980();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    uStack_100 = uStack_100 & 0xffffffffffffff00;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c09d980(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010725c7a0();
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_f0 = uStack_1c0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_e8 = 1;
    func_0x00010725c4a8();
    func_0x00010725bedc();
  }
  func_0x00010725be7c();
  func_0x000107920700(&lStack_110,param_3);
  lStack_118 = lStack_108;
  lStack_120 = lStack_110;
  lVar6 = lStack_110;
  if (lStack_108 != 0) {
    do {
      func_0x00010725c1b4();
    } while (extraout_w10 != 0);
  }
  (**(code **)(**(long **)(unaff_x20 + lVar16) + 0xa8))();
  func_0x00010c14e180(puVar7);
  func_0x00010785f1f4();
  uVar17 = *(ulong *)(lStack_120 + 0x1098);
  lStack_98 = *(long *)(lStack_120 + 0x10a0);
  uStack_a0 = uVar17;
  if (lStack_98 != 0) {
    do {
      func_0x00010725c1b4();
    } while (extraout_w10_00 != 0);
  }
  lVar12 = 0x48;
  __Znwm();
  uStack_1c8 = lStack_98;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_1d0 = uVar17;
  func_0x000107502878(lVar6);
  func_0x00010725afe8(&uStack_1d0);
  func_0x00010725afe8(&uStack_a0);
  plVar13 = (long *)0x70;
  __Znwm();
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&PTR_FUN_110995a30;
  plVar13[3] = (long)&PTR_DAT_110995b00;
  *(undefined1 *)(plVar13 + 4) = 0;
  plVar8 = plVar13;
  func_0x00010054f924();
  plVar13[5] = (long)plVar8;
  func_0x0001073af260();
  (**(code **)(*plVar8 + 0x20))(plVar13 + 6);
  plVar13[3] = (long)&PTR_FUN_110995a80;
  func_0x0001073af260();
  FUN_10725b034(plVar13 + 9);
  plVar13[0xb] = lVar12;
  plVar13[0xc] = (long)(plVar13 + 9);
  plVar13[0xd] = 0;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112765fdc);
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_1c8 = puVar1[1];
  uVar17 = *puVar1;
  *puVar1 = (ulong)(plVar13 + 3);
  puVar1[1] = (ulong)plVar13;
  uStack_1d0 = uVar17;
  FUN_10725b278(&uStack_1d0);
  uVar18 = (undefined4)uVar17;
  FUN_10725b278(&uStack_a0);
  puVar9 = puVar7;
  func_0x00010c0f7be0();
  plVar8 = *(long **)(unaff_x20 + lVar16);
  (**(code **)(*plVar8 + 0xa8))();
  puVar14 = (undefined8 *)0x40;
  __Znwm();
  *puVar14 = &PTR_FUN_110995b40;
  puVar14[1] = lVar12;
  _objc_initWeak(puVar14 + 2);
  *(undefined1 *)(puVar14 + 7) = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[3] = plVar8;
  *(undefined1 *)(puVar14 + 6) = 0;
  lVar6 = *(long *)(unaff_x20 + _DAT_112765fcc);
  *(undefined8 **)(unaff_x20 + _DAT_112765fcc) = puVar14;
  if (lVar6 != 0) {
    func_0x00010725bcdc();
  }
  func_0x000107411934(&puStack_128);
  *puStack_128 = 0;
  lVar6 = unaff_x20;
  func_0x00010c23d0a0();
  *(long *)(puStack_128 + 4) = lVar6;
  func_0x00010c14e180(puVar7);
  puStack_128[6] = uVar18;
  puStack_128[1] = 0;
  puStack_128[2] = 0;
  *(byte *)((long)puStack_128 + 0xd) = (byte)puVar9 ^ 1;
  uStack_138 = puVar1[1];
  uStack_140 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010725c1b4();
    } while (extraout_w10_01 != 0);
  }
  FUN_1072a5508(&uStack_a0);
  lVar6 = lStack_98;
  uVar17 = uStack_a0;
  lVar16 = (long)_DAT_112765fc8;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_1c8 = ((ulong *)(unaff_x20 + lVar16))[1];
  uStack_1d0 = *(ulong *)(unaff_x20 + lVar16);
  ((ulong *)(unaff_x20 + lVar16))[1] = lVar6;
  *(ulong *)(unaff_x20 + lVar16) = uVar17;
  func_0x00010725b704(&uStack_1d0);
  func_0x00010725b704(&uStack_a0);
  func_0x00010725b6e0(&uStack_140);
  lVar12 = (long)_DAT_112765fc0;
  *(undefined8 *)(unaff_x20 + lVar12) = *(undefined8 *)(*(long *)(unaff_x20 + lVar16) + 0xa8);
  lVar6 = unaff_x20;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112765fe0;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar16);
  *(long *)(unaff_x20 + lVar16) = lVar6;
  func_0x00010725bfb4(uVar15);
  func_0x00010725be7c();
  if (puVar5 == (undefined *)0x2) {
    func_0x00010725c66c();
    func_0x00010c190fe0();
  }
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  func_0x00010c120740(PTR_PTR_1126d55a8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112765fe4;
  func_0x00010725be0c();
  iVar4 = (int)*(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010c07bb40();
  if (iVar4 != 0) {
    func_0x00010725c8bc((long)_DAT_112765fe8);
  }
  func_0x00010c24f720(*(undefined8 *)(unaff_x20 + lVar6));
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112765fec;
  func_0x00010725be0c();
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1c3c20(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  func_0x00010725c8bc((long)_DAT_112765ff0);
  puVar5 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_alloc();
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112765ff4;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar5;
  func_0x00010725bfb4(uVar15);
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  func_0x00010725c8bc((long)_DAT_112765ff8);
  puVar5 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_alloc();
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112765ffc;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar5;
  func_0x00010725bfb4(uVar15);
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  *(undefined1 *)(unaff_x20 + _DAT_112766000) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112766004) = 0x402e000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112766008) = 0x4046800000000000;
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_11276600c;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar5;
  func_0x00010725bfb4(uVar15);
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1d0120(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  puVar5 = PTR_PTR_1126d55e8;
  _objc_alloc();
  func_0x00010c00c8c0();
  lVar6 = (long)_DAT_112766010;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar5;
  func_0x00010725bfb4(uVar15);
  func_0x00010c1c8320(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1c3c20(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1374a0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  func_0x00010725c8bc((long)_DAT_112766014);
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112766018;
  func_0x00010725be0c();
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1d01c0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1374a0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1374a0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1374a0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  *(undefined1 *)(unaff_x20 + _DAT_11276601c) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112766020) = uRam00000001136ca190;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112766024;
  func_0x00010725be0c();
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c1c8340(0x3f847ae147ae147b,*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010725c0bc();
  lVar6 = (long)_DAT_112766028;
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar5;
  func_0x00010725bfb4(uVar15);
  func_0x00010c1cafa0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c1e8(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010725c098();
  func_0x00010725c098();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bd2c();
  func_0x00010725be34();
  *(undefined8 *)(unaff_x20 + _DAT_11276602c) = 0;
  func_0x00010785f1f4();
  uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
  puVar5 = puVar5 + 0x8e0;
  FUN_10724e2c8(puVar5,&uStack_1d0);
  if (((ulong)puVar5 & 1) == 0) {
    iVar4 = (int)*(undefined8 *)(unaff_x20 + lVar16);
    func_0x00010c071800();
    if (iVar4 == 0) {
      uStack_190 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
      func_0x00010725c090();
      FUN_10725aba0(&uStack_a0);
      uStack_1b0 = lStack_98;
      uStack_1b8 = uStack_a0;
      uStack_1a0 = uStack_88;
      uStack_1a8 = uStack_90;
      uStack_198 = 1;
      uStack_170 = 1;
      uStack_178 = 0;
      func_0x00010740e218(*(undefined8 *)(unaff_x20 + lVar12),&uStack_1d0);
    }
    else {
      _objc_alloc(PTR_PTR_1126c5ba8);
      func_0x00010c0219a0(0,0);
      func_0x00010725c418();
      func_0x00010bf2a120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1840(*(undefined8 *)(unaff_x20 + lVar16));
      func_0x00010725be7c();
      func_0x00010725be34();
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112766030) = 0x7ff8000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112766034) = 0x7ff8000000000000;
  func_0x0001074119b0(&puStack_128);
  func_0x00010725afc4(&lStack_120);
  func_0x00010725afa0(&lStack_110);
  func_0x0001001148fc(&uStack_100);
  func_0x00010725be2c();
  func_0x000107527f90(&lStack_a8);
  _objc_release(param_3);
  return;
}



/* Entry: 1072523b4; end: 107252417; -[MGLMapView size] */

ulong FUN_1072523b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010725c7f4();
  if (param_3 <= 64.0) {
    uVar2 = 0x40;
  }
  else {
    func_0x00010725c34c();
    uVar2 = (ulong)(uint)(int)param_3;
  }
  func_0x00010725c34c();
  if (param_4 <= 64.0) {
    uVar1 = 0x4000000000;
  }
  else {
    func_0x00010725c34c();
    uVar1 = (ulong)(uint)(int)param_4 << 0x20;
  }
  return uVar1 | uVar2;
}



/* Entry: 107252418; end: 107252577; -[MGLMapView reachabilityChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252418(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int unaff_w19;
  long unaff_x20;
  ulong unaff_x22;
  long lVar3;
  long unaff_x25;
  
  func_0x00010725bb24();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bd20();
  if ((unaff_x22 & 1) == 0) {
    func_0x00010725c870();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bef4();
    if (puVar1 != (undefined *)0x0) {
      lVar3 = *(long *)(unaff_x25 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c1f8();
      func_0x00010725be34();
      func_0x00010725be2c();
      if (lVar3 < 1) goto LAB_10725245c;
      uVar2 = *(undefined8 *)(unaff_x25 + 0xb68);
      func_0x00010c22b860(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48(uVar2);
      func_0x00010725be34();
    }
    func_0x00010725be2c();
  }
LAB_10725245c:
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112765fe8;
  if (((*(byte *)(unaff_x20 + lVar3) & 1) == 0) && (func_0x00010c07bb40(), unaff_w19 != 0)) {
    func_0x000107526454();
  }
  *(undefined1 *)(unaff_x20 + lVar3) = 0;
  func_0x00010725be2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107252578; end: 10725266f; -[MGLMapView destroyCoreObjects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252578(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  func_0x00010c212dc0(param_1,param_2,1);
  func_0x00010bf28e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c238();
  func_0x00010c1ec8c0();
  func_0x00010725be24();
  func_0x00010bf66300(param_1);
  func_0x00010c1ec8e0(param_1);
  func_0x00010c25e2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c238();
  func_0x00010c1ec900();
  func_0x00010725be24();
  FUN_1072b3158(*(undefined8 *)(param_1 + _DAT_112765fc8));
  plVar1 = *(long **)(param_1 + _DAT_112765fdc);
  *(undefined1 *)(plVar1 + 1) = 1;
  (**(code **)(*plVar1 + 0x28))();
  *(undefined8 *)(param_1 + _DAT_112765fc0) = 0;
  func_0x00010725c5dc((long)_DAT_112765fe0);
  _objc_release();
  func_0x00010725c5dc((long)_DAT_112765fd8);
  if (plVar1 != (long *)0x0) {
    func_0x00010725bcdc();
  }
  func_0x00010725c5dc((long)_DAT_112765fcc);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107252658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 107252670; end: 1072527af; -[MGLMapView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252670(long param_1)

{
  long lVar1;
  long unaff_x22;
  long unaff_x23;
  long alStack_50 [2];
  
  lVar1 = param_1;
  func_0x00010725c838();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (lVar1 != 0) {
    func_0x00010c22b860(*(undefined8 *)(unaff_x23 + 0xb68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bef4();
    func_0x00010725bbb4();
    func_0x00010725be24();
    if (unaff_x22 < 4) goto LAB_1072526fc;
    func_0x00010c22b860(*(undefined8 *)(unaff_x23 + 0xb68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
  }
  func_0x00010725be24();
LAB_1072526fc:
  func_0x00010c256380(*(undefined8 *)(param_1 + _DAT_112765fe4));
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  func_0x00010725be24();
  func_0x00010bf6efe0(param_1);
  func_0x00010bf6efa0(param_1);
  func_0x00010725c270();
  alStack_50[0] = param_1;
  _objc_msgSendSuper2(alStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1072527b0; end: 1072527f7; -[MGLMapView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072527b0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  
  func_0x00010725bb24();
  lVar1 = (long)_DAT_112766038;
  _objc_loadWeakRetained(unaff_x20 + lVar1);
  func_0x00010725c4b0();
  if (unaff_x21 != unaff_x19) {
    _objc_storeWeak(unaff_x20 + lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1072527f8; end: 10725291f; -[MGLMapView didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072527f8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  
  func_0x00010725c8f0();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bcb0();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010725c424();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c22b860(*(undefined8 *)(unaff_x24 + 0xb68));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be1c();
      if (unaff_x22 < 1) goto LAB_107252834;
      uVar4 = *(undefined8 *)(unaff_x24 + 0xb68);
      func_0x00010c22b860(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48(uVar4);
      func_0x00010725be2c();
    }
    func_0x00010725be1c();
  }
LAB_107252834:
  uVar2 = param_1;
  func_0x00010c070d20();
  if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + (long)_DAT_112765fcc) != 0)) &&
     (plVar3 = *(long **)(*(long *)(param_1 + (long)_DAT_112765fcc) + 8), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010725c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x140))(plVar3,4);
    return;
  }
  return;
}



/* Entry: 107252920; end: 10725292b; -[MGLMapView viewImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107252920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fd8);
}



/* Entry: 10725292c; end: 107252933; +[MGLMapView requiresConstraintBasedLayout] */

undefined8 FUN_10725292c(void)

{
  return 1;
}



/* Entry: 107252934; end: 10725293f; -[MGLMapView isOpaque] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107252934(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765fd4);
}



/* Entry: 107252940; end: 10725296f; -[MGLMapView setOpaque:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  *(char *)(param_1 + _DAT_112765fd4) = (char)param_3;
  plVar1 = *(long **)(param_1 + _DAT_112765fd8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107252968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_3);
    return;
  }
  return;
}



/* Entry: 107252970; end: 107252973; -[MGLMapView updateViewsPostMapRendering] */

void FUN_107252970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1150d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processPendingBlocks_112622e50);
  return;
}



/* Entry: 107252974; end: 107252a2b; -[MGLMapView renderSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252974(ulong param_1)

{
  ulong uVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = param_1;
  func_0x00010c070d20();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + (long)_DAT_112765fcc);
    if (((lVar2 != 0) && (*(long *)(lVar2 + 8) != 0)) && (*(long *)(lVar2 + 0x20) != 0)) {
      func_0x00010743fefc(auStack_40,*(undefined8 *)(lVar2 + 0x18),0);
      uStack_48 = *(undefined8 *)(lVar2 + 0x28);
      uStack_50 = *(undefined8 *)(lVar2 + 0x20);
      if (*(long *)(lVar2 + 0x28) != 0) {
        do {
          func_0x00010725c1b4();
        } while (extraout_w10 != 0);
      }
      (**(code **)(**(long **)(lVar2 + 8) + 0x30))(*(long **)(lVar2 + 8),&uStack_50);
      func_0x00010725c720();
      func_0x00010744008c(auStack_40);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c28c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViewsPostMapRendering_112680a90);
    return;
  }
  return;
}



/* Entry: 107252a2c; end: 107252a93; -[MGLMapView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252a2c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010725c244();
  func_0x00010725c400();
  if (*(long **)(unaff_x19 + _DAT_112765fd8) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + _DAT_112765fd8) + 0xf0))();
  }
  func_0x00010725c048();
  if (*(long *)(unaff_x19 + extraout_x8) != 0) {
    func_0x00010725bee4();
    func_0x00010725bed0();
    func_0x00010c23d0a0();
    func_0x00010740ec14();
  }
  return;
}



/* Entry: 107252a94; end: 107252a9f; -[MGLMapView setContentInset:] */

void FUN_107252a94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setContentInset_animated_complet_11263e208,0,0);
  return;
}



/* Entry: 107252aa0; end: 107252aa7; -[MGLMapView setContentInset:animated:] */

void FUN_107252aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setContentInset_animated_complet_11263e208,param_3,0);
  return;
}



/* Entry: 107252aa8; end: 107252c07; -[MGLMapView setContentInset:animated:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252aa8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  
  func_0x00010725bb48();
  func_0x00010725c258();
  func_0x00010725c090();
  bVar2 = false;
  if ((unaff_d10 == param_2) && (bVar2 = false, !NAN(unaff_d11) && !NAN(param_1))) {
    bVar2 = unaff_d11 == param_1;
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(unaff_d8) && !NAN(param_4))) {
    bVar3 = unaff_d8 == param_4;
  }
  bVar2 = false;
  if ((bVar3) && (bVar2 = false, !NAN(unaff_d9) && !NAN(param_3))) {
    bVar2 = unaff_d9 == param_3;
  }
  if (bVar2) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8);
    }
  }
  else {
    lVar5 = (long)_DAT_112765fe0;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    func_0x00010c071800();
    if ((int)uVar4 == 0) {
      func_0x00010bf34640();
      func_0x00010c2bf200();
      func_0x00010725c7b8();
      func_0x00010bea2a00(param_1,param_2);
    }
    else {
      func_0x00010725c418();
      func_0x00010725bb34();
      func_0x00010c271cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193420(*(undefined8 *)(unaff_x20 + lVar5),param_6,uVar4,0);
      func_0x00010725be2c();
    }
    pdVar1 = (double *)(unaff_x20 + _DAT_11276603c);
    *pdVar1 = unaff_d11;
    pdVar1[1] = unaff_d10;
    pdVar1[2] = unaff_d9;
    pdVar1[3] = unaff_d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 107252c08; end: 107252c5f; -[MGLMapView contentFrame] */

double FUN_107252c08(undefined8 param_1,double param_2)

{
  double unaff_d8;
  
  func_0x00010725c7f4();
  func_0x00010725befc();
  func_0x00010725c4fc();
  return unaff_d8 + param_2;
}



/* Entry: 107252c60; end: 107252ca7; -[MGLMapView contentCenter] */

undefined1  [16] FUN_107252c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bf4c5a0();
  func_0x00010725befc();
  _CGRectGetMidX();
  uVar1 = param_1;
  func_0x00010725bc78();
  _CGRectGetMidY();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107252ca8; end: 107252dcf; -[MGLMapView processPendingBlocks] */

undefined * FUN_107252ca8(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010725bc5c();
  func_0x00010c0f73c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da1c0(param_1,param_2,puVar2);
  func_0x00010725be2c();
  uVar3 = uVar1;
  _objc_retain();
  func_0x00010725c2a0();
  puVar5 = puRam0000000000000000;
  while (uVar3 != 0) {
    uVar7 = 0;
    do {
      if (puRam0000000000000000 != puVar5) {
        _objc_enumerationMutation(uVar1);
      }
      uVar4 = *(ulong *)(uVar7 * 8);
      (**(code **)(uVar4 + 0x10))();
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar3;
    } while (uVar7 < uVar3);
    func_0x00010725c2a0();
    puVar2 = puVar5;
    uVar3 = uVar4;
  }
  puVar5 = (undefined *)0x0;
  func_0x00010725be1c();
  func_0x00010725be1c();
  func_0x00010725bb10(extraout_x8);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010725be1c();
  func_0x00010725be1c();
  func_0x00010725be3c();
  func_0x00010725bde0();
  puVar5 = puVar2;
  func_0x00010c070c40();
  if ((int)puVar5 != 0) {
    puVar6 = puVar2;
    func_0x00010c0f73c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c084();
    _objc_retainBlock();
    func_0x00010befa120(puVar2,param_2,puVar6);
    func_0x00010725be34();
    func_0x00010725be2c();
  }
  func_0x00010725be1c();
  return puVar5;
}



/* Entry: 107252dd0; end: 107252e4f; -[MGLMapView scheduleTransitionCompletion:] */

undefined8 FUN_107252dd0(void)

{
  undefined8 unaff_x21;
  
  func_0x00010725bde0();
  func_0x00010c070c40();
  if ((int)unaff_x21 != 0) {
    func_0x00010c0f73c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c084();
    _objc_retainBlock();
    func_0x00010befa120();
    func_0x00010725be34();
    func_0x00010725be2c();
  }
  func_0x00010725be1c();
  return unaff_x21;
}



/* Entry: 107252e50; end: 107253117; -[MGLMapView updateFromDisplayLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107252e50(double param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  long lVar6;
  undefined *unaff_x22;
  long lVar7;
  long lVar8;
  long unaff_x25;
  double dVar9;
  
  func_0x00010725bb24();
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c077480();
  func_0x00010725bd20();
  if (((ulong)unaff_x22 & 1) == 0) {
    func_0x00010725c870();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bef4();
    if (puVar1 != (undefined *)0x0) {
      lVar4 = *(long *)(unaff_x25 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c1f8();
      func_0x00010725be34();
      func_0x00010725be2c();
      if (lVar4 < 1) goto LAB_107252e98;
      puVar5 = *(undefined **)(unaff_x25 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf60460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48(puVar5);
      func_0x00010725be34();
    }
    func_0x00010725be2c();
  }
LAB_107252e98:
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c4b0();
  if ((puVar5 == (undefined *)0x0) ||
     ((unaff_x19 != 0 && (unaff_x19 != *(long *)(unaff_x20 + (long)_DAT_112766040)))))
  goto LAB_10725302c;
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c7a8();
  if (puVar5 == (undefined *)0x2) {
    func_0x00010c263460();
    func_0x00010725bd20();
    if (((ulong)unaff_x22 & 1) == 0) goto LAB_10725302c;
  }
  else {
    func_0x00010725be2c();
  }
  func_0x00010725c1c4();
  FUN_1072b49d8(*(undefined8 *)(unaff_x20 + extraout_x8));
  plVar2 = *(long **)(*(long *)(unaff_x20 + (long)_DAT_112765fcc) + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  uVar3 = unaff_x20;
  func_0x00010c0d7320();
  if ((uVar3 & 1) == 0) {
    func_0x00010c0f73c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010725bbb4();
    if (unaff_x22 != (undefined *)0x0) goto LAB_107252f58;
  }
  else {
LAB_107252f58:
    func_0x00010c1cbdc0();
    func_0x00010c1150c0();
    func_0x00010725c824();
    (**(code **)(extraout_x8_00 + 0xc0))();
  }
  uVar3 = unaff_x20;
  func_0x00010bf9c620();
  if ((int)uVar3 != 0) {
    _CACurrentMediaTime();
    dVar9 = param_1;
    func_0x00010c2709c0(*(undefined8 *)(unaff_x20 + (long)_DAT_112766040));
    dVar9 = param_1 - dVar9;
    func_0x00010c19f580();
    func_0x00010bfb71a0();
    lVar6 = (long)_DAT_112766044;
    *(double *)(unaff_x20 + lVar6) = dVar9 + *(double *)(unaff_x20 + lVar6);
    lVar7 = (long)_DAT_112766048;
    lVar4 = *(long *)(unaff_x20 + lVar7) + 1;
    *(long *)(unaff_x20 + lVar7) = lVar4;
    lVar8 = (long)_DAT_11276604c;
    dVar9 = param_1 - *(double *)(unaff_x20 + lVar8);
    if (1.0 <= dVar9) {
      func_0x00010c16dca0((double)lVar4 / dVar9);
      func_0x00010c16dcc0((*(double *)(unaff_x20 + lVar6) / (double)*(long *)(unaff_x20 + lVar7)) *
                          1000.0);
      *(undefined8 *)(unaff_x20 + lVar7) = 0;
      *(undefined8 *)(unaff_x20 + lVar6) = 0;
      *(double *)(unaff_x20 + lVar8) = param_1;
    }
  }
LAB_10725302c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107253118; end: 10725321b; -[MGLMapView setNeedsRerender] */

void FUN_107253118(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  
  func_0x00010725c8f0();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bcb0();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010725c424();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c22b860(*(undefined8 *)(unaff_x24 + 0xb68));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be1c();
      if (unaff_x22 < 1) goto LAB_107253154;
      uVar2 = *(undefined8 *)(unaff_x24 + 0xb68);
      func_0x00010c22b860(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48(uVar2);
      func_0x00010725be2c();
    }
    func_0x00010725be1c();
  }
LAB_107253154:
  func_0x00010725c66c();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10725321c; end: 107253383; -[MGLMapView willTerminate] */

void FUN_10725321c(ulong param_1)

{
  bool bVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010725c8f0();
  func_0x00010725c56c();
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010725c424();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    bVar1 = param_1 != 0;
    param_1 = 0;
    if (bVar1) {
      param_1 = *(ulong *)(unaff_x24 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253250;
      param_1 = *(ulong *)(unaff_x24 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(*(undefined8 *)(unaff_x23 + 0x7e0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48();
      func_0x00010725be2c();
    }
    func_0x00010725be24();
  }
LAB_107253250:
  func_0x00010725c4d0();
  if ((param_1 & 1) == 0) {
    func_0x00010bf85b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    func_0x00010725be24();
    func_0x00010725c4f0();
    func_0x00010c18fc00();
    func_0x00010725c39c();
    func_0x00010c190fe0();
    func_0x00010725c54c();
    if ((extraout_x8 != 0) && (plVar2 = *(long **)(extraout_x8 + 8), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x140))(plVar2,3);
    }
    func_0x00010725c39c();
    func_0x00010c190fe0();
    func_0x00010725bd98();
    (**(code **)(extraout_x8_00 + 0xe0))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107253384; end: 1072533c7; -[MGLMapView windowScreen] */

void FUN_107253384(void)

{
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725bb5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072533c8; end: 107253417; -[MGLMapView isVisible] */

uint FUN_1072533c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c2a72e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20(param_1);
  func_0x00010725be1c();
  return (uint)(lVar1 != 0) & ((uint)param_1 ^ 0xffffffff);
}



/* Entry: 107253418; end: 1072535a3; -[MGLMapView validateDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107253418(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  int unaff_w20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_38 [8];
  
  lVar3 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010725bed0();
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c4b0();
    func_0x00010725be24();
    if (unaff_x21 != 0) {
      lVar3 = (long)_DAT_112766040;
      if (*(long *)(param_1 + lVar3) != 0) {
        return;
      }
      func_0x00010725c048();
      if (*(long *)(param_1 + extraout_x8) != 0) {
        func_0x00010725bee4();
        func_0x00010740ec5c(auStack_38);
        func_0x00010725c51c();
        if (unaff_w20 == 0) {
          func_0x00010725bee4();
          func_0x00010740ec38();
        }
      }
      lVar1 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c150e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85b60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      func_0x00010725bfb4(uVar2);
      func_0x00010725be2c();
      func_0x00010725be24();
      func_0x00010c285320(param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc2c0(uVar2);
      func_0x00010725be24();
      func_0x00010725c39c();
      func_0x00010c1cbdc0();
      func_0x00010c286140(param_1);
      return;
    }
  }
  lVar3 = (long)_DAT_112766040;
  if (*(long *)(param_1 + lVar3) == 0) {
    return;
  }
  func_0x00010c069d00();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1150d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processPendingBlocks_112622e50);
  return;
}



/* Entry: 1072535a4; end: 10725365b; -[MGLMapView updateDisplayLinkPreferredFramesPerSecond] */

/* WARNING: Possible PIC construction at 0x000107253644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107253648) */
/* WARNING: Removing unreachable block (ram,0x00010725bc18) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072535a4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112766040;
  lVar2 = *(long *)(param_1 + lVar5);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112766050);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + _DAT_112766054);
      if (lVar4 == -1) {
        puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
        func_0x00010bf5e640();
        iVar1 = (int)puVar3;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cd000();
        lVar4 = 0x1e;
        if (iVar1 == 0) {
          lVar4 = 0;
        }
        lVar2 = *(long *)(param_1 + lVar5);
      }
    }
    else {
      func_0x00010c067ec0(lVar4);
      lVar4 = (long)(int)lVar4;
      lVar2 = *(long *)(param_1 + lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1dfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setPreferredFramesPerSecond__112655a20,lVar4)
    ;
    return;
  }
  return;
}



/* Entry: 10725365c; end: 10725367b; -[MGLMapView setPreferredFramesPerSecond:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725365c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112766054) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112766054) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c285330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateDisplayLinkPreferredFrames_11267eef0);
  return;
}



/* Entry: 10725367c; end: 1072536bf; -[MGLMapView updatePresentsWithTransaction] */

void FUN_10725367c(void)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  if (unaff_x20 != 0) {
    func_0x00010725bd98();
                    /* WARNING: Could not recover jumptable at 0x0001072536b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 200))();
    return;
  }
  return;
}



/* Entry: 1072536c0; end: 10725371f; -[MGLMapView willMoveToWindow:] */

void FUN_1072536c0(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010725bb24();
  func_0x00010725c270();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_willMoveToWindow__112687408);
  if (unaff_x19 == 0) {
    func_0x00010725c824();
    (**(code **)(extraout_x8 + 200))();
  }
  func_0x00010bf6efe0();
  func_0x00010725be1c();
  return;
}



/* Entry: 107253720; end: 10725376f; -[MGLMapView didMoveToWindow] */

void FUN_107253720(void)

{
  long unaff_x20;
  
  func_0x00010725c244();
  func_0x00010725c400();
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  if (unaff_x20 != 0) {
    func_0x00010c13d7a0();
    func_0x00010c288c00();
  }
  return;
}



/* Entry: 107253770; end: 1072537a3; -[MGLMapView didMoveToSuperview] */

void FUN_107253770(void)

{
  func_0x00010c296880();
  func_0x00010725c270();
  func_0x00010725c400();
  return;
}



/* Entry: 1072537a4; end: 1072537ef; -[MGLMapView stopDisplayLink] */

void FUN_1072537a4(undefined8 param_1)

{
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9980();
  func_0x00010725be24();
  func_0x00010725c288();
  func_0x00010c1cbdc0();
                    /* WARNING: Could not recover jumptable at 0x00010c1150d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processPendingBlocks_112622e50);
  return;
}



/* Entry: 1072537f0; end: 107253bb3; -[MGLMapView createDisplayLink] */

void FUN_1072537f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010725c8f0();
  func_0x00010bf85b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  puVar2 = (undefined *)0x0;
  if (unaff_x20 != 0) {
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b3b60();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253820;
      puVar2 = PTR_PTR_1126c5b68;
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf18();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_107253820:
  func_0x00010bf85b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  puVar3 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0b3b60();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253838;
      puVar3 = PTR_PTR_1126c5b68;
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf18();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_107253838:
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253850;
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf18();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_107253850:
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c4b0();
  func_0x00010725be24();
  if (unaff_x21 == 0) {
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_10725387c;
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf18();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_10725387c:
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c084();
  func_0x00010c18fc40();
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c55c();
  func_0x00010c18fc00();
  func_0x00010725be34();
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010bf85b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9980();
  func_0x00010725be24();
  func_0x00010c285320(param_1);
  lVar1 = param_1;
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(lVar1);
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010725c048();
  if (*(long *)(param_1 + extraout_x8) != 0) {
    func_0x00010725bee4();
    func_0x00010740ec5c(&stack0x00000008);
    func_0x00010725c51c();
    if ((int)lVar1 == 0) {
      func_0x00010725bee4();
      func_0x00010740ec38();
    }
  }
  return;
}



/* Entry: 107253bb4; end: 107253c0b; -[MGLMapView destroyDisplayLink] */

void FUN_107253bb4(undefined8 param_1)

{
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  func_0x00010725be24();
  func_0x00010725c4f0();
  func_0x00010c18fc00();
  func_0x00010725c4f0();
  func_0x00010c18fc40();
  func_0x00010725c288();
  func_0x00010c1cbdc0();
                    /* WARNING: Could not recover jumptable at 0x00010c1150d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_processPendingBlocks_112622e50);
  return;
}



/* Entry: 107253c0c; end: 107253db3; -[MGLMapView startDisplayLink] */

void FUN_107253c0c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long unaff_x22;
  
  puVar1 = param_1;
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c040();
  if (unaff_x20 == 0) {
    puVar2 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    puVar1 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126c5b68;
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253c3c;
      puVar1 = PTR_PTR_1126c5b68;
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_107253c3c:
  func_0x00010725c4e0();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253c44;
      func_0x00010c22b860(PTR_PTR_1126c5b68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf48();
    }
    func_0x00010725be24();
  }
LAB_107253c44:
  func_0x00010bf85b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9980();
  func_0x00010725be24();
  func_0x00010c1cbe80(param_1);
  func_0x00010bf85b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c238();
  func_0x00010c286140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107253db4; end: 107253ee3; -[MGLMapView willResignActive:] */

void FUN_107253db4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010725c8f0();
  func_0x00010725c56c();
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010725c424();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    if (param_1 != 0) {
      func_0x00010c22b860(*(undefined8 *)(unaff_x24 + 0xb68));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253de8;
      uVar2 = *(undefined8 *)(unaff_x24 + 0xb68);
      func_0x00010c22b860(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(*(undefined8 *)(unaff_x23 + 0x7e0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48(uVar2);
      func_0x00010725be2c();
    }
    func_0x00010725be24();
  }
LAB_107253de8:
  func_0x00010725c1c4();
  FUN_1072b48a8(*(undefined8 *)(unaff_x19 + extraout_x8),2);
  func_0x00010c263460();
  if ((unaff_x19 & 1) == 0) {
    func_0x00010c255ea0();
    func_0x00010725c54c();
    if ((extraout_x8_00 != 0) && (plVar1 = *(long **)(extraout_x8_00 + 8), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010725c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x140))(plVar1,2);
      return;
    }
  }
  return;
}



/* Entry: 107253ee4; end: 10725403f; -[MGLMapView didEnterBackground:] */

void FUN_107253ee4(ulong param_1)

{
  bool bVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010725c8f0();
  func_0x00010725c56c();
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077480();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010725c424();
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    bVar1 = param_1 != 0;
    param_1 = 0;
    if (bVar1) {
      param_1 = *(ulong *)(unaff_x24 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bef4();
      func_0x00010725bbb4();
      func_0x00010725be24();
      if (unaff_x22 < 1) goto LAB_107253f18;
      param_1 = *(ulong *)(unaff_x24 + 0xb68);
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60460(*(undefined8 *)(unaff_x23 + 0x7e0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725be5c();
      func_0x00010725bf48();
      func_0x00010725be2c();
    }
    func_0x00010725be24();
  }
LAB_107253f18:
  func_0x00010725c4d0();
  if (((param_1 & 1) == 0) && (func_0x00010c263460(), (unaff_x19 & 1) == 0)) {
    func_0x00010c255ea0();
    func_0x00010725c54c();
    if ((extraout_x8 != 0) && (plVar2 = *(long **)(extraout_x8 + 8), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x140))(plVar2,1);
    }
    func_0x00010bf6efe0();
    func_0x00010c1150c0();
    func_0x00010725bd98();
    (**(code **)(extraout_x8_00 + 0xe0))();
    func_0x00010725c39c();
                    /* WARNING: Could not recover jumptable at 0x00010c190ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 107254040; end: 1072540bf; -[MGLMapView willEnterForeground:] */

void FUN_107254040(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  
  uVar2 = param_1;
  func_0x00010c263460();
  iVar1 = (int)uVar2;
  if (((uVar2 & 1) == 0) && (func_0x00010725c4d0(), iVar1 != 0)) {
    func_0x00010725bd98();
    (**(code **)(extraout_x8 + 0xd0))();
    uVar2 = param_1;
    func_0x00010c2a72e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_1;
      func_0x00010bf55e80();
      iVar1 = (int)uVar3;
      func_0x00010725c4e0();
      if (iVar1 != 0) {
        func_0x00010c24ea00(param_1);
      }
    }
    func_0x00010725c288();
    func_0x00010c190fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1072540c0; end: 1072540eb; -[MGLMapView didBecomeActive:] */

void FUN_1072540c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  int iVar13;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuVar14;
  undefined8 extraout_x8_01;
  ushort uVar15;
  int extraout_w10;
  undefined ***unaff_x19;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined ***apppuStack_168 [3];
  long alStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f1;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *puStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_58;
  ushort uStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x00010c13d7a0();
  func_0x00010725c1c4();
  pppuVar7 = *(undefined ****)(param_1 + extraout_x8);
  iVar13 = 0;
  func_0x0001072ce328();
  iVar1 = *(int *)(pppuVar7 + 0x61);
  *(int *)(pppuVar7 + 0x61) = iVar13;
  bVar4 = iVar13 == 2;
  bVar5 = iVar1 == 2;
  uVar15 = 0;
  if (bVar5) {
    uVar15 = (ushort)!bVar4;
  }
  uVar6 = bVar4 == bVar5;
  pppuVar8 = pppuVar7;
  uStack_38 = extraout_x8_00;
  if (!(bool)uVar6) {
    if (uVar15 == 0) {
      if (!bVar5 && bVar4) {
        if (pppuVar7[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar7[0x45] + 6) = 0;
        }
        ppuVar14 = pppuVar7[0x43];
        if ((*(char *)(ppuVar14 + 5) != '\0') && (*(char *)(ppuVar14 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar14 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar14 + 5) = 0;
        FUN_1072b3118(pppuVar7);
      }
    }
    else {
      ppuVar14 = pppuVar7[0x45];
      if ((ppuVar14 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar14 + 6) = 1, *(char *)(ppuVar14 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar14 + 5) = 0;
      }
      ppuVar14 = pppuVar7[0x43];
      if ((((ulong)ppuVar14[5] & 1) == 0) && (*(char *)(ppuVar14 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar14 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar14 + 5) = 1;
    }
    uVar6 = bVar5 || !bVar4;
    uStack_50 = 0x100;
    if ((bool)uVar6) {
      uStack_50 = 0;
    }
    uStack_50 = uStack_50 | uVar15;
    ppuStack_58 = &PTR_FUN_11099b028;
    pppuStack_40 = &ppuStack_58;
    FUN_107292e94(pppuVar7[0x16],&ppuStack_58);
    pppuVar8 = &ppuStack_58;
    func_0x000107283e00();
    unaff_x19 = pppuVar7;
  }
  func_0x0001072ce0cc(uStack_38);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000107283e00();
    func_0x0001072ce900();
    func_0x0001072ce1e4();
    uStack_b8 = extraout_x8_01;
    func_0x0001072cefbc();
    if (unaff_x19[0x15] != (undefined **)0x0) {
      FUN_1072d31fc(unaff_x19[0x23]);
      ppuVar14 = unaff_x19[0x30];
      func_0x00010731d558(ppuVar14);
      ppuVar16 = unaff_x19[0x18];
      __ZNSt3__16chrono12steady_clock3nowEv();
      (**(code **)(*ppuVar16 + 0x38))(ppuVar16,ppuVar14);
      func_0x00010739ed6c(unaff_x19[0x52]);
      (**(code **)(*unaff_x19[0x1a] + 0x58))();
      uStack_f1 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_109 = 0;
      ppuVar14 = unaff_x19[0x16];
      puVar9 = &uStack_140;
      func_0x0001072cfea4();
      puStack_128 = &uStack_f1;
      puStack_120 = &uStack_108;
      puStack_118 = &uStack_109;
      puStack_d8 = (undefined8 *)0x0;
      func_0x0001072cf8f0();
      *puVar9 = &PTR_FUN_11099b0a8;
      puVar9[2] = uStack_138;
      puVar9[1] = uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      puVar9[3] = uStack_130;
      puVar3 = puStack_128;
      puVar9[5] = puStack_120;
      puVar9[4] = puVar3;
      puVar9[6] = puStack_118;
      puStack_d8 = puVar9;
      FUN_107292e94(ppuVar14,&uStack_f0);
      func_0x000107283e00(&uStack_f0);
      func_0x00010725b1d4(&uStack_140);
      ppuVar14 = unaff_x19[0x43];
      FUN_1072769d4(&uStack_f0,unaff_x19[0x33]);
      uStack_d0 = uStack_109;
      uStack_cf = uStack_f1;
      uStack_c0 = uStack_100;
      uStack_c8 = uStack_108;
      FUN_1072df4f4(ppuVar14,&uStack_f0);
      puVar10 = &uStack_f0;
      func_0x00010794120c();
      puVar17 = unaff_x19[0x43][0x1f];
      puVar2 = unaff_x19[0x43][0x20];
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      do {
        func_0x0001072cfb28();
      } while (extraout_w10 != 0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      if ((((ulong)puVar2 & 1) != 0) &&
         (func_0x0001078bc120(puVar10 + 0x70,puVar17,(ulong)puVar17 >> 0x20),
         *(char *)((long)unaff_x19 + 0x2f2) == '\x01')) {
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
      }
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      FUN_1072b2d9c(alStack_150);
      if (alStack_150[0] != 0) {
        func_0x0001072cf1f8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (apppuStack_168,alStack_150[0]);
        func_0x0001078bc160(puVar10 + 0x70,&uStack_f0,apppuStack_168);
        func_0x0001003ac718();
        func_0x0001072ceea4();
      }
      FUN_10724c894(alStack_150);
      func_0x0001078bc240(puVar10 + 0x70);
      ppuVar14 = unaff_x19[0x45];
      if (ppuVar14 != (undefined **)0x0) {
        func_0x00010740e088(&uStack_f0,unaff_x19[0x15]);
        FUN_1073117c4(CONCAT44(uStack_ec,uStack_f0),ppuVar14);
      }
      pppuVar7 = unaff_x19 + 0x70;
      FUN_10724bb70(&uStack_f0);
      if (CONCAT44(uStack_ec,uStack_f0) != 0) {
        ppuVar14 = unaff_x19[0x6f];
        func_0x0001072cedd4();
        *pppuVar7 = &PTR_FUN_11099b128;
        pppuVar7[1] = ppuVar14;
        pppuVar7[2] = (undefined **)FUN_1072b4ec4;
        pppuVar7[3] = (undefined **)0x0;
        apppuStack_168[0] = pppuVar7;
        func_0x0001072cfdc8();
        func_0x0001072cf558();
        if (pppuVar7 != (undefined ***)0x0) {
          func_0x0001072ce338();
        }
      }
      puVar10 = &uStack_f0;
      func_0x00010724bcd8();
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar11 = puVar10;
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppuVar8 = (undefined ***)(puVar10 + 2);
      func_0x00010743f974(pppuVar8,puVar11);
    }
    if (((ulong)unaff_x19[0x5e] & 1) == 0) {
      func_0x00010785f1f4();
      uStack_f0 = 0;
      pppuVar7 = pppuVar8 + 0xd8;
      FUN_1072b86c8(pppuVar7,&uStack_f0);
      pppuVar8 = pppuVar7;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((int)pppuVar7 != 0) &&
         ((long)((ulong)pppuVar7 & 0xffffffff) < ((long)pppuVar8 - (long)unaff_x19[4]) / 1000000)) {
        func_0x0001072cfa78();
        puStack_d8 = (undefined8 *)CONCAT44(puStack_d8._4_4_,1);
        pppuVar8 = unaff_x19;
        func_0x0001072cfd24();
        func_0x0001003ac718();
      }
    }
    uVar6 = 0;
    if ((*(char *)(unaff_x19 + 0x5e) == '\x01') &&
       (uVar6 = 0, *(char *)(unaff_x19[0x24] + 7) == '\x01')) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar6 = false;
      if ((*(char *)(unaff_x19 + 0x69) != '\x01') ||
         (uVar6 = (long)pppuVar8 - (long)unaff_x19[0x68] == 0x77359401,
         2000000000 < (long)pppuVar8 - (long)unaff_x19[0x68])) {
        pppuVar7 = pppuVar8;
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        func_0x0001072cf1f8();
        func_0x0001077538cc(pppuVar7 + 0x1b,&uStack_f0);
        func_0x0001072ceea4();
        if (((ulong)unaff_x19[0x69] & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x69) = 1;
        }
        unaff_x19[0x68] = (undefined **)pppuVar8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x2f2) = 0;
    func_0x0001072cec24();
    func_0x0001072ce0cc(uStack_b8);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar10 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072cec24();
      func_0x0001072ce94c();
      func_0x00010785f1f4();
      plVar12 = (long *)(puVar10 + 0x16c);
      FUN_10724e330();
      if (((uint)plVar12 & 0x101) != 0x100) {
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        puVar9 = (undefined8 *)*plVar12;
        if (puRam0000000113847068 != (undefined8 *)0x0) {
          puVar9 = puRam0000000113847068;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*puVar9 + 0x20))();
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1072540ec; end: 107254103; -[MGLMapView context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072540ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107254100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + _DAT_112765fd8) + 0xb0))();
  return;
}



/* Entry: 107254104; end: 10725410b; -[MGLMapView supportsBackgroundRendering] */

undefined8 FUN_107254104(void)

{
  return 0;
}



/* Entry: 10725410c; end: 10725428f; -[MGLMapView resumeRenderingIfNecessary] */

/* WARNING: Removing unreachable block (ram,0x000107254198) */

void FUN_10725410c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar5;
  long extraout_x8;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  puVar4 = puVar3;
  func_0x00010725be24();
  iVar1 = (int)puVar4;
  if (puVar3 != (undefined *)0x2) {
    func_0x00010725c4d0();
    if (iVar1 != 0) {
      func_0x00010725bd98();
      (**(code **)(extraout_x8 + 0xd0))();
      func_0x00010725c288();
      func_0x00010c190fe0();
    }
    func_0x00010bf85b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c040();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c2a72e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c040();
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010725be24();
    func_0x00010725c4e0();
    func_0x00010bf85b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c040();
    if (puVar2 != (undefined *)0x0) {
      uVar5 = param_1;
      func_0x00010bf85b20(param_1);
      _objc_retainAutoreleasedReturnValue();
      if ((int)puVar3 == 0) {
        func_0x00010c079ba0(uVar5);
        func_0x00010725bc8c();
        if (((ulong)puVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopDisplayLink_1126731d0);
          return;
        }
      }
      else {
        func_0x00010c079ba0(uVar5);
        func_0x00010725bc8c();
        if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startDisplayLink_1126714a8);
          return;
        }
      }
    }
  }
  else {
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c7a8();
    func_0x00010725bbb4();
    func_0x00010725be24();
  }
  return;
}



/* Entry: 107254290; end: 107254307; -[MGLMapView isDisplayLinkActive] */

uint FUN_107254290(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf85b20(param_1);
    uVar1 = (uint)param_1;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079ba0();
    uVar1 = uVar1 ^ 1;
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  return uVar1;
}



/* Entry: 107254308; end: 10725435f; -[MGLMapView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107254308(undefined8 param_1,undefined8 param_2,int param_3)

{
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x00010725c244();
  _objc_msgSendSuper2(auStack_30,PTR_s_setHidden__1126479f8);
  func_0x00010725c4e0();
  func_0x00010c1d9980(*(undefined8 *)(unaff_x19 + _DAT_112766040));
  if (param_3 != 0) {
    func_0x00010c1150c0();
  }
  return;
}



/* Entry: 107254360; end: 107254367; -[MGLMapView canBecomeFirstResponder] */

undefined8 FUN_107254360(void)

{
  return 1;
}



/* Entry: 107254368; end: 1072543f7; -[MGLMapView touchesBegan:withEvent:] */

void FUN_107254368(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x00010725c1c4();
  (**(code **)(**(long **)(uVar2 + extraout_x8) + 0x198))();
  uVar2 = param_1;
  func_0x00010c083e40();
  iVar1 = (int)uVar2;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c07a140();
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c07cc00();
      iVar1 = (int)uVar2;
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010c07d3e0();
        iVar1 = (int)uVar2;
        if (iVar1 == 0) {
          return;
        }
      }
    }
  }
  func_0x00010725c3c0();
  if (iVar1 == 0) {
    func_0x00010725bee4();
    func_0x00010740e068();
  }
  else {
    func_0x00010c1a2f40(*(undefined8 *)(param_1 + unaff_x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelTransitions_1125a96a0);
  return;
}



/* Entry: 1072543f8; end: 10725444f; -[MGLMapView notifyGestureDidBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072543f8(long param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf2bd40(param_1,param_2,0);
  iVar1 = (int)lVar2;
  func_0x00010725c3c0();
  if (iVar1 == 0) {
    func_0x00010725bee4();
    func_0x00010740e068();
  }
  else {
    func_0x00010c1a2f40(*(undefined8 *)(param_1 + unaff_x20));
  }
  *(long *)(param_1 + _DAT_112766058) = *(long *)(param_1 + _DAT_112766058) + 1;
  return;
}



/* Entry: 107254450; end: 107254593; -[MGLMapView notifyGestureDidEndWithDrift:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107254450(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x25;
  
  lVar4 = (long)_DAT_112766058;
  lVar3 = *(long *)(param_1 + lVar4);
  lVar2 = lVar3 + -1;
  *(long *)(param_1 + lVar4) = lVar2;
  if (0 < lVar3) goto joined_r0x000107254570;
  lVar2 = param_1;
  func_0x00010725c870();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (lVar2 == 0) {
LAB_107254568:
    func_0x00010725be2c();
  }
  else {
    lVar2 = *(long *)(unaff_x25 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c1f8();
    func_0x00010725be34();
    func_0x00010725be2c();
    if (0 < lVar2) {
      func_0x00010c22b860(*(undefined8 *)(unaff_x25 + 0xb68));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bf48();
      goto LAB_107254568;
    }
  }
  lVar2 = *(long *)(param_1 + lVar4);
joined_r0x000107254570:
  if (lVar2 == 0) {
    lVar2 = (long)_DAT_112765fe0;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c071800();
    if (iVar1 == 0) {
      func_0x00010725bee4();
      func_0x00010740e068();
    }
    else {
      func_0x00010c1a2f40(*(undefined8 *)(param_1 + lVar2));
    }
  }
  if ((param_3 & 1) == 0) {
    func_0x00010725c288();
                    /* WARNING: Could not recover jumptable at 0x00010bf29530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 107254594; end: 1072545ab; -[MGLMapView isSuppressingChangeDelimiters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107254594(long param_1)

{
  return 0 < *(long *)(param_1 + _DAT_112766058);
}



/* Entry: 1072545ac; end: 1072546cb; -[MGLMapView _shouldChangeFromCamera:toCamera:] */

ulong FUN_1072545ac(void)

{
  ulong uVar1;
  ulong unaff_x21;
  
  func_0x00010725bde0();
  func_0x00010725bf5c();
  uVar1 = unaff_x21;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010725be34();
  if ((uVar1 & 1) == 0) {
    uVar1 = unaff_x21;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725be34();
    if ((uVar1 & 1) == 0) {
      unaff_x21 = 1;
      goto LAB_107254688;
    }
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c5e8();
    func_0x00010c0ba5a0();
  }
  else {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c038();
    func_0x00010725c5e8(unaff_x21);
    func_0x00010c0ba5c0();
  }
  func_0x00010725be34();
LAB_107254688:
  func_0x00010725be24();
  func_0x00010725be1c();
  return unaff_x21;
}



/* Entry: 1072546cc; end: 107254ac7; -[MGLMapView handlePanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072546cc(double param_1,double param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar13;
  undefined8 extraout_x8_01;
  double *unaff_x19;
  double *unaff_x21;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double dVar19;
  undefined1 auStack_4f8 [8];
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  undefined1 uStack_4a0;
  double dStack_488;
  undefined1 uStack_480;
  ulong uStack_460;
  undefined1 uStack_458;
  undefined7 uStack_457;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined1 uStack_428;
  double dStack_420;
  double dStack_418;
  undefined1 uStack_410;
  undefined1 uStack_400;
  double dStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  double dStack_310;
  double dStack_308;
  double dStack_2d0;
  double dStack_2c8;
  undefined1 uStack_2c0;
  double dStack_2b8;
  undefined1 uStack_2b0;
  double dStack_298;
  undefined1 uStack_290;
  undefined1 auStack_280 [64];
  double dStack_240;
  double dStack_238;
  undefined1 uStack_230;
  double dStack_228;
  undefined1 uStack_220;
  double dStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1d8;
  long lStack_130;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  func_0x00010725bc00();
  uStack_88 = extraout_x8;
  func_0x00010725be6c();
  pdVar8 = unaff_x21;
  func_0x00010c07d3e0();
  if (((ulong)pdVar8 & 1) != 0) {
    func_0x00010725c0d4();
    pdVar8 = unaff_x21;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c024();
    func_0x00010bf29160();
    func_0x00010725c0cc();
    func_0x00010725bec8();
    in_ZR = pdVar8 == (double *)0x1;
    if ((bool)in_ZR) {
      pdVar8 = *(double **)((long)unaff_x21 + (long)_DAT_112765fc8);
      func_0x0001072b6fc8();
      func_0x00010725c760();
    }
    else {
      func_0x00010725bec8();
      puVar2 = PTR__CGPointZero_110347540;
      in_ZR = pdVar8 == (double *)0x2;
      if ((bool)in_ZR) {
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725c55c();
        func_0x00010c27adc0();
        func_0x00010725c364();
        func_0x00010725be34();
        param_1 = (double)(ulong)(uint)-(float)unaff_d9;
        param_2 = (double)(ulong)(uint)-(float)unaff_d8;
        func_0x0001072b6ff0(*(undefined8 *)((long)unaff_x21 + (long)_DAT_112765fc8));
        pdVar8 = unaff_x21;
        func_0x00010725bf70();
        func_0x00010bf29060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bb68();
        if ((int)pdVar8 != 0) {
          lVar13 = (long)_DAT_112765fe0;
          uVar11 = *(undefined8 *)((long)unaff_x21 + lVar13);
          func_0x00010c071800();
          if ((int)uVar11 == 0) {
            func_0x00010725beec();
            _bzero(&lStack_130,0xa8);
            func_0x00010740e324(uVar11,&stack0xfffffffffffffec0,&lStack_130);
            func_0x00010725c4a0();
          }
          else {
            func_0x00010725bf70(*(undefined8 *)((long)unaff_x21 + lVar13));
            func_0x00010c0d13a0();
          }
          unaff_d8 = *(double *)puVar2;
          unaff_d9 = *(double *)(puVar2 + 8);
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725bf64();
          func_0x00010c219ba0();
          func_0x00010725be7c();
          pdVar8 = unaff_x19;
        }
        func_0x00010725c758();
        func_0x00010725be34();
      }
      else {
        func_0x00010725bec8();
        if (pdVar8 != (double *)0x3) {
          func_0x00010725bec8();
          in_ZR = pdVar8 == (double *)0x4;
          if (!(bool)in_ZR) goto LAB_1072549f0;
        }
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725c55c();
        func_0x00010c297a00();
        func_0x00010725bf50();
        func_0x00010725be34();
        func_0x00010725c0dc();
        fVar14 = SQRT((float)(unaff_d9 * unaff_d9 + unaff_d8 * unaff_d8));
        bVar3 = true;
        if ((param_1 != 0.0) && (bVar3 = false, !NAN(fVar14))) {
          bVar3 = fVar14 < 100.0;
        }
        if (bVar3) {
          param_2 = *(double *)puVar2;
          dVar16 = *(double *)(puVar2 + 8);
          func_0x00010725c5d0();
        }
        else {
          param_2 = *(double *)puVar2;
          dVar16 = *(double *)(puVar2 + 8);
        }
        in_ZR = unaff_d9 != dVar16 || unaff_d8 != param_2;
        param_1 = dVar16;
        if ((bool)in_ZR) {
          func_0x00010725c0dc();
          param_1 = dVar16;
          func_0x00010725c0dc();
          param_2 = unaff_d8 * dVar16;
          unaff_d8 = param_2 * 0.25;
          param_1 = unaff_d9 * param_1;
          unaff_d9 = param_1 * 0.25;
          func_0x00010725bf64();
          func_0x00010bf29060();
          _objc_retainAutoreleasedReturnValue();
          pdVar8 = unaff_x21;
          func_0x00010beb2c40();
          if ((int)pdVar8 != 0) {
            lVar13 = (long)_DAT_112765fe0;
            uVar11 = *(undefined8 *)((long)unaff_x21 + lVar13);
            func_0x00010c071800();
            if ((int)uVar11 == 0) {
              func_0x00010725beec();
              func_0x00010725c0dc();
              param_2 = 1000000000.0;
              param_1 = param_1 * 1000000000.0;
              lStack_130 = (long)param_1;
              uStack_128 = 1;
              uStack_120 = 0;
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              uStack_100 = 0;
              uStack_d0 = 0;
              uStack_b0 = 0;
              uStack_90 = 0;
              func_0x00010740e324(uVar11,&stack0xfffffffffffffec0,&lStack_130);
              func_0x00010725c4a0();
            }
            else {
              func_0x00010725c0dc();
              func_0x00010bf03e40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010725bf64(*(undefined8 *)((long)unaff_x21 + lVar13));
              func_0x00010c0d13a0();
              func_0x00010725bedc();
            }
          }
          func_0x00010725be7c();
          unaff_d10 = dVar16;
        }
        func_0x0001072b6fdc(*(undefined8 *)((long)unaff_x21 + (long)_DAT_112765fc8));
        func_0x00010c0dd1e0();
        pdVar8 = unaff_x21;
      }
    }
LAB_1072549f0:
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725c4a0();
  func_0x00010725be7c();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725bc00();
  uStack_1d8 = extraout_x8_00;
  func_0x00010725be6c();
  pdVar9 = pdVar8;
  func_0x00010c083e40();
  dVar16 = param_1;
  if (((ulong)pdVar9 & 1) != 0) {
    func_0x00010725c0d4();
    dVar16 = param_2;
    func_0x00010725c1e0(pdVar8);
    pdVar9 = pdVar8;
    dVar18 = param_1;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c024();
    func_0x00010bf29160();
    func_0x00010725c0cc();
    func_0x00010725bec8();
    if (pdVar9 == (double *)0x1) {
      func_0x00010c2bf200(pdVar8);
      fVar14 = (float)dVar18;
      _exp2f();
      unaff_d8 = (double)fVar14;
      func_0x00010c1f5fe0(pdVar8);
      func_0x00010725c7e0();
      pdVar9 = *(double **)((long)pdVar8 + (long)_DAT_112765ffc);
      dVar18 = unaff_d8;
      func_0x00010c2979e0();
      in_ZR = ABS(unaff_d8) == ABS(dVar18);
      if (ABS(dVar18) < ABS(unaff_d8)) {
        pdVar9 = pdVar8;
        func_0x00010c1b5c40();
      }
      func_0x00010725c760();
    }
    else {
      func_0x00010725bec8();
      in_ZR = pdVar9 == (double *)0x2;
      if ((bool)in_ZR) {
        func_0x00010c14e120(pdVar8);
        dVar17 = dVar18;
        func_0x00010c14e120();
        unaff_d8 = dVar18 * dVar17;
        _log2();
        pdVar9 = pdVar8;
        func_0x00010bf290c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bb68();
        if ((int)pdVar9 != 0) {
          lVar13 = (long)_DAT_112765fe0;
          iVar7 = (int)*(undefined8 *)((long)pdVar8 + lVar13);
          func_0x00010c071800();
          if (iVar7 == 0) {
            pdVar10 = pdVar8;
            func_0x00010c26efc0();
            _objc_retainAutoreleasedReturnValue();
            pdVar9 = pdVar10;
            _objc_release();
            dStack_240 = param_1;
            dStack_238 = dVar16;
            dStack_228 = unaff_d8;
            if (pdVar10 == (double *)0x0) {
              func_0x00010725beec();
              func_0x00010725bf40(auStack_280);
              uStack_220 = 1;
              uStack_230 = 1;
              func_0x00010725c030();
              pdVar9 = &dStack_310;
              FUN_10725aba0();
              func_0x00010725c594();
              func_0x00010725c468();
            }
            else {
              func_0x00010725beec();
              func_0x00010725bf40(auStack_280);
              uStack_220 = 1;
              pdVar10 = pdVar8;
              func_0x00010c26efc0();
              _objc_retainAutoreleasedReturnValue();
              dVar18 = unaff_d8;
              (*(code *)pdVar10[2])();
              uStack_200 = 1;
              uStack_230 = 1;
              dStack_208 = dVar18;
              func_0x00010725c030();
              FUN_10725aba0(&dStack_310);
              func_0x00010725c594();
              func_0x00010740e218(pdVar9,auStack_280);
              func_0x00010725be7c();
            }
          }
          else {
            pdVar9 = *(double **)((long)pdVar8 + lVar13);
            func_0x00010c0d1800(param_1,dVar16,unaff_d8);
          }
          func_0x00010725c7c8();
          in_ZR = pdVar9 == *(double **)((long)pdVar8 + (long)_DAT_11276605c);
          if ((bool)in_ZR) {
            pdVar9 = *(double **)((long)pdVar8 + lVar13);
            func_0x00010c071800();
            if ((int)pdVar9 == 0) {
              func_0x00010725beec();
              dStack_310 = param_1 - *(double *)((long)pdVar8 + (long)_DAT_112766060);
              dStack_308 = dVar16 - ((double *)((long)pdVar8 + (long)_DAT_112766060))[1];
              _bzero(auStack_280,0xa8);
              func_0x00010740e324(pdVar9,&dStack_310,auStack_280);
              func_0x00010725c00c();
            }
            else {
              pdVar9 = *(double **)((long)pdVar8 + lVar13);
              func_0x00010c0d13a0(param_1 - *(double *)((long)pdVar8 + (long)_DAT_112766060),
                                  dVar16 - ((double *)((long)pdVar8 + (long)_DAT_112766060))[1]);
            }
          }
        }
        func_0x00010725c758();
      }
      else {
        func_0x00010725bec8();
        if (pdVar9 != (double *)0x3) {
          func_0x00010725bec8();
          in_ZR = pdVar9 == (double *)0x4;
          if (!(bool)in_ZR) goto LAB_107254ff4;
        }
        func_0x00010725c7e0();
        if (NAN(dVar18)) {
          dVar18 = 0.0;
        }
        bVar3 = false;
        bVar5 = true;
        bVar4 = false;
        if (dVar18 < 3.0) {
          bVar3 = false;
          bVar5 = false;
          bVar4 = true;
          if (!NAN(dVar18)) {
            bVar3 = dVar18 < -0.5;
            bVar5 = dVar18 == -0.5;
            bVar4 = false;
          }
        }
        unaff_d10 = 0.0;
        if (bVar5 || bVar3 != bVar4) {
          unaff_d10 = dVar18;
        }
        func_0x00010725c0dc();
        dVar17 = 0.25;
        dVar19 = 1.0;
        if (unaff_d10 <= 0.0) {
          dVar19 = 0.25;
        }
        func_0x00010c14e120(pdVar8);
        dVar15 = dVar17;
        func_0x00010c14e120();
        unaff_d8 = dVar19 * dVar18;
        dVar17 = dVar17 * dVar15;
        if (0.0 <= unaff_d10) {
          dVar18 = unaff_d8 * unaff_d10 * dVar17;
        }
        else {
          dVar18 = dVar17 / (unaff_d10 * unaff_d8);
        }
        unaff_d9 = dVar17 + dVar18 * 0.1;
        if (unaff_d9 <= 0.0) {
          _log2();
LAB_107254ce4:
          unaff_d10 = 0.0;
        }
        else {
          _log2();
          func_0x00010725beec();
          func_0x00010740eb48(auStack_280);
          if (unaff_d9 < dStack_240) goto LAB_107254ce4;
        }
        pdVar9 = pdVar8;
        func_0x00010bf290c0(unaff_d9,param_1,dVar16);
        uVar6 = (uint)pdVar9;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bb68();
        uVar1 = 0;
        if (unaff_d10 != 0.0) {
          uVar1 = uVar6;
        }
        in_ZR = unaff_d8 == 0.0;
        uVar6 = 0;
        if (!(bool)in_ZR) {
          uVar6 = uVar1;
        }
        if ((uVar6 & 1) != 0) {
          lVar13 = (long)_DAT_112765fe0;
          iVar7 = (int)*(undefined8 *)((long)pdVar8 + lVar13);
          func_0x00010c071800();
          if (iVar7 == 0) {
            pdVar9 = pdVar8;
            func_0x00010c26efc0();
            _objc_retainAutoreleasedReturnValue();
            pdVar10 = pdVar9;
            _objc_release();
            dStack_2d0 = param_1;
            dStack_2c8 = dVar16;
            dStack_2b8 = unaff_d9;
            if (pdVar9 == (double *)0x0) {
              func_0x00010725beec();
              func_0x00010725bf40(&dStack_310);
              uStack_2b0 = 1;
              uStack_2c0 = 1;
              func_0x00010725c030();
              func_0x00010725c3d8();
              func_0x00010725c57c();
              func_0x00010725bb7c(unaff_d8 * 1000000000.0);
              func_0x00010740e24c(pdVar10,&dStack_310,auStack_280);
              func_0x00010725c00c();
            }
            else {
              func_0x00010725beec();
              func_0x00010725bf40(&dStack_310);
              uStack_2b0 = 1;
              pdVar9 = pdVar8;
              func_0x00010c26efc0();
              _objc_retainAutoreleasedReturnValue();
              dVar18 = unaff_d9;
              (*(code *)pdVar9[2])();
              uStack_290 = 1;
              uStack_2c0 = 1;
              dStack_298 = dVar18;
              func_0x00010725c030();
              func_0x00010725c3d8();
              func_0x00010725c57c();
              func_0x00010725bb7c(unaff_d8 * 1000000000.0);
              func_0x00010740e24c(pdVar10,&dStack_310,auStack_280);
              func_0x00010725c00c();
              func_0x00010725bedc();
            }
          }
          else {
            func_0x00010725c418();
            func_0x00010bf03e40(unaff_d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d1800(param_1,dVar16,unaff_d9,*(undefined8 *)((long)pdVar8 + lVar13));
            func_0x00010725bedc();
          }
        }
        func_0x00010c1b5c40(pdVar8);
        func_0x00010c0dd1e0(pdVar8);
        pdVar9 = pdVar8;
        func_0x00010c2823e0();
      }
      func_0x00010725be34();
    }
LAB_107254ff4:
    lVar13 = (long)_DAT_112766060;
    *(double *)((long)pdVar8 + lVar13) = param_1;
    ((double *)((long)pdVar8 + lVar13))[1] = dVar16;
    func_0x00010725c7c8();
    *(double **)((long)pdVar8 + (long)_DAT_11276605c) = pdVar9;
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_1d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725bfc8();
  func_0x00010725be34();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725bc00();
  uStack_3b8 = extraout_x8_01;
  func_0x00010725be6c();
  pdVar9 = pdVar8;
  func_0x00010c07cc00();
  if (((ulong)pdVar9 & 1) == 0) goto LAB_1072553d0;
  func_0x00010725c0d4();
  func_0x00010725c1e0(pdVar8);
  func_0x00010725c364();
  func_0x00010bf28e60(pdVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c024();
  func_0x00010bf29160();
  func_0x00010725c0cc();
  pdVar9 = pdVar8;
  func_0x00010c141b20();
  func_0x00010725c5c4();
  func_0x00010c141d00();
  dVar18 = (unaff_d10 * 180.0) / 3.141592653589793;
  in_ZR = dVar18 == dVar16;
  if (((dVar16 <= dVar18) || (pdVar9 = pdVar8, func_0x00010c083e60(), (int)pdVar9 == 0)) ||
     (func_0x00010725c750(), ((ulong)pdVar9 & 1) != 0)) {
    func_0x00010725bec8();
    if ((pdVar9 == (double *)0x1) || (func_0x00010725c750(), ((ulong)pdVar9 & 1) == 0)) {
      func_0x00010725beec();
      uStack_4f0 = 0;
      uStack_4d0 = uStack_4d0 & 0xffffffffffffff00;
      func_0x00010740e07c(&uStack_460);
      dVar16 = (dStack_3f8 * 3.141592653589793) / -180.0;
      func_0x00010c167da0(pdVar8);
      pdVar9 = pdVar8;
      func_0x00010c1b3fe0();
      func_0x00010725c760();
    }
    func_0x00010725bec8();
    in_ZR = pdVar9 == (double *)0x2;
    if ((bool)in_ZR) {
      func_0x00010bf02ae0(pdVar8);
      dVar18 = dVar16;
      func_0x00010725c7d0();
      pdVar9 = pdVar8;
      func_0x00010c07cc80();
      dVar16 = (dVar16 + dVar18) * 180.0;
      dVar18 = dVar16 / -3.141592653589793;
      if (((ulong)pdVar9 & 1) == 0) {
        func_0x00010c14e120(*(undefined8 *)((long)pdVar8 + (long)_DAT_112765ff4));
        in_ZR = ABS(dVar16) == 10.0;
        if (ABS(dVar16) < 10.0) {
          fVar14 = (float)NEON_fminnm((float)dVar18,0x41f00000);
          if (fVar14 <= -30.0) {
            fVar14 = -30.0;
          }
          dVar18 = (double)fVar14;
        }
      }
      pdVar9 = pdVar8;
      func_0x00010725c200();
      iVar7 = (int)pdVar9;
      func_0x00010bf29080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bb68();
      if (iVar7 != 0) {
        lVar13 = (long)_DAT_112765fe0;
        iVar7 = (int)*(undefined8 *)((long)pdVar8 + lVar13);
        func_0x00010c071800();
        if (iVar7 == 0) {
          func_0x00010725beec();
          func_0x00010725bf40(&uStack_460);
          uStack_3f0 = 1;
          uStack_410 = 1;
          dStack_420 = unaff_d9;
          dStack_418 = unaff_d8;
          dStack_3f8 = dVar18;
          func_0x00010725c030();
          FUN_10725aba0(&uStack_4f0);
          uStack_448 = CONCAT71(uStack_4ef,uStack_4f0);
          uStack_440 = uStack_4e8;
          uStack_430 = uStack_4d8;
          uStack_438 = uStack_4e0;
          uStack_428 = 1;
          func_0x00010725c468();
        }
        else {
          func_0x00010725bf70(*(undefined8 *)((long)pdVar8 + lVar13));
          func_0x00010c0d17c0();
        }
      }
      func_0x00010725c758();
LAB_1072553c8:
      func_0x00010725be34();
    }
    else {
      func_0x00010725bec8();
      in_ZR = pdVar9 == (double *)0x3;
      if (!(bool)in_ZR) {
        func_0x00010725bec8();
        in_ZR = pdVar9 == (double *)0x4;
        if (!(bool)in_ZR) goto LAB_1072553cc;
      }
      dVar16 = 0.0;
      pdVar9 = pdVar8;
      func_0x00010c1ee800();
      iVar7 = (int)pdVar9;
      func_0x00010725c750();
      if (iVar7 != 0) {
        func_0x00010c1b3fe0(pdVar8);
        func_0x00010725c7e0();
        dVar18 = dVar16;
        func_0x00010725c0dc();
        dVar17 = ABS(dVar16);
        bVar3 = false;
        in_ZR = true;
        bVar5 = false;
        if (dVar18 != 0.0) {
          bVar3 = false;
          in_ZR = false;
          bVar5 = true;
          if (!NAN(dVar17)) {
            bVar3 = dVar17 < 3.0;
            in_ZR = dVar17 == 3.0;
            bVar5 = false;
          }
        }
        if (!(bool)in_ZR && bVar3 == bVar5) {
          func_0x00010bf02ae0(pdVar8);
          dVar19 = dVar17;
          func_0x00010725c7d0();
          dVar16 = ((dVar17 + dVar19 + dVar16 * dVar18 * 0.1) * 180.0) / -3.141592653589793;
          pdVar9 = pdVar8;
          func_0x00010bf29080(dVar16,unaff_d9,unaff_d8);
          iVar7 = (int)pdVar9;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725bb68();
          if (iVar7 != 0) {
            lVar13 = (long)_DAT_112765fe0;
            uVar11 = *(undefined8 *)((long)pdVar8 + lVar13);
            func_0x00010c071800();
            if ((int)uVar11 == 0) {
              func_0x00010725beec();
              func_0x00010725bf40(&uStack_4f0);
              uStack_480 = 1;
              uStack_4a0 = 1;
              dStack_4b0 = unaff_d9;
              dStack_4a8 = unaff_d8;
              dStack_488 = dVar16;
              func_0x00010725c030();
              FUN_10725aba0(&uStack_460);
              uStack_4d0 = CONCAT71(uStack_457,uStack_458);
              uStack_4d8 = uStack_460;
              uStack_4c0 = uStack_448;
              uStack_4c8 = uStack_450;
              uStack_4b8 = 1;
              uStack_460 = (ulong)(dVar18 * 1000000000.0);
              uStack_458 = 1;
              func_0x00010725be4c();
              uStack_438 = uStack_438 & 0xffffffffffffff00;
              uStack_430 = uStack_430 & 0xffffffffffffff00;
              uStack_400 = 0;
              uStack_3e0 = 0;
              uStack_3c0 = 0;
              func_0x00010740e24c(uVar11,&uStack_4f0,&uStack_460);
              func_0x00010725ab38(&uStack_460);
            }
            else {
              func_0x00010725c418();
              func_0x00010bf03e40(dVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010725bf70(*(undefined8 *)((long)pdVar8 + lVar13));
              func_0x00010c0d17c0();
              func_0x00010725be7c();
            }
            func_0x00010c0dd1e0(pdVar8);
            func_0x00010725c2f4(&uStack_460);
            func_0x00010725c264();
            func_0x00010725c87c(FUN_107255630,0xc2000000);
            _objc_copyWeak(auStack_4f8,&uStack_460);
            func_0x00010bf033e0(dVar18,pdVar8);
            func_0x00010725c1f0();
            _objc_destroyWeak(&uStack_460);
          }
          goto LAB_1072553c8;
        }
        func_0x00010725c730(pdVar8);
        func_0x00010c2823e0(pdVar8);
      }
    }
  }
  else {
    func_0x00010725c7d0();
    dVar18 = dVar16;
    func_0x00010c141b20(pdVar8);
    func_0x00010c1ee800(ABS(dVar16) + dVar18,pdVar8);
    func_0x00010c1ee7a0(0);
  }
LAB_1072553cc:
  func_0x00010725be24();
LAB_1072553d0:
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_3b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar12 = &uStack_460;
    func_0x00010725ab38(puVar12);
    func_0x00010725be34();
    func_0x00010725be24();
    func_0x00010725be1c();
    func_0x00010725bf2c();
    func_0x00010725c460();
    func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
}



/* Entry: 107254ac8; end: 107255107; -[MGLMapView handlePinchGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107254ac8(double param_1,double param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  double *unaff_x21;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double dVar17;
  undefined1 auStack_3b8 [8];
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  double dStack_370;
  double dStack_368;
  undefined1 uStack_360;
  double dStack_348;
  undefined1 uStack_340;
  ulong uStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined1 uStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2c0;
  double dStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_190;
  double dStack_188;
  undefined1 uStack_180;
  double dStack_178;
  undefined1 uStack_170;
  double dStack_158;
  undefined1 uStack_150;
  undefined1 auStack_140 [64];
  double dStack_100;
  double dStack_f8;
  undefined1 uStack_f0;
  double dStack_e8;
  undefined1 uStack_e0;
  double dStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_98;
  
  func_0x00010725bc00();
  uStack_98 = extraout_x8;
  func_0x00010725be6c();
  pdVar7 = unaff_x21;
  func_0x00010c083e40();
  dVar14 = param_1;
  if (((ulong)pdVar7 & 1) != 0) {
    func_0x00010725c0d4();
    dVar14 = param_2;
    func_0x00010725c1e0();
    pdVar7 = unaff_x21;
    dVar16 = param_1;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c024();
    func_0x00010bf29160();
    func_0x00010725c0cc();
    func_0x00010725bec8();
    if (pdVar7 == (double *)0x1) {
      func_0x00010c2bf200();
      fVar12 = (float)dVar16;
      _exp2f();
      unaff_d8 = (double)fVar12;
      func_0x00010c1f5fe0();
      func_0x00010725c7e0();
      pdVar7 = *(double **)((long)unaff_x21 + (long)_DAT_112765ffc);
      dVar16 = unaff_d8;
      func_0x00010c2979e0();
      in_ZR = ABS(unaff_d8) == ABS(dVar16);
      if (ABS(dVar16) < ABS(unaff_d8)) {
        pdVar7 = unaff_x21;
        func_0x00010c1b5c40();
      }
      func_0x00010725c760();
    }
    else {
      func_0x00010725bec8();
      in_ZR = pdVar7 == (double *)0x2;
      if ((bool)in_ZR) {
        func_0x00010c14e120();
        dVar15 = dVar16;
        func_0x00010c14e120();
        unaff_d8 = dVar16 * dVar15;
        _log2();
        pdVar7 = unaff_x21;
        func_0x00010bf290c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bb68();
        if ((int)pdVar7 != 0) {
          lVar11 = (long)_DAT_112765fe0;
          iVar6 = (int)*(undefined8 *)((long)unaff_x21 + lVar11);
          func_0x00010c071800();
          if (iVar6 == 0) {
            pdVar8 = unaff_x21;
            func_0x00010c26efc0();
            _objc_retainAutoreleasedReturnValue();
            pdVar7 = pdVar8;
            _objc_release();
            dStack_100 = param_1;
            dStack_f8 = dVar14;
            dStack_e8 = unaff_d8;
            if (pdVar8 == (double *)0x0) {
              func_0x00010725beec();
              func_0x00010725bf40(auStack_140);
              uStack_e0 = 1;
              uStack_f0 = 1;
              func_0x00010725c030();
              pdVar7 = &dStack_1d0;
              FUN_10725aba0();
              func_0x00010725c594();
              func_0x00010725c468();
            }
            else {
              func_0x00010725beec();
              func_0x00010725bf40(auStack_140);
              uStack_e0 = 1;
              pdVar8 = unaff_x21;
              func_0x00010c26efc0();
              _objc_retainAutoreleasedReturnValue();
              dVar16 = unaff_d8;
              (*(code *)pdVar8[2])();
              uStack_c0 = 1;
              uStack_f0 = 1;
              dStack_c8 = dVar16;
              func_0x00010725c030();
              FUN_10725aba0(&dStack_1d0);
              func_0x00010725c594();
              func_0x00010740e218(pdVar7,auStack_140);
              func_0x00010725be7c();
            }
          }
          else {
            pdVar7 = *(double **)((long)unaff_x21 + lVar11);
            func_0x00010c0d1800(param_1,dVar14,unaff_d8);
          }
          func_0x00010725c7c8();
          in_ZR = pdVar7 == *(double **)((long)unaff_x21 + (long)_DAT_11276605c);
          if ((bool)in_ZR) {
            pdVar7 = *(double **)((long)unaff_x21 + lVar11);
            func_0x00010c071800();
            if ((int)pdVar7 == 0) {
              func_0x00010725beec();
              dStack_1d0 = param_1 - *(double *)((long)unaff_x21 + (long)_DAT_112766060);
              dStack_1c8 = dVar14 - ((double *)((long)unaff_x21 + (long)_DAT_112766060))[1];
              _bzero(auStack_140,0xa8);
              func_0x00010740e324(pdVar7,&dStack_1d0,auStack_140);
              func_0x00010725c00c();
            }
            else {
              pdVar7 = *(double **)((long)unaff_x21 + lVar11);
              func_0x00010c0d13a0(param_1 - *(double *)((long)unaff_x21 + (long)_DAT_112766060),
                                  dVar14 - ((double *)((long)unaff_x21 + (long)_DAT_112766060))[1]);
            }
          }
        }
        func_0x00010725c758();
      }
      else {
        func_0x00010725bec8();
        if (pdVar7 != (double *)0x3) {
          func_0x00010725bec8();
          in_ZR = pdVar7 == (double *)0x4;
          if (!(bool)in_ZR) goto LAB_107254ff4;
        }
        func_0x00010725c7e0();
        if (NAN(dVar16)) {
          dVar16 = 0.0;
        }
        bVar2 = false;
        bVar4 = true;
        bVar3 = false;
        if (dVar16 < 3.0) {
          bVar2 = false;
          bVar4 = false;
          bVar3 = true;
          if (!NAN(dVar16)) {
            bVar2 = dVar16 < -0.5;
            bVar4 = dVar16 == -0.5;
            bVar3 = false;
          }
        }
        unaff_d10 = 0.0;
        if (bVar4 || bVar2 != bVar3) {
          unaff_d10 = dVar16;
        }
        func_0x00010725c0dc();
        dVar15 = 0.25;
        dVar17 = 1.0;
        if (unaff_d10 <= 0.0) {
          dVar17 = 0.25;
        }
        func_0x00010c14e120();
        dVar13 = dVar15;
        func_0x00010c14e120();
        unaff_d8 = dVar17 * dVar16;
        dVar15 = dVar15 * dVar13;
        if (0.0 <= unaff_d10) {
          dVar16 = unaff_d8 * unaff_d10 * dVar15;
        }
        else {
          dVar16 = dVar15 / (unaff_d10 * unaff_d8);
        }
        unaff_d9 = dVar15 + dVar16 * 0.1;
        if (unaff_d9 <= 0.0) {
          _log2();
LAB_107254ce4:
          unaff_d10 = 0.0;
        }
        else {
          _log2();
          func_0x00010725beec();
          func_0x00010740eb48(auStack_140);
          if (unaff_d9 < dStack_100) goto LAB_107254ce4;
        }
        pdVar7 = unaff_x21;
        func_0x00010bf290c0(unaff_d9,param_1,dVar14);
        uVar5 = (uint)pdVar7;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bb68();
        uVar1 = 0;
        if (unaff_d10 != 0.0) {
          uVar1 = uVar5;
        }
        in_ZR = unaff_d8 == 0.0;
        uVar5 = 0;
        if (!(bool)in_ZR) {
          uVar5 = uVar1;
        }
        if ((uVar5 & 1) != 0) {
          lVar11 = (long)_DAT_112765fe0;
          iVar6 = (int)*(undefined8 *)((long)unaff_x21 + lVar11);
          func_0x00010c071800();
          if (iVar6 == 0) {
            pdVar7 = unaff_x21;
            func_0x00010c26efc0();
            _objc_retainAutoreleasedReturnValue();
            pdVar8 = pdVar7;
            _objc_release();
            dStack_190 = param_1;
            dStack_188 = dVar14;
            dStack_178 = unaff_d9;
            if (pdVar7 == (double *)0x0) {
              func_0x00010725beec();
              func_0x00010725bf40(&dStack_1d0);
              uStack_170 = 1;
              uStack_180 = 1;
              func_0x00010725c030();
              func_0x00010725c3d8();
              func_0x00010725c57c();
              func_0x00010725bb7c(unaff_d8 * 1000000000.0);
              func_0x00010740e24c(pdVar8,&dStack_1d0,auStack_140);
              func_0x00010725c00c();
            }
            else {
              func_0x00010725beec();
              func_0x00010725bf40(&dStack_1d0);
              uStack_170 = 1;
              pdVar7 = unaff_x21;
              func_0x00010c26efc0();
              _objc_retainAutoreleasedReturnValue();
              dVar16 = unaff_d9;
              (*(code *)pdVar7[2])();
              uStack_150 = 1;
              uStack_180 = 1;
              dStack_158 = dVar16;
              func_0x00010725c030();
              func_0x00010725c3d8();
              func_0x00010725c57c();
              func_0x00010725bb7c(unaff_d8 * 1000000000.0);
              func_0x00010740e24c(pdVar8,&dStack_1d0,auStack_140);
              func_0x00010725c00c();
              func_0x00010725bedc();
            }
          }
          else {
            func_0x00010725c418();
            func_0x00010bf03e40(unaff_d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d1800(param_1,dVar14,unaff_d9,*(undefined8 *)((long)unaff_x21 + lVar11));
            func_0x00010725bedc();
          }
        }
        func_0x00010c1b5c40();
        func_0x00010c0dd1e0();
        pdVar7 = unaff_x21;
        func_0x00010c2823e0();
      }
      func_0x00010725be34();
    }
LAB_107254ff4:
    lVar11 = (long)_DAT_112766060;
    *(double *)((long)unaff_x21 + lVar11) = param_1;
    ((double *)((long)unaff_x21 + lVar11))[1] = dVar14;
    func_0x00010725c7c8();
    *(double **)((long)unaff_x21 + (long)_DAT_11276605c) = pdVar7;
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725bfc8();
  func_0x00010725be34();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725bc00();
  uStack_278 = extraout_x8_00;
  func_0x00010725be6c();
  pdVar7 = unaff_x21;
  func_0x00010c07cc00();
  if (((ulong)pdVar7 & 1) == 0) goto LAB_1072553d0;
  func_0x00010725c0d4();
  func_0x00010725c1e0();
  func_0x00010725c364();
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c024();
  func_0x00010bf29160();
  func_0x00010725c0cc();
  pdVar7 = unaff_x21;
  func_0x00010c141b20();
  func_0x00010725c5c4();
  func_0x00010c141d00();
  dVar16 = (unaff_d10 * 180.0) / 3.141592653589793;
  in_ZR = dVar16 == dVar14;
  if (((dVar14 <= dVar16) || (pdVar7 = unaff_x21, func_0x00010c083e60(), (int)pdVar7 == 0)) ||
     (func_0x00010725c750(), ((ulong)pdVar7 & 1) != 0)) {
    func_0x00010725bec8();
    if ((pdVar7 == (double *)0x1) || (func_0x00010725c750(), ((ulong)pdVar7 & 1) == 0)) {
      func_0x00010725beec();
      uStack_3b0 = 0;
      uStack_390 = uStack_390 & 0xffffffffffffff00;
      func_0x00010740e07c(&uStack_320);
      dVar14 = (dStack_2b8 * 3.141592653589793) / -180.0;
      func_0x00010c167da0();
      pdVar7 = unaff_x21;
      func_0x00010c1b3fe0();
      func_0x00010725c760();
    }
    func_0x00010725bec8();
    in_ZR = pdVar7 == (double *)0x2;
    if ((bool)in_ZR) {
      func_0x00010bf02ae0();
      dVar16 = dVar14;
      func_0x00010725c7d0();
      pdVar7 = unaff_x21;
      func_0x00010c07cc80();
      dVar14 = (dVar14 + dVar16) * 180.0;
      dVar16 = dVar14 / -3.141592653589793;
      if (((ulong)pdVar7 & 1) == 0) {
        func_0x00010c14e120(*(undefined8 *)((long)unaff_x21 + (long)_DAT_112765ff4));
        in_ZR = ABS(dVar14) == 10.0;
        if (ABS(dVar14) < 10.0) {
          fVar12 = (float)NEON_fminnm((float)dVar16,0x41f00000);
          if (fVar12 <= -30.0) {
            fVar12 = -30.0;
          }
          dVar16 = (double)fVar12;
        }
      }
      pdVar7 = unaff_x21;
      func_0x00010725c200();
      iVar6 = (int)pdVar7;
      func_0x00010bf29080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bb68();
      if (iVar6 != 0) {
        lVar11 = (long)_DAT_112765fe0;
        iVar6 = (int)*(undefined8 *)((long)unaff_x21 + lVar11);
        func_0x00010c071800();
        if (iVar6 == 0) {
          func_0x00010725beec();
          func_0x00010725bf40(&uStack_320);
          uStack_2b0 = 1;
          uStack_2d0 = 1;
          dStack_2e0 = unaff_d9;
          dStack_2d8 = unaff_d8;
          dStack_2b8 = dVar16;
          func_0x00010725c030();
          FUN_10725aba0(&uStack_3b0);
          uStack_308 = CONCAT71(uStack_3af,uStack_3b0);
          uStack_300 = uStack_3a8;
          uStack_2f0 = uStack_398;
          uStack_2f8 = uStack_3a0;
          uStack_2e8 = 1;
          func_0x00010725c468();
        }
        else {
          func_0x00010725bf70(*(undefined8 *)((long)unaff_x21 + lVar11));
          func_0x00010c0d17c0();
        }
      }
      func_0x00010725c758();
LAB_1072553c8:
      func_0x00010725be34();
    }
    else {
      func_0x00010725bec8();
      in_ZR = pdVar7 == (double *)0x3;
      if (!(bool)in_ZR) {
        func_0x00010725bec8();
        in_ZR = pdVar7 == (double *)0x4;
        if (!(bool)in_ZR) goto LAB_1072553cc;
      }
      dVar14 = 0.0;
      pdVar7 = unaff_x21;
      func_0x00010c1ee800();
      iVar6 = (int)pdVar7;
      func_0x00010725c750();
      if (iVar6 != 0) {
        func_0x00010c1b3fe0();
        func_0x00010725c7e0();
        dVar16 = dVar14;
        func_0x00010725c0dc();
        dVar15 = ABS(dVar14);
        bVar2 = false;
        in_ZR = true;
        bVar4 = false;
        if (dVar16 != 0.0) {
          bVar2 = false;
          in_ZR = false;
          bVar4 = true;
          if (!NAN(dVar15)) {
            bVar2 = dVar15 < 3.0;
            in_ZR = dVar15 == 3.0;
            bVar4 = false;
          }
        }
        if (!(bool)in_ZR && bVar2 == bVar4) {
          func_0x00010bf02ae0();
          dVar17 = dVar15;
          func_0x00010725c7d0();
          dVar14 = ((dVar15 + dVar17 + dVar14 * dVar16 * 0.1) * 180.0) / -3.141592653589793;
          pdVar7 = unaff_x21;
          func_0x00010bf29080(dVar14,unaff_d9,unaff_d8);
          iVar6 = (int)pdVar7;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725bb68();
          if (iVar6 != 0) {
            lVar11 = (long)_DAT_112765fe0;
            uVar9 = *(undefined8 *)((long)unaff_x21 + lVar11);
            func_0x00010c071800();
            if ((int)uVar9 == 0) {
              func_0x00010725beec();
              func_0x00010725bf40(&uStack_3b0);
              uStack_340 = 1;
              uStack_360 = 1;
              dStack_370 = unaff_d9;
              dStack_368 = unaff_d8;
              dStack_348 = dVar14;
              func_0x00010725c030();
              FUN_10725aba0(&uStack_320);
              uStack_390 = CONCAT71(uStack_317,uStack_318);
              uStack_398 = uStack_320;
              uStack_380 = uStack_308;
              uStack_388 = uStack_310;
              uStack_378 = 1;
              uStack_320 = (ulong)(dVar16 * 1000000000.0);
              uStack_318 = 1;
              func_0x00010725be4c();
              uStack_2f8 = uStack_2f8 & 0xffffffffffffff00;
              uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
              uStack_2c0 = 0;
              uStack_2a0 = 0;
              uStack_280 = 0;
              func_0x00010740e24c(uVar9,&uStack_3b0,&uStack_320);
              func_0x00010725ab38(&uStack_320);
            }
            else {
              func_0x00010725c418();
              func_0x00010bf03e40(dVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010725bf70(*(undefined8 *)((long)unaff_x21 + lVar11));
              func_0x00010c0d17c0();
              func_0x00010725be7c();
            }
            func_0x00010c0dd1e0();
            func_0x00010725c2f4(&uStack_320);
            func_0x00010725c264();
            func_0x00010725c87c(FUN_107255630,0xc2000000);
            _objc_copyWeak(auStack_3b8,&uStack_320);
            func_0x00010bf033e0(dVar16);
            func_0x00010725c1f0();
            _objc_destroyWeak(&uStack_320);
          }
          goto LAB_1072553c8;
        }
        func_0x00010725c730();
        func_0x00010c2823e0();
      }
    }
  }
  else {
    func_0x00010725c7d0();
    dVar16 = dVar14;
    func_0x00010c141b20();
    func_0x00010c1ee800(ABS(dVar14) + dVar16);
    func_0x00010c1ee7a0(0);
  }
LAB_1072553cc:
  func_0x00010725be24();
LAB_1072553d0:
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_278);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar10 = &uStack_320;
    func_0x00010725ab38(puVar10);
    func_0x00010725be34();
    func_0x00010725be24();
    func_0x00010725be1c();
    func_0x00010725bf2c();
    func_0x00010725c460();
    func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return;
  }
  return;
}



/* Entry: 107255108; end: 10725562f; -[MGLMapView handleRotateGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107255108(double param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 extraout_x8;
  ulong unaff_x21;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double unaff_d10;
  double dVar11;
  undefined1 auStack_1c8 [8];
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  double dStack_c8;
  
  func_0x00010725bc00();
  func_0x00010725be6c();
  uVar4 = unaff_x21;
  func_0x00010c07cc00();
  if ((uVar4 & 1) == 0) goto LAB_1072553d0;
  func_0x00010725c0d4();
  func_0x00010725c1e0();
  func_0x00010725c364();
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c024();
  func_0x00010bf29160();
  func_0x00010725c0cc();
  uVar4 = unaff_x21;
  func_0x00010c141b20();
  func_0x00010725c5c4();
  func_0x00010c141d00();
  dVar10 = (unaff_d10 * 180.0) / 3.141592653589793;
  in_ZR = dVar10 == param_1;
  if (((param_1 <= dVar10) || (uVar4 = unaff_x21, func_0x00010c083e60(), (int)uVar4 == 0)) ||
     (func_0x00010725c750(), (uVar4 & 1) != 0)) {
    func_0x00010725bec8();
    if ((uVar4 == 1) || (func_0x00010725c750(), (uVar4 & 1) == 0)) {
      func_0x00010725beec();
      uStack_1c0 = 0;
      uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
      func_0x00010740e07c(&uStack_130);
      param_1 = (dStack_c8 * 3.141592653589793) / -180.0;
      func_0x00010c167da0();
      uVar4 = unaff_x21;
      func_0x00010c1b3fe0();
      func_0x00010725c760();
    }
    func_0x00010725bec8();
    in_ZR = uVar4 == 2;
    if ((bool)in_ZR) {
      func_0x00010bf02ae0();
      dVar10 = param_1;
      func_0x00010725c7d0();
      uVar4 = unaff_x21;
      func_0x00010c07cc80();
      dVar10 = (param_1 + dVar10) * 180.0;
      dVar11 = dVar10 / -3.141592653589793;
      if ((uVar4 & 1) == 0) {
        func_0x00010c14e120(*(undefined8 *)(unaff_x21 + (long)_DAT_112765ff4));
        in_ZR = ABS(dVar10) == 10.0;
        if (ABS(dVar10) < 10.0) {
          NEON_fminnm((float)dVar11,0x41f00000);
        }
      }
      uVar4 = unaff_x21;
      func_0x00010725c200();
      iVar3 = (int)uVar4;
      func_0x00010bf29080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bb68();
      if (iVar3 != 0) {
        lVar7 = (long)_DAT_112765fe0;
        iVar3 = (int)*(undefined8 *)(unaff_x21 + lVar7);
        func_0x00010c071800();
        if (iVar3 == 0) {
          func_0x00010725beec();
          func_0x00010725bf40(&uStack_130);
          func_0x00010725c030();
          FUN_10725aba0(&uStack_1c0);
          uStack_118 = CONCAT71(uStack_1bf,uStack_1c0);
          uStack_110 = uStack_1b8;
          uStack_100 = uStack_1a8;
          uStack_108 = uStack_1b0;
          uStack_f8 = 1;
          func_0x00010725c468();
        }
        else {
          func_0x00010725bf70(*(undefined8 *)(unaff_x21 + lVar7));
          func_0x00010c0d17c0();
        }
      }
      func_0x00010725c758();
LAB_1072553c8:
      func_0x00010725be34();
    }
    else {
      func_0x00010725bec8();
      in_ZR = uVar4 == 3;
      if (!(bool)in_ZR) {
        func_0x00010725bec8();
        in_ZR = uVar4 == 4;
        if (!(bool)in_ZR) goto LAB_1072553cc;
      }
      dVar10 = 0.0;
      uVar4 = unaff_x21;
      func_0x00010c1ee800();
      iVar3 = (int)uVar4;
      func_0x00010725c750();
      if (iVar3 != 0) {
        func_0x00010c1b3fe0();
        func_0x00010725c7e0();
        dVar11 = dVar10;
        func_0x00010725c0dc();
        dVar8 = ABS(dVar10);
        bVar1 = false;
        in_ZR = true;
        bVar2 = false;
        if (dVar11 != 0.0) {
          bVar1 = false;
          in_ZR = false;
          bVar2 = true;
          if (!NAN(dVar8)) {
            bVar1 = dVar8 < 3.0;
            in_ZR = dVar8 == 3.0;
            bVar2 = false;
          }
        }
        if (!(bool)in_ZR && bVar1 == bVar2) {
          func_0x00010bf02ae0();
          dVar9 = dVar8;
          func_0x00010725c7d0();
          uVar4 = unaff_x21;
          func_0x00010bf29080(((dVar8 + dVar9 + dVar10 * dVar11 * 0.1) * 180.0) / -3.141592653589793
                             );
          iVar3 = (int)uVar4;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725bb68();
          if (iVar3 != 0) {
            lVar7 = (long)_DAT_112765fe0;
            uVar5 = *(undefined8 *)(unaff_x21 + lVar7);
            func_0x00010c071800();
            if ((int)uVar5 == 0) {
              func_0x00010725beec();
              func_0x00010725bf40(&uStack_1c0);
              func_0x00010725c030();
              FUN_10725aba0(&uStack_130);
              uStack_1a0 = CONCAT71(uStack_127,uStack_128);
              uStack_1a8 = uStack_130;
              uStack_190 = uStack_118;
              uStack_198 = uStack_120;
              uStack_188 = 1;
              uStack_130 = (ulong)(dVar11 * 1000000000.0);
              uStack_128 = 1;
              func_0x00010725be4c();
              uStack_108 = uStack_108 & 0xffffffffffffff00;
              uStack_100 = uStack_100 & 0xffffffffffffff00;
              func_0x00010740e24c(uVar5,&uStack_1c0,&uStack_130);
              func_0x00010725ab38(&uStack_130);
            }
            else {
              func_0x00010725c418();
              func_0x00010bf03e40(dVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010725bf70(*(undefined8 *)(unaff_x21 + lVar7));
              func_0x00010c0d17c0();
              func_0x00010725be7c();
            }
            func_0x00010c0dd1e0();
            func_0x00010725c2f4(&uStack_130);
            func_0x00010725c264();
            func_0x00010725c87c(FUN_107255630,0xc2000000);
            _objc_copyWeak(auStack_1c8,&uStack_130);
            func_0x00010bf033e0(dVar11);
            func_0x00010725c1f0();
            _objc_destroyWeak(&uStack_130);
          }
          goto LAB_1072553c8;
        }
        func_0x00010725c730();
        func_0x00010c2823e0();
      }
    }
  }
  else {
    func_0x00010725c7d0();
    dVar10 = param_1;
    func_0x00010c141b20();
    func_0x00010c1ee800(ABS(param_1) + dVar10);
    func_0x00010c1ee7a0(0);
  }
LAB_1072553cc:
  func_0x00010725be24();
LAB_1072553d0:
  func_0x00010725be1c();
  func_0x00010725bb10(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_130;
  func_0x00010725ab38(puVar6);
  func_0x00010725be34();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107255630; end: 10725565b;  */

void FUN_107255630(undefined8 param_1)

{
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10725565c; end: 1072556af; -[MGLMapView handleSdkSingleTapGesture:] */

void FUN_10725565c(long param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010725bb24();
  func_0x00010725bec8();
  if (param_1 == 3) {
    func_0x00010725bfd4();
    func_0x00010725c218();
    func_0x00010725c1c4();
    func_0x00010725c6b0(*(undefined8 *)(unaff_x20 + extraout_x8));
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 1072556b0; end: 1072558df; -[MGLMapView handleDoubleTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072556b0(double param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined8 uStack_78;
  
  lVar3 = param_2;
  func_0x00010725bc5c();
  uStack_78 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bec8();
  uVar1 = lVar3 == 3;
  if (((bool)uVar1) && (lVar3 = param_2, func_0x00010c083e40(), (int)lVar3 != 0)) {
    func_0x00010bf2f3e0(param_2);
    func_0x00010bf29160(param_2);
    func_0x00010c176340(param_2);
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200(param_2);
    func_0x00010725c1e0(param_2);
    func_0x00010725c364();
    func_0x00010725c200((long)param_1,0x3ff0000000000000,param_2);
    func_0x00010bf290c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010beb2c40();
    if ((int)lVar3 == 0) {
      func_0x00010c2823e0(param_2);
    }
    else {
      lVar3 = (long)_DAT_112765fe0;
      iVar2 = (int)*(undefined8 *)(param_2 + lVar3);
      func_0x00010c071800();
      if (iVar2 == 0) {
        func_0x00010c0c3c00(param_2);
        func_0x00010725bdd0();
        func_0x00010725c624();
        func_0x00010bf4c7c0(param_2);
        func_0x00010725c3d8();
        func_0x00010725c1d0(auStack_120[0],uStack_110);
        func_0x00010725bb7c();
        func_0x00010725c440();
        func_0x00010725c00c();
      }
      else {
        func_0x00010725c418();
        func_0x00010bf03e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bf70(*(undefined8 *)(param_2 + lVar3));
        func_0x00010725c684();
        func_0x00010725be7c();
      }
      _objc_initWeak(auStack_120,param_2);
      func_0x00010725c264();
      func_0x00010725c60c(FUN_1072558e0,0xc2000000);
      func_0x00010725c780();
      func_0x00010bf033e0(0x3fd3333333333333,param_2);
      func_0x00010725c1f0();
      func_0x00010725c3e0();
    }
    func_0x00010725be2c();
    func_0x00010725be24();
    lVar3 = param_2;
  }
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_78);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725c00c();
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010725be1c();
  __Unwind_Resume(lVar3);
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1072558e0; end: 10725590b;  */

void FUN_1072558e0(undefined8 param_1)

{
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


