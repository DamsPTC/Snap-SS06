/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005fae10; end: 1005fae37;  */

void FUN_1005fae10(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001005fae1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2 + 0x50,1);
  return;
}



/* Entry: 1005fae38; end: 1005faf4f;  */

code ** FUN_1005fae38(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  code **ppcVar2;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar3;
  code *pcVar4;
  undefined **ppuVar5;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [48];
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  ppcVar2 = &pcStack_d0;
  func_0x0001005fae20();
  ppuVar5 = *(undefined ***)(param_1 + 0x48);
  pcVar4 = *(code **)(param_1 + 0x40);
  pcStack_d0 = pcVar4;
  ppuStack_c8 = ppuVar5;
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10 != 0);
  }
  FUN_1005faf50();
  func_0x0001005fafa0();
  FUN_10028c49c();
  func_0x0001005fafb0();
  func_0x0001005fafbc();
  lVar3 = *(long *)(unaff_x22 + 0x70);
  pcStack_90 = FUN_10060a9dc;
  ppuStack_88 = &PTR_FUN_110a66d80;
  uVar1 = 0x40;
  func_0x000107c60e20();
  func_0x0001005fafc4();
  func_0x0001005fafa0();
  uStack_80 = uVar1;
  func_0x0001005fafd8();
  func_0x0001005fb000(ppuStack_88);
  FUN_1005fb02c();
  if (lVar3 == 0) {
    func_0x0001005fb034();
    pcStack_90 = pcVar4;
    ppuStack_88 = ppuVar5;
    if (extraout_x8 != 0) {
      do {
        func_0x000100550664();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001005fb044();
    (*extraout_x8_00)();
    func_0x0001005fb534();
  }
  FUN_1005fb548(&pcStack_d0);
  func_0x0001005fb7f0();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001005fb534();
    FUN_1005fb548(&pcStack_d0);
    func_0x000107c329cc();
    return (code **)auStack_c0;
  }
  return ppcVar2;
}



/* Entry: 1005faf50; end: 1005fb00b;  */

undefined1 * FUN_1005faf50(void)

{
  return &stack0x00000010;
}



/* Entry: 1005fb00c; end: 1005fb02b;  */

void FUN_1005fb00c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005fb548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005fb02c; end: 1005fb04f;  */

void FUN_1005fb02c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x22 + 8);
  return;
}



/* Entry: 1005fb050; end: 1005fb0af;  */

void FUN_1005fb050(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1005fb0b0(param_2);
  func_0x000107c61180();
  func_0x000107c5c28c(uVar2);
  FUN_1005fb520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1005fb0b0; end: 1005fb11f;  */

void FUN_1005fb0b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x000107c60e58(lVar1,&PTR_DAT_110877d18,&PTR_DAT_110d990f8,0);
    if (lVar1 == 0) {
      FUN_1005fb120(param_1);
      func_0x000107c61180();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      func_0x000107c61174(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005fb120; end: 1005fb193;  */

void FUN_1005fb120(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d99210;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1005fb194();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_1005fb1a4);
  func_0x000107c61180();
  func_0x0001005fb2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005fb194; end: 1005fb1a3;  */

void FUN_1005fb194(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005fb1a4; end: 1005fb213;  */

void FUN_1005fb1a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e3040;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1005fb194();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_100576684(&uStack_30);
  return;
}



/* Entry: 1005fb214; end: 1005fb253; -[SCNShimsDispatchTaskCppProxy .cxx_construct] */

undefined8 * FUN_1005fb214(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1005fb194();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1005fb254; end: 1005fb25b;  */

void FUN_1005fb254(void)

{
  return;
}



/* Entry: 1005fb25c; end: 1005fb2d3; -[SCNShimsDispatchTaskCppProxy initWithCpp:] */

undefined1 * FUN_1005fb25c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_11270e678;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1005fb194();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_100576684(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005fb2d4; end: 1005fb2eb;  */

void FUN_1005fb2d4(void)

{
  return;
}



/* Entry: 1005fb2ec; end: 1005fb373; -[SCNativeDispatchQueue submit:] */

void FUN_1005fb2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10060a978;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005fb374; end: 1005fb39b; -[SQLFideliusEncryptedUserInfoDB getConn] */

void FUN_1005fb374(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005fb39c; end: 1005fb51f; -[SCSqliteConnection beginTransaction] */

/* WARNING: Possible PIC construction at 0x0001005fb4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005fb4e0) */

void FUN_1005fb39c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c60d88(lVar3 + 0x58);
  FUN_10054bc60(lVar3 + 0x40);
  func_0x000107c60d8c(lVar3 + 0x58);
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_68 = &UNK_105277f7c;
  ppuStack_60 = &PTR_DAT_110873830;
  iVar2 = 0xf2d5b06;
  FUN_1004c3d34(*(undefined8 *)(param_1 + 0x20),&UNK_10f2d5b06,0x12,1,&puStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x000107c4fe7c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (iVar2 == 1) {
    func_0x000107c60e38();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c42a58(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61180();
    func_0x000107c54654(param_1);
  }
  else {
    func_0x000107c60bd8(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1005fb520; end: 1005fb547;  */

void FUN_1005fb520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005fb548; end: 1005fb5b7;  */

long FUN_1005fb548(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001005fb53c();
  func_0x0001005fb590();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1005fb5b8; end: 1005fb5c7;  */

void FUN_1005fb5b8(void)

{
  return;
}



/* Entry: 1005fb5c8; end: 1005fb5f3;  */

void FUN_1005fb5c8(void)

{
  long extraout_x8;
  
  FUN_1005fb5b8();
  if (extraout_x8 != 0) {
    FUN_10065ad84();
    FUN_10065c9dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005fb5f4; end: 1005fb603;  */

void FUN_1005fb5f4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x000107c4403c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      func_0x000107c3d7ac(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x30;
      FUN_1005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10ddc1d2f,0x3a);
      FUN_1005fcac0();
      FUN_1005fcb64(lVar1,FUN_1005fd998);
      func_0x000107c61180();
      goto LAB_1005fb6ac;
    }
  }
  lVar1 = 0;
LAB_1005fb6ac:
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005fb604; end: 1005fb767;  */

void FUN_1005fb604(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c4403c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      func_0x000107c3d7ac(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x30;
      FUN_1005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc1d2f,0x3a);
      FUN_1005fcac0();
      FUN_1005fcb64(lVar1,FUN_1005fd998);
      func_0x000107c61180();
      goto LAB_1005fb6ac;
    }
  }
  lVar1 = 0;
LAB_1005fb6ac:
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1005fb768; end: 1005fb777;  */

undefined1 * FUN_1005fb768(void)

{
  return &stack0x00000008;
}



/* Entry: 1005fb778; end: 1005fb79b;  */

void FUN_1005fb778(void)

{
  FUN_1005fb768();
  FUN_1005fb7ac();
  return;
}



/* Entry: 1005fb79c; end: 1005fb7ab;  */

void FUN_1005fb79c(void)

{
  return;
}



/* Entry: 1005fb7ac; end: 1005fb7db;  */

void FUN_1005fb7ac(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  FUN_1005fb79c();
  if (extraout_x8 != 0) {
    func_0x000107c28c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 1005fb7dc; end: 1005fb84b;  */

void FUN_1005fb7dc(void)

{
  return;
}



/* Entry: 1005fb84c; end: 1005fb8ab;  */

undefined8 FUN_1005fb84c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10002b838(auStack_38,PTR_DAT_113268db0);
  func_0x0001005fb8dc((uint)param_2 & 0x191);
  FUN_1005504ac(param_1,auStack_38);
  func_0x0001005fb8ec();
  func_0x000107c60ca0();
  return param_2;
}



/* Entry: 1005fb8ac; end: 1005fb8d3; -[SCSqliteConnection getError] */

void FUN_1005fb8ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005fb8d4; end: 1005fb953; -[SCSqliteConnection addObservedTables:] */

void FUN_1005fb8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObjectsFromArray__11259c200);
  return;
}



/* Entry: 1005fb954; end: 1005fb977;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1005fb954(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x0001005fb940();
  FUN_1005fb990();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1005fb978; end: 1005fb98f;  */

/* WARNING: Removing unreachable block (ram,0x0001005ef784) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7a8) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7f0) */
/* WARNING: Removing unreachable block (ram,0x0001005ef758) */
/* WARNING: Removing unreachable block (ram,0x0001005ef760) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7c0) */

undefined8 FUN_1005fb978(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + 0x10);
  if (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      return 1;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  return 0;
}



/* Entry: 1005fb990; end: 1005fb9e3;  */

long FUN_1005fb990(long param_1)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = param_1;
  do {
    FUN_1005fb978();
    if ((int)lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined1 *)(param_1 + 0x9c) = 0;
      *(undefined1 *)(param_1 + 0xa0) = 1;
      FUN_1005fb9e4();
      return lVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1005fb9e4; end: 1005fb9fb;  */

void FUN_1005fb9e4(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 2;
  lVar1 = unaff_x20 + 0x20;
  lVar4 = lVar1;
  do {
    if (*(char *)(lVar4 + 1) != '\0') {
      uVar5 = 0;
      plVar7 = (long *)(lVar4 + 0x20);
      do {
        plVar2 = (long *)*plVar7;
        pcVar3 = (code *)plVar7[-2];
        if (plVar2 == (long *)0x0) {
          if (pcVar3 == (code *)0x0) {
            (**(code **)plVar7[-1])();
          }
          else {
            (*pcVar3)();
          }
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,pcVar3,plVar7[-1]);
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar5 < *(byte *)(lVar4 + 1));
    }
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar1) {
      func_0x000107c60fd0(lVar4);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0);
  *(long *)(unaff_x20 + 0x90) = lVar1;
  *(undefined1 *)(unaff_x20 + 0x21) = 0;
  return;
}



/* Entry: 1005fb9fc; end: 1005fbac3;  */

void FUN_1005fb9fc(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + 0x20;
  lVar4 = lVar1;
  do {
    if (*(char *)(lVar4 + 1) != '\0') {
      uVar5 = 0;
      plVar7 = (long *)(lVar4 + 0x20);
      do {
        plVar2 = (long *)*plVar7;
        pcVar3 = (code *)plVar7[-2];
        if (plVar2 == (long *)0x0) {
          if (pcVar3 == (code *)0x0) {
            (**(code **)plVar7[-1])();
          }
          else {
            (*pcVar3)();
          }
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,pcVar3,plVar7[-1]);
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar5 < *(byte *)(lVar4 + 1));
    }
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar1) {
      func_0x000107c60fd0(lVar4);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0);
  *(long *)(param_1 + 0x90) = lVar1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 1005fbac4; end: 1005fbafb;  */

void FUN_1005fbac4(void)

{
  return;
}



/* Entry: 1005fbafc; end: 1005fbb4f;  */

long FUN_1005fbafc(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x000107c60c14(auStack_28,*param_1 + 0x18);
  func_0x000107c60e08(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005fbb44);
  (*pcVar1)();
}



/* Entry: 1005fbb50; end: 1005fbb6b;  */

void FUN_1005fbb50(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  
  plVar4 = (long *)(unaff_x19 + 0x10);
  func_0x0001005fbb58();
  FUN_1005fbb9c();
  FUN_1005fbc34();
  if (param_2 != 0) {
    plVar6 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar4);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *plVar4 = param_2;
  return;
}



/* Entry: 1005fbb6c; end: 1005fbb8f;  */

void FUN_1005fbb6c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x0001005fbb58();
  FUN_1005fbb9c();
  FUN_1005fbc34();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1005fbb90; end: 1005fbb9b;  */

void FUN_1005fbb90(void)

{
  return;
}



/* Entry: 1005fbb9c; end: 1005fbc33;  */

long FUN_1005fbb9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_1005fbb90();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    FUN_1005ef680(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x20 + 0x98) = *param_3;
      *(undefined1 *)(unaff_x20 + 0xa0) = 1;
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      FUN_1005fb9fc();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1005fbc34; end: 1005fbc3f;  */

void FUN_1005fbc34(void)

{
  return;
}



/* Entry: 1005fbc40; end: 1005fbc7f;  */

undefined8 * FUN_1005fbc40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1005fbc80; end: 1005fbc93;  */

void FUN_1005fbc80(void)

{
  FUN_1005fbc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005fbc94; end: 1005fbcb3;  */

long FUN_1005fbc94(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (((uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10) >> 5 & 1) == 0) {
    return lVar2 + 0x98;
  }
  func_0x000107c60c14(auStack_28,lVar2 + 0x18);
  func_0x000107c60e08(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005fbb44);
  (*pcVar1)();
}



/* Entry: 1005fbcb4; end: 1005fbcd7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1005fbcb4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x0001005fb940();
  FUN_1005fbcd8();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1005fbcd8; end: 1005fbd3f;  */

long FUN_1005fbcd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = param_1;
  do {
    FUN_1005fb978();
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        *(undefined1 *)(param_1 + 0xa0) = 0;
      }
      *(undefined8 *)(param_1 + 0x98) = *param_3;
      *(undefined1 *)(param_1 + 0xa0) = 1;
      FUN_1005fb9e4();
      return lVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1005fbd40; end: 1005fbd47;  */

undefined8 * FUN_1005fbd40(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  
  puVar2 = (undefined8 *)(unaff_x19 + 0x40);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 1005fbd48; end: 1005fbe47;  */

void FUN_1005fbd48(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x0001005f971c();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_1005fbe48(unaff_x19 + 0x40);
    func_0x0001005fbc9c();
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9b68(*(undefined8 *)(unaff_x19 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010061ded4();
      func_0x00010061de64();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010061de14();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32fe4();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005fbafc(unaff_x19 + 0x38);
  func_0x0001005fbcac();
  func_0x0001005f96e8();
  FUN_1005fbd40();
  func_0x0001005f96a0();
  FUN_1005f0550(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005fbe48; end: 1005fbf47;  */

void FUN_1005fbe48(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x0001005f8d3c();
  plVar2 = param_1;
  FUN_1005f9928(FUN_100853308);
  func_0x0001005f9930();
  func_0x0001005f8e5c();
  FUN_1005fbf64();
  FUN_1005f95f0();
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9600();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010061debc();
    if (*plVar2 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010061de14();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c330a8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          func_0x000107c32ff8();
          func_0x000107c32fe4();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005fbc94();
  FUN_1005fbb50();
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005fbf48; end: 1005fbf63;  */

void FUN_1005fbf48(void)

{
  return;
}



/* Entry: 1005fbf64; end: 1005fc433;  */

void FUN_1005fbf64(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar9;
  long lVar10;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x9;
  long *plVar11;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  ulong extraout_x10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x20;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined **in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_1005fbf48();
  func_0x0001005f993c();
  lVar15 = *param_2;
  plVar5 = (long *)0xc8;
  func_0x000107c60e20();
  *plVar5 = (long)FUN_100852908;
  plVar5[1] = (long)&UNK_108735774;
  plVar5[0x17] = lVar15;
  plVar8 = plVar5;
  FUN_1005f9b60();
  func_0x0001005f9930();
  plVar16 = plVar5 + 4;
  *plVar16 = *(long *)(unaff_x20 + 8);
  do {
    func_0x0001005f0280();
  } while (extraout_w10 != 0);
  func_0x0001005f9b68(*plVar16);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar5 + 0x18) = 0;
    func_0x00010061de64();
    if (*plVar8 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar8 = extraout_x8;
    do {
      if (*plVar8 == 0) {
        func_0x00010061de14();
        plVar8 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar13 = extraout_w11_00;
      }
      else {
        func_0x000107c330a8();
        plVar8 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar13 = extraout_w11;
      }
      if ((uVar13 & 1) != 0) goto LAB_1005fc36c;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1005f9618(plVar16);
  lVar15 = plVar5[0x17];
  FUN_1005fc434();
  in_ZR = *(char *)(lVar15 + 0x30) == '\x01';
  if ((bool)in_ZR) {
    lVar15 = plVar5[0x17];
    FUN_1005fc43c(lVar15 + 0x1a0);
    FUN_1005fc488(plVar16,*(undefined8 *)(lVar15 + 0xb0));
    FUN_1005fcdc8(plVar5 + 10,plVar16);
    lVar18 = plVar5[0x17];
    FUN_1005fce6c();
    plVar8 = (long *)(lVar18 + 0x1b0);
    plVar12 = plVar16;
    while (((*(byte *)(plVar5 + 0xe) & 1) != 0 || ((*(byte *)(plVar5 + 0x13) & 1) != 0))) {
      uVar4 = plVar5[10] - plVar5[0xf] < 0;
      in_ZR = plVar5[10] == plVar5[0xf];
      if ((bool)in_ZR) break;
      plVar11 = plVar5 + 10;
      func_0x000107c29014();
      uVar20 = *(undefined8 *)(lVar18 + 0x1b8);
      plVar6 = plVar11;
      func_0x000107c29eec();
      plVar14 = *(long **)(lVar18 + 0x1a8);
      plVar7 = plVar6;
      if (plVar14 != (long *)0x0) {
        uVar17 = (long)plVar14 - 1;
        uVar4 = (long)((ulong)plVar14 & uVar17) < 0;
        in_ZR = ((ulong)plVar14 & uVar17) == 0;
        if ((bool)in_ZR) {
          func_0x000107c331e0();
        }
        else {
          uVar4 = (long)plVar6 - (long)plVar14 < 0;
          in_ZR = plVar6 == plVar14;
          plVar12 = plVar6;
          if (plVar14 <= plVar6) {
            uVar2 = 0;
            uVar13 = (uint)plVar14;
            if (uVar13 != 0) {
              uVar2 = (uint)plVar6 / uVar13;
            }
            plVar12 = (long *)(ulong)((uint)plVar6 - uVar2 * uVar13);
          }
        }
        plVar19 = *(long **)(*(long *)(lVar15 + 0x1a0) + (long)plVar12 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_1005fc12c;
              plVar9 = (long *)plVar19[1];
              uVar4 = (long)plVar9 - (long)plVar6 < 0;
              in_ZR = plVar9 == plVar6;
              if (!(bool)in_ZR) break;
              plVar7 = plVar19 + 2;
              FUN_1006760a8(plVar7,plVar11);
              if (((ulong)plVar7 & 1) != 0) goto LAB_1005fc228;
            }
            if (((ulong)plVar14 & uVar17) == 0) {
              plVar9 = (long *)((ulong)plVar9 & uVar17);
            }
            else if (plVar14 <= plVar9) {
              uVar3 = 0;
              if (plVar14 != (long *)0x0) {
                uVar3 = (ulong)plVar9 / (ulong)plVar14;
              }
              plVar9 = (long *)((long)plVar9 - uVar3 * (long)plVar14);
            }
            uVar4 = (long)plVar9 - (long)plVar12 < 0;
            in_ZR = plVar9 == plVar12;
          } while ((bool)in_ZR);
        }
      }
LAB_1005fc12c:
      func_0x000107c331dc();
      plVar5[0x14] = (long)plVar7;
      plVar5[0x15] = (long)plVar8;
      plVar5[0x16] = 0;
      *plVar7 = 0;
      plVar7[1] = (long)plVar6;
      FUN_10054f8dc(plVar7 + 2,plVar11);
      *(int *)(plVar7 + 5) = (int)uVar20;
      *(undefined1 *)(plVar5 + 0x16) = 1;
      func_0x000107c33198(*(undefined8 *)(lVar18 + 0x1b8));
      if ((plVar14 == (long *)0x0) ||
         (func_0x000107c33194(param_1,*(undefined4 *)(lVar18 + 0x1c0),(float)plVar14), (bool)uVar4))
      {
        func_0x000107c33160();
        func_0x000107c33034();
        func_0x000107c29750(lVar15 + 0x1a0);
        plVar14 = *(long **)(lVar18 + 0x1a8);
        in_ZR = ((ulong)plVar14 & (long)plVar14 - 1U) == 0;
        if ((bool)in_ZR) {
          func_0x000107c331e0();
        }
        else {
          in_ZR = plVar6 == plVar14;
          plVar12 = plVar6;
          if (plVar14 <= plVar6) {
            uVar17 = 0;
            if (plVar14 != (long *)0x0) {
              uVar17 = (ulong)plVar6 / (ulong)plVar14;
            }
            plVar12 = (long *)((long)plVar6 - uVar17 * (long)plVar14);
          }
        }
      }
      lVar10 = *(long *)(lVar15 + 0x1a0);
      if (*(long *)(lVar10 + (long)plVar12 * 8) == 0) {
        *plVar7 = *plVar8;
        *plVar8 = (long)plVar7;
        *(long **)(lVar10 + (long)plVar12 * 8) = plVar8;
        if (*plVar7 != 0) {
          func_0x000107c33208();
          if ((bool)in_ZR) {
            plVar11 = (long *)((ulong)extraout_x9 & extraout_x10);
            in_ZR = true;
          }
          else {
            in_ZR = extraout_x9 == plVar14;
            plVar11 = extraout_x9;
            if (plVar14 <= extraout_x9) {
              uVar17 = 0;
              if (plVar14 != (long *)0x0) {
                uVar17 = (ulong)extraout_x9 / (ulong)plVar14;
              }
              plVar11 = (long *)((long)extraout_x9 - uVar17 * (long)plVar14);
            }
          }
          *(long **)(extraout_x8_02 + (long)plVar11 * 8) = plVar7;
        }
      }
      else {
        func_0x000107c3320c();
      }
      plVar5[0x14] = 0;
      *(long *)(lVar18 + 0x1b8) = *(long *)(lVar18 + 0x1b8) + 1;
      func_0x000107c331d0();
LAB_1005fc228:
      FUN_1005fc848(plVar5 + 10);
    }
    func_0x0001005fce80();
    FUN_1005fcea8();
    FUN_1005fced4(plVar16);
  }
  uVar4 = (undefined1)plVar5[0x17];
  FUN_1005fcfb8();
  *(undefined1 *)((long)plVar5 + 0xc1) = uVar4;
  plVar8 = (long *)plVar5[0x17];
  FUN_1005fd01c(plVar5 + 0xf);
  plVar5[10] = plVar5[0xf];
  do {
    func_0x0001005f0280();
  } while (extraout_w10_02 != 0);
  func_0x0001005f9b68(plVar5[10]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar5 + 0x18) = 1;
    func_0x00010061de64();
    if (*plVar8 == 0) {
      FUN_10054ef74();
    }
    func_0x00010061de08();
    plVar8 = extraout_x8_03;
    do {
      if (*plVar8 == 0) {
        func_0x00010061de14();
        plVar8 = extraout_x8_05;
        uVar2 = extraout_w10_04;
        uVar13 = extraout_w11_02;
      }
      else {
        func_0x000107c330a8();
        plVar8 = extraout_x8_04;
        uVar2 = extraout_w10_03;
        uVar13 = extraout_w11_01;
      }
      if ((uVar13 & 1) != 0) {
LAB_1005fc36c:
        func_0x00010061de24();
        if ((bool)in_ZR) {
          func_0x000107c33028();
          func_0x000107c32ff8();
          func_0x000107c32fe4();
        }
        func_0x00010061de74();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar8 = plVar5 + 10;
  FUN_1005fbafc();
  lVar15 = plVar5[0x17];
  plVar5[4] = *plVar8;
  FUN_100852d54();
  FUN_10054ebfc(plVar5 + 0xf);
  (**(code **)(**(long **)(lVar15 + 0xe0) + 0x28))();
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = &PTR_DAT_110a609a8;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0x1ec;
  uVar1 = 0x3f0190;
  if (*(char *)((long)plVar5 + 0xc1) != '\0') {
    uVar1 = 0x3f0191;
  }
  FUN_1005fb84c(&stack0x00000018,uVar1);
  func_0x0001008532f8(plVar5[0x17]);
  func_0x0001005fb904();
  func_0x0001005fb910();
  FUN_1005505e4(&stack0x00000018);
  FUN_1005fbcb4(plVar5 + 2,plVar16);
  func_0x0001005f96a0();
  func_0x0001005fbadc();
  return;
}



/* Entry: 1005fc434; end: 1005fc43b;  */

void FUN_1005fc434(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  
  plVar5 = (long *)*unaff_x22;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 1005fc43c; end: 1005fc487;  */

void FUN_1005fc43c(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c33264();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1005fc488; end: 1005fc507;  */

void FUN_1005fc488(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005fc618();
  return;
}



/* Entry: 1005fc508; end: 1005fc517;  */

void FUN_1005fc508(void)

{
  return;
}



/* Entry: 1005fc518; end: 1005fc617;  */

long FUN_1005fc518(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [144];
  undefined8 uStack_28;
  
  lVar6 = param_1;
  FUN_1005fc508();
  uStack_c0 = 1;
  lStack_c8 = lVar6;
  uStack_28 = extraout_x8;
  func_0x000107c60d88();
  lVar6 = param_1 + 0x60;
  lVar2 = *(long *)(param_1 + 0x68);
  FUN_1005fc63c(lVar2,lVar6);
  uVar1 = lVar6 == lVar2;
  if ((bool)uVar1) {
    FUN_10054bf64(&lStack_c8);
    lVar2 = (long)*(char *)(param_1 + 0x5f);
    if (lVar2 < 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x50);
    }
    else {
      lVar5 = param_1 + 0x48;
    }
    func_0x0001005fc678(auStack_b8,*(undefined8 *)(param_1 + 0x40),lVar5,lVar2);
    FUN_10054c0f8(&lStack_c8);
    FUN_1005fc740(lVar6,auStack_b8);
    FUN_10054c360(auStack_b8);
  }
  else {
    FUN_100852ddc(lVar6,lVar6,lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x60);
  *(long *)(lVar6 + 0x98) = param_1;
  plVar3 = &lStack_c8;
  FUN_1000df5a0();
  func_0x0001005fc834(uStack_28);
  if ((bool)uVar1) {
    return lVar6 + 0x10;
  }
  func_0x000107c60e78();
  FUN_1000df5a0(&lStack_c8);
  plVar4 = plVar3;
  func_0x000107c60bd8();
  pcStack_d8 = FUN_1005fc618;
  lStack_f0 = lVar6;
  plStack_e8 = plVar3;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_1005fc518();
  lVar6 = extraout_x8_00;
  plStack_f8 = plVar4;
  FUN_1005fc8f4(extraout_x8_00,&plStack_f8);
  return lVar6;
}



/* Entry: 1005fc618; end: 1005fc63b;  */

void FUN_1005fc618(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1005fc518();
  uStack_28 = param_2;
  FUN_1005fc8f4(param_1,&uStack_28);
  return;
}



/* Entry: 1005fc63c; end: 1005fc65f;  */

long FUN_1005fc63c(long param_1,long param_2)

{
  long lVar1;
  
  for (; (lVar1 = param_2, param_1 != param_2 && (lVar1 = param_1, *(long *)(param_1 + 0x98) != 0));
      param_1 = *(long *)(param_1 + 8)) {
  }
  return lVar1;
}



/* Entry: 1005fc660; end: 1005fc693;  */

void FUN_1005fc660(void)

{
  FUN_10054bfa4();
  FUN_1005fc694();
  return;
}



/* Entry: 1005fc694; end: 1005fc6bb;  */

void FUN_1005fc694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7c810;
  return;
}



/* Entry: 1005fc6bc; end: 1005fc73f;  */

long * FUN_1005fc6bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long alStack_50 [2];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = alStack_50;
  FUN_1005fc508();
  uStack_38 = extraout_x8;
  FUN_1005fc7b4(alStack_50,1);
  *plStack_40 = param_2;
  plStack_40[1] = param_3;
  FUN_1005fc7fc(plStack_40 + 2,param_4);
  plVar2 = plStack_40;
  plStack_40 = (long *)0x0;
  FUN_1005fc824();
  func_0x0001005fc834(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  plVar2 = plVar1;
  FUN_1005fc6bc();
  lVar3 = *plVar1;
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar1;
  *(long **)(lVar3 + 8) = plVar2;
  *plVar1 = (long)plVar2;
  plVar1[2] = plVar1[2] + 1;
  return plVar2;
}



/* Entry: 1005fc740; end: 1005fc787;  */

void FUN_1005fc740(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_1005fc6bc(param_1,0,0,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1005fc788; end: 1005fc7b3;  */

long FUN_1005fc788(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005fc788();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005fc7b4; end: 1005fc7db;  */

long FUN_1005fc7b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005fc788();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005fc7dc; end: 1005fc7e3;  */

void FUN_1005fc7dc(void)

{
  return;
}



/* Entry: 1005fc7e4; end: 1005fc7fb;  */

void FUN_1005fc7e4(void)

{
  func_0x00010054c274();
  FUN_1005fc694();
  return;
}



/* Entry: 1005fc7fc; end: 1005fc823;  */

void FUN_1005fc7fc(long param_1,long param_2)

{
  FUN_1005fc7e4();
  func_0x0001005fc6a8();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return;
}



/* Entry: 1005fc824; end: 1005fc847;  */

void FUN_1005fc824(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005fc848; end: 1005fc8a7;  */

void FUN_1005fc848(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_38 [24];
  
  FUN_1005ec860();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c2901c(auStack_38,*unaff_x19);
    func_0x000100692e90();
    func_0x000107c28dc0();
    func_0x000107c32518();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 4) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  return;
}



/* Entry: 1005fc8a8; end: 1005fc8f3;  */

undefined8 * FUN_1005fc8a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1005fc848();
  return param_1;
}



/* Entry: 1005fc8f4; end: 1005fc92b;  */

undefined8 * FUN_1005fc8f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  *param_1 = 0;
  uStack_28 = *param_2;
  *param_1 = uStack_28;
  FUN_1005fc8a8(param_1 + 1,&uStack_28);
  return param_1;
}



/* Entry: 1005fc92c; end: 1005fc98f;  */

void FUN_1005fc92c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_1005fc8f4(param_1,&uStack_28);
  return;
}



/* Entry: 1005fc990; end: 1005fca3f;  */

long FUN_1005fc990(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0x90;
    func_0x000107c60e20();
    FUN_1005fca40();
    plVar1 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      lVar2 = *param_1;
    }
  }
  func_0x000107c61170(param_2);
  return lVar2;
}



/* Entry: 1005fca40; end: 1005fcabf;  */

undefined8 *
FUN_1005fca40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c43fd0(param_2);
  FUN_10054bfa4(param_1,uVar1,param_3,param_4);
  *param_1 = &PTR_DAT_11088a050;
  param_1[0x11] = param_2;
  return param_1;
}



/* Entry: 1005fcac0; end: 1005fcb63;  */

void FUN_1005fcac0(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  func_0x000107c61174(param_3);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  if (param_3 == 0) {
    func_0x000107c31418(param_1,iVar1,&uStack_31);
  }
  else {
    lVar2 = param_3;
    func_0x000107c61178(param_3);
    func_0x000107c3ac4c();
    lVar3 = lVar2;
    func_0x000107c613d0();
    FUN_1005ecd60(param_1,iVar1,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005fcb64; end: 1005fcda3;  */

void FUN_1005fcb64(long param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  while (lVar2 = param_1, FUN_10054c3a4(), (int)lVar2 != 0) {
    lVar2 = param_1;
    (*param_2)(param_1);
    func_0x000107c61180();
    func_0x000107c3d798(puVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c611ec(0x1137f7388);
  lVar2 = 0x1137f7390;
  func_0x000107c61148();
  func_0x000107c611f0(0x1137f7388);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 != 0) {
    func_0x000107c40808(puVar1);
    func_0x000107c3e170();
    func_0x000107c61180();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    puStack_58 = &UNK_10b5ef214;
    puStack_50 = &UNK_110cd07c8;
    func_0x000107c61174();
    puStack_48 = puVar3;
    func_0x000107c429cc(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (*(char *)(param_1 + 0x6f) < '\0') {
      FUN_100033dac(&uStack_80,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
    else {
      uStack_78 = *(undefined8 *)(param_1 + 0x60);
      uStack_80 = *(undefined8 *)(param_1 + 0x58);
      lStack_70 = *(long *)(param_1 + 0x68);
    }
    func_0x000107c5c200(puVar4);
    func_0x000107c61180();
    func_0x000107c4bee8(lVar2);
    func_0x000107c61170(puVar4);
    if (lStack_70 < 0) {
      func_0x000107c60e14(uStack_80);
    }
    func_0x000107c61170(puStack_48);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar2);
  FUN_10054cac4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005fcda4; end: 1005fcdc7;  */

void FUN_1005fcda4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1005fcdc8; end: 1005fcddf;  */

void FUN_1005fcdc8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1005ec9ec(param_1,param_2 + 8);
  FUN_1005fce00();
  func_0x0001005eca94();
  return;
}



/* Entry: 1005fcde0; end: 1005fcdff;  */

void FUN_1005fcde0(void)

{
  FUN_1005ec9ec();
  FUN_1005fce00();
  func_0x0001005eca94();
  return;
}



/* Entry: 1005fce00; end: 1005fce6b;  */

void FUN_1005fce00(undefined8 *param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_1005f6168();
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 == '\0') {
      func_0x000107c324cc();
      func_0x00010061fb68();
    }
    else {
      FUN_10005e42c();
      func_0x00010061fb68();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x18) == '\x01') {
      FUN_100100fec();
      *(undefined1 *)(unaff_x19 + 0x18) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c324cc();
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    uStack_30 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    func_0x000107c3194c();
    func_0x000107c3194c(param_2,&uStack_40);
    func_0x00010867cedc();
    return;
  }
  return;
}



/* Entry: 1005fce6c; end: 1005fce87;  */

void FUN_1005fce6c(void)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  return;
}



/* Entry: 1005fce88; end: 1005fcea7;  */

void FUN_1005fce88(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1005fcea8; end: 1005fceaf;  */

void FUN_1005fcea8(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x70) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1005fceb0; end: 1005fced3;  */

undefined8 FUN_1005fceb0(undefined8 param_1)

{
  FUN_1005f6720();
  FUN_1005fcf54();
  return param_1;
}



/* Entry: 1005fced4; end: 1005fcf2b;  */

long FUN_1005fced4(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_1005fceb0(param_1 + 8,&uStack_50);
  FUN_1005fce88((ulong)&uStack_50 | 8);
  func_0x0001005f67a4();
  FUN_10054cac4();
  FUN_1005fce88(param_1 + 0x10);
  return param_1;
}



/* Entry: 1005fcf2c; end: 1005fcf53;  */

void FUN_1005fcf2c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        FUN_100100fec();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    FUN_1006203d4();
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  return;
}



/* Entry: 1005fcf54; end: 1005fcf77;  */

undefined8 FUN_1005fcf54(undefined8 param_1)

{
  FUN_1005fcf2c();
  return param_1;
}



/* Entry: 1005fcf78; end: 1005fcf87;  */

void FUN_1005fcf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1005fcf88; end: 1005fcfab;  */

void FUN_1005fcf88(void)

{
  long unaff_x19;
  
  FUN_1005fcf78();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005fcfac; end: 1005fcfb7;  */

void FUN_1005fcfac(void)

{
  return;
}



/* Entry: 1005fcfb8; end: 1005fd01b;  */

bool FUN_1005fcfb8(long param_1)

{
  bool bVar1;
  long lVar2;
  code *extraout_x8;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(char *)(param_1 + 0x178) == '\x01') {
      lVar2 = *(long *)(param_1 + 0xd0);
      FUN_1005fcfac(lVar2);
      (*extraout_x8)();
      bVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x170) <= lVar2;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 1005fd01c; end: 1005fd78f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001005fd49c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005fd01c(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  byte extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  ulong uVar14;
  undefined8 *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 *puVar15;
  long extraout_x8_08;
  long extraout_x8_09;
  byte extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 *puVar16;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  ulong extraout_x10;
  ulong extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  byte *unaff_x20;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *plVar25;
  undefined8 uStack_228;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  long lStack_70;
  undefined8 *puStack_68;
  undefined1 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 auStack_40 [48];
  byte bStack_10;
  
  func_0x0001005f9b88();
  func_0x0001005f993c();
  puVar10 = (undefined8 *)0x120;
  func_0x000107c60e20();
  *puVar10 = FUN_10085121c;
  puVar10[1] = &UNK_108735730;
  puVar10[0x22] = unaff_x20;
  func_0x0001005f9b60();
  func_0x0001005f9930();
  pbVar21 = unaff_x20;
  FUN_1005fcfb8();
  if (((ulong)pbVar21 & 1) == 0) {
    func_0x0001005fb930();
  }
  else {
    FUN_1005fd790(puVar10 + 0xc);
    plVar25 = puVar10 + 4;
    *plVar25 = puVar10[0xc];
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9b68(*plVar25);
    func_0x0001005f9b74();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x23) = 0;
      lVar17 = puVar10[4];
      func_0x00010061ddfc();
      lVar23 = *(long *)unaff_x20;
      if (lVar23 == 0) {
        FUN_10054ef74();
        lVar23 = *(long *)unaff_x20;
      }
      func_0x00010061de08();
      plVar11 = extraout_x8;
      do {
        if (*plVar11 == 0) {
          func_0x00010061de14();
          plVar11 = extraout_x8_01;
          uVar2 = extraout_w10_01;
          uVar19 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          plVar11 = extraout_x8_00;
          uVar2 = extraout_w10_00;
          uVar19 = extraout_w11;
        }
        if ((uVar19 & 1) != 0) {
          pbVar21 = *(byte **)(lVar17 + 0x90);
          bVar3 = pbVar21[1];
          uVar14 = (ulong)bVar3;
          bVar6 = *pbVar21 <= bVar3;
          if (bVar3 == *pbVar21) {
            func_0x000107c33028();
            bVar3 = extraout_w8;
            if (bVar6) {
              bVar3 = extraout_w9;
            }
            func_0x000107c32ff8();
            uVar14 = 0;
            *unaff_x20 = bVar3;
            unaff_x20[1] = 0;
            unaff_x20[8] = 0;
            unaff_x20[9] = 0;
            unaff_x20[10] = 0;
            unaff_x20[0xb] = 0;
            unaff_x20[0xc] = 0;
            unaff_x20[0xd] = 0;
            unaff_x20[0xe] = 0;
            unaff_x20[0xf] = 0;
            *(byte **)(pbVar21 + 8) = unaff_x20;
            *(byte **)(lVar17 + 0x90) = unaff_x20;
            pbVar21 = unaff_x20;
          }
          pbVar1 = pbVar21 + uVar14 * 0x18 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 **)(pbVar21 + uVar14 * 0x18 + 0x18) = puVar10;
          *(long *)(pbVar21 + uVar14 * 0x18 + 0x20) = lVar23;
          goto LAB_1005fd3ac;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    plVar11 = plVar25;
    FUN_1005f9618();
    func_0x0001005fdc9c();
    func_0x0001005fdca4();
    func_0x0001005fdcac();
    (**(code **)(extraout_x8_02 + 0xa0))(puVar10 + 0x1c);
    puVar10[0xc] = puVar10[0x1c];
    do {
      func_0x0001005f0280();
    } while (extraout_w10_02 != 0);
    func_0x0001005f9b68(puVar10[0xc]);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x23) = 1;
      func_0x00010061ddfc();
      if (*plVar11 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar11 = extraout_x8_03;
      do {
        if (*plVar11 == 0) {
          func_0x00010061de14();
          plVar11 = extraout_x8_05;
          uVar2 = extraout_w10_04;
          uVar19 = extraout_w11_02;
        }
        else {
          func_0x000107c330a8();
          plVar11 = extraout_x8_04;
          uVar2 = extraout_w10_03;
          uVar19 = extraout_w11_01;
        }
        if ((uVar19 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32fe4();
          }
          func_0x00010061de38();
LAB_1005fd3ac:
          func_0x00010061de4c();
          *extraout_x8_06 = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x0001005f9b68(puVar10[0xc]);
    lVar17 = puVar10[0xc];
    if ((extraout_w8_02 >> 5 & 1) != 0) {
      func_0x000107c60c14(&plStack_210,lVar17 + 0x18);
      func_0x000107c33260();
LAB_1005fd610:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005fd614);
      (*pcVar5)();
    }
    *(undefined1 *)(puVar10 + 4) = 0;
    *(undefined4 *)(puVar10 + 0xb) = 0xffffffff;
    FUN_100851888();
    uVar2 = *(uint *)(lVar17 + 0xd0);
    if (uVar2 != 0xffffffff) {
      plStack_210 = plVar25;
      (*(code *)(&PTR_DAT_110a698a8)[uVar2])(&plStack_210,lVar17 + 0x98);
      *(uint *)(puVar10 + 0xb) = uVar2;
    }
    func_0x0001005fdca4();
    FUN_10054ebfc(puVar10 + 0x1c);
    uVar7 = *(int *)(puVar10 + 0xb) == 1;
    if ((bool)uVar7) {
      uVar14 = puVar10[0x22];
      uVar20 = *(undefined8 *)(*(long *)(uVar14 + 0xb0) + 0x18);
      func_0x00010085197c();
      func_0x000100851990();
      FUN_100851eac();
      FUN_100851eb4(*(undefined8 *)(uVar14 + 0xb0));
      FUN_1008525a4();
      func_0x0001008525c4();
      for (; unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
        func_0x000107c33284();
        func_0x000107c331f4();
        func_0x000107c29f58(&plStack_210,*(undefined8 *)(uVar14 + 0xb0),puVar10 + 0x1c);
        func_0x000107c2899c(auStack_40,&plStack_210);
        bVar3 = bStack_10;
        func_0x000107c28810(auStack_40);
        func_0x000107c2880c(&plStack_210);
        if ((bVar3 & 1) == 0) {
          uVar24 = *(undefined8 *)(uVar14 + 0xb0);
          func_0x000107c331e8(&plStack_210);
          uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
          uStack_1f0 = uStack_1f0 & 0xffffff00;
          uVar8 = (undefined1)uVar20;
          uStack_1e8 = (int)lVar17;
          uStack_1e4 = uVar8;
          func_0x000107c29f5c(uVar24,&plStack_210);
          func_0x000107c33148();
          func_0x000107c331e8(&plStack_210);
          func_0x0001006623a4(&uStack_1f8);
          func_0x000107c330f0(auStack_e0);
          uStack_c8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_84 = 2;
          uStack_50 = 0;
          unaff_x26[1] = 0;
          *unaff_x26 = 0;
          unaff_x26[3] = 0;
          unaff_x26[2] = 0;
          *(undefined8 *)((long)unaff_x26 + 0x21) = 0;
          *(undefined8 *)((long)unaff_x26 + 0x19) = 0;
          uStack_c0 = uVar8;
          uStack_88 = uVar8;
          uStack_48 = (int)lVar17;
          uStack_44 = uVar8;
          func_0x000107c29f70(*(undefined8 *)(uVar14 + 0xb0),&plStack_210);
          func_0x000107c331fc();
        }
        func_0x000107c2a040(*(undefined8 *)(uVar14 + 0xb0),puVar10 + 0x1c);
        func_0x000107c33124();
      }
      FUN_1008525f4(*(undefined8 *)(uVar14 + 0xb0),puVar10[10]);
      FUN_10054cbac(puVar10 + 0xc);
      puVar18 = (undefined8 *)puVar10[0x22];
      func_0x0001008526e4();
      func_0x0001008526ec();
      if ((extraout_x10 & 1) != 0) {
        func_0x000100852700();
      }
      func_0x000100852714();
      (*extraout_x8_07)();
      FUN_100852798();
      func_0x0001008527a4(puVar10[6]);
      lVar17 = lStack_218;
      if (!(bool)uVar7) {
        lVar17 = extraout_x9;
      }
      func_0x0001008527b0();
      while( true ) {
        uVar7 = lVar17 - lStack_218 < 0;
        uVar8 = lVar17 == lStack_218;
        if ((bool)uVar8) break;
        func_0x000107c33228();
        func_0x000107c331f4();
        puVar16 = puVar10 + 0x1c;
        func_0x000107c29eec();
        puVar22 = puStack_68;
        if (puStack_68 != (undefined8 *)0x0) {
          uVar14 = (long)puStack_68 - 1;
          uVar7 = (long)((ulong)puStack_68 & uVar14) < 0;
          uVar8 = ((ulong)puStack_68 & uVar14) == 0;
          puVar12 = puVar16;
          if ((bool)uVar8) {
            func_0x000107c331e0();
          }
          else {
            uVar7 = (long)puVar16 - (long)puStack_68 < 0;
            uVar8 = puVar16 == puStack_68;
            puVar18 = puVar16;
            if (puStack_68 <= puVar16) {
              uVar2 = 0;
              uVar19 = (uint)puStack_68;
              if (uVar19 != 0) {
                uVar2 = (uint)puVar16 / uVar19;
              }
              puVar18 = (undefined8 *)(ulong)((uint)puVar16 - uVar2 * uVar19);
            }
          }
          plVar25 = *(long **)(lStack_70 + (long)puVar18 * 8);
          if (plVar25 != (long *)0x0) {
            do {
              while( true ) {
                plVar25 = (long *)*plVar25;
                if (plVar25 == (long *)0x0) goto LAB_1005fd48c;
                puVar15 = (undefined8 *)plVar25[1];
                uVar7 = (long)puVar15 - (long)puVar16 < 0;
                uVar8 = puVar15 == puVar16;
                if (!(bool)uVar8) break;
                func_0x000107c33248();
                if (((ulong)puVar12 & 1) != 0) goto LAB_1005fd534;
              }
              if (((ulong)puVar22 & uVar14) == 0) {
                puVar15 = (undefined8 *)((ulong)puVar15 & uVar14);
              }
              else if (puVar22 <= puVar15) {
                uVar4 = 0;
                if (puVar22 != (undefined8 *)0x0) {
                  uVar4 = (ulong)puVar15 / (ulong)puVar22;
                }
                puVar15 = (undefined8 *)((long)puVar15 - uVar4 * (long)puVar22);
              }
              uVar7 = (long)puVar15 - (long)puVar18 < 0;
              uVar8 = puVar15 == puVar18;
            } while ((bool)uVar8);
          }
        }
LAB_1005fd48c:
        func_0x000107c331dc();
        func_0x000107c33108();
        if ((puVar22 == (undefined8 *)0x0) ||
           (func_0x000107c33194(param_1,param_2,(float)puVar22), (bool)uVar7)) {
          func_0x000107c33160();
          func_0x000107c33034();
          func_0x000107c29750(&lStack_70);
          puVar22 = puStack_68;
          uVar8 = ((ulong)puStack_68 & (long)puStack_68 - 1U) == 0;
          if ((bool)uVar8) {
            func_0x000107c331e0();
          }
          else {
            uVar8 = puVar16 == puStack_68;
            puVar18 = puVar16;
            if (puStack_68 <= puVar16) {
              uVar4 = 0;
              if (puStack_68 != (undefined8 *)0x0) {
                uVar4 = (ulong)puVar16 / (ulong)puStack_68;
              }
              puVar18 = (undefined8 *)((long)puVar16 - uVar4 * (long)puStack_68);
            }
          }
        }
        if (*(long *)(lStack_70 + (long)puVar18 * 8) == 0) {
          func_0x000107c3321c();
          if (extraout_x9_00 != 0) {
            func_0x000107c33208();
            if ((bool)uVar8) {
              puVar16 = (undefined8 *)((ulong)extraout_x9_01 & extraout_x10_00);
            }
            else {
              puVar16 = extraout_x9_01;
              if (puVar22 <= extraout_x9_01) {
                uVar4 = 0;
                if (puVar22 != (undefined8 *)0x0) {
                  uVar4 = (ulong)extraout_x9_01 / (ulong)puVar22;
                }
                puVar16 = (undefined8 *)((long)extraout_x9_01 - uVar4 * (long)puVar22);
              }
            }
            *(ulong *)(extraout_x8_08 + (long)puVar16 * 8) = uVar14;
          }
        }
        else {
          func_0x000107c3320c();
        }
        func_0x000107c3315c();
LAB_1005fd534:
        func_0x000107c33124();
        lVar17 = lVar17 + 8;
      }
      plVar25 = *(long **)(puVar10[0x22] + 0x100);
      uStack_200 = 0;
      uStack_1f8 = 0;
      func_0x0001008527c4();
      plStack_210 = (long *)(extraout_x8_09 + 0x10);
      uStack_208 = 0;
      uStack_1f0 = 499;
      FUN_10002b838(auStack_40,PTR_DAT_113268db8);
      func_0x0001008527d0(uStack_228);
      func_0x0001005fb8dc((uint)uStack_228 & 0x19f);
      FUN_1005504ac(&plStack_210,auStack_40);
      puVar13 = auStack_40;
      func_0x000107c60ca0(puVar13);
      func_0x0001008528d8();
      func_0x0001008528e8();
      func_0x0001005505a0(puVar10 + 0x14,puVar13);
      func_0x0001008528f4(*(undefined8 *)(*plVar25 + 0x50));
      func_0x000100852900();
      func_0x000107c60ca0(puVar10 + 0x1f);
      func_0x000107c3312c();
      func_0x0001005fb930();
    }
    else {
      if (*(int *)(puVar10 + 0xb) != 0) {
        func_0x00010563ab98();
        goto LAB_1005fd610;
      }
      uVar9 = (undefined4)*plVar25;
      func_0x000107c297e0();
      plStack_210 = (long *)CONCAT44(plStack_210._4_4_,uVar9);
      func_0x000107c330fc();
    }
    FUN_100851888();
  }
  func_0x0001005f96a0();
  func_0x0001005fbadc();
  return;
}



/* Entry: 1005fd790; end: 1005fd997;  */

void FUN_1005fd790(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  int iVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x21;
  
  FUN_1005fdc84();
  FUN_1005f0208();
  FUN_1005f8e48(&UNK_108734f98);
  func_0x0001005fdc90();
  iVar3 = *(int *)(unaff_x21 + 0x20);
  if (iVar3 < 0) {
    lVar5 = *(long *)(unaff_x21 + 0x150);
    *(long *)(param_1 + 0x30) = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x0001005f0280();
      } while (extraout_w10_03 != 0);
    }
    plVar2 = (long *)(unaff_x21 + 0x50);
    FUN_1005f842c(param_1 + 0x28,plVar2,(long *)(param_1 + 0x30));
    FUN_1005f95f0();
    do {
      func_0x0001005f0280();
    } while (extraout_w10_04 != 0);
    func_0x0001005f9600();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010061de64();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x000107c33134();
      plVar4 = extraout_x8_02;
      do {
        if (*plVar4 == 0) {
          func_0x00010061de14();
          plVar4 = extraout_x8_04;
          uVar1 = extraout_w10_06;
          uVar6 = extraout_w11_02;
        }
        else {
          func_0x000107c330a8();
          plVar4 = extraout_x8_03;
          uVar1 = extraout_w10_05;
          uVar6 = extraout_w11_01;
        }
        if ((uVar6 & 1) != 0) goto LAB_1005fd914;
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x0001005f9610();
  }
  else {
    if (iVar3 == 0) {
      func_0x0001005ed540(unaff_x21 + 0x158);
      goto LAB_1005f96a8;
    }
    lVar5 = *(long *)(unaff_x21 + 0x150);
    *(long *)(param_1 + 0x38) = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x0001005f0280();
      } while (extraout_w10 != 0);
      iVar3 = *(int *)(unaff_x21 + 0x20);
    }
    plVar2 = (long *)(unaff_x21 + 0x50);
    func_0x000107c29730(param_1 + 0x28,plVar2,(long *)(param_1 + 0x38),(long)iVar3);
    FUN_1005f95f0();
    do {
      func_0x0001005f0280();
    } while (extraout_w10_00 != 0);
    func_0x0001005f9600();
    if ((extraout_w8 >> 1 & 1) == 0) {
      FUN_10061e858();
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010061de64();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x000107c33134();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x00010061de14();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_02;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x000107c330a8();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
LAB_1005fd914:
          func_0x000107c33030();
          if ((bool)in_ZR) {
            func_0x000107c33028();
            func_0x000107c32ff8();
            func_0x000107c32ff4();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000107c32fe8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x0001005f9610();
  }
  FUN_1005f9654();
  func_0x0001005f965c();
  func_0x0001005f9b80();
LAB_1005f96a8:
  FUN_1005f9698();
  func_0x0001005f96a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1005fd998; end: 1005fdab7;  */

void FUN_1005fd998(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c06e0;
  func_0x000107c610f4(PTR_PTR_1126c06e0);
  uVar2 = param_1;
  FUN_1005fdab8(param_1,0);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x0001005fdb34(param_1,1);
  func_0x000107c61180();
  uVar4 = param_1;
  func_0x0001005fdb34(param_1,2);
  func_0x000107c61180();
  FUN_1005ff748(param_1,3);
  func_0x000107c61180();
  FUN_1005ff810(puVar1,uVar2,uVar3,uVar4,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005fdab8; end: 1005fdc1b;  */

void FUN_1005fdab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    FUN_10054c714();
    lVar3 = *(long *)(param_1 + 0x80);
  }
  lVar2 = lVar3;
  func_0x000107c61360(lVar3,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)lVar2 != 5) {
    func_0x000107c6135c(lVar3,param_2);
    func_0x000107c5c200(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005fdc1c; end: 1005fdc83;  */

undefined1 FUN_1005fdc1c(void)

{
  if (lRam00000001137fc1d0 != -1) {
    FUN_10002a2fc(0x1137fc1d0,&PTR___NSConcreteGlobalBlock_110d668b8);
  }
  return uRam00000001137fc020;
}



/* Entry: 1005fdc84; end: 1005fdcc3;  */

void FUN_1005fdc84(void)

{
  return;
}



/* Entry: 1005fdcc4; end: 1005fde6b;  */

void FUN_1005fdcc4(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x22;
  long alStack_b0 [2];
  long alStack_70 [3];
  
  func_0x0001005fdcb8();
  FUN_1005fde6c();
  func_0x0001005fde80(alStack_70);
  func_0x0001005fe11c();
  func_0x0001005fe134();
  func_0x0001005fe1f4();
  func_0x0001005fe1fc();
  func_0x0001005fe204();
  func_0x0001005fe210(&PTR_DAT_110a6e298);
  *(undefined1 *)(alStack_70[0] + 0xd8) = 0;
  func_0x0001005fe21c();
  func_0x0001005fe22c();
  func_0x0001005fe234();
  FUN_10054ebfc(&stack0xffffffffffffffa8);
  FUN_10054ee7c(&stack0xffffffffffffff60);
  func_0x0001005fe24c();
  uVar2 = 0x88;
  func_0x000107c60e20();
  FUN_1005fe290();
  func_0x0001005fe2a4(&PTR_DAT_110a6e2d8);
  func_0x0001005fe2c0();
  FUN_1005fe2d4();
  FUN_1005fe4b8();
  func_0x0001005fe4c0();
  if ((*(long *)(unaff_x22 + 0x28) == 0) || (func_0x000107c333e0(), (bool)in_ZR)) {
    do {
      func_0x0001005fe4c8();
    } while (extraout_w9 != 0);
    func_0x0001005fe4d8();
    FUN_1005fe550();
  }
  FUN_1005fe57c();
  do {
    func_0x0001005fe4c8();
    iVar1 = (int)uVar2;
  } while (extraout_w9_00 != 0);
  func_0x0001005fe584();
  func_0x0001005fe590();
  FUN_1005fe550();
  if (iVar1 != 0) {
    func_0x0001005febb0();
  }
  FUN_10061dd88(&stack0xffffffffffffffa8);
  *unaff_x19 = alStack_b0[0];
  if (alStack_b0[0] != 0) {
    do {
      FUN_10061ddac();
    } while (extraout_w10 != 0);
  }
  FUN_10061ddc8(alStack_b0);
  func_0x00010061ddec();
  return;
}


