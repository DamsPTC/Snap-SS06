/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0fc384; end: 10b0fc3c7; -[SCNContentManagerContentStreamer .cxx_construct] */

undefined8 * FUN_10b0fc384(undefined8 *param_1)

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
      FUN_10b0fc4ac();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fc3c8; end: 10b0fc43b;  */

void FUN_10b0fc3c8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba608;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0fc4ac();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0fc43c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fc4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fc43c; end: 10b0fc4ab;  */

void FUN_10b0fc43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb70;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0fc4ac();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052aad48(&uStack_30);
  return;
}



/* Entry: 10b0fc4ac; end: 10b0fc4ef;  */

void FUN_10b0fc4ac(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0fc4f0; end: 10b0fc567; -[SCNContentManagerContentWriterCppProxy initWithCpp:] */

undefined1 * FUN_10b0fc4f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0fcb0c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b0f7f9c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fc568; end: 10b0fc5e3; -[SCNContentManagerContentWriterCppProxy getFilePath] */

void FUN_10b0fc568(void)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010b0fcb38();
  func_0x00010b0fcb5c();
  puVar1 = auStack_38;
  func_0x000107c27f28(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fcb30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fc5e4; end: 10b0fc683; -[SCNContentManagerContentWriterCppProxy getContentKey] */

void FUN_10b0fc5e4(void)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  func_0x00010b0fcb38();
  func_0x00010b0fcb5c();
  if (cStack_28 == '\x01') {
    puVar1 = auStack_48;
    FUN_10b0f57d4(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_10b0f7ab4(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fc684; end: 10b0fc6db; -[SCNContentManagerContentWriterCppProxy markIsEncrypted:] */

void FUN_10b0fc684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x00010b0fcb38(param_1,param_3);
  (**(code **)(extraout_x8 + 0x20))();
  return;
}



/* Entry: 10b0fc6dc; end: 10b0fc733; -[SCNContentManagerContentWriterCppProxy isEncrypted] */

long FUN_10b0fc6dc(int param_1)

{
  long extraout_x8;
  
  func_0x00010b0fcb38();
  (**(code **)(extraout_x8 + 0x28))();
  return (long)param_1;
}



/* Entry: 10b0fc734; end: 10b0fc817; -[SCNContentManagerContentWriterCppProxy registerContent:] */

void FUN_10b0fc734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [104];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0f571c(auStack_b8,param_3);
  (**(code **)(*plVar1 + 0x30))(auStack_98,plVar1,auStack_b8);
  func_0x00010b0fcb30();
  FUN_10b102644(auStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fcb44();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0fc818; end: 10b0fc86b; -[SCNContentManagerContentWriterCppProxy purge] */

void FUN_10b0fc818(void)

{
  long extraout_x8;
  
  func_0x00010b0fcb38();
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10b0fc86c; end: 10b0fc8f7; -[SCNContentManagerContentWriterCppProxy getError] */

void FUN_10b0fc86c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [72];
  
  func_0x00010b0fcb38();
  func_0x00010b0fcb5c();
  puVar1 = auStack_68;
  func_0x00010563299c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a038c(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fc8f8; end: 10b0fc967;  */

void FUN_10b0fc8f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cba618,&PTR_DAT_110cba628,0);
    if (lVar1 == 0) {
      FUN_10b0fca28(param_1);
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



/* Entry: 10b0fc968; end: 10b0fc9bb; -[SCNContentManagerContentWriterCppProxy .cxx_destruct] */

void FUN_10b0fc968(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba670;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0f7f9c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0fc9bc; end: 10b0fca27; -[SCNContentManagerContentWriterCppProxy .cxx_construct] */

undefined8 * FUN_10b0fc9bc(undefined8 *param_1)

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
      func_0x00010b0fcb0c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fca28; end: 10b0fca93;  */

void FUN_10b0fca28(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba670;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b0fcb0c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0fca94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fcb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fca94; end: 10b0fcb03;  */

void FUN_10b0fca94(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb78;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0fcb0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b0f7f9c(&uStack_30);
  return;
}



/* Entry: 10b0fcb04; end: 10b0fcb7b;  */

void FUN_10b0fcb04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b0fcb7c; end: 10b0fcc47;  */

void FUN_10b0fcb7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c23e860();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b101880();
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281c4(&uStack_50);
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27d78(&uStack_50);
  _objc_release(param_2);
  func_0x00010b0fcce8();
  func_0x00010b0fcce0();
  return;
}



/* Entry: 10b0fcc48; end: 10b0fccdf;  */

void FUN_10b0fcc48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7fa0;
  _objc_alloc(PTR_PTR_1126b7fa0);
  lVar2 = param_1;
  FUN_10b1018e4(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  func_0x000107c31724(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046c80(puVar1,param_2,lVar2,param_1);
  func_0x00010b0fcce8();
  func_0x00010b0fcce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fcce0; end: 10b0fccef;  */

void FUN_10b0fcce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0fccf0; end: 10b0fcd1f;  */

void FUN_10b0fccf0(void)

{
  _objc_alloc(PTR_PTR_1126dfb80);
  func_0x00010bff59e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fcd20; end: 10b0fcd6f; -[SCNContentManagerFileGroup initWithCpp:] */

undefined1 * FUN_10b0fcd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705d08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010b0fd0e4((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fcd70; end: 10b0fce4f; -[SCNContentManagerFileGroup createContentBundle:] */

void FUN_10b0fcd70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_90,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_78,plVar1,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  FUN_10b0fce50(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fd1fc();
  func_0x00010b0fd1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0fce50; end: 10b0fcee7;  */

void FUN_10b0fce50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9638;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b0fd12c();
    FUN_10b108948();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0fd1c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fcee8; end: 10b0fcf13;  */

void FUN_10b0fcee8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0fcfd4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fcf14; end: 10b0fcf67; -[SCNContentManagerFileGroup .cxx_destruct] */

void FUN_10b0fcf14(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba680;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0fd0b8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0fcf68; end: 10b0fcfab; -[SCNContentManagerFileGroup .cxx_construct] */

undefined8 * FUN_10b0fcf68(undefined8 *param_1)

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
      FUN_10b0fd1b8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fcfac; end: 10b0fcfd3;  */

void FUN_10b0fcfac(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010529fde0();
  }
  else {
    func_0x0001052a03ac();
  }
  return;
}



/* Entry: 10b0fcfd4; end: 10b0fd04b;  */

void FUN_10b0fcfd4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba680;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0fd1b8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0fd04c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0fd1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0fd04c; end: 10b0fd0b7;  */

void FUN_10b0fd04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  puVar1 = PTR_PTR_1126dfb88;
  _objc_alloc();
  if (param_2[1] != 0) {
    do {
      FUN_10b0fd1b8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010b0fd208();
  return;
}



/* Entry: 10b0fd0b8; end: 10b0fd12b;  */

long FUN_10b0fd0b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0fd12c; end: 10b0fd1b7;  */

long FUN_10b0fd12c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [64];
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  uVar2 = 0x48;
  ___cxa_allocate_exception(0x48);
  func_0x0001052a0760(auStack_60,param_1);
  func_0x0001052a4718(uVar2,auStack_60);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b0fd198);
  (*pcVar1)();
}



/* Entry: 10b0fd1b8; end: 10b0fd20f;  */

void FUN_10b0fd1b8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0fd210; end: 10b0fd287; -[SCNContentManagerFileGroupResolver initWithCpp:] */

undefined1 * FUN_10b0fd210(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0fdee0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0fd9ec(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fd288; end: 10b0fd45f; +[SCNContentManagerFileGroupResolver create:contentResolver:cacheController:userId:] */

void FUN_10b0fd288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined **appuStack_60 [2];
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_10b0f0010(appuStack_60,param_3);
  FUN_10b10ae30(auStack_70,param_4);
  FUN_10b0f2bd0(auStack_80,param_5);
  func_0x000107c27f20(&lStack_98,param_6);
  FUN_10b17abe0(&lStack_50,appuStack_60,auStack_70,auStack_80,&lStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_98);
  func_0x0001052a712c(auStack_80);
  func_0x0001052a1398(auStack_70);
  func_0x000107c27f08(appuStack_60);
  if (lStack_50 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_60[0] = &PTR_DAT_110cba690;
    lStack_98 = lStack_50;
    lStack_90 = lStack_48;
    if (lStack_48 != 0) {
      do {
        FUN_10b0fdee0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_60;
    func_0x000107c31700(pppuVar1,&lStack_98,FUN_10b0fd978);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d28(&lStack_98);
  }
  FUN_10b0fd9ec(&lStack_50);
  func_0x00010b0fdf0c();
  func_0x00010b0fdf8c();
  func_0x00010b0fdf60();
  func_0x00010b0fdefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10b0fd460; end: 10b0fd72f; -[SCNContentManagerFileGroupResolver resolveZipArchive:contentBundle:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b0fd460(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  func_0x00010b0fdf2c();
  FUN_10b1088f8(alStack_78 + 5);
  func_0x00010b0fdf80(&uStack_d0);
  func_0x00010529fde0(alStack_78 + 5);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  FUN_10b0fda14(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  func_0x00010b0fdf74();
  func_0x00010b0fd928(alStack_78 + 3);
  func_0x00010b0fdf58();
  func_0x000107c27b48(alStack_78);
  func_0x000107c27b4c(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x80;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_78[5];
  func_0x00010b0fdab0();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_88;
    puVar1 = puStack_90;
    *puVar4 = &PTR_FUN_110cba6b0;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_78[5] + 200);
    *(undefined8 **)(alStack_78[5] + 200) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x00010b0fda70(&lStack_a0,alStack_78 + 5);
  }
  func_0x000107c2798c(&lStack_b0);
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b0fdee0();
      } while (extraout_w10 != 0);
    }
    FUN_10b0fdaf8(&puStack_90);
    func_0x00010b0fd928(&lStack_b0);
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x00010b0fd928(&lStack_a0);
  FUN_10b0fdeb4(&puStack_90);
  func_0x000107c27b58(alStack_78 + 3);
  lVar3 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b0fdfa4();
  }
  func_0x00010b0fdf48();
  func_0x000107c27b58(&uStack_c0);
  _objc_release(0);
  func_0x00010b0fdf60();
  func_0x00010b0fdf40();
  func_0x00010b0fdf50();
  func_0x00010b0fdefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0fd730; end: 10b0fd7ff; -[SCNContentManagerFileGroupResolver resolveAssetGroup:contentReference:] */

void FUN_10b0fd730(void)

{
  undefined1 *puVar1;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [72];
  
  func_0x00010b0fdf2c();
  FUN_10b0f8900(auStack_b8);
  func_0x00010b0fdf80(auStack_78);
  func_0x00010b0f7a8c(auStack_b8);
  puVar1 = auStack_78;
  FUN_10b0fd800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0fd950(auStack_78);
  func_0x00010b0fdefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fd800; end: 10b0fd893;  */

void FUN_10b0fd800(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9638;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b0fcee8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bcc1ca8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b0fdefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fd894; end: 10b0fd8e7; -[SCNContentManagerFileGroupResolver .cxx_destruct] */

void FUN_10b0fd894(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba690;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0fd9ec((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0fd8e8; end: 10b0fd94f; -[SCNContentManagerFileGroupResolver .cxx_construct] */

undefined8 * FUN_10b0fd8e8(undefined8 *param_1)

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
      FUN_10b0fdee0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fd950; end: 10b0fd977;  */

void FUN_10b0fd950(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b0fd0b8();
  }
  else {
    func_0x0001052a03ac();
  }
  return;
}



/* Entry: 10b0fd978; end: 10b0fd9eb;  */

void FUN_10b0fd978(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb90;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0fdee0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0fd9ec(&uStack_30);
  return;
}



/* Entry: 10b0fd9ec; end: 10b0fda13;  */

long FUN_10b0fd9ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0fda14; end: 10b0fda6f;  */

void FUN_10b0fda14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 10b0fda70; end: 10b0fdaf7;  */

undefined8 * FUN_10b0fda70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b0fdf40();
  return param_1;
}



/* Entry: 10b0fdaf8; end: 10b0fddb7;  */

void FUN_10b0fdaf8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_10b0fdee0();
    } while (extraout_w10 != 0);
    do {
      FUN_10b0fdee0();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_1;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_e0 = param_2;
  lStack_d8 = param_3;
  FUN_10b0fda14(&lStack_60,&uStack_e0,&uStack_70);
  func_0x00010b0fdf74();
  func_0x00010b0fd928(&lStack_60);
  func_0x00010b0fdf58();
  lStack_60 = uStack_50 + 0x80;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  uStack_80 = uStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_10b0fdee0();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uVar1, func_0x00010b0fdab0(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x50,&lStack_60);
  }
  func_0x00010b0fd928(&uStack_80);
  if (*(long *)(uStack_50 + 0xc0) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88,(long *)(uStack_50 + 0xc0));
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0fdc48);
    (*pcVar2)();
  }
  func_0x00010b0fde50(auStack_d0);
  func_0x000107c2798c(&lStack_60);
  func_0x00010b0fdf48();
  FUN_10b0fd800(auStack_d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar4);
  func_0x00010b0fdf0c();
  FUN_10b0fd950(auStack_d0);
  func_0x00010b0fd928(&uStack_e0);
  func_0x00010b0fdf50();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b0fddb8; end: 10b0fddbb;  */

undefined8 * FUN_10b0fddb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba6b0;
  FUN_10b0fdeb4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0fddbc; end: 10b0fddcf;  */

void FUN_10b0fddbc(void)

{
  FUN_10b0fde24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fddd0; end: 10b0fde23;  */

void FUN_10b0fddd0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b0fdee0();
    } while (extraout_w10 != 0);
  }
  FUN_10b0fdaf8(param_1 + 8);
  func_0x00010b0fdf40();
  return;
}



/* Entry: 10b0fde24; end: 10b0fde9b;  */

undefined8 * FUN_10b0fde24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba6b0;
  FUN_10b0fdeb4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0fde9c; end: 10b0fdeb3;  */

void FUN_10b0fde9c(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b0fdeb4; end: 10b0fdedf;  */

undefined8 * FUN_10b0fdeb4(undefined8 *param_1)

{
  func_0x000107c27b70(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10b0fdee0; end: 10b0fdfb7;  */

void FUN_10b0fdee0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0fdfb8; end: 10b0fe037; -[SCNContentManagerInterimObjectUnzipperCppProxy initWithCpp:] */

undefined1 * FUN_10b0fdfb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d18;
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
    func_0x00010b0fe1f4(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b0fe038; end: 10b0fe14b; -[SCNContentManagerInterimObjectUnzipperCppProxy putBytes:count:dataBytes:] */

void FUN_10b0fe038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_48,param_3);
  func_0x000107c31308(auStack_58,param_5);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,param_4,auStack_58);
  func_0x000107c27f10(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0fe14c; end: 10b0fe1a7; -[SCNContentManagerInterimObjectUnzipperCppProxy .cxx_destruct] */

void FUN_10b0fe14c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba6f0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0fe1f4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0fe1a8; end: 10b0fe21f; -[SCNContentManagerInterimObjectUnzipperCppProxy .cxx_construct] */

undefined8 * FUN_10b0fe1a8(undefined8 *param_1)

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



/* Entry: 10b0fe220; end: 10b0fe26f; -[SCNContentManagerInterimPayloadProcessorCppProxy initWithCpp:] */

undefined1 * FUN_10b0fe220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010b0fe910((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fe270; end: 10b0fe3e7; -[SCNContentManagerInterimPayloadProcessorCppProxy transformDownloadedBytes:readStream:transformParams:mediaContextType:] */

void FUN_10b0fe270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [72];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_10b104d24(auStack_98,param_3);
  FUN_10b101b80(auStack_a8,param_4);
  func_0x000107c28040(auStack_c0,param_5);
  (**(code **)(*plVar2 + 0x10))(auStack_88,plVar2,auStack_98,auStack_a8,auStack_c0,param_6);
  func_0x000107c27914(auStack_c0);
  FUN_10b0f7ec4(auStack_a8);
  FUN_10b0fb81c(auStack_98);
  puVar1 = auStack_88;
  func_0x00010563299c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a038c(auStack_88);
  func_0x00010b0fe99c();
  _objc_release(param_4);
  func_0x00010b0fe95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fe3e8; end: 10b0fe51f;  */

void FUN_10b0fe3e8(undefined8 *param_1,ulong param_2)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0fe4f0);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfb98;
  _objc_opt_class(PTR_PTR_1126dfb98);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cba758;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b0fe5bc);
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
    FUN_10b0fe8c0(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x00010b0fe964();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b0fe95c();
  return;
}



/* Entry: 10b0fe520; end: 10b0fe57b; -[SCNContentManagerInterimPayloadProcessorCppProxy .cxx_destruct] */

void FUN_10b0fe520(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba828;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0fe8e8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0fe57c; end: 10b0fe5bb; -[SCNContentManagerInterimPayloadProcessorCppProxy .cxx_construct] */

undefined8 * FUN_10b0fe57c(undefined8 *param_1)

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
      func_0x00010b0fe964();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0fe5bc; end: 10b0fe6ab;  */

void FUN_10b0fe5bc(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110cba798;
  puVar1[3] = &PTR_DAT_110cba810;
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
      func_0x00010b0fe964();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x00010b0fe974();
  puVar1[3] = &PTR_FUN_110cba7e8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b0fe8c0(&uStack_50);
  return;
}



/* Entry: 10b0fe6ac; end: 10b0fe6af;  */

void FUN_10b0fe6ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fe6b0; end: 10b0fe6c3;  */

void FUN_10b0fe6b0(void)

{
  FUN_10b0fe8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0fe6c4; end: 10b0fe6cf;  */

long FUN_10b0fe6c4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cba758;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b0fe99c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b0fe6d0; end: 10b0fe70b;  */

void FUN_10b0fe6d0(void)

{
  func_0x00010b0fe9a4();
  return;
}



/* Entry: 10b0fe70c; end: 10b0fe81f;  */

void FUN_10b0fe70c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_10b104e5c(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b101cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28044(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010b0fe974();
  func_0x00010b0fe95c();
  func_0x000105632694(param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b0fe820; end: 10b0fe8af;  */

long FUN_10b0fe820(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cba758;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b0fe99c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b0fe8b0; end: 10b0fe8bf;  */

void FUN_10b0fe8b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cba798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0fe8c0; end: 10b0fe95b;  */

long FUN_10b0fe8c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0fe95c; end: 10b0fe9af;  */

void FUN_10b0fe95c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0fe9b0; end: 10b0fea47;  */

void FUN_10b0fe9b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfba0;
  _objc_alloc(PTR_PTR_1126dfba0);
  lVar2 = param_1;
  FUN_10b108948(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  func_0x000107c28240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002de0(puVar1,param_2,lVar2,param_1);
  FUN_10b0fea48();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0fea48; end: 10b0fea53;  */

void FUN_10b0fea48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0fea54; end: 10b0feb7b;  */

void FUN_10b0fea54(undefined8 *param_1,undefined8 param_2)

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
  
  _objc_retain();
  func_0x00010c2978e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0feb7c(&uStack_60);
  func_0x00010c069980(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0effc0(&uStack_78);
  func_0x00010bf25e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0effc0(&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[2] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  param_1[4] = uStack_70;
  param_1[3] = uStack_78;
  param_1[5] = uStack_68;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  _objc_release(param_2);
  func_0x00010b0fecf8();
  func_0x0001052ab9a4(&uStack_60);
  func_0x00010b0fed14();
  func_0x00010b0fecf0();
  return;
}



/* Entry: 10b0feb7c; end: 10b0fecef;  */

/* WARNING: Possible PIC construction at 0x00010b0fec64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b0fecd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b0fece0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b0fecd8) */
/* WARNING: Removing unreachable block (ram,0x00010b0fec68) */
/* WARNING: Removing unreachable block (ram,0x00010b0feca0) */
/* WARNING: Removing unreachable block (ram,0x00010b0fecb4) */
/* WARNING: Removing unreachable block (ram,0x00010b0fecd4) */
/* WARNING: Removing unreachable block (ram,0x00010b0fec84) */
/* WARNING: Removing unreachable block (ram,0x00010b0fece4) */
/* WARNING: Removing unreachable block (ram,0x00010b0fecec) */

void FUN_10b0feb7c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_188 [104];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001052abb1c(param_1,puVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar1 = param_2;
  _objc_retain();
  func_0x00010b0fed00();
  if (puVar1 != (undefined1 *)0x0) {
    lVar4 = *plStack_110;
    do {
      puVar5 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + (long)puVar5 * 8);
        _objc_retain(uVar3);
        FUN_10b10497c(auStack_188,uVar3);
        func_0x0001052abf40(param_1,auStack_188);
        puVar2 = auStack_188;
        func_0x0001052aba48();
        func_0x00010b0fecf8();
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar1);
      func_0x00010b0fed00();
      puVar1 = puVar2;
    } while (puVar2 != (undefined1 *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0fecf0; end: 10b0fed23;  */

void FUN_10b0fecf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0fed24; end: 10b0fed9b; -[SCNContentManagerNetworkMappingProvider initWithCpp:] */

undefined1 * FUN_10b0fed24(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0ff1d8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0ff1ac(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0fed9c; end: 10b0feeb7; +[SCNContentManagerNetworkMappingProvider create:] */

void FUN_10b0fed9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined8 unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  FUN_10b10d504(&lStack_48,param_3);
  FUN_10b20c700(&lStack_58,&lStack_48);
  func_0x0001052a9ef8(&lStack_48);
  if (lStack_58 == 0) {
    unaff_x20 = 0;
  }
  else {
    lStack_40 = lStack_50;
    ppuStack_38 = &PTR_DAT_110cba838;
    lStack_48 = lStack_58;
    if (lStack_50 != 0) {
      do {
        FUN_10b0ff1d8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(&ppuStack_38,&lStack_48,FUN_10b0ff13c);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0ff204();
  }
  FUN_10b0ff1ac(&lStack_58);
  func_0x00010b0ff1e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10b0feeb8; end: 10b0fef13; -[SCNContentManagerNetworkMappingProvider maybeReadNetworkMappingFromDisk] */

void FUN_10b0feeb8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b0fef14; end: 10b0fef6f; -[SCNContentManagerNetworkMappingProvider maybeDownloadNetworkMapping] */

void FUN_10b0fef14(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b0fef70; end: 10b0ff01b; -[SCNContentManagerNetworkMappingProvider addResolver:] */

void FUN_10b0fef70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b10ae30(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_40);
  func_0x0001052a1398(auStack_40);
  func_0x00010b0ff1e8();
  return;
}



/* Entry: 10b0ff01c; end: 10b0ff0a3;  */

void FUN_10b0ff01c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    lVar3 = lVar1;
    ___cxa_throw(lVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    lVar2 = lVar1;
    ___cxa_free_exception();
    func_0x00010b0ff1f0();
    pcStack_28 = FUN_10b0ff0a4;
    lStack_40 = lVar3;
    lStack_38 = lVar1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      ppuStack_48 = &PTR_DAT_110cba838;
      func_0x000107c31708(lVar2 + 8,&ppuStack_48);
    }
    FUN_10b0ff1ac((long *)(lVar2 + 0x18));
    func_0x000107c27e30(lVar2 + 8);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10b0ff1d8();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0ff0a4; end: 10b0ff0f7; -[SCNContentManagerNetworkMappingProvider .cxx_destruct] */

void FUN_10b0ff0a4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba838;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0ff1ac((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0ff0f8; end: 10b0ff13b; -[SCNContentManagerNetworkMappingProvider .cxx_construct] */

undefined8 * FUN_10b0ff0f8(undefined8 *param_1)

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
      FUN_10b0ff1d8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0ff13c; end: 10b0ff1ab;  */

void FUN_10b0ff13c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfba8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0ff1d8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0ff1ac(&uStack_30);
  return;
}



/* Entry: 10b0ff1ac; end: 10b0ff1d7;  */

long FUN_10b0ff1ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0ff1d8; end: 10b0ff217;  */

void FUN_10b0ff1d8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0ff218; end: 10b0ff24f;  */

void FUN_10b0ff218(void)

{
  _objc_alloc(PTR_PTR_1126dfbb0);
  func_0x00010c03f580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ff250; end: 10b0ff367;  */

void FUN_10b0ff250(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c5f60();
  uVar2 = param_2;
  func_0x00010bf21ea0();
  uVar3 = param_2;
  func_0x00010c24d5c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28124();
  uVar4 = param_2;
  func_0x00010c276cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107c28124();
  uVar6 = param_2;
  func_0x00010bf8ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000107c28124();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3 & 0xffffffffff;
  param_1[3] = uVar5 & 0xffffffffff;
  param_1[4] = uVar7 & 0xffffffffff;
  _objc_release(uVar6);
  _objc_release(uVar4);
  FUN_10b0ff424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0ff368; end: 10b0ff423;  */

void FUN_10b0ff368(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_PTR_1126dfbb8;
  _objc_alloc(PTR_PTR_1126dfbb8);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = param_1 + 2;
  func_0x000107c28128(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1 + 3;
  func_0x000107c28128(puVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 4;
  func_0x000107c28128(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029b20(puVar3,param_2,uVar1,uVar2,puVar4,puVar5,param_1);
  func_0x00010b0ff42c();
  func_0x00010b0ff424();
  func_0x00010b0ff438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0ff424; end: 10b0ff43f;  */

void FUN_10b0ff424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0ff440; end: 10b0ff4b7; -[SCNContentManagerPlaylistScopedAnalyticsInfoAccessor initWithCpp:] */

undefined1 * FUN_10b0ff440(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705d30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0ff798();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010b0f9b68(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ff4b8; end: 10b0ff5c7; -[SCNContentManagerPlaylistScopedAnalyticsInfoAccessor getAnalyticsInfoForContent:] */

void FUN_10b0ff4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [608];
  char cStack_38;
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b0f571c(auStack_2b8,param_3);
  (**(code **)(*plVar1 + 0x10))(auStack_298,plVar1,auStack_2b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
  if (cStack_38 == '\x01') {
    puVar2 = auStack_298;
    FUN_10b0f8a48(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  FUN_10b0ff68c(auStack_298);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0ff5c8; end: 10b0ff5f3;  */

void FUN_10b0ff5c8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0ff6ac();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0ff5f4; end: 10b0ff647; -[SCNContentManagerPlaylistScopedAnalyticsInfoAccessor .cxx_destruct] */

void FUN_10b0ff5f4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cba848;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b0f9b68((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0ff648; end: 10b0ff68b; -[SCNContentManagerPlaylistScopedAnalyticsInfoAccessor .cxx_construct] */

undefined8 * FUN_10b0ff648(undefined8 *param_1)

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
      FUN_10b0ff798();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0ff68c; end: 10b0ff6ab;  */

void FUN_10b0ff68c(long param_1)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    func_0x00010539dd5c();
  }
  return;
}



/* Entry: 10b0ff6ac; end: 10b0ff723;  */

void FUN_10b0ff6ac(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cba848;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0ff798();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0ff724);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0ff7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


