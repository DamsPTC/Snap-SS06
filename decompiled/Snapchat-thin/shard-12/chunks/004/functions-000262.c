/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090764bc; end: 1090764cb; -[SCImageProcessGradientCommand setShouldFade:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090764bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112780ce0) = param_3;
  return;
}



/* Entry: 1090764cc; end: 1090764db; -[SCImageProcessGradientCommand fadeRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090764cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780cc8);
}



/* Entry: 1090764dc; end: 1090764eb; -[SCImageProcessGradientCommand setFadeRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090764dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112780cc8) = param_1;
  return;
}



/* Entry: 1090764ec; end: 1090764fb; -[SCImageProcessGradientCommand topColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090764ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780cc0);
}



/* Entry: 1090764fc; end: 10907650b; -[SCImageProcessGradientCommand bottomColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090764fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780cc4);
}



/* Entry: 10907650c; end: 10907654b; -[SCImageProcessGradientCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907650c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112780cc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780cc0,0);
  return;
}



/* Entry: 10907654c; end: 10907659f; +[SCImageProcessGrayscaleRGBCommand sharedCommand] */

void FUN_10907654c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730820 != -1) {
    func_0x000107c27d9c(0x113730820,&PTR___NSConcreteGlobalBlock_110ad6d28);
  }
  uVar1 = uRam0000000113730828;
  _objc_retain(uRam0000000113730828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090765a0; end: 1090765cf;  */

void FUN_1090765a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf448;
  _objc_alloc();
  func_0x00010be39360();
  uVar1 = puRam0000000113730828;
  puRam0000000113730828 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090765d0; end: 10907664b; -[SCImageProcessGrayscaleRGBCommand _init] */

undefined1 * FUN_1090765d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_28 = PTR_PTR_112700230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10907664c; end: 109076793; -[SCImageProcessGrayscaleRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined *
FUN_10907664c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,2,uVar1,in_stack_00000018);
  _objc_release(uVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(uVar1);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 109076794; end: 10907679f; -[SCImageProcessGrayscaleRGBCommand commandName] */

undefined ** FUN_109076794(void)

{
  return &PTR____CFConstantStringClassReference_110f1e878;
}



/* Entry: 1090767a0; end: 1090767a7; -[SCImageProcessGrayscaleRGBCommand inputConstraint] */

undefined8 FUN_1090767a0(void)

{
  return 2;
}



/* Entry: 1090767a8; end: 1090767db; -[SCImageProcessGrayscaleRGBCommand isEqual:] */

void FUN_1090767a8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700230;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 1090767dc; end: 10907682f; +[SCImageProcessIdentityRGBCommand sharedCommand] */

void FUN_1090767dc(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730830 != -1) {
    func_0x000107c27d9c(0x113730830,&PTR___NSConcreteGlobalBlock_110ad6d48);
  }
  uVar1 = uRam0000000113730838;
  _objc_retain(uRam0000000113730838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109076830; end: 10907685b;  */

void FUN_109076830(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b26c8;
  _objc_alloc_init();
  uVar1 = puRam0000000113730838;
  puRam0000000113730838 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10907685c; end: 1090768d7; -[SCImageProcessIdentityRGBCommand init] */

undefined1 * FUN_10907685c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_28 = PTR_PTR_112700238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 1090768d8; end: 10907690b; -[SCImageProcessIdentityRGBCommand loadWithContext:error:] */

void FUN_1090768d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700238;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_loadWithContext_error__112604c28);
  return;
}



/* Entry: 10907690c; end: 109076a53; -[SCImageProcessIdentityRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined *
FUN_10907690c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,4,uVar1,in_stack_00000018);
  _objc_release(uVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(uVar1);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 109076a54; end: 109076a5f; -[SCImageProcessIdentityRGBCommand commandName] */

undefined ** FUN_109076a54(void)

{
  return &PTR____CFConstantStringClassReference_110f1e8b8;
}



/* Entry: 109076a60; end: 109076a93; -[SCImageProcessIdentityRGBCommand isEqual:] */

void FUN_109076a60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700238;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109076a94; end: 109076ae7; +[SCImageProcessCPUIdentityRGBCommand sharedCommand] */

void FUN_109076a94(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730840 != -1) {
    func_0x000107c27d9c(0x113730840,&PTR___NSConcreteGlobalBlock_110ad6d68);
  }
  uVar1 = uRam0000000113730848;
  _objc_retain(uRam0000000113730848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109076ae8; end: 109076b13;  */

void FUN_109076ae8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126da0a0;
  _objc_alloc_init();
  uVar1 = puRam0000000113730848;
  puRam0000000113730848 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109076b14; end: 109076d2f; -[SCImageProcessCPUIdentityRGBCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

undefined *
FUN_109076b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090798f0(param_6,100,4,uVar1,param_7);
  _objc_release(uVar1);
  if ((int)param_6 != 0) {
    uVar8 = param_4;
    _CVPixelBufferGetWidth();
    uVar2 = param_4;
    _CVPixelBufferGetHeight(param_4);
    uVar3 = param_4;
    _CVPixelBufferGetBytesPerRow(param_4);
    uVar4 = param_5;
    _CVPixelBufferGetWidth(param_5);
    uVar5 = param_5;
    _CVPixelBufferGetHeight(param_5);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109079e0c(uVar8,uVar2,uVar3,uVar4,uVar5,100,4,param_1,param_7);
    _objc_release(param_1);
    if ((int)uVar8 != 0) {
      _CVPixelBufferLockBaseAddress(param_4,0);
      _CVPixelBufferLockBaseAddress(param_5,0);
      uVar8 = param_4;
      _CVPixelBufferGetPlaneCount();
      puVar9 = PTR____NSDictionary0__struct_11034ab58;
      if (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar2 = param_4;
          _CVPixelBufferGetBaseAddressOfPlane(param_4,uVar8);
          uVar3 = param_5;
          _CVPixelBufferGetBaseAddressOfPlane(param_5,uVar8);
          uVar4 = param_4;
          _CVPixelBufferGetHeightOfPlane(param_4,uVar8);
          uVar5 = param_5;
          _CVPixelBufferGetHeightOfPlane(param_5,uVar8);
          uVar6 = param_4;
          _CVPixelBufferGetBytesPerRowOfPlane(param_4,uVar8);
          uVar7 = param_5;
          _CVPixelBufferGetBytesPerRowOfPlane(param_5,uVar8);
          puVar9 = (undefined *)0x0;
          if ((uVar4 != uVar5) || (uVar6 != uVar7)) break;
          _memcpy(uVar3,uVar2,uVar6 * uVar4);
          uVar8 = uVar8 + 1;
          uVar2 = param_4;
          _CVPixelBufferGetPlaneCount();
          puVar9 = PTR____NSDictionary0__struct_11034ab58;
        } while (uVar8 < uVar2);
      }
      _CVPixelBufferUnlockBaseAddress(param_4,0);
      _CVPixelBufferUnlockBaseAddress(param_5,0);
      goto LAB_109076d04;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_109076d04:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 109076d30; end: 109076d3b; -[SCImageProcessCPUIdentityRGBCommand commandName] */

undefined ** FUN_109076d30(void)

{
  return &PTR____CFConstantStringClassReference_110f1e8d8;
}



/* Entry: 109076d3c; end: 109076d6f; -[SCImageProcessCPUIdentityRGBCommand isEqual:] */

void FUN_109076d3c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700240;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109076d70; end: 109076dc3; +[SCImageProcessInstasnapRGBCommand sharedCommand] */

void FUN_109076d70(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730850 != -1) {
    func_0x000107c27d9c(0x113730850,&PTR___NSConcreteGlobalBlock_110ad6d88);
  }
  uVar1 = uRam0000000113730858;
  _objc_retain(uRam0000000113730858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109076dc4; end: 109076df3;  */

void FUN_109076dc4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf458;
  _objc_alloc();
  func_0x00010be39360();
  uVar1 = puRam0000000113730858;
  puRam0000000113730858 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109076df4; end: 109076e6f; -[SCImageProcessInstasnapRGBCommand _init] */

undefined1 * FUN_109076df4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_28 = PTR_PTR_112700248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 109076e70; end: 109076fb7; -[SCImageProcessInstasnapRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

undefined *
FUN_109076e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,5,uVar1,in_stack_00000018);
  _objc_release(uVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(uVar1);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 109076fb8; end: 109076fc3; -[SCImageProcessInstasnapRGBCommand commandName] */

undefined ** FUN_109076fb8(void)

{
  return &PTR____CFConstantStringClassReference_110f1e918;
}



/* Entry: 109076fc4; end: 109076fcb; -[SCImageProcessInstasnapRGBCommand inputConstraint] */

undefined8 FUN_109076fc4(void)

{
  return 2;
}



/* Entry: 109076fcc; end: 109076fff; -[SCImageProcessInstasnapRGBCommand isEqual:] */

void FUN_109076fcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700248;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109077000; end: 10907709f; -[SCImageProcessLookupRGBCommand initWithLookupTable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109077000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_38 = PTR_PTR_112700250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112780ce8) = param_3;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1090770a0; end: 1090770ef; -[SCImageProcessLookupRGBCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090770a0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGImageRelease(*(undefined8 *)(param_1 + _DAT_112780ce8));
  puStack_28 = PTR_PTR_112700250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090770f0; end: 1090771c3; -[SCImageProcessLookupRGBCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1090770f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  long lStack_50;
  undefined *puStack_48;
  long lVar4;
  
  plVar2 = &lStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700250;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)plVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780cec) = uVar1;
    _objc_release(lVar3);
    uVar5 = param_3;
    func_0x00010bf59700();
    *(int *)(param_1 + _DAT_112780cf0) = (int)uVar5;
  }
  _objc_release(param_3);
  return (undefined1 *)plVar2;
}



/* Entry: 1090771c4; end: 10907733b; -[SCImageProcessLookupRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1090771c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,6,lVar1,in_stack_00000018);
  _objc_release(lVar1);
  if ((int)param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar1);
    _glActiveTexture(0x84c2);
    _glBindTexture(0xde1,*(undefined4 *)(param_3 + _DAT_112780cf0));
    _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780cec),2);
    func_0x00010bf89d00(param_1,param_2);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar2;
}



/* Entry: 10907733c; end: 10907739b; -[SCImageProcessLookupRGBCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10907733c(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_112700250;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    _glDeleteTextures(1,param_1 + _DAT_112780cf0);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 10907739c; end: 1090773a7; -[SCImageProcessLookupRGBCommand commandName] */

undefined ** FUN_10907739c(void)

{
  return &PTR____CFConstantStringClassReference_110f1e958;
}



/* Entry: 1090773a8; end: 1090773af; -[SCImageProcessLookupRGBCommand inputConstraint] */

undefined8 FUN_1090773a8(void)

{
  return 2;
}



/* Entry: 1090773b0; end: 10907747b; -[SCImageProcessLookupRGBCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1090773b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar2 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
    goto LAB_10907745c;
  }
  puVar4 = PTR_PTR_1126dd290;
  _objc_opt_class(PTR_PTR_1126dd290);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
LAB_109077448:
    bVar3 = false;
  }
  else {
    puStack_38 = PTR_PTR_112700250;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if (iVar2 == 0) goto LAB_109077448;
    bVar3 = *(long *)(param_3 + (long)_DAT_112780ce8) == *(long *)(param_1 + (long)_DAT_112780ce8);
  }
  _objc_release(uVar1);
LAB_10907745c:
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10907747c; end: 109077513; +[SCImageProcessMissEtikateRGBCommand sharedCommand] */

void FUN_10907747c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730860 != -1) {
    func_0x000107c27d9c(0x113730860,&PTR___NSConcreteGlobalBlock_110ad6da8);
  }
  uVar1 = uRam0000000113730868;
  _objc_retain(uRam0000000113730868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109077514; end: 109077547; -[SCImageProcessMissEtikateRGBCommand _initWithLookupTable:] */

void FUN_109077514(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700258;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithLookupTable__11253f5e8);
  return;
}



/* Entry: 109077548; end: 109077553; -[SCImageProcessMissEtikateRGBCommand commandName] */

undefined ** FUN_109077548(void)

{
  return &PTR____CFConstantStringClassReference_110f1e978;
}



/* Entry: 109077554; end: 10907755b; -[SCImageProcessMissEtikateRGBCommand inputConstraint] */

undefined8 FUN_109077554(void)

{
  return 2;
}



/* Entry: 10907755c; end: 1090775d3; -[SCImageProcessMissEtikateRGBCommand isEqual:] */

void FUN_10907755c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700258;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 1090775d4; end: 10907761b; +[SCImageProcessMosaicRGBCommand commandWithImage:outputSize:] */

void FUN_1090775d4(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126bf498);
  func_0x00010c01c220(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10907761c; end: 1090776eb; -[SCImageProcessMosaicRGBCommand initWithImage:outputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10907761c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  if (lRam0000000113730870 != -1) {
    func_0x000107c27d9c(0x113730870,&PTR___NSConcreteGlobalBlock_110ad6dc8);
  }
  uVar1 = uRam0000000113730878;
  _objc_retain(uRam0000000113730878);
  puStack_48 = PTR_PTR_112700260;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithProgram__11253a1b0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar2 + (long)_DAT_112780cf4) = param_5;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112780cf8) = param_1;
    ((undefined8 *)((long)puVar2 + (long)_DAT_112780cf8))[1] = param_2;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1090776ec; end: 10907773b; -[SCImageProcessMosaicRGBCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090776ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGImageRelease(*(undefined8 *)(param_1 + _DAT_112780cf4));
  puStack_28 = PTR_PTR_112700260;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10907773c; end: 10907790f; -[SCImageProcessMosaicRGBCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10907773c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  long lStack_60;
  undefined *puStack_58;
  long lVar6;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_112700260;
  plVar4 = &lStack_60;
  lStack_60 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)plVar4 != 0) {
    pdVar1 = (double *)(param_1 + _DAT_112780cf8);
    dVar10 = *pdVar1;
    dVar11 = pdVar1[1];
    bVar2 = false;
    if ((dVar10 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(dVar11) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = dVar11 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar2) {
      func_0x00010c0ef080(param_3);
      *pdVar1 = dVar10;
      pdVar1[1] = dVar11;
    }
    lVar5 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c117700();
    uVar3 = (undefined4)lVar6;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780cfc) = uVar3;
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c117700();
    uVar3 = (undefined4)lVar6;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780d00) = uVar3;
    _objc_release(lVar5);
    _CGColorSpaceCreateDeviceRGB();
    dVar10 = pdVar1[1];
    iVar9 = (int)*pdVar1;
    uVar7 = 0;
    _CGBitmapContextCreate(0,(long)iVar9,(long)(int)dVar10,8,(long)(iVar9 << 2),lVar5,1);
    _CGContextDrawImage(0,0,(double)iVar9,(double)(int)dVar10);
    _CGColorSpaceRelease(lVar5);
    _CGBitmapContextGetData(uVar7);
    uVar8 = param_3;
    func_0x00010bf596e0();
    *(int *)(param_1 + _DAT_112780d04) = (int)uVar8;
    _CGContextRelease(uVar7);
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 109077910; end: 109077ac3; -[SCImageProcessMosaicRGBCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109077910(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  float fVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  lVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,8,lVar1,in_stack_00000018);
  _objc_release(lVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar1);
    _glActiveTexture(0x84c2);
    _glBindTexture(0xde1,*(undefined4 *)(param_3 + _DAT_112780d04));
    _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780cfc),2);
    uVar2 = param_6;
    if (param_6 <= param_7) {
      uVar2 = param_7;
    }
    fVar4 = (float)(int)((float)uVar2 / 32.0 + 0.5);
    _glUniform2f(fVar4 / (float)param_6,fVar4 / (float)param_7,
                 *(undefined4 *)(param_3 + _DAT_112780d00));
    func_0x00010bf89d00(param_1,param_2);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar3 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar3;
}



/* Entry: 109077ac4; end: 109077b23; -[SCImageProcessMosaicRGBCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109077ac4(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_112700260;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    _glDeleteTextures(1,param_1 + _DAT_112780d04);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 109077b24; end: 109077b2f; -[SCImageProcessMosaicRGBCommand commandName] */

undefined ** FUN_109077b24(void)

{
  return &PTR____CFConstantStringClassReference_110f1e9b8;
}



/* Entry: 109077b30; end: 109077c23; -[SCImageProcessMosaicRGBCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_109077b30(ulong param_1,undefined8 param_2,ulong param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar4 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar7 = true;
    goto LAB_109077bd8;
  }
  puVar5 = PTR_PTR_1126bf498;
  _objc_opt_class(PTR_PTR_1126bf498);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar3 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  if (uVar3 == 0) {
LAB_109077bc4:
    bVar7 = false;
  }
  else {
    puStack_38 = PTR_PTR_112700260;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((iVar4 == 0) ||
       (*(long *)(param_3 + (long)_DAT_112780cf4) != *(long *)(param_1 + (long)_DAT_112780cf4)))
    goto LAB_109077bc4;
    pdVar1 = (double *)(param_1 + (long)_DAT_112780cf8);
    pdVar2 = (double *)(uVar3 + (long)_DAT_112780cf8);
    bVar7 = pdVar1[1] == pdVar2[1] && *pdVar1 == *pdVar2;
  }
  _objc_release(uVar3);
LAB_109077bd8:
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 109077c24; end: 109077c6b; +[SCImageProcessCPUMosaicBGRCommand commandWithImage:outputSize:] */

void FUN_109077c24(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126bf4a0);
  func_0x00010c01c220(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109077c6c; end: 109077ceb; -[SCImageProcessCPUMosaicBGRCommand initWithImage:outputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_109077c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700268;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780d08) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780d0c) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_112780d0c))[1] = param_2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109077cec; end: 109077cff; -[SCImageProcessCPUMosaicBGRCommand setOutputSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109077cec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112780d0c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 109077d00; end: 109077d67; -[SCImageProcessCPUMosaicBGRCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109077d00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112780d08) != 0) {
    _CGImageRelease();
  }
  if (*(long *)(param_1 + _DAT_112780d10) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_112700268;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109077d68; end: 109077e9f; -[SCImageProcessCPUMosaicBGRCommand _generatePixelDataFromImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109077d68(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  lVar5 = (long)_DAT_112780d08;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar2 = param_1;
    _CGColorSpaceCreateDeviceRGB();
    iVar6 = (int)*(double *)(param_1 + _DAT_112780d0c);
    iVar4 = (int)((double *)(param_1 + _DAT_112780d0c))[1];
    iVar1 = iVar6 << 2;
    *(long *)(param_1 + _DAT_112780d14) = (long)iVar1;
    lVar3 = (long)iVar1 * (long)iVar4;
    _calloc(lVar3,1);
    *(long *)(param_1 + _DAT_112780d10) = lVar3;
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbabd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CGColorSpaceRelease_1103470e8)(lVar2);
      return;
    }
    _CGBitmapContextCreate();
    dVar7 = (double)iVar6;
    dVar8 = (double)iVar4;
    _CGContextClearRect(0,0,dVar7,dVar8);
    _CGContextDrawImage(0,0,dVar7,dVar8,lVar3,*(undefined8 *)(param_1 + lVar5));
    _CGColorSpaceRelease(lVar2);
    _CGContextRelease(lVar3);
    _CGImageRelease(*(undefined8 *)(param_1 + lVar5));
    *(undefined8 *)(param_1 + lVar5) = 0;
  }
  return;
}



/* Entry: 109077ea0; end: 1090782bb; -[SCImageProcessCPUMosaicBGRCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109077ea0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 param_6,long *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  FUN_1090798f0(param_6,100,8,lVar12,param_7);
  _objc_release(lVar12);
  if ((int)param_6 != 0) {
    func_0x00010be1b900(param_1);
    lVar12 = (long)_DAT_112780d10;
    if (*(long *)(param_1 + lVar12) != 0) {
      _CVPixelBufferLockBaseAddress(param_4,0);
      _CVPixelBufferLockBaseAddress(param_5,0);
      uVar1 = param_4;
      _CVPixelBufferGetWidth();
      uVar2 = param_4;
      _CVPixelBufferGetHeight();
      uVar3 = param_4;
      _CVPixelBufferGetBytesPerRow();
      uVar4 = param_4;
      _CVPixelBufferGetBaseAddress();
      uVar5 = param_5;
      _CVPixelBufferGetWidth();
      uVar6 = param_5;
      _CVPixelBufferGetHeight();
      uVar7 = param_5;
      _CVPixelBufferGetBytesPerRow();
      uVar8 = param_5;
      _CVPixelBufferGetBaseAddress();
      if ((uVar4 != 0) && (uVar8 != 0)) {
        lVar9 = param_1;
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar1;
        func_0x000109079e0c(uVar1,uVar2,uVar3,uVar5,uVar6,100,8,lVar9,param_7);
        _objc_release(lVar9);
        if ((uVar10 & 1) == 0) {
          _CVPixelBufferUnlockBaseAddress(param_5,0);
          _CVPixelBufferUnlockBaseAddress(param_4,0);
          return (undefined *)0x0;
        }
        if ((((uVar1 == uVar5) && (uVar2 == uVar6)) &&
            (uVar1 == (long)(int)*(double *)(param_1 + _DAT_112780d0c))) &&
           (uVar2 == (long)(int)((double *)(param_1 + _DAT_112780d0c))[1])) {
          func_0x0001090781c8(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + lVar12),
                              *(undefined8 *)(param_1 + _DAT_112780d14),uVar8,uVar7);
          _CVPixelBufferUnlockBaseAddress(param_5,0);
          _CVPixelBufferUnlockBaseAddress(param_4,0);
          return PTR____NSDictionary0__struct_11034ab58;
        }
        _CVPixelBufferUnlockBaseAddress(param_5,0);
        _CVPixelBufferUnlockBaseAddress(param_4,0);
        if (param_7 == (long *)0x0) {
          return (undefined *)0x0;
        }
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee7d60();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_7 = param_1;
        _objc_release(puVar11);
        return (undefined *)0x0;
      }
      _CVPixelBufferUnlockBaseAddress(param_5,0);
      _CVPixelBufferUnlockBaseAddress(param_4,0);
    }
    if (param_7 != (long *)0x0) {
      func_0x00010bee7d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = param_1;
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1090782bc; end: 10907840b; -[SCImageProcessCPUMosaicBGRCommand _validationErrorWithReason:] */

undefined ** FUN_1090782bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_80 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f78ef8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f78f38;
  uStack_60 = param_3;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f78fb8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1f38;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_58 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f78ed8,100,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110f1ea38;
}



/* Entry: 10907840c; end: 109078417; -[SCImageProcessCPUMosaicBGRCommand commandName] */

undefined ** FUN_10907840c(void)

{
  return &PTR____CFConstantStringClassReference_110f1ea38;
}



/* Entry: 109078418; end: 10907850b; -[SCImageProcessCPUMosaicBGRCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_109078418(ulong param_1,undefined8 param_2,ulong param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar4 = (int)&uStack_40;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar7 = true;
    goto LAB_1090784c0;
  }
  puVar5 = PTR_PTR_1126bf4a0;
  _objc_opt_class(PTR_PTR_1126bf4a0);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar3 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  if (uVar3 == 0) {
LAB_1090784ac:
    bVar7 = false;
  }
  else {
    puStack_38 = PTR_PTR_112700268;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((iVar4 == 0) ||
       (*(long *)(param_3 + (long)_DAT_112780d08) != *(long *)(param_1 + (long)_DAT_112780d08)))
    goto LAB_1090784ac;
    pdVar1 = (double *)(param_1 + (long)_DAT_112780d0c);
    pdVar2 = (double *)(uVar3 + (long)_DAT_112780d0c);
    bVar7 = pdVar1[1] == pdVar2[1] && *pdVar1 == *pdVar2;
  }
  _objc_release(uVar3);
LAB_1090784c0:
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 10907850c; end: 1090785bf;  */

void FUN_10907850c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  uVar11 = *(long *)(param_1 + 0x28) * param_2;
  uVar1 = *(long *)(param_1 + 0x28) + uVar11;
  if (*(ulong *)(param_1 + 0x58) <= uVar1) {
    uVar1 = *(ulong *)(param_1 + 0x58);
  }
  if (uVar11 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 0x50);
    lVar12 = *(long *)(param_1 + 0x40);
    lVar13 = *(long *)(param_1 + 0x48) + lVar4 * uVar11;
    lVar14 = lVar3 + lVar12 * uVar11;
    lVar15 = *(long *)(param_1 + 0x20) + uVar11 * lVar2;
    uVar16 = *(ulong *)(param_1 + 0x60);
    do {
      if (uVar16 != 0) {
        uVar7 = 0;
        lVar8 = 3;
        do {
          if (*(char *)(lVar13 + lVar8) == -1) {
            uVar10 = (ulong)*(int *)(param_1 + 0x68);
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = uVar7 / uVar10;
            }
            puVar9 = (undefined4 *)(lVar3 + uVar5 * uVar10 * lVar12 + uVar6 * uVar10 * 4);
          }
          else {
            puVar9 = (undefined4 *)(lVar14 + lVar8 + -3);
          }
          *(undefined4 *)(lVar15 + uVar7 * 4) = *puVar9;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 4;
        } while (uVar16 != uVar7);
      }
      lVar15 = lVar15 + lVar2;
      lVar14 = lVar14 + lVar12;
      lVar13 = lVar13 + lVar4;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  return;
}



/* Entry: 1090785c0; end: 10907868f; -[SCImageProcessPairedCommand initWithLeftCommand:rightCommand:alpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1090785c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_112700270;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112780d18) = param_1;
    lVar3 = (long)_DAT_112780d1c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112780d20;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109078690; end: 1090786eb; -[SCImageProcessPairedCommand isLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109078690(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112780d1c);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    func_0x00010c076b80();
    uVar1 = (uint)lVar3;
  }
  lVar3 = *(long *)(param_1 + _DAT_112780d20);
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010c076b80();
    uVar2 = (uint)lVar3;
  }
  return uVar1 & uVar2;
}



/* Entry: 1090786ec; end: 109078737; -[SCImageProcessPairedCommand isGPUPass] */

/* WARNING: Possible PIC construction at 0x000109078708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010907870c) */
/* WARNING: Removing unreachable block (ram,0x000109078720) */
/* WARNING: Removing unreachable block (ram,0x000109078710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090786ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0742b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112780d1c),PTR_s_isGPUPass_1125faab8);
  return;
}



/* Entry: 109078738; end: 10907881b; -[SCImageProcessPairedCommand isRenderingCompatible] */

undefined8 FUN_109078738(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0654e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10907881c; end: 109078877; -[SCImageProcessPairedCommand inputConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10907881c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112780d1c);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c065800();
  }
  lVar2 = *(long *)(param_1 + _DAT_112780d20);
  if (lVar2 != 0) {
    func_0x00010c065800();
  }
  if (1 < lVar1 - 1U) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 109078878; end: 10907891b; -[SCImageProcessPairedCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109078878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112780d1c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 == 0) || (func_0x00010c076b80(), (uVar1 & 1) != 0)) {
LAB_1090788c8:
    lVar3 = (long)_DAT_112780d20;
    uVar1 = *(ulong *)(param_1 + lVar3);
    if ((uVar1 != 0) && (func_0x00010c076b80(), (uVar1 & 1) == 0)) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c09c860(uVar2,param_2,param_3,param_4);
      if ((int)uVar2 == 0) goto LAB_1090788fc;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c09c860(uVar2,param_2,param_3,param_4);
    if ((int)uVar2 != 0) goto LAB_1090788c8;
LAB_1090788fc:
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10907891c; end: 109078bdb; -[SCImageProcessPairedCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10907891c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_11);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = *(long *)(param_1 + _DAT_112780d1c);
  if (lVar4 != 0) {
    fVar7 = *(float *)(param_1 + _DAT_112780d18);
    fVar6 = ABS(fVar7);
    bVar1 = true;
    if ((fVar7 < 0.0) && (bVar1 = false, !NAN(fVar6))) {
      bVar1 = fVar6 < 1.1754944e-38;
    }
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(fVar6) && !NAN(fVar6 * 1.1920929e-07))) {
      bVar2 = fVar6 < fVar6 * 1.1920929e-07;
    }
    if (bVar2) {
      fVar8 = ABS(fVar7 + -1.0);
      fVar6 = ABS(fVar7 + 1.0) * 1.1920929e-07;
      bVar1 = true;
      if ((1.0 < fVar7) && (bVar1 = false, !NAN(fVar8))) {
        bVar1 = fVar8 < 1.1754944e-38;
      }
      bVar2 = true;
      if ((!bVar1) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar6))) {
        bVar2 = fVar8 < fVar6;
      }
      if (bVar2) {
        uStack_88 = param_10[1];
        uStack_90 = *param_10;
        uStack_78 = param_10[3];
        uStack_80 = param_10[2];
        uStack_68 = param_10[5];
        uStack_70 = param_10[4];
        func_0x00010c142ba0(0,lVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            &uStack_90,param_11,param_12);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          puVar5 = (undefined *)0x0;
          goto LAB_109078b98;
        }
        func_0x00010bef7f60(puVar3,param_2,lVar4);
        _objc_release(lVar4);
      }
    }
  }
  lVar4 = *(long *)(param_1 + _DAT_112780d20);
  if (lVar4 != 0) {
    fVar6 = *(float *)(param_1 + _DAT_112780d18);
    fVar7 = ABS(fVar6 + -1.1754944e-38);
    fVar8 = ABS(fVar6 + 1.1754944e-38) * 1.1920929e-07;
    bVar1 = true;
    if ((fVar6 < 1.1754944e-38) && (bVar1 = false, !NAN(fVar7))) {
      bVar1 = fVar7 < 1.1754944e-38;
    }
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(fVar7) && !NAN(fVar8))) {
      bVar2 = fVar7 < fVar8;
    }
    if (bVar2) {
      fVar7 = ABS(fVar6 + -1.0);
      fVar8 = ABS(fVar6 + 1.0) * 1.1920929e-07;
      bVar1 = true;
      if ((1.0 < fVar6) && (bVar1 = false, !NAN(fVar7))) {
        bVar1 = fVar7 < 1.1754944e-38;
      }
      bVar2 = true;
      if ((!bVar1) && (bVar2 = false, !NAN(fVar7) && !NAN(fVar8))) {
        bVar2 = fVar7 < fVar8;
      }
      if (bVar2) {
        uStack_88 = param_10[1];
        uStack_90 = *param_10;
        uStack_78 = param_10[3];
        uStack_80 = param_10[2];
        uStack_68 = param_10[5];
        uStack_70 = param_10[4];
        func_0x00010c142ba0(fVar6,1.0 - fVar6,lVar4,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,&uStack_90,param_11,param_12);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined *)0x0;
        if (lVar4 == 0) goto LAB_109078b98;
        func_0x00010bef7f60(puVar3,param_2,lVar4);
        _objc_release(lVar4);
      }
    }
  }
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
LAB_109078b98:
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109078bdc; end: 109078c3b; -[SCImageProcessPairedCommand unloadWithError:] */

/* WARNING: Possible PIC construction at 0x000109078c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109078c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109078bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112780d1c);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + _DAT_112780d20), lVar1 == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_unloadWithError__11267dcf0,param_3);
  return lVar1;
}



/* Entry: 109078c3c; end: 109078cef; -[SCImageProcessPairedCommand hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109078c3c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780d1c);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112780d20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar6 = (ulong)*(uint *)(param_1 + _DAT_112780d18) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_30 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar7 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar7);
      if (((((ulong)puVar4 & 1) == 0) ||
          ((lVar5 = *(long *)((long)puVar3 + (long)_DAT_112780d1c),
           lVar5 != *(long *)(param_3 + _DAT_112780d1c) && (func_0x00010c071ae0(), (int)lVar5 == 0))
          )) || ((lVar5 = *(long *)((long)puVar3 + (long)_DAT_112780d20),
                 lVar5 != *(long *)(param_3 + _DAT_112780d20) &&
                 (func_0x00010c071ae0(), (int)lVar5 == 0)))) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        fVar8 = ABS(*(float *)((long)puVar3 + (long)_DAT_112780d18) +
                    *(float *)(param_3 + _DAT_112780d18)) * 1.1920929e-07;
        if (fVar8 <= 1.1754944e-38) {
          fVar8 = 1.1754944e-38;
        }
        puVar7 = (undefined1 *)
                 (ulong)(ABS(*(float *)((long)puVar3 + (long)_DAT_112780d18) -
                             *(float *)(param_3 + _DAT_112780d18)) < fVar8);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 109078cf0; end: 109078ddf; -[SCImageProcessPairedCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_109078cf0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((((uVar2 & 1) == 0) ||
          ((lVar3 = *(long *)(param_1 + (long)_DAT_112780d1c),
           lVar3 != *(long *)(param_3 + (long)_DAT_112780d1c) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
         ((lVar3 = *(long *)(param_1 + (long)_DAT_112780d20),
          lVar3 != *(long *)(param_3 + (long)_DAT_112780d20) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)))) {
        bVar4 = false;
      }
      else {
        fVar5 = *(float *)(param_1 + (long)_DAT_112780d18);
        fVar7 = *(float *)(param_3 + (long)_DAT_112780d18);
        fVar6 = ABS(fVar5 + fVar7) * 1.1920929e-07;
        if (fVar6 <= 1.1754944e-38) {
          fVar6 = 1.1754944e-38;
        }
        bVar4 = ABS(fVar5 - fVar7) < fVar6;
      }
    }
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 109078de0; end: 109078e7f; -[SCImageProcessPairedCommand commandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109078de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112780d1c);
  func_0x00010bf41ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112780d20);
  func_0x00010bf41ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f1ea58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109078e80; end: 109078f3b; -[SCImageProcessPairedCommand innerCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_109078e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + _DAT_112780d1c);
  lVar4 = *(long *)(param_1 + _DAT_112780d20);
  if (lVar5 == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (lVar4 == 0) goto LAB_109078f08;
    plVar2 = &lStack_30;
    lStack_30 = lVar4;
LAB_109078ef8:
    uVar3 = 1;
  }
  else {
    if (lVar4 == 0) {
      plVar2 = &lStack_38;
      lStack_38 = lVar5;
      goto LAB_109078ef8;
    }
    plVar2 = &lStack_28;
    uVar3 = 2;
    lStack_28 = lVar5;
    lStack_20 = lVar4;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_109078f08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    return *(undefined **)(puVar1 + _DAT_112780d1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 109078f3c; end: 109078f4b; -[SCImageProcessPairedCommand leftCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109078f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780d1c);
}



/* Entry: 109078f4c; end: 109078f5b; -[SCImageProcessPairedCommand rightCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109078f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112780d20);
}



/* Entry: 109078f5c; end: 109078f9b; -[SCImageProcessPairedCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109078f5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112780d20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112780d1c,0);
  return;
}



/* Entry: 109078f9c; end: 10907909f; -[SCImageProcessRGBPairedCommand initWithLeftCommand:rightCommand:alpha:] */

undefined1 *
FUN_109078f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b26c8;
    func_0x00010c22b820(PTR_PTR_1126b26c8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b26c8;
    func_0x00010c22b820(PTR_PTR_1126b26c8);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_58 = PTR_PTR_112700278;
  uStack_60 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_60,PTR_s_initWithLeftCommand_rightCommand_1125e6218,puVar1,
                      puVar2);
  _objc_retain();
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar3);
  return (undefined1 *)puVar3;
}



/* Entry: 1090790a0; end: 1090791a7; -[SCImageProcessSRPluginRenderPass initWithRenderPlugin:inputBufferIds:outputBufferIds:circumstanceEngine:] */

undefined1 *
FUN_1090790a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700280;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c26cf40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090791a8; end: 1090791df; -[SCImageProcessSRPluginRenderPass runWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:GPUAvailable:error:] */

void FUN_1090791a8(void)

{
  func_0x00010be3d4e0();
  return;
}



/* Entry: 1090791e0; end: 1090791e7; -[SCImageProcessSRPluginRenderPass unloadWithError:] */

undefined8 FUN_1090791e0(void)

{
  return 1;
}



/* Entry: 1090791e8; end: 1090791ef; -[SCImageProcessSRPluginRenderPass requiresGPU] */

undefined8 FUN_1090791e8(void)

{
  return 1;
}



/* Entry: 1090791f0; end: 1090791f7; -[SCImageProcessSRPluginRenderPass isOutputDeterministicAndStatic] */

undefined8 FUN_1090791f0(void)

{
  return 0;
}



/* Entry: 1090791f8; end: 109079703; -[SCImageProcessSRPluginRenderPass _internalRGBRunWithInputTextures:outputTextures:ippContext:negativeSpaceColor:presentationTime:presentationTimeOffset:error:] */

undefined *
FUN_1090791f8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long *param_7,long param_8,long *param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long alStack_218 [3];
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _glFlush();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar10 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd7c0();
  _objc_release(uVar10);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar8 = *plStack_1a0;
    uVar14 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    lVar17 = *(long *)(PTR__kCMTimeInvalid_110348648 + 8);
    lVar15 = *(long *)PTR__kCMTimeInvalid_110348648;
    lVar7 = *(long *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar10 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_1a8 + lVar13 * 8);
        uVar2 = uVar11;
        func_0x00010c121740(uVar11);
        lStack_200 = lVar15;
        lStack_1f8 = lVar17;
        lStack_1f0 = lVar7;
        uStack_1e8 = uVar16;
        uStack_1e0 = uVar18;
        uStack_1d8 = uVar10;
        lStack_1d0 = lVar15;
        lStack_1c8 = lVar17;
        lStack_1c0 = lVar7;
        _CMVideoFormatDescriptionCreateForImageBuffer(uVar14,uVar2,alStack_218);
        _CMSampleBufferCreateForImageBuffer
                  (uVar14,uVar2,1,0,0,alStack_218[0],&lStack_200,&lStack_230);
        if (alStack_218[0] != 0) {
          _CFRelease();
        }
        if (lStack_230 != 0) {
          puVar3 = PTR_PTR_1126c8eb8;
          _objc_alloc(PTR_PTR_1126c8eb8);
          func_0x00010c0413a0();
          puVar9 = PTR_PTR_1126d3380;
          _objc_alloc();
          func_0x00010bf4c860(uVar11);
          func_0x00010c041340();
          func_0x00010befa120(puVar1);
          _objc_release(puVar9);
          _objc_release(puVar3);
        }
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
      lVar12 = param_3;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_3);
  lVar12 = *(long *)(param_1 + 8);
  uVar10 = param_4;
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_8 == 0) {
    lStack_1f8 = param_7[1];
    lStack_200 = *param_7;
    lStack_1f0 = param_7[2];
  }
  else {
    func_0x00010bdc1140(alStack_218,param_8);
    lStack_228 = param_7[1];
    lStack_230 = *param_7;
    lStack_220 = param_7[2];
    _CMTimeAdd(&lStack_200,&lStack_230,alStack_218);
  }
  func_0x00010c115660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  lVar7 = lVar12;
  func_0x00010c1494c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    func_0x00010c111a60(lVar7);
    _CMSampleBufferGetImageBuffer();
    uVar4 = param_1;
    func_0x00010bde9ba0();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_9 != (long *)0x0) && ((uVar4 & 1) == 0)) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_9 = (long)puVar3;
      _objc_release(param_1);
    }
  }
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(puVar1);
  puVar5 = &uStack_270;
  puVar6 = auStack_170;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_260;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        lVar13 = *(long *)(lStack_268 + (long)puVar9 * 8);
        lVar15 = lVar13;
        func_0x00010c1494c0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar15;
        func_0x00010c1494c0();
        _objc_release(lVar15);
        if (lVar17 != 0) {
          func_0x00010c1494c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1494c0();
          _CFRelease();
          _objc_release(lVar13);
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar5 = &uStack_270;
      puVar6 = auStack_170;
      puVar3 = puVar1;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010c12adc0(puVar1);
  _objc_release(puVar1);
  func_0x00010c28fe00(param_5);
  lVar8 = *param_9;
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined *)(ulong)(lVar8 == 0);
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d34a8;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_alloc(puVar1);
  func_0x00010c03e140();
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 109079704; end: 109079777; -[SCImageProcessSRPluginRenderPass createInstanceWithUpdatedInputBufferIds:OutputBufferIds:] */

void FUN_109079704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d34a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03e140();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109079778; end: 10907977f; -[SCImageProcessSRPluginRenderPass isPixelBufferInputCompatible] */

void FUN_109079778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c263d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_supportsYUVInput_112676970);
  return;
}



/* Entry: 109079780; end: 10907978b; -[SCImageProcessSRPluginRenderPass lensIds] */

void FUN_109079780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1607b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_set_112635c08);
  return;
}



/* Entry: 10907978c; end: 10907988f; -[SCImageProcessSRPluginRenderPass _copyPixelBuffer:to:] */

bool FUN_10907978c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  bVar5 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_3;
    _CVPixelBufferGetPlaneCount();
    lVar2 = param_4;
    _CVPixelBufferGetPlaneCount();
    if (lVar1 == 0 && lVar2 == 0) {
      lVar1 = param_3;
      _CVPixelBufferGetHeight();
      lVar2 = param_4;
      _CVPixelBufferGetHeight();
      lVar3 = param_3;
      _CVPixelBufferGetBytesPerRow();
      lVar4 = param_4;
      _CVPixelBufferGetBytesPerRow();
      bVar5 = false;
      if ((lVar1 == lVar2) && (lVar3 == lVar4)) {
        _CVPixelBufferLockBaseAddress(param_3,1);
        _CVPixelBufferLockBaseAddress(param_4,0);
        lVar1 = param_3;
        _CVPixelBufferGetBaseAddress();
        lVar2 = param_4;
        _CVPixelBufferGetBaseAddress();
        bVar5 = lVar1 != 0 && lVar2 != 0;
        if (lVar1 != 0 && lVar2 != 0) {
          _memcpy();
        }
        _CVPixelBufferUnlockBaseAddress(param_3,1);
        _CVPixelBufferUnlockBaseAddress(param_4,0);
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



/* Entry: 109079890; end: 109079897; -[SCImageProcessSRPluginRenderPass inputBufferIds] */

undefined8 FUN_109079890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109079898; end: 10907989f; -[SCImageProcessSRPluginRenderPass outputBufferIds] */

undefined8 FUN_109079898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090798a0; end: 1090798a7; -[SCImageProcessSRPluginRenderPass textureType] */

undefined8 FUN_1090798a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090798a8; end: 1090798ef; -[SCImageProcessSRPluginRenderPass .cxx_destruct] */

void FUN_1090798a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090798f0; end: 109079a73;  */

undefined8 *
FUN_1090798f0(float param_1,long param_2,undefined8 *param_3,undefined **param_4,undefined8 *param_5
             ,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined8 *puStack_310;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_230;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  puVar9 = param_6;
  if ((param_2 != 0) && (param_6 != (undefined8 *)0x0)) {
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    _objc_retain(param_5);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_autorelease(puVar4);
    *param_6 = puVar4;
    _objc_release(puVar5);
    _objc_release(puVar3);
    param_5 = param_3;
  }
  puVar5 = (undefined8 *)(ulong)(param_2 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = puVar12 != (undefined8 *)0x0;
  bVar2 = param_4 != (undefined **)0x0;
  puVar7 = puVar5;
  puVar10 = param_7;
  puVar17 = param_8;
  if (((puVar5 == (undefined8 *)0x0 || !bVar1) || !bVar2) && (param_8 != (undefined8 *)0x0)) {
    _objc_retain(param_7);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_autorelease(puVar3);
    *param_8 = puVar3;
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release();
    puVar7 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return (undefined8 *)(ulong)((puVar5 != (undefined8 *)0x0 && bVar1) && bVar2);
  }
  ___stack_chk_fail();
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = puVar12 == (undefined8 *)0x0;
  bVar2 = param_4 != (undefined **)0x0;
  puVar6 = puVar7;
  puVar11 = param_5;
  puVar16 = puVar9;
  puVar18 = puVar17;
  puVar19 = param_9;
  if ((((puVar7 == (undefined8 *)0x0 || bVar1) || !bVar2) || param_5 == (undefined8 *)0x0) &&
     (param_9 != (undefined8 *)0x0)) {
    _objc_retain(puVar17);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_autorelease(puVar3);
    *param_9 = puVar3;
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release();
    puVar6 = puVar5;
    puVar11 = puVar9;
    puStack_230 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bVar1 = puVar12 == (undefined8 *)0x0;
    bVar2 = param_4 == (undefined **)0x0;
    puVar9 = puVar11;
    puVar5 = puVar16;
    puVar7 = puVar10;
    puVar17 = puVar19;
    if (((((puVar6 == (undefined8 *)0x0 || bVar1) || bVar2) || puVar11 == (undefined8 *)0x0) ||
         puVar16 == (undefined8 *)0x0) && (puStack_230 != (undefined8 *)0x0)) {
      _objc_retain(puVar19);
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_autorelease(puVar4);
      *puStack_230 = puVar4;
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar3);
      puVar9 = puVar10;
      puStack_310 = puVar6;
      puStack_2f8 = puVar11;
      puStack_2f0 = puVar16;
    }
    puVar6 = (undefined8 *)
             (ulong)((((puVar6 != (undefined8 *)0x0 && !bVar1) && !bVar2) &&
                     puVar11 != (undefined8 *)0x0) && puVar16 != (undefined8 *)0x0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      return puVar6;
    }
    ___stack_chk_fail();
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bVar1 = puVar12 == (undefined8 *)0x0;
    bVar2 = param_4 == (undefined **)0x0;
    puVar11 = puVar6;
    if (((((((((puVar6 == (undefined8 *)0x0 || bVar1) || bVar2) || puVar9 == (undefined8 *)0x0) ||
            puVar5 == (undefined8 *)0x0) || puVar7 == (undefined8 *)0x0) ||
          puVar18 == (undefined8 *)0x0) || puVar17 == (undefined8 *)0x0) ||
         puStack_310 == (undefined8 *)0x0) && (puStack_2f0 != (undefined8 *)0x0)) {
      _objc_retain();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_2f8);
      _objc_autorelease(puVar3);
      *puStack_2f0 = puVar3;
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release();
      puVar11 = puVar10;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      return (undefined8 *)
             (ulong)(((((((((puVar6 == (undefined8 *)0x0 || bVar1) || bVar2) ||
                          puVar9 == (undefined8 *)0x0) || puVar5 == (undefined8 *)0x0) ||
                        puVar7 == (undefined8 *)0x0) || puVar18 == (undefined8 *)0x0) ||
                      puVar17 == (undefined8 *)0x0) || puStack_310 == (undefined8 *)0x0) ^ 1);
    }
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar21 = param_4;
    if ((puVar11 == (undefined8 *)0x0) && (param_4 != (undefined **)0x0)) {
      ppuVar21 = &PTR____CFConstantStringClassReference_110f78ed8;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar3;
      _objc_release(puVar4);
      _objc_release(puVar12);
    }
    puVar12 = (undefined8 *)(ulong)(puVar11 != (undefined8 *)0x0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      return puVar12;
    }
    ___stack_chk_fail();
    _objc_retain(ppuVar21);
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuVar13 = ppuVar21;
    func_0x00010c24d2c0(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    ppuVar14 = ppuVar21;
    func_0x00010c08ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    ppuVar15 = ppuVar21;
    func_0x00010c140d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar21;
    func_0x00010c24d2c0(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar9);
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar21;
    func_0x00010c08ea00(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010bec9440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    func_0x00010bf8aea0(ppuVar21);
    if (1.0 <= param_1) {
      if (puVar5 != (undefined8 *)0x0) {
        func_0x00010befa120(puVar9);
      }
    }
    else {
      ppuVar13 = ppuVar21;
      func_0x00010c140d60(ppuVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec9440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      if (puVar5 != (undefined8 *)0x0 || puVar12 != (undefined8 *)0x0) {
        puVar3 = PTR_PTR_1126dd298;
        _objc_alloc(PTR_PTR_1126dd298);
        func_0x00010bf8aea0(ppuVar21);
        func_0x00010c0220c0(puVar3);
        func_0x00010befa120(puVar9);
        _objc_release(puVar3);
      }
      _objc_release(puVar12);
    }
    puVar12 = puVar9;
    func_0x00010bf529e0();
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = puVar9;
      func_0x00010bf51e00(puVar9);
    }
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(ppuVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  return (undefined8 *)
         (ulong)(((puVar7 != (undefined8 *)0x0 && !bVar1) && bVar2) && param_5 != (undefined8 *)0x0)
  ;
}



/* Entry: 109079a74; end: 10907a203;  */

undefined *
FUN_109079a74(float param_1,undefined8 *param_2,long param_3,undefined **param_4,undefined8 *param_5
             ,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined8 *puStack_270;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_190;
  
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = param_3 != 0;
  bVar2 = param_4 != (undefined **)0x0;
  puVar5 = param_2;
  puVar15 = param_7;
  puVar17 = param_8;
  if (((param_2 == (undefined8 *)0x0 || !bVar1) || !bVar2) && (param_8 != (undefined8 *)0x0)) {
    _objc_retain(param_7);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_6 = puVar5;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_autorelease(puVar10);
    *param_8 = puVar10;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
    puVar5 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return (undefined *)(ulong)((param_2 != (undefined8 *)0x0 && bVar1) && bVar2);
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = param_3 == 0;
  bVar2 = param_4 != (undefined **)0x0;
  puVar6 = puVar5;
  puVar14 = param_5;
  puVar16 = param_6;
  puVar18 = puVar17;
  puVar19 = param_9;
  if ((((puVar5 == (undefined8 *)0x0 || bVar1) || !bVar2) || param_5 == (undefined8 *)0x0) &&
     (param_9 != (undefined8 *)0x0)) {
    _objc_retain(puVar17);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_autorelease(puVar10);
    *param_9 = puVar10;
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release();
    puVar6 = puVar3;
    puVar14 = param_6;
    puStack_190 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return (undefined *)
           (ulong)(((puVar5 != (undefined8 *)0x0 && !bVar1) && bVar2) &&
                  param_5 != (undefined8 *)0x0);
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = param_3 == 0;
  bVar2 = param_4 == (undefined **)0x0;
  puVar3 = puVar14;
  puVar5 = puVar16;
  puVar17 = puVar15;
  puVar20 = puVar19;
  if (((((puVar6 == (undefined8 *)0x0 || bVar1) || bVar2) || puVar14 == (undefined8 *)0x0) ||
       puVar16 == (undefined8 *)0x0) && (puStack_190 != (undefined8 *)0x0)) {
    _objc_retain(puVar19);
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_autorelease(puVar4);
    *puStack_190 = puVar4;
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar10);
    puVar3 = puVar15;
    puStack_270 = puVar6;
    puStack_258 = puVar14;
    puStack_250 = puVar16;
  }
  puVar10 = (undefined *)
            (ulong)((((puVar6 != (undefined8 *)0x0 && !bVar1) && !bVar2) &&
                    puVar14 != (undefined8 *)0x0) && puVar16 != (undefined8 *)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = param_3 == 0;
  bVar2 = param_4 == (undefined **)0x0;
  puVar7 = puVar10;
  if (((((((((puVar10 == (undefined *)0x0 || bVar1) || bVar2) || puVar3 == (undefined8 *)0x0) ||
          puVar5 == (undefined8 *)0x0) || puVar17 == (undefined8 *)0x0) ||
        puVar18 == (undefined8 *)0x0) || puVar20 == (undefined8 *)0x0) ||
       puStack_270 == (undefined8 *)0x0) && (puStack_250 != (undefined8 *)0x0)) {
    _objc_retain();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    param_4 = &PTR____CFConstantStringClassReference_110f78ed8;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_258);
    _objc_autorelease(puVar7);
    *puStack_250 = puVar7;
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release();
    puVar7 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return (undefined *)
           (ulong)(((((((((puVar10 == (undefined *)0x0 || bVar1) || bVar2) ||
                        puVar3 == (undefined8 *)0x0) || puVar5 == (undefined8 *)0x0) ||
                      puVar17 == (undefined8 *)0x0) || puVar18 == (undefined8 *)0x0) ||
                    puVar20 == (undefined8 *)0x0) || puStack_270 == (undefined8 *)0x0) ^ 1);
  }
  ___stack_chk_fail();
  puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar22 = param_4;
  if ((puVar7 == (undefined *)0x0) && (param_4 != (undefined **)0x0)) {
    ppuVar22 = &PTR____CFConstantStringClassReference_110f78ed8;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar10;
    _objc_release(puVar4);
    _objc_release(param_3);
  }
  puVar10 = (undefined *)(ulong)(puVar7 != (undefined *)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar22);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar11 = ppuVar22;
  func_0x00010c24d2c0(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  ppuVar12 = ppuVar22;
  func_0x00010c08ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  ppuVar13 = ppuVar22;
  func_0x00010c140d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar22;
  func_0x00010c24d2c0(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar22;
  func_0x00010c08ea00(ppuVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010bec9440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  func_0x00010bf8aea0(ppuVar22);
  if (1.0 <= param_1) {
    if (puVar7 != (undefined *)0x0) {
      func_0x00010befa120(puVar4);
    }
  }
  else {
    ppuVar11 = ppuVar22;
    func_0x00010c140d60(ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec9440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    if (puVar7 != (undefined *)0x0 || puVar10 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126dd298;
      _objc_alloc(PTR_PTR_1126dd298);
      func_0x00010bf8aea0(ppuVar22);
      func_0x00010c0220c0(puVar8);
      func_0x00010befa120(puVar4);
      _objc_release(puVar8);
    }
    _objc_release(puVar10);
  }
  puVar10 = puVar4;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar4;
    func_0x00010bf51e00(puVar4);
  }
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(ppuVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 10907a204; end: 10907a353;  */

void FUN_10907a204(float param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_4;
  if ((param_2 == 0) && (param_4 != (undefined **)0x0)) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110f78ed8;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar1;
    _objc_release(puVar8);
    _objc_release(param_3);
  }
  uVar2 = (ulong)(param_2 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar3 = ppuVar9;
  func_0x00010c24d2c0(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  ppuVar4 = ppuVar9;
  func_0x00010c08ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  ppuVar5 = ppuVar9;
  func_0x00010c140d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar9;
  func_0x00010c24d2c0(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar9;
  func_0x00010c08ea00(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bec9440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  func_0x00010bf8aea0(ppuVar9);
  if (1.0 <= param_1) {
    if (uVar6 != 0) {
      func_0x00010befa120(puVar1);
    }
  }
  else {
    ppuVar3 = ppuVar9;
    func_0x00010c140d60(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec9440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    if (uVar6 != 0 || uVar2 != 0) {
      puVar8 = PTR_PTR_1126dd298;
      _objc_alloc(PTR_PTR_1126dd298);
      func_0x00010bf8aea0(ppuVar9);
      func_0x00010c0220c0(puVar8);
      func_0x00010befa120(puVar1);
      _objc_release(puVar8);
    }
    _objc_release(uVar2);
  }
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10907a354; end: 10907a567; -[SCDefaultColorFilterRequestCommandMapper mappedCommandsFromCommandContainer:commandContainerConfiguration:] */

void FUN_10907a354(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_4;
  func_0x00010c24d2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = param_4;
  func_0x00010c08ea00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    lVar2 = lVar2 + 1;
  }
  lVar4 = param_4;
  func_0x00010c140d60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar2 = lVar2 + 1;
  }
  func_0x00010bf0a0e0(puVar6,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar2 = param_4;
  func_0x00010c24d2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar6,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c08ea00(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bec9440(param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf8aea0(param_4);
  if (1.0 <= param_1) {
    if (lVar1 != 0) {
      func_0x00010befa120(puVar6,param_3,lVar1);
    }
  }
  else {
    lVar2 = param_4;
    func_0x00010c140d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec9440(param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 != 0 || param_2 != 0) {
      puVar7 = PTR_PTR_1126dd298;
      _objc_alloc(PTR_PTR_1126dd298);
      func_0x00010bf8aea0(param_4);
      func_0x00010c0220c0(puVar7,param_3,lVar1,param_2);
      func_0x00010befa120(puVar6,param_3,puVar7);
      _objc_release(puVar7);
    }
    _objc_release(param_2);
  }
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar6;
    func_0x00010bf51e00(puVar6);
  }
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10907a568; end: 10907a5e7; -[SCDefaultColorFilterRequestCommandMapper _swipedCommandFromSwipedCommands:] */

void FUN_10907a568(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x1) {
      puVar1 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126b26e8;
      _objc_alloc(PTR_PTR_1126b26e8);
      func_0x00010bfffdc0();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10907a5e8; end: 10907a6f3; -[SCDefaultStackedImageProcessCommandContainer initWithStackedCommands:leftSwipedCommands:rightSwipedCommands:dualCommandSwipingOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10907a5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112700288;
  uStack_60 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_60,PTR_s_initWithStackedCommands_leftSwip_1125f07e0,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112780d38;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112780d3c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112780d40;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    *(int *)((long)puVar1 + (long)_DAT_112780d44) = (int)param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10907a6f4; end: 10907a88b; -[SCDefaultStackedImageProcessCommandContainer initWithStackedCommands:stackedCommandPosition:leftSwipedCommand:rightSwipedCommand:dualCommandSwipingOffset:] */

long FUN_10907a6f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_2;
  lVar3 = param_2;
  if (param_5 == 2) {
    func_0x00010bdcf380(param_2,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_10907a808;
    lVar3 = param_4;
    func_0x00010bf09f60(param_4,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 0) {
        func_0x00010bdcf380(param_2,param_3,param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdcf380(param_2,param_3,param_7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = 0;
        lVar3 = 0;
      }
      goto LAB_10907a82c;
    }
    lVar1 = param_4;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010bdcf380(param_2,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = param_4;
      func_0x00010bf09f60(param_4,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10907a808:
    func_0x00010bdcf380(param_2,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  param_4 = 0;
LAB_10907a82c:
  func_0x00010c04b780(param_1,param_2,param_3,param_4,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return param_2;
}


