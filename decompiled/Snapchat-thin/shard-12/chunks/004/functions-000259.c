/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10906b0e0; end: 10906b0e7; -[SCImageProcessMultiPixelSession setUseTransparentBackground:] */

void FUN_10906b0e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10906b0e8; end: 10906b16b; -[SCImageProcessMultiPixelSession .cxx_destruct] */

void FUN_10906b0e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906b16c; end: 10906b1a3; -[SCImageProcessPixelSession initWithQueue:image:outputSize:backgroundAnimationCommand:commands:orientation:viewportTransform:] */

void FUN_10906b16c(void)

{
  func_0x00010c03c6a0();
  return;
}



/* Entry: 10906b1a4; end: 10906b333; -[SCImageProcessPixelSession initWithQueue:image:outputSize:backgroundAnimationCommand:commands:orientation:viewportTransform:commandMapper:useOutputTextureEnable:] */

undefined1 *
FUN_10906b1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_112700198;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar4 = param_10[1];
    uVar2 = *param_10;
    uVar6 = param_10[3];
    uVar5 = param_10[2];
    uVar7 = param_10[4];
    *(undefined8 *)((long)puVar1 + 0x60) = param_10[5];
    *(undefined8 *)((long)puVar1 + 0x58) = uVar7;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x70) = param_12;
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10906b334; end: 10906b3d3; -[SCImageProcessPixelSession dealloc] */

void FUN_10906b334(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_112700198;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906b3d4; end: 10906b493; -[SCImageProcessPixelSession startRunningWithCompletionHandler:atPresentationTime:] */

void FUN_10906b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10906b494;
  puStack_60 = &UNK_110ad6190;
  uStack_40 = param_4[1];
  uStack_48 = *param_4;
  uStack_38 = param_4[2];
  uStack_58 = param_1;
  uStack_50 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 10906b494; end: 10906b883;  */

void FUN_10906b494(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    _objc_retain(uVar11);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar6 = uVar11;
    if (*(long *)(lVar3 + 0x68) != 0) {
      puVar4 = PTR_PTR_1126c40d0;
      _objc_alloc(PTR_PTR_1126c40d0);
      func_0x00010c0169a0();
      puVar5 = PTR_PTR_1126c40d8;
      _objc_alloc(PTR_PTR_1126c40d8);
      func_0x00010c05a600();
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
      func_0x00010c0badc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_10906b884;
    uStack_88 = 0x10906b894;
    uStack_80 = 0;
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    puStack_a0 = &uStack_a8;
    _objc_retain(uVar10);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10906b89c;
    puStack_b8 = &UNK_110ad6a48;
    ppuVar7 = &puStack_d0;
    puStack_b0 = &uStack_a8;
    _objc_retainBlock();
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10906b8d4;
    puStack_f0 = &UNK_110ad6aa8;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    puStack_d8 = &uStack_a8;
    _objc_retain(uVar11);
    uStack_e0 = uVar11;
    _objc_retain(uVar10);
    ppuVar8 = &puStack_108;
    uStack_e8 = uVar10;
    _objc_retainBlock();
    ppuVar9 = ppuVar8;
    _CGColorSpaceCreateDeviceRGB();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010bdc1020(uVar11);
    iVar1 = (int)uVar11;
    _CGImageGetWidth();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010bdc1020(uVar11);
    iVar2 = (int)uVar11;
    _CGImageGetHeight();
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    _CGBitmapContextCreate();
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010bdc1020(uVar11);
    _CGContextDrawImage(0,0,(double)iVar1,(double)iVar2,puVar5,uVar11);
    _CGColorSpaceRelease(ppuVar9);
    _CGContextRelease();
    if (puVar4 != (undefined *)0x0) {
      _objc_autoreleasePoolPush();
      lVar3 = *(long *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(lVar3 + 0x78);
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fcca0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010befafa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
      _objc_release(uVar11);
      _objc_autoreleasePoolPop(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(ppuVar8);
    _objc_release(uStack_e8);
    _objc_release(uStack_e0);
    _objc_release(ppuVar7);
    _objc_release(uVar10);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010906b854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0);
  return;
}



/* Entry: 10906b884; end: 10906b89b;  */

void FUN_10906b884(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10906b89c; end: 10906b8d3;  */

void FUN_10906b89c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10906b8d4; end: 10906b943;  */

void FUN_10906b8d4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  if ((param_2 == 2) &&
     (lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28), lVar2 != 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar3 = param_3;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar3 = 0;
  }
  (*pcVar4)(lVar1,lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10906b944; end: 10906b94b; -[SCImageProcessPixelSession useTransparentBackground] */

undefined1 FUN_10906b944(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 10906b94c; end: 10906b953; -[SCImageProcessPixelSession setUseTransparentBackground:] */

void FUN_10906b94c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10906b954; end: 10906b9b3; -[SCImageProcessPixelSession .cxx_destruct] */

void FUN_10906b954(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906b9b4; end: 10906ba87; -[SCImageProcessRenderSessionStaticCommandManagerImpl initWithQueue:outputCommands:midOutputCommands:] */

undefined1 *
FUN_10906b9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127001a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10906ba88; end: 10906bafb; -[SCImageProcessRenderSessionStaticCommandManagerImpl dealloc] */

void FUN_10906ba88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c280a60();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1127001a0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906bafc; end: 10906bb97; -[SCImageProcessRenderSessionStaticCommandManagerImpl setOutputCommands:] */

void FUN_10906bafc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071b60(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar2 = PTR_PTR_1126d13a0;
      _objc_alloc(PTR_PTR_1126d13a0);
      func_0x00010bfffdc0();
      func_0x00010befafa0(uVar4,param_2,puVar2);
      _objc_release(puVar2);
    }
    lVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10906bb98; end: 10906bc37; -[SCImageProcessRenderSessionStaticCommandManagerImpl setMidOutputCommands:] */

void FUN_10906bb98(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071b60(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar3 = PTR_PTR_1126d13a0;
      _objc_alloc(PTR_PTR_1126d13a0);
      func_0x00010bfffdc0();
      func_0x00010befafa0(uVar4,param_2,puVar3);
      _objc_release(puVar3);
    }
    lVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10906bc38; end: 10906bc3f; -[SCImageProcessRenderSessionStaticCommandManagerImpl updateSwipeFilterOffset:] */

undefined8 FUN_10906bc38(void)

{
  return 1;
}



/* Entry: 10906bc40; end: 10906bc87; -[SCImageProcessRenderSessionStaticCommandManagerImpl getCommandsForExportMode:] */

void FUN_10906bc40(void)

{
  _objc_alloc(PTR_PTR_1126d8a20);
  func_0x00010b73e4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10906bc88; end: 10906bc8b; -[SCImageProcessRenderSessionStaticCommandManagerImpl getCommandsForExportMode:timestamp:] */

void FUN_10906bc88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getCommandsForExportMode__1125ce900);
  return;
}



/* Entry: 10906bc8c; end: 10906bd47; -[SCImageProcessRenderSessionStaticCommandManagerImpl warmupCommandsIfNeededForOutputSize:] */

void FUN_10906bc8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  puVar1 = PTR_PTR_1126d13c0;
  _objc_alloc(PTR_PTR_1126d13c0);
  func_0x00010bfffe20(param_1,param_2);
  func_0x00010befafa0(uVar3,param_4,puVar1);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_3 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    puVar1 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    func_0x00010bfffe20(param_1,param_2);
    func_0x00010befafa0(uVar3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10906bd48; end: 10906bddf; -[SCImageProcessRenderSessionStaticCommandManagerImpl unloadCommands] */

void FUN_10906bd48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a0;
  _objc_alloc(PTR_PTR_1126d13a0);
  func_0x00010bfffdc0();
  func_0x00010befafa0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126d13a0;
    _objc_alloc(PTR_PTR_1126d13a0);
    func_0x00010bfffdc0();
    func_0x00010befafa0(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10906bde0; end: 10906be1b; -[SCImageProcessRenderSessionStaticCommandManagerImpl .cxx_destruct] */

void FUN_10906bde0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906be1c; end: 10906bf2b; -[SCImageProcessRenderSessionTimedCommandManagerImpl initWithQueue:timeRanges:outputCommandsArrays:] */

undefined1 *
FUN_10906be1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127001a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    lVar3 = param_5;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar3;
    _objc_release(uVar2);
    lVar3 = param_5;
    func_0x00010bf529e0();
    if (lVar3 == 1) {
      func_0x00010bf529e0(param_4);
    }
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10906bf2c; end: 10906bf9f; -[SCImageProcessRenderSessionTimedCommandManagerImpl dealloc] */

void FUN_10906bf2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c280a60();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126d13a8;
  _objc_opt_new(PTR_PTR_1126d13a8);
  func_0x00010befafa0(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1127001a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906bfa0; end: 10906bfd7; -[SCImageProcessRenderSessionTimedCommandManagerImpl setOutputCommandsArrays:] */

void FUN_10906bfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c280a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unloadCommands_11267dcc0);
  return;
}



/* Entry: 10906bfd8; end: 10906c063; -[SCImageProcessRenderSessionTimedCommandManagerImpl description] */

void FUN_10906bfd8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = PTR_PTR_1127001a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10906c064; end: 10906c06b; -[SCImageProcessRenderSessionTimedCommandManagerImpl updateSwipeFilterOffset:] */

undefined8 FUN_10906c064(void)

{
  return 1;
}



/* Entry: 10906c06c; end: 10906c0ab; -[SCImageProcessRenderSessionTimedCommandManagerImpl getCommandsForExportMode:] */

void FUN_10906c06c(void)

{
  _objc_alloc(PTR_PTR_1126d8a20);
  func_0x00010b73e4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10906c0ac; end: 10906c1db; -[SCImageProcessRenderSessionTimedCommandManagerImpl getCommandsForExportMode:timestamp:] */

void FUN_10906c0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_70,lVar1);
        }
        _objc_release(lVar1);
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_78 = uStack_48;
        uStack_80 = uStack_50;
        uStack_b8 = param_4[1];
        uStack_c0 = *param_4;
        uStack_b0 = param_4[2];
        puVar2 = &uStack_a0;
        _CMTimeRangeContainsTime(puVar2,&uStack_c0);
        if ((int)puVar2 != 0) {
          if (*(int *)(param_1 + 0x20) != (int)uVar6) {
            func_0x00010c280a60(param_1);
          }
          *(int *)(param_1 + 0x20) = (int)uVar6;
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)(param_1 + 0x28) = uVar4;
          _objc_release(uVar5);
          break;
        }
        uVar6 = uVar6 + 1;
        uVar3 = *(ulong *)(param_1 + 0x10);
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
  }
  func_0x00010bfc3d60(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10906c1dc; end: 10906c257; -[SCImageProcessRenderSessionTimedCommandManagerImpl warmupCommandsIfNeededForOutputSize:] */

void FUN_10906c1dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    puVar2 = PTR_PTR_1126d13c0;
    _objc_alloc(PTR_PTR_1126d13c0);
    func_0x00010bfffe20(param_1,param_2);
    func_0x00010befafa0(uVar3,param_4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10906c258; end: 10906c2b7; -[SCImageProcessRenderSessionTimedCommandManagerImpl unloadCommands] */

void FUN_10906c258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d13a0;
    _objc_alloc(PTR_PTR_1126d13a0);
    func_0x00010bfffdc0();
    func_0x00010befafa0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10906c2b8; end: 10906c2ff; -[SCImageProcessRenderSessionTimedCommandManagerImpl .cxx_destruct] */

void FUN_10906c2b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10906c300; end: 10906c643; -[SCImageProcessVideoPlaybackSessionImpl initWithQueue:audioSession:player:asset:layer:orientation:useHighFrameRate:isPlaybackBufferMonitoringEnabled:videoPlaybackLogger:commandManager:isSpectaclesMedia:isOpera:] */

undefined8 *
FUN_10906c300(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
             undefined4 param_14,undefined8 param_15,undefined8 param_16,undefined4 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_78 = PTR_PTR_1127001b0;
  puVar1 = &uStack_80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x154) = 0x3f800000;
    *(undefined8 *)((long)puVar1 + 0x134) = 0x3f8000003f800000;
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_10;
    _objc_release(uVar2);
    uVar6 = func_0x00010c2a0dc0(puVar1[0x21]);
    *(undefined4 *)(puVar1 + 0x26) = uVar6;
    auVar8 = NEON_fmov(0x3ff0000000000000,8);
    puVar1[0x29] = auVar8._8_8_;
    puVar1[0x28] = auVar8._0_8_;
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[0x42] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puVar1[0x41] = uVar2;
    puVar1[0x43] = *(undefined8 *)(puVar3 + 0x10);
    puVar3 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126bf4b8;
    _objc_opt_new(PTR_PTR_1126bf4b8);
    func_0x00010c01cce0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d1398;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar1[3] = param_12;
    uVar2 = 2;
    _dispatch_semaphore_create();
    uVar5 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR__CGAffineTransformIdentity_110347008;
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[0x12] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    puVar1[0x11] = uVar2;
    puVar1[0x14] = uVar9;
    puVar1[0x13] = uVar5;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    puVar1[0x16] = *(undefined8 *)(puVar3 + 0x28);
    puVar1[0x15] = uVar2;
    _objc_retain(param_16);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_16;
    _objc_release(uVar2);
    uVar2 = 1;
    if ((char)param_13 == '\0') {
      uVar2 = 2;
    }
    puVar1[0xe] = uVar2;
    puVar1[8] = 0x3fc999999999999a;
    if (param_13._1_1_ != '\0') {
      puVar3 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
      uVar2 = puVar1[0x25];
      puVar1[0x25] = puVar3;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126d8a00;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x3a) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0x1d1) = param_17._1_1_;
    puVar3 = PTR__kCMTimeInvalid_110348648;
    uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[0xb] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    puVar1[10] = uVar2;
    puVar1[0xc] = *(undefined8 *)(puVar3 + 0x10);
    func_0x00010bf20c00(param_11);
    dVar7 = (double)func_0x00010bf4e040(param_11);
    func_0x00010beea780((long)(dVar7 * param_3),(long)(dVar7 * param_4),puVar1);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10906c644; end: 10906c67b; -[SCImageProcessVideoPlaybackSessionImpl initWithQueue:player:asset:layer:orientation:useHighFrameRate:isPlaybackBufferMonitoringEnabled:videoPlaybackLogger:commandManager:isSpectaclesMedia:isOpera:] */

void FUN_10906c644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined1 uStack0000000000000001;
  
  uStack0000000000000001 = param_9;
                    /* WARNING: Could not recover jumptable at 0x00010c03c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithQueue_audioSession_playe_1125ecb78,param_3,0,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10906c67c; end: 10906c6ef; -[SCImageProcessVideoPlaybackSessionImpl dealloc] */

void FUN_10906c67c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    func_0x00010c2568a0(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bddf0c0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  func_0x00010bf3a2c0(param_1);
  puStack_28 = PTR_PTR_1127001b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10906c6f0; end: 10906c813; -[SCImageProcessVideoPlaybackSessionImpl cleanupCommandsAndRenderer] */

void FUN_10906c6f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d13a0;
    _objc_alloc(PTR_PTR_1126d13a0);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffdc0(puVar2);
    func_0x00010befafa0(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010c280a60(*(undefined8 *)(param_1 + 0xb8));
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126d13a8;
  _objc_opt_new();
  func_0x00010befafa0(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d13b0;
  _objc_alloc();
  func_0x00010c03e200();
  func_0x00010befafa0(*(undefined8 *)(param_1 + 8));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 0xf0) != 0) {
    return;
  }
  if (*(long *)(puVar2 + 0x30) != 0) {
    func_0x00010bddf0c0(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined **)(puVar2 + 0x30) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1dffc0(0x42700000,0x42f00000,0x42700000,*(undefined8 *)(puVar2 + 0x30));
  uVar4 = *(undefined8 *)(puVar2 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010beaa9c0();
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010be8afa0(puVar2);
    func_0x00010be66940(puVar2);
    func_0x00010c1675a0(*(undefined8 *)(puVar2 + 0x108));
    func_0x00010c161660(*(undefined8 *)(puVar2 + 0x108));
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    puVar2 = *(undefined **)(puVar2 + 0x1d8);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126aed60;
      func_0x00010c15fac0(PTR_PTR_1126aed60);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  func_0x00010bddf0c0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c29ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x80),PTR_s_videoPlaybackSessionPlayerItemFa_112684530,puVar2)
  ;
  return;
}



/* Entry: 10906c814; end: 10906ca2f; -[SCImageProcessVideoPlaybackSessionImpl prepareToPlay] */

void FUN_10906c814(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bddf0c0(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1dffc0(0x42700000,0x42f00000,0x42700000,*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar3);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010beaa9c0();
  if ((uVar1 & 1) != 0) {
    func_0x00010be8afa0(param_1);
    func_0x00010be66940(param_1);
    func_0x00010c1675a0(*(undefined8 *)(param_1 + 0x108));
    func_0x00010c161660(*(undefined8 *)(param_1 + 0x108));
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = *(undefined **)(param_1 + 0x1d8);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126aed60;
      func_0x00010c15fac0(PTR_PTR_1126aed60);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  func_0x00010bddf0c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c29ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemFa_112684530,
             param_1);
  return;
}



/* Entry: 10906ca30; end: 10906ca37; -[SCImageProcessVideoPlaybackSessionImpl isPlaying] */

undefined1 FUN_10906ca30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13c);
}



/* Entry: 10906ca38; end: 10906ca4f; -[SCImageProcessVideoPlaybackSessionImpl currentTime] */

void FUN_10906ca38(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x108) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x108),PTR_s_currentTime_1125b5ac8);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10906ca50; end: 10906ca5b; -[SCImageProcessVideoPlaybackSessionImpl beginConfiguration] */

void FUN_10906ca50(long param_1)

{
  *(undefined1 *)(param_1 + 0x150) = 1;
  return;
}



/* Entry: 10906ca5c; end: 10906cb5f; -[SCImageProcessVideoPlaybackSessionImpl commitConfigurationWithSeekToBeginning:] */

void FUN_10906ca5c(long param_1,undefined8 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    if (((*(byte *)(param_1 + 0x158) & 1) != 0) || (*(char *)(param_1 + 0x151) == '\x01')) {
      func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x108));
      func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x118));
      func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x120));
      func_0x00010be91f80(param_1,param_2,0);
      if (*(char *)(param_1 + 0x100) == '\x01') {
        func_0x00010c130d60(*(undefined8 *)(param_1 + 0x108),param_2,*(undefined8 *)(param_1 + 0xf8)
                           );
        *(undefined1 *)(param_1 + 0x13e) = 1;
      }
    }
    if ((((*(byte *)(param_1 + 0x158) & 1) != 0) || ((*(byte *)(param_1 + 0x151) & 1) != 0)) ||
       (*(char *)(param_1 + 0x152) == '\x01')) {
      func_0x00010bedd540(param_1);
    }
    if (((*(byte *)(param_1 + 0x159) & 1) != 0) ||
       ((((*(byte *)(param_1 + 0x152) & 1) != 0 || (*(char *)(param_1 + 0x158) == '\x01')) &&
        (*(char *)(param_1 + 0x100) == '\x01')))) {
      if (param_3 != 0) {
        func_0x00010c1573a0(param_1);
      }
      *(undefined1 *)(param_1 + 0x159) = 0;
    }
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined2 *)(param_1 + 0x151) = 0;
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x140);
  }
  return;
}



/* Entry: 10906cb60; end: 10906cb67; -[SCImageProcessVideoPlaybackSessionImpl volume] */

undefined4 FUN_10906cb60(long param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}



/* Entry: 10906cb68; end: 10906cbb3; -[SCImageProcessVideoPlaybackSessionImpl setVolume:] */

void FUN_10906cb68(undefined8 param_1,long param_2)

{
  if (*(float *)(param_2 + 0x130) != (float)param_1) {
    if ((*(byte *)(param_2 + 0x7d) & 1) == 0) {
      func_0x00010bea1820(param_1,param_2);
    }
    *(float *)(param_2 + 0x130) = (float)param_1;
  }
  return;
}



/* Entry: 10906cbb4; end: 10906cbbb; -[SCImageProcessVideoPlaybackSessionImpl shouldLoop] */

undefined1 FUN_10906cbb4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7c);
}



/* Entry: 10906cbbc; end: 10906cbe3; -[SCImageProcessVideoPlaybackSessionImpl setShouldLoop:] */

void FUN_10906cbbc(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(byte *)(param_1 + 0x7c) != param_3) &&
      (*(char *)(param_1 + 0x7c) = (char)param_3, param_3 != 0)) &&
     (*(char *)(param_1 + 0x7e) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c1573b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_seekVideoAndAudioToBeginning_112633708);
    return;
  }
  return;
}



/* Entry: 10906cbe4; end: 10906cbeb; -[SCImageProcessVideoPlaybackSessionImpl isReversePlaying] */

undefined1 FUN_10906cbe4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13d);
}



/* Entry: 10906cbec; end: 10906cc23; -[SCImageProcessVideoPlaybackSessionImpl setAudioProcessorMix:] */

void FUN_10906cbec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcdab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyAudioProcessorMix_112551048);
  return;
}



/* Entry: 10906cc24; end: 10906ce23; -[SCImageProcessVideoPlaybackSessionImpl setAudioOverrideAsset:] */

void FUN_10906cc24(long param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0xe8);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  if (puVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar5);
      uVar4 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      _objc_release(uVar4);
      func_0x00010c130d60(*(undefined8 *)(param_1 + 0x120),param_2,0);
      func_0x00010bea1820(*(undefined4 *)(param_1 + 0x130),param_1);
      func_0x00010bdcdaa0(param_1);
      goto LAB_10906cd08;
    }
    puVar3 = puVar5;
    func_0x00010c071ae0(puVar5,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar5);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10906cd08;
    cVar1 = *(char *)(param_1 + 0x13c);
    if (cVar1 == '\x01') {
      if (*(long *)(param_1 + 0x178) != 0) {
        _objc_retain(param_3);
        puVar5 = *(undefined **)(param_1 + 0x1c8);
        *(undefined **)(param_1 + 0x1c8) = param_3;
        goto LAB_10906ccc0;
      }
      func_0x00010c0f6000(param_1,param_2,1);
    }
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = param_3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x120) == 0) {
      puVar5 = PTR_PTR_1126c9e68;
      _objc_alloc();
      func_0x00010c037060();
      uVar4 = *(undefined8 *)(param_1 + 0x120);
      *(undefined **)(param_1 + 0x120) = puVar5;
      _objc_release(uVar4);
      func_0x00010c161660(*(undefined8 *)(param_1 + 0x120),param_2,2);
      func_0x00010c1675a0(*(undefined8 *)(param_1 + 0x120),param_2,0);
    }
    puVar5 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c4c0();
    func_0x00010c130d60(*(undefined8 *)(param_1 + 0x120),param_2,puVar5);
    func_0x00010bea1820(*(undefined4 *)(param_1 + 0x130),param_1);
    func_0x00010bdcdaa0(param_1);
    if (cVar1 != '\0') {
      uVar2 = *(undefined1 *)(param_1 + 0x1e9);
      *(undefined1 *)(param_1 + 0x1e9) = 1;
      if (*(long *)(param_1 + 0xf8) == 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_48);
      }
      func_0x00010bec1620(param_1,param_2,1,&uStack_48);
      *(undefined1 *)(param_1 + 0x1e9) = uVar2;
    }
  }
LAB_10906ccc0:
  _objc_release(puVar5);
LAB_10906cd08:
  _objc_release(param_3);
  return;
}



/* Entry: 10906ce24; end: 10906ce27; -[SCImageProcessVideoPlaybackSessionImpl setMixedAudioAssetTrack:forKey:] */

void FUN_10906ce24(void)

{
  return;
}



/* Entry: 10906ce28; end: 10906ce2b; -[SCImageProcessVideoPlaybackSessionImpl updateVolumeProportion:forAudioTrackWithKey:] */

void FUN_10906ce28(void)

{
  return;
}



/* Entry: 10906ce2c; end: 10906ce53; -[SCImageProcessVideoPlaybackSessionImpl audioOverrideAsset] */

void FUN_10906ce2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10906ce54; end: 10906cfab; -[SCImageProcessVideoPlaybackSessionImpl setBackgroundAnimationCommand:] */

void FUN_10906ce54(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar5 = *(ulong *)(param_2 + 0x20);
  _objc_retain(uVar5);
  _objc_retain(param_4);
  if (uVar5 == param_4) {
    _objc_release(param_4);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_10906cf70;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(param_2 + 8);
      puVar2 = PTR_PTR_1126d13a0;
      _objc_alloc(PTR_PTR_1126d13a0);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfffdc0(puVar2);
      func_0x00010befafa0(uVar6);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_retain(param_4);
    uVar5 = *(ulong *)(param_2 + 0x20);
    *(ulong *)(param_2 + 0x20) = param_4;
  }
  _objc_release(uVar5);
LAB_10906cf70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if (*(float *)(param_4 + 0x78) != param_1) {
    *(undefined8 *)(param_4 + 0x68) = 0;
    *(float *)(param_4 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c28aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_4 + 0xb8),PTR_s_updateSwipeFilterOffset__1126804b0);
    return;
  }
  return;
}



/* Entry: 10906cfac; end: 10906cfcb; -[SCImageProcessVideoPlaybackSessionImpl setSwipeOffset:] */

void FUN_10906cfac(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x78) != param_1) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(float *)(param_2 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c28aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0xb8),PTR_s_updateSwipeFilterOffset__1126804b0);
    return;
  }
  return;
}



/* Entry: 10906cfcc; end: 10906d03b; -[SCImageProcessVideoPlaybackSessionImpl setPlayerRate:] */

void FUN_10906cfcc(double param_1,long param_2)

{
  if ((param_1 != *(double *)(param_2 + 0x148)) || (param_1 != *(double *)(param_2 + 0x140))) {
    *(double *)(param_2 + 0x140) = param_1;
    if (*(char *)(param_2 + 0x150) == '\x01') {
      *(undefined1 *)(param_2 + 0x151) = 1;
    }
    else if (*(char *)(param_2 + 0x13c) == '\x01') {
      func_0x00010bedd540(param_2);
      *(double *)(param_2 + 0x148) = param_1;
    }
  }
  return;
}



/* Entry: 10906d03c; end: 10906d043; -[SCImageProcessVideoPlaybackSessionImpl addListener:] */

void FUN_10906d03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10906d044; end: 10906d04b; -[SCImageProcessVideoPlaybackSessionImpl removeListener:] */

void FUN_10906d044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10906d04c; end: 10906d24b; -[SCImageProcessVideoPlaybackSessionImpl startRunning] */

void FUN_10906d04c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = *(undefined8 **)(param_1 + 0x210);
  uStack_90 = *(undefined8 *)(param_1 + 0x208);
  uStack_80 = *(undefined8 *)(param_1 + 0x218);
  func_0x00010bec1620(param_1,param_2,1,&uStack_90);
  if ((*(uint *)(param_1 + 0x22c) & 0x1d) == 1) {
    puStack_88 = *(undefined8 **)(param_1 + 0x228);
    uStack_90 = *(undefined8 *)(param_1 + 0x220);
    uStack_80 = *(undefined8 *)(param_1 + 0x230);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10906d24c;
    uStack_70 = 0x10906d25c;
    uStack_68 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10906d264;
    puStack_a8 = &UNK_110850308;
    _objc_copyWeak(auStack_98,auStack_58);
    puStack_a0 = &uStack_90;
    func_0x00010bef7320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_88[5];
    puStack_88[5] = uVar5;
    _objc_release(uVar4);
    _objc_release(puVar2);
    param_2 = 8;
    __Block_object_dispose(&uStack_90);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
    unaff_x23 = &puStack_c0;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  func_0x00010c29abc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x28));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10906d24c; end: 10906d263;  */

void FUN_10906d24c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10906d264; end: 10906d2bb;  */

void FUN_10906d264(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x7c) == '\x01') {
      func_0x00010c2504a0(lVar1);
    }
    func_0x00010c12eb40(*(undefined8 *)(lVar1 + 0x108),param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10906d2bc; end: 10906d307; -[SCImageProcessVideoPlaybackSessionImpl pauseRunningAndContinueRendering:] */

void FUN_10906d2bc(long param_1,undefined8 param_2,ulong param_3)

{
  *(undefined1 *)(param_1 + 0x13c) = 0;
  func_0x00010be70be0();
  func_0x00010c29ab80(*(undefined8 *)(param_1 + 0x80));
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 10906d308; end: 10906d37b; -[SCImageProcessVideoPlaybackSessionImpl resumeRunning] */

void FUN_10906d308(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*(char *)(param_2 + 0x13c) != '\x01') ||
     (func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x108)), param_1 == 0.0)) {
    uStack_38 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_40 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_30 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010bec1620(param_2,param_3,0,&uStack_40);
    func_0x00010c29aba0(*(undefined8 *)(param_2 + 0x80),param_3,param_2);
  }
  return;
}



/* Entry: 10906d37c; end: 10906d4cf; -[SCImageProcessVideoPlaybackSessionImpl stopRunning] */

void FUN_10906d37c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x13c) = 0;
  func_0x00010bddf0c0();
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x128));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puVar1 = *(undefined **)(param_1 + 0x1d8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c12cf80();
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    func_0x00010c16be60(*(undefined8 *)(param_1 + 0xf8));
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60();
    _objc_release(uVar2);
  }
  func_0x00010c12d760(*(undefined8 *)(param_1 + 0xf8));
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  _objc_release(uVar2);
  func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x108));
  func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x118));
  func_0x00010c1e7640(0,*(undefined8 *)(param_1 + 0x120));
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  _objc_release(uVar2);
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x100) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  func_0x00010bf3a2c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c29abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionDidStopRunni_112684520,
             param_1);
  return;
}



/* Entry: 10906d4d0; end: 10906d59f; -[SCImageProcessVideoPlaybackSessionImpl setReversePlaybackEnabled:reverseAudioPlayer:] */

void FUN_10906d4d0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (*(byte *)(param_1 + 0x13d) != param_3) {
    if (*(char *)(param_1 + 0x100) == '\x01') {
      *(undefined1 *)(param_1 + 0x13e) = 1;
    }
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = param_4;
    _objc_release(uVar1);
    func_0x00010c1675a0(*(undefined8 *)(param_1 + 0x118),param_2,0);
    func_0x00010c161660(*(undefined8 *)(param_1 + 0x118),param_2,2);
    *(char *)(param_1 + 0x13d) = (char)param_3;
    if (*(long *)(param_1 + 0x1f0) != 0) {
      func_0x00010bdcdaa0(param_1);
    }
    if (*(char *)(param_1 + 0x150) == '\x01') {
      *(undefined1 *)(param_1 + 0x152) = 1;
    }
    else if (*(char *)(param_1 + 0x13c) == '\x01') {
      func_0x00010bedd540(param_1);
      if (*(char *)(param_1 + 0x100) == '\x01') {
        func_0x00010c1573a0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10906d5a0; end: 10906d6cb; -[SCImageProcessVideoPlaybackSessionImpl setPlayerItemTimeScale:] */

/* WARNING: Possible PIC construction at 0x00010906d688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010906d68c) */
/* WARNING: Removing unreachable block (ram,0x00010c1573a0) */

void FUN_10906d5a0(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (param_1 != (double)*(float *)(param_2 + 0x134)) {
    dVar3 = (param_1 * (double)*(float *)(param_2 + 0x154)) / (double)*(float *)(param_2 + 0x134);
    *(float *)(param_2 + 0x134) = (float)param_1;
    if (*(char *)(param_2 + 0x150) == '\x01') {
      *(undefined1 *)(param_2 + 0x158) = 1;
      *(float *)(param_2 + 0x154) = (float)dVar3;
    }
    else if (*(long *)(param_2 + 0xf8) != 0) {
      func_0x00010c1e7640(0,*(undefined8 *)(param_2 + 0x108));
      func_0x00010c1e7640(0,*(undefined8 *)(param_2 + 0x118));
      func_0x00010c1e7640(0,*(undefined8 *)(param_2 + 0x120));
      func_0x00010bed1b40(param_2);
      func_0x00010be91fa0((float)dVar3,param_2);
      lVar1 = param_2;
      func_0x00010be1a8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0xf8);
      *(long *)(param_2 + 0xf8) = lVar1;
      _objc_release(uVar2);
      func_0x00010be8afa0(param_2);
      func_0x00010be66940(param_2);
      if (*(char *)(param_2 + 0x100) == '\x01') {
        func_0x00010c130d60(*(undefined8 *)(param_2 + 0x108));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bedd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__updatePlayerRateWithReversePlay_112594ef8);
      return;
    }
  }
  return;
}



/* Entry: 10906d6cc; end: 10906d6e7; -[SCImageProcessVideoPlaybackSessionImpl setViewportTransform:] */

void FUN_10906d6cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0xb0) = param_3[5];
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 10906d6e8; end: 10906d757; -[SCImageProcessVideoPlaybackSessionImpl seekVideoAndAudioToBeginning] */

void FUN_10906d6e8(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x210);
  uStack_50 = *(undefined8 *)(param_1 + 0x208);
  uStack_40 = *(undefined8 *)(param_1 + 0x218);
  _CMTimeMultiplyByFloat64(&uStack_38,(double)(1.0 / *(float *)(param_1 + 0x134)),&uStack_50);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  func_0x00010be9d3c0(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 10906d758; end: 10906d82f; -[SCImageProcessVideoPlaybackSessionImpl seekToTime:] */

void FUN_10906d758(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  _CMTimeMultiplyByFloat64(&uStack_40,(double)(1.0 / *(float *)(param_1 + 0x134)),&uStack_60);
  param_3[1] = uStack_38;
  *param_3 = uStack_40;
  param_3[2] = uStack_30;
  if (*(char *)(param_1 + 0x13d) == '\x01') {
    if (*(long *)(param_1 + 0xf8) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_60);
    }
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    _CMTimeSubtract(&uStack_40,&uStack_60,&uStack_80);
    param_3[1] = uStack_38;
    *param_3 = uStack_40;
    param_3[2] = uStack_30;
  }
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010be9d3c0(param_1);
  return;
}



/* Entry: 10906d830; end: 10906db8f; -[SCImageProcessVideoPlaybackSessionImpl _seekVideoAndAudioToTime:] */

void FUN_10906d830(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = param_1;
  func_0x00010be42b00();
  lVar3 = *(long *)(param_1 + 0x108);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    return;
  }
  uVar1 = (uint)lVar5 ^ 1;
  bVar2 = *(byte *)(param_1 + 0x13e);
  _objc_release();
  if (((uVar1 & 1) == 0) && ((bVar2 & 1) == 0)) {
    return;
  }
  if ((*(byte *)((long)param_3 + 0xc) & 1) == 0) {
    return;
  }
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10906db90;
  puStack_68 = &UNK_110849200;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar4 = &puStack_80;
  _objc_retainBlock(ppuVar4);
  if (*(char *)(param_1 + 0x13d) == '\x01') {
    if (*(long *)(param_1 + 0xf8) == 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_c0);
    }
    uStack_d8 = param_3[1];
    uStack_e0 = *param_3;
    uStack_d0 = param_3[2];
    _CMTimeSubtract(&uStack_a0,&uStack_c0,&uStack_e0);
    if ((uStack_98 & 0x100000000) == 0) goto LAB_10906db3c;
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
    uStack_b8 = uStack_98;
    uStack_c0 = uStack_a0;
    uStack_b0 = uStack_90;
    uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_e0 = uVar7;
    uStack_d8 = uVar8;
    uStack_d0 = uVar6;
    func_0x00010c157300(*(undefined8 *)(param_1 + 0x108));
    uStack_b8 = param_3[1];
    uStack_c0 = *param_3;
    uStack_b0 = param_3[2];
    func_0x00010c157260(*(undefined8 *)(param_1 + 0x118));
    lVar5 = *(long *)(param_1 + 0x120);
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
      uStack_b8 = param_3[1];
      uStack_c0 = *param_3;
      uStack_b0 = param_3[2];
      uStack_e0 = uVar7;
      uStack_d8 = uVar8;
      uStack_d0 = uVar6;
      func_0x00010c157300(*(undefined8 *)(param_1 + 0x120));
    }
  }
  else {
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
    if (*(char *)(param_1 + 0x1e9) == '\x01') {
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_90 = param_3[2];
      uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_e0 = uVar7;
      uStack_d8 = uVar8;
      uStack_d0 = uVar6;
      uStack_c0 = uVar7;
      uStack_b8 = uVar8;
      uStack_b0 = uVar6;
      func_0x00010c157300();
      lVar5 = *(long *)(param_1 + 0x120);
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
        uStack_98 = param_3[1];
        uStack_a0 = *param_3;
        uStack_90 = param_3[2];
        uStack_e0 = uVar7;
        uStack_d8 = uVar8;
        uStack_d0 = uVar6;
        uStack_c0 = uVar7;
        uStack_b8 = uVar8;
        uStack_b0 = uVar6;
        func_0x00010c157300(*(undefined8 *)(param_1 + 0x120));
      }
    }
    else {
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_90 = param_3[2];
      func_0x00010c157280(*(undefined8 *)(param_1 + 0x108));
      lVar5 = *(long *)(param_1 + 0x120);
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
        uStack_98 = param_3[1];
        uStack_a0 = *param_3;
        uStack_90 = param_3[2];
        func_0x00010c157280(*(undefined8 *)(param_1 + 0x120));
      }
    }
  }
  *(char *)(param_1 + 0x13e) = (char)uVar1;
LAB_10906db3c:
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10906db90; end: 10906dbd3;  */

void FUN_10906db90(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x178) + -1;
    *(long *)(param_1 + 0x178) = lVar1;
    if (lVar1 == 0) {
      func_0x00010bdfe3a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10906dbd4; end: 10906dc13; -[SCImageProcessVideoPlaybackSessionImpl rewindToBeginningWithCompletion:] */

void FUN_10906dbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1ea) = 1;
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c13d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeRunning_11262d010);
  return;
}



/* Entry: 10906dc14; end: 10906dc53; -[SCImageProcessVideoPlaybackSessionImpl fastFowardToEndWithCompletion:] */

void FUN_10906dc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1eb) = 1;
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c13d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeRunning_11262d010);
  return;
}



/* Entry: 10906dc54; end: 10906dca3; -[SCImageProcessVideoPlaybackSessionImpl finishRewindingToBeginning] */

void FUN_10906dc54(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1ea) == '\x01') {
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    if (*(long *)(param_1 + 0xd8) != 0) {
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x10))();
      uVar1 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10906dca4; end: 10906dcf3; -[SCImageProcessVideoPlaybackSessionImpl finishFastForwardingToEnd] */

void FUN_10906dca4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1eb) == '\x01') {
    *(undefined1 *)(param_1 + 0x1eb) = 0;
    if (*(long *)(param_1 + 0xe0) != 0) {
      (**(code **)(*(long *)(param_1 + 0xe0) + 0x10))();
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10906dcf4; end: 10906ddcf; -[SCImageProcessVideoPlaybackSessionImpl stopPlayingAndSeekSmoothlyToTime:] */

void FUN_10906dcf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0f6000(param_1,param_2,1);
  if (*(char *)(param_1 + 0x13d) == '\x01') {
    if (*(long *)(param_1 + 0xf8) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_60);
    }
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    _CMTimeSubtract(&uStack_40,&uStack_60,&uStack_80);
  }
  else {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_30 = param_3[2];
  }
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_50 = uStack_30;
  uStack_78 = *(undefined8 *)(param_1 + 0x188);
  uStack_80 = *(undefined8 *)(param_1 + 0x180);
  uStack_70 = *(undefined8 *)(param_1 + 400);
  puVar1 = &uStack_60;
  _CMTimeCompare(puVar1,&uStack_80);
  if ((int)puVar1 != 0) {
    *(undefined8 *)(param_1 + 0x188) = uStack_38;
    *(undefined8 *)(param_1 + 0x180) = uStack_40;
    *(undefined8 *)(param_1 + 400) = uStack_30;
    if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
      func_0x00010bebc800(param_1);
    }
  }
  return;
}



/* Entry: 10906ddd0; end: 10906df57; -[SCImageProcessVideoPlaybackSessionImpl _smoothSeekToTime] */

void FUN_10906ddd0(long param_1,undefined8 param_2)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x198) = 1;
  uStack_50 = *(undefined8 *)(param_1 + 0x188);
  uStack_58 = *(undefined8 *)(param_1 + 0x180);
  uStack_48 = *(undefined8 *)(param_1 + 400);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10906ded0;
  puStack_68 = &UNK_110a55a38;
  uStack_98 = *(undefined8 *)(param_1 + 0x188);
  uStack_a0 = *(undefined8 *)(param_1 + 0x180);
  uStack_90 = *(undefined8 *)(param_1 + 400);
  uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_c0 = uStack_e0;
  uStack_b8 = uStack_d8;
  uStack_b0 = uStack_d0;
  lStack_60 = param_1;
  uStack_40 = uStack_58;
  uStack_38 = uStack_50;
  uStack_30 = uStack_48;
  func_0x00010c157300(*(undefined8 *)(param_1 + 0x108),param_2,&uStack_a0,&uStack_c0,&uStack_e0,
                      &puStack_80);
  if (*(char *)(param_1 + 0x13d) == '\x01') {
    uStack_98 = uStack_38;
    uStack_a0 = uStack_40;
    uStack_90 = uStack_30;
    func_0x00010c157260(*(undefined8 *)(param_1 + 0x118),param_2,&uStack_a0);
  }
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  uStack_90 = uStack_30;
  func_0x00010c157260(*(undefined8 *)(param_1 + 0x120),param_2,&uStack_a0);
  return;
}



/* Entry: 10906df58; end: 10906df73; -[SCImageProcessVideoPlaybackSessionImpl currentItemStartTimeOffset] */

void FUN_10906df58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 10906df74; end: 10906df87; -[SCImageProcessVideoPlaybackSessionImpl playbackTimeForFrameTime:] */

void FUN_10906df74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 10906df88; end: 10906dfa7; -[SCImageProcessVideoPlaybackSessionImpl _isPlayerPaused] */

bool FUN_10906df88(float param_1,long param_2)

{
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x108));
  return param_1 == 0.0;
}



/* Entry: 10906dfa8; end: 10906dfdf; -[SCImageProcessVideoPlaybackSessionImpl _cleanUpDisplayLink] */

void FUN_10906dfa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10906dfe0; end: 10906e017; -[SCImageProcessVideoPlaybackSessionImpl _applicationWillResignActive:] */

void FUN_10906dfe0(long param_1,undefined8 param_2)

{
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,1);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be70bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pause_112579c98);
  return;
}



/* Entry: 10906e018; end: 10906e07f; -[SCImageProcessVideoPlaybackSessionImpl _applicationDidBecomeActive:] */

void FUN_10906e018(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,0);
  *(undefined1 *)(param_1 + 0x7d) = 0;
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    uStack_30 = *(undefined8 *)(param_1 + 0x218);
    uStack_38 = *(undefined8 *)(param_1 + 0x210);
    uStack_40 = *(undefined8 *)(param_1 + 0x208);
    func_0x00010be74900(param_1,param_2,0,&uStack_40);
  }
  return;
}



/* Entry: 10906e080; end: 10906e14f; -[SCImageProcessVideoPlaybackSessionImpl _playerItemDidPlayToEndTime:] */

void FUN_10906e080(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (param_3 == lVar1) {
    if (*(char *)(param_1 + 0x7c) == '\x01') {
      if ((*(byte *)(param_1 + 0x22c) & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        if (*(long *)(param_1 + 0x108) == 0) {
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
        }
        else {
          func_0x00010bf60480(&uStack_48);
        }
        func_0x00010c29ac80(uVar2,param_2,param_1,&uStack_48);
        *(undefined1 *)(param_1 + 0x13e) = 1;
        func_0x00010c1573a0(param_1);
        func_0x00010bedd540(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x7e) = 1;
    }
  }
  return;
}



/* Entry: 10906e150; end: 10906e157; -[SCImageProcessVideoPlaybackSessionImpl setShouldAnimateBackgroundCommand:] */

void FUN_10906e150(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x15a) = param_3;
  return;
}



/* Entry: 10906e158; end: 10906e1bb; -[SCImageProcessVideoPlaybackSessionImpl _tryRemakeOutput] */

void FUN_10906e158(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) + 0.1;
  func_0x00010c12d760(*(undefined8 *)(param_1 + 0xf8),param_2,*(undefined8 *)(param_1 + 0xf0));
  func_0x00010be8afa0(param_1);
  lVar1 = *(long *)(param_1 + 0xf8);
  func_0x00010c252d60();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010befa4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xf8),PTR_s_addOutput__11259c2d8,
               *(undefined8 *)(param_1 + 0xf0));
    return;
  }
  return;
}



/* Entry: 10906e1bc; end: 10906e84f; -[SCImageProcessVideoPlaybackSessionImpl _displayLinkCallback:] */

void FUN_10906e1bc(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  long lStack_188;
  double dStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  func_0x00010c26a180(param_4);
  dVar13 = *(double *)(param_2 + 0x1e0);
  if ((0.0 < dVar13) && (dVar13 = param_1 - dVar13, 0.05 < dVar13)) {
    func_0x00010c0b3080(dVar13,param_1,*(undefined8 *)(param_2 + 0x1c0));
  }
  fVar12 = SUB84(dVar13,0);
  *(double *)(param_2 + 0x1e0) = param_1;
  lVar1 = *(long *)(param_2 + 0xf8);
  func_0x00010c252d60();
  if ((lVar1 != 1) ||
     (((*(char *)(param_2 + 0x1d1) == '\x01' && ((*(byte *)(param_2 + 0x1d0) & 1) == 0)) &&
      (*(char *)(param_2 + 0x13c) != '\x01')))) goto LAB_10906e79c;
  if (0 < *(long *)(param_2 + 0x68)) {
    *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + -1;
    goto LAB_10906e79c;
  }
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x108));
  dVar13 = (double)(ulong)(uint)ABS(fVar12);
  if (ABS(fVar12) <= 1.0) {
    lVar1 = *(long *)(param_2 + 0x70) + -1;
  }
  else {
    lVar1 = 0;
  }
  *(long *)(param_2 + 0x68) = lVar1;
  func_0x00010c26a180(param_4);
  if (*(double *)(param_2 + 0x1a0) == 0.0) {
    *(double *)(param_2 + 0x1a0) = dVar13;
  }
  lVar1 = *(long *)(param_2 + 0x38);
  _dispatch_semaphore_wait(lVar1,0);
  if (lVar1 != 0) goto LAB_10906e79c;
  if (*(long *)(param_2 + 0xf0) == 0) {
    dStack_90 = 0.0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c084bc0(&dStack_90,dVar13);
  }
  uStack_178 = uStack_88;
  dStack_180 = dStack_90;
  uStack_170 = uStack_80;
  dVar14 = dStack_90;
  _CMTimeGetSeconds(&dStack_180);
  if (dVar14 < 0.0) {
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    dStack_90 = *(double *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  uVar2 = *(ulong *)(param_2 + 0xf0);
  uStack_178 = uStack_88;
  dStack_180 = dStack_90;
  uStack_170 = uStack_80;
  dVar14 = dStack_90;
  func_0x00010bfd96e0();
  fVar12 = SUB84(dVar14,0);
  if ((uVar2 & 1) != 0) goto LAB_10906e340;
  if ((*(byte *)(param_2 + 0x1a8) & 1) == 0) {
    if (*(double *)(param_2 + 0x40) < dVar13 - *(double *)(param_2 + 0x1a0)) {
      *(undefined1 *)(param_2 + 0x1e9) = 1;
      func_0x00010bed0420(param_2);
    }
  }
  else {
    func_0x00010c11fdc0(*(undefined8 *)(param_2 + 0x108));
    if (fVar12 == 0.0) {
      if ((*(char *)(param_2 + 0x13c) == '\x01') && ((*(byte *)(param_2 + 0x7d) & 1) == 0)) {
        func_0x00010bedd540(param_2);
        goto LAB_10906e340;
      }
    }
    else {
      lVar1 = *(long *)(param_2 + 0x1b0);
      *(long *)(param_2 + 0x1b0) = lVar1 + 1;
      if (0x1d < lVar1) {
        *(undefined1 *)(param_2 + 0x1e9) = 1;
        func_0x00010bed0420(param_2);
      }
      if ((*(char *)(param_2 + 0x7c) == '\x01') && (0x5a < *(long *)(param_2 + 0x1b0))) {
        *(undefined1 *)(param_2 + 0x13e) = 1;
        func_0x00010c1573a0(param_2);
LAB_10906e340:
        *(undefined8 *)(param_2 + 0x1b0) = 0;
      }
    }
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    dStack_b0 = *(double *)PTR__kCMTimeInvalid_110348648;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    lVar1 = *(long *)(param_2 + 0xf0);
    uStack_178 = uStack_88;
    dStack_180 = dStack_90;
    uStack_170 = uStack_80;
    func_0x00010bf52140();
    if (lVar1 != 0) {
      *(undefined8 *)(param_2 + 0x1b8) = 0;
      lStack_188 = lVar1;
LAB_10906e38c:
      uStack_c8 = uStack_a8;
      dStack_d0 = dStack_b0;
      uStack_c0 = uStack_a0;
      uStack_e8 = uStack_a8;
      dStack_f0 = dStack_b0;
      uStack_e0 = uStack_a0;
      _CMTimeMultiplyByFloat64(&dStack_180,(double)*(float *)(param_2 + 0x134),&dStack_f0);
      uStack_a8 = uStack_178;
      dStack_b0 = dStack_180;
      uStack_a0 = uStack_170;
      if (lVar1 != 0) {
        _CVPixelBufferRelease(*(undefined8 *)(param_2 + 0x48));
        lVar1 = lStack_188;
        _CVPixelBufferRetain();
        *(long *)(param_2 + 0x48) = lVar1;
        *(undefined8 *)(param_2 + 0x58) = uStack_c8;
        *(double *)(param_2 + 0x50) = dStack_d0;
        *(undefined8 *)(param_2 + 0x60) = uStack_c0;
      }
      if ((*(byte *)(param_2 + 0x1a8) & 1) == 0) {
        *(undefined1 *)(param_2 + 0x1a8) = 1;
        *(undefined8 *)(param_2 + 0x40) = 0x3fc999999999999a;
      }
      if ((*(long *)(param_2 + 0x178) == 0) && ((*(byte *)(param_2 + 0x198) & 1) == 0)) {
        uStack_178 = uStack_a8;
        dStack_180 = dStack_b0;
        uStack_170 = uStack_a0;
        func_0x00010c29ab60(*(undefined8 *)(param_2 + 0x80));
        uStack_100 = 0;
      }
      else {
        uStack_100 = 1;
      }
      _objc_initWeak(auStack_f8,param_2);
      uVar9 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar9);
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_10906e850;
      puStack_130 = &UNK_110ac1cd0;
      _objc_copyWeak(auStack_120,auStack_f8);
      uStack_110 = uStack_a8;
      dStack_118 = dStack_b0;
      uStack_108 = uStack_a0;
      _objc_retain(uVar9);
      ppuVar3 = &puStack_148;
      uStack_128 = uVar9;
      _objc_retainBlock();
      lVar1 = *(long *)(param_2 + 0xb8);
      uStack_178 = uStack_a8;
      dStack_180 = dStack_b0;
      uStack_170 = uStack_a0;
      dVar13 = dStack_b0;
      func_0x00010bfc3d80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(ulong *)(param_2 + 0x20);
      _objc_retain(uVar8);
      uVar4 = uVar8;
      func_0x000107c318f8(uVar8,PTR_DAT_1126a5b18);
      uVar2 = uVar8;
      if ((int)uVar4 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar8);
      uVar4 = uVar2;
      func_0x00010c230440();
      if ((int)uVar4 != 0) {
        func_0x00010c1fff80(param_2);
        func_0x00010bf9f940(uVar2);
        if (1.0 <= dVar13) {
          uVar4 = param_2;
          func_0x00010c1fff80();
        }
        else {
          func_0x00010bf9f940(uVar2);
          uVar4 = uVar2;
          func_0x00010c199d80(dVar13 + 0.10000000149011612);
        }
      }
      _objc_autoreleasePoolPush();
      uVar7 = *(undefined8 *)(param_2 + 200);
      if (lVar1 == 0) {
        _objc_retain(0);
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar1 + 8);
        _objc_retain(uVar10);
        uVar11 = *(undefined8 *)(lVar1 + 0x10);
      }
      _objc_retain(uVar11);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(0,0,0,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_2;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = uStack_a8;
      dStack_f0 = dStack_b0;
      uStack_e0 = uStack_a0;
      uStack_178 = *(undefined8 *)(param_2 + 0x90);
      dStack_180 = *(double *)(param_2 + 0x88);
      uStack_168 = *(undefined8 *)(param_2 + 0xa0);
      uStack_170 = *(undefined8 *)(param_2 + 0x98);
      uStack_158 = *(undefined8 *)(param_2 + 0xb0);
      uStack_160 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c29ab00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = uVar7;
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar5);
      _objc_release(uVar11);
      _objc_release(uVar10);
      func_0x00010befafa0(*(undefined8 *)(param_2 + 8));
      _CVPixelBufferRelease(lStack_188);
      _objc_autoreleasePoolPop(uVar4);
      _objc_release(uVar2);
      _objc_release(lVar1);
      _objc_release(ppuVar3);
      _objc_release(uStack_128);
      _objc_destroyWeak(auStack_120);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_f8);
      goto LAB_10906e79c;
    }
    uVar2 = param_2;
    func_0x00010be42b00();
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(param_2 + 0x1b8);
      *(long *)(param_2 + 0x1b8) = lVar1 + 1;
      if (0x1c < lVar1) {
        *(undefined8 *)(param_2 + 0x1b8) = 0;
        func_0x00010c0b3020(*(undefined8 *)(param_2 + 0x1c0));
      }
    }
    else {
      lStack_188 = *(long *)(param_2 + 0x48);
      _CVPixelBufferRetain();
      uStack_a8 = *(undefined8 *)(param_2 + 0x58);
      dStack_b0 = *(double *)(param_2 + 0x50);
      uStack_a0 = *(undefined8 *)(param_2 + 0x60);
      if (lStack_188 != 0) goto LAB_10906e38c;
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x38));
LAB_10906e79c:
  _objc_release(param_4);
  return;
}



/* Entry: 10906e850; end: 10906e91b;  */

void FUN_10906e850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar1 != 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10906e91c;
    puStack_58 = &UNK_1108e54a8;
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10906e91c; end: 10906e977;  */

void FUN_10906e91c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c29ab40(*(undefined8 *)(lVar1 + 0x80),param_2,lVar1,&uStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10906e978; end: 10906ea3b; -[SCImageProcessVideoPlaybackSessionImpl _playerItemBufferDidBecomeEmpty:] */

void FUN_10906e978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0 || (int)uVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemBu_112684528,
             param_1);
  return;
}



/* Entry: 10906ea3c; end: 10906eaff; -[SCImageProcessVideoPlaybackSessionImpl _playerItemLikelyToKeepUp:] */

void FUN_10906ea3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0 || (int)uVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemLi_112684538,
             param_1);
  return;
}



/* Entry: 10906eb00; end: 10906ebe7; -[SCImageProcessVideoPlaybackSessionImpl _playerItemStatusDidChange:] */

void FUN_10906eb00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_1 + 0x1f8);
  if (dVar4 == 0.0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    if (lVar2 == 0 && lVar3 == 1) {
      _CACurrentMediaTime();
      *(double *)(param_1 + 0x1f8) = dVar4 - *(double *)(param_1 + 0x200);
    }
    else if (lVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c29ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemSt_112684540,
                 param_1);
      return;
    }
  }
  return;
}



/* Entry: 10906ebe8; end: 10906ed17; -[SCImageProcessVideoPlaybackSessionImpl _rescaleAssetComposition:] */

void FUN_10906ebe8(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_2 + 0x160) == 0) {
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&lStack_58);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_b8 = uStack_50;
  lStack_c0 = lStack_58;
  uStack_b0 = uStack_48;
  uStack_a0 = uVar4;
  uStack_98 = uVar5;
  uStack_90 = uVar3;
  _CMTimeRangeMake(auStack_88,&uStack_a0,&lStack_c0);
  _CMTimeMake(&uStack_a0,(long)((float)lStack_58 / param_1),uStack_50 & 0xffffffff);
  func_0x00010c14e420(uVar1);
  lVar2 = *(long *)(param_2 + 0x170);
  if (lVar2 != 0) {
    uStack_b8 = uStack_50;
    lStack_c0 = lStack_58;
    uStack_b0 = uStack_48;
    uStack_a0 = uVar4;
    uStack_98 = uVar5;
    uStack_90 = uVar3;
    _CMTimeRangeMake(auStack_88,&uStack_a0,&lStack_c0);
    _CMTimeMake(&uStack_a0,(long)((float)lStack_58 / param_1),uStack_50 & 0xffffffff);
    func_0x00010c14e420(lVar2);
  }
  *(undefined4 *)(param_2 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_2 + 0x134);
  return;
}



/* Entry: 10906ed18; end: 10906f10f; -[SCImageProcessVideoPlaybackSessionImpl _setupAssetCompositionAndPlayerItem] */

/* WARNING: Removing unreachable block (ram,0x00010906ef84) */
/* WARNING: Removing unreachable block (ram,0x00010906ef94) */

undefined8 FUN_10906ed18(undefined8 param_1,double param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  func_0x00010bf45600();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x160);
  *(undefined **)(param_3 + 0x160) = puVar2;
  _objc_release(uVar6);
  lVar3 = *(long *)(param_3 + 0x110);
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uStack_68 = 0;
    func_0x00010c266c80(PTR_PTR_1126b0010);
    uVar6 = uStack_68;
    _objc_retain(uStack_68);
    func_0x00010c0b3020(*(undefined8 *)(param_3 + 0x1c0));
    _objc_release(uVar6);
  }
  lVar5 = *(long *)(param_3 + 0x110);
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR__kCMTimeZero_110348670;
  if ((lVar3 != 0) && ((*(byte *)(param_3 + 0x1e8) & 1) == 0)) {
    func_0x00010c277e40(lVar3);
    uVar6 = *(undefined8 *)(param_3 + 0x160);
    func_0x00010bef9f20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x170);
    *(undefined8 *)(param_3 + 0x170) = uVar6;
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_3 + 0x170);
    if (*(long *)(param_3 + 0x110) == 0) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_b0);
    }
    uVar10 = *(undefined8 *)(puVar2 + 8);
    uVar8 = *(undefined8 *)puVar2;
    uVar7 = *(undefined8 *)(puVar2 + 0x10);
    uStack_d0 = uVar8;
    uStack_c8 = uVar10;
    uStack_c0 = uVar7;
    _CMTimeRangeMake(auStack_98,&uStack_d0,&uStack_b0);
    uStack_b0 = uVar8;
    uStack_a8 = uVar10;
    uStack_a0 = uVar7;
    func_0x00010c067160(uVar6);
    _objc_retain(0);
  }
  uVar6 = *(undefined8 *)(param_3 + 0x160);
  func_0x00010bef9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x168);
  *(undefined8 *)(param_3 + 0x168) = uVar6;
  _objc_release(uVar7);
  uVar6 = *(undefined8 *)(param_3 + 0x168);
  if (*(long *)(param_3 + 0x110) == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_b0);
  }
  uVar10 = *(undefined8 *)(puVar2 + 8);
  uVar8 = *(undefined8 *)puVar2;
  uVar7 = *(undefined8 *)(puVar2 + 0x10);
  uStack_d0 = uVar8;
  uStack_c8 = uVar10;
  uStack_c0 = uVar7;
  _CMTimeRangeMake(auStack_98,&uStack_d0,&uStack_b0);
  uStack_b0 = uVar8;
  uStack_a8 = uVar10;
  uStack_a0 = uVar7;
  func_0x00010c067160(uVar6);
  _objc_retain(0);
  if (*(long *)(param_3 + 0x168) == 0) {
    func_0x00010c0b3020(*(undefined8 *)(param_3 + 0x1c0));
  }
  else {
    dVar9 = (double)(ulong)*(uint *)(param_3 + 0x134);
    func_0x00010be91fa0(param_3);
    uVar7 = 1;
    *(undefined1 *)(param_3 + 0x13e) = 1;
    lVar5 = param_3;
    func_0x00010be1a8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0xf8);
    *(long *)(param_3 + 0xf8) = lVar5;
    _objc_release(uVar6);
    iVar1 = (int)*(undefined8 *)(param_3 + 0x110);
    FUN_109126a88();
    if (iVar1 == 0) goto LAB_10906f0cc;
    uVar7 = *(undefined8 *)(param_3 + 0x160);
    func_0x00010c279200(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010c29b220(PTR_PTR_1126b0010);
    if ((dVar9 != *(double *)PTR__CGSizeZero_110347620) ||
       (param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8))) {
      uVar8 = *(undefined8 *)(param_3 + 0x110);
      uVar7 = uVar6;
      func_0x00010c277e40(uVar6);
      FUN_109127580(dVar9,param_2,uVar8,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2213a0(*(undefined8 *)(param_3 + 0xf8));
      *(undefined8 *)(param_3 + 0x18) = 5;
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar7 = 1;
      goto LAB_10906f0cc;
    }
    _objc_release(uVar6);
  }
  uVar7 = 0;
LAB_10906f0cc:
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(0);
  _objc_release(0);
  return uVar7;
}



/* Entry: 10906f110; end: 10906f17f; -[SCImageProcessVideoPlaybackSessionImpl _unobservePlayerItem] */

void FUN_10906f110(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar1);
    func_0x00010c281a80(*(undefined8 *)(param_1 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010c12d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xf8),PTR_s_removeOutput__112628ff8,
               *(undefined8 *)(param_1 + 0xf0));
    return;
  }
  return;
}



/* Entry: 10906f180; end: 10906f2fb; -[SCImageProcessVideoPlaybackSessionImpl _observePlayerItem] */

void FUN_10906f180(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_2 + 0xf8);
  func_0x00010c252d60();
  if (lVar2 != 2) {
    func_0x00010befa4c0(*(undefined8 *)(param_2 + 0xf8),param_3,*(undefined8 *)(param_2 + 0xf0));
    func_0x00010c16c4c0(*(undefined8 *)(param_2 + 0xf8),param_3,
                        *(undefined8 *)PTR__AVAudioTimePitchAlgorithmVarispeed_110347ed8);
  }
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x200) = param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,"playbackBufferEmpty");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar3,param_3,uVar4,puVar1,3,PTR_s__playerItemBufferDidBecomeEmpty__11253cf78)
  ;
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,"playbackLikelyToKeepUp");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar3,param_3,uVar4,puVar1,3,PTR_s__playerItemLikelyToKeepUp__11253cf80);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,"status");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0760(uVar4,param_3,uVar3,puVar1,3,PTR_s__playerItemStatusDidChange__1125393d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10906f2fc; end: 10906f38b; -[SCImageProcessVideoPlaybackSessionImpl _updatePlayerRateWithReversePlayback] */

/* WARNING: Possible PIC construction at 0x00010906f32c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010906f330) */
/* WARNING: Removing unreachable block (ram,0x00010906f36c) */
/* WARNING: Removing unreachable block (ram,0x00010906f340) */
/* WARNING: Removing unreachable block (ram,0x00010906f380) */

void FUN_10906f2fc(long param_1)

{
  func_0x00010bea1820(*(undefined4 *)(param_1 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010c0fe6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(*(double *)(param_1 + 0x140) * (double)*(float *)(param_1 + 0x134)),
             *(undefined8 *)(param_1 + 0x120),PTR_s_playImmediatelyAtRate__11261d3c8);
  return;
}



/* Entry: 10906f38c; end: 10906f40f; -[SCImageProcessVideoPlaybackSessionImpl _setAVPlayerVolumes:] */

/* WARNING: Possible PIC construction at 0x00010906f3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010906f3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010906f3ec) */
/* WARNING: Removing unreachable block (ram,0x00010906f3d0) */
/* WARNING: Removing unreachable block (ram,0x00010906f3f8) */

void FUN_10906f38c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x108);
    if (*(char *)(param_2 + 0x13d) == '\x01') {
      param_1 = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x108);
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar1,PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 10906f410; end: 10906f4d3; -[SCImageProcessVideoPlaybackSessionImpl _playShouldSeek:toTime:] */

void FUN_10906f410(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined1 *)(param_1 + 0x13e) = 1;
  func_0x00010bedd540();
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    func_0x00010c130d60(*(undefined8 *)(param_1 + 0x108));
    *(undefined1 *)(param_1 + 0x100) = 1;
    if (param_3 == 0) {
      return;
    }
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar1 = &uStack_50;
    _CMTimeCompare(puVar1,&uStack_70);
    if (((int)puVar1 == 0) && (*(char *)(param_1 + 0x13d) != '\x01')) {
      return;
    }
  }
  else if (param_3 == 0) {
    return;
  }
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  func_0x00010be9d3c0(param_1);
  return;
}



/* Entry: 10906f4d4; end: 10906f533; -[SCImageProcessVideoPlaybackSessionImpl _pause] */

/* WARNING: Possible PIC construction at 0x00010906f4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010906f510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010906f4fc) */
/* WARNING: Removing unreachable block (ram,0x00010906f514) */

void FUN_10906f4d4(long param_1)

{
  func_0x00010c2241a0(0,*(undefined8 *)(param_1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x108),PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 10906f534; end: 10906f5ab; -[SCImageProcessVideoPlaybackSessionImpl _startRunningShouldSeek:toTime:] */

void FUN_10906f534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined1 *)(param_1 + 0x13c) = 1;
  if (*(long *)(param_1 + 0xf0) == 0) {
    func_0x00010c10a180(param_1);
  }
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  func_0x00010be74900(param_1,param_2,param_3,&uStack_50);
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,0);
  return;
}


