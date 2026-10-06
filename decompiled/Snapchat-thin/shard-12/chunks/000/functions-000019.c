/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c481e0; end: 108c48363; -[SCNDuplexDuplexClientCppProxy send:message:callback:queue:] */

void FUN_108c481e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long *plVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  func_0x000107c34c4c();
  func_0x000107c34c64();
  func_0x000107c34c58();
  func_0x000108c48d6c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c34c6c(auStack_58);
  func_0x000107c281c4(auStack_68,param_4);
  func_0x000107c34c58();
  if (param_5 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_108c49b14(&uStack_78,param_5);
  }
  func_0x000107c34c3c();
  func_0x000108c48d6c();
  if (param_6 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c31310(&uStack_88,param_6);
  }
  func_0x000108c48d48();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58,auStack_68,&uStack_78,&uStack_88);
  func_0x000107c34c5c();
  func_0x0001086e3e98(&uStack_78);
  func_0x000107c27d78(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000108c48d48();
  func_0x000107c34c3c();
  func_0x000107c34c38();
  func_0x000107c34c34();
  return;
}



/* Entry: 108c48364; end: 108c483ef; -[SCNDuplexDuplexClientCppProxy unregisterHandler:] */

void FUN_108c48364(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000108c48d30();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c34c6c(auStack_48);
  func_0x000108c48df0(*(undefined8 *)(*plVar1 + 0x20));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c34c34();
  return;
}



/* Entry: 108c483f0; end: 108c484d7; -[SCNDuplexDuplexClientCppProxy addStreamListener:queue:] */

void FUN_108c483f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x000107c34c4c();
  func_0x000107c34c64();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108c4a1a4(auStack_40,param_3);
  func_0x000107c31310(auStack_50,param_4);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_40,auStack_50);
  func_0x000107c27e70(auStack_50);
  func_0x000107c28294(auStack_40);
  func_0x000107c34c38();
  func_0x000107c34c34();
  return;
}



/* Entry: 108c484d8; end: 108c48567; -[SCNDuplexDuplexClientCppProxy removeStreamListener:] */

void FUN_108c484d8(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108c48d30();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_108c4a1a4(auStack_40);
  func_0x000108c48df0(*(undefined8 *)(*plVar1 + 0x30));
  func_0x000107c28294(auStack_40);
  func_0x000107c34c34();
  return;
}



/* Entry: 108c48568; end: 108c485b7; -[SCNDuplexDuplexClientCppProxy appMemoryPressureStateChanged:] */

void FUN_108c48568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c34c78(param_1,param_3);
  (**(code **)(extraout_x8 + 0x40))();
  return;
}



/* Entry: 108c485b8; end: 108c48607; -[SCNDuplexDuplexClientCppProxy callParticipationChanged:] */

void FUN_108c485b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x000107c34c78(param_1,param_3);
  (**(code **)(extraout_x8 + 0x48))();
  return;
}



/* Entry: 108c48608; end: 108c48653; -[SCNDuplexDuplexClientCppProxy dispose] */

void FUN_108c48608(void)

{
  long extraout_x8;
  
  func_0x000107c34c78();
  (**(code **)(extraout_x8 + 0x50))();
  return;
}



/* Entry: 108c48654; end: 108c486e3; -[SCNDuplexDuplexClientCppProxy disposeAsync:] */

void FUN_108c48654(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108c48d30();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_108c47c40(auStack_40);
  func_0x000108c48df0(*(undefined8 *)(*plVar1 + 0x58));
  FUN_108c48174(auStack_40);
  func_0x000107c34c34();
  return;
}



/* Entry: 108c486e4; end: 108c48737; -[SCNDuplexDuplexClientCppProxy .cxx_destruct] */

void FUN_108c486e4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9dd8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28254((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c48738; end: 108c4881b;  */

void FUN_108c48738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ab9cb8;
  puVar1[3] = &PTR_DAT_110ab9d78;
  puVar2 = puVar1;
  func_0x000108c48d6c();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x000107c34c40();
    } while (extraout_w10 != 0);
  }
  func_0x000108c48d6c();
  puVar1[6] = uVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x000108c48d48();
  puVar1[3] = &PTR_FUN_110ab9d08;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108c48cfc(&uStack_50);
  return;
}



/* Entry: 108c4881c; end: 108c4881f;  */

void FUN_108c4881c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9cb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c48820; end: 108c48833;  */

void FUN_108c48820(void)

{
  FUN_108c48cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c48834; end: 108c4883f;  */

long FUN_108c48834(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9c78;
    func_0x000107c34c58();
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x000107c34c3c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108c48840; end: 108c4887b;  */

void FUN_108c48840(void)

{
  func_0x000108c48df8();
  return;
}



/* Entry: 108c4887c; end: 108c4896f;  */

void FUN_108c4887c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31724(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c49c10(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0d04(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b420(uVar2);
  _objc_release(param_5);
  func_0x000108c48d48();
  func_0x000107c34c38();
  func_0x000107c34c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c48970; end: 108c48a27;  */

void FUN_108c48970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x000108c48d74();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  FUN_108c49658();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0d04(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126780(uVar1,param_2,unaff_x19,unaff_x21,param_4);
  _objc_release(param_4);
  func_0x000107c34c3c();
  func_0x000107c34c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108c48a28; end: 108c48a77;  */

void FUN_108c48a28(void)

{
  func_0x000108c48d58();
  func_0x000108c48dc0();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282080();
  func_0x000107c34c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108c48a78; end: 108c48af7;  */

void FUN_108c48a78(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x000108c48d74();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_108c4a2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc0d04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befba80(uVar1,param_2,unaff_x19,unaff_x21);
  func_0x000107c34c3c();
  func_0x000107c34c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108c48af8; end: 108c48b47;  */

void FUN_108c48af8(void)

{
  func_0x000108c48d58();
  func_0x000108c48dc0();
  FUN_108c4a2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e700();
  func_0x000107c34c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108c48b48; end: 108c48bdf;  */

void FUN_108c48b48(undefined8 param_1,undefined8 param_2)

{
  int unaff_w19;
  long unaff_x20;
  
  func_0x000108c48ddc();
  func_0x00010bf06220(*(undefined8 *)(unaff_x20 + 0x18),param_2,(long)unaff_w19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 108c48be0; end: 108c48c0f;  */

void FUN_108c48be0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c48c10; end: 108c48c5f;  */

void FUN_108c48c10(void)

{
  func_0x000108c48d58();
  func_0x000108c48dc0();
  FUN_108c47d3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86da0();
  func_0x000107c34c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108c48c60; end: 108c48ceb;  */

long FUN_108c48c60(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9c78;
    func_0x000107c34c58();
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x000107c34c3c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108c48cec; end: 108c48cfb;  */

void FUN_108c48cec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9cb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c48cfc; end: 108c48d23;  */

long FUN_108c48cfc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c48d24; end: 108c48e1b;  */

void FUN_108c48d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108c48e1c; end: 108c48e9b; -[SCNDuplexDuplexClientFactory initWithCpp:] */

undefined1 * FUN_108c48e1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fdeb8;
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
    func_0x000108c49150(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 108c48e9c; end: 108c48fdf; +[SCNDuplexDuplexClientFactory create:authDelegate:backgroundNetworkTaskDelegate:] */

void FUN_108c48e9c(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [144];
  undefined1 auStack_50 [16];
  
  func_0x000107c34c80();
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  FUN_108c491bc(auStack_e0);
  func_0x000107c2c49c(auStack_f0,in_x3);
  func_0x000107c2a840(auStack_100,in_x4);
  func_0x000107c2a88c(auStack_50,auStack_e0,auStack_f0,auStack_100);
  func_0x000107c2a844(auStack_100);
  func_0x000107c278a4(auStack_f0);
  func_0x000107c2a858(auStack_e0);
  puVar1 = auStack_50;
  func_0x000107c2a84c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c34c88();
  func_0x000107c34c8c();
  func_0x000107c34c90();
  func_0x000107c34c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c48fe0; end: 108c490a7; +[SCNDuplexDuplexClientFactory createDefaultParameters:] */

void FUN_108c48fe0(void)

{
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [144];
  
  func_0x000107c34c80();
  func_0x000107c2a854(auStack_f0);
  FUN_108c709f4(auStack_c0,auStack_f0);
  func_0x000107c2a85c(auStack_f0);
  FUN_108c4939c(auStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c491b0();
  func_0x000107c34c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c490a8; end: 108c49103; -[SCNDuplexDuplexClientFactory .cxx_destruct] */

void FUN_108c490a8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9de8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108c49150((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c49104; end: 108c4917b; -[SCNDuplexDuplexClientFactory .cxx_construct] */

undefined8 * FUN_108c49104(undefined8 *param_1)

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



/* Entry: 108c4917c; end: 108c49197;  */

void FUN_108c4917c(long param_1)

{
  func_0x000107c28720();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108c49198; end: 108c491bb;  */

void FUN_108c49198(void)

{
  return;
}



/* Entry: 108c491bc; end: 108c4939b;  */

void FUN_108c491bc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  func_0x00010bf95dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_80);
  uVar1 = param_2;
  func_0x00010bf356e0();
  uVar2 = param_2;
  func_0x00010c2912a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_a0);
  uVar3 = param_2;
  func_0x00010c086460();
  uVar4 = param_2;
  func_0x00010c086480(param_2);
  uVar5 = param_2;
  func_0x00010bf812e0(param_2);
  uVar6 = param_2;
  func_0x00010c231d20(param_2);
  uVar7 = param_2;
  func_0x00010c0863a0();
  uVar8 = param_2;
  func_0x00010c123420();
  uVar9 = param_2;
  func_0x00010c0854c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c284d0();
  func_0x00010c27d8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2a854(auStack_d0);
  func_0x000107c2a864(param_1,auStack_80,uVar1,auStack_a0,uVar3 & 0xffffffff,uVar4,uVar5,uVar6,
                      (int)uVar7,(char)uVar8,uVar9 & 0xffffffffff,auStack_d0);
  func_0x000107c2a85c(auStack_d0);
  _objc_release(param_2);
  FUN_108c4950c();
  func_0x000107c279a4(auStack_a0);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000108c4951c();
  func_0x000108c49514();
  return;
}



/* Entry: 108c4939c; end: 108c494ef;  */

void FUN_108c4939c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = PTR_PTR_1126db3c0;
  _objc_alloc();
  lVar7 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  iVar5 = *(int *)(param_1 + 0x18);
  lVar8 = param_1 + 0x20;
  func_0x000107c27f68(lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined1 *)(param_1 + 0x4c);
  lVar9 = param_1 + 0x58;
  func_0x0001079245a4();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_108c4a790();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c00fe60(puVar6,param_2,lVar7,(long)iVar5,lVar8,uVar1,uVar2,uVar3,uVar4);
  FUN_108c4950c();
  _objc_release(lVar9);
  _objc_release(lVar8);
  func_0x000108c49514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c494f0; end: 108c4950b;  */

void FUN_108c494f0(long param_1)

{
  func_0x000107c28720();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108c4950c; end: 108c49523;  */

void FUN_108c4950c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108c49524; end: 108c4959b; -[SCNDuplexMessageHandlerCppProxy initWithCpp:] */

undefined1 * FUN_108c49524(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fdec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c34c94();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c28290(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c4959c; end: 108c49657; -[SCNDuplexMessageHandlerCppProxy onReceive:] */

void FUN_108c4959c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c281c4(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  func_0x000107c27d78(auStack_40);
  func_0x000107c34c98();
  return;
}



/* Entry: 108c49658; end: 108c496c7;  */

void FUN_108c49658(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108c4328,&PTR_DAT_110ab9df8,0);
    if (lVar1 == 0) {
      FUN_108c498d0(param_1);
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



/* Entry: 108c496c8; end: 108c4971b; -[SCNDuplexMessageHandlerCppProxy .cxx_destruct] */

void FUN_108c496c8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9f10;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28290((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c4971c; end: 108c4975b; -[SCNDuplexMessageHandlerCppProxy .cxx_construct] */

undefined8 * FUN_108c4971c(undefined8 *param_1)

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
      func_0x000107c34c94();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c4975c; end: 108c4975f;  */

void FUN_108c4975c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9e80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c49760; end: 108c49773;  */

void FUN_108c49760(void)

{
  FUN_108c498c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c49774; end: 108c4977f;  */

long FUN_108c49774(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9e40;
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



/* Entry: 108c49780; end: 108c497bb;  */

void FUN_108c49780(void)

{
  func_0x000108c499c8();
  return;
}



/* Entry: 108c497bc; end: 108c4982b;  */

void FUN_108c497bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c31724(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5ea0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c4982c; end: 108c498bf;  */

long FUN_108c4982c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9e40;
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



/* Entry: 108c498c0; end: 108c498cf;  */

void FUN_108c498c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9e80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c498d0; end: 108c49943;  */

void FUN_108c498d0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9f10;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c34c94();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c49944);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c499d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c49944; end: 108c499b3;  */

void FUN_108c49944(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db3c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c34c94();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c28290(&uStack_30);
  return;
}



/* Entry: 108c499b4; end: 108c499df;  */

void FUN_108c499b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108c499e0; end: 108c49a57; -[SCNDuplexSendCallbackCppProxy initWithCpp:] */

undefined1 * FUN_108c499e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fdec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c4a088();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001086e3e98(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c49a58; end: 108c49ab3; -[SCNDuplexSendCallbackCppProxy onSend] */

void FUN_108c49a58(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108c49ab4; end: 108c49b13; -[SCNDuplexSendCallbackCppProxy onError:] */

void FUN_108c49ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 108c49b14; end: 108c49c0f;  */

void FUN_108c49b14(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3d0;
    _objc_opt_class(PTR_PTR_1126db3d0);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110ab9f78;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108c49d14);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108c49f7c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108c4a088();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108c49c10; end: 108c49c7f;  */

void FUN_108c49c10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ab9f20,&PTR_DAT_110ab9f30,0);
    if (lVar1 == 0) {
      FUN_108c49fa4(param_1);
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



/* Entry: 108c49c80; end: 108c49cd3; -[SCNDuplexSendCallbackCppProxy .cxx_destruct] */

void FUN_108c49c80(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110aba058;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001086e3e98((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c49cd4; end: 108c49d13; -[SCNDuplexSendCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108c49cd4(undefined8 *param_1)

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
      FUN_108c4a088();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c49d14; end: 108c49e07;  */

void FUN_108c49d14(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110ab9fb8;
  puVar1[3] = &PTR_DAT_110aba038;
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
      FUN_108c4a088();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110aba008;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108c49f7c(&uStack_50);
  return;
}



/* Entry: 108c49e08; end: 108c49e0b;  */

void FUN_108c49e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c49e0c; end: 108c49e1f;  */

void FUN_108c49e0c(void)

{
  FUN_108c49f6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c49e20; end: 108c49e2b;  */

long FUN_108c49e20(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9f78;
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



/* Entry: 108c49e2c; end: 108c49e97;  */

void FUN_108c49e2c(void)

{
  func_0x000108c4a0a8();
  return;
}



/* Entry: 108c49e98; end: 108c49ed7;  */

void FUN_108c49e98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c49ed8; end: 108c49f6b;  */

long FUN_108c49ed8(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9f78;
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



/* Entry: 108c49f6c; end: 108c49f7b;  */

void FUN_108c49f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c49f7c; end: 108c49fa3;  */

long FUN_108c49f7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c49fa4; end: 108c4a017;  */

void FUN_108c49fa4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110aba058;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c4a088();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c4a018);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4a0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c4a018; end: 108c4a087;  */

void FUN_108c4a018(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db3d0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c4a088();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001086e3e98(&uStack_30);
  return;
}



/* Entry: 108c4a088; end: 108c4a0cb;  */

void FUN_108c4a088(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c4a0cc; end: 108c4a143; -[SCNDuplexStreamListenerCppProxy initWithCpp:] */

undefined1 * FUN_108c4a0cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fded0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c4a6e8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c28294(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c4a144; end: 108c4a1a3; -[SCNDuplexStreamListenerCppProxy onStreamStatusChanged:] */

void FUN_108c4a144(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 108c4a1a4; end: 108c4a29f;  */

void FUN_108c4a1a4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3d8;
    _objc_opt_class(PTR_PTR_1126db3d8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110aba0b0;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108c4a3a4);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108c4a5dc(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108c4a6e8();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108c4a2a0; end: 108c4a30f;  */

void FUN_108c4a2a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108c4338,&PTR_DAT_110aba068,0);
    if (lVar1 == 0) {
      FUN_108c4a604(param_1);
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



/* Entry: 108c4a310; end: 108c4a363; -[SCNDuplexStreamListenerCppProxy .cxx_destruct] */

void FUN_108c4a310(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110aba180;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c28294((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c4a364; end: 108c4a3a3; -[SCNDuplexStreamListenerCppProxy .cxx_construct] */

undefined8 * FUN_108c4a364(undefined8 *param_1)

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
      FUN_108c4a6e8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c4a3a4; end: 108c4a497;  */

void FUN_108c4a3a4(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110aba0f0;
  puVar1[3] = &PTR_DAT_110aba168;
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
      FUN_108c4a6e8();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110aba140;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108c4a5dc(&uStack_50);
  return;
}



/* Entry: 108c4a498; end: 108c4a49b;  */

void FUN_108c4a498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4a49c; end: 108c4a4af;  */

void FUN_108c4a49c(void)

{
  FUN_108c4a5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4a4b0; end: 108c4a4bb;  */

long FUN_108c4a4b0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110aba0b0;
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



/* Entry: 108c4a4bc; end: 108c4a4f7;  */

void FUN_108c4a4bc(void)

{
  func_0x000108c4a714();
  return;
}



/* Entry: 108c4a4f8; end: 108c4a537;  */

void FUN_108c4a4f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e6b80(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 108c4a538; end: 108c4a5cb;  */

long FUN_108c4a538(long param_1)

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
    ppuStack_38 = &PTR_DAT_110aba0b0;
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



/* Entry: 108c4a5cc; end: 108c4a5db;  */

void FUN_108c4a5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4a5dc; end: 108c4a603;  */

long FUN_108c4a5dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c4a604; end: 108c4a677;  */

void FUN_108c4a604(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110aba180;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c4a6e8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c4a678);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4a720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c4a678; end: 108c4a6e7;  */

void FUN_108c4a678(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db3d8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c4a6e8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c28294(&uStack_30);
  return;
}



/* Entry: 108c4a6e8; end: 108c4a72b;  */

void FUN_108c4a6e8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c4a72c; end: 108c4a78f;  */

void FUN_108c4a72c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010c27d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28734(auStack_48);
  func_0x000107c28720(param_1,auStack_48);
  func_0x000107c286c8(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108c4a790; end: 108c4a7ef;  */

void FUN_108c4a790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db3e0;
  _objc_alloc(PTR_PTR_1126db3e0);
  func_0x0001086411d8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0557c0(puVar1,param_2,param_1);
  FUN_108c4a7f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c4a7f0; end: 108c4a7fb;  */

void FUN_108c4a7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108c4a7fc; end: 108c4a8cf; -[SCNAtlasAtlasConfiguration initWithAuthContextDelegate:databaseRoot:] */

undefined1 *
FUN_108c4a7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fded8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c4a8d0; end: 108c4a8d7; -[SCNAtlasAtlasConfiguration authContextDelegate] */

undefined8 FUN_108c4a8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4a8d8; end: 108c4a8df; -[SCNAtlasAtlasConfiguration databaseRoot] */

undefined8 FUN_108c4a8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c4a8e0; end: 108c4a90f; -[SCNAtlasAtlasConfiguration .cxx_destruct] */

void FUN_108c4a8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c4a910; end: 108c4aacb; -[SCNAtlasFollowerData initWithUserId:mutableUsername:displayName:bitmojiAvatarId:bitmojiSelfieId:snapLogoUrl:followedTimeInEpochMillis:] */

undefined1 *
FUN_108c4a910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fdee0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_108c4ab50(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_108c4ab50(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108c4ab50(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_108c4ab50(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_108c4ab50(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    FUN_108c4ab50(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c4aacc; end: 108c4aad3; -[SCNAtlasFollowerData userId] */

undefined8 FUN_108c4aacc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4aad4; end: 108c4aadb; -[SCNAtlasFollowerData mutableUsername] */

undefined8 FUN_108c4aad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c4aadc; end: 108c4aae3; -[SCNAtlasFollowerData displayName] */

undefined8 FUN_108c4aadc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


