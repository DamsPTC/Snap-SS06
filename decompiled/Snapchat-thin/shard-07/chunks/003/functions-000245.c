/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10547ad40; end: 10547ad57;  */

void FUN_10547ad40(long param_1)

{
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c14de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10547ad58; end: 10547aeb3; -[SCSKOverlay dismissOverlay:] */

void FUN_10547ad58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x78) = 1;
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 < 5) {
    if (lVar4 != 0) {
      if (lVar4 != 2) {
LAB_10547ae14:
        lVar4 = param_3;
        func_0x00010bf51e00();
        uVar5 = *(undefined8 *)(param_1 + 0x70);
        *(long *)(param_1 + 0x70) = lVar4;
        _objc_release(uVar5);
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = 0;
        _objc_release(uVar5);
        puVar1 = PTR__OBJC_CLASS___SKOverlay_1126b9488;
        lVar4 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar4);
        lVar3 = lVar4;
        func_0x00010c2a72c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf83fc0(puVar1);
        _objc_release(lVar3);
        goto LAB_10547ae98;
      }
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c10b0c0();
      puVar1 = PTR__OBJC_CLASS___SKOverlay_1126b9488;
      if (iVar2 != 0) {
        lVar4 = param_1 + 0x58;
        _objc_loadWeakRetained(lVar4);
        lVar3 = lVar4;
        func_0x00010c2a72c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf83fc0(puVar1);
        _objc_release(lVar3);
        _objc_release(lVar4);
      }
    }
  }
  else {
    if (lVar4 == 5) {
      lVar4 = param_3;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      *(long *)(param_1 + 0x70) = lVar4;
      _objc_release(uVar5);
      lVar4 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_10547ae98:
      _objc_release(lVar4);
      goto LAB_10547ae9c;
    }
    if (lVar4 != 6) goto LAB_10547ae14;
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_1);
  }
LAB_10547ae9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10547aeb4; end: 10547af6b; -[SCSKOverlay storeOverlay:didFailToLoadWithError:] */

void FUN_10547aeb4(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b9490;
  func_0x00010bf02420(PTR_PTR_1126b9490,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(param_2 + 0x50) = 2;
  func_0x00010bf86820(*(undefined8 *)(param_2 + 0x10));
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c225b00((double)param_1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b9480;
  func_0x00010bf76360(PTR_PTR_1126b9480,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07e40(param_2,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010be69dc0(param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547af6c; end: 10547afa3; -[SCSKOverlay _onLoaded:] */

void FUN_10547af6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x79) = param_3;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10547afa4; end: 10547b133; -[SCSKOverlay storeOverlay:willStartPresentation:] */

void FUN_10547afa4(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  *(undefined8 *)(param_2 + 0x50) = 3;
  iVar6 = (int)*(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_5);
  func_0x00010c10b0c0();
  if ((iVar6 != 0) && (*(char *)(param_2 + 0x78) == '\x01')) {
    func_0x00010c108c20(*(undefined8 *)(param_2 + 0x10));
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c225b00((double)param_1);
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___SKOverlay_1126b9488;
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c2a72c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83fc0(puVar4,param_3,lVar1);
    _objc_release(lVar1);
    goto LAB_10547b0b4;
  }
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2506e0();
    _objc_release(uVar2);
    if (*(char *)(param_2 + 0x60) == '\x01') goto LAB_10547b088;
    func_0x00010c108c20(*(undefined8 *)(param_2 + 0x10));
  }
  else {
LAB_10547b088:
    func_0x00010bf86820(*(undefined8 *)(param_2 + 0x10));
  }
  lVar3 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c225b00((double)param_1);
LAB_10547b0b4:
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b9498;
  _objc_alloc(PTR_PTR_1126b9498);
  func_0x00010c004140();
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126b9480;
  func_0x00010c2a6e80(PTR_PTR_1126b9480,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07e40(param_2,param_3,puVar5);
  _objc_release(puVar5);
  func_0x00010be69dc0(param_2,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10547b134; end: 10547b1c3; -[SCSKOverlay storeOverlay:didFinishPresentation:] */

void FUN_10547b134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + 0x50) = 4;
  puVar1 = PTR_PTR_1126b9498;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c004140();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b9480;
  func_0x00010bf76d80(PTR_PTR_1126b9480,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07e40(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547b1c4; end: 10547b253; -[SCSKOverlay storeOverlay:willStartDismissal:] */

void FUN_10547b1c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + 0x50) = 5;
  puVar1 = PTR_PTR_1126b9498;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c004140();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b9480;
  func_0x00010c2a6c80(PTR_PTR_1126b9480,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07e40(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547b254; end: 10547b35b; -[SCSKOverlay storeOverlay:didFinishDismissal:] */

void FUN_10547b254(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_5);
  func_0x00010bf86820(uVar4);
  lVar3 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c225b00((double)param_1);
  _objc_release(lVar3);
  *(undefined8 *)(param_2 + 0x50) = 6;
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256960();
    _objc_release(uVar4);
  }
  puVar1 = PTR_PTR_1126b9498;
  _objc_alloc(PTR_PTR_1126b9498);
  func_0x00010c004140();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b9480;
  func_0x00010bf76740(PTR_PTR_1126b9480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07e40(param_2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_2 + 0x70);
  uVar4 = 0;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547b35c; end: 10547b3ff; -[SCSKOverlay _emitLifecycleEvent:] */

void FUN_10547b35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b94a0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c0f3900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0260e0(puVar1,param_2,param_3,lVar2,(*(byte *)(param_1 + 0x60) ^ 0xff) & 1);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10547b400; end: 10547b407; -[SCSKOverlay params] */

undefined8 FUN_10547b400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10547b408; end: 10547b40f; -[SCSKOverlay isLoaded] */

undefined1 FUN_10547b408(long param_1)

{
  return *(undefined1 *)(param_1 + 0x79);
}



/* Entry: 10547b410; end: 10547b417; -[SCSKOverlay state] */

undefined8 FUN_10547b410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10547b418; end: 10547b4c7; -[SCSKOverlay .cxx_destruct] */

void FUN_10547b418(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10547b4c8; end: 10547b5ab; -[SCSKOverlayBackgroundWindow initWithMainWindow:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10547b4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c2a72c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e85f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithWindowScene__1125f66b8,uVar2);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112723cd0),param_3);
    lVar3 = (long)_DAT_112723cd4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    func_0x00010c225b00(0xc024000000000000,puVar1);
    func_0x00010c1a7f60(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10547b5ac; end: 10547b73b; -[SCSKOverlayBackgroundWindow startScreenShots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547b5ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c256960();
  lVar1 = param_1 + _DAT_112723cd0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182c80();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be5b500(param_1);
  func_0x00010bebfce0(param_1);
  _objc_initWeak(auStack_48,param_1);
  puVar5 = PTR_PTR_1126ae888;
  _objc_alloc();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0522e0(0x3ff0000000000000);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112723cd8);
  *(undefined **)(param_1 + _DAT_112723cd8) = puVar5;
  _objc_release(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10547b73c; end: 10547b767;  */

void FUN_10547b73c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c256960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547b768; end: 10547b7bf; -[SCSKOverlayBackgroundWindow stopScreenShots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547b768(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112723cdc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112723cd8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10547b7c0; end: 10547b83b; -[SCSKOverlayBackgroundWindow _makeAndDisplaySnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547b7c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112723ce0;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c960();
  }
  lVar1 = param_1 + _DAT_112723cd0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c245f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 10547b83c; end: 10547b8c7; -[SCSKOverlayBackgroundWindow _startDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547b83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__onDisplayLink__1125297b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112723cdc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10547b8c8; end: 10547b8cb; -[SCSKOverlayBackgroundWindow _onDisplayLink:] */

void FUN_10547b8c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__makeAndDisplaySnapshot_1125746e0);
  return;
}



/* Entry: 10547b8cc; end: 10547b937; -[SCSKOverlayBackgroundWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547b8cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112723cd8,0);
  _objc_storeStrong(param_1 + _DAT_112723cdc,0);
  _objc_storeStrong(param_1 + _DAT_112723ce0,0);
  _objc_storeStrong(param_1 + _DAT_112723cd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723cd0);
  return;
}



/* Entry: 10547b938; end: 10547b947; -[SCSKOverlayConfigProvider presentAfterDismissStickyFix] */

void FUN_10547b938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_optimisticFeatureFlagForKey__112618a48,
             &PTR____CFConstantStringClassReference_110de09b8);
  return;
}



/* Entry: 10547b948; end: 10547b953; -[SCSKOverlayConfigProvider .cxx_destruct] */

void FUN_10547b948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10547b954; end: 10547baf7; -[SCSKOverlayFactory createOverlayWithParams:config:overlayLifecycleEvents:] */

void FUN_10547b954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b94b8;
  _objc_alloc(PTR_PTR_1126b94b8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0328c0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547baf8; end: 10547bba3;  */

void FUN_10547baf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bf089a0(param_3);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___SKOverlay_1126b9488;
  _objc_alloc(PTR__OBJC_CLASS___SKOverlay_1126b9488);
  func_0x00010c001640();
  func_0x00010c18b5e0();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10547bba4; end: 10547bd5b; -[SCSKOverlayFactory _overlayConfigurationWithParams:config:] */

void FUN_10547bba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___SKOverlayAppConfiguration_1126b9478;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf05660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf05300();
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c104260(param_3);
  func_0x00010bff3460(puVar1,param_2,puVar5,uVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c291e60(param_4);
  _objc_release(param_4);
  func_0x00010c21e340(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf05660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf61ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188720(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf05660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c272360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10547bd5c;
  puStack_50 = &UNK_11088bba8;
  puStack_48 = puVar1;
  func_0x00010bf97ce0(uVar3,param_2,&puStack_68);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10547bd5c; end: 10547bd67;  */

void FUN_10547bd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c165bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAdditionalValue_forKey__112637108,param_3,
             param_2);
  return;
}



/* Entry: 10547bd68; end: 10547bda3; -[SCSKOverlayFactory .cxx_destruct] */

void FUN_10547bd68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10547bda4; end: 10547be57; -[SCSKOverlayParams appTitle] */

void FUN_10547bda4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2415a0(param_1);
  ppuVar2 = ppuVar1;
  func_0x00010bef52e0(ppuVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar2 = ppuVar3;
  func_0x00010bf06520();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddea58;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10547be58; end: 10547bf9b; -[SCSKOverlayPreloader initWithConfig:overlayFactory:configProvider:window:] */

undefined1 *
FUN_10547be58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8610;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0c2860(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10547bf9c; end: 10547c12b; -[SCSKOverlayPreloader preloadOverlay:] */

void FUN_10547bf9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
    func_0x00010be77ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010bf576c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar1;
      _objc_release(uVar2);
      _objc_retain(lVar1);
      _objc_initWeak(auStack_38,param_1);
      puVar3 = PTR_PTR_1126ae6b8;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar1);
      func_0x00010bf54280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    else {
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  else {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10547c12c; end: 10547c193;  */

void FUN_10547c12c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be77a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10547c194; end: 10547c34f; -[SCSKOverlayPreloader _preloadOverlay:observer:] */

void FUN_10547c194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b94a0;
  _objc_alloc(PTR_PTR_1126b94a0);
  puVar2 = PTR_PTR_1126b9480;
  func_0x00010c108a20(PTR_PTR_1126b9480);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0f3900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0260e0(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c10d700(param_3);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10547c350; end: 10547c3cf;  */

void FUN_10547c350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c076b80(uVar2);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ec80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547c3d0; end: 10547c4af; -[SCSKOverlayPreloader _preloadedOverlayWithParams:] */

void FUN_10547c3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10547c468;
  puStack_30 = &UNK_11088bbd8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10547c4b0; end: 10547c577; -[SCSKOverlayPreloader _overlayPreloaded:] */

void FUN_10547c4b0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) == 0 || param_3 == *(long *)(param_1 + 0x30)) {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf83fa0(param_3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10547c578; end: 10547c5f3;  */

void FUN_10547c578(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c076b80(param_2);
  func_0x00010be6a8c0(lVar1);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547c5f4; end: 10547c69f; -[SCSKOverlayPreloader _onOverlayLoaded:result:] */

void FUN_10547c5f4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    uVar1 = param_3;
    func_0x00010c0f3900(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be77ca0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar2 == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010c0c2860();
      if (uVar4 < uVar3) {
        func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x38),param_2,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10547c6a0; end: 10547c77b; -[SCSKOverlayPreloader presentOverlayWithParams:] */

void FUN_10547c6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b94a0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b9480;
  func_0x00010c10f5e0(PTR_PTR_1126b9480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0260e0(puVar1,param_2,puVar2,param_3,0);
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  func_0x00010be7d180(param_1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10547c77c; end: 10547c90b; -[SCSKOverlayPreloader _presentOverlay:] */

void FUN_10547c77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be77ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bf576c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar3 = lVar1;
    if ((lVar2 != 0) && (func_0x00010c252440(), lVar2 == 5)) {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010bf576c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(lVar3);
  func_0x00010c10d700(uVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10547c90c; end: 10547c953;  */

void FUN_10547c90c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar3;
  func_0x00010c076b80(uVar3);
  func_0x00010be6a8c0(lVar1,param_2,uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10547c954; end: 10547cab3; -[SCSKOverlayPreloader dismissOverlay:] */

void FUN_10547c954(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (*(long *)(param_1 + 0x40) != 0 && *(long *)(param_1 + 0x40) == param_3)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126b94a0;
    _objc_alloc(PTR_PTR_1126b94a0);
    puVar2 = PTR_PTR_1126b9480;
    func_0x00010bf84f00(PTR_PTR_1126b9480);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0f3900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0260e0(puVar1);
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf83fa0(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10547cab4; end: 10547cafb;  */

void FUN_10547cab4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547cafc; end: 10547cb3f; -[SCSKOverlayPreloader _onOverlayDismissed:] */

void FUN_10547cafc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10547cb40; end: 10547cb47; -[SCSKOverlayPreloader overlayLifecycleEvents] */

undefined8 FUN_10547cb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10547cb48; end: 10547cc1f; -[SCSKOverlayPreloader .cxx_destruct] */

void FUN_10547cb48(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10547cc20; end: 10547cc33; -[SCSKOverlayServiceProvider setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cc20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112723d18,param_3);
  return;
}



/* Entry: 10547cc34; end: 10547cc47; -[SCSKOverlayServiceProvider setAppImpressionService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cc34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112723d24,param_3);
  return;
}



/* Entry: 10547cc48; end: 10547cca3; -[SCSKOverlayServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cc48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723d24);
  _objc_destroyWeak(param_1 + _DAT_112723d20);
  _objc_destroyWeak(param_1 + _DAT_112723d1c);
  _objc_destroyWeak(param_1 + _DAT_112723d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112723d14);
  return;
}



/* Entry: 10547cca4; end: 10547cd2f; -[SCSKOverlayTransitionContextImpl initWithContext:] */

undefined1 *
FUN_10547cca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_7);
  puStack_28 = PTR_PTR_1126e8618;
  uStack_30 = param_5;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c24ed00(param_7);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x00010bf94980(param_7);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10547cd30; end: 10547cda7; -[SCSKOverlayTransitionContextImpl addAnimationBlock:] */

void FUN_10547cd30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
    else {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bef6c80();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10547cda8; end: 10547ce6f; -[SCSKOverlayTransitionContextImpl isEqual:] */

long FUN_10547cda8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar6 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126b9498;
    _objc_opt_class(PTR_PTR_1126b9498);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar5 = param_3 + 8;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar4;
      func_0x00010c071ae0(lVar4);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 10547ce70; end: 10547ce7b; -[SCSKOverlayTransitionContextImpl startFrame] */

undefined8 FUN_10547ce70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10547ce7c; end: 10547ce87; -[SCSKOverlayTransitionContextImpl endFrame] */

undefined8 FUN_10547ce7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10547ce88; end: 10547ce8f; -[SCSKOverlayTransitionContextImpl .cxx_destruct] */

void FUN_10547ce88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10547ce90; end: 10547cecf; -[SCSKOverlayProxyCoordinateSpace initWithCoordinateSpace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10547ce90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112723d34);
  *(undefined8 *)(param_1 + _DAT_112723d34) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10547ced0; end: 10547cee7; -[SCSKOverlayProxyCoordinateSpace forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547ced0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_invokeWithTarget__1125f85a0,*(undefined8 *)(param_1 + _DAT_112723d34));
  return;
}



/* Entry: 10547cee8; end: 10547cef7; -[SCSKOverlayProxyCoordinateSpace methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112723d34),PTR_s_methodSignatureForSelector__112610cb8);
  return;
}



/* Entry: 10547cef8; end: 10547cf5b; -[SCSKOverlayProxyCoordinateSpace bounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10547cef8(undefined8 param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_112723d34));
  func_0x00010bf20340(param_2);
  return param_1;
}



/* Entry: 10547cf5c; end: 10547cf6b; -[SCSKOverlayProxyCoordinateSpace bottomMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10547cf5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112723d38);
}



/* Entry: 10547cf6c; end: 10547cf7b; -[SCSKOverlayProxyCoordinateSpace setBottomMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cf6c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112723d38) = param_1;
  return;
}



/* Entry: 10547cf7c; end: 10547cf8f; -[SCSKOverlayProxyCoordinateSpace .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547cf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112723d34,0);
  return;
}



/* Entry: 10547cf90; end: 10547d04f;  */

void FUN_10547cf90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_sc_fixedCoordinateSpace_112630d58;
  puVar1 = PTR_s_fixedCoordinateSpace_1125ca230;
  uVar3 = param_1;
  _class_getInstanceMethod();
  uVar4 = param_1;
  _class_getInstanceMethod(param_1,puVar2);
  uVar5 = uVar3;
  _method_getImplementation(uVar3);
  uVar6 = uVar4;
  _method_getImplementation(uVar4);
  _method_getTypeEncoding(uVar3);
  _class_replaceMethod(param_1,puVar2,uVar5,uVar3);
  _method_getTypeEncoding(uVar4);
  _class_replaceMethod(param_1,puVar1,uVar6,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10547d050; end: 10547d0eb;  */

void FUN_10547d050(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_2;
  func_0x00010bfb2220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b94e8;
  _objc_opt_class();
  _objc_release(puVar1);
  if (puVar2 != puVar3) {
    return;
  }
  func_0x00010bfb2220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10547d0ec; end: 10547d1d7;  */

void FUN_10547d0ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10547d174;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbf68 != -1) {
    func_0x00010002a2fc(0x1136bbf68,&puStack_48);
  }
  uVar1 = uRam00000001136bbf60;
  _objc_retain(uRam00000001136bbf60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10547d1d8; end: 10547d1e3; -[SCFeatureSettingsService hasWebBrowsingEnablePrivacyConsent] */

void FUN_10547d1d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110de09f8);
  return;
}



/* Entry: 10547d1e4; end: 10547d1ef; -[SCFeatureSettingsService webBrowsingEnablePrivacyConsentServerParam] */

undefined ** FUN_10547d1e4(void)

{
  return &PTR____CFConstantStringClassReference_110de09f8;
}



/* Entry: 10547d1f0; end: 10547d1ff; -[SCFeatureSettingsService setWebBrowsingEnablePrivacyConsent:] */

void FUN_10547d1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110de09f8,param_3);
  return;
}



/* Entry: 10547d200; end: 10547d207; -[SCFeatureSettingsService web_browsing_enable_privacy_consent_client_value:] */

void FUN_10547d200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10547d208; end: 10547d20f; -[SCFeatureSettingsService web_browsing_enable_privacy_consent_server_value:] */

void FUN_10547d208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10547d210; end: 10547d21f; -[SCFeatureSettingsService webBrowsingEnablePrivacyConsent] */

void FUN_10547d210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110de09f8,0);
  return;
}



/* Entry: 10547d220; end: 10547d22b; -[SCFeatureSettingsService hasWebBrowsingShouldPresentPrivacyPrompt] */

void FUN_10547d220(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110de0a18);
  return;
}



/* Entry: 10547d22c; end: 10547d237; -[SCFeatureSettingsService webBrowsingShouldPresentPrivacyPromptServerParam] */

undefined ** FUN_10547d22c(void)

{
  return &PTR____CFConstantStringClassReference_110de0a18;
}



/* Entry: 10547d238; end: 10547d247; -[SCFeatureSettingsService setWebBrowsingShouldPresentPrivacyPrompt:] */

void FUN_10547d238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110de0a18,param_3);
  return;
}



/* Entry: 10547d248; end: 10547d24f; -[SCFeatureSettingsService web_browsing_should_present_privacy_prompt_client_value:] */

void FUN_10547d248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10547d250; end: 10547d257; -[SCFeatureSettingsService web_browsing_should_present_privacy_prompt_server_value:] */

void FUN_10547d250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10547d258; end: 10547d267; -[SCFeatureSettingsService webBrowsingShouldPresentPrivacyPrompt] */

void FUN_10547d258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110de0a18,0);
  return;
}



/* Entry: 10547d268; end: 10547d273; -[SCFeatureSettingsService hasWebBrowsingLastPromptPresentTsMs] */

void FUN_10547d268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110de09d8);
  return;
}



/* Entry: 10547d274; end: 10547d27f; -[SCFeatureSettingsService webBrowsingLastPromptPresentTsMsServerParam] */

undefined ** FUN_10547d274(void)

{
  return &PTR____CFConstantStringClassReference_110de09d8;
}



/* Entry: 10547d280; end: 10547d28b; -[SCFeatureSettingsService setWebBrowsingLastPromptPresentTsMs:] */

void FUN_10547d280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_doubleValue__112586908,
             &PTR____CFConstantStringClassReference_110de09d8);
  return;
}



/* Entry: 10547d28c; end: 10547d293; -[SCFeatureSettingsService web_browsing_last_prompt_present_ts_ms_client_value:] */

void FUN_10547d28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf885a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10547d294; end: 10547d29b; -[SCFeatureSettingsService web_browsing_last_prompt_present_ts_ms_server_value:] */

void FUN_10547d294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10547d29c; end: 10547d2ab; -[SCFeatureSettingsService webBrowsingLastPromptPresentTsMs] */

void FUN_10547d29c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s__doubleForFeatureSetting_default_11255f090,
             &PTR____CFConstantStringClassReference_110de09d8);
  return;
}



/* Entry: 10547d2ac; end: 10547d31f; -[SCGrapheneWebBrowserPrivacyConsentMetric2 init] */

undefined1 * FUN_10547d2ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10547d320; end: 10547d437;  */

void FUN_10547d320(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11088bca0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc(ppuVar2);
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv(appuStack_50[0]);
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  _objc_alloc(PTR_PTR_1126b94f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d438; end: 10547d463; +[SCGrapheneAdsAttachmentsMetric adRenderDataParse] */

void FUN_10547d438(void)

{
  _objc_alloc(PTR_PTR_1126b94f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d464; end: 10547d48f; +[SCGrapheneAdsAttachmentsMetric attachmentOpened] */

void FUN_10547d464(void)

{
  _objc_alloc(PTR_PTR_1126b94f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d490; end: 10547d4bb; +[SCGrapheneAdsAttachmentsMetric parseWarning] */

void FUN_10547d490(void)

{
  _objc_alloc(PTR_PTR_1126b94f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d4bc; end: 10547d4e7; +[SCGrapheneAdsAttachmentsMetric openWarning] */

void FUN_10547d4bc(void)

{
  _objc_alloc(PTR_PTR_1126b94f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d4e8; end: 10547d587; -[SCGrapheneAdsAttachmentsMetric description] */

void FUN_10547d4e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de0a38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de0a38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10547d588; end: 10547d5b3; +[SCGrapheneArExperienceMetric adPresentArDataExists] */

void FUN_10547d588(void)

{
  _objc_alloc(PTR_PTR_1126b94f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d5b4; end: 10547d5df; +[SCGrapheneArExperienceMetric tryOnShouldShow] */

void FUN_10547d5b4(void)

{
  _objc_alloc(PTR_PTR_1126b94f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d5e0; end: 10547d60b; +[SCGrapheneArExperienceMetric tryOnDidShow] */

void FUN_10547d5e0(void)

{
  _objc_alloc(PTR_PTR_1126b94f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d60c; end: 10547d637; +[SCGrapheneArExperienceMetric tryOnTapped] */

void FUN_10547d60c(void)

{
  _objc_alloc(PTR_PTR_1126b94f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d638; end: 10547d663; +[SCGrapheneArExperienceMetric arProductCardShow] */

void FUN_10547d638(void)

{
  _objc_alloc(PTR_PTR_1126b94f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547d664; end: 10547d703; -[SCGrapheneArExperienceMetric description] */

void FUN_10547d664(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de0ad8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de0ad8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8630;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10547d704; end: 10547d86f; -[SCGrapheneRegistry arExperienceGraphene] */

void FUN_10547d704(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10547d78c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbf88 != -1) {
    func_0x00010002a2fc(0x1136bbf88,&puStack_48);
  }
  uVar1 = uRam00000001136bbf80;
  _objc_retain(uRam00000001136bbf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10547d870; end: 10547d8d7; +[SCArAdsSponsoredLensCTALayoutConfig descriptor] */

void FUN_10547d870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a39f20,
                        &PTR____CFConstantStringClassReference_110de0b98,&PTR_DAT_1130da7f0,
                        &PTR_DAT_1130da808,3,0x18,0x1c);
    puRam00000001136bbf90 = puVar1;
  }
  return;
}



/* Entry: 10547d8d8; end: 10547d93f; +[SCLensesCofLensWarmupConfig descriptor] */

void FUN_10547d8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a39fc0,
                        &PTR____CFConstantStringClassReference_110de0bb8,&PTR_DAT_1130da868,
                        &PTR_DAT_1130da880,1,4,0x1c);
    puRam00000001136bbf98 = puVar1;
  }
  return;
}



/* Entry: 10547d940; end: 10547d9b3; -[SCGrapheneArAdTrackMetric2 init] */

undefined1 * FUN_10547d940(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8638;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}


