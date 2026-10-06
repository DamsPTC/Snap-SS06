/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109085dd4; end: 109085ddb; -[SCImageProcessRequestGraphInput orientation] */

undefined8 FUN_109085dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109085ddc; end: 109085df3; -[SCImageProcessRequestGraphInput transform] */

void FUN_109085ddc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109085df4; end: 109085e0b; -[SCImageProcessRequestGraphInput setTransform:] */

void FUN_109085df4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  *(undefined8 *)(param_1 + 0x60) = param_3[5];
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 109085e0c; end: 109085e23; -[SCImageProcessRequestGraphInput cpuTransform] */

void FUN_109085e0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[5] = *(undefined8 *)(param_2 + 0x90);
  param_1[4] = uVar1;
  return;
}



/* Entry: 109085e24; end: 109085e3b; -[SCImageProcessRequestGraphInput setCpuTransform:] */

void FUN_109085e24(long param_1,undefined8 param_2,undefined8 *param_3)

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
  *(undefined8 *)(param_1 + 0x90) = param_3[5];
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



/* Entry: 109085e3c; end: 109085e43; -[SCImageProcessRequestGraphInput presentationTimeOffset] */

undefined8 FUN_109085e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109085e44; end: 109085e73; -[SCImageProcessRequestGraphInput setPresentationTimeOffset:] */

void FUN_109085e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109085e74; end: 109085ea3; -[SCImageProcessRequestGraphInput .cxx_destruct] */

void FUN_109085e74(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109085ea4; end: 109085f1b; -[SCImageProcessUnloadCommandsRequest initWithCommands:] */

undefined1 * FUN_109085ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
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



/* Entry: 109085f1c; end: 109085f23; -[SCImageProcessUnloadCommandsRequest context] */

undefined8 FUN_109085f1c(void)

{
  return 0;
}



/* Entry: 109085f24; end: 109085f2b; -[SCImageProcessUnloadCommandsRequest taskId] */

undefined8 FUN_109085f24(void)

{
  return 0;
}



/* Entry: 109085f2c; end: 109085f33; -[SCImageProcessUnloadCommandsRequest GPURequired] */

undefined8 FUN_109085f2c(void)

{
  return 1;
}



/* Entry: 109085f34; end: 109086063; -[SCImageProcessUnloadCommandsRequest runProgramsWithContext:GPUAvailable:error:] */

long FUN_109085f34(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    lVar2 = 1;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(param_1);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          uVar1 = uVar3;
          func_0x00010c076b80();
          if (((int)uVar1 != 0) && (func_0x00010c280b20(uVar3,param_2,param_5), (int)uVar3 == 0)) {
            lVar2 = 0;
            goto LAB_109086020;
          }
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    lVar2 = 1;
LAB_109086020:
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar2;
  }
  ___stack_chk_fail();
  return param_1;
}



/* Entry: 109086064; end: 109086067; -[SCImageProcessUnloadCommandsRequest cancel] */

void FUN_109086064(void)

{
  return;
}



/* Entry: 109086068; end: 109086073; -[SCImageProcessUnloadCommandsRequest .cxx_destruct] */

void FUN_109086068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109086074; end: 1090860eb; -[SCImageProcessUnloadRenderPassRequest initWithRenderPasses:] */

undefined1 * FUN_109086074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
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



/* Entry: 1090860ec; end: 1090860f3; -[SCImageProcessUnloadRenderPassRequest context] */

undefined8 FUN_1090860ec(void)

{
  return 0;
}



/* Entry: 1090860f4; end: 1090860fb; -[SCImageProcessUnloadRenderPassRequest taskId] */

undefined8 FUN_1090860f4(void)

{
  return 0;
}



/* Entry: 1090860fc; end: 109086103; -[SCImageProcessUnloadRenderPassRequest GPURequired] */

undefined8 FUN_1090860fc(void)

{
  return 1;
}



/* Entry: 109086104; end: 10908621b; -[SCImageProcessUnloadRenderPassRequest runProgramsWithContext:GPUAvailable:error:] */

long FUN_109086104(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    lVar2 = 1;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar2 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(param_1);
          }
          uVar1 = *(undefined8 *)(lStack_108 + lVar4 * 8);
          func_0x00010c280b20(uVar1,param_2,param_5);
          if ((int)uVar1 == 0) {
            lVar2 = 0;
            goto LAB_1090861dc;
          }
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
        lVar2 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    lVar2 = 1;
LAB_1090861dc:
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
  return param_1;
}



/* Entry: 10908621c; end: 10908621f; -[SCImageProcessUnloadRenderPassRequest cancel] */

void FUN_10908621c(void)

{
  return;
}



/* Entry: 109086220; end: 10908622b; -[SCImageProcessUnloadRenderPassRequest .cxx_destruct] */

void FUN_109086220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10908622c; end: 1090862b3; -[SCImageProcessWarmUpRequest initWithCommands:outputSize:] */

undefined1 *
FUN_10908622c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700348;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1090862b4; end: 1090862bb; -[SCImageProcessWarmUpRequest context] */

undefined8 FUN_1090862b4(void)

{
  return 0;
}



/* Entry: 1090862bc; end: 1090862c3; -[SCImageProcessWarmUpRequest taskId] */

undefined8 FUN_1090862bc(void)

{
  return 0;
}



/* Entry: 1090862c4; end: 1090862e3; -[SCImageProcessWarmUpRequest GPURequired] */

bool FUN_1090862c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1090862e4; end: 10908643f; -[SCImageProcessWarmUpRequest runProgramsWithContext:GPUAvailable:error:] */

undefined8
FUN_1090862e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x00010c1d7180(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_3);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 8);
    _objc_retain(lVar4);
    lVar1 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(lVar4);
          }
          uVar5 = *(ulong *)(lStack_118 + lVar7 * 8);
          uVar2 = uVar5;
          func_0x00010c076b80();
          if (((uVar2 & 1) == 0) &&
             (func_0x00010c09c860(uVar5,param_2,param_3,param_5), (int)uVar5 == 0)) {
            uVar3 = 0;
            goto LAB_1090863f4;
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    uVar3 = 1;
LAB_1090863f4:
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar3;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 109086440; end: 109086443; -[SCImageProcessWarmUpRequest cancel] */

void FUN_109086440(void)

{
  return;
}



/* Entry: 109086444; end: 10908644f; -[SCImageProcessWarmUpRequest .cxx_destruct] */

void FUN_109086444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109086450; end: 1090864a3; +[SCImageProcessGrayscaleFilterCPUCommand sharedCommand] */

void FUN_109086450(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137308c0 != -1) {
    func_0x000107c27d9c(0x1137308c0,&PTR___NSConcreteGlobalBlock_110ad7148);
  }
  uVar1 = uRam00000001137308c8;
  _objc_retain(uRam00000001137308c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090864a4; end: 1090864d3;  */

void FUN_1090864a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf450;
  _objc_alloc();
  func_0x00010be39360();
  uVar1 = puRam00000001137308c8;
  puRam00000001137308c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090864d4; end: 109086507; -[SCImageProcessGrayscaleFilterCPUCommand _init] */

void FUN_1090864d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 109086508; end: 109086713; -[SCImageProcessGrayscaleFilterCPUCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

undefined *
FUN_109086508(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  param_6 = param_6 & 0xffffffffffffffef;
  FUN_1090798f0(param_6,100,2,uVar1,param_7);
  _objc_release(uVar1);
  if ((param_6 & 1) != 0) {
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    uVar3 = param_4;
    _CVPixelBufferGetHeight();
    uVar4 = param_4;
    _CVPixelBufferGetBytesPerRow();
    uVar1 = param_5;
    _CVPixelBufferGetWidth(param_5);
    uVar7 = param_5;
    _CVPixelBufferGetHeight(param_5);
    uVar5 = param_5;
    _CVPixelBufferGetBytesPerRow();
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x000109079e0c(uVar2,uVar3,uVar4,uVar1,uVar7,100,2,param_1,param_7);
    _objc_release(param_1);
    if ((uVar6 & 1) != 0) {
      _CVPixelBufferLockBaseAddress(param_4,0);
      _CVPixelBufferLockBaseAddress(param_5,0);
      uVar6 = param_4;
      _CVPixelBufferGetBaseAddress();
      uVar1 = param_5;
      _CVPixelBufferGetBaseAddress();
      uVar7 = 0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc0000000;
      uStack_a8 = 0x109086720;
      puStack_a0 = &UNK_110ad7168;
      uStack_98 = uVar1;
      uStack_90 = uVar3 >> 2;
      uStack_88 = uVar5;
      uStack_80 = uVar6;
      uStack_78 = uVar4;
      uStack_70 = uVar3;
      uStack_68 = uVar2;
      _dispatch_apply(4,uVar7,&puStack_b8);
      _objc_release(uVar7);
      _CVPixelBufferUnlockBaseAddress(param_5,0);
      _CVPixelBufferUnlockBaseAddress(param_4,0);
      return PTR____NSDictionary0__struct_11034ab58;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 109086714; end: 1090867e3; -[SCImageProcessGrayscaleFilterCPUCommand commandName] */

undefined ** FUN_109086714(void)

{
  return &PTR____CFConstantStringClassReference_110f1f1b8;
}



/* Entry: 1090867e4; end: 109086837; +[SCImageProcessInstasnapFilterCPUCommand sharedCommand] */

void FUN_1090867e4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137308d0 != -1) {
    func_0x000107c27d9c(0x1137308d0,&PTR___NSConcreteGlobalBlock_110ad7188);
  }
  uVar1 = uRam00000001137308d8;
  _objc_retain(uRam00000001137308d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109086838; end: 109086867;  */

void FUN_109086838(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf460;
  _objc_alloc();
  func_0x00010be39360();
  uVar1 = puRam00000001137308d8;
  puRam00000001137308d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109086868; end: 10908689b; -[SCImageProcessInstasnapFilterCPUCommand _init] */

void FUN_109086868(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700358;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10908689c; end: 109086aa7; -[SCImageProcessInstasnapFilterCPUCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

undefined *
FUN_10908689c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  param_6 = param_6 & 0xffffffffffffffef;
  FUN_1090798f0(param_6,100,2,uVar1,param_7);
  _objc_release(uVar1);
  if ((param_6 & 1) != 0) {
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    uVar3 = param_4;
    _CVPixelBufferGetHeight();
    uVar4 = param_4;
    _CVPixelBufferGetBytesPerRow();
    uVar1 = param_5;
    _CVPixelBufferGetWidth(param_5);
    uVar7 = param_5;
    _CVPixelBufferGetHeight(param_5);
    uVar5 = param_5;
    _CVPixelBufferGetBytesPerRow();
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x000109079e0c(uVar2,uVar3,uVar4,uVar1,uVar7,100,2,param_1,param_7);
    _objc_release(param_1);
    if ((uVar6 & 1) != 0) {
      _CVPixelBufferLockBaseAddress(param_4,0);
      _CVPixelBufferLockBaseAddress(param_5,0);
      uVar6 = param_4;
      _CVPixelBufferGetBaseAddress();
      uVar1 = param_5;
      _CVPixelBufferGetBaseAddress();
      uVar7 = 0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc0000000;
      uStack_a8 = 0x109086ab4;
      puStack_a0 = &UNK_110ad7168;
      uStack_98 = uVar1;
      uStack_90 = uVar3 >> 2;
      uStack_88 = uVar5;
      uStack_80 = uVar6;
      uStack_78 = uVar4;
      uStack_70 = uVar3;
      uStack_68 = uVar2;
      _dispatch_apply(4,uVar7,&puStack_b8);
      _objc_release(uVar7);
      _CVPixelBufferUnlockBaseAddress(param_5,0);
      _CVPixelBufferUnlockBaseAddress(param_4,0);
      return PTR____NSDictionary0__struct_11034ab58;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 109086aa8; end: 109086b83; -[SCImageProcessInstasnapFilterCPUCommand commandName] */

undefined ** FUN_109086aa8(void)

{
  return &PTR____CFConstantStringClassReference_110f1f1d8;
}



/* Entry: 109086b84; end: 109086c07; -[SCImageProcessLookUpTableFilterCPUCommand initWithLookupTable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109086b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CGImageRetain();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112780fe4) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109086c08; end: 109086c9b; -[SCImageProcessLookUpTableFilterCPUCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109086c08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112780fe4) != 0) {
    _CGImageRelease();
  }
  if (*(long *)(param_1 + _DAT_112780fe8) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_112700360;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109086c9c; end: 109086d67; -[SCImageProcessLookUpTableFilterCPUCommand _setupLookupTableSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109086c9c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1;
  _CGColorSpaceCreateDeviceRGB();
  lVar5 = (long)_DAT_112780fe4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  _CGImageGetWidth();
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  _CGImageGetHeight();
  lVar4 = (long)(iVar1 * 4 * iVar2);
  _calloc(lVar4,1);
  *(long *)(param_1 + _DAT_112780fe8) = lVar4;
  _CGBitmapContextCreate();
  _CGContextDrawImage(0,0,(double)iVar1,(double)iVar2);
  _CGImageRelease(*(undefined8 *)(param_1 + lVar5));
  *(undefined8 *)(param_1 + lVar5) = 0;
  _CGColorSpaceRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbad78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextRelease_110347200)(lVar4);
  return;
}



/* Entry: 109086d68; end: 109086ff7; -[SCImageProcessLookUpTableFilterCPUCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109086d68(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112780fe8;
  if ((*(long *)(param_1 + lVar10) == 0) && (*(long *)(param_1 + _DAT_112780fe4) != 0)) {
    func_0x00010beadf60(param_1);
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  param_6 = param_6 & 0xffffffffffffffef;
  FUN_1090798f0(param_6,100,6,lVar1,param_7);
  _objc_release(lVar1);
  if ((param_6 & 1) != 0) {
    uVar2 = param_4;
    _CVPixelBufferGetWidth();
    uVar3 = param_4;
    _CVPixelBufferGetHeight();
    uVar4 = param_4;
    _CVPixelBufferGetBytesPerRow();
    uVar5 = param_5;
    _CVPixelBufferGetWidth(param_5);
    uVar8 = param_5;
    _CVPixelBufferGetHeight(param_5);
    uVar6 = param_5;
    _CVPixelBufferGetBytesPerRow();
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x000109079e0c(uVar2,uVar3,uVar4,uVar5,uVar8,100,6,lVar1,param_7);
    _objc_release(lVar1);
    if ((uVar7 & 1) != 0) {
      _CVPixelBufferLockBaseAddress(param_4,0);
      _CVPixelBufferLockBaseAddress(param_5,0);
      uVar7 = param_4;
      _CVPixelBufferGetBaseAddress();
      uVar5 = param_5;
      _CVPixelBufferGetBaseAddress();
      uVar11 = *(undefined8 *)(param_1 + lVar10);
      uVar8 = 0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc0000000;
      pcStack_b0 = FUN_109087004;
      puStack_a8 = &UNK_110ad71a8;
      uStack_a0 = uVar5;
      uStack_98 = uVar3 >> 2;
      uStack_90 = uVar6;
      uStack_88 = uVar7;
      uStack_80 = uVar4;
      uStack_78 = uVar3;
      uStack_70 = uVar2;
      uStack_68 = uVar11;
      _dispatch_apply(4,uVar8,&puStack_c0);
      _objc_release(uVar8);
      _CVPixelBufferUnlockBaseAddress(param_5,0);
      _CVPixelBufferUnlockBaseAddress(param_4,0);
      puVar9 = PTR____NSDictionary0__struct_11034ab58;
      goto LAB_109086f78;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_109086f78:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 109086ff8; end: 109087003; -[SCImageProcessLookUpTableFilterCPUCommand commandName] */

undefined ** FUN_109086ff8(void)

{
  return &PTR____CFConstantStringClassReference_110f1f1f8;
}



/* Entry: 109087004; end: 1090872fb;  */

void FUN_109087004(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar6 = *(long *)(param_1 + 0x28);
  uVar12 = lVar6 * param_2;
  uVar8 = lVar6 * (param_2 + 1);
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 <= uVar8) {
    uVar8 = uVar7;
  }
  if (uVar12 < uVar8) {
    lVar9 = *(long *)(param_1 + 0x40);
    lVar10 = *(long *)(param_1 + 0x30);
    lVar13 = *(long *)(param_1 + 0x38) + lVar9 * uVar12;
    puVar16 = (undefined1 *)(*(long *)(param_1 + 0x20) + lVar10 * uVar12);
    uVar8 = *(ulong *)(param_1 + 0x50);
    do {
      if (uVar8 != 0) {
        uVar7 = 0;
        pbVar15 = (byte *)(lVar13 + 2);
        do {
          uVar5 = (uint)((float)pbVar15[-2] / 16.0);
          uVar1 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
          if (0xe < (int)uVar1) {
            uVar1 = 0xf;
          }
          if (0x7fffffff < uVar5) {
            uVar5 = 0xffffffff;
          }
          if (0xd < (int)uVar5) {
            uVar5 = 0xe;
          }
          dVar17 = (double)NEON_ucvtf((ulong)*pbVar15);
          dVar18 = (dVar17 / 255.0) * 15.0 * 0.00390625;
          dVar19 = (dVar18 + (double)((float)(uVar1 << 4) / 256.0) + 0.001953125) * 255.0;
          dVar17 = 0.0;
          if (0.0 <= dVar19) {
            dVar17 = dVar19;
          }
          dVar20 = 255.0;
          if (dVar19 <= 255.0) {
            dVar20 = dVar17;
          }
          fVar21 = (float)dVar20;
          dVar18 = (dVar18 + (double)((float)(uVar5 * 0x10 + 0x10) / 256.0) + 0.001953125) * 255.0;
          dVar17 = 0.0;
          if (0.0 <= dVar18) {
            dVar17 = dVar18;
          }
          dVar19 = 255.0;
          if (dVar18 <= 255.0) {
            dVar19 = dVar17;
          }
          fVar22 = (float)dVar19;
          dVar17 = (double)NEON_ucvtf((ulong)pbVar15[-1]);
          dVar18 = ((dVar17 / 255.0) * 15.0 * 0.0625 + 0.03125) * 15.0;
          dVar17 = 15.0;
          if (dVar18 <= 15.0) {
            dVar17 = dVar18;
          }
          fVar23 = (float)dVar17;
          fVar24 = (float)pbVar15[-2] / 16.0 - (float)uVar1;
          uVar14 = *(ulong *)(param_1 + 0x58);
          uVar8 = uVar14;
          FUN_1090872fc(fVar21,fVar23,uVar14,2);
          uVar11 = uVar14;
          FUN_1090872fc(fVar21,fVar23,uVar14,1);
          uVar2 = uVar14;
          FUN_1090872fc(fVar21,fVar23,uVar14,0);
          uVar3 = uVar14;
          FUN_1090872fc(fVar22,fVar23,uVar14,2);
          uVar4 = uVar14;
          FUN_1090872fc(fVar22,fVar23,uVar14,1);
          FUN_1090872fc(fVar22,fVar23,uVar14,0);
          fVar21 = 1.0 - fVar24;
          *puVar16 = (char)(int)(fVar24 * (float)(uVar3 & 0xffffffff) +
                                fVar21 * (float)(uVar8 & 0xffffffff));
          puVar16[1] = (char)(int)(fVar24 * (float)(uVar4 & 0xffffffff) +
                                  fVar21 * (float)(uVar11 & 0xffffffff));
          puVar16[2] = (char)(int)(fVar24 * (float)(uVar14 & 0xffffffff) +
                                  fVar21 * (float)(uVar2 & 0xffffffff));
          puVar16[3] = 0;
          uVar7 = uVar7 + 1;
          uVar8 = *(ulong *)(param_1 + 0x50);
          pbVar15 = pbVar15 + 4;
        } while (uVar7 < uVar8);
        lVar6 = *(long *)(param_1 + 0x28);
        lVar10 = *(long *)(param_1 + 0x30);
        lVar9 = *(long *)(param_1 + 0x40);
        uVar7 = *(ulong *)(param_1 + 0x48);
      }
      puVar16 = puVar16 + lVar10;
      lVar13 = lVar13 + lVar9;
      uVar12 = uVar12 + 1;
      uVar11 = lVar6 * (param_2 + 1);
      if (uVar7 <= uVar11) {
        uVar11 = uVar7;
      }
    } while (uVar12 < uVar11);
  }
  return;
}



/* Entry: 1090872fc; end: 1090873c7;  */

int FUN_1090872fc(float param_1,float param_2,long param_3,int param_4)

{
  ulong uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar1 = (ulong)param_4;
  dVar3 = (double)(param_2 - (float)(int)(float)(int)param_2);
  dVar6 = 1.0 - dVar3;
  dVar7 = (double)(param_1 - (float)(int)(float)(int)param_1);
  dVar4 = 1.0 - dVar7;
  dVar9 = (double)NEON_ucvtf((ulong)*(byte *)(param_3 +
                                             (uVar1 | (long)((int)param_1 + (int)param_2 * 0x100) <<
                                                      2)));
  dVar8 = (double)NEON_ucvtf((ulong)*(byte *)(param_3 +
                                             (uVar1 | (long)((int)param_1 + (int)param_2 * 0x100) <<
                                                      2)));
  dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(param_3 +
                                             (uVar1 | (long)((int)param_1 + (int)param_2 * 0x100) <<
                                                      2)));
  fVar2 = (float)NEON_ucvtf((uint)*(byte *)(param_3 +
                                           (uVar1 | (long)((int)param_1 + (int)param_2 * 0x100) << 2
                                           )));
  return (int)(dVar6 * dVar7 * dVar8 + dVar9 * dVar4 * dVar6 + dVar5 * dVar4 * dVar3 +
              (double)((param_1 - (float)(int)(float)(int)param_1) *
                       (param_2 - (float)(int)(float)(int)param_2) * fVar2));
}



/* Entry: 1090873c8; end: 10908741b; +[SCImageProcessIdentityYUV709Command sharedCommand] */

void FUN_1090873c8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137308e0 != -1) {
    func_0x000107c27d9c(0x1137308e0,&PTR___NSConcreteGlobalBlock_110ad71c8);
  }
  uVar1 = uRam00000001137308e8;
  _objc_retain(uRam00000001137308e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908741c; end: 109087447;  */

void FUN_10908741c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd280;
  _objc_alloc_init();
  uVar1 = puRam00000001137308e8;
  puRam00000001137308e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109087448; end: 109087453; -[SCImageProcessIdentityYUV709Command _conversionMatrix] */

undefined * FUN_109087448(void)

{
  return &UNK_10dfb2b44;
}



/* Entry: 109087454; end: 10908745f; -[SCImageProcessIdentityYUV709Command commandName] */

undefined ** FUN_109087454(void)

{
  return &PTR____CFConstantStringClassReference_110f1f218;
}



/* Entry: 109087460; end: 109087493; -[SCImageProcessIdentityYUV709Command isEqual:] */

void FUN_109087460(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700368;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109087494; end: 1090874e7; +[SCImageProcessCPUIdentityYUVBGR709Command sharedCommand] */

void FUN_109087494(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137308f0 != -1) {
    func_0x000107c27d9c(0x1137308f0,&PTR___NSConcreteGlobalBlock_110ad71e8);
  }
  uVar1 = uRam00000001137308f8;
  _objc_retain(uRam00000001137308f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090874e8; end: 109087513;  */

void FUN_1090874e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd288;
  _objc_alloc_init();
  uVar1 = puRam00000001137308f8;
  puRam00000001137308f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109087514; end: 109087687; -[SCImageProcessCPUIdentityYUVBGR709Command _processPixelBufferWithOrientation:yInPtr:yWidth:yHeight:yBytesPerRow:uvInPtr:uvWidth:uvHeight:uvBytesPerRow:outPtr:outWidth:outHeight:outBytesPerRow:] */

void FUN_109087514(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined **param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,float *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar20;
  ulong uVar21;
  undefined8 *unaff_x22;
  long lVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  ulong unaff_d8;
  float fVar27;
  ulong unaff_d9;
  int aiStack_140 [2];
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar10 = param_15;
  puVar9 = param_14;
  puVar16 = param_13;
  uVar1 = param_12;
  uVar13 = param_11;
  pfVar11 = param_10;
  puVar18 = param_9;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        unaff_x29 = (undefined8 *)&stack0xfffffffffffffff0;
        uStack_138 = uVar13;
        lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_10908b62c(param_5,param_6,param_13,param_14,&uStack_88,&uStack_90,&fStack_94);
        puVar6 = &uStack_a0;
        puVar14 = &uStack_a8;
        pfVar12 = &fStack_ac;
        puVar17 = puVar9;
        FUN_10908b62c(puVar18,pfVar11,puVar16);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar16 << 2);
        unaff_x26 = (undefined8 *)((long)aiStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12);
        unaff_d9 = (ulong)(uint)fStack_94;
        unaff_d8 = (ulong)(uint)fStack_ac;
        if (puVar16 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          dVar23 = (double)NEON_ucvtf(uStack_88);
          dVar24 = (double)NEON_ucvtf(uStack_a0);
          do {
            dVar25 = (double)((ulong)puVar18 & 0xffffffff) + 0.5;
            *(int *)((long)unaff_x26 + (long)puVar18 * 4) =
                 (int)((float)(dVar23 + (double)fStack_94 * dVar25) + -0.5);
            *(int *)(unaff_x19 + (long)puVar18 * 4) =
                 (int)((float)(dVar24 + (double)fStack_ac * dVar25) + -0.5);
            puVar18 = (undefined8 *)((long)puVar18 + 1);
          } while (puVar16 != puVar18);
        }
        unaff_x25 = (undefined8 *)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc0000000;
        pcStack_120 = FUN_109088a74;
        puStack_118 = &UNK_110ad7208;
        uStack_110 = uVar1;
        puStack_108 = puVar10;
        uStack_100 = uStack_90;
        fStack_b8 = fStack_94;
        fStack_b4 = fStack_ac;
        uStack_e8 = uStack_a8;
        uStack_d8 = uStack_138;
        puStack_d0 = puVar16;
        param_6 = &puStack_130;
        param_5 = unaff_x25;
        puStack_f8 = param_4;
        puStack_f0 = param_7;
        puStack_e0 = param_8;
        puStack_c8 = unaff_x26;
        puStack_c0 = unaff_x19;
        _dispatch_apply(puVar9,unaff_x25,param_6);
        puVar15 = unaff_x25;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        unaff_x30 = 0x1090878ec;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)unaff_x19;
        puVar18 = puVar14;
        pfVar11 = pfVar12;
        unaff_x20 = puVar9;
        unaff_x21 = param_8;
        unaff_x22 = param_7;
        unaff_x23 = puVar16;
        unaff_x24 = param_4;
        unaff_x27 = puVar10;
        unaff_x28 = uVar1;
LAB_1090878ec:
        *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
        *(undefined8 **)((long)register0x00000008 + -0x140) = puVar6;
        unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
        unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
        unaff_x19 = *(undefined1 **)register0x00000008;
        unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        FUN_10908b62c(param_5,param_6,unaff_x23,unaff_x20,
                      (undefined8 *)((long)register0x00000008 + -0x88),
                      (undefined8 *)((long)register0x00000008 + -0x90),
                      (long)register0x00000008 + -0x94);
        puVar10 = (undefined8 *)((long)register0x00000008 + -0xa0);
        puVar6 = (undefined8 *)((long)register0x00000008 + -0xa8);
        pfVar12 = (float *)((long)register0x00000008 + -0xac);
        puVar9 = unaff_x20;
        FUN_10908b62c(puVar18,pfVar11,unaff_x23,unaff_x20,puVar10,puVar6,pfVar12);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
        unaff_x27 = (undefined8 *)
                    ((long)register0x00000008 +
                    (-0x140 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar16 = (undefined8 *)((long)unaff_x27 - extraout_x12_00);
        fVar27 = *(float *)((long)register0x00000008 + -0x94);
        unaff_d9 = (ulong)(uint)fVar27;
        fVar26 = *(float *)((long)register0x00000008 + -0xac);
        unaff_d8 = (ulong)(uint)fVar26;
        if (unaff_x23 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x88));
          dVar24 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa0));
          do {
            dVar25 = (double)((ulong)puVar14 & 0xffffffff) + 0.5;
            *(int *)((long)unaff_x27 + (long)puVar14 * 4) =
                 (int)(((float)param_5 - (float)(dVar23 + (double)fVar27 * dVar25)) + -0.5);
            *(int *)((long)puVar16 + (long)puVar14 * 4) =
                 (int)(((float)puVar18 - (float)(dVar24 + (double)fVar26 * dVar25)) + -0.5);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (unaff_x23 != puVar14);
        }
        unaff_x25 = (undefined8 *)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc0000000;
        *(code **)((long)register0x00000008 + -0x120) = FUN_109088bf8;
        *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110ad7208;
        *(undefined1 **)((long)register0x00000008 + -0x110) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar15;
        *(float *)((long)register0x00000008 + -0xb8) = fVar27;
        *(float *)((long)register0x00000008 + -0xb4) = fVar26;
        *(undefined8 **)((long)register0x00000008 + -0xf0) = puVar17;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0x140);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0x138);
        *(undefined8 **)((long)register0x00000008 + -0xd0) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -200) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0xc0) = puVar16;
        param_6 = (undefined **)((long)register0x00000008 + -0x130);
        puVar8 = unaff_x25;
        _dispatch_apply(unaff_x20,unaff_x25,param_6);
        puVar14 = unaff_x25;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)
           ) {
          return;
        }
        unaff_x30 = 0x109087b30;
        ___stack_chk_fail();
        unaff_x21 = puVar16;
      }
      else {
        if (param_3 != 1) {
          return;
        }
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        puVar16 = (undefined8 *)register0x00000008;
        puVar14 = param_4;
        puVar8 = param_5;
        puVar9 = param_7;
        puVar10 = param_8;
        puVar6 = puVar18;
        pfVar12 = pfVar11;
        puVar17 = unaff_x22;
        puVar15 = unaff_x24;
        param_5 = unaff_x26;
      }
      puVar16[-0xe] = unaff_d9;
      puVar16[-0xd] = unaff_d8;
      puVar16[-0xc] = unaff_x28;
      puVar16[-0xb] = unaff_x27;
      puVar16[-10] = param_5;
      puVar16[-9] = unaff_x25;
      puVar16[-8] = puVar15;
      puVar16[-7] = unaff_x23;
      puVar16[-6] = puVar17;
      puVar16[-5] = unaff_x21;
      puVar16[-4] = unaff_x20;
      puVar16[-3] = unaff_x19;
      puVar16[-2] = unaff_x29;
      puVar16[-1] = unaff_x30;
      unaff_x29 = puVar16 + -2;
      puVar16[-0x28] = uVar13;
      unaff_x20 = (undefined8 *)puVar16[2];
      unaff_x27 = (undefined8 *)puVar16[3];
      unaff_x28 = *puVar16;
      unaff_x23 = (undefined8 *)puVar16[1];
      puVar16[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(puVar8,param_6,unaff_x23,unaff_x20,puVar16 + -0x11,puVar16 + -0x12,
                    (long)puVar16 + -0x94);
      param_8 = puVar16 + -0x14;
      puVar18 = puVar16 + -0x15;
      pfVar11 = (float *)((long)puVar16 + -0xac);
      param_7 = unaff_x20;
      FUN_10908b62c(puVar6,pfVar12,unaff_x23);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
      unaff_x26 = (undefined8 *)
                  ((long)puVar16 + (-0x140 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x23 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        register0x00000008 = (BADSPACEBASE *)((long)unaff_x26 - extraout_x12_01);
        fVar27 = *(float *)((long)puVar16 + -0xac);
        fVar26 = *(float *)((long)puVar16 + -0x94);
      }
      else {
        puVar15 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)puVar16 + -0x94);
        dVar23 = (double)NEON_ucvtf(puVar16[-0x11]);
        do {
          *(int *)((long)unaff_x26 + (long)puVar15 * 4) =
               (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar15 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (unaff_x23 != puVar15);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        register0x00000008 =
             (BADSPACEBASE *)((long)unaff_x26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
        puVar15 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)puVar16 + -0xac);
        dVar23 = (double)NEON_ucvtf(puVar16[-0x14]);
        do {
          *(int *)((long)register0x00000008 + (long)puVar15 * 4) =
               (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar15 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (unaff_x23 != puVar15);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puVar16[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
      puVar16[-0x26] = 0xc0000000;
      puVar16[-0x25] = 0x109088ccc;
      puVar16[-0x24] = &UNK_110ad7228;
      puVar16[-0x23] = unaff_x28;
      puVar16[-0x22] = unaff_x27;
      puVar16[-0x21] = unaff_x20;
      puVar16[-0x20] = puVar16[-0x12];
      puVar16[-0x1f] = puVar14;
      *(float *)(puVar16 + -0x17) = fVar26;
      *(float *)((long)puVar16 + -0xb4) = fVar27;
      puVar16[-0x1e] = puVar9;
      puVar16[-0x1d] = puVar16[-0x15];
      puVar16[-0x1c] = puVar10;
      puVar16[-0x1b] = puVar16[-0x28];
      puVar16[-0x1a] = unaff_x23;
      puVar16[-0x19] = unaff_x26;
      puVar16[-0x18] = register0x00000008;
      param_6 = (undefined **)(puVar16 + -0x27);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      param_4 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar16[-0x10]) {
        return;
      }
      unaff_x30 = 0x109087dac;
      ___stack_chk_fail();
      unaff_x19 = (undefined1 *)register0x00000008;
      unaff_x21 = puVar10;
      unaff_x22 = puVar9;
      unaff_x24 = puVar14;
LAB_109087dac:
      *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
      unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
      unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
      unaff_x19 = *(undefined1 **)register0x00000008;
      unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(param_5,param_6,unaff_x23,unaff_x20,
                    (undefined8 *)((long)register0x00000008 + -0x88),
                    (undefined8 *)((long)register0x00000008 + -0x90),
                    (undefined1 *)((long)register0x00000008 + -0x94));
      puVar15 = (undefined8 *)((long)register0x00000008 + -0xa0);
      puVar17 = (undefined8 *)((long)register0x00000008 + -0xa8);
      pfVar12 = (float *)((long)register0x00000008 + -0xac);
      puVar10 = unaff_x20;
      FUN_10908b62c(puVar18,pfVar11,unaff_x23,unaff_x20,puVar15,puVar17,pfVar12);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
      unaff_x27 = (undefined8 *)
                  ((long)register0x00000008 +
                  (-0x140 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x23 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x26 = (undefined8 *)((long)unaff_x27 - extraout_x12_02);
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
      }
      else {
        puVar16 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x88));
        do {
          *(int *)((long)unaff_x27 + (long)puVar16 * 4) =
               (int)(((float)param_5 -
                     (float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)
                            )) + -0.5);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (unaff_x23 != puVar16);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x26 = (undefined8 *)((long)unaff_x27 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
        puVar16 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa0));
        do {
          *(int *)((long)unaff_x26 + (long)puVar16 * 4) =
               (int)(((float)puVar18 -
                     (float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)
                            )) + -0.5);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (unaff_x23 != puVar16);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0xc0000000;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0x109088dac;
      *(undefined **)((long)register0x00000008 + -0x120) = &UNK_110ad7228;
      *(undefined1 **)((long)register0x00000008 + -0x118) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 **)((long)register0x00000008 + -0xf8) = param_4;
      *(float *)((long)register0x00000008 + -0xb8) = fVar26;
      *(float *)((long)register0x00000008 + -0xb4) = fVar27;
      *(undefined8 **)((long)register0x00000008 + -0xf0) = param_7;
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 **)((long)register0x00000008 + -0xe0) = param_8;
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x140);
      *(undefined8 **)((long)register0x00000008 + -0xd0) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -200) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0xc0) = unaff_x26;
      param_6 = (undefined **)((long)register0x00000008 + -0x138);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      puVar6 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      {
        return;
      }
      unaff_x30 = 0x10908803c;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x26;
      unaff_x21 = param_8;
      unaff_x22 = param_7;
      unaff_x24 = param_4;
LAB_10908803c:
      *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
      unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
      unaff_x27 = *(undefined8 **)((long)register0x00000008 + 0x18);
      unaff_x28 = *(undefined8 *)register0x00000008;
      unaff_x24 = *(undefined8 **)((long)register0x00000008 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(param_5,param_6,unaff_x20,unaff_x24,
                    (undefined8 *)((long)register0x00000008 + -0x88),
                    (undefined8 *)((long)register0x00000008 + -0x90),
                    (long)register0x00000008 + -0x94);
      puVar9 = (undefined8 *)((long)register0x00000008 + -0xa0);
      puVar18 = (undefined8 *)((long)register0x00000008 + -0xa8);
      pfVar11 = (float *)((long)register0x00000008 + -0xac);
      puVar16 = unaff_x24;
      FUN_10908b62c(puVar17,pfVar12,unaff_x20,unaff_x24,puVar9,puVar18,pfVar11);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x24 << 2);
      unaff_x26 = (undefined8 *)
                  ((long)register0x00000008 +
                  (-0x140 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x24 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12_03);
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
      }
      else {
        puVar17 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
        do {
          *(int *)((long)unaff_x26 + (long)puVar17 * 4) =
               (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar17 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (unaff_x24 != puVar17);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
        puVar17 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
        do {
          *(int *)(unaff_x19 + (long)puVar17 * 4) =
               (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar17 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (unaff_x24 != puVar17);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0xc0000000;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0x109088e8c;
      *(undefined **)((long)register0x00000008 + -0x120) = &UNK_110ad7228;
      *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x110) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar6;
      *(float *)((long)register0x00000008 + -0xb8) = fVar26;
      *(float *)((long)register0x00000008 + -0xb4) = fVar27;
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar15;
      *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar10;
      *(undefined1 **)((long)register0x00000008 + -200) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x140);
      param_6 = (undefined **)((long)register0x00000008 + -0x138);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      param_4 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      {
        return;
      }
      unaff_x30 = 0x1090882b8;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x19;
      unaff_x21 = puVar10;
      unaff_x22 = puVar15;
      unaff_x23 = puVar6;
      goto LAB_1090882b8;
    }
    if (param_3 == 2) {
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      puVar6 = param_4;
      puVar10 = param_7;
      puVar15 = param_8;
      puVar17 = puVar18;
      pfVar12 = pfVar11;
      goto LAB_10908803c;
    }
    if (param_3 != 3) {
      return;
    }
    param_11 = param_14;
    param_12 = param_15;
    param_9 = (undefined8 *)uVar1;
    param_10 = (float *)param_13;
    puVar15 = param_4;
    puVar17 = param_5;
    puVar10 = puVar18;
    pfVar12 = pfVar11;
  }
  else {
    if (param_3 < 6) {
      if (param_3 == 4) {
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        puVar15 = param_4;
        puVar17 = param_7;
        puVar6 = param_8;
        goto LAB_1090878ec;
      }
      if (param_3 != 5) {
        return;
      }
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      goto LAB_109087dac;
    }
    if (param_3 != 6) {
      if (param_3 != 7) {
        return;
      }
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      goto LAB_1090887d4;
    }
    param_11 = param_14;
    param_12 = param_15;
    param_9 = (undefined8 *)uVar1;
    param_10 = (float *)param_13;
    puVar16 = param_7;
    puVar9 = param_8;
LAB_1090882b8:
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
    unaff_x27 = *(undefined8 **)((long)register0x00000008 + 0x18);
    unaff_x28 = *(undefined8 *)register0x00000008;
    unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(param_5,param_6,unaff_x20,unaff_x23,
                  (undefined8 *)((long)register0x00000008 + -0x88),
                  (undefined8 *)((long)register0x00000008 + -0x90),
                  (undefined1 *)((long)register0x00000008 + -0x94));
    param_8 = (undefined8 *)((long)register0x00000008 + -0xa0);
    puVar10 = (undefined8 *)((long)register0x00000008 + -0xa8);
    pfVar12 = (float *)((long)register0x00000008 + -0xac);
    param_7 = unaff_x23;
    FUN_10908b62c(puVar18,pfVar11,unaff_x20);
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
    unaff_x26 = (undefined8 *)
                ((long)register0x00000008 + (-0x140 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0)))
    ;
    if (unaff_x23 == (undefined8 *)0x0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12_04);
      fVar27 = *(float *)((long)register0x00000008 + -0xac);
      fVar26 = *(float *)((long)register0x00000008 + -0x94);
    }
    else {
      puVar18 = (undefined8 *)0x0;
      fVar26 = *(float *)((long)register0x00000008 + -0x94);
      dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
      do {
        *(int *)((long)unaff_x26 + (long)puVar18 * 4) =
             (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar18 & 0xffffffff) + 0.5))
                  + -0.5);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (unaff_x23 != puVar18);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      unaff_x19 = (undefined1 *)((long)unaff_x26 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
      puVar18 = (undefined8 *)0x0;
      fVar27 = *(float *)((long)register0x00000008 + -0xac);
      dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
      do {
        *(int *)(unaff_x19 + (long)puVar18 * 4) =
             (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar18 & 0xffffffff) + 0.5))
                  + -0.5);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (unaff_x23 != puVar18);
    }
    unaff_d9 = (ulong)(uint)fVar27;
    unaff_d8 = (ulong)(uint)fVar26;
    unaff_x25 = (undefined8 *)0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc0000000;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x109088f68;
    *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110ad7208;
    *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 **)((long)register0x00000008 + -0xf8) = param_4;
    *(float *)((long)register0x00000008 + -0xb8) = fVar26;
    *(float *)((long)register0x00000008 + -0xb4) = fVar27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar9;
    *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar16;
    *(undefined1 **)((long)register0x00000008 + -200) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x138);
    param_6 = (undefined **)((long)register0x00000008 + -0x130);
    puVar17 = unaff_x25;
    _dispatch_apply(unaff_x20,unaff_x25,param_6);
    puVar15 = unaff_x25;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    unaff_x30 = 0x10908852c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)unaff_x19;
    unaff_x21 = puVar16;
    unaff_x22 = puVar9;
    unaff_x24 = param_4;
  }
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar13;
  *(undefined8 **)((long)register0x00000008 + -0x160) = param_8;
  *(undefined8 **)((long)register0x00000008 + -0x158) = param_7;
  unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
  unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
  unaff_x19 = *(undefined1 **)register0x00000008;
  unaff_x24 = *(undefined8 **)((long)register0x00000008 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(puVar17,param_6,unaff_x20,unaff_x24,(undefined8 *)((long)register0x00000008 + -0x88)
                ,(undefined8 *)((long)register0x00000008 + -0x90),(long)register0x00000008 + -0x94);
  param_8 = (undefined8 *)((long)register0x00000008 + -0xa0);
  puVar18 = (undefined8 *)((long)register0x00000008 + -0xa8);
  pfVar11 = (float *)((long)register0x00000008 + -0xac);
  param_7 = unaff_x24;
  FUN_10908b62c(puVar10,pfVar12,unaff_x20);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x24 << 2);
  unaff_x21 = (undefined8 *)
              ((long)register0x00000008 + (-0x160 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0)));
  if (unaff_x24 == (undefined8 *)0x0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x22 = (undefined8 *)((long)unaff_x21 - extraout_x12_05);
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
  }
  else {
    puVar16 = (undefined8 *)0x0;
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
    do {
      *(int *)((long)unaff_x21 + (long)puVar16 * 4) =
           (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (unaff_x24 != puVar16);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x22 = (undefined8 *)((long)unaff_x21 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
    puVar16 = (undefined8 *)0x0;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
    do {
      *(int *)((long)unaff_x22 + (long)puVar16 * 4) =
           (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (unaff_x24 != puVar16);
  }
  unaff_d9 = (ulong)(uint)fVar27;
  unaff_d8 = (ulong)(uint)fVar26;
  unaff_x27 = (undefined8 *)0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)register0x00000008 + -0x148) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0xc0000000;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0x109089038;
  *(undefined **)((long)register0x00000008 + -0x130) = &UNK_110ad7248;
  *(undefined1 **)((long)register0x00000008 + -0x128) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x110) = puVar17;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 **)((long)register0x00000008 + -0x100) = puVar15;
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar10;
  *(float *)((long)register0x00000008 + -0xb8) = fVar26;
  *(float *)((long)register0x00000008 + -0xb4) = fVar27;
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0x160);
  *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x158);
  *(undefined8 **)((long)register0x00000008 + -200) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xc0) =
       *(undefined8 *)((long)register0x00000008 + -0x150);
  param_6 = (undefined **)((long)register0x00000008 + -0x148);
  param_5 = unaff_x27;
  _dispatch_apply(unaff_x20,unaff_x27,param_6);
  param_4 = unaff_x27;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
    return;
  }
  unaff_x30 = 0x1090887d4;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)unaff_x22;
  unaff_x23 = puVar10;
  unaff_x25 = puVar15;
  unaff_x26 = puVar17;
LAB_1090887d4:
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar13;
  *(undefined8 **)((long)register0x00000008 + -0x158) = param_8;
  *(undefined8 **)((long)register0x00000008 + -0x150) = param_7;
  uVar13 = *(undefined8 *)((long)register0x00000008 + 0x10);
  uVar3 = *(undefined8 *)((long)register0x00000008 + 0x18);
  uVar1 = *(undefined8 *)register0x00000008;
  uVar21 = *(ulong *)((long)register0x00000008 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(param_5,param_6,uVar13,uVar21,(undefined8 *)((long)register0x00000008 + -0x88),
                (undefined8 *)((long)register0x00000008 + -0x90),(long)register0x00000008 + -0x94);
  FUN_10908b62c(puVar18,pfVar11,uVar13,uVar21,(undefined8 *)((long)register0x00000008 + -0xa0),
                (undefined8 *)((long)register0x00000008 + -0xa8),(long)register0x00000008 + -0xac);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar21 << 2);
  lVar20 = (long)register0x00000008 + (-0x160 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
  if (uVar21 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = lVar20 - extraout_x12_06;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
  }
  else {
    uVar19 = 0;
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
    do {
      *(int *)(lVar20 + uVar19 * 4) =
           (int)((float)(dVar23 + (double)fVar26 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar21 != uVar19);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = lVar20 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
    uVar19 = 0;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
    do {
      *(int *)(lVar22 + uVar19 * 4) =
           (int)((float)(dVar23 + (double)fVar27 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar21 != uVar19);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)register0x00000008 + -0x140) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0xc0000000;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x10908912c;
  *(undefined **)((long)register0x00000008 + -0x128) = &UNK_110ad7268;
  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar1;
  *(undefined8 *)((long)register0x00000008 + -0x118) = uVar3;
  *(undefined8 **)((long)register0x00000008 + -0x110) = param_5;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 **)((long)register0x00000008 + -0x100) = param_4;
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar18;
  *(float *)((long)register0x00000008 + -0xb8) = fVar26;
  *(float *)((long)register0x00000008 + -0xb4) = fVar27;
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0x158);
  *(ulong *)((long)register0x00000008 + -0xe0) = uVar21;
  *(long *)((long)register0x00000008 + -0xd8) = lVar20;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x150);
  *(long *)((long)register0x00000008 + -200) = lVar22;
  *(undefined8 *)((long)register0x00000008 + -0xc0) =
       *(undefined8 *)((long)register0x00000008 + -0x148);
  uVar19 = uVar7;
  _dispatch_apply(uVar13,uVar7,(undefined8 *)((long)register0x00000008 + -0x140));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar7 + 0x60) != 0) {
    *(ulong *)(lVar22 + -0x40) = uVar21;
    *(undefined8 **)(lVar22 + -0x38) = puVar18;
    *(long *)(lVar22 + -0x30) = lVar22;
    *(long *)(lVar22 + -0x28) = lVar20;
    *(undefined8 *)(lVar22 + -0x20) = uVar13;
    *(undefined8 *)(lVar22 + -0x18) = uVar1;
    *(undefined8 **)(lVar22 + -0x10) = (undefined8 *)((long)register0x00000008 + -0x10);
    *(code **)(lVar22 + -8) = FUN_109088a74;
    uVar21 = 0;
    lVar20 = *(long *)(uVar7 + 0x20) + *(long *)(uVar7 + 0x28) * uVar19;
    fVar26 = *(float *)(uVar7 + 0x78);
    fVar27 = *(float *)(uVar7 + 0x7c);
    dVar24 = (double)NEON_ucvtf(*(undefined8 *)(uVar7 + 0x30));
    lVar22 = *(long *)(uVar7 + 0x38);
    lVar4 = *(long *)(uVar7 + 0x40);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)(uVar7 + 0x48));
    lVar2 = *(long *)(uVar7 + 0x50);
    lVar5 = *(long *)(uVar7 + 0x58);
    do {
      FUN_109088b48(lVar22 + lVar4 * (int)((float)(dVar24 + (double)fVar26 * ((double)uVar19 + 0.5))
                                          + -0.5) +
                    (long)*(int *)(*(long *)(uVar7 + 0x68) + uVar21 * 4),
                    lVar2 + lVar5 * (int)((float)(dVar23 + (double)fVar27 * ((double)uVar19 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(uVar7 + 0x70) + uVar21 * 4) * 2,lVar20);
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 4;
    } while (uVar21 < *(ulong *)(uVar7 + 0x60));
  }
  return;
}



/* Entry: 109087688; end: 109087693; -[SCImageProcessCPUIdentityYUVBGR709Command commandName] */

undefined ** FUN_109087688(void)

{
  return &PTR____CFConstantStringClassReference_110f1f238;
}



/* Entry: 109087694; end: 1090876c7; -[SCImageProcessCPUIdentityYUVBGR709Command isEqual:] */

void FUN_109087694(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700370;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 1090876c8; end: 109088a73;  */

void FUN_1090876c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code **ppcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  long lVar17;
  long extraout_x8;
  ulong uVar18;
  long extraout_x8_00;
  ulong uVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  int aiStack_3c0 [2];
  ulong auStack_3b8 [16];
  float afStack_338 [3];
  float fStack_32c;
  undefined8 auStack_328 [2];
  float fStack_314;
  long alStack_310 [18];
  int aiStack_280 [2];
  ulong auStack_278 [16];
  float afStack_1f8 [3];
  float fStack_1ec;
  undefined8 auStack_1e8 [2];
  float fStack_1d4;
  long alStack_1d0 [18];
  int aiStack_140 [2];
  ulong uStack_138;
  code *apcStack_130 [5];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = param_8;
  FUN_10908b62c(param_2,param_3,param_10,param_11,&uStack_88,&uStack_90,&fStack_94);
  puVar15 = &uStack_a0;
  puVar13 = &uStack_a8;
  pfVar16 = &fStack_ac;
  uVar14 = param_11;
  FUN_10908b62c(param_6,param_7,param_10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_10 << 2);
  lVar17 = (long)aiStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar17 - extraout_x12);
  if (param_10 != 0) {
    uVar18 = 0;
    dVar26 = (double)NEON_ucvtf(uStack_88);
    dVar27 = (double)NEON_ucvtf(uStack_a0);
    do {
      dVar28 = (double)(uVar18 & 0xffffffff) + 0.5;
      *(int *)(lVar17 + uVar18 * 4) = (int)((float)(dVar26 + (double)fStack_94 * dVar28) + -0.5);
      *(int *)((long)puVar21 + uVar18 * 4) =
           (int)((float)(dVar27 + (double)fStack_ac * dVar28) + -0.5);
      uVar18 = uVar18 + 1;
    } while (param_10 != uVar18);
  }
  uVar6 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  apcStack_130[0] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  apcStack_130[1] = (code *)0xc0000000;
  apcStack_130[2] = FUN_109088a74;
  apcStack_130[3] = (code *)&UNK_110ad7208;
  apcStack_130[4] = (code *)param_9;
  uStack_108 = param_12;
  uStack_100 = uStack_90;
  fStack_b8 = fStack_94;
  fStack_b4 = fStack_ac;
  uStack_e8 = uStack_a8;
  uStack_d8 = uStack_138;
  uStack_d0 = param_10;
  ppcVar12 = apcStack_130;
  uVar20 = uVar6;
  uStack_f8 = param_1;
  uStack_f0 = param_4;
  uStack_e0 = param_5;
  lStack_c8 = lVar17;
  puStack_c0 = puVar21;
  _dispatch_apply(param_11,uVar6,ppcVar12);
  uVar18 = uVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar21[-0xe] = (ulong)(uint)fStack_94;
  puVar21[-0xd] = (ulong)(uint)fStack_ac;
  puVar21[-0xc] = param_9;
  puVar21[-0xb] = param_12;
  puVar21[-10] = lVar17;
  puVar21[-9] = uVar6;
  puVar21[-8] = param_1;
  puVar21[-7] = param_10;
  puVar21[-6] = param_4;
  puVar21[-5] = param_5;
  puVar21[-4] = param_11;
  puVar21[-3] = puVar21;
  puVar21[-2] = &stack0xfffffffffffffff0;
  puVar21[-1] = 0x1090878ec;
  puVar21[-0x27] = param_8;
  puVar21[-0x28] = puVar15;
  uVar1 = puVar21[2];
  uVar9 = puVar21[3];
  uVar2 = *puVar21;
  uVar6 = puVar21[1];
  puVar21[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar20,ppcVar12,uVar6,uVar1,puVar21 + -0x11,puVar21 + -0x12,(long)puVar21 + -0x94);
  puVar15 = puVar21 + -0x14;
  puVar22 = puVar21 + -0x15;
  lVar17 = (long)puVar21 + -0xac;
  uVar11 = uVar1;
  FUN_10908b62c(puVar13,pfVar16,uVar6,uVar1,puVar15,puVar22,lVar17);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar6 << 2);
  lVar25 = (long)puVar21 + (-0x140 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar23 = (undefined8 *)(lVar25 - extraout_x12_00);
  fVar30 = *(float *)((long)puVar21 + -0x94);
  fVar29 = *(float *)((long)puVar21 + -0xac);
  if (uVar6 != 0) {
    uVar19 = 0;
    dVar26 = (double)NEON_ucvtf(puVar21[-0x11]);
    dVar27 = (double)NEON_ucvtf(puVar21[-0x14]);
    do {
      dVar28 = (double)(uVar19 & 0xffffffff) + 0.5;
      *(int *)(lVar25 + uVar19 * 4) =
           (int)(((float)uVar20 - (float)(dVar26 + (double)fVar30 * dVar28)) + -0.5);
      *(int *)((long)puVar23 + uVar19 * 4) =
           (int)(((float)puVar13 - (float)(dVar27 + (double)fVar29 * dVar28)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar6 != uVar19);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar21[-0x26] = PTR___NSConcreteStackBlock_11034bd00;
  puVar21[-0x25] = 0xc0000000;
  puVar21[-0x24] = FUN_109088bf8;
  puVar21[-0x23] = &UNK_110ad7208;
  puVar21[-0x22] = uVar2;
  puVar21[-0x21] = uVar9;
  puVar21[-0x20] = puVar21[-0x12];
  puVar21[-0x1f] = uVar18;
  *(float *)(puVar21 + -0x17) = fVar30;
  *(float *)((long)puVar21 + -0xb4) = fVar29;
  puVar21[-0x1e] = uVar14;
  puVar21[-0x1d] = puVar21[-0x15];
  puVar21[-0x1c] = puVar21[-0x28];
  puVar21[-0x1b] = puVar21[-0x27];
  puVar21[-0x1a] = uVar6;
  puVar21[-0x19] = lVar25;
  puVar21[-0x18] = puVar23;
  puVar13 = puVar21 + -0x26;
  uVar10 = uVar7;
  _dispatch_apply(uVar1,uVar7,puVar13);
  uVar8 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar21[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar23[-0xe] = (ulong)(uint)fVar30;
  puVar23[-0xd] = (ulong)(uint)fVar29;
  puVar23[-0xc] = uVar9;
  puVar23[-0xb] = lVar25;
  puVar23[-10] = uVar20;
  puVar23[-9] = uVar7;
  puVar23[-8] = uVar18;
  puVar23[-7] = uVar6;
  puVar23[-6] = uVar14;
  puVar23[-5] = puVar23;
  puVar23[-4] = uVar1;
  puVar23[-3] = uVar2;
  puVar23[-2] = puVar21 + -2;
  puVar23[-1] = 0x109087b30;
  puVar23[-0x28] = param_8;
  uVar14 = puVar23[2];
  uVar2 = puVar23[3];
  uVar1 = *puVar23;
  uVar18 = puVar23[1];
  puVar23[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar10,puVar13,uVar18,uVar14,puVar23 + -0x11,puVar23 + -0x12,(long)puVar23 + -0x94);
  puVar13 = puVar23 + -0x14;
  puVar21 = puVar23 + -0x15;
  lVar25 = (long)puVar23 + -0xac;
  uVar9 = uVar14;
  FUN_10908b62c(puVar22,lVar17,uVar18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar17 = (long)puVar23 + (-0x140 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - extraout_x12_01);
    fVar30 = *(float *)((long)puVar23 + -0xac);
    fVar29 = *(float *)((long)puVar23 + -0x94);
  }
  else {
    uVar20 = 0;
    fVar29 = *(float *)((long)puVar23 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar23[-0x11]);
    do {
      *(int *)(lVar17 + uVar20 * 4) =
           (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    uVar20 = 0;
    fVar30 = *(float *)((long)puVar23 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar23[-0x14]);
    do {
      *(int *)((long)puVar22 + uVar20 * 4) =
           (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
  }
  uVar19 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar23[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar23[-0x26] = 0xc0000000;
  puVar23[-0x25] = 0x109088ccc;
  puVar23[-0x24] = &UNK_110ad7228;
  puVar23[-0x23] = uVar1;
  puVar23[-0x22] = uVar2;
  puVar23[-0x21] = uVar14;
  puVar23[-0x20] = puVar23[-0x12];
  puVar23[-0x1f] = uVar8;
  *(float *)(puVar23 + -0x17) = fVar29;
  *(float *)((long)puVar23 + -0xb4) = fVar30;
  puVar23[-0x1e] = uVar11;
  puVar23[-0x1d] = puVar23[-0x15];
  puVar23[-0x1c] = puVar15;
  puVar23[-0x1b] = puVar23[-0x28];
  puVar23[-0x1a] = uVar18;
  puVar23[-0x19] = lVar17;
  puVar23[-0x18] = puVar22;
  puVar24 = puVar23 + -0x27;
  uVar6 = uVar19;
  _dispatch_apply(uVar14,uVar19,puVar24);
  uVar20 = uVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar23[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar22[-0xe] = (ulong)(uint)fVar30;
  puVar22[-0xd] = (ulong)(uint)fVar29;
  puVar22[-0xc] = uVar1;
  puVar22[-0xb] = uVar2;
  puVar22[-10] = lVar17;
  puVar22[-9] = uVar19;
  puVar22[-8] = uVar8;
  puVar22[-7] = uVar18;
  puVar22[-6] = uVar11;
  puVar22[-5] = puVar15;
  puVar22[-4] = uVar14;
  puVar22[-3] = puVar22;
  puVar22[-2] = puVar23 + -2;
  puVar22[-1] = 0x109087dac;
  puVar22[-0x28] = param_8;
  uVar14 = puVar22[2];
  uVar2 = puVar22[3];
  uVar1 = *puVar22;
  uVar18 = puVar22[1];
  puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar6,puVar24,uVar18,uVar14,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94);
  puVar15 = puVar22 + -0x14;
  puVar23 = puVar22 + -0x15;
  lVar17 = (long)puVar22 + -0xac;
  uVar11 = uVar14;
  FUN_10908b62c(puVar21,lVar25,uVar18,uVar14,puVar15,puVar23,lVar17);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar25 = (long)puVar22 + (-0x140 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar24 = (undefined8 *)(lVar25 - extraout_x12_02);
    fVar30 = *(float *)((long)puVar22 + -0xac);
    fVar29 = *(float *)((long)puVar22 + -0x94);
  }
  else {
    uVar19 = 0;
    fVar29 = *(float *)((long)puVar22 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar22[-0x11]);
    do {
      *(int *)(lVar25 + uVar19 * 4) =
           (int)(((float)uVar6 -
                 (float)(dVar26 + (double)fVar29 * ((double)(uVar19 & 0xffffffff) + 0.5))) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar18 != uVar19);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar24 = (undefined8 *)(lVar25 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    uVar6 = 0;
    fVar30 = *(float *)((long)puVar22 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar22[-0x14]);
    do {
      *(int *)((long)puVar24 + uVar6 * 4) =
           (int)(((float)puVar21 -
                 (float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5))) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar22[-0x26] = 0xc0000000;
  puVar22[-0x25] = 0x109088dac;
  puVar22[-0x24] = &UNK_110ad7228;
  puVar22[-0x23] = uVar1;
  puVar22[-0x22] = uVar2;
  puVar22[-0x21] = uVar14;
  puVar22[-0x20] = puVar22[-0x12];
  puVar22[-0x1f] = uVar20;
  *(float *)(puVar22 + -0x17) = fVar29;
  *(float *)((long)puVar22 + -0xb4) = fVar30;
  puVar22[-0x1e] = uVar9;
  puVar22[-0x1d] = puVar22[-0x15];
  puVar22[-0x1c] = puVar13;
  puVar22[-0x1b] = puVar22[-0x28];
  puVar22[-0x1a] = uVar18;
  puVar22[-0x19] = lVar25;
  puVar22[-0x18] = puVar24;
  puVar21 = puVar22 + -0x27;
  uVar10 = uVar7;
  _dispatch_apply(uVar14,uVar7,puVar21);
  uVar8 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar22[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar24[-0xe] = (ulong)(uint)fVar30;
  puVar24[-0xd] = (ulong)(uint)fVar29;
  puVar24[-0xc] = uVar2;
  puVar24[-0xb] = lVar25;
  puVar24[-10] = puVar24;
  puVar24[-9] = uVar7;
  puVar24[-8] = uVar20;
  puVar24[-7] = uVar18;
  puVar24[-6] = uVar9;
  puVar24[-5] = puVar13;
  puVar24[-4] = uVar14;
  puVar24[-3] = uVar1;
  puVar24[-2] = puVar22 + -2;
  puVar24[-1] = 0x10908803c;
  puVar24[-0x28] = param_8;
  uVar14 = puVar24[2];
  uVar2 = puVar24[3];
  uVar1 = *puVar24;
  uVar18 = puVar24[1];
  puVar24[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar10,puVar21,uVar14,uVar18,puVar24 + -0x11,puVar24 + -0x12,(long)puVar24 + -0x94);
  puVar13 = puVar24 + -0x14;
  puVar21 = puVar24 + -0x15;
  lVar25 = (long)puVar24 + -0xac;
  uVar20 = uVar18;
  FUN_10908b62c(puVar23,lVar17,uVar14,uVar18,puVar13,puVar21,lVar25);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar17 = (long)puVar24 + (-0x140 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - extraout_x12_03);
    fVar30 = *(float *)((long)puVar24 + -0xac);
    fVar29 = *(float *)((long)puVar24 + -0x94);
  }
  else {
    uVar6 = 0;
    fVar29 = *(float *)((long)puVar24 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar24[-0x12]);
    do {
      *(int *)(lVar17 + uVar6 * 4) =
           (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
    uVar6 = 0;
    fVar30 = *(float *)((long)puVar24 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar24[-0x15]);
    do {
      *(int *)((long)puVar22 + uVar6 * 4) =
           (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar24[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar24[-0x26] = 0xc0000000;
  puVar24[-0x25] = 0x109088e8c;
  puVar24[-0x24] = &UNK_110ad7228;
  puVar24[-0x23] = uVar1;
  puVar24[-0x22] = uVar2;
  puVar24[-0x21] = uVar14;
  puVar24[-0x20] = puVar24[-0x11];
  puVar24[-0x1f] = uVar8;
  *(float *)(puVar24 + -0x17) = fVar29;
  *(float *)((long)puVar24 + -0xb4) = fVar30;
  puVar24[-0x1e] = puVar24[-0x14];
  puVar24[-0x1d] = puVar15;
  puVar24[-0x1c] = uVar18;
  puVar24[-0x1b] = lVar17;
  puVar24[-0x1a] = uVar11;
  puVar24[-0x19] = puVar22;
  puVar24[-0x18] = puVar24[-0x28];
  puVar23 = puVar24 + -0x27;
  uVar10 = uVar7;
  _dispatch_apply(uVar14,uVar7,puVar23);
  uVar9 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != puVar24[-0x10]) {
    ___stack_chk_fail();
    puVar22[-0xe] = (ulong)(uint)fVar30;
    puVar22[-0xd] = (ulong)(uint)fVar29;
    puVar22[-0xc] = uVar1;
    puVar22[-0xb] = uVar2;
    puVar22[-10] = lVar17;
    puVar22[-9] = uVar7;
    puVar22[-8] = uVar18;
    puVar22[-7] = uVar8;
    puVar22[-6] = puVar15;
    puVar22[-5] = uVar11;
    puVar22[-4] = uVar14;
    puVar22[-3] = puVar22;
    puVar22[-2] = puVar24 + -2;
    puVar22[-1] = 0x1090882b8;
    puVar22[-0x27] = param_8;
    uVar14 = puVar22[2];
    uVar2 = puVar22[3];
    uVar1 = *puVar22;
    uVar18 = puVar22[1];
    puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar10,puVar23,uVar14,uVar18,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94
                 );
    puVar15 = puVar22 + -0x14;
    puVar23 = puVar22 + -0x15;
    lVar17 = (long)puVar22 + -0xac;
    uVar6 = uVar18;
    FUN_10908b62c(puVar21,lVar25,uVar14);
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar25 = (long)puVar22 + (-0x140 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar21 = (undefined8 *)(lVar25 - extraout_x12_04);
      fVar30 = *(float *)((long)puVar22 + -0xac);
      fVar29 = *(float *)((long)puVar22 + -0x94);
    }
    else {
      uVar19 = 0;
      fVar29 = *(float *)((long)puVar22 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x12]);
      do {
        *(int *)(lVar25 + uVar19 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar21 = (undefined8 *)(lVar25 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
      uVar19 = 0;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x15]);
      do {
        *(int *)((long)puVar21 + uVar19 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
    }
    uVar10 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22[-0x26] = PTR___NSConcreteStackBlock_11034bd00;
    puVar22[-0x25] = 0xc0000000;
    puVar22[-0x24] = 0x109088f68;
    puVar22[-0x23] = &UNK_110ad7208;
    puVar22[-0x22] = uVar1;
    puVar22[-0x21] = uVar2;
    puVar22[-0x20] = puVar22[-0x11];
    puVar22[-0x1f] = uVar9;
    *(float *)(puVar22 + -0x17) = fVar29;
    *(float *)((long)puVar22 + -0xb4) = fVar30;
    puVar22[-0x1e] = puVar22[-0x14];
    puVar22[-0x1d] = puVar13;
    puVar22[-0x1c] = uVar18;
    puVar22[-0x1b] = lVar25;
    puVar22[-0x1a] = uVar20;
    puVar22[-0x19] = puVar21;
    puVar22[-0x18] = puVar22[-0x27];
    puVar24 = puVar22 + -0x26;
    uVar8 = uVar10;
    _dispatch_apply(uVar14,uVar10,puVar24);
    uVar11 = uVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar22[-0x10]) {
      return;
    }
    ___stack_chk_fail();
    puVar21[-0xe] = (ulong)(uint)fVar30;
    puVar21[-0xd] = (ulong)(uint)fVar29;
    puVar21[-0xc] = uVar1;
    puVar21[-0xb] = uVar2;
    puVar21[-10] = lVar25;
    puVar21[-9] = uVar10;
    puVar21[-8] = uVar9;
    puVar21[-7] = uVar18;
    puVar21[-6] = puVar13;
    puVar21[-5] = uVar20;
    puVar21[-4] = uVar14;
    puVar21[-3] = puVar21;
    puVar21[-2] = puVar22 + -2;
    puVar21[-1] = 0x10908852c;
    puVar21[-0x2a] = param_8;
    puVar21[-0x2c] = puVar15;
    puVar21[-0x2b] = uVar6;
    uVar14 = puVar21[2];
    uVar2 = puVar21[3];
    uVar1 = *puVar21;
    uVar18 = puVar21[1];
    puVar21[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar8,puVar24,uVar14,uVar18,puVar21 + -0x11,puVar21 + -0x12,(long)puVar21 + -0x94)
    ;
    puVar15 = puVar21 + -0x14;
    puVar13 = puVar21 + -0x15;
    lVar25 = (long)puVar21 + -0xac;
    uVar20 = uVar18;
    FUN_10908b62c(puVar23,lVar17,uVar14);
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar17 = (long)puVar21 + (-0x160 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar22 = (undefined8 *)(lVar17 - extraout_x12_05);
      fVar30 = *(float *)((long)puVar21 + -0xac);
      fVar29 = *(float *)((long)puVar21 + -0x94);
    }
    else {
      uVar6 = 0;
      fVar29 = *(float *)((long)puVar21 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar21[-0x12]);
      do {
        *(int *)(lVar17 + uVar6 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
        uVar6 = uVar6 + 1;
      } while (uVar18 != uVar6);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar22 = (undefined8 *)(lVar17 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
      uVar6 = 0;
      fVar30 = *(float *)((long)puVar21 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar21[-0x15]);
      do {
        *(int *)((long)puVar22 + uVar6 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
        uVar6 = uVar6 + 1;
      } while (uVar18 != uVar6);
    }
    uVar7 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar21[-0x29] = PTR___NSConcreteStackBlock_11034bd00;
    puVar21[-0x28] = 0xc0000000;
    puVar21[-0x27] = 0x109089038;
    puVar21[-0x26] = &UNK_110ad7248;
    puVar21[-0x25] = uVar1;
    puVar21[-0x24] = uVar2;
    puVar21[-0x23] = uVar14;
    puVar21[-0x22] = uVar8;
    puVar21[-0x21] = puVar21[-0x11];
    puVar21[-0x20] = uVar11;
    puVar21[-0x1f] = puVar23;
    *(float *)(puVar21 + -0x17) = fVar29;
    *(float *)((long)puVar21 + -0xb4) = fVar30;
    puVar21[-0x1e] = puVar21[-0x14];
    puVar21[-0x1d] = puVar21[-0x2c];
    puVar21[-0x1c] = uVar18;
    puVar21[-0x1b] = lVar17;
    puVar21[-0x1a] = puVar21[-0x2b];
    puVar21[-0x19] = puVar22;
    puVar21[-0x18] = puVar21[-0x2a];
    puVar24 = puVar21 + -0x29;
    uVar10 = uVar7;
    _dispatch_apply(uVar14,uVar7,puVar24);
    uVar9 = uVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar21[-0x10]) {
      return;
    }
    ___stack_chk_fail();
    puVar22[-0xe] = (ulong)(uint)fVar30;
    puVar22[-0xd] = (ulong)(uint)fVar29;
    puVar22[-0xc] = uVar2;
    puVar22[-0xb] = uVar7;
    puVar22[-10] = uVar8;
    puVar22[-9] = uVar11;
    puVar22[-8] = uVar18;
    puVar22[-7] = puVar23;
    puVar22[-6] = puVar22;
    puVar22[-5] = lVar17;
    puVar22[-4] = uVar14;
    puVar22[-3] = uVar1;
    puVar22[-2] = puVar21 + -2;
    puVar22[-1] = 0x1090887d4;
    puVar22[-0x29] = param_8;
    puVar22[-0x2b] = puVar15;
    puVar22[-0x2a] = uVar20;
    uVar14 = puVar22[2];
    uVar2 = puVar22[3];
    uVar1 = *puVar22;
    uVar18 = puVar22[1];
    puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar10,puVar24,uVar14,uVar18,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94
                 );
    FUN_10908b62c(puVar13,lVar25,uVar14,uVar18,puVar22 + -0x14,puVar22 + -0x15,(long)puVar22 + -0xac
                 );
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar17 = (long)puVar22 + (-0x160 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar25 = lVar17 - extraout_x12_06;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      fVar29 = *(float *)((long)puVar22 + -0x94);
    }
    else {
      uVar20 = 0;
      fVar29 = *(float *)((long)puVar22 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x12]);
      do {
        *(int *)(lVar17 + uVar20 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
        uVar20 = uVar20 + 1;
      } while (uVar18 != uVar20);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar25 = lVar17 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
      uVar20 = 0;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x15]);
      do {
        *(int *)(lVar25 + uVar20 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
        uVar20 = uVar20 + 1;
      } while (uVar18 != uVar20);
    }
    uVar6 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22[-0x28] = PTR___NSConcreteStackBlock_11034bd00;
    puVar22[-0x27] = 0xc0000000;
    puVar22[-0x26] = 0x10908912c;
    puVar22[-0x25] = &UNK_110ad7268;
    puVar22[-0x24] = uVar1;
    puVar22[-0x23] = uVar2;
    puVar22[-0x22] = uVar10;
    puVar22[-0x21] = puVar22[-0x11];
    puVar22[-0x20] = uVar9;
    puVar22[-0x1f] = puVar13;
    *(float *)(puVar22 + -0x17) = fVar29;
    *(float *)((long)puVar22 + -0xb4) = fVar30;
    puVar22[-0x1e] = puVar22[-0x14];
    puVar22[-0x1d] = puVar22[-0x2b];
    puVar22[-0x1c] = uVar18;
    puVar22[-0x1b] = lVar17;
    puVar22[-0x1a] = puVar22[-0x2a];
    puVar22[-0x19] = lVar25;
    puVar22[-0x18] = puVar22[-0x29];
    uVar20 = uVar6;
    _dispatch_apply(uVar14,uVar6,puVar22 + -0x28);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != puVar22[-0x10]) {
      ___stack_chk_fail();
      if (*(long *)(uVar6 + 0x60) != 0) {
        *(ulong *)(lVar25 + -0x40) = uVar18;
        *(undefined8 **)(lVar25 + -0x38) = puVar13;
        *(long *)(lVar25 + -0x30) = lVar25;
        *(long *)(lVar25 + -0x28) = lVar17;
        *(undefined8 *)(lVar25 + -0x20) = uVar14;
        *(undefined8 *)(lVar25 + -0x18) = uVar1;
        *(undefined8 **)(lVar25 + -0x10) = puVar22 + -2;
        *(code **)(lVar25 + -8) = FUN_109088a74;
        uVar18 = 0;
        lVar17 = *(long *)(uVar6 + 0x20) + *(long *)(uVar6 + 0x28) * uVar20;
        fVar29 = *(float *)(uVar6 + 0x78);
        fVar30 = *(float *)(uVar6 + 0x7c);
        dVar27 = (double)NEON_ucvtf(*(undefined8 *)(uVar6 + 0x30));
        lVar25 = *(long *)(uVar6 + 0x38);
        lVar4 = *(long *)(uVar6 + 0x40);
        dVar26 = (double)NEON_ucvtf(*(undefined8 *)(uVar6 + 0x48));
        lVar3 = *(long *)(uVar6 + 0x50);
        lVar5 = *(long *)(uVar6 + 0x58);
        do {
          FUN_109088b48(lVar25 + lVar4 * (int)((float)(dVar27 + (double)fVar29 *
                                                                ((double)uVar20 + 0.5)) + -0.5) +
                        (long)*(int *)(*(long *)(uVar6 + 0x68) + uVar18 * 4),
                        lVar3 + lVar5 * (int)((float)(dVar26 + (double)fVar30 *
                                                               ((double)uVar20 + 0.5)) + -0.5) +
                        (long)*(int *)(*(long *)(uVar6 + 0x70) + uVar18 * 4) * 2,lVar17);
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 4;
        } while (uVar18 < *(ulong *)(uVar6 + 0x60));
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 109088a74; end: 109088b47;  */

void FUN_109088a74(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * param_2;
    fVar7 = *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 0x7c);
    dVar10 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    dVar9 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    lVar2 = *(long *)(param_1 + 0x50);
    lVar4 = *(long *)(param_1 + 0x58);
    do {
      FUN_109088b48(lVar1 + lVar3 * (int)((float)(dVar10 + (double)fVar7 * ((double)param_2 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x68) + uVar6 * 4),
                    lVar2 + lVar4 * (int)((float)(dVar9 + (double)fVar8 * ((double)param_2 + 0.5)) +
                                         -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x70) + uVar6 * 4) * 2,lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (uVar6 < *(ulong *)(param_1 + 0x60));
  }
  return;
}



/* Entry: 109088b48; end: 109088bf7;  */

void FUN_109088b48(byte *param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (uint)*param_2 * 0x1db + (uint)*param_1 * 0x100 + -0xed00;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  *param_3 = (char)uVar2;
  iVar1 = (0x80 - (uint)*param_2) * 0x30 + (uint)*param_1 * 0x100 + (0x80 - (uint)param_2[1]) * 0x77
          + 0x80;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  param_3[1] = (char)uVar2;
  iVar1 = (uint)param_2[1] * 0x192 + (uint)*param_1 * 0x100 + -0xc880;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  param_3[2] = (char)uVar2;
  param_3[3] = 0;
  return;
}



/* Entry: 109088bf8; end: 109089217;  */

void FUN_109088bf8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * param_2;
    fVar7 = *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 0x7c);
    dVar10 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    dVar9 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    lVar2 = *(long *)(param_1 + 0x50);
    lVar4 = *(long *)(param_1 + 0x58);
    do {
      FUN_109088b48(lVar1 + lVar3 * (int)((float)(dVar10 + (double)fVar7 * ((double)param_2 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x68) + uVar6 * 4),
                    lVar2 + lVar4 * (int)((float)(dVar9 + (double)fVar8 * ((double)param_2 + 0.5)) +
                                         -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x70) + uVar6 * 4) * 2,lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (uVar6 < *(ulong *)(param_1 + 0x60));
  }
  return;
}



/* Entry: 109089218; end: 10908926b; +[SCImageProcessIdentityYUVCommand sharedCommand] */

void FUN_109089218(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730900 != -1) {
    func_0x000107c27d9c(0x113730900,&PTR___NSConcreteGlobalBlock_110ad7288);
  }
  uVar1 = uRam0000000113730908;
  _objc_retain(uRam0000000113730908);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908926c; end: 109089297;  */

void FUN_10908926c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf440;
  _objc_alloc_init();
  uVar1 = puRam0000000113730908;
  puRam0000000113730908 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109089298; end: 10908933b; -[SCImageProcessIdentityYUVCommand init] */

undefined1 * FUN_109089298(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  func_0x00010c060ac0();
  puStack_38 = PTR_PTR_112700378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithProgram__11253a1b0,puVar1);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10908933c; end: 109089483; -[SCImageProcessIdentityYUVCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10908933c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  long lVar4;
  
  plVar2 = &lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700378;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if (((ulong)plVar2 & 1) != 0) {
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780fec) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780ff0) = uVar1;
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar4;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_112780ff4) = uVar1;
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)plVar2;
}



/* Entry: 109089484; end: 10908964b; -[SCImageProcessIdentityYUVCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_109089484(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(in_stack_00000010);
  lVar2 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,4,lVar2,in_stack_00000018);
  _objc_release(lVar2);
  if ((param_6 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(lVar2);
    _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780fec),0);
    _glUniform1i(*(undefined4 *)(param_3 + _DAT_112780ff0),1);
    uVar1 = *(undefined4 *)(param_3 + _DAT_112780ff4);
    lVar2 = param_3;
    func_0x00010bde8e80(param_3);
    _glUniformMatrix3fv(uVar1,1,0,lVar2);
    func_0x00010bf89d00(param_1,param_2);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if ((int)param_3 == 0) {
      puVar3 = (undefined *)0x0;
    }
  }
  _objc_release(in_stack_00000010);
  return puVar3;
}



/* Entry: 10908964c; end: 109089657; -[SCImageProcessIdentityYUVCommand _conversionMatrix] */

undefined * FUN_10908964c(void)

{
  return &UNK_10dfb2b20;
}



/* Entry: 109089658; end: 109089663; -[SCImageProcessIdentityYUVCommand commandName] */

undefined ** FUN_109089658(void)

{
  return &PTR____CFConstantStringClassReference_110f1f278;
}



/* Entry: 109089664; end: 10908966b; -[SCImageProcessIdentityYUVCommand inputConstraint] */

undefined8 FUN_109089664(void)

{
  return 2;
}



/* Entry: 10908966c; end: 10908969f; -[SCImageProcessIdentityYUVCommand isEqual:] */

void FUN_10908966c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700378;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 1090896a0; end: 1090896f3; +[SCImageProcessCPUIdentityYUVBGRCommand sharedCommand] */

void FUN_1090896a0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730910 != -1) {
    func_0x000107c27d9c(0x113730910,&PTR___NSConcreteGlobalBlock_110ad72a8);
  }
  uVar1 = uRam0000000113730918;
  _objc_retain(uRam0000000113730918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090896f4; end: 10908971f;  */

void FUN_1090896f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c40b8;
  _objc_alloc_init();
  uVar1 = puRam0000000113730918;
  puRam0000000113730918 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109089720; end: 109089927; -[SCImageProcessCPUIdentityYUVBGRCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

undefined *
FUN_109089720(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _CVPixelBufferLockBaseAddress(param_4,0);
  _CVPixelBufferLockBaseAddress(param_5,0);
  uVar1 = param_4;
  _CVPixelBufferGetWidthOfPlane(param_4,0);
  uVar2 = param_4;
  _CVPixelBufferGetHeightOfPlane(param_4,0);
  uVar3 = param_4;
  _CVPixelBufferGetBytesPerRowOfPlane(param_4,0);
  _CVPixelBufferGetBaseAddressOfPlane(param_4,0);
  uVar4 = param_4;
  _CVPixelBufferGetWidthOfPlane(param_4,1);
  uVar5 = param_4;
  _CVPixelBufferGetHeightOfPlane(param_4,1);
  uVar6 = param_4;
  _CVPixelBufferGetBytesPerRowOfPlane(param_4,1);
  _CVPixelBufferGetBaseAddressOfPlane(param_4,1);
  uVar7 = param_5;
  _CVPixelBufferGetWidth();
  uVar8 = param_5;
  _CVPixelBufferGetHeight();
  uVar9 = param_5;
  _CVPixelBufferGetBytesPerRow();
  _CVPixelBufferGetBaseAddress();
  uVar10 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079fec(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,100,4,uVar10,param_7);
  _objc_release(uVar10);
  if ((uVar1 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010be81d00(param_1);
    _CVPixelBufferUnlockBaseAddress(param_5,0);
    _CVPixelBufferUnlockBaseAddress(param_4,0);
    puVar11 = PTR____NSDictionary0__struct_11034ab58;
  }
  return puVar11;
}



/* Entry: 109089928; end: 109089a9b; -[SCImageProcessCPUIdentityYUVBGRCommand _processPixelBufferWithOrientation:yInPtr:yWidth:yHeight:yBytesPerRow:uvInPtr:uvWidth:uvHeight:uvBytesPerRow:outPtr:outWidth:outHeight:outBytesPerRow:] */

void FUN_109089928(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined **param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,float *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar20;
  ulong uVar21;
  undefined8 *unaff_x22;
  long lVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  ulong unaff_d8;
  float fVar27;
  ulong unaff_d9;
  int aiStack_140 [2];
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar10 = param_15;
  puVar9 = param_14;
  puVar16 = param_13;
  uVar1 = param_12;
  uVar13 = param_11;
  pfVar11 = param_10;
  puVar18 = param_9;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        unaff_x29 = (undefined8 *)&stack0xfffffffffffffff0;
        uStack_138 = uVar13;
        lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_10908b62c(param_5,param_6,param_13,param_14,&uStack_88,&uStack_90,&fStack_94);
        puVar6 = &uStack_a0;
        puVar14 = &uStack_a8;
        pfVar12 = &fStack_ac;
        puVar17 = puVar9;
        FUN_10908b62c(puVar18,pfVar11,puVar16);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar16 << 2);
        unaff_x26 = (undefined8 *)((long)aiStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12);
        unaff_d9 = (ulong)(uint)fStack_94;
        unaff_d8 = (ulong)(uint)fStack_ac;
        if (puVar16 != (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
          dVar23 = (double)NEON_ucvtf(uStack_88);
          dVar24 = (double)NEON_ucvtf(uStack_a0);
          do {
            dVar25 = (double)((ulong)puVar18 & 0xffffffff) + 0.5;
            *(int *)((long)unaff_x26 + (long)puVar18 * 4) =
                 (int)((float)(dVar23 + (double)fStack_94 * dVar25) + -0.5);
            *(int *)(unaff_x19 + (long)puVar18 * 4) =
                 (int)((float)(dVar24 + (double)fStack_ac * dVar25) + -0.5);
            puVar18 = (undefined8 *)((long)puVar18 + 1);
          } while (puVar16 != puVar18);
        }
        unaff_x25 = (undefined8 *)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc0000000;
        pcStack_120 = FUN_10908ae88;
        puStack_118 = &UNK_110ad7208;
        uStack_110 = uVar1;
        puStack_108 = puVar10;
        uStack_100 = uStack_90;
        fStack_b8 = fStack_94;
        fStack_b4 = fStack_ac;
        uStack_e8 = uStack_a8;
        uStack_d8 = uStack_138;
        puStack_d0 = puVar16;
        param_6 = &puStack_130;
        param_5 = unaff_x25;
        puStack_f8 = param_4;
        puStack_f0 = param_7;
        puStack_e0 = param_8;
        puStack_c8 = unaff_x26;
        puStack_c0 = unaff_x19;
        _dispatch_apply(puVar9,unaff_x25,param_6);
        puVar15 = unaff_x25;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
          return;
        }
        unaff_x30 = 0x109089d00;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)unaff_x19;
        puVar18 = puVar14;
        pfVar11 = pfVar12;
        unaff_x20 = puVar9;
        unaff_x21 = param_8;
        unaff_x22 = param_7;
        unaff_x23 = puVar16;
        unaff_x24 = param_4;
        unaff_x27 = puVar10;
        unaff_x28 = uVar1;
LAB_109089d00:
        *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
        *(undefined8 **)((long)register0x00000008 + -0x140) = puVar6;
        unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
        unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
        unaff_x19 = *(undefined1 **)register0x00000008;
        unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        FUN_10908b62c(param_5,param_6,unaff_x23,unaff_x20,
                      (undefined8 *)((long)register0x00000008 + -0x88),
                      (undefined8 *)((long)register0x00000008 + -0x90),
                      (long)register0x00000008 + -0x94);
        puVar10 = (undefined8 *)((long)register0x00000008 + -0xa0);
        puVar6 = (undefined8 *)((long)register0x00000008 + -0xa8);
        pfVar12 = (float *)((long)register0x00000008 + -0xac);
        puVar9 = unaff_x20;
        FUN_10908b62c(puVar18,pfVar11,unaff_x23,unaff_x20,puVar10,puVar6,pfVar12);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
        unaff_x27 = (undefined8 *)
                    ((long)register0x00000008 +
                    (-0x140 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar16 = (undefined8 *)((long)unaff_x27 - extraout_x12_00);
        fVar27 = *(float *)((long)register0x00000008 + -0x94);
        unaff_d9 = (ulong)(uint)fVar27;
        fVar26 = *(float *)((long)register0x00000008 + -0xac);
        unaff_d8 = (ulong)(uint)fVar26;
        if (unaff_x23 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x88));
          dVar24 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa0));
          do {
            dVar25 = (double)((ulong)puVar14 & 0xffffffff) + 0.5;
            *(int *)((long)unaff_x27 + (long)puVar14 * 4) =
                 (int)(((float)param_5 - (float)(dVar23 + (double)fVar27 * dVar25)) + -0.5);
            *(int *)((long)puVar16 + (long)puVar14 * 4) =
                 (int)(((float)puVar18 - (float)(dVar24 + (double)fVar26 * dVar25)) + -0.5);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (unaff_x23 != puVar14);
        }
        unaff_x25 = (undefined8 *)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc0000000;
        *(code **)((long)register0x00000008 + -0x120) = FUN_10908b00c;
        *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110ad7208;
        *(undefined1 **)((long)register0x00000008 + -0x110) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar15;
        *(float *)((long)register0x00000008 + -0xb8) = fVar27;
        *(float *)((long)register0x00000008 + -0xb4) = fVar26;
        *(undefined8 **)((long)register0x00000008 + -0xf0) = puVar17;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0x140);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0x138);
        *(undefined8 **)((long)register0x00000008 + -0xd0) = unaff_x23;
        *(undefined8 **)((long)register0x00000008 + -200) = unaff_x27;
        *(undefined8 **)((long)register0x00000008 + -0xc0) = puVar16;
        param_6 = (undefined **)((long)register0x00000008 + -0x130);
        puVar8 = unaff_x25;
        _dispatch_apply(unaff_x20,unaff_x25,param_6);
        puVar14 = unaff_x25;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)
           ) {
          return;
        }
        unaff_x30 = 0x109089f44;
        ___stack_chk_fail();
        unaff_x21 = puVar16;
      }
      else {
        if (param_3 != 1) {
          return;
        }
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        puVar16 = (undefined8 *)register0x00000008;
        puVar14 = param_4;
        puVar8 = param_5;
        puVar9 = param_7;
        puVar10 = param_8;
        puVar6 = puVar18;
        pfVar12 = pfVar11;
        puVar17 = unaff_x22;
        puVar15 = unaff_x24;
        param_5 = unaff_x26;
      }
      puVar16[-0xe] = unaff_d9;
      puVar16[-0xd] = unaff_d8;
      puVar16[-0xc] = unaff_x28;
      puVar16[-0xb] = unaff_x27;
      puVar16[-10] = param_5;
      puVar16[-9] = unaff_x25;
      puVar16[-8] = puVar15;
      puVar16[-7] = unaff_x23;
      puVar16[-6] = puVar17;
      puVar16[-5] = unaff_x21;
      puVar16[-4] = unaff_x20;
      puVar16[-3] = unaff_x19;
      puVar16[-2] = unaff_x29;
      puVar16[-1] = unaff_x30;
      unaff_x29 = puVar16 + -2;
      puVar16[-0x28] = uVar13;
      unaff_x20 = (undefined8 *)puVar16[2];
      unaff_x27 = (undefined8 *)puVar16[3];
      unaff_x28 = *puVar16;
      unaff_x23 = (undefined8 *)puVar16[1];
      puVar16[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(puVar8,param_6,unaff_x23,unaff_x20,puVar16 + -0x11,puVar16 + -0x12,
                    (long)puVar16 + -0x94);
      param_8 = puVar16 + -0x14;
      puVar18 = puVar16 + -0x15;
      pfVar11 = (float *)((long)puVar16 + -0xac);
      param_7 = unaff_x20;
      FUN_10908b62c(puVar6,pfVar12,unaff_x23);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
      unaff_x26 = (undefined8 *)
                  ((long)puVar16 + (-0x140 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x23 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        register0x00000008 = (BADSPACEBASE *)((long)unaff_x26 - extraout_x12_01);
        fVar27 = *(float *)((long)puVar16 + -0xac);
        fVar26 = *(float *)((long)puVar16 + -0x94);
      }
      else {
        puVar15 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)puVar16 + -0x94);
        dVar23 = (double)NEON_ucvtf(puVar16[-0x11]);
        do {
          *(int *)((long)unaff_x26 + (long)puVar15 * 4) =
               (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar15 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (unaff_x23 != puVar15);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        register0x00000008 =
             (BADSPACEBASE *)((long)unaff_x26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
        puVar15 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)puVar16 + -0xac);
        dVar23 = (double)NEON_ucvtf(puVar16[-0x14]);
        do {
          *(int *)((long)register0x00000008 + (long)puVar15 * 4) =
               (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar15 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (unaff_x23 != puVar15);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puVar16[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
      puVar16[-0x26] = 0xc0000000;
      puVar16[-0x25] = 0x10908b0e0;
      puVar16[-0x24] = &UNK_110ad7228;
      puVar16[-0x23] = unaff_x28;
      puVar16[-0x22] = unaff_x27;
      puVar16[-0x21] = unaff_x20;
      puVar16[-0x20] = puVar16[-0x12];
      puVar16[-0x1f] = puVar14;
      *(float *)(puVar16 + -0x17) = fVar26;
      *(float *)((long)puVar16 + -0xb4) = fVar27;
      puVar16[-0x1e] = puVar9;
      puVar16[-0x1d] = puVar16[-0x15];
      puVar16[-0x1c] = puVar10;
      puVar16[-0x1b] = puVar16[-0x28];
      puVar16[-0x1a] = unaff_x23;
      puVar16[-0x19] = unaff_x26;
      puVar16[-0x18] = register0x00000008;
      param_6 = (undefined **)(puVar16 + -0x27);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      param_4 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar16[-0x10]) {
        return;
      }
      unaff_x30 = 0x10908a1c0;
      ___stack_chk_fail();
      unaff_x19 = (undefined1 *)register0x00000008;
      unaff_x21 = puVar10;
      unaff_x22 = puVar9;
      unaff_x24 = puVar14;
LAB_10908a1c0:
      *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
      unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
      unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
      unaff_x19 = *(undefined1 **)register0x00000008;
      unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(param_5,param_6,unaff_x23,unaff_x20,
                    (undefined8 *)((long)register0x00000008 + -0x88),
                    (undefined8 *)((long)register0x00000008 + -0x90),
                    (undefined1 *)((long)register0x00000008 + -0x94));
      puVar15 = (undefined8 *)((long)register0x00000008 + -0xa0);
      puVar17 = (undefined8 *)((long)register0x00000008 + -0xa8);
      pfVar12 = (float *)((long)register0x00000008 + -0xac);
      puVar10 = unaff_x20;
      FUN_10908b62c(puVar18,pfVar11,unaff_x23,unaff_x20,puVar15,puVar17,pfVar12);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
      unaff_x27 = (undefined8 *)
                  ((long)register0x00000008 +
                  (-0x140 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x23 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x26 = (undefined8 *)((long)unaff_x27 - extraout_x12_02);
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
      }
      else {
        puVar16 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x88));
        do {
          *(int *)((long)unaff_x27 + (long)puVar16 * 4) =
               (int)(((float)param_5 -
                     (float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)
                            )) + -0.5);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (unaff_x23 != puVar16);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x26 = (undefined8 *)((long)unaff_x27 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
        puVar16 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa0));
        do {
          *(int *)((long)unaff_x26 + (long)puVar16 * 4) =
               (int)(((float)puVar18 -
                     (float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)
                            )) + -0.5);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (unaff_x23 != puVar16);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0xc0000000;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0x10908b1c0;
      *(undefined **)((long)register0x00000008 + -0x120) = &UNK_110ad7228;
      *(undefined1 **)((long)register0x00000008 + -0x118) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 **)((long)register0x00000008 + -0xf8) = param_4;
      *(float *)((long)register0x00000008 + -0xb8) = fVar26;
      *(float *)((long)register0x00000008 + -0xb4) = fVar27;
      *(undefined8 **)((long)register0x00000008 + -0xf0) = param_7;
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 **)((long)register0x00000008 + -0xe0) = param_8;
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x140);
      *(undefined8 **)((long)register0x00000008 + -0xd0) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -200) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0xc0) = unaff_x26;
      param_6 = (undefined **)((long)register0x00000008 + -0x138);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      puVar6 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      {
        return;
      }
      unaff_x30 = 0x10908a450;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x26;
      unaff_x21 = param_8;
      unaff_x22 = param_7;
      unaff_x24 = param_4;
LAB_10908a450:
      *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
      unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
      unaff_x27 = *(undefined8 **)((long)register0x00000008 + 0x18);
      unaff_x28 = *(undefined8 *)register0x00000008;
      unaff_x24 = *(undefined8 **)((long)register0x00000008 + 8);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      FUN_10908b62c(param_5,param_6,unaff_x20,unaff_x24,
                    (undefined8 *)((long)register0x00000008 + -0x88),
                    (undefined8 *)((long)register0x00000008 + -0x90),
                    (long)register0x00000008 + -0x94);
      puVar9 = (undefined8 *)((long)register0x00000008 + -0xa0);
      puVar18 = (undefined8 *)((long)register0x00000008 + -0xa8);
      pfVar11 = (float *)((long)register0x00000008 + -0xac);
      puVar16 = unaff_x24;
      FUN_10908b62c(puVar17,pfVar12,unaff_x20,unaff_x24,puVar9,puVar18,pfVar11);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x24 << 2);
      unaff_x26 = (undefined8 *)
                  ((long)register0x00000008 +
                  (-0x140 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0)));
      if (unaff_x24 == (undefined8 *)0x0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12_03);
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
      }
      else {
        puVar17 = (undefined8 *)0x0;
        fVar26 = *(float *)((long)register0x00000008 + -0x94);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
        do {
          *(int *)((long)unaff_x26 + (long)puVar17 * 4) =
               (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar17 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (unaff_x24 != puVar17);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        unaff_x19 = (undefined1 *)((long)unaff_x26 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
        puVar17 = (undefined8 *)0x0;
        fVar27 = *(float *)((long)register0x00000008 + -0xac);
        dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
        do {
          *(int *)(unaff_x19 + (long)puVar17 * 4) =
               (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar17 & 0xffffffff) + 0.5)
                            ) + -0.5);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (unaff_x24 != puVar17);
      }
      unaff_d9 = (ulong)(uint)fVar27;
      unaff_d8 = (ulong)(uint)fVar26;
      unaff_x25 = (undefined8 *)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0xc0000000;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0x10908b2a0;
      *(undefined **)((long)register0x00000008 + -0x120) = &UNK_110ad7228;
      *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x28;
      *(undefined8 **)((long)register0x00000008 + -0x110) = unaff_x27;
      *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar6;
      *(float *)((long)register0x00000008 + -0xb8) = fVar26;
      *(float *)((long)register0x00000008 + -0xb4) = fVar27;
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar15;
      *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x26;
      *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar10;
      *(undefined1 **)((long)register0x00000008 + -200) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x140);
      param_6 = (undefined **)((long)register0x00000008 + -0x138);
      param_5 = unaff_x25;
      _dispatch_apply(unaff_x20,unaff_x25,param_6);
      param_4 = unaff_x25;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      {
        return;
      }
      unaff_x30 = 0x10908a6cc;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x19;
      unaff_x21 = puVar10;
      unaff_x22 = puVar15;
      unaff_x23 = puVar6;
      goto LAB_10908a6cc;
    }
    if (param_3 == 2) {
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      puVar6 = param_4;
      puVar10 = param_7;
      puVar15 = param_8;
      puVar17 = puVar18;
      pfVar12 = pfVar11;
      goto LAB_10908a450;
    }
    if (param_3 != 3) {
      return;
    }
    param_11 = param_14;
    param_12 = param_15;
    param_9 = (undefined8 *)uVar1;
    param_10 = (float *)param_13;
    puVar15 = param_4;
    puVar17 = param_5;
    puVar10 = puVar18;
    pfVar12 = pfVar11;
  }
  else {
    if (param_3 < 6) {
      if (param_3 == 4) {
        param_11 = param_14;
        param_12 = param_15;
        param_9 = (undefined8 *)uVar1;
        param_10 = (float *)param_13;
        puVar15 = param_4;
        puVar17 = param_7;
        puVar6 = param_8;
        goto LAB_109089d00;
      }
      if (param_3 != 5) {
        return;
      }
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      goto LAB_10908a1c0;
    }
    if (param_3 != 6) {
      if (param_3 != 7) {
        return;
      }
      param_11 = param_14;
      param_12 = param_15;
      param_9 = (undefined8 *)uVar1;
      param_10 = (float *)param_13;
      goto LAB_10908abe8;
    }
    param_11 = param_14;
    param_12 = param_15;
    param_9 = (undefined8 *)uVar1;
    param_10 = (float *)param_13;
    puVar16 = param_7;
    puVar9 = param_8;
LAB_10908a6cc:
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
    unaff_x27 = *(undefined8 **)((long)register0x00000008 + 0x18);
    unaff_x28 = *(undefined8 *)register0x00000008;
    unaff_x23 = *(undefined8 **)((long)register0x00000008 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(param_5,param_6,unaff_x20,unaff_x23,
                  (undefined8 *)((long)register0x00000008 + -0x88),
                  (undefined8 *)((long)register0x00000008 + -0x90),
                  (undefined1 *)((long)register0x00000008 + -0x94));
    param_8 = (undefined8 *)((long)register0x00000008 + -0xa0);
    puVar10 = (undefined8 *)((long)register0x00000008 + -0xa8);
    pfVar12 = (float *)((long)register0x00000008 + -0xac);
    param_7 = unaff_x23;
    FUN_10908b62c(puVar18,pfVar11,unaff_x20);
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x23 << 2);
    unaff_x26 = (undefined8 *)
                ((long)register0x00000008 + (-0x140 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0)))
    ;
    if (unaff_x23 == (undefined8 *)0x0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      unaff_x19 = (undefined1 *)((long)unaff_x26 - extraout_x12_04);
      fVar27 = *(float *)((long)register0x00000008 + -0xac);
      fVar26 = *(float *)((long)register0x00000008 + -0x94);
    }
    else {
      puVar18 = (undefined8 *)0x0;
      fVar26 = *(float *)((long)register0x00000008 + -0x94);
      dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
      do {
        *(int *)((long)unaff_x26 + (long)puVar18 * 4) =
             (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar18 & 0xffffffff) + 0.5))
                  + -0.5);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (unaff_x23 != puVar18);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      unaff_x19 = (undefined1 *)((long)unaff_x26 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
      puVar18 = (undefined8 *)0x0;
      fVar27 = *(float *)((long)register0x00000008 + -0xac);
      dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
      do {
        *(int *)(unaff_x19 + (long)puVar18 * 4) =
             (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar18 & 0xffffffff) + 0.5))
                  + -0.5);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (unaff_x23 != puVar18);
    }
    unaff_d9 = (ulong)(uint)fVar27;
    unaff_d8 = (ulong)(uint)fVar26;
    unaff_x25 = (undefined8 *)0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc0000000;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x10908b37c;
    *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110ad7208;
    *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x108) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 **)((long)register0x00000008 + -0xf8) = param_4;
    *(float *)((long)register0x00000008 + -0xb8) = fVar26;
    *(float *)((long)register0x00000008 + -0xb4) = fVar27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar9;
    *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x26;
    *(undefined8 **)((long)register0x00000008 + -0xd0) = puVar16;
    *(undefined1 **)((long)register0x00000008 + -200) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x138);
    param_6 = (undefined **)((long)register0x00000008 + -0x130);
    puVar17 = unaff_x25;
    _dispatch_apply(unaff_x20,unaff_x25,param_6);
    puVar15 = unaff_x25;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      return;
    }
    unaff_x30 = 0x10908a940;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)unaff_x19;
    unaff_x21 = puVar16;
    unaff_x22 = puVar9;
    unaff_x24 = param_4;
  }
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar13;
  *(undefined8 **)((long)register0x00000008 + -0x160) = param_8;
  *(undefined8 **)((long)register0x00000008 + -0x158) = param_7;
  unaff_x20 = *(undefined8 **)((long)register0x00000008 + 0x10);
  unaff_x28 = *(undefined8 *)((long)register0x00000008 + 0x18);
  unaff_x19 = *(undefined1 **)register0x00000008;
  unaff_x24 = *(undefined8 **)((long)register0x00000008 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(puVar17,param_6,unaff_x20,unaff_x24,(undefined8 *)((long)register0x00000008 + -0x88)
                ,(undefined8 *)((long)register0x00000008 + -0x90),(long)register0x00000008 + -0x94);
  param_8 = (undefined8 *)((long)register0x00000008 + -0xa0);
  puVar18 = (undefined8 *)((long)register0x00000008 + -0xa8);
  pfVar11 = (float *)((long)register0x00000008 + -0xac);
  param_7 = unaff_x24;
  FUN_10908b62c(puVar10,pfVar12,unaff_x20);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)unaff_x24 << 2);
  unaff_x21 = (undefined8 *)
              ((long)register0x00000008 + (-0x160 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0)));
  if (unaff_x24 == (undefined8 *)0x0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x22 = (undefined8 *)((long)unaff_x21 - extraout_x12_05);
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
  }
  else {
    puVar16 = (undefined8 *)0x0;
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
    do {
      *(int *)((long)unaff_x21 + (long)puVar16 * 4) =
           (int)((float)(dVar23 + (double)fVar26 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (unaff_x24 != puVar16);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x22 = (undefined8 *)((long)unaff_x21 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
    puVar16 = (undefined8 *)0x0;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
    do {
      *(int *)((long)unaff_x22 + (long)puVar16 * 4) =
           (int)((float)(dVar23 + (double)fVar27 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar16 = (undefined8 *)((long)puVar16 + 1);
    } while (unaff_x24 != puVar16);
  }
  unaff_d9 = (ulong)(uint)fVar27;
  unaff_d8 = (ulong)(uint)fVar26;
  unaff_x27 = (undefined8 *)0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)register0x00000008 + -0x148) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0xc0000000;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0x10908b44c;
  *(undefined **)((long)register0x00000008 + -0x130) = &UNK_110ad7248;
  *(undefined1 **)((long)register0x00000008 + -0x128) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x110) = puVar17;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 **)((long)register0x00000008 + -0x100) = puVar15;
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar10;
  *(float *)((long)register0x00000008 + -0xb8) = fVar26;
  *(float *)((long)register0x00000008 + -0xb4) = fVar27;
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0x160);
  *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x158);
  *(undefined8 **)((long)register0x00000008 + -200) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xc0) =
       *(undefined8 *)((long)register0x00000008 + -0x150);
  param_6 = (undefined **)((long)register0x00000008 + -0x148);
  param_5 = unaff_x27;
  _dispatch_apply(unaff_x20,unaff_x27,param_6);
  param_4 = unaff_x27;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
    return;
  }
  unaff_x30 = 0x10908abe8;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)unaff_x22;
  unaff_x23 = puVar10;
  unaff_x25 = puVar15;
  unaff_x26 = puVar17;
LAB_10908abe8:
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x148) = uVar13;
  *(undefined8 **)((long)register0x00000008 + -0x158) = param_8;
  *(undefined8 **)((long)register0x00000008 + -0x150) = param_7;
  uVar13 = *(undefined8 *)((long)register0x00000008 + 0x10);
  uVar3 = *(undefined8 *)((long)register0x00000008 + 0x18);
  uVar1 = *(undefined8 *)register0x00000008;
  uVar21 = *(ulong *)((long)register0x00000008 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(param_5,param_6,uVar13,uVar21,(undefined8 *)((long)register0x00000008 + -0x88),
                (undefined8 *)((long)register0x00000008 + -0x90),(long)register0x00000008 + -0x94);
  FUN_10908b62c(puVar18,pfVar11,uVar13,uVar21,(undefined8 *)((long)register0x00000008 + -0xa0),
                (undefined8 *)((long)register0x00000008 + -0xa8),(long)register0x00000008 + -0xac);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar21 << 2);
  lVar20 = (long)register0x00000008 + (-0x160 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
  if (uVar21 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = lVar20 - extraout_x12_06;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
  }
  else {
    uVar19 = 0;
    fVar26 = *(float *)((long)register0x00000008 + -0x94);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x90));
    do {
      *(int *)(lVar20 + uVar19 * 4) =
           (int)((float)(dVar23 + (double)fVar26 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar21 != uVar19);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = lVar20 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
    uVar19 = 0;
    fVar27 = *(float *)((long)register0x00000008 + -0xac);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xa8));
    do {
      *(int *)(lVar22 + uVar19 * 4) =
           (int)((float)(dVar23 + (double)fVar27 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar21 != uVar19);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)register0x00000008 + -0x140) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0xc0000000;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x10908b540;
  *(undefined **)((long)register0x00000008 + -0x128) = &UNK_110ad7268;
  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar1;
  *(undefined8 *)((long)register0x00000008 + -0x118) = uVar3;
  *(undefined8 **)((long)register0x00000008 + -0x110) = param_5;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 **)((long)register0x00000008 + -0x100) = param_4;
  *(undefined8 **)((long)register0x00000008 + -0xf8) = puVar18;
  *(float *)((long)register0x00000008 + -0xb8) = fVar26;
  *(float *)((long)register0x00000008 + -0xb4) = fVar27;
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0x158);
  *(ulong *)((long)register0x00000008 + -0xe0) = uVar21;
  *(long *)((long)register0x00000008 + -0xd8) = lVar20;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x150);
  *(long *)((long)register0x00000008 + -200) = lVar22;
  *(undefined8 *)((long)register0x00000008 + -0xc0) =
       *(undefined8 *)((long)register0x00000008 + -0x148);
  uVar19 = uVar7;
  _dispatch_apply(uVar13,uVar7,(undefined8 *)((long)register0x00000008 + -0x140));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar7 + 0x60) != 0) {
    *(ulong *)(lVar22 + -0x40) = uVar21;
    *(undefined8 **)(lVar22 + -0x38) = puVar18;
    *(long *)(lVar22 + -0x30) = lVar22;
    *(long *)(lVar22 + -0x28) = lVar20;
    *(undefined8 *)(lVar22 + -0x20) = uVar13;
    *(undefined8 *)(lVar22 + -0x18) = uVar1;
    *(undefined8 **)(lVar22 + -0x10) = (undefined8 *)((long)register0x00000008 + -0x10);
    *(code **)(lVar22 + -8) = FUN_10908ae88;
    uVar21 = 0;
    lVar20 = *(long *)(uVar7 + 0x20) + *(long *)(uVar7 + 0x28) * uVar19;
    fVar26 = *(float *)(uVar7 + 0x78);
    fVar27 = *(float *)(uVar7 + 0x7c);
    dVar24 = (double)NEON_ucvtf(*(undefined8 *)(uVar7 + 0x30));
    lVar22 = *(long *)(uVar7 + 0x38);
    lVar4 = *(long *)(uVar7 + 0x40);
    dVar23 = (double)NEON_ucvtf(*(undefined8 *)(uVar7 + 0x48));
    lVar2 = *(long *)(uVar7 + 0x50);
    lVar5 = *(long *)(uVar7 + 0x58);
    do {
      FUN_10908af5c(lVar22 + lVar4 * (int)((float)(dVar24 + (double)fVar26 * ((double)uVar19 + 0.5))
                                          + -0.5) +
                    (long)*(int *)(*(long *)(uVar7 + 0x68) + uVar21 * 4),
                    lVar2 + lVar5 * (int)((float)(dVar23 + (double)fVar27 * ((double)uVar19 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(uVar7 + 0x70) + uVar21 * 4) * 2,lVar20);
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 4;
    } while (uVar21 < *(ulong *)(uVar7 + 0x60));
  }
  return;
}



/* Entry: 109089a9c; end: 109089aa7; -[SCImageProcessCPUIdentityYUVBGRCommand commandName] */

undefined ** FUN_109089a9c(void)

{
  return &PTR____CFConstantStringClassReference_110f1f298;
}



/* Entry: 109089aa8; end: 109089adb; -[SCImageProcessCPUIdentityYUVBGRCommand isEqual:] */

void FUN_109089aa8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112700380;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_baseisEqual__11253a1b8);
  return;
}



/* Entry: 109089adc; end: 10908ae87;  */

void FUN_109089adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code **ppcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  long lVar17;
  long extraout_x8;
  ulong uVar18;
  long extraout_x8_00;
  ulong uVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  int aiStack_3c0 [2];
  ulong auStack_3b8 [16];
  float afStack_338 [3];
  float fStack_32c;
  undefined8 auStack_328 [2];
  float fStack_314;
  long alStack_310 [18];
  int aiStack_280 [2];
  ulong auStack_278 [16];
  float afStack_1f8 [3];
  float fStack_1ec;
  undefined8 auStack_1e8 [2];
  float fStack_1d4;
  long alStack_1d0 [18];
  int aiStack_140 [2];
  ulong uStack_138;
  code *apcStack_130 [5];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = param_8;
  FUN_10908b62c(param_2,param_3,param_10,param_11,&uStack_88,&uStack_90,&fStack_94);
  puVar15 = &uStack_a0;
  puVar13 = &uStack_a8;
  pfVar16 = &fStack_ac;
  uVar14 = param_11;
  FUN_10908b62c(param_6,param_7,param_10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_10 << 2);
  lVar17 = (long)aiStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar17 - extraout_x12);
  if (param_10 != 0) {
    uVar18 = 0;
    dVar26 = (double)NEON_ucvtf(uStack_88);
    dVar27 = (double)NEON_ucvtf(uStack_a0);
    do {
      dVar28 = (double)(uVar18 & 0xffffffff) + 0.5;
      *(int *)(lVar17 + uVar18 * 4) = (int)((float)(dVar26 + (double)fStack_94 * dVar28) + -0.5);
      *(int *)((long)puVar21 + uVar18 * 4) =
           (int)((float)(dVar27 + (double)fStack_ac * dVar28) + -0.5);
      uVar18 = uVar18 + 1;
    } while (param_10 != uVar18);
  }
  uVar6 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  apcStack_130[0] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  apcStack_130[1] = (code *)0xc0000000;
  apcStack_130[2] = FUN_10908ae88;
  apcStack_130[3] = (code *)&UNK_110ad7208;
  apcStack_130[4] = (code *)param_9;
  uStack_108 = param_12;
  uStack_100 = uStack_90;
  fStack_b8 = fStack_94;
  fStack_b4 = fStack_ac;
  uStack_e8 = uStack_a8;
  uStack_d8 = uStack_138;
  uStack_d0 = param_10;
  ppcVar12 = apcStack_130;
  uVar20 = uVar6;
  uStack_f8 = param_1;
  uStack_f0 = param_4;
  uStack_e0 = param_5;
  lStack_c8 = lVar17;
  puStack_c0 = puVar21;
  _dispatch_apply(param_11,uVar6,ppcVar12);
  uVar18 = uVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar21[-0xe] = (ulong)(uint)fStack_94;
  puVar21[-0xd] = (ulong)(uint)fStack_ac;
  puVar21[-0xc] = param_9;
  puVar21[-0xb] = param_12;
  puVar21[-10] = lVar17;
  puVar21[-9] = uVar6;
  puVar21[-8] = param_1;
  puVar21[-7] = param_10;
  puVar21[-6] = param_4;
  puVar21[-5] = param_5;
  puVar21[-4] = param_11;
  puVar21[-3] = puVar21;
  puVar21[-2] = &stack0xfffffffffffffff0;
  puVar21[-1] = 0x109089d00;
  puVar21[-0x27] = param_8;
  puVar21[-0x28] = puVar15;
  uVar1 = puVar21[2];
  uVar9 = puVar21[3];
  uVar2 = *puVar21;
  uVar6 = puVar21[1];
  puVar21[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar20,ppcVar12,uVar6,uVar1,puVar21 + -0x11,puVar21 + -0x12,(long)puVar21 + -0x94);
  puVar15 = puVar21 + -0x14;
  puVar22 = puVar21 + -0x15;
  lVar17 = (long)puVar21 + -0xac;
  uVar11 = uVar1;
  FUN_10908b62c(puVar13,pfVar16,uVar6,uVar1,puVar15,puVar22,lVar17);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar6 << 2);
  lVar25 = (long)puVar21 + (-0x140 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar23 = (undefined8 *)(lVar25 - extraout_x12_00);
  fVar30 = *(float *)((long)puVar21 + -0x94);
  fVar29 = *(float *)((long)puVar21 + -0xac);
  if (uVar6 != 0) {
    uVar19 = 0;
    dVar26 = (double)NEON_ucvtf(puVar21[-0x11]);
    dVar27 = (double)NEON_ucvtf(puVar21[-0x14]);
    do {
      dVar28 = (double)(uVar19 & 0xffffffff) + 0.5;
      *(int *)(lVar25 + uVar19 * 4) =
           (int)(((float)uVar20 - (float)(dVar26 + (double)fVar30 * dVar28)) + -0.5);
      *(int *)((long)puVar23 + uVar19 * 4) =
           (int)(((float)puVar13 - (float)(dVar27 + (double)fVar29 * dVar28)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar6 != uVar19);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar21[-0x26] = PTR___NSConcreteStackBlock_11034bd00;
  puVar21[-0x25] = 0xc0000000;
  puVar21[-0x24] = FUN_10908b00c;
  puVar21[-0x23] = &UNK_110ad7208;
  puVar21[-0x22] = uVar2;
  puVar21[-0x21] = uVar9;
  puVar21[-0x20] = puVar21[-0x12];
  puVar21[-0x1f] = uVar18;
  *(float *)(puVar21 + -0x17) = fVar30;
  *(float *)((long)puVar21 + -0xb4) = fVar29;
  puVar21[-0x1e] = uVar14;
  puVar21[-0x1d] = puVar21[-0x15];
  puVar21[-0x1c] = puVar21[-0x28];
  puVar21[-0x1b] = puVar21[-0x27];
  puVar21[-0x1a] = uVar6;
  puVar21[-0x19] = lVar25;
  puVar21[-0x18] = puVar23;
  puVar13 = puVar21 + -0x26;
  uVar10 = uVar7;
  _dispatch_apply(uVar1,uVar7,puVar13);
  uVar8 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar21[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar23[-0xe] = (ulong)(uint)fVar30;
  puVar23[-0xd] = (ulong)(uint)fVar29;
  puVar23[-0xc] = uVar9;
  puVar23[-0xb] = lVar25;
  puVar23[-10] = uVar20;
  puVar23[-9] = uVar7;
  puVar23[-8] = uVar18;
  puVar23[-7] = uVar6;
  puVar23[-6] = uVar14;
  puVar23[-5] = puVar23;
  puVar23[-4] = uVar1;
  puVar23[-3] = uVar2;
  puVar23[-2] = puVar21 + -2;
  puVar23[-1] = 0x109089f44;
  puVar23[-0x28] = param_8;
  uVar14 = puVar23[2];
  uVar2 = puVar23[3];
  uVar1 = *puVar23;
  uVar18 = puVar23[1];
  puVar23[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar10,puVar13,uVar18,uVar14,puVar23 + -0x11,puVar23 + -0x12,(long)puVar23 + -0x94);
  puVar13 = puVar23 + -0x14;
  puVar21 = puVar23 + -0x15;
  lVar25 = (long)puVar23 + -0xac;
  uVar9 = uVar14;
  FUN_10908b62c(puVar22,lVar17,uVar18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar17 = (long)puVar23 + (-0x140 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - extraout_x12_01);
    fVar30 = *(float *)((long)puVar23 + -0xac);
    fVar29 = *(float *)((long)puVar23 + -0x94);
  }
  else {
    uVar20 = 0;
    fVar29 = *(float *)((long)puVar23 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar23[-0x11]);
    do {
      *(int *)(lVar17 + uVar20 * 4) =
           (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    uVar20 = 0;
    fVar30 = *(float *)((long)puVar23 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar23[-0x14]);
    do {
      *(int *)((long)puVar22 + uVar20 * 4) =
           (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
  }
  uVar19 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar23[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar23[-0x26] = 0xc0000000;
  puVar23[-0x25] = 0x10908b0e0;
  puVar23[-0x24] = &UNK_110ad7228;
  puVar23[-0x23] = uVar1;
  puVar23[-0x22] = uVar2;
  puVar23[-0x21] = uVar14;
  puVar23[-0x20] = puVar23[-0x12];
  puVar23[-0x1f] = uVar8;
  *(float *)(puVar23 + -0x17) = fVar29;
  *(float *)((long)puVar23 + -0xb4) = fVar30;
  puVar23[-0x1e] = uVar11;
  puVar23[-0x1d] = puVar23[-0x15];
  puVar23[-0x1c] = puVar15;
  puVar23[-0x1b] = puVar23[-0x28];
  puVar23[-0x1a] = uVar18;
  puVar23[-0x19] = lVar17;
  puVar23[-0x18] = puVar22;
  puVar24 = puVar23 + -0x27;
  uVar6 = uVar19;
  _dispatch_apply(uVar14,uVar19,puVar24);
  uVar20 = uVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar23[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar22[-0xe] = (ulong)(uint)fVar30;
  puVar22[-0xd] = (ulong)(uint)fVar29;
  puVar22[-0xc] = uVar1;
  puVar22[-0xb] = uVar2;
  puVar22[-10] = lVar17;
  puVar22[-9] = uVar19;
  puVar22[-8] = uVar8;
  puVar22[-7] = uVar18;
  puVar22[-6] = uVar11;
  puVar22[-5] = puVar15;
  puVar22[-4] = uVar14;
  puVar22[-3] = puVar22;
  puVar22[-2] = puVar23 + -2;
  puVar22[-1] = 0x10908a1c0;
  puVar22[-0x28] = param_8;
  uVar14 = puVar22[2];
  uVar2 = puVar22[3];
  uVar1 = *puVar22;
  uVar18 = puVar22[1];
  puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar6,puVar24,uVar18,uVar14,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94);
  puVar15 = puVar22 + -0x14;
  puVar23 = puVar22 + -0x15;
  lVar17 = (long)puVar22 + -0xac;
  uVar11 = uVar14;
  FUN_10908b62c(puVar21,lVar25,uVar18,uVar14,puVar15,puVar23,lVar17);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar25 = (long)puVar22 + (-0x140 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar24 = (undefined8 *)(lVar25 - extraout_x12_02);
    fVar30 = *(float *)((long)puVar22 + -0xac);
    fVar29 = *(float *)((long)puVar22 + -0x94);
  }
  else {
    uVar19 = 0;
    fVar29 = *(float *)((long)puVar22 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar22[-0x11]);
    do {
      *(int *)(lVar25 + uVar19 * 4) =
           (int)(((float)uVar6 -
                 (float)(dVar26 + (double)fVar29 * ((double)(uVar19 & 0xffffffff) + 0.5))) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar18 != uVar19);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar24 = (undefined8 *)(lVar25 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    uVar6 = 0;
    fVar30 = *(float *)((long)puVar22 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar22[-0x14]);
    do {
      *(int *)((long)puVar24 + uVar6 * 4) =
           (int)(((float)puVar21 -
                 (float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5))) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar22[-0x26] = 0xc0000000;
  puVar22[-0x25] = 0x10908b1c0;
  puVar22[-0x24] = &UNK_110ad7228;
  puVar22[-0x23] = uVar1;
  puVar22[-0x22] = uVar2;
  puVar22[-0x21] = uVar14;
  puVar22[-0x20] = puVar22[-0x12];
  puVar22[-0x1f] = uVar20;
  *(float *)(puVar22 + -0x17) = fVar29;
  *(float *)((long)puVar22 + -0xb4) = fVar30;
  puVar22[-0x1e] = uVar9;
  puVar22[-0x1d] = puVar22[-0x15];
  puVar22[-0x1c] = puVar13;
  puVar22[-0x1b] = puVar22[-0x28];
  puVar22[-0x1a] = uVar18;
  puVar22[-0x19] = lVar25;
  puVar22[-0x18] = puVar24;
  puVar21 = puVar22 + -0x27;
  uVar10 = uVar7;
  _dispatch_apply(uVar14,uVar7,puVar21);
  uVar8 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar22[-0x10]) {
    return;
  }
  ___stack_chk_fail();
  puVar24[-0xe] = (ulong)(uint)fVar30;
  puVar24[-0xd] = (ulong)(uint)fVar29;
  puVar24[-0xc] = uVar2;
  puVar24[-0xb] = lVar25;
  puVar24[-10] = puVar24;
  puVar24[-9] = uVar7;
  puVar24[-8] = uVar20;
  puVar24[-7] = uVar18;
  puVar24[-6] = uVar9;
  puVar24[-5] = puVar13;
  puVar24[-4] = uVar14;
  puVar24[-3] = uVar1;
  puVar24[-2] = puVar22 + -2;
  puVar24[-1] = 0x10908a450;
  puVar24[-0x28] = param_8;
  uVar14 = puVar24[2];
  uVar2 = puVar24[3];
  uVar1 = *puVar24;
  uVar18 = puVar24[1];
  puVar24[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar10,puVar21,uVar14,uVar18,puVar24 + -0x11,puVar24 + -0x12,(long)puVar24 + -0x94);
  puVar13 = puVar24 + -0x14;
  puVar21 = puVar24 + -0x15;
  lVar25 = (long)puVar24 + -0xac;
  uVar20 = uVar18;
  FUN_10908b62c(puVar23,lVar17,uVar14,uVar18,puVar13,puVar21,lVar25);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
  lVar17 = (long)puVar24 + (-0x140 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  if (uVar18 == 0) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - extraout_x12_03);
    fVar30 = *(float *)((long)puVar24 + -0xac);
    fVar29 = *(float *)((long)puVar24 + -0x94);
  }
  else {
    uVar6 = 0;
    fVar29 = *(float *)((long)puVar24 + -0x94);
    dVar26 = (double)NEON_ucvtf(puVar24[-0x12]);
    do {
      *(int *)(lVar17 + uVar6 * 4) =
           (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar22 = (undefined8 *)(lVar17 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
    uVar6 = 0;
    fVar30 = *(float *)((long)puVar24 + -0xac);
    dVar26 = (double)NEON_ucvtf(puVar24[-0x15]);
    do {
      *(int *)((long)puVar22 + uVar6 * 4) =
           (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
      uVar6 = uVar6 + 1;
    } while (uVar18 != uVar6);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar24[-0x27] = PTR___NSConcreteStackBlock_11034bd00;
  puVar24[-0x26] = 0xc0000000;
  puVar24[-0x25] = 0x10908b2a0;
  puVar24[-0x24] = &UNK_110ad7228;
  puVar24[-0x23] = uVar1;
  puVar24[-0x22] = uVar2;
  puVar24[-0x21] = uVar14;
  puVar24[-0x20] = puVar24[-0x11];
  puVar24[-0x1f] = uVar8;
  *(float *)(puVar24 + -0x17) = fVar29;
  *(float *)((long)puVar24 + -0xb4) = fVar30;
  puVar24[-0x1e] = puVar24[-0x14];
  puVar24[-0x1d] = puVar15;
  puVar24[-0x1c] = uVar18;
  puVar24[-0x1b] = lVar17;
  puVar24[-0x1a] = uVar11;
  puVar24[-0x19] = puVar22;
  puVar24[-0x18] = puVar24[-0x28];
  puVar23 = puVar24 + -0x27;
  uVar10 = uVar7;
  _dispatch_apply(uVar14,uVar7,puVar23);
  uVar9 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != puVar24[-0x10]) {
    ___stack_chk_fail();
    puVar22[-0xe] = (ulong)(uint)fVar30;
    puVar22[-0xd] = (ulong)(uint)fVar29;
    puVar22[-0xc] = uVar1;
    puVar22[-0xb] = uVar2;
    puVar22[-10] = lVar17;
    puVar22[-9] = uVar7;
    puVar22[-8] = uVar18;
    puVar22[-7] = uVar8;
    puVar22[-6] = puVar15;
    puVar22[-5] = uVar11;
    puVar22[-4] = uVar14;
    puVar22[-3] = puVar22;
    puVar22[-2] = puVar24 + -2;
    puVar22[-1] = 0x10908a6cc;
    puVar22[-0x27] = param_8;
    uVar14 = puVar22[2];
    uVar2 = puVar22[3];
    uVar1 = *puVar22;
    uVar18 = puVar22[1];
    puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar10,puVar23,uVar14,uVar18,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94
                 );
    puVar15 = puVar22 + -0x14;
    puVar23 = puVar22 + -0x15;
    lVar17 = (long)puVar22 + -0xac;
    uVar6 = uVar18;
    FUN_10908b62c(puVar21,lVar25,uVar14);
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar25 = (long)puVar22 + (-0x140 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar21 = (undefined8 *)(lVar25 - extraout_x12_04);
      fVar30 = *(float *)((long)puVar22 + -0xac);
      fVar29 = *(float *)((long)puVar22 + -0x94);
    }
    else {
      uVar19 = 0;
      fVar29 = *(float *)((long)puVar22 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x12]);
      do {
        *(int *)(lVar25 + uVar19 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar21 = (undefined8 *)(lVar25 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
      uVar19 = 0;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x15]);
      do {
        *(int *)((long)puVar21 + uVar19 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
    }
    uVar10 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22[-0x26] = PTR___NSConcreteStackBlock_11034bd00;
    puVar22[-0x25] = 0xc0000000;
    puVar22[-0x24] = 0x10908b37c;
    puVar22[-0x23] = &UNK_110ad7208;
    puVar22[-0x22] = uVar1;
    puVar22[-0x21] = uVar2;
    puVar22[-0x20] = puVar22[-0x11];
    puVar22[-0x1f] = uVar9;
    *(float *)(puVar22 + -0x17) = fVar29;
    *(float *)((long)puVar22 + -0xb4) = fVar30;
    puVar22[-0x1e] = puVar22[-0x14];
    puVar22[-0x1d] = puVar13;
    puVar22[-0x1c] = uVar18;
    puVar22[-0x1b] = lVar25;
    puVar22[-0x1a] = uVar20;
    puVar22[-0x19] = puVar21;
    puVar22[-0x18] = puVar22[-0x27];
    puVar24 = puVar22 + -0x26;
    uVar8 = uVar10;
    _dispatch_apply(uVar14,uVar10,puVar24);
    uVar11 = uVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar22[-0x10]) {
      return;
    }
    ___stack_chk_fail();
    puVar21[-0xe] = (ulong)(uint)fVar30;
    puVar21[-0xd] = (ulong)(uint)fVar29;
    puVar21[-0xc] = uVar1;
    puVar21[-0xb] = uVar2;
    puVar21[-10] = lVar25;
    puVar21[-9] = uVar10;
    puVar21[-8] = uVar9;
    puVar21[-7] = uVar18;
    puVar21[-6] = puVar13;
    puVar21[-5] = uVar20;
    puVar21[-4] = uVar14;
    puVar21[-3] = puVar21;
    puVar21[-2] = puVar22 + -2;
    puVar21[-1] = 0x10908a940;
    puVar21[-0x2a] = param_8;
    puVar21[-0x2c] = puVar15;
    puVar21[-0x2b] = uVar6;
    uVar14 = puVar21[2];
    uVar2 = puVar21[3];
    uVar1 = *puVar21;
    uVar18 = puVar21[1];
    puVar21[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar8,puVar24,uVar14,uVar18,puVar21 + -0x11,puVar21 + -0x12,(long)puVar21 + -0x94)
    ;
    puVar15 = puVar21 + -0x14;
    puVar13 = puVar21 + -0x15;
    lVar25 = (long)puVar21 + -0xac;
    uVar20 = uVar18;
    FUN_10908b62c(puVar23,lVar17,uVar14);
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar17 = (long)puVar21 + (-0x160 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar22 = (undefined8 *)(lVar17 - extraout_x12_05);
      fVar30 = *(float *)((long)puVar21 + -0xac);
      fVar29 = *(float *)((long)puVar21 + -0x94);
    }
    else {
      uVar6 = 0;
      fVar29 = *(float *)((long)puVar21 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar21[-0x12]);
      do {
        *(int *)(lVar17 + uVar6 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
        uVar6 = uVar6 + 1;
      } while (uVar18 != uVar6);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar22 = (undefined8 *)(lVar17 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
      uVar6 = 0;
      fVar30 = *(float *)((long)puVar21 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar21[-0x15]);
      do {
        *(int *)((long)puVar22 + uVar6 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar6 & 0xffffffff) + 0.5)) + -0.5);
        uVar6 = uVar6 + 1;
      } while (uVar18 != uVar6);
    }
    uVar7 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar21[-0x29] = PTR___NSConcreteStackBlock_11034bd00;
    puVar21[-0x28] = 0xc0000000;
    puVar21[-0x27] = 0x10908b44c;
    puVar21[-0x26] = &UNK_110ad7248;
    puVar21[-0x25] = uVar1;
    puVar21[-0x24] = uVar2;
    puVar21[-0x23] = uVar14;
    puVar21[-0x22] = uVar8;
    puVar21[-0x21] = puVar21[-0x11];
    puVar21[-0x20] = uVar11;
    puVar21[-0x1f] = puVar23;
    *(float *)(puVar21 + -0x17) = fVar29;
    *(float *)((long)puVar21 + -0xb4) = fVar30;
    puVar21[-0x1e] = puVar21[-0x14];
    puVar21[-0x1d] = puVar21[-0x2c];
    puVar21[-0x1c] = uVar18;
    puVar21[-0x1b] = lVar17;
    puVar21[-0x1a] = puVar21[-0x2b];
    puVar21[-0x19] = puVar22;
    puVar21[-0x18] = puVar21[-0x2a];
    puVar24 = puVar21 + -0x29;
    uVar10 = uVar7;
    _dispatch_apply(uVar14,uVar7,puVar24);
    uVar9 = uVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == puVar21[-0x10]) {
      return;
    }
    ___stack_chk_fail();
    puVar22[-0xe] = (ulong)(uint)fVar30;
    puVar22[-0xd] = (ulong)(uint)fVar29;
    puVar22[-0xc] = uVar2;
    puVar22[-0xb] = uVar7;
    puVar22[-10] = uVar8;
    puVar22[-9] = uVar11;
    puVar22[-8] = uVar18;
    puVar22[-7] = puVar23;
    puVar22[-6] = puVar22;
    puVar22[-5] = lVar17;
    puVar22[-4] = uVar14;
    puVar22[-3] = uVar1;
    puVar22[-2] = puVar21 + -2;
    puVar22[-1] = 0x10908abe8;
    puVar22[-0x29] = param_8;
    puVar22[-0x2b] = puVar15;
    puVar22[-0x2a] = uVar20;
    uVar14 = puVar22[2];
    uVar2 = puVar22[3];
    uVar1 = *puVar22;
    uVar18 = puVar22[1];
    puVar22[-0x10] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_10908b62c(uVar10,puVar24,uVar14,uVar18,puVar22 + -0x11,puVar22 + -0x12,(long)puVar22 + -0x94
                 );
    FUN_10908b62c(puVar13,lVar25,uVar14,uVar18,puVar22 + -0x14,puVar22 + -0x15,(long)puVar22 + -0xac
                 );
    (*(code *)PTR____chkstk_darwin_11034bd40)(uVar18 << 2);
    lVar17 = (long)puVar22 + (-0x160 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
    if (uVar18 == 0) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar25 = lVar17 - extraout_x12_06;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      fVar29 = *(float *)((long)puVar22 + -0x94);
    }
    else {
      uVar20 = 0;
      fVar29 = *(float *)((long)puVar22 + -0x94);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x12]);
      do {
        *(int *)(lVar17 + uVar20 * 4) =
             (int)((float)(dVar26 + (double)fVar29 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
        uVar20 = uVar20 + 1;
      } while (uVar18 != uVar20);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar25 = lVar17 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
      uVar20 = 0;
      fVar30 = *(float *)((long)puVar22 + -0xac);
      dVar26 = (double)NEON_ucvtf(puVar22[-0x15]);
      do {
        *(int *)(lVar25 + uVar20 * 4) =
             (int)((float)(dVar26 + (double)fVar30 * ((double)(uVar20 & 0xffffffff) + 0.5)) + -0.5);
        uVar20 = uVar20 + 1;
      } while (uVar18 != uVar20);
    }
    uVar6 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar22[-0x28] = PTR___NSConcreteStackBlock_11034bd00;
    puVar22[-0x27] = 0xc0000000;
    puVar22[-0x26] = 0x10908b540;
    puVar22[-0x25] = &UNK_110ad7268;
    puVar22[-0x24] = uVar1;
    puVar22[-0x23] = uVar2;
    puVar22[-0x22] = uVar10;
    puVar22[-0x21] = puVar22[-0x11];
    puVar22[-0x20] = uVar9;
    puVar22[-0x1f] = puVar13;
    *(float *)(puVar22 + -0x17) = fVar29;
    *(float *)((long)puVar22 + -0xb4) = fVar30;
    puVar22[-0x1e] = puVar22[-0x14];
    puVar22[-0x1d] = puVar22[-0x2b];
    puVar22[-0x1c] = uVar18;
    puVar22[-0x1b] = lVar17;
    puVar22[-0x1a] = puVar22[-0x2a];
    puVar22[-0x19] = lVar25;
    puVar22[-0x18] = puVar22[-0x29];
    uVar20 = uVar6;
    _dispatch_apply(uVar14,uVar6,puVar22 + -0x28);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != puVar22[-0x10]) {
      ___stack_chk_fail();
      if (*(long *)(uVar6 + 0x60) != 0) {
        *(ulong *)(lVar25 + -0x40) = uVar18;
        *(undefined8 **)(lVar25 + -0x38) = puVar13;
        *(long *)(lVar25 + -0x30) = lVar25;
        *(long *)(lVar25 + -0x28) = lVar17;
        *(undefined8 *)(lVar25 + -0x20) = uVar14;
        *(undefined8 *)(lVar25 + -0x18) = uVar1;
        *(undefined8 **)(lVar25 + -0x10) = puVar22 + -2;
        *(code **)(lVar25 + -8) = FUN_10908ae88;
        uVar18 = 0;
        lVar17 = *(long *)(uVar6 + 0x20) + *(long *)(uVar6 + 0x28) * uVar20;
        fVar29 = *(float *)(uVar6 + 0x78);
        fVar30 = *(float *)(uVar6 + 0x7c);
        dVar27 = (double)NEON_ucvtf(*(undefined8 *)(uVar6 + 0x30));
        lVar25 = *(long *)(uVar6 + 0x38);
        lVar4 = *(long *)(uVar6 + 0x40);
        dVar26 = (double)NEON_ucvtf(*(undefined8 *)(uVar6 + 0x48));
        lVar3 = *(long *)(uVar6 + 0x50);
        lVar5 = *(long *)(uVar6 + 0x58);
        do {
          FUN_10908af5c(lVar25 + lVar4 * (int)((float)(dVar27 + (double)fVar29 *
                                                                ((double)uVar20 + 0.5)) + -0.5) +
                        (long)*(int *)(*(long *)(uVar6 + 0x68) + uVar18 * 4),
                        lVar3 + lVar5 * (int)((float)(dVar26 + (double)fVar30 *
                                                               ((double)uVar20 + 0.5)) + -0.5) +
                        (long)*(int *)(*(long *)(uVar6 + 0x70) + uVar18 * 4) * 2,lVar17);
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 4;
        } while (uVar18 < *(ulong *)(uVar6 + 0x60));
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10908ae88; end: 10908af5b;  */

void FUN_10908ae88(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * param_2;
    fVar7 = *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 0x7c);
    dVar10 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    dVar9 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    lVar2 = *(long *)(param_1 + 0x50);
    lVar4 = *(long *)(param_1 + 0x58);
    do {
      FUN_10908af5c(lVar1 + lVar3 * (int)((float)(dVar10 + (double)fVar7 * ((double)param_2 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x68) + uVar6 * 4),
                    lVar2 + lVar4 * (int)((float)(dVar9 + (double)fVar8 * ((double)param_2 + 0.5)) +
                                         -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x70) + uVar6 * 4) * 2,lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (uVar6 < *(ulong *)(param_1 + 0x60));
  }
  return;
}



/* Entry: 10908af5c; end: 10908b00b;  */

void FUN_10908af5c(byte *param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (uint)*param_2 * 0x1c4 + (uint)*param_1 * 0x100 + -0xe180;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  *param_3 = (char)uVar2;
  iVar1 = (0x80 - (uint)*param_2) * 0x58 + (uint)*param_1 * 0x100 + (0x80 - (uint)param_2[1]) * 0xb6
          + 0x80;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  param_3[1] = (char)uVar2;
  iVar1 = (uint)param_2[1] * 0x166 + (uint)*param_1 * 0x100 + -0xb280;
  uVar2 = iVar1 >> 8 & (iVar1 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar2) {
    uVar2 = 0xff;
  }
  param_3[2] = (char)uVar2;
  param_3[3] = 0;
  return;
}



/* Entry: 10908b00c; end: 10908b62b;  */

void FUN_10908b00c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * param_2;
    fVar7 = *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 0x7c);
    dVar10 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x38);
    lVar3 = *(long *)(param_1 + 0x40);
    dVar9 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    lVar2 = *(long *)(param_1 + 0x50);
    lVar4 = *(long *)(param_1 + 0x58);
    do {
      FUN_10908af5c(lVar1 + lVar3 * (int)((float)(dVar10 + (double)fVar7 * ((double)param_2 + 0.5))
                                         + -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x68) + uVar6 * 4),
                    lVar2 + lVar4 * (int)((float)(dVar9 + (double)fVar8 * ((double)param_2 + 0.5)) +
                                         -0.5) +
                    (long)*(int *)(*(long *)(param_1 + 0x70) + uVar6 * 4) * 2,lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (uVar6 < *(ulong *)(param_1 + 0x60));
  }
  return;
}



/* Entry: 10908b62c; end: 10908b687;  */

void FUN_10908b62c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long *param_5,
                  long *param_6,float *param_7)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = (float)param_1 / (float)param_3;
  lVar4 = (long)(((float)param_2 - fVar6 * (float)param_4) * 0.5);
  bVar2 = param_3 * param_2 <= param_4 * param_1;
  bVar3 = param_4 * param_1 - param_3 * param_2 != 0;
  fVar5 = (float)param_2 / (float)param_4;
  if (bVar2 && bVar3) {
    fVar6 = fVar5;
  }
  lVar1 = 0;
  if (bVar2 && bVar3) {
    lVar1 = (long)(((float)param_1 - fVar5 * (float)param_3) * 0.5);
  }
  *param_7 = fVar6;
  if (bVar2 && bVar3) {
    lVar4 = 0;
  }
  *param_5 = lVar1;
  *param_6 = lVar4;
  return;
}



/* Entry: 10908b688; end: 10908bc0f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10908b688(ulong param_1,code **param_2,code **param_3,code **param_4,code **param_5,
                  code **param_6,code **param_7,code **param_8,code *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code **ppcVar5;
  ulong uVar6;
  code **ppcVar7;
  ulong uVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code **ppcVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  code **ppcVar19;
  long extraout_x8_04;
  long extraout_x8_05;
  code **ppcVar20;
  long extraout_x8_06;
  ulong uVar21;
  undefined8 uVar22;
  bool bVar23;
  int iVar24;
  code **unaff_x19;
  code **unaff_x20;
  code **unaff_x21;
  code *unaff_x22;
  code **unaff_x23;
  code **unaff_x24;
  code **unaff_x25;
  code **unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code **unaff_x29;
  code *unaff_x30;
  double dVar25;
  float fVar26;
  code *unaff_d8;
  undefined8 unaff_d9;
  code *apcStack_e0 [4];
  undefined *puStack_c0;
  code **ppcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  code **ppcStack_a0;
  code **ppcStack_98;
  code **ppcStack_90;
  code **ppcStack_88;
  float fStack_80;
  float fStack_7c;
  code *pcStack_78;
  code *pcStack_70;
  long lStack_68;
  
  pcVar16 = param_9;
  ppcVar18 = param_4;
  ppcVar5 = param_3;
  if ((long)param_1 < 4) {
    if ((1 < param_1) && (ppcVar18 = param_3, ppcVar5 = param_4, 1 < param_1 - 2)) {
      return;
    }
joined_r0x00010908b710:
    if ((ppcVar5 == param_7) && (ppcVar18 == param_8)) {
      uVar22 = 0;
      bVar23 = true;
      if ((long)param_1 < 3) {
        if (param_1 == 1) {
          bVar23 = false;
          iVar24 = 0;
          uVar22 = 2;
        }
        else {
          iVar24 = 0;
          if (param_1 == 2) {
            bVar23 = false;
            iVar24 = 0;
            uVar22 = 1;
          }
        }
      }
      else if (param_1 == 3) {
        bVar23 = false;
        iVar24 = 0;
        uVar22 = 3;
      }
      else if (param_1 == 5) {
        uVar22 = 0;
        iVar24 = 2;
      }
      else {
        iVar24 = 0;
        if (param_1 == 4) {
          uVar22 = 0;
          iVar24 = 1;
        }
      }
      if (bVar23) {
        if (iVar24 == 2) {
          _vImageVerticalReflect_Planar8(&stack0xffffffffffffffd0,&stack0xffffffffffffffb0,0);
        }
        else if (iVar24 == 1) {
          _vImageHorizontalReflect_Planar8(&stack0xffffffffffffffd0,&stack0xffffffffffffffb0,0);
        }
        else {
          _vImageCopyBuffer(&stack0xffffffffffffffd0,&stack0xffffffffffffffb0,1,0);
        }
      }
      else {
        _vImageRotate90_Planar8(&stack0xffffffffffffffd0,&stack0xffffffffffffffb0,uVar22,0,0);
      }
      return;
    }
    pcVar15 = param_9;
    if ((long)param_1 < 3) {
      if (param_1 == 0) {
        unaff_x29 = (code **)&stack0xfffffffffffffff0;
        lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppcVar5 = &pcStack_70;
        ppcVar7 = &pcStack_78;
        ppcVar9 = (code **)&fStack_7c;
        ppcVar18 = param_8;
        FUN_10908b62c(param_3,param_4,param_7);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_7 << 2);
        unaff_x26 = (code **)((long)apcStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        unaff_d8 = (code *)(ulong)(uint)fStack_7c;
        if (param_7 != (code **)0x0) {
          ppcVar13 = (code **)0x0;
          dVar25 = (double)NEON_ucvtf(pcStack_70);
          do {
            *(int *)((long)unaff_x26 + (long)ppcVar13 * 4) =
                 (int)((float)(dVar25 + (double)fStack_7c *
                                        ((double)((ulong)ppcVar13 & 0xffffffff) + 0.5)) + -0.5);
            ppcVar13 = (code **)((long)ppcVar13 + 1);
          } while (param_7 != ppcVar13);
        }
        unaff_x25 = (code **)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        apcStack_e0[1] = (code *)PTR___NSConcreteStackBlock_11034bd00;
        apcStack_e0[2] = (code *)0xc0000000;
        apcStack_e0[3] = FUN_10908c884;
        puStack_c0 = &UNK_110ad72c8;
        pcStack_b0 = pcVar16;
        fStack_80 = fStack_7c;
        pcStack_a8 = pcStack_78;
        param_4 = apcStack_e0 + 1;
        param_3 = unaff_x25;
        ppcStack_b8 = param_6;
        ppcStack_a0 = param_2;
        ppcStack_98 = param_5;
        ppcStack_90 = param_7;
        ppcStack_88 = unaff_x26;
        _dispatch_apply(param_8,unaff_x25,param_4);
        ppcVar13 = unaff_x25;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        unaff_x30 = (code *)0x10908bd98;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)unaff_x26;
        unaff_x19 = param_8;
        unaff_x20 = param_7;
        unaff_x21 = param_5;
        unaff_x22 = pcVar16;
        unaff_x23 = param_2;
        unaff_x24 = param_6;
LAB_10908bd98:
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
        *(code **)((long)register0x00000008 + -0x58) = unaff_d8;
        *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
        *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
        *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
        *(code ***)((long)register0x00000008 + -0x38) = unaff_x23;
        *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(code ***)((long)register0x00000008 + -0x28) = unaff_x21;
        *(code ***)((long)register0x00000008 + -0x20) = unaff_x20;
        *(code ***)((long)register0x00000008 + -0x18) = unaff_x19;
        *(code ***)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (code **)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x68) = *(code **)PTR____stack_chk_guard_11034bdc0;
        ppcVar10 = (code **)((long)register0x00000008 + -0x70);
        ppcVar11 = (code **)((long)register0x00000008 + -0x78);
        ppcVar12 = (code **)((long)register0x00000008 + -0x7c);
        ppcVar20 = ppcVar9;
        pcVar16 = pcVar15;
        FUN_10908b62c(param_3,param_4,ppcVar7);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)ppcVar7 << 2);
        unaff_x26 = (code **)((long)register0x00000008 +
                             (-0xe0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
        fVar26 = *(float *)((long)register0x00000008 + -0x7c);
        unaff_d8 = (code *)(ulong)(uint)fVar26;
        if (ppcVar7 != (code **)0x0) {
          ppcVar19 = (code **)0x0;
          dVar25 = (double)NEON_ucvtf(*(code **)((long)register0x00000008 + -0x70));
          do {
            *(int *)((long)unaff_x26 + (long)ppcVar19 * 4) =
                 (int)(((float)param_3 -
                       (float)(dVar25 + (double)fVar26 *
                                        ((double)((ulong)ppcVar19 & 0xffffffff) + 0.5))) + -0.5);
            ppcVar19 = (code **)((long)ppcVar19 + 1);
          } while (ppcVar7 != ppcVar19);
        }
        unaff_x25 = (code **)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0xd8) = PTR___NSConcreteStackBlock_11034bd00;
        *(code **)((long)register0x00000008 + -0xd0) = (code *)0xc0000000;
        *(code **)((long)register0x00000008 + -200) = (code *)0x10908c8f8;
        *(undefined **)((long)register0x00000008 + -0xc0) = &UNK_110ad72c8;
        *(code ***)((long)register0x00000008 + -0xb8) = ppcVar5;
        *(code **)((long)register0x00000008 + -0xb0) = pcVar15;
        *(float *)((long)register0x00000008 + -0x80) = fVar26;
        *(code **)((long)register0x00000008 + -0xa8) = *(code **)((long)register0x00000008 + -0x78);
        *(code ***)((long)register0x00000008 + -0xa0) = ppcVar13;
        *(code ***)((long)register0x00000008 + -0x98) = ppcVar18;
        *(code ***)((long)register0x00000008 + -0x90) = ppcVar7;
        *(code ***)((long)register0x00000008 + -0x88) = unaff_x26;
        param_4 = (code **)((long)register0x00000008 + -0xd8);
        param_3 = unaff_x25;
        _dispatch_apply(ppcVar9,unaff_x25,param_4);
        ppcVar14 = unaff_x25;
        _objc_release();
        if (*(code **)PTR____stack_chk_guard_11034bdc0 ==
            *(code **)((long)register0x00000008 + -0x68)) {
          return;
        }
        unaff_x30 = (code *)0x10908bf2c;
        ___stack_chk_fail();
        ppcVar19 = unaff_x26;
        unaff_x19 = ppcVar9;
        unaff_x20 = ppcVar7;
        unaff_x21 = ppcVar18;
        unaff_x22 = pcVar15;
        unaff_x23 = ppcVar13;
        unaff_x24 = ppcVar5;
LAB_10908bf2c:
        ppcVar19[-0xc] = (code *)unaff_d9;
        ppcVar19[-0xb] = unaff_d8;
        ppcVar19[-10] = (code *)unaff_x26;
        ppcVar19[-9] = (code *)unaff_x25;
        ppcVar19[-8] = (code *)unaff_x24;
        ppcVar19[-7] = (code *)unaff_x23;
        ppcVar19[-6] = unaff_x22;
        ppcVar19[-5] = (code *)unaff_x21;
        ppcVar19[-4] = (code *)unaff_x20;
        ppcVar19[-3] = (code *)unaff_x19;
        ppcVar19[-2] = (code *)unaff_x29;
        ppcVar19[-1] = unaff_x30;
        unaff_x29 = ppcVar19 + -2;
        ppcVar19[-0xd] = *(code **)PTR____stack_chk_guard_11034bdc0;
        param_6 = ppcVar19 + -0xe;
        param_7 = ppcVar19 + -0xf;
        param_8 = (code **)((long)ppcVar19 + -0x7c);
        param_5 = ppcVar12;
        pcVar17 = pcVar16;
        FUN_10908b62c(param_3,param_4,ppcVar11);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)ppcVar11 << 2);
        register0x00000008 =
             (BADSPACEBASE *)
             ((long)ppcVar19 + (-0xe0 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
        fVar26 = *(float *)((long)ppcVar19 + -0x7c);
        unaff_d8 = (code *)(ulong)(uint)fVar26;
        if (ppcVar11 != (code **)0x0) {
          ppcVar18 = (code **)0x0;
          dVar25 = (double)NEON_ucvtf(ppcVar19[-0xe]);
          do {
            *(int *)((long)register0x00000008 + (long)ppcVar18 * 4) =
                 (int)(((float)param_3 -
                       (float)(dVar25 + (double)fVar26 *
                                        ((double)((ulong)ppcVar18 & 0xffffffff) + 0.5))) + -0.5);
            ppcVar18 = (code **)((long)ppcVar18 + 1);
          } while (ppcVar11 != ppcVar18);
        }
        unaff_x25 = (code **)0x19;
        _dispatch_get_global_queue(0x19,0);
        _objc_retainAutoreleasedReturnValue();
        ppcVar19[-0x1c] = (code *)PTR___NSConcreteStackBlock_11034bd00;
        ppcVar19[-0x1b] = (code *)0xc0000000;
        ppcVar19[-0x1a] = (code *)0x10908c96c;
        ppcVar19[-0x19] = (code *)&UNK_110ad72e8;
        ppcVar19[-0x18] = (code *)ppcVar10;
        ppcVar19[-0x17] = pcVar16;
        *(float *)(ppcVar19 + -0x10) = fVar26;
        ppcVar19[-0x16] = (code *)ppcVar12;
        ppcVar19[-0x15] = ppcVar19[-0xf];
        ppcVar19[-0x14] = (code *)ppcVar14;
        ppcVar19[-0x13] = (code *)ppcVar20;
        ppcVar19[-0x12] = (code *)ppcVar11;
        ppcVar19[-0x11] = (code *)register0x00000008;
        param_4 = ppcVar19 + -0x1c;
        param_3 = unaff_x25;
        _dispatch_apply(ppcVar12,unaff_x25,param_4);
        param_2 = unaff_x25;
        _objc_release();
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == ppcVar19[-0xd]) {
          return;
        }
        unaff_x30 = (code *)0x10908c0c0;
        ___stack_chk_fail();
        unaff_x19 = ppcVar12;
        unaff_x20 = ppcVar11;
        unaff_x21 = ppcVar20;
        unaff_x22 = pcVar16;
        unaff_x23 = ppcVar14;
        unaff_x24 = ppcVar10;
        unaff_x26 = (code **)register0x00000008;
        goto LAB_10908c0c0;
      }
      ppcVar19 = (code **)register0x00000008;
      ppcVar18 = param_2;
      ppcVar14 = param_2;
      ppcVar5 = param_5;
      ppcVar20 = param_5;
      ppcVar7 = param_6;
      ppcVar10 = param_6;
      ppcVar9 = param_7;
      ppcVar11 = param_7;
      ppcVar13 = param_8;
      ppcVar12 = param_8;
      if (param_1 == 1) goto LAB_10908bf2c;
LAB_10908c248:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
      *(code **)((long)register0x00000008 + -0x58) = unaff_d8;
      *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
      *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
      *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
      *(code ***)((long)register0x00000008 + -0x38) = unaff_x23;
      *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(code ***)((long)register0x00000008 + -0x28) = unaff_x21;
      *(code ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(code ***)((long)register0x00000008 + -0x18) = unaff_x19;
      *(code ***)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (code **)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x68) = *(code **)PTR____stack_chk_guard_11034bdc0;
      param_6 = (code **)((long)register0x00000008 + -0x70);
      param_7 = (code **)((long)register0x00000008 + -0x78);
      param_8 = (code **)((long)register0x00000008 + -0x7c);
      param_5 = ppcVar9;
      pcVar16 = pcVar15;
      FUN_10908b62c(param_3,param_4,ppcVar13);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)ppcVar9 << 2);
      unaff_x26 = (code **)((long)register0x00000008 +
                           (-0xe0 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)));
      fVar26 = *(float *)((long)register0x00000008 + -0x7c);
      unaff_d8 = (code *)(ulong)(uint)fVar26;
      if (ppcVar9 != (code **)0x0) {
        ppcVar19 = (code **)0x0;
        dVar25 = (double)NEON_ucvtf(*(code **)((long)register0x00000008 + -0x78));
        do {
          *(int *)((long)unaff_x26 + (long)ppcVar19 * 4) =
               (int)((float)(dVar25 + (double)fVar26 *
                                      ((double)((ulong)ppcVar19 & 0xffffffff) + 0.5)) + -0.5);
          ppcVar19 = (code **)((long)ppcVar19 + 1);
        } while (ppcVar9 != ppcVar19);
      }
      unaff_x25 = (code **)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
      *(code **)((long)register0x00000008 + -0xd8) = (code *)0xc0000000;
      *(code **)((long)register0x00000008 + -0xd0) = (code *)0x10908ca6c;
      *(undefined **)((long)register0x00000008 + -200) = &UNK_110ad72e8;
      *(code ***)((long)register0x00000008 + -0xc0) = ppcVar7;
      *(code **)((long)register0x00000008 + -0xb8) = pcVar15;
      *(float *)((long)register0x00000008 + -0x80) = fVar26;
      *(code ***)((long)register0x00000008 + -0xb0) = ppcVar13;
      *(code **)((long)register0x00000008 + -0xa8) = *(code **)((long)register0x00000008 + -0x70);
      *(code ***)((long)register0x00000008 + -0xa0) = ppcVar18;
      *(code ***)((long)register0x00000008 + -0x98) = ppcVar9;
      *(code ***)((long)register0x00000008 + -0x90) = unaff_x26;
      *(code ***)((long)register0x00000008 + -0x88) = ppcVar5;
      param_4 = (code **)((long)register0x00000008 + -0xe0);
      param_3 = unaff_x25;
      _dispatch_apply(ppcVar13,unaff_x25,param_4);
      param_2 = unaff_x25;
      _objc_release();
      if (*(code **)PTR____stack_chk_guard_11034bdc0 == *(code **)((long)register0x00000008 + -0x68)
         ) {
        return;
      }
      unaff_x30 = (code *)0x10908c3d0;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x26;
      unaff_x19 = ppcVar13;
      unaff_x20 = ppcVar5;
      unaff_x21 = ppcVar9;
      unaff_x22 = pcVar15;
      unaff_x23 = ppcVar18;
      unaff_x24 = ppcVar7;
      goto LAB_10908c3d0;
    }
    ppcVar18 = (code **)register0x00000008;
    ppcVar5 = param_2;
    ppcVar7 = param_3;
    ppcVar9 = param_5;
    ppcVar13 = param_6;
    ppcVar19 = param_7;
    ppcVar14 = param_8;
    if (param_1 != 3) {
      ppcVar13 = param_2;
      ppcVar18 = param_5;
      ppcVar5 = param_6;
      ppcVar7 = param_7;
      ppcVar9 = param_8;
      pcVar17 = param_9;
      if (param_1 == 4) goto LAB_10908bd98;
LAB_10908c0c0:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
      *(code **)((long)register0x00000008 + -0x58) = unaff_d8;
      *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
      *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
      *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
      *(code ***)((long)register0x00000008 + -0x38) = unaff_x23;
      *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(code ***)((long)register0x00000008 + -0x28) = unaff_x21;
      *(code ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(code ***)((long)register0x00000008 + -0x18) = unaff_x19;
      *(code ***)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (code **)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x68) = *(code **)PTR____stack_chk_guard_11034bdc0;
      ppcVar7 = (code **)((long)register0x00000008 + -0x70);
      ppcVar9 = (code **)((long)register0x00000008 + -0x78);
      ppcVar13 = (code **)((long)register0x00000008 + -0x7c);
      ppcVar5 = param_8;
      pcVar15 = pcVar17;
      FUN_10908b62c(param_3,param_4,param_7);
      (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_7 << 2);
      unaff_x26 = (code **)((long)register0x00000008 +
                           (-0xe0 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)));
      fVar26 = *(float *)((long)register0x00000008 + -0x7c);
      unaff_d8 = (code *)(ulong)(uint)fVar26;
      if (param_7 != (code **)0x0) {
        ppcVar18 = (code **)0x0;
        dVar25 = (double)NEON_ucvtf(*(code **)((long)register0x00000008 + -0x70));
        do {
          *(int *)((long)unaff_x26 + (long)ppcVar18 * 4) =
               (int)((float)(dVar25 + (double)fVar26 *
                                      ((double)((ulong)ppcVar18 & 0xffffffff) + 0.5)) + -0.5);
          ppcVar18 = (code **)((long)ppcVar18 + 1);
        } while (param_7 != ppcVar18);
      }
      unaff_x25 = (code **)0x19;
      _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
      *(code **)((long)register0x00000008 + -0xd8) = (code *)0xc0000000;
      *(code **)((long)register0x00000008 + -0xd0) = (code *)0x10908c9ec;
      *(undefined **)((long)register0x00000008 + -200) = &UNK_110ad72e8;
      *(code ***)((long)register0x00000008 + -0xc0) = param_6;
      *(code **)((long)register0x00000008 + -0xb8) = pcVar17;
      *(float *)((long)register0x00000008 + -0x80) = fVar26;
      *(code ***)((long)register0x00000008 + -0xb0) = param_8;
      *(code **)((long)register0x00000008 + -0xa8) = *(code **)((long)register0x00000008 + -0x78);
      *(code ***)((long)register0x00000008 + -0xa0) = param_2;
      *(code ***)((long)register0x00000008 + -0x98) = param_5;
      *(code ***)((long)register0x00000008 + -0x90) = param_7;
      *(code ***)((long)register0x00000008 + -0x88) = unaff_x26;
      param_4 = (code **)((long)register0x00000008 + -0xe0);
      param_3 = unaff_x25;
      _dispatch_apply(param_8,unaff_x25,param_4);
      ppcVar18 = unaff_x25;
      _objc_release();
      if (*(code **)PTR____stack_chk_guard_11034bdc0 == *(code **)((long)register0x00000008 + -0x68)
         ) {
        return;
      }
      unaff_x30 = (code *)0x10908c248;
      ___stack_chk_fail();
      register0x00000008 = (BADSPACEBASE *)unaff_x26;
      unaff_x19 = param_8;
      unaff_x20 = param_7;
      unaff_x21 = param_5;
      unaff_x22 = pcVar17;
      unaff_x23 = param_2;
      unaff_x24 = param_6;
      goto LAB_10908c248;
    }
  }
  else {
    if (param_1 - 4 < 2) goto joined_r0x00010908b710;
    if (param_1 != 6) {
      if (param_1 != 7) {
        return;
      }
      goto LAB_10908c6f0;
    }
LAB_10908c3d0:
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(code **)((long)register0x00000008 + -0x58) = unaff_d8;
    *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(code ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(code ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(code ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(code ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(code ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (code **)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = *(code **)PTR____stack_chk_guard_11034bdc0;
    ppcVar13 = (code **)((long)register0x00000008 + -0x70);
    ppcVar19 = (code **)((long)register0x00000008 + -0x78);
    ppcVar14 = (code **)((long)register0x00000008 + -0x7c);
    ppcVar9 = param_7;
    pcVar15 = pcVar16;
    FUN_10908b62c(param_3,param_4,param_8);
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_7 << 2);
    unaff_x26 = (code **)((long)register0x00000008 +
                         (-0xe0 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)));
    fVar26 = *(float *)((long)register0x00000008 + -0x7c);
    unaff_d8 = (code *)(ulong)(uint)fVar26;
    if (param_7 != (code **)0x0) {
      ppcVar18 = (code **)0x0;
      dVar25 = (double)NEON_ucvtf(*(code **)((long)register0x00000008 + -0x78));
      do {
        *(int *)((long)unaff_x26 + (long)ppcVar18 * 4) =
             (int)((float)(dVar25 + (double)fVar26 * ((double)((ulong)ppcVar18 & 0xffffffff) + 0.5))
                  + -0.5);
        ppcVar18 = (code **)((long)ppcVar18 + 1);
      } while (param_7 != ppcVar18);
    }
    unaff_x25 = (code **)0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    *(undefined **)((long)register0x00000008 + -0xd8) = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)((long)register0x00000008 + -0xd0) = (code *)0xc0000000;
    *(code **)((long)register0x00000008 + -200) = (code *)0x10908caec;
    *(undefined **)((long)register0x00000008 + -0xc0) = &UNK_110ad72c8;
    *(code ***)((long)register0x00000008 + -0xb8) = param_6;
    *(code **)((long)register0x00000008 + -0xb0) = pcVar16;
    *(float *)((long)register0x00000008 + -0x80) = fVar26;
    *(code **)((long)register0x00000008 + -0xa8) = *(code **)((long)register0x00000008 + -0x70);
    *(code ***)((long)register0x00000008 + -0xa0) = param_2;
    *(code ***)((long)register0x00000008 + -0x98) = param_7;
    *(code ***)((long)register0x00000008 + -0x90) = unaff_x26;
    *(code ***)((long)register0x00000008 + -0x88) = param_5;
    param_4 = (code **)((long)register0x00000008 + -0xd8);
    ppcVar7 = unaff_x25;
    _dispatch_apply(param_8,unaff_x25,param_4);
    ppcVar5 = unaff_x25;
    _objc_release();
    if (*(code **)PTR____stack_chk_guard_11034bdc0 == *(code **)((long)register0x00000008 + -0x68))
    {
      return;
    }
    unaff_x30 = FUN_10908c558;
    ___stack_chk_fail();
    ppcVar18 = unaff_x26;
    unaff_x19 = param_8;
    unaff_x20 = param_5;
    unaff_x21 = param_7;
    unaff_x22 = pcVar16;
    unaff_x23 = param_2;
    unaff_x24 = param_6;
  }
  ppcVar18[-0xe] = (code *)unaff_d9;
  ppcVar18[-0xd] = unaff_d8;
  ppcVar18[-0xc] = unaff_x28;
  ppcVar18[-0xb] = unaff_x27;
  ppcVar18[-10] = (code *)unaff_x26;
  ppcVar18[-9] = (code *)unaff_x25;
  ppcVar18[-8] = (code *)unaff_x24;
  ppcVar18[-7] = (code *)unaff_x23;
  ppcVar18[-6] = unaff_x22;
  ppcVar18[-5] = (code *)unaff_x21;
  ppcVar18[-4] = (code *)unaff_x20;
  ppcVar18[-3] = (code *)unaff_x19;
  ppcVar18[-2] = (code *)unaff_x29;
  ppcVar18[-1] = unaff_x30;
  unaff_x29 = ppcVar18 + -2;
  ppcVar18[-0xf] = *(code **)PTR____stack_chk_guard_11034bdc0;
  param_6 = ppcVar18 + -0x10;
  param_7 = ppcVar18 + -0x11;
  param_8 = (code **)((long)ppcVar18 + -0x8c);
  param_5 = ppcVar19;
  pcVar16 = pcVar15;
  FUN_10908b62c(ppcVar7,param_4,ppcVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)ppcVar19 << 2);
  register0x00000008 =
       (BADSPACEBASE *)((long)ppcVar18 + (-0x100 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0)));
  fVar26 = *(float *)((long)ppcVar18 + -0x8c);
  unaff_d8 = (code *)(ulong)(uint)fVar26;
  if (ppcVar19 != (code **)0x0) {
    ppcVar20 = (code **)0x0;
    dVar25 = (double)NEON_ucvtf(ppcVar18[-0x11]);
    do {
      *(int *)((long)register0x00000008 + (long)ppcVar20 * 4) =
           (int)((float)(dVar25 + (double)fVar26 * ((double)((ulong)ppcVar20 & 0xffffffff) + 0.5)) +
                -0.5);
      ppcVar20 = (code **)((long)ppcVar20 + 1);
    } while (ppcVar19 != ppcVar20);
  }
  unaff_x26 = (code **)0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  ppcVar18[-0x1f] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  ppcVar18[-0x1e] = (code *)0xc0000000;
  ppcVar18[-0x1d] = (code *)0x10908cb60;
  ppcVar18[-0x1c] = (code *)&UNK_110ad6de8;
  ppcVar18[-0x1b] = (code *)ppcVar13;
  ppcVar18[-0x1a] = pcVar15;
  ppcVar18[-0x19] = (code *)ppcVar14;
  ppcVar18[-0x18] = (code *)ppcVar7;
  *(float *)(ppcVar18 + -0x12) = fVar26;
  ppcVar18[-0x17] = ppcVar18[-0x10];
  ppcVar18[-0x16] = (code *)ppcVar5;
  ppcVar18[-0x15] = (code *)ppcVar19;
  ppcVar18[-0x14] = (code *)register0x00000008;
  ppcVar18[-0x13] = (code *)ppcVar9;
  param_4 = ppcVar18 + -0x1f;
  param_3 = unaff_x26;
  _dispatch_apply(ppcVar14,unaff_x26,param_4);
  param_2 = unaff_x26;
  _objc_release();
  if (*(code **)PTR____stack_chk_guard_11034bdc0 == ppcVar18[-0xf]) {
    return;
  }
  unaff_x30 = (code *)0x10908c6f0;
  ___stack_chk_fail();
  unaff_x19 = ppcVar14;
  unaff_x20 = ppcVar9;
  unaff_x21 = ppcVar19;
  unaff_x22 = pcVar15;
  unaff_x23 = ppcVar5;
  unaff_x24 = ppcVar7;
  unaff_x25 = ppcVar13;
  unaff_x27 = (code *)register0x00000008;
LAB_10908c6f0:
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(code **)((long)register0x00000008 + -0x68) = unaff_d8;
  *(code **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(code ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(code ***)((long)register0x00000008 + -0x48) = unaff_x25;
  *(code ***)((long)register0x00000008 + -0x40) = unaff_x24;
  *(code ***)((long)register0x00000008 + -0x38) = unaff_x23;
  *(code **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(code ***)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code ***)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(code ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(param_3,param_4,param_8,param_7,(code *)((long)register0x00000008 + -0x80),
                (code *)((long)register0x00000008 + -0x88),
                (code *)((long)register0x00000008 + -0x8c));
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_7 << 2);
  fVar26 = *(float *)((long)register0x00000008 + -0x8c);
  if (param_7 != (code **)0x0) {
    ppcVar18 = (code **)0x0;
    dVar25 = (double)NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0x88));
    do {
      *(int *)((code *)((long)register0x00000008 +
                       (-0xf0 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0))) + (long)ppcVar18 * 4)
           = (int)((float)(dVar25 + (double)fVar26 * ((double)((ulong)ppcVar18 & 0xffffffff) + 0.5))
                  + -0.5);
      ppcVar18 = (code **)((long)ppcVar18 + 1);
    } while (param_7 != ppcVar18);
  }
  uVar6 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)register0x00000008 + -0xf0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0xc0000000;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x10908cbf4;
  *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_110ad72e8;
  *(code ***)((long)register0x00000008 + -0xd0) = param_6;
  *(code **)((long)register0x00000008 + -200) = pcVar16;
  *(float *)((long)register0x00000008 + -0x90) = fVar26;
  *(code ***)((long)register0x00000008 + -0xc0) = param_3;
  *(undefined8 *)((long)register0x00000008 + -0xb8) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(code ***)((long)register0x00000008 + -0xb0) = param_2;
  *(code ***)((long)register0x00000008 + -0xa8) = param_7;
  *(code **)((long)register0x00000008 + -0xa0) =
       (code *)((long)register0x00000008 + (-0xf0 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0)));
  *(code ***)((long)register0x00000008 + -0x98) = param_5;
  uVar8 = uVar6;
  _dispatch_apply(param_8,uVar6,(code *)((long)register0x00000008 + -0xf0));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar6 + 0x48) != 0) {
    uVar21 = 0;
    lVar1 = *(long *)(uVar6 + 0x20);
    lVar3 = *(long *)(uVar6 + 0x28);
    fVar26 = *(float *)(uVar6 + 0x58);
    dVar25 = (double)NEON_ucvtf(*(undefined8 *)(uVar6 + 0x30));
    lVar2 = *(long *)(uVar6 + 0x38);
    lVar4 = *(long *)(uVar6 + 0x40);
    do {
      *(undefined1 *)(lVar1 + lVar3 * uVar8 + uVar21) =
           *(undefined1 *)
            (lVar2 + lVar4 * (int)((float)(dVar25 + (double)fVar26 * ((double)uVar8 + 0.5)) + -0.5)
            + (long)*(int *)(*(long *)(uVar6 + 0x50) + uVar21 * 4));
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(ulong *)(uVar6 + 0x48));
  }
  return;
}



/* Entry: 10908bc10; end: 10908c557;  */

void FUN_10908bc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long extraout_x8;
  ulong uVar24;
  long extraout_x8_00;
  undefined8 *puVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar26;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar27;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar28;
  float fVar29;
  undefined8 unaff_d9;
  int aiStack_730 [2];
  long alStack_728 [11];
  float fStack_6d0;
  float fStack_6cc;
  undefined8 uStack_6c8;
  long alStack_6c0 [16];
  int aiStack_640 [2];
  long alStack_638 [13];
  float fStack_5d0;
  float fStack_5cc;
  undefined8 uStack_5c8;
  long alStack_5c0 [14];
  long alStack_550 [2];
  int aiStack_540 [2];
  long alStack_538 [11];
  float fStack_4e0;
  float fStack_4dc;
  undefined8 uStack_4d8;
  long alStack_4d0 [12];
  long alStack_470 [2];
  int aiStack_460 [2];
  long alStack_458 [11];
  float fStack_400;
  float fStack_3fc;
  undefined8 uStack_3f8;
  long alStack_3f0 [12];
  long alStack_390 [2];
  int aiStack_380 [2];
  long alStack_378 [11];
  float fStack_320;
  float fStack_31c;
  undefined8 uStack_318;
  long alStack_310 [12];
  long alStack_2b0 [2];
  int aiStack_2a0 [2];
  long alStack_298 [11];
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  long alStack_230 [12];
  long alStack_1d0 [2];
  int aiStack_1c0 [2];
  ulong auStack_1b8 [11];
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  long alStack_150 [12];
  long alStack_f0 [2];
  int aiStack_e0 [2];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = &uStack_70;
  puVar18 = &uStack_78;
  pfVar20 = &fStack_7c;
  uVar11 = param_7;
  uVar4 = param_8;
  FUN_10908b62c(param_2,param_3,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_6 << 2);
  lVar16 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)aiStack_e0 + lVar16;
  if (param_6 != 0) {
    uVar24 = 0;
    dVar28 = (double)NEON_ucvtf(uStack_70);
    do {
      *(int *)(lVar17 + uVar24 * 4) =
           (int)((float)(dVar28 + (double)fStack_7c * ((double)(uVar24 & 0xffffffff) + 0.5)) + -0.5)
      ;
      uVar24 = uVar24 + 1;
    } while (param_6 != uVar24);
  }
  uVar1 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc0000000;
  pcStack_c8 = FUN_10908c884;
  puStack_c0 = &UNK_110ad72c8;
  fStack_80 = fStack_7c;
  uStack_a8 = uStack_78;
  ppuVar8 = &puStack_d8;
  uVar19 = uVar1;
  uStack_b8 = param_5;
  uStack_b0 = param_8;
  uStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_6;
  lStack_88 = lVar17;
  _dispatch_apply(param_7,uVar1,ppuVar8);
  uVar24 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x10) = unaff_d9;
  *(ulong *)((long)alStack_150 + lVar16 + 0x18) = (ulong)(uint)fStack_7c;
  *(long *)((long)alStack_150 + lVar16 + 0x20) = lVar17;
  *(ulong *)((long)alStack_150 + lVar16 + 0x28) = uVar1;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x30) = param_5;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x38) = param_1;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x40) = param_8;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x48) = param_4;
  *(ulong *)((long)alStack_150 + lVar16 + 0x50) = param_6;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x58) = param_7;
  *(undefined1 **)((long)alStack_f0 + lVar16) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_f0 + lVar16 + 8) = 0x10908bd98;
  *(undefined8 *)((long)alStack_150 + lVar16 + 8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)alStack_150 + lVar16;
  uVar1 = (long)&uStack_158 + lVar16;
  lVar15 = (long)&fStack_15c + lVar16;
  pfVar12 = pfVar20;
  uVar23 = uVar4;
  FUN_10908b62c(uVar19,ppuVar8,puVar18);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar18 << 2);
  lVar22 = (long)aiStack_1c0 + (lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  fVar29 = *(float *)((long)&fStack_15c + lVar16);
  if (puVar18 != (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)((long)alStack_150 + lVar16));
    do {
      *(int *)(lVar22 + (long)puVar25 * 4) =
           (int)(((float)uVar19 -
                 (float)(dVar28 + (double)fVar29 * ((double)((ulong)puVar25 & 0xffffffff) + 0.5))) +
                -0.5);
      puVar25 = (undefined8 *)((long)puVar25 + 1);
    } while (puVar18 != puVar25);
  }
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)auStack_1b8 + lVar16) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 8) = 0xc0000000;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x10) = 0x10908c8f8;
  *(undefined **)((long)auStack_1b8 + lVar16 + 0x18) = &UNK_110ad72c8;
  *(undefined8 **)((long)auStack_1b8 + lVar16 + 0x20) = puVar13;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x28) = uVar4;
  *(float *)((long)&fStack_160 + lVar16) = fVar29;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x30) = *(undefined8 *)((long)&uStack_158 + lVar16);
  *(ulong *)((long)auStack_1b8 + lVar16 + 0x38) = uVar24;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x40) = uVar11;
  *(undefined8 **)((long)auStack_1b8 + lVar16 + 0x48) = puVar18;
  *(long *)((long)auStack_1b8 + lVar16 + 0x50) = lVar22;
  lVar27 = (long)auStack_1b8 + lVar16;
  uVar26 = uVar2;
  _dispatch_apply(pfVar20,uVar2,lVar27);
  uVar19 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_150 + lVar16 + 8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar22 + -0x60) = unaff_d9;
  *(ulong *)(lVar22 + -0x58) = (ulong)(uint)fVar29;
  *(long *)(lVar22 + -0x50) = lVar22;
  *(ulong *)(lVar22 + -0x48) = uVar2;
  *(undefined8 **)(lVar22 + -0x40) = puVar13;
  *(ulong *)(lVar22 + -0x38) = uVar24;
  *(undefined8 *)(lVar22 + -0x30) = uVar4;
  *(undefined8 *)(lVar22 + -0x28) = uVar11;
  *(undefined8 **)(lVar22 + -0x20) = puVar18;
  *(float **)(lVar22 + -0x18) = pfVar20;
  *(long *)(lVar22 + -0x10) = (long)alStack_f0 + lVar16;
  *(undefined8 *)(lVar22 + -8) = 0x10908bf2c;
  *(undefined8 *)(lVar22 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = lVar22 + -0x70;
  uVar24 = lVar22 - 0x78;
  lVar21 = lVar22 + -0x7c;
  lVar16 = lVar15;
  uVar11 = uVar23;
  FUN_10908b62c(uVar26,lVar27,uVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar27 = (lVar22 + -0xe0) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar22 + -0x7c);
  if (uVar1 != 0) {
    uVar2 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar22 + -0x70));
    do {
      *(int *)(lVar27 + uVar2 * 4) =
           (int)(((float)uVar26 -
                 (float)(dVar28 + (double)fVar29 * ((double)(uVar2 & 0xffffffff) + 0.5))) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar22 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar22 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar22 + -0xd0) = 0x10908c96c;
  *(undefined **)(lVar22 + -200) = &UNK_110ad72e8;
  *(long *)(lVar22 + -0xc0) = lVar17;
  *(undefined8 *)(lVar22 + -0xb8) = uVar23;
  *(float *)(lVar22 + -0x80) = fVar29;
  *(long *)(lVar22 + -0xb0) = lVar15;
  *(undefined8 *)(lVar22 + -0xa8) = *(undefined8 *)(lVar22 + -0x78);
  *(ulong *)(lVar22 + -0xa0) = uVar19;
  *(float **)(lVar22 + -0x98) = pfVar12;
  *(ulong *)(lVar22 + -0x90) = uVar1;
  *(long *)(lVar22 + -0x88) = lVar27;
  lVar9 = lVar22 + -0xe0;
  uVar6 = uVar3;
  _dispatch_apply(lVar15,uVar3,lVar9);
  uVar4 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar22 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar27 + -0x60) = unaff_d9;
  *(ulong *)(lVar27 + -0x58) = (ulong)(uint)fVar29;
  *(long *)(lVar27 + -0x50) = lVar27;
  *(undefined8 *)(lVar27 + -0x48) = uVar3;
  *(long *)(lVar27 + -0x40) = lVar17;
  *(ulong *)(lVar27 + -0x38) = uVar19;
  *(undefined8 *)(lVar27 + -0x30) = uVar23;
  *(float **)(lVar27 + -0x28) = pfVar12;
  *(ulong *)(lVar27 + -0x20) = uVar1;
  *(long *)(lVar27 + -0x18) = lVar15;
  *(long *)(lVar27 + -0x10) = lVar22 + -0x10;
  *(undefined8 *)(lVar27 + -8) = 0x10908c0c0;
  *(undefined8 *)(lVar27 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = lVar27 + -0x70;
  uVar19 = lVar27 - 0x78;
  lVar22 = lVar27 + -0x7c;
  lVar17 = lVar21;
  uVar23 = uVar11;
  FUN_10908b62c(uVar6,lVar9,uVar24);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar24 << 2);
  lVar9 = (lVar27 + -0xe0) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar27 + -0x7c);
  if (uVar24 != 0) {
    uVar1 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar27 + -0x70));
    do {
      *(int *)(lVar9 + uVar1 * 4) =
           (int)((float)(dVar28 + (double)fVar29 * ((double)(uVar1 & 0xffffffff) + 0.5)) + -0.5);
      uVar1 = uVar1 + 1;
    } while (uVar24 != uVar1);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar27 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar27 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar27 + -0xd0) = 0x10908c9ec;
  *(undefined **)(lVar27 + -200) = &UNK_110ad72e8;
  *(long *)(lVar27 + -0xc0) = lVar14;
  *(undefined8 *)(lVar27 + -0xb8) = uVar11;
  *(float *)(lVar27 + -0x80) = fVar29;
  *(long *)(lVar27 + -0xb0) = lVar21;
  *(undefined8 *)(lVar27 + -0xa8) = *(undefined8 *)(lVar27 + -0x78);
  *(undefined8 *)(lVar27 + -0xa0) = uVar4;
  *(long *)(lVar27 + -0x98) = lVar16;
  *(ulong *)(lVar27 + -0x90) = uVar24;
  *(long *)(lVar27 + -0x88) = lVar9;
  lVar10 = lVar27 + -0xe0;
  uVar3 = uVar5;
  _dispatch_apply(lVar21,uVar5,lVar10);
  uVar6 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar27 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar9 + -0x60) = unaff_d9;
  *(ulong *)(lVar9 + -0x58) = (ulong)(uint)fVar29;
  *(long *)(lVar9 + -0x50) = lVar9;
  *(undefined8 *)(lVar9 + -0x48) = uVar5;
  *(long *)(lVar9 + -0x40) = lVar14;
  *(undefined8 *)(lVar9 + -0x38) = uVar4;
  *(undefined8 *)(lVar9 + -0x30) = uVar11;
  *(long *)(lVar9 + -0x28) = lVar16;
  *(ulong *)(lVar9 + -0x20) = uVar24;
  *(long *)(lVar9 + -0x18) = lVar21;
  *(long *)(lVar9 + -0x10) = lVar27 + -0x10;
  *(undefined8 *)(lVar9 + -8) = 0x10908c248;
  *(undefined8 *)(lVar9 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = lVar9 + -0x70;
  uVar1 = lVar9 - 0x78;
  lVar27 = lVar9 + -0x7c;
  uVar24 = uVar19;
  uVar11 = uVar23;
  FUN_10908b62c(uVar3,lVar10,lVar22);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar19 << 2);
  lVar14 = (lVar9 + -0xe0) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar9 + -0x7c);
  if (uVar19 != 0) {
    uVar26 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar9 + -0x78));
    do {
      *(int *)(lVar14 + uVar26 * 4) =
           (int)((float)(dVar28 + (double)fVar29 * ((double)(uVar26 & 0xffffffff) + 0.5)) + -0.5);
      uVar26 = uVar26 + 1;
    } while (uVar19 != uVar26);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar9 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar9 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar9 + -0xd0) = 0x10908ca6c;
  *(undefined **)(lVar9 + -200) = &UNK_110ad72e8;
  *(long *)(lVar9 + -0xc0) = lVar15;
  *(undefined8 *)(lVar9 + -0xb8) = uVar23;
  *(float *)(lVar9 + -0x80) = fVar29;
  *(long *)(lVar9 + -0xb0) = lVar22;
  *(undefined8 *)(lVar9 + -0xa8) = *(undefined8 *)(lVar9 + -0x70);
  *(undefined8 *)(lVar9 + -0xa0) = uVar6;
  *(ulong *)(lVar9 + -0x98) = uVar19;
  *(long *)(lVar9 + -0x90) = lVar14;
  *(long *)(lVar9 + -0x88) = lVar17;
  lVar21 = lVar9 + -0xe0;
  uVar3 = uVar5;
  _dispatch_apply(lVar22,uVar5,lVar21);
  uVar4 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar9 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar14 + -0x60) = unaff_d9;
  *(ulong *)(lVar14 + -0x58) = (ulong)(uint)fVar29;
  *(long *)(lVar14 + -0x50) = lVar14;
  *(undefined8 *)(lVar14 + -0x48) = uVar5;
  *(long *)(lVar14 + -0x40) = lVar15;
  *(undefined8 *)(lVar14 + -0x38) = uVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar23;
  *(ulong *)(lVar14 + -0x28) = uVar19;
  *(long *)(lVar14 + -0x20) = lVar17;
  *(long *)(lVar14 + -0x18) = lVar22;
  *(long *)(lVar14 + -0x10) = lVar9 + -0x10;
  *(undefined8 *)(lVar14 + -8) = 0x10908c3d0;
  *(undefined8 *)(lVar14 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = lVar14 + -0x70;
  uVar26 = lVar14 - 0x78;
  lVar15 = lVar14 + -0x7c;
  uVar19 = uVar1;
  uVar23 = uVar11;
  FUN_10908b62c(uVar3,lVar21,lVar27);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar22 = (lVar14 + -0xe0) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar14 + -0x7c);
  if (uVar1 != 0) {
    uVar2 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + -0x78));
    do {
      *(int *)(lVar22 + uVar2 * 4) =
           (int)((float)(dVar28 + (double)fVar29 * ((double)(uVar2 & 0xffffffff) + 0.5)) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar14 + -0xd8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar14 + -0xd0) = 0xc0000000;
  *(undefined8 *)(lVar14 + -200) = 0x10908caec;
  *(undefined **)(lVar14 + -0xc0) = &UNK_110ad72c8;
  *(long *)(lVar14 + -0xb8) = lVar16;
  *(undefined8 *)(lVar14 + -0xb0) = uVar11;
  *(float *)(lVar14 + -0x80) = fVar29;
  *(undefined8 *)(lVar14 + -0xa8) = *(undefined8 *)(lVar14 + -0x70);
  *(undefined8 *)(lVar14 + -0xa0) = uVar4;
  *(ulong *)(lVar14 + -0x98) = uVar1;
  *(long *)(lVar14 + -0x90) = lVar22;
  *(ulong *)(lVar14 + -0x88) = uVar24;
  lVar21 = lVar14 + -0xd8;
  uVar3 = uVar5;
  _dispatch_apply(lVar27,uVar5,lVar21);
  uVar6 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar14 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar22 + -0x70) = unaff_d9;
  *(ulong *)(lVar22 + -0x68) = (ulong)(uint)fVar29;
  *(undefined8 *)(lVar22 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar22 + -0x58) = unaff_x27;
  *(long *)(lVar22 + -0x50) = lVar22;
  *(undefined8 *)(lVar22 + -0x48) = uVar5;
  *(long *)(lVar22 + -0x40) = lVar16;
  *(undefined8 *)(lVar22 + -0x38) = uVar4;
  *(undefined8 *)(lVar22 + -0x30) = uVar11;
  *(ulong *)(lVar22 + -0x28) = uVar1;
  *(ulong *)(lVar22 + -0x20) = uVar24;
  *(long *)(lVar22 + -0x18) = lVar27;
  *(long *)(lVar22 + -0x10) = lVar14 + -0x10;
  *(code **)(lVar22 + -8) = FUN_10908c558;
  *(undefined8 *)(lVar22 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = lVar22 + -0x80;
  uVar1 = lVar22 - 0x88;
  lVar27 = lVar22 + -0x8c;
  uVar24 = uVar26;
  uVar11 = uVar23;
  FUN_10908b62c(uVar3,lVar21,lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar26 << 2);
  lVar14 = (lVar22 + -0x100) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar22 + -0x8c);
  if (uVar26 != 0) {
    uVar2 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar22 + -0x88));
    do {
      *(int *)(lVar14 + uVar2 * 4) =
           (int)((float)(dVar28 + (double)fVar29 * ((double)(uVar2 & 0xffffffff) + 0.5)) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar26 != uVar2);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar22 + -0xf8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar22 + -0xf0) = 0xc0000000;
  *(undefined8 *)(lVar22 + -0xe8) = 0x10908cb60;
  *(undefined **)(lVar22 + -0xe0) = &UNK_110ad6de8;
  *(long *)(lVar22 + -0xd8) = lVar17;
  *(undefined8 *)(lVar22 + -0xd0) = uVar23;
  *(long *)(lVar22 + -200) = lVar15;
  *(undefined8 *)(lVar22 + -0xc0) = uVar3;
  *(float *)(lVar22 + -0x90) = fVar29;
  *(undefined8 *)(lVar22 + -0xb8) = *(undefined8 *)(lVar22 + -0x80);
  *(undefined8 *)(lVar22 + -0xb0) = uVar6;
  *(ulong *)(lVar22 + -0xa8) = uVar26;
  *(long *)(lVar22 + -0xa0) = lVar14;
  *(ulong *)(lVar22 + -0x98) = uVar19;
  lVar21 = lVar22 + -0xf8;
  uVar5 = uVar7;
  _dispatch_apply(lVar15,uVar7,lVar21);
  uVar4 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar22 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar14 + -0x70) = unaff_d9;
  *(ulong *)(lVar14 + -0x68) = (ulong)(uint)fVar29;
  *(undefined8 *)(lVar14 + -0x60) = unaff_x28;
  *(long *)(lVar14 + -0x58) = lVar14;
  *(undefined8 *)(lVar14 + -0x50) = uVar7;
  *(long *)(lVar14 + -0x48) = lVar17;
  *(undefined8 *)(lVar14 + -0x40) = uVar3;
  *(undefined8 *)(lVar14 + -0x38) = uVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar23;
  *(ulong *)(lVar14 + -0x28) = uVar26;
  *(ulong *)(lVar14 + -0x20) = uVar19;
  *(long *)(lVar14 + -0x18) = lVar15;
  *(long *)(lVar14 + -0x10) = lVar22 + -0x10;
  *(undefined8 *)(lVar14 + -8) = 0x10908c6f0;
  *(undefined8 *)(lVar14 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar5,lVar21,lVar27,uVar1,lVar14 + -0x80,lVar14 + -0x88,lVar14 + -0x8c);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar17 = (lVar14 + -0xf0) - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  fVar29 = *(float *)(lVar14 + -0x8c);
  if (uVar1 != 0) {
    uVar19 = 0;
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + -0x88));
    do {
      *(int *)(lVar17 + uVar19 * 4) =
           (int)((float)(dVar28 + (double)fVar29 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar1 != uVar19);
  }
  uVar19 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar14 + -0xf0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar14 + -0xe8) = 0xc0000000;
  *(undefined8 *)(lVar14 + -0xe0) = 0x10908cbf4;
  *(undefined **)(lVar14 + -0xd8) = &UNK_110ad72e8;
  *(long *)(lVar14 + -0xd0) = lVar16;
  *(undefined8 *)(lVar14 + -200) = uVar11;
  *(float *)(lVar14 + -0x90) = fVar29;
  *(undefined8 *)(lVar14 + -0xc0) = uVar5;
  *(undefined8 *)(lVar14 + -0xb8) = *(undefined8 *)(lVar14 + -0x80);
  *(undefined8 *)(lVar14 + -0xb0) = uVar4;
  *(ulong *)(lVar14 + -0xa8) = uVar1;
  *(long *)(lVar14 + -0xa0) = lVar17;
  *(ulong *)(lVar14 + -0x98) = uVar24;
  uVar24 = uVar19;
  _dispatch_apply(lVar27,uVar19,lVar14 + -0xf0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar14 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar19 + 0x48) != 0) {
    uVar1 = 0;
    lVar16 = *(long *)(uVar19 + 0x20);
    lVar15 = *(long *)(uVar19 + 0x28);
    fVar29 = *(float *)(uVar19 + 0x58);
    dVar28 = (double)NEON_ucvtf(*(undefined8 *)(uVar19 + 0x30));
    lVar17 = *(long *)(uVar19 + 0x38);
    lVar22 = *(long *)(uVar19 + 0x40);
    do {
      *(undefined1 *)(lVar16 + lVar15 * uVar24 + uVar1) =
           *(undefined1 *)
            (lVar17 + lVar22 * (int)((float)(dVar28 + (double)fVar29 * ((double)uVar24 + 0.5)) +
                                    -0.5) + (long)*(int *)(*(long *)(uVar19 + 0x50) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(uVar19 + 0x48));
  }
  return;
}



/* Entry: 10908c558; end: 10908c883;  */

void FUN_10908c558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x8_00;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 unaff_x28;
  double dVar17;
  float fVar18;
  undefined8 unaff_d9;
  int aiStack_1f0 [2];
  long alStack_1e8 [11];
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  long alStack_180 [16];
  int aiStack_100 [2];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = &uStack_80;
  puVar10 = &uStack_88;
  pfVar11 = &fStack_8c;
  uVar7 = param_6;
  uVar14 = param_8;
  FUN_10908b62c(param_2,param_3,param_7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_6 << 2);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)aiStack_100 + lVar1;
  if (param_6 != 0) {
    uVar12 = 0;
    dVar17 = (double)NEON_ucvtf(uStack_88);
    do {
      *(int *)(lVar16 + uVar12 * 4) =
           (int)((float)(dVar17 + (double)fStack_8c * ((double)(uVar12 & 0xffffffff) + 0.5)) + -0.5)
      ;
      uVar12 = uVar12 + 1;
    } while (param_6 != uVar12);
  }
  uVar4 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc0000000;
  uStack_e8 = 0x10908cb60;
  puStack_e0 = &UNK_110ad6de8;
  fStack_90 = fStack_8c;
  uStack_b8 = uStack_80;
  ppuVar8 = &puStack_f8;
  uVar6 = uVar4;
  uStack_d8 = param_5;
  uStack_d0 = param_8;
  uStack_c8 = param_7;
  uStack_c0 = param_2;
  uStack_b0 = param_1;
  uStack_a8 = param_6;
  lStack_a0 = lVar16;
  uStack_98 = param_4;
  _dispatch_apply(param_7,uVar4,ppuVar8);
  uVar5 = uVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x10) = unaff_d9;
  *(ulong *)((long)alStack_180 + lVar1 + 0x18) = (ulong)(uint)fStack_8c;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x20) = unaff_x28;
  *(long *)((long)alStack_180 + lVar1 + 0x28) = lVar16;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x30) = uVar4;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x38) = param_5;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x40) = param_2;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x48) = param_1;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x50) = param_8;
  *(ulong *)((long)alStack_180 + lVar1 + 0x58) = param_6;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x60) = param_4;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x68) = param_7;
  *(undefined1 **)((long)alStack_180 + lVar1 + 0x70) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_180 + lVar1 + 0x78) = 0x10908c6f0;
  *(undefined8 *)((long)alStack_180 + lVar1 + 8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar6,ppuVar8,pfVar11,puVar10,(long)alStack_180 + lVar1,(long)&uStack_188 + lVar1,
                (long)&fStack_18c + lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar10 << 2);
  lVar16 = (long)aiStack_1f0 + (lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  fVar18 = *(float *)((long)&fStack_18c + lVar1);
  if (puVar10 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    dVar17 = (double)NEON_ucvtf(*(undefined8 *)((long)&uStack_188 + lVar1));
    do {
      *(int *)(lVar16 + (long)puVar13 * 4) =
           (int)((float)(dVar17 + (double)fVar18 * ((double)((ulong)puVar13 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (puVar10 != puVar13);
  }
  uVar12 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)aiStack_1f0 + lVar1) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)alStack_1e8 + lVar1) = 0xc0000000;
  *(undefined8 *)((long)alStack_1e8 + lVar1 + 8) = 0x10908cbf4;
  *(undefined **)((long)alStack_1e8 + lVar1 + 0x10) = &UNK_110ad72e8;
  *(undefined8 **)((long)alStack_1e8 + lVar1 + 0x18) = puVar9;
  *(undefined8 *)((long)alStack_1e8 + lVar1 + 0x20) = uVar14;
  *(float *)((long)&fStack_190 + lVar1) = fVar18;
  uVar14 = *(undefined8 *)((long)alStack_180 + lVar1);
  *(undefined8 *)((long)alStack_1e8 + lVar1 + 0x28) = uVar6;
  *(undefined8 *)((long)alStack_1e8 + lVar1 + 0x30) = uVar14;
  *(undefined8 *)((long)alStack_1e8 + lVar1 + 0x38) = uVar5;
  *(undefined8 **)((long)alStack_1e8 + lVar1 + 0x40) = puVar10;
  *(long *)((long)alStack_1e8 + lVar1 + 0x48) = lVar16;
  *(ulong *)((long)alStack_1e8 + lVar1 + 0x50) = uVar7;
  uVar7 = uVar12;
  _dispatch_apply(pfVar11,uVar12,(long)aiStack_1f0 + lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_180 + lVar1 + 8)) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar12 + 0x48) != 0) {
    uVar15 = 0;
    lVar1 = *(long *)(uVar12 + 0x20);
    lVar2 = *(long *)(uVar12 + 0x28);
    fVar18 = *(float *)(uVar12 + 0x58);
    dVar17 = (double)NEON_ucvtf(*(undefined8 *)(uVar12 + 0x30));
    lVar16 = *(long *)(uVar12 + 0x38);
    lVar3 = *(long *)(uVar12 + 0x40);
    do {
      *(undefined1 *)(lVar1 + lVar2 * uVar7 + uVar15) =
           *(undefined1 *)
            (lVar16 + lVar3 * (int)((float)(dVar17 + (double)fVar18 * ((double)uVar7 + 0.5)) + -0.5)
            + (long)*(int *)(*(long *)(uVar12 + 0x50) + uVar15 * 4));
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ulong *)(uVar12 + 0x48));
  }
  return;
}



/* Entry: 10908c884; end: 10908cc7f;  */

void FUN_10908c884(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar5 = 0;
    lVar1 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    fVar6 = *(float *)(param_1 + 0x58);
    dVar7 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar2 = *(long *)(param_1 + 0x38);
    lVar4 = *(long *)(param_1 + 0x40);
    do {
      *(undefined1 *)(lVar1 + lVar3 * param_2 + uVar5) =
           *(undefined1 *)
            (lVar2 + lVar4 * (int)((float)(dVar7 + (double)fVar6 * ((double)param_2 + 0.5)) + -0.5)
            + (long)*(int *)(*(long *)(param_1 + 0x50) + uVar5 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x48));
  }
  return;
}



/* Entry: 10908cc80; end: 10908d5c7;  */

void FUN_10908cc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long extraout_x8;
  ulong uVar24;
  long extraout_x8_00;
  undefined8 *puVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar26;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined2 *puVar27;
  int *piVar28;
  long lVar29;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  double dVar30;
  float fVar31;
  undefined8 unaff_d9;
  int aiStack_730 [2];
  long alStack_728 [11];
  float fStack_6d0;
  float fStack_6cc;
  undefined8 uStack_6c8;
  long alStack_6c0 [16];
  int aiStack_640 [2];
  long alStack_638 [13];
  float fStack_5d0;
  float fStack_5cc;
  undefined8 uStack_5c8;
  long alStack_5c0 [14];
  long alStack_550 [2];
  int aiStack_540 [2];
  long alStack_538 [11];
  float fStack_4e0;
  float fStack_4dc;
  undefined8 uStack_4d8;
  long alStack_4d0 [12];
  long alStack_470 [2];
  int aiStack_460 [2];
  long alStack_458 [11];
  float fStack_400;
  float fStack_3fc;
  undefined8 uStack_3f8;
  long alStack_3f0 [12];
  long alStack_390 [2];
  int aiStack_380 [2];
  long alStack_378 [11];
  float fStack_320;
  float fStack_31c;
  undefined8 uStack_318;
  long alStack_310 [12];
  long alStack_2b0 [2];
  int aiStack_2a0 [2];
  long alStack_298 [11];
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  long alStack_230 [12];
  long alStack_1d0 [2];
  int aiStack_1c0 [2];
  ulong auStack_1b8 [11];
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  long alStack_150 [12];
  long alStack_f0 [2];
  int aiStack_e0 [2];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = &uStack_70;
  puVar18 = &uStack_78;
  pfVar20 = &fStack_7c;
  uVar11 = param_7;
  uVar4 = param_8;
  FUN_10908b62c(param_2,param_3,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_6 << 2);
  lVar16 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)aiStack_e0 + lVar16;
  if (param_6 != 0) {
    uVar24 = 0;
    dVar30 = (double)NEON_ucvtf(uStack_70);
    do {
      *(int *)(lVar17 + uVar24 * 4) =
           (int)((float)(dVar30 + (double)fStack_7c * ((double)(uVar24 & 0xffffffff) + 0.5)) + -0.5)
      ;
      uVar24 = uVar24 + 1;
    } while (param_6 != uVar24);
  }
  uVar1 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc0000000;
  pcStack_c8 = FUN_10908d8f4;
  puStack_c0 = &UNK_110ad72c8;
  fStack_80 = fStack_7c;
  uStack_a8 = uStack_78;
  ppuVar8 = &puStack_d8;
  uVar19 = uVar1;
  uStack_b8 = param_5;
  uStack_b0 = param_8;
  uStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_6;
  lStack_88 = lVar17;
  _dispatch_apply(param_7,uVar1,ppuVar8);
  uVar24 = uVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x10) = unaff_d9;
  *(ulong *)((long)alStack_150 + lVar16 + 0x18) = (ulong)(uint)fStack_7c;
  *(long *)((long)alStack_150 + lVar16 + 0x20) = lVar17;
  *(ulong *)((long)alStack_150 + lVar16 + 0x28) = uVar1;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x30) = param_5;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x38) = param_1;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x40) = param_8;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x48) = param_4;
  *(ulong *)((long)alStack_150 + lVar16 + 0x50) = param_6;
  *(undefined8 *)((long)alStack_150 + lVar16 + 0x58) = param_7;
  *(undefined1 **)((long)alStack_f0 + lVar16) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_f0 + lVar16 + 8) = 0x10908ce08;
  *(undefined8 *)((long)alStack_150 + lVar16 + 8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)alStack_150 + lVar16;
  uVar1 = (long)&uStack_158 + lVar16;
  lVar15 = (long)&fStack_15c + lVar16;
  pfVar12 = pfVar20;
  uVar23 = uVar4;
  FUN_10908b62c(uVar19,ppuVar8,puVar18);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar18 << 2);
  lVar22 = (long)aiStack_1c0 + (lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  fVar31 = *(float *)((long)&fStack_15c + lVar16);
  if (puVar18 != (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)((long)alStack_150 + lVar16));
    do {
      *(int *)(lVar22 + (long)puVar25 * 4) =
           (int)(((float)uVar19 -
                 (float)(dVar30 + (double)fVar31 * ((double)((ulong)puVar25 & 0xffffffff) + 0.5))) +
                -0.5);
      puVar25 = (undefined8 *)((long)puVar25 + 1);
    } while (puVar18 != puVar25);
  }
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)auStack_1b8 + lVar16) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 8) = 0xc0000000;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x10) = 0x10908d95c;
  *(undefined **)((long)auStack_1b8 + lVar16 + 0x18) = &UNK_110ad72c8;
  *(undefined8 **)((long)auStack_1b8 + lVar16 + 0x20) = puVar13;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x28) = uVar4;
  *(float *)((long)&fStack_160 + lVar16) = fVar31;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x30) = *(undefined8 *)((long)&uStack_158 + lVar16);
  *(ulong *)((long)auStack_1b8 + lVar16 + 0x38) = uVar24;
  *(undefined8 *)((long)auStack_1b8 + lVar16 + 0x40) = uVar11;
  *(undefined8 **)((long)auStack_1b8 + lVar16 + 0x48) = puVar18;
  *(long *)((long)auStack_1b8 + lVar16 + 0x50) = lVar22;
  lVar29 = (long)auStack_1b8 + lVar16;
  uVar26 = uVar2;
  _dispatch_apply(pfVar20,uVar2,lVar29);
  uVar19 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_150 + lVar16 + 8)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar22 + -0x60) = unaff_d9;
  *(ulong *)(lVar22 + -0x58) = (ulong)(uint)fVar31;
  *(long *)(lVar22 + -0x50) = lVar22;
  *(ulong *)(lVar22 + -0x48) = uVar2;
  *(undefined8 **)(lVar22 + -0x40) = puVar13;
  *(ulong *)(lVar22 + -0x38) = uVar24;
  *(undefined8 *)(lVar22 + -0x30) = uVar4;
  *(undefined8 *)(lVar22 + -0x28) = uVar11;
  *(undefined8 **)(lVar22 + -0x20) = puVar18;
  *(float **)(lVar22 + -0x18) = pfVar20;
  *(long *)(lVar22 + -0x10) = (long)alStack_f0 + lVar16;
  *(undefined8 *)(lVar22 + -8) = 0x10908cf9c;
  *(undefined8 *)(lVar22 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = lVar22 + -0x70;
  uVar24 = lVar22 - 0x78;
  lVar21 = lVar22 + -0x7c;
  lVar16 = lVar15;
  uVar11 = uVar23;
  FUN_10908b62c(uVar26,lVar29,uVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar29 = (lVar22 + -0xe0) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar22 + -0x7c);
  if (uVar1 != 0) {
    uVar2 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar22 + -0x70));
    do {
      *(int *)(lVar29 + uVar2 * 4) =
           (int)(((float)uVar26 -
                 (float)(dVar30 + (double)fVar31 * ((double)(uVar2 & 0xffffffff) + 0.5))) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar22 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar22 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar22 + -0xd0) = 0x10908d9c4;
  *(undefined **)(lVar22 + -200) = &UNK_110ad72e8;
  *(long *)(lVar22 + -0xc0) = lVar17;
  *(undefined8 *)(lVar22 + -0xb8) = uVar23;
  *(float *)(lVar22 + -0x80) = fVar31;
  *(long *)(lVar22 + -0xb0) = lVar15;
  *(undefined8 *)(lVar22 + -0xa8) = *(undefined8 *)(lVar22 + -0x78);
  *(ulong *)(lVar22 + -0xa0) = uVar19;
  *(float **)(lVar22 + -0x98) = pfVar12;
  *(ulong *)(lVar22 + -0x90) = uVar1;
  *(long *)(lVar22 + -0x88) = lVar29;
  lVar9 = lVar22 + -0xe0;
  uVar6 = uVar3;
  _dispatch_apply(lVar15,uVar3,lVar9);
  uVar4 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar22 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar29 + -0x60) = unaff_d9;
  *(ulong *)(lVar29 + -0x58) = (ulong)(uint)fVar31;
  *(long *)(lVar29 + -0x50) = lVar29;
  *(undefined8 *)(lVar29 + -0x48) = uVar3;
  *(long *)(lVar29 + -0x40) = lVar17;
  *(ulong *)(lVar29 + -0x38) = uVar19;
  *(undefined8 *)(lVar29 + -0x30) = uVar23;
  *(float **)(lVar29 + -0x28) = pfVar12;
  *(ulong *)(lVar29 + -0x20) = uVar1;
  *(long *)(lVar29 + -0x18) = lVar15;
  *(long *)(lVar29 + -0x10) = lVar22 + -0x10;
  *(undefined8 *)(lVar29 + -8) = 0x10908d130;
  *(undefined8 *)(lVar29 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = lVar29 + -0x70;
  uVar19 = lVar29 - 0x78;
  lVar22 = lVar29 + -0x7c;
  lVar17 = lVar21;
  uVar23 = uVar11;
  FUN_10908b62c(uVar6,lVar9,uVar24);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar24 << 2);
  lVar9 = (lVar29 + -0xe0) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar29 + -0x7c);
  if (uVar24 != 0) {
    uVar1 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar29 + -0x70));
    do {
      *(int *)(lVar9 + uVar1 * 4) =
           (int)((float)(dVar30 + (double)fVar31 * ((double)(uVar1 & 0xffffffff) + 0.5)) + -0.5);
      uVar1 = uVar1 + 1;
    } while (uVar24 != uVar1);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar29 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar29 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar29 + -0xd0) = 0x10908da38;
  *(undefined **)(lVar29 + -200) = &UNK_110ad72e8;
  *(long *)(lVar29 + -0xc0) = lVar14;
  *(undefined8 *)(lVar29 + -0xb8) = uVar11;
  *(float *)(lVar29 + -0x80) = fVar31;
  *(long *)(lVar29 + -0xb0) = lVar21;
  *(undefined8 *)(lVar29 + -0xa8) = *(undefined8 *)(lVar29 + -0x78);
  *(undefined8 *)(lVar29 + -0xa0) = uVar4;
  *(long *)(lVar29 + -0x98) = lVar16;
  *(ulong *)(lVar29 + -0x90) = uVar24;
  *(long *)(lVar29 + -0x88) = lVar9;
  lVar10 = lVar29 + -0xe0;
  uVar3 = uVar5;
  _dispatch_apply(lVar21,uVar5,lVar10);
  uVar6 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar29 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar9 + -0x60) = unaff_d9;
  *(ulong *)(lVar9 + -0x58) = (ulong)(uint)fVar31;
  *(long *)(lVar9 + -0x50) = lVar9;
  *(undefined8 *)(lVar9 + -0x48) = uVar5;
  *(long *)(lVar9 + -0x40) = lVar14;
  *(undefined8 *)(lVar9 + -0x38) = uVar4;
  *(undefined8 *)(lVar9 + -0x30) = uVar11;
  *(long *)(lVar9 + -0x28) = lVar16;
  *(ulong *)(lVar9 + -0x20) = uVar24;
  *(long *)(lVar9 + -0x18) = lVar21;
  *(long *)(lVar9 + -0x10) = lVar29 + -0x10;
  *(undefined8 *)(lVar9 + -8) = 0x10908d2b8;
  *(undefined8 *)(lVar9 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = lVar9 + -0x70;
  uVar1 = lVar9 - 0x78;
  lVar29 = lVar9 + -0x7c;
  uVar24 = uVar19;
  uVar11 = uVar23;
  FUN_10908b62c(uVar3,lVar10,lVar22);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar19 << 2);
  lVar14 = (lVar9 + -0xe0) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar9 + -0x7c);
  if (uVar19 != 0) {
    uVar26 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar9 + -0x78));
    do {
      *(int *)(lVar14 + uVar26 * 4) =
           (int)((float)(dVar30 + (double)fVar31 * ((double)(uVar26 & 0xffffffff) + 0.5)) + -0.5);
      uVar26 = uVar26 + 1;
    } while (uVar19 != uVar26);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar9 + -0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar9 + -0xd8) = 0xc0000000;
  *(undefined8 *)(lVar9 + -0xd0) = 0x10908daac;
  *(undefined **)(lVar9 + -200) = &UNK_110ad72e8;
  *(long *)(lVar9 + -0xc0) = lVar15;
  *(undefined8 *)(lVar9 + -0xb8) = uVar23;
  *(float *)(lVar9 + -0x80) = fVar31;
  *(long *)(lVar9 + -0xb0) = lVar22;
  *(undefined8 *)(lVar9 + -0xa8) = *(undefined8 *)(lVar9 + -0x70);
  *(undefined8 *)(lVar9 + -0xa0) = uVar6;
  *(ulong *)(lVar9 + -0x98) = uVar19;
  *(long *)(lVar9 + -0x90) = lVar14;
  *(long *)(lVar9 + -0x88) = lVar17;
  lVar21 = lVar9 + -0xe0;
  uVar3 = uVar5;
  _dispatch_apply(lVar22,uVar5,lVar21);
  uVar4 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar9 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar14 + -0x60) = unaff_d9;
  *(ulong *)(lVar14 + -0x58) = (ulong)(uint)fVar31;
  *(long *)(lVar14 + -0x50) = lVar14;
  *(undefined8 *)(lVar14 + -0x48) = uVar5;
  *(long *)(lVar14 + -0x40) = lVar15;
  *(undefined8 *)(lVar14 + -0x38) = uVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar23;
  *(ulong *)(lVar14 + -0x28) = uVar19;
  *(long *)(lVar14 + -0x20) = lVar17;
  *(long *)(lVar14 + -0x18) = lVar22;
  *(long *)(lVar14 + -0x10) = lVar9 + -0x10;
  *(undefined8 *)(lVar14 + -8) = 0x10908d440;
  *(undefined8 *)(lVar14 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = lVar14 + -0x70;
  uVar26 = lVar14 - 0x78;
  lVar15 = lVar14 + -0x7c;
  uVar19 = uVar1;
  uVar23 = uVar11;
  FUN_10908b62c(uVar3,lVar21,lVar29);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar22 = (lVar14 + -0xe0) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar14 + -0x7c);
  if (uVar1 != 0) {
    uVar2 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + -0x78));
    do {
      *(int *)(lVar22 + uVar2 * 4) =
           (int)((float)(dVar30 + (double)fVar31 * ((double)(uVar2 & 0xffffffff) + 0.5)) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar5 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar14 + -0xd8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar14 + -0xd0) = 0xc0000000;
  *(undefined8 *)(lVar14 + -200) = 0x10908db20;
  *(undefined **)(lVar14 + -0xc0) = &UNK_110ad72c8;
  *(long *)(lVar14 + -0xb8) = lVar16;
  *(undefined8 *)(lVar14 + -0xb0) = uVar11;
  *(float *)(lVar14 + -0x80) = fVar31;
  *(undefined8 *)(lVar14 + -0xa8) = *(undefined8 *)(lVar14 + -0x70);
  *(undefined8 *)(lVar14 + -0xa0) = uVar4;
  *(ulong *)(lVar14 + -0x98) = uVar1;
  *(long *)(lVar14 + -0x90) = lVar22;
  *(ulong *)(lVar14 + -0x88) = uVar24;
  lVar21 = lVar14 + -0xd8;
  uVar3 = uVar5;
  _dispatch_apply(lVar29,uVar5,lVar21);
  uVar6 = uVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar14 + -0x68)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar22 + -0x70) = unaff_d9;
  *(ulong *)(lVar22 + -0x68) = (ulong)(uint)fVar31;
  *(undefined8 *)(lVar22 + -0x60) = unaff_x28;
  *(undefined8 *)(lVar22 + -0x58) = unaff_x27;
  *(long *)(lVar22 + -0x50) = lVar22;
  *(undefined8 *)(lVar22 + -0x48) = uVar5;
  *(long *)(lVar22 + -0x40) = lVar16;
  *(undefined8 *)(lVar22 + -0x38) = uVar4;
  *(undefined8 *)(lVar22 + -0x30) = uVar11;
  *(ulong *)(lVar22 + -0x28) = uVar1;
  *(ulong *)(lVar22 + -0x20) = uVar24;
  *(long *)(lVar22 + -0x18) = lVar29;
  *(long *)(lVar22 + -0x10) = lVar14 + -0x10;
  *(code **)(lVar22 + -8) = FUN_10908d5c8;
  *(undefined8 *)(lVar22 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = lVar22 + -0x80;
  uVar1 = lVar22 - 0x88;
  lVar29 = lVar22 + -0x8c;
  uVar24 = uVar26;
  uVar11 = uVar23;
  FUN_10908b62c(uVar3,lVar21,lVar15);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar26 << 2);
  lVar14 = (lVar22 + -0x100) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar22 + -0x8c);
  if (uVar26 != 0) {
    uVar2 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar22 + -0x88));
    do {
      *(int *)(lVar14 + uVar2 * 4) =
           (int)((float)(dVar30 + (double)fVar31 * ((double)(uVar2 & 0xffffffff) + 0.5)) + -0.5);
      uVar2 = uVar2 + 1;
    } while (uVar26 != uVar2);
  }
  uVar7 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar22 + -0xf8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar22 + -0xf0) = 0xc0000000;
  *(undefined8 *)(lVar22 + -0xe8) = 0x10908db88;
  *(undefined **)(lVar22 + -0xe0) = &UNK_110ad6de8;
  *(long *)(lVar22 + -0xd8) = lVar17;
  *(undefined8 *)(lVar22 + -0xd0) = uVar23;
  *(long *)(lVar22 + -200) = lVar15;
  *(undefined8 *)(lVar22 + -0xc0) = uVar3;
  *(float *)(lVar22 + -0x90) = fVar31;
  *(undefined8 *)(lVar22 + -0xb8) = *(undefined8 *)(lVar22 + -0x80);
  *(undefined8 *)(lVar22 + -0xb0) = uVar6;
  *(ulong *)(lVar22 + -0xa8) = uVar26;
  *(long *)(lVar22 + -0xa0) = lVar14;
  *(ulong *)(lVar22 + -0x98) = uVar19;
  lVar21 = lVar22 + -0xf8;
  uVar5 = uVar7;
  _dispatch_apply(lVar15,uVar7,lVar21);
  uVar4 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar22 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar14 + -0x70) = unaff_d9;
  *(ulong *)(lVar14 + -0x68) = (ulong)(uint)fVar31;
  *(undefined8 *)(lVar14 + -0x60) = unaff_x28;
  *(long *)(lVar14 + -0x58) = lVar14;
  *(undefined8 *)(lVar14 + -0x50) = uVar7;
  *(long *)(lVar14 + -0x48) = lVar17;
  *(undefined8 *)(lVar14 + -0x40) = uVar3;
  *(undefined8 *)(lVar14 + -0x38) = uVar6;
  *(undefined8 *)(lVar14 + -0x30) = uVar23;
  *(ulong *)(lVar14 + -0x28) = uVar26;
  *(ulong *)(lVar14 + -0x20) = uVar19;
  *(long *)(lVar14 + -0x18) = lVar15;
  *(long *)(lVar14 + -0x10) = lVar22 + -0x10;
  *(undefined8 *)(lVar14 + -8) = 0x10908d760;
  *(undefined8 *)(lVar14 + -0x78) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar5,lVar21,lVar29,uVar1,lVar14 + -0x80,lVar14 + -0x88,lVar14 + -0x8c);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar1 << 2);
  lVar17 = (lVar14 + -0xf0) - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  fVar31 = *(float *)(lVar14 + -0x8c);
  if (uVar1 != 0) {
    uVar19 = 0;
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + -0x88));
    do {
      *(int *)(lVar17 + uVar19 * 4) =
           (int)((float)(dVar30 + (double)fVar31 * ((double)(uVar19 & 0xffffffff) + 0.5)) + -0.5);
      uVar19 = uVar19 + 1;
    } while (uVar1 != uVar19);
  }
  uVar19 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar14 + -0xf0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar14 + -0xe8) = 0xc0000000;
  *(undefined8 *)(lVar14 + -0xe0) = 0x10908dc08;
  *(undefined **)(lVar14 + -0xd8) = &UNK_110ad72e8;
  *(long *)(lVar14 + -0xd0) = lVar16;
  *(undefined8 *)(lVar14 + -200) = uVar11;
  *(float *)(lVar14 + -0x90) = fVar31;
  *(undefined8 *)(lVar14 + -0xc0) = uVar5;
  *(undefined8 *)(lVar14 + -0xb8) = *(undefined8 *)(lVar14 + -0x80);
  *(undefined8 *)(lVar14 + -0xb0) = uVar4;
  *(ulong *)(lVar14 + -0xa8) = uVar1;
  *(long *)(lVar14 + -0xa0) = lVar17;
  *(ulong *)(lVar14 + -0x98) = uVar24;
  uVar24 = uVar19;
  _dispatch_apply(lVar29,uVar19,lVar14 + -0xf0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar14 + -0x78)) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(uVar19 + 0x48);
  if (lVar16 != 0) {
    fVar31 = *(float *)(uVar19 + 0x58);
    dVar30 = (double)NEON_ucvtf(*(undefined8 *)(uVar19 + 0x30));
    lVar17 = *(long *)(uVar19 + 0x38);
    lVar15 = *(long *)(uVar19 + 0x40);
    puVar27 = (undefined2 *)(*(long *)(uVar19 + 0x20) + *(long *)(uVar19 + 0x28) * uVar24);
    piVar28 = *(int **)(uVar19 + 0x50);
    do {
      *puVar27 = *(undefined2 *)
                  (lVar17 + lVar15 * (int)((float)(dVar30 + (double)fVar31 * ((double)uVar24 + 0.5))
                                          + -0.5) + (long)*piVar28 * 2);
      lVar16 = lVar16 + -1;
      puVar27 = puVar27 + 1;
      piVar28 = piVar28 + 1;
    } while (lVar16 != 0);
  }
  return;
}



/* Entry: 10908d5c8; end: 10908d8f3;  */

void FUN_10908d5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined2 *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 unaff_x28;
  double dVar17;
  float fVar18;
  undefined8 unaff_d9;
  int aiStack_1f0 [2];
  long alStack_1e8 [11];
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  long alStack_180 [16];
  int aiStack_100 [2];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = &uStack_80;
  puVar8 = &uStack_88;
  pfVar9 = &fStack_8c;
  uVar5 = param_6;
  uVar12 = param_8;
  FUN_10908b62c(param_2,param_3,param_7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_6 << 2);
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)aiStack_100 + lVar13;
  if (param_6 != 0) {
    uVar10 = 0;
    dVar17 = (double)NEON_ucvtf(uStack_88);
    do {
      *(int *)(lVar16 + uVar10 * 4) =
           (int)((float)(dVar17 + (double)fStack_8c * ((double)(uVar10 & 0xffffffff) + 0.5)) + -0.5)
      ;
      uVar10 = uVar10 + 1;
    } while (param_6 != uVar10);
  }
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc0000000;
  uStack_e8 = 0x10908db88;
  puStack_e0 = &UNK_110ad6de8;
  fStack_90 = fStack_8c;
  uStack_b8 = uStack_80;
  ppuVar6 = &puStack_f8;
  uVar4 = uVar2;
  uStack_d8 = param_5;
  uStack_d0 = param_8;
  uStack_c8 = param_7;
  uStack_c0 = param_2;
  uStack_b0 = param_1;
  uStack_a8 = param_6;
  lStack_a0 = lVar16;
  uStack_98 = param_4;
  _dispatch_apply(param_7,uVar2,ppuVar6);
  uVar3 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x10) = unaff_d9;
  *(ulong *)((long)alStack_180 + lVar13 + 0x18) = (ulong)(uint)fStack_8c;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x20) = unaff_x28;
  *(long *)((long)alStack_180 + lVar13 + 0x28) = lVar16;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x30) = uVar2;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x38) = param_5;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x40) = param_2;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x48) = param_1;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x50) = param_8;
  *(ulong *)((long)alStack_180 + lVar13 + 0x58) = param_6;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x60) = param_4;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x68) = param_7;
  *(undefined1 **)((long)alStack_180 + lVar13 + 0x70) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_180 + lVar13 + 0x78) = 0x10908d760;
  *(undefined8 *)((long)alStack_180 + lVar13 + 8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10908b62c(uVar4,ppuVar6,pfVar9,puVar8,(long)alStack_180 + lVar13,(long)&uStack_188 + lVar13,
                (long)&fStack_18c + lVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar8 << 2);
  lVar16 = (long)aiStack_1f0 + (lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  fVar18 = *(float *)((long)&fStack_18c + lVar13);
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    dVar17 = (double)NEON_ucvtf(*(undefined8 *)((long)&uStack_188 + lVar13));
    do {
      *(int *)(lVar16 + (long)puVar11 * 4) =
           (int)((float)(dVar17 + (double)fVar18 * ((double)((ulong)puVar11 & 0xffffffff) + 0.5)) +
                -0.5);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar8 != puVar11);
  }
  uVar10 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)((long)aiStack_1f0 + lVar13) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)((long)alStack_1e8 + lVar13) = 0xc0000000;
  *(undefined8 *)((long)alStack_1e8 + lVar13 + 8) = 0x10908dc08;
  *(undefined **)((long)alStack_1e8 + lVar13 + 0x10) = &UNK_110ad72e8;
  *(undefined8 **)((long)alStack_1e8 + lVar13 + 0x18) = puVar7;
  *(undefined8 *)((long)alStack_1e8 + lVar13 + 0x20) = uVar12;
  *(float *)((long)&fStack_190 + lVar13) = fVar18;
  uVar12 = *(undefined8 *)((long)alStack_180 + lVar13);
  *(undefined8 *)((long)alStack_1e8 + lVar13 + 0x28) = uVar4;
  *(undefined8 *)((long)alStack_1e8 + lVar13 + 0x30) = uVar12;
  *(undefined8 *)((long)alStack_1e8 + lVar13 + 0x38) = uVar3;
  *(undefined8 **)((long)alStack_1e8 + lVar13 + 0x40) = puVar8;
  *(long *)((long)alStack_1e8 + lVar13 + 0x48) = lVar16;
  *(ulong *)((long)alStack_1e8 + lVar13 + 0x50) = uVar5;
  uVar5 = uVar10;
  _dispatch_apply(pfVar9,uVar10,(long)aiStack_1f0 + lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_180 + lVar13 + 8)) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(uVar10 + 0x48);
  if (lVar13 != 0) {
    fVar18 = *(float *)(uVar10 + 0x58);
    dVar17 = (double)NEON_ucvtf(*(undefined8 *)(uVar10 + 0x30));
    lVar16 = *(long *)(uVar10 + 0x38);
    lVar1 = *(long *)(uVar10 + 0x40);
    puVar14 = (undefined2 *)(*(long *)(uVar10 + 0x20) + *(long *)(uVar10 + 0x28) * uVar5);
    piVar15 = *(int **)(uVar10 + 0x50);
    do {
      *puVar14 = *(undefined2 *)
                  (lVar16 + lVar1 * (int)((float)(dVar17 + (double)fVar18 * ((double)uVar5 + 0.5)) +
                                         -0.5) + (long)*piVar15 * 2);
      lVar13 = lVar13 + -1;
      puVar14 = puVar14 + 1;
      piVar15 = piVar15 + 1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 10908d8f4; end: 10908dc7f;  */

void FUN_10908d8f4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined2 *puVar4;
  int *piVar5;
  float fVar6;
  double dVar7;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    fVar6 = *(float *)(param_1 + 0x58);
    dVar7 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    puVar4 = (undefined2 *)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * param_2);
    piVar5 = *(int **)(param_1 + 0x50);
    do {
      *puVar4 = *(undefined2 *)
                 (lVar1 + lVar2 * (int)((float)(dVar7 + (double)fVar6 * ((double)param_2 + 0.5)) +
                                       -0.5) + (long)*piVar5 * 2);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10908dc80; end: 10908dcef;  */

void FUN_10908dc80(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_2 != 0) {
    plVar1 = &lStack_40;
    puStack_38 = PTR_PTR_112700388;
    lStack_40 = param_2;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      uVar3 = param_3[1];
      uVar2 = *param_3;
      *(undefined8 *)((long)plVar1 + 0x28) = param_3[2];
      *(undefined8 *)((long)plVar1 + 0x20) = uVar3;
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      *(undefined8 *)((long)plVar1 + 8) = param_1;
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
    }
  }
  return;
}



/* Entry: 10908dcf0; end: 10908dd13; -[SCImageProcessVideoExportStaticFrameConfig copyWithZone:] */

undefined8 FUN_10908dcf0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10908dd14; end: 10908dda3; -[SCImageProcessVideoExportStaticFrameConfig hash] */

undefined8 * FUN_10908dd14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x24);
  lStack_40 = (long)*(int *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_28 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  puVar1 = &uStack_48;
  func_0x000107c3191c(puVar1,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) != 0) && (puVar1[2] == param_3[2])) {
        uStack_98 = puVar1[4];
        uStack_a0 = puVar1[3];
        uStack_90 = puVar1[5];
        uStack_b8 = param_3[4];
        uStack_c0 = param_3[3];
        uStack_b0 = param_3[5];
        puVar4 = &uStack_a0;
        _CMTimeCompare(puVar4,&uStack_c0);
        if ((int)puVar4 == 0) {
          dVar5 = ABS((double)puVar1[1] + (double)param_3[1]) * 2.220446049250313e-16;
          if (dVar5 <= 2.2250738585072014e-308) {
            dVar5 = 2.2250738585072014e-308;
          }
          puVar4 = (undefined8 *)(ulong)(ABS((double)puVar1[1] - (double)param_3[1]) < dVar5);
          goto LAB_10908de40;
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_10908de40:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10908dda4; end: 10908de97; -[SCImageProcessVideoExportStaticFrameConfig isEqual:] */

bool FUN_10908dda4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  double dVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
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
      if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
        uStack_48 = *(undefined8 *)(param_1 + 0x20);
        uStack_50 = *(undefined8 *)(param_1 + 0x18);
        uStack_40 = *(undefined8 *)(param_1 + 0x28);
        uStack_68 = *(undefined8 *)(param_3 + 0x20);
        uStack_70 = *(undefined8 *)(param_3 + 0x18);
        uStack_60 = *(undefined8 *)(param_3 + 0x28);
        puVar3 = &uStack_50;
        _CMTimeCompare(puVar3,&uStack_70);
        if ((int)puVar3 == 0) {
          dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
          if (dVar5 <= 2.2250738585072014e-308) {
            dVar5 = 2.2250738585072014e-308;
          }
          bVar4 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar5;
          goto LAB_10908de40;
        }
      }
      bVar4 = false;
    }
  }
LAB_10908de40:
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 10908de98; end: 10908debb; -[SCImageProcessRenderPipelineConfig copyWithZone:] */

undefined8 FUN_10908de98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10908debc; end: 10908df17; -[SCImageProcessRenderPipelineConfig hash] */

ulong * FUN_10908debc(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10908df18; end: 10908dfaf; -[SCImageProcessRenderPipelineConfig isEqual:] */

bool FUN_10908df18(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10908dfb0; end: 10908dfdb; +[SCGrapheneImageProcessMetric glContextApiVersion] */

void FUN_10908dfb0(void)

{
  _objc_alloc(PTR_PTR_1126dd258);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10908dfdc; end: 10908e007; +[SCGrapheneImageProcessMetric stickyPbRatioBp] */

void FUN_10908dfdc(void)

{
  _objc_alloc(PTR_PTR_1126dd258);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10908e008; end: 10908e033; +[SCGrapheneImageProcessMetric stickyPbWorstScore] */

void FUN_10908e008(void)

{
  _objc_alloc(PTR_PTR_1126dd258);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10908e034; end: 10908e0d3; -[SCGrapheneImageProcessMetric description] */

void FUN_10908e034(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1f2b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f1f2b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112700398;
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



/* Entry: 10908e0d4; end: 10908e22b; -[SCGrapheneRegistry imageProcessGraphene] */

void FUN_10908e0d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10908e15c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113730928 != -1) {
    func_0x000107c27d9c(0x113730928,&puStack_48);
  }
  uVar1 = uRam0000000113730920;
  _objc_retain(uRam0000000113730920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908e22c; end: 10908e2cf; -[SCUcoCommandMapperServices initWithUcoPhotoCommandMapper:ucoVideoCommandMapper:] */

undefined1 *
FUN_10908e22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127003a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


