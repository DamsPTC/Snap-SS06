/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b10260c; end: 10b102637;  */

long FUN_10b10260c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b102638; end: 10b102643;  */

long FUN_10b102638(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbad28;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b102644; end: 10b1026db;  */

void FUN_10b102644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfbe8;
  _objc_alloc(PTR_PTR_1126dfbe8);
  lVar2 = param_1;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  func_0x00010563299c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa820(puVar1,param_2,lVar2,param_1);
  FUN_10b10273c();
  func_0x00010b102744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b1026dc; end: 10b10273b;  */

undefined8 * FUN_10b1026dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  func_0x0001052a07e8(param_1 + 4,param_3);
  return param_1;
}



/* Entry: 10b10273c; end: 10b10274b;  */

void FUN_10b10273c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10274c; end: 10b102893;  */

void FUN_10b10274c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  _objc_retain();
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_60);
  func_0x00010c069980(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0effc0(&uStack_78);
  func_0x00010bf25e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0effc0(&uStack_90);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cStack_48 == '\x01') {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  param_1[5] = uStack_70;
  param_1[4] = uStack_78;
  param_1[6] = uStack_68;
  param_1[8] = uStack_88;
  param_1[7] = uStack_90;
  param_1[9] = uStack_80;
  _objc_release(param_2);
  FUN_10b102894();
  func_0x000107c279a4(&uStack_60);
  func_0x00010b1028a4();
  func_0x00010b10289c();
  return;
}



/* Entry: 10b102894; end: 10b1028ab;  */

void FUN_10b102894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b1028ac; end: 10b102923; -[SCNContentManagerStorageManager initWithCpp:] */

undefined1 * FUN_10b1028ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b102dd4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b102da8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b102924; end: 10b102a7f; +[SCNContentManagerStorageManager create:userId:] */

void FUN_10b102924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int extraout_w10;
  undefined8 unaff_x21;
  long lStack_68;
  long lStack_60;
  undefined **appuStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  func_0x00010b102df4();
  _objc_retain(param_4);
  FUN_10b0f2bd0(appuStack_50,param_3);
  func_0x000107c27f20(&lStack_68,param_4);
  FUN_10b185118(&lStack_40,appuStack_50,&lStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_68);
  func_0x0001052a712c(appuStack_50);
  if (lStack_40 == 0) {
    unaff_x21 = 0;
  }
  else {
    appuStack_50[0] = &PTR_DAT_110cbadf8;
    lStack_68 = lStack_40;
    lStack_60 = lStack_38;
    if (lStack_38 != 0) {
      do {
        func_0x00010b102dd4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(appuStack_50,&lStack_68,FUN_10b102d34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b102e08();
  }
  FUN_10b102da8(&lStack_40);
  func_0x00010b102dec();
  func_0x00010b102de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10b102a80; end: 10b102bd7; -[SCNContentManagerStorageManager insertContent:cachePolicy:data:] */

void FUN_10b102a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [72];
  
  func_0x00010b102df4();
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0f571c(auStack_a8,param_3);
  FUN_10b0f30c4(auStack_c0,param_4);
  func_0x000107c281c4(auStack_d0,param_5);
  (**(code **)(*plVar1 + 0x10))(auStack_88,plVar1,auStack_a8,auStack_c0,auStack_d0);
  func_0x000107c27d78(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  FUN_10b0fce50(auStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b102e14();
  _objc_release(param_5);
  func_0x00010b102dec();
  func_0x00010b102de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b102bd8; end: 10b102c9b; -[SCNContentManagerStorageManager createContentWriter:] */

void FUN_10b102bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b102df4();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0f30c4(auStack_58,param_3);
  (**(code **)(*plVar1 + 0x18))(auStack_40,plVar1,auStack_58);
  FUN_10b0fc8f8(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b102dfc();
  func_0x00010b102de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b102c9c; end: 10b102cef; -[SCNContentManagerStorageManager .cxx_destruct] */

void FUN_10b102c9c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbadf8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b102da8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b102cf0; end: 10b102d33; -[SCNContentManagerStorageManager .cxx_construct] */

undefined8 * FUN_10b102cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b102dd4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b102d34; end: 10b102da7;  */

void FUN_10b102d34(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b9ed8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b102dd4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b102da8(&uStack_30);
  return;
}



/* Entry: 10b102da8; end: 10b102dd3;  */

long FUN_10b102da8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b102dd4; end: 10b102e2b;  */

void FUN_10b102dd4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b102e2c; end: 10b102ea3; -[SCNContentManagerStreamerCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b102e2c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b103688();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052aacf8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b102ea4; end: 10b102f2b; -[SCNContentManagerStreamerCallbackCppProxy onMetadataAvailable:] */

void FUN_10b102ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010bf4c940();
  uStack_28 = param_3;
  (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_28);
  FUN_10b103674();
  return;
}



/* Entry: 10b102f2c; end: 10b102ff7; -[SCNContentManagerStreamerCallbackCppProxy onDataReceived:dataSlice:] */

void FUN_10b102f2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b1036a8();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_10b101880();
  uStack_38 = param_2;
  FUN_10b0fcb7c(auStack_60);
  func_0x00010b1036d4(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000107c27d78(auStack_50);
  func_0x00010b103698();
  func_0x00010b103674();
  return;
}



/* Entry: 10b102ff8; end: 10b103053; -[SCNContentManagerStreamerCallbackCppProxy onComplete] */

void FUN_10b102ff8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10b103054; end: 10b103117; -[SCNContentManagerStreamerCallbackCppProxy onFailure:error:] */

void FUN_10b103054(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x00010b1036a8();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_10b101880();
  uStack_38 = param_2;
  func_0x00010bcc1b7c(auStack_80);
  func_0x00010b1036d4(*(undefined8 *)(*plVar1 + 0x28));
  func_0x0001052a03ac(auStack_80);
  func_0x00010b103698();
  func_0x00010b103674();
  return;
}



/* Entry: 10b103118; end: 10b10324b;  */

void FUN_10b103118(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b103220);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfbf0;
  _objc_opt_class(PTR_PTR_1126dfbf0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbae60;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b1032e0);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10364c(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x00010b103688();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b103674();
  return;
}



/* Entry: 10b10324c; end: 10b10329f; -[SCNContentManagerStreamerCallbackCppProxy .cxx_destruct] */

void FUN_10b10324c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbaf60;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052aacf8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1032a0; end: 10b1032df; -[SCNContentManagerStreamerCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b1032a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b103688();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1032e0; end: 10b1033d3;  */

void FUN_10b1032e0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbaea0;
  puVar1[3] = &PTR_DAT_110cbaf30;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x00010b103688();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbaef0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10364c(&uStack_50);
  return;
}



/* Entry: 10b1033d4; end: 10b1033d7;  */

void FUN_10b1033d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbaea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1033d8; end: 10b1033eb;  */

void FUN_10b1033d8(void)

{
  FUN_10b10363c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1033ec; end: 10b1033f7;  */

long FUN_10b1033ec(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbae60;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b1036a0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b1033f8; end: 10b103433;  */

void FUN_10b1033f8(void)

{
  func_0x00010b1036ec();
  return;
}



/* Entry: 10b103434; end: 10b103493;  */

void FUN_10b103434(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b1039d4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5380(uVar2);
  func_0x00010b103698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b103494; end: 10b103507;  */

void FUN_10b103494(undefined8 param_1)

{
  func_0x00010b1036bc();
  FUN_10b1018e4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0fcc48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b103708();
  func_0x00010c0e34a0();
  func_0x00010b1036a0();
  func_0x00010b103674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b103508; end: 10b103537;  */

void FUN_10b103508(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fa0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b103538; end: 10b1035ab;  */

void FUN_10b103538(undefined8 param_1)

{
  func_0x00010b1036bc();
  FUN_10b1018e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b103708();
  func_0x00010c0e4120();
  func_0x00010b1036a0();
  func_0x00010b103674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b1035ac; end: 10b10363b;  */

long FUN_10b1035ac(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbae60;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b1036a0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10363c; end: 10b10364b;  */

void FUN_10b10363c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbaea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10364c; end: 10b103673;  */

long FUN_10b10364c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b103674; end: 10b103727;  */

void FUN_10b103674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b103728; end: 10b10379f; -[SCNContentManagerStreamerCancelable initWithCpp:] */

undefined1 * FUN_10b103728(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b1039a4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052aad20(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b1037a0; end: 10b1037fb; -[SCNContentManagerStreamerCancelable cancel] */

void FUN_10b1037a0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b1037fc; end: 10b103827;  */

void FUN_10b1037fc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b1038c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b103828; end: 10b10387b; -[SCNContentManagerStreamerCancelable .cxx_destruct] */

void FUN_10b103828(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbaf70;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052aad20((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10387c; end: 10b1038bf; -[SCNContentManagerStreamerCancelable .cxx_construct] */

undefined8 * FUN_10b10387c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b1039a4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1038c0; end: 10b103933;  */

void FUN_10b1038c0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbaf70;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b1039a4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b103934);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b1039b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b103934; end: 10b1039a3;  */

void FUN_10b103934(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfbf8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b1039a4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052aad20(&uStack_30);
  return;
}



/* Entry: 10b1039a4; end: 10b1039d3;  */

void FUN_10b1039a4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1039d4; end: 10b103a03;  */

void FUN_10b1039d4(void)

{
  _objc_alloc(PTR_PTR_1126dfc00);
  func_0x00010c003780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b103a04; end: 10b103aff;  */

void FUN_10b103a04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbafd8;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b103b00);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b103f6c(&uStack_60);
    FUN_10b103f98();
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b103ad0);
  (*pcVar2)();
}



/* Entry: 10b103b00; end: 10b103bff;  */

void FUN_10b103b00(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110cbb018;
  puVar4[3] = &PTR_DAT_110cbb090;
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
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cbb068;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b103f6c(&uStack_50);
  return;
}



/* Entry: 10b103c00; end: 10b103c03;  */

void FUN_10b103c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b103c04; end: 10b103c17;  */

void FUN_10b103c04(void)

{
  FUN_10b103f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b103c18; end: 10b103c23;  */

long FUN_10b103c18(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbafd8;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b103fa0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b103c24; end: 10b103c63;  */

void FUN_10b103c24(void)

{
  func_0x00010b103fa8();
  return;
}



/* Entry: 10b103c64; end: 10b103e07;  */

void FUN_10b103c64(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x000106af6544(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f4280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b103fa0();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010bf987e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcc1b7c(&uStack_d0);
    uStack_80 = uStack_c0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_58 = cStack_98 == '\x01';
    if ((bool)uStack_58) {
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_60 = uStack_a0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
    }
    FUN_10b103f2c(param_1,&uStack_90);
    func_0x0001052a03ac(&uStack_90);
    func_0x0001052a03ac(&uStack_d0);
    _objc_release(lVar3);
  }
  else {
    FUN_10b103fb4(&uStack_90,lVar2);
    FUN_10b103e98(param_1,&uStack_90);
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_10b103efc(&uStack_90);
  }
  func_0x00010b103fa0();
  func_0x00010b103f98();
  func_0x00010b103f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b103e08; end: 10b103e97;  */

long FUN_10b103e08(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbafd8;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b103fa0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b103e98; end: 10b103efb;  */

void FUN_10b103e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10b103efc; end: 10b103f2b;  */

long FUN_10b103efc(long param_1)

{
  long lStack_28;
  
  func_0x0001052b0a84(param_1 + 0x30);
  func_0x0001052aba78(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x0001052ab9d0(&lStack_28);
  return param_1;
}



/* Entry: 10b103f2c; end: 10b103f43;  */

void FUN_10b103f2c(void)

{
  FUN_10b103f44();
  return;
}



/* Entry: 10b103f44; end: 10b103f5b;  */

void FUN_10b103f44(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b103f5c; end: 10b103f6b;  */

void FUN_10b103f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b103f6c; end: 10b103f97;  */

long FUN_10b103f6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b103f98; end: 10b103fb3;  */

void FUN_10b103f98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b103fb4; end: 10b1040e3;  */

void FUN_10b103fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2978e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0feb7c(auStack_58);
  func_0x00010c1585e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b1040e4(auStack_70);
  func_0x00010c0cc040(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b104200(auStack_88);
  func_0x0001052b0a34(param_1,auStack_58,auStack_70,auStack_88);
  func_0x0001052b0a84(auStack_88);
  _objc_release(param_2);
  func_0x0001052aba78(auStack_70);
  func_0x00010b104380();
  func_0x0001052ab9a4(auStack_58);
  _objc_release(uVar1);
  func_0x00010b104330();
  return;
}



/* Entry: 10b1040e4; end: 10b1041ff;  */

/* WARNING: Possible PIC construction at 0x00010b104124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b104188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b104240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b1042a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b104244) */
/* WARNING: Removing unreachable block (ram,0x00010b10424c) */
/* WARNING: Removing unreachable block (ram,0x00010b10418c) */
/* WARNING: Removing unreachable block (ram,0x00010b104128) */
/* WARNING: Removing unreachable block (ram,0x00010b104194) */
/* WARNING: Removing unreachable block (ram,0x00010b1041ac) */
/* WARNING: Removing unreachable block (ram,0x00010b1041c0) */
/* WARNING: Removing unreachable block (ram,0x00010b1041e0) */
/* WARNING: Removing unreachable block (ram,0x00010b1041f8) */
/* WARNING: Removing unreachable block (ram,0x00010b1041a4) */
/* WARNING: Removing unreachable block (ram,0x00010b104130) */
/* WARNING: Removing unreachable block (ram,0x00010b104138) */
/* WARNING: Removing unreachable block (ram,0x00010b10413c) */
/* WARNING: Removing unreachable block (ram,0x00010b10414c) */
/* WARNING: Removing unreachable block (ram,0x00010b104154) */
/* WARNING: Removing unreachable block (ram,0x00010b104188) */
/* WARNING: Removing unreachable block (ram,0x00010b1042a8) */
/* WARNING: Removing unreachable block (ram,0x00010b104254) */
/* WARNING: Removing unreachable block (ram,0x00010b104258) */
/* WARNING: Removing unreachable block (ram,0x00010b104268) */
/* WARNING: Removing unreachable block (ram,0x00010b104270) */
/* WARNING: Removing unreachable block (ram,0x00010b1042a4) */
/* WARNING: Removing unreachable block (ram,0x00010b1042b0) */
/* WARNING: Removing unreachable block (ram,0x00010b1042c8) */
/* WARNING: Removing unreachable block (ram,0x00010b1042dc) */
/* WARNING: Removing unreachable block (ram,0x00010b1042fc) */
/* WARNING: Removing unreachable block (ram,0x00010b104314) */
/* WARNING: Removing unreachable block (ram,0x00010b1042c0) */
/* WARNING: Removing unreachable block (ram,0x00010b104354) */

void FUN_10b1040e4(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010b104338();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x0001052b0b30();
  func_0x00010b10436c();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b104200; end: 10b10431b;  */

/* WARNING: Possible PIC construction at 0x00010b104240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b1042a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b104244) */
/* WARNING: Removing unreachable block (ram,0x00010b10424c) */
/* WARNING: Removing unreachable block (ram,0x00010b1042a8) */
/* WARNING: Removing unreachable block (ram,0x00010b104254) */
/* WARNING: Removing unreachable block (ram,0x00010b104258) */
/* WARNING: Removing unreachable block (ram,0x00010b104268) */
/* WARNING: Removing unreachable block (ram,0x00010b104270) */
/* WARNING: Removing unreachable block (ram,0x00010b1042a4) */
/* WARNING: Removing unreachable block (ram,0x00010b1042b0) */
/* WARNING: Removing unreachable block (ram,0x00010b1042c8) */
/* WARNING: Removing unreachable block (ram,0x00010b1042dc) */
/* WARNING: Removing unreachable block (ram,0x00010b1042fc) */
/* WARNING: Removing unreachable block (ram,0x00010b104314) */
/* WARNING: Removing unreachable block (ram,0x00010b1042c0) */
/* WARNING: Removing unreachable block (ram,0x00010b104354) */

void FUN_10b104200(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010b104338();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x0001052b0fdc();
  func_0x00010b10436c();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b10431c; end: 10b1043b7;  */

void FUN_10b10431c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b1043b8; end: 10b10442b;  */

void FUN_10b1043b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfc08;
  _objc_alloc(PTR_PTR_1126dfc08);
  lVar2 = param_1;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d7e0(puVar1,param_2,lVar2,*(undefined1 *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x21),*(undefined8 *)(param_1 + 0x28));
  FUN_10b10442c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b10442c; end: 10b104437;  */

void FUN_10b10442c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b104438; end: 10b1044af; -[SCNContentManagerTaskCompletionCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b104438(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b104944();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a6df8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b1044b0; end: 10b10450f; -[SCNContentManagerTaskCompletionCallbackCppProxy done:] */

void FUN_10b1044b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10b104510; end: 10b10464f;  */

void FUN_10b104510(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b10461c);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfc10;
  _objc_opt_class(PTR_PTR_1126dfc10);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbb100;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b1046e4);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10491c(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b104944();
      } while (extraout_w10 != 0);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b104650; end: 10b1046a3; -[SCNContentManagerTaskCompletionCallbackCppProxy .cxx_destruct] */

void FUN_10b104650(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb1d0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a6df8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1046a4; end: 10b1046e3; -[SCNContentManagerTaskCompletionCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b1046a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b104944();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1046e4; end: 10b1047d7;  */

void FUN_10b1046e4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbb140;
  puVar1[3] = &PTR_DAT_110cbb1b8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b104944();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbb190;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10491c(&uStack_50);
  return;
}



/* Entry: 10b1047d8; end: 10b1047db;  */

void FUN_10b1047d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1047dc; end: 10b1047ef;  */

void FUN_10b1047dc(void)

{
  FUN_10b10490c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1047f0; end: 10b1047fb;  */

long FUN_10b1047f0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb100;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b1047fc; end: 10b104837;  */

void FUN_10b1047fc(void)

{
  func_0x00010b104970();
  return;
}



/* Entry: 10b104838; end: 10b104877;  */

void FUN_10b104838(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf88100(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b104878; end: 10b10490b;  */

long FUN_10b104878(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb100;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10490c; end: 10b10491b;  */

void FUN_10b10490c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10491c; end: 10b104943;  */

long FUN_10b10491c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b104944; end: 10b10497b;  */

void FUN_10b104944(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b10497c; end: 10b104acf;  */

void FUN_10b10497c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  _objc_retain();
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_60);
  uVar1 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_80);
  func_0x00010c1585e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b1040e4(auStack_98);
  uVar2 = param_2;
  func_0x00010bf15780(param_2);
  func_0x00010c27dd80(param_2);
  func_0x0001052b1ba0(param_1,auStack_60,auStack_80,auStack_98,uVar2,param_2);
  func_0x0001052aba78(auStack_98);
  FUN_10b104ad0();
  func_0x000107c279a4(auStack_80);
  _objc_release(uVar1);
  func_0x000107c279a4(auStack_60);
  func_0x00010b104ae0();
  func_0x00010b104ad8();
  return;
}



/* Entry: 10b104ad0; end: 10b104ae7;  */

void FUN_10b104ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b104ae8; end: 10b104b37; -[SCNContentManagerWriteStreamCppProxy initWithCpp:] */

undefined1 * FUN_10b104ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705d70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b10537c((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b104b38; end: 10b104bef; -[SCNContentManagerWriteStreamCppProxy putBytesSlice:] */

void FUN_10b104b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0fcb7c(auStack_50,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_50);
  func_0x000107c27d78(auStack_40);
  func_0x00010b1053dc();
  return;
}



/* Entry: 10b104bf0; end: 10b104cc7; -[SCNContentManagerWriteStreamCppProxy setError:message:networkCode:] */

void FUN_10b104bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_4);
  func_0x000107c28124(param_5);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_3,auStack_48,param_5 & 0xffffffffff);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010b1053d4();
  func_0x00010b1053dc();
  return;
}



/* Entry: 10b104cc8; end: 10b104d23; -[SCNContentManagerWriteStreamCppProxy onComplete] */

void FUN_10b104cc8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 10b104d24; end: 10b104e5b;  */

void FUN_10b104d24(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b104e2c);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfc18;
  _objc_opt_class(PTR_PTR_1126dfc18);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbb238;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b104f60);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b105278(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b1053c4();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1053dc();
  return;
}



/* Entry: 10b104e5c; end: 10b104ecb;  */

void FUN_10b104e5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbb1e0,&PTR_DAT_110cbb1f0,0);
    if (lVar1 == 0) {
      FUN_10b1052a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b104ecc; end: 10b104f1f; -[SCNContentManagerWriteStreamCppProxy .cxx_destruct] */

void FUN_10b104ecc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb328;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0fb81c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b104f20; end: 10b104f5f; -[SCNContentManagerWriteStreamCppProxy .cxx_construct] */

undefined8 * FUN_10b104f20(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b1053c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b104f60; end: 10b105043;  */

void FUN_10b104f60(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbb278;
  puVar1[3] = &PTR_DAT_110cbb300;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b1053c4();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbb2c8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b105278(&uStack_50);
  return;
}



/* Entry: 10b105044; end: 10b105047;  */

void FUN_10b105044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b105048; end: 10b10505b;  */

void FUN_10b105048(void)

{
  FUN_10b105268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10505c; end: 10b105067;  */

long FUN_10b10505c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb238;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b105410();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b105068; end: 10b1050a3;  */

void FUN_10b105068(void)

{
  func_0x00010b105438();
  return;
}



/* Entry: 10b1050a4; end: 10b10510b;  */

void FUN_10b1050a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b0fcc48(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c5c0(uVar2);
  func_0x00010b1053d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b10510c; end: 10b1051a7;  */

void FUN_10b10510c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  uStack_48 = param_4;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28128(&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196f40(uVar2);
  func_0x00010b105410();
  func_0x00010b1053d4();
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Entry: 10b1051a8; end: 10b1051d7;  */

void FUN_10b1051a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e2fa0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}


