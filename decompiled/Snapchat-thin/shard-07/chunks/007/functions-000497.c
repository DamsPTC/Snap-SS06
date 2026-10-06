/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10595b9c8; end: 10595ba33;  */

undefined1  [16] FUN_10595b9c8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    func_0x00010c124c20(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  func_0x000100626ec0();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10595ba34; end: 10595bb17;  */

void FUN_10595ba34(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c07f0;
  _objc_alloc(PTR_PTR_1126c07f0);
  lVar3 = param_1;
  FUN_10595bb18(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001006a7df8(lVar4);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = *(int *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    param_1 = param_1 + 0x60;
    FUN_10595e9fc(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c03b780(puVar2,param_2,lVar3,lVar4,(long)iVar1,uVar5,param_1);
  func_0x00010595bbd4();
  func_0x00010595bbcc();
  func_0x000100626ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10595bb18; end: 10595bb47;  */

void FUN_10595bb18(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1056329cc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595bb48; end: 10595bbcb;  */

void FUN_10595bb48(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100626f0c();
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined8 *)(param_1 + 0x60) = param_6;
  *(undefined8 *)(param_1 + 0x68) = param_7;
  return;
}



/* Entry: 10595bbcc; end: 10595bbdf;  */

void FUN_10595bbcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10595bbe0; end: 10595bc97;  */

void FUN_10595bbe0(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1108c19b0;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10595bc98);
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
    FUN_10595bf2c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10595bc98; end: 10595bd97;  */

void FUN_10595bc98(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_1108c19f0;
  puVar4[3] = &PTR_DAT_1108c1a68;
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
  puVar4[3] = &PTR_FUN_1108c1a40;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10595bf2c(&uStack_50);
  return;
}



/* Entry: 10595bd98; end: 10595bd9b;  */

void FUN_10595bd98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c19f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595bd9c; end: 10595bdaf;  */

void FUN_10595bd9c(void)

{
  FUN_10595bf1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595bdb0; end: 10595bdbb;  */

long FUN_10595bdb0(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c19b0;
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



/* Entry: 10595bdbc; end: 10595bdfb;  */

void FUN_10595bdbc(void)

{
  FUN_10595bf58();
  return;
}



/* Entry: 10595bdfc; end: 10595be87;  */

void FUN_10595bdfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2160(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10595be88; end: 10595bf1b;  */

long FUN_10595be88(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c19b0;
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



/* Entry: 10595bf1c; end: 10595bf2b;  */

void FUN_10595bf1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c19f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595bf2c; end: 10595bf57;  */

long FUN_10595bf2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595bf58; end: 10595bf67;  */

long FUN_10595bf58(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c19b0;
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



/* Entry: 10595bf68; end: 10595bf7b;  */

void FUN_10595bf68(void)

{
  FUN_10595c284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595bf7c; end: 10595bf87;  */

long FUN_10595bf7c(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1ad8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010595c2a4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10595bf88; end: 10595bfc7;  */

void FUN_10595bf88(void)

{
  func_0x00010595c2c0();
  return;
}



/* Entry: 10595bfc8; end: 10595c09f;  */

void FUN_10595bfc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10595ba34(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10595e754(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_4 + 0x18) == '\x01') {
    FUN_10595b640(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_4 = 0;
  }
  func_0x00010c0e5520(uVar2);
  _objc_release(param_4);
  func_0x00010595c2a4();
  func_0x00010090041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10595c0a0; end: 10595c163;  */

void FUN_10595c0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x19;
  long unaff_x23;
  undefined8 uVar1;
  
  func_0x00010595c2b4();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10595ba34(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10595e754(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e54e0(uVar1,param_2,unaff_x19,param_3,(long)param_4,param_5);
  _objc_release(param_5);
  func_0x00010595c2a4();
  func_0x00010090041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10595c164; end: 10595c1f3;  */

void FUN_10595c164(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  long unaff_x23;
  undefined8 uVar1;
  
  func_0x00010595c2b4();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  FUN_10595ba34();
  _objc_retainAutoreleasedReturnValue();
  FUN_10595e754(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5500(uVar1,param_2,unaff_x19,(long)param_3,param_4);
  func_0x00010595c2a4();
  func_0x00010090041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10595c1f4; end: 10595c283;  */

long FUN_10595c1f4(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1ad8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010595c2a4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10595c284; end: 10595c2cb;  */

void FUN_10595c284(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c1b18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595c2cc; end: 10595c3ef;  */

void FUN_10595c2cc(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf061e0();
  uVar2 = param_2;
  func_0x00010bf855a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010011b600();
  uVar4 = param_2;
  func_0x00010bf855c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_70);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cStack_58 == '\x01') {
    *(undefined8 *)(param_1 + 8) = uStack_68;
    *(undefined8 *)(param_1 + 6) = uStack_70;
    *(undefined8 *)(param_1 + 10) = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  func_0x0001001148fc(&uStack_70);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10595c3f0; end: 10595c443; -[SCNNotificationsNotificationHandler dispose] */

void FUN_10595c3f0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10595c444; end: 10595c527; -[SCNNotificationsNotificationHandler notificationReceived:platformData:] */

void FUN_10595c444(long param_1)

{
  long *plVar1;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [112];
  
  func_0x0001008feb1c();
  func_0x0001008fed50();
  func_0x0001008fed58();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10595b874(auStack_a0);
  FUN_10595e69c(auStack_b0);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_a0,auStack_b0);
  func_0x00010595cc04(auStack_b0);
  func_0x00010595cb7c(auStack_a0);
  func_0x000100904b10();
  func_0x000100904b18();
  return;
}



/* Entry: 10595c528; end: 10595c607; -[SCNNotificationsNotificationHandler notificationDisplayed:displayContext:] */

void FUN_10595c528(long param_1)

{
  long *plVar1;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  func_0x0001008feb1c();
  func_0x0001008fed50();
  func_0x0001008fed58();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010595cd64(auStack_48);
  FUN_10595c608(auStack_88);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48,auStack_88);
  func_0x00010595cba4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000100904b10();
  func_0x000100904b18();
  return;
}



/* Entry: 10595c608; end: 10595c6b3;  */

void FUN_10595c608(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  func_0x00010595cd58();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 7) = 0;
  }
  else {
    FUN_10595c2cc(&uStack_58);
    unaff_x20[1] = uStack_50;
    *unaff_x20 = uStack_58;
    *(undefined1 *)(unaff_x20 + 2) = uStack_48;
    *(undefined1 *)(unaff_x20 + 3) = 0;
    *(undefined1 *)(unaff_x20 + 6) = 0;
    if (cStack_28 == '\x01') {
      unaff_x20[4] = uStack_38;
      unaff_x20[3] = uStack_40;
      unaff_x20[5] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      *(undefined1 *)(unaff_x20 + 6) = 1;
    }
    *(undefined1 *)(unaff_x20 + 7) = 1;
    func_0x0001001148fc(&uStack_40);
  }
  func_0x000100904b18();
  return;
}



/* Entry: 10595c6b4; end: 10595c7cf; -[SCNNotificationsNotificationHandler notificationSuppressed:suppressionReason:suppressedContext:] */

void FUN_10595c6b4(long param_1)

{
  undefined8 in_x4;
  ulong unaff_x20;
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  func_0x0001008feb1c();
  func_0x0001008fed50();
  func_0x0001008fed58();
  _objc_retain(in_x4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010595cd64(auStack_58);
  FUN_10595c7d0();
  FUN_10595c7f0(auStack_88,in_x4);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_58,unaff_x20 & 0xffffffffff,auStack_88);
  func_0x00010595cbd4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000100904b08();
  func_0x000100904b10();
  func_0x000100904b18();
  return;
}



/* Entry: 10595c7d0; end: 10595c7ef;  */

ulong FUN_10595c7d0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10595cc28();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10595c7f0; end: 10595c85f;  */

void FUN_10595c7f0(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  func_0x00010595cd58();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_10595e5c8(auStack_58);
    FUN_10595cc60();
    func_0x0001001148fc(auStack_50);
  }
  func_0x000100904b18();
  return;
}



/* Entry: 10595c860; end: 10595c8fb; -[SCNNotificationsNotificationHandler notificationClaimed:] */

void FUN_10595c860(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x0001009272f0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010595cd64(auStack_48);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000100904b18();
  return;
}



/* Entry: 10595c8fc; end: 10595c977; -[SCNNotificationsNotificationHandler redriveNotifications:] */

void FUN_10595c8fc(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x0001009272f0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010595cd4c();
  func_0x00010092738c(*(undefined8 *)(*plVar1 + 0x48));
  func_0x00010595cd30();
  func_0x000100904b18();
  return;
}



/* Entry: 10595c978; end: 10595c9f3; -[SCNNotificationsNotificationHandler redriveReminders:] */

void FUN_10595c978(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x0001009272f0();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010595cd4c();
  func_0x00010092738c(*(undefined8 *)(*plVar1 + 0x50));
  func_0x00010595cd30();
  func_0x000100904b18();
  return;
}



/* Entry: 10595c9f4; end: 10595ca47; -[SCNNotificationsNotificationHandler clearReminders] */

void FUN_10595c9f4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 10595ca48; end: 10595caef; -[SCNNotificationsNotificationHandler fetchLastNotificationsReceived:callback:] */

void FUN_10595ca48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10595b174(auStack_40,param_4);
  (**(code **)(*plVar1 + 0x60))(plVar1,param_3,auStack_40);
  func_0x00010595cce4(auStack_40);
  func_0x000100904b18();
  return;
}



/* Entry: 10595caf0; end: 10595cb43; -[SCNNotificationsNotificationHandler .cxx_destruct] */

void FUN_10595caf0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1bc8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001009046e4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10595cb44; end: 10595cc27;  */

void FUN_10595cb44(long param_1)

{
  func_0x0001001148fc(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10595cc28; end: 10595cc5f;  */

undefined8 FUN_10595cc28(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x000100904b18();
  return param_1;
}



/* Entry: 10595cc60; end: 10595cc7b;  */

void FUN_10595cc60(long param_1)

{
  FUN_10595cc7c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10595cc7c; end: 10595ccbf;  */

void FUN_10595cc7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 10595ccc0; end: 10595cd07;  */

void FUN_10595ccc0(long param_1)

{
  func_0x00010048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10595cd08; end: 10595cd73;  */

void FUN_10595cd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10595cd74; end: 10595cdeb; -[SCNNotificationsNotificationHandlerLite initWithCpp:] */

undefined1 * FUN_10595cd74(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126eb108;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010595d4e0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010595d4a8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10595cdec; end: 10595d01b; +[SCNNotificationsNotificationHandlerLite create:announcer:queue:grapheneLogger:ackDelegate:] */

void FUN_10595cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined **appuStack_158 [2];
  long lStack_148;
  long lStack_140;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010595d524();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_10595de68(&lStack_148,param_3);
  func_0x000100900244(appuStack_158,param_4);
  func_0x00010049e05c(auStack_168,param_5);
  func_0x00010b10c27c(auStack_178,param_6);
  FUN_10595bbe0(auStack_188,param_7);
  FUN_10596c018(&lStack_60,&lStack_148,appuStack_158,auStack_168,auStack_178,auStack_188);
  func_0x000100903fbc(auStack_188);
  FUN_10595d480(auStack_178);
  func_0x000100554470(auStack_168);
  func_0x000100901b38(appuStack_158);
  func_0x00010595d3d4(&lStack_148);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_158[0] = &PTR_DAT_1108c1bd8;
    lStack_148 = lStack_60;
    lStack_140 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x00010595d4e0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_158;
    func_0x00010015c218(pppuVar1,&lStack_148,FUN_10595d40c);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_148);
  }
  func_0x00010595d4a8(&lStack_60);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010595d510();
  func_0x00010595d4d8();
  func_0x00010595d4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10595d01c; end: 10595d07b; -[SCNNotificationsNotificationHandlerLite dispose] */

void FUN_10595d01c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10595d07c; end: 10595d12f; -[SCNNotificationsNotificationHandlerLite notificationReceived:appState:] */

void FUN_10595d07c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_a0 [112];
  
  func_0x00010595d4f0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_10595b874(auStack_a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_a0);
  func_0x00010595cb7c(auStack_a0);
  func_0x00010595d4d0();
  return;
}



/* Entry: 10595d130; end: 10595d217; -[SCNNotificationsNotificationHandlerLite notificationDisplayed:displayContext:] */

void FUN_10595d130(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  func_0x00010595d4f0();
  func_0x00010595d524();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001000fbca4(auStack_48);
  FUN_10595c608(auStack_88);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48,auStack_88);
  func_0x00010595cba4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010595d4d8();
  func_0x00010595d4d0();
  return;
}



/* Entry: 10595d218; end: 10595d33f; -[SCNNotificationsNotificationHandlerLite notificationSuppressed:suppressionReason:suppressedContext:] */

void FUN_10595d218(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  func_0x00010595d524();
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_58,param_3);
  FUN_10595c7d0(param_4);
  FUN_10595c7f0(auStack_88,param_5);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_58,param_4 & 0xffffffffff,auStack_88);
  func_0x00010595cbd4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010595d510();
  func_0x00010595d4d8();
  func_0x00010595d4d0();
  return;
}



/* Entry: 10595d340; end: 10595d393; -[SCNNotificationsNotificationHandlerLite .cxx_destruct] */

void FUN_10595d340(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1bd8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010595d4a8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10595d394; end: 10595d40b; -[SCNNotificationsNotificationHandlerLite .cxx_construct] */

undefined8 * FUN_10595d394(undefined8 *param_1)

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
      func_0x00010595d4e0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10595d40c; end: 10595d47f;  */

void FUN_10595d40c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c0808;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010595d4e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010595d4a8(&uStack_30);
  return;
}



/* Entry: 10595d480; end: 10595d4cf;  */

long FUN_10595d480(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595d4d0; end: 10595d52b;  */

void FUN_10595d4d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10595d52c; end: 10595d5a3; -[SCNNotificationsNotificationHandlerLoggedOut initWithCpp:] */

undefined1 * FUN_10595d52c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126eb110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010595dcf0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10595dcac(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10595d5a4; end: 10595d79f; +[SCNNotificationsNotificationHandlerLoggedOut create:announcer:queue:grapheneLogger:] */

void FUN_10595d5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined **appuStack_140 [2];
  long lStack_130;
  long lStack_128;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x00010595dd34();
  func_0x00010595dd2c();
  _objc_retain(param_6);
  FUN_10595e074(&lStack_130,param_3);
  func_0x000100900244(appuStack_140,param_4);
  func_0x00010049e05c(auStack_150,param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
  }
  else {
    func_0x00010b10c27c(&uStack_160,param_6);
  }
  func_0x00010595dd24();
  FUN_10596c460(&lStack_60,&lStack_130,appuStack_140,auStack_150,&uStack_160);
  FUN_10595d480(&uStack_160);
  func_0x000100554470(auStack_150);
  func_0x000100901b38(appuStack_140);
  func_0x00010595dc0c(&lStack_130);
  if (lStack_60 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_140[0] = &PTR_DAT_1108c1be8;
    lStack_130 = lStack_60;
    lStack_128 = lStack_58;
    if (lStack_58 != 0) {
      do {
        func_0x00010595dcf0();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_140;
    func_0x00010015c218(pppuVar1,&lStack_130,FUN_10595dc3c);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_130);
  }
  FUN_10595dcac(&lStack_60);
  func_0x00010595dd24();
  func_0x00010595dce8();
  func_0x00010595dcd8();
  func_0x00010595dce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10595d7a0; end: 10595d7fb; -[SCNNotificationsNotificationHandlerLoggedOut dispose] */

void FUN_10595d7a0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10595d7fc; end: 10595d917; -[SCNNotificationsNotificationHandlerLoggedOut notificationReceived:platformData:appState:] */

void FUN_10595d7fc(void)

{
  ulong uVar1;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar2;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [112];
  
  func_0x00010595dd00();
  func_0x00010595dd34();
  func_0x00010595dd2c();
  plVar2 = *(long **)(unaff_x22 + 0x18);
  FUN_10595b874(auStack_b0);
  FUN_10595e69c(auStack_c0);
  if (unaff_x21 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010595dd2c();
    func_0x00010c067fc0();
    func_0x00010595dce8();
    uVar1 = unaff_x21 & 0xffffffff | 0x100000000;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,auStack_b0,auStack_c0,uVar1);
  func_0x00010595cc04(auStack_c0);
  func_0x00010595cb7c(auStack_b0);
  func_0x00010595dce8();
  func_0x00010595dcd8();
  func_0x00010595dce0();
  return;
}



/* Entry: 10595d918; end: 10595d977; -[SCNNotificationsNotificationHandlerLoggedOut appStateChanged:] */

void FUN_10595d918(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10595d978; end: 10595da6f; -[SCNNotificationsNotificationHandlerLoggedOut notificationDisplayed:displayContext:] */

void FUN_10595d978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  func_0x00010595dd34();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_48,param_3);
  FUN_10595c608(auStack_88,param_4);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48,auStack_88);
  func_0x00010595cba4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010595dcd8();
  func_0x00010595dce0();
  return;
}



/* Entry: 10595da70; end: 10595db73; -[SCNNotificationsNotificationHandlerLoggedOut notificationSuppressed:suppressionReason:suppressedContext:] */

void FUN_10595da70(void)

{
  ulong unaff_x20;
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  func_0x00010595dd00();
  func_0x00010595dd34();
  func_0x00010595dd2c();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x0001000fbca4(auStack_58);
  FUN_10595c7d0();
  FUN_10595c7f0(auStack_88);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_58,unaff_x20 & 0xffffffffff,auStack_88);
  func_0x00010595cbd4(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010595dce8();
  func_0x00010595dcd8();
  func_0x00010595dce0();
  return;
}



/* Entry: 10595db74; end: 10595dbc7; -[SCNNotificationsNotificationHandlerLoggedOut .cxx_destruct] */

void FUN_10595db74(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1be8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_10595dcac((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10595dbc8; end: 10595dc3b; -[SCNNotificationsNotificationHandlerLoggedOut .cxx_construct] */

undefined8 * FUN_10595dbc8(undefined8 *param_1)

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
      func_0x00010595dcf0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10595dc3c; end: 10595dcab;  */

void FUN_10595dc3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c0810;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010595dcf0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10595dcac(&uStack_30);
  return;
}



/* Entry: 10595dcac; end: 10595dcd7;  */

long FUN_10595dcac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595dcd8; end: 10595dd5b;  */

void FUN_10595dcd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10595dd5c; end: 10595dd77;  */

void FUN_10595dd5c(long param_1)

{
  FUN_10595dd78();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10595dd78; end: 10595de43;  */

void FUN_10595dd78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  return;
}



/* Entry: 10595de44; end: 10595de5f;  */

void FUN_10595de44(long param_1)

{
  FUN_10595dd78();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10595de60; end: 10595de67;  */

void FUN_10595de60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10595de68; end: 10595dfff;  */

void FUN_10595de68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008fef48(auStack_68);
  uVar2 = param_2;
  func_0x00010bf64d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_80);
  uVar3 = param_2;
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008ff4a8(auStack_b0);
  uVar4 = param_2;
  func_0x00010beed9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100900014(auStack_138);
  FUN_10595e000(param_1,auStack_68,auStack_80,auStack_b0,auStack_138);
  func_0x0001009001d4(auStack_138);
  _objc_release(uVar4);
  func_0x0001009001f4(auStack_b0);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar2);
  func_0x000100100fec(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10595e000; end: 10595e073;  */

undefined8 *
FUN_10595e000(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x000100900140(param_1 + 6,param_4);
  func_0x000100900198(param_1 + 0xc,param_5);
  return param_1;
}



/* Entry: 10595e074; end: 10595e1b3;  */

void FUN_10595e074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_110 [136];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf64d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_58);
  uVar2 = param_2;
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001008ff4a8(auStack_88);
  uVar3 = param_2;
  func_0x00010beed9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100900014(auStack_110);
  FUN_10595e1b4(param_1,auStack_58,auStack_88,auStack_110);
  func_0x0001009001d4(auStack_110);
  _objc_release(uVar3);
  func_0x0001009001f4(auStack_88);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10595e1b4; end: 10595e203;  */

undefined8 *
FUN_10595e1b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000100900140(param_1 + 3,param_3);
  func_0x000100900198(param_1 + 9,param_4);
  return param_1;
}



/* Entry: 10595e204; end: 10595e27b; -[SCNNotificationsNotificationPermissionCallback initWithCpp:] */

undefined1 * FUN_10595e204(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126eb118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10595e4b0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10595e484(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10595e27c; end: 10595e2db; -[SCNNotificationsNotificationPermissionCallback onResult:] */

void FUN_10595e27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10595e2dc; end: 10595e307;  */

void FUN_10595e2dc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10595e3a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595e308; end: 10595e35b; -[SCNNotificationsNotificationPermissionCallback .cxx_destruct] */

void FUN_10595e308(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108c1bf8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_10595e484((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10595e35c; end: 10595e39f; -[SCNNotificationsNotificationPermissionCallback .cxx_construct] */

undefined8 * FUN_10595e35c(undefined8 *param_1)

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
      FUN_10595e4b0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10595e3a0; end: 10595e413;  */

void FUN_10595e3a0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1108c1bf8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10595e4b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_10595e414);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010595e4cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10595e414; end: 10595e483;  */

void FUN_10595e414(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c0820;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10595e4b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10595e484(&uStack_30);
  return;
}



/* Entry: 10595e484; end: 10595e4af;  */

long FUN_10595e484(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10595e4b0; end: 10595e4e3;  */

void FUN_10595e4b0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10595e4e4; end: 10595e4f7;  */

void FUN_10595e4e4(void)

{
  FUN_10595e5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595e4f8; end: 10595e537;  */

void FUN_10595e4f8(void)

{
  func_0x00010595e5bc();
  return;
}



/* Entry: 10595e538; end: 10595e5ab;  */

void FUN_10595e538(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10595e2dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc81c0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10595e5ac; end: 10595e5c7;  */

void FUN_10595e5ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c1ca0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595e5c8; end: 10595e69b;  */

void FUN_10595e5c8(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf061e0();
  uVar2 = param_2;
  func_0x00010c0fe340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(&uStack_50);
  *param_1 = (int)uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (cStack_38 == '\x01') {
    *(undefined8 *)(param_1 + 4) = uStack_48;
    *(undefined8 *)(param_1 + 2) = uStack_50;
    *(undefined8 *)(param_1 + 6) = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  func_0x0001001148fc(&uStack_50);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10595e69c; end: 10595e753;  */

void FUN_10595e69c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_1108c1d88;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10595e7ac);
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
    FUN_10595e9bc(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10595e754; end: 10595e7ab;  */

void FUN_10595e754(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    ___dynamic_cast(param_1,&PTR_DAT_1108c1d30,&PTR_DAT_1108c1d40,0);
    if (param_1 == (long *)0x0) {
      ___cxa_bad_cast();
      puVar8 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)0x38;
      __Znwm();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_1108c1dc8;
      puVar4[3] = &PTR_FUN_1108c1e38;
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
      puVar4[3] = &PTR_FUN_1108c1e18;
      *extraout_x8 = puVar4 + 3;
      extraout_x8[1] = puVar4;
      uStack_70 = 0;
      uStack_68 = 0;
      extraout_x8[2] = *param_1;
      FUN_10595e9bc(&uStack_70);
      return;
    }
    lVar7 = param_1[3];
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10595e7ac; end: 10595e8ab;  */

void FUN_10595e7ac(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_1108c1dc8;
  puVar4[3] = &PTR_FUN_1108c1e38;
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
  puVar4[3] = &PTR_FUN_1108c1e18;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10595e9bc(&uStack_50);
  return;
}



/* Entry: 10595e8ac; end: 10595e8af;  */

void FUN_10595e8ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c1dc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595e8b0; end: 10595e8c3;  */

void FUN_10595e8b0(void)

{
  FUN_10595e9ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10595e8c4; end: 10595e8cf;  */

long FUN_10595e8c4(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1d88;
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



/* Entry: 10595e8d0; end: 10595e90f;  */

void FUN_10595e8d0(void)

{
  FUN_10595e9e8();
  return;
}



/* Entry: 10595e910; end: 10595e917;  */

void FUN_10595e910(void)

{
  return;
}



/* Entry: 10595e918; end: 10595e9ab;  */

long FUN_10595e918(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108c1d88;
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



/* Entry: 10595e9ac; end: 10595e9bb;  */

void FUN_10595e9ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c1dc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10595e9bc; end: 10595e9e7;  */

long FUN_10595e9bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


