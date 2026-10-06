/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108668f38; end: 1086690c3;  */

void FUN_108668f38(void)

{
  int unaff_w23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
  return;
}



/* Entry: 1086690c4; end: 10866918b;  */

undefined1 *
FUN_1086690c4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_54;
  FUN_10866918c(param_3,param_4,param_8,param_9,param_5,param_6,param_7);
  if (((ulong)param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    param_3 = auStack_54;
    param_8 = auStack_44;
    param_4 = 0x10;
    param_9 = 0xc;
    FUN_1086692c8(param_1,param_3,0x10,param_8,0xc,param_2);
    param_5 = param_2;
  }
  FUN_10866933c(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x00010089a97c(&uStack_120,200);
  FUN_1086674f0(&uStack_120,param_3,param_4);
  FUN_1086674f0(&uStack_120,param_8,param_9);
  FUN_1086674f0(&uStack_120,param_5,param_6);
  FUN_1086674c4(&uStack_120,param_7);
  FUN_1086674f0(&uStack_120,param_10,param_11);
  FUN_1086674c4(&uStack_120,param_12);
  FUN_1086674f0(&uStack_120,param_16,param_17);
  func_0x000107c27994(&lStack_108,&uStack_120);
  puVar1 = &uStack_120;
  func_0x000107c27914(puVar1);
  func_0x000107c2b428();
  func_0x00010ae41fc0(puVar2,0x1c,puVar1,param_14,param_15,&UNK_10df402eb,0x20,lStack_108,
                      lStack_100 - lStack_108);
  func_0x000107c27914(&lStack_108);
  return puVar2;
}



/* Entry: 10866918c; end: 1086692c7;  */

undefined8
FUN_10866918c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00010089a97c(&uStack_80,200);
  FUN_1086674f0(&uStack_80,param_1,param_2);
  FUN_1086674f0(&uStack_80,param_3,param_4);
  FUN_1086674f0(&uStack_80,param_5,param_6);
  FUN_1086674c4(&uStack_80,param_7);
  FUN_1086674f0(&uStack_80,param_9,param_10);
  FUN_1086674c4(&uStack_80,param_11);
  FUN_1086674f0(&uStack_80,param_13,param_14);
  func_0x000107c27994(&lStack_68,&uStack_80);
  puVar1 = &uStack_80;
  func_0x000107c27914(puVar1);
  func_0x000107c2b428();
  func_0x00010ae41fc0(param_17,0x1c,puVar1,param_15,param_16,&UNK_10df402eb,0x20,lStack_68,
                      lStack_60 - lStack_68);
  func_0x000107c27914(&lStack_68);
  return param_17;
}



/* Entry: 1086692c8; end: 10866933b;  */

void FUN_1086692c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x00010bcd5604(auStack_58,&uStack_68,&uStack_78);
  func_0x00010bcd58a0(param_1,auStack_58,param_6);
  FUN_10866933c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 10866933c; end: 10866934f;  */

void FUN_10866933c(void)

{
  return;
}



/* Entry: 108669350; end: 1086693e3;  */

void FUN_108669350(void)

{
  undefined1 in_ZR;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x0001086693ec();
  func_0x000107c2b3b8();
  func_0x000108669404(uStack_28,uStack_20);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086693ec();
    func_0x000107c2b3b8();
    func_0x000108669404(uStack_58,uStack_50);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001086693ec();
      func_0x000107c2b3b8();
      func_0x000108669404(uStack_88,uStack_80);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        return;
      }
    }
  }
  return;
}



/* Entry: 1086693e4; end: 108669423;  */

void FUN_1086693e4(void)

{
  return;
}



/* Entry: 108669424; end: 1086696b7;  */

void FUN_108669424(undefined8 param_1,undefined4 param_2,ushort param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,long param_8,
                  undefined8 *param_9,undefined4 *param_10,long *param_11,long param_12,
                  undefined4 *param_13,undefined4 *param_14,long *param_15,byte *param_16)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar4 = (undefined8 *)0x190;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a61390;
  _bzero(puVar4 + 5,0x168);
  puVar6 = puVar4 + 3;
  *puVar6 = &PTR_DAT_110cee788;
  puVar4[4] = &PTR_DAT_110cee7f0;
  *(undefined1 *)((long)puVar4 + 0x144) = 0;
  *(undefined4 *)((long)puVar4 + 0x11c) = param_2;
  *(undefined1 *)(puVar4 + 0x24) = 1;
  *(ushort *)(puVar4 + 0x23) = param_3 | 0x100;
  puStack_70 = puVar6;
  puStack_68 = puVar4;
  func_0x000107c29e04(&puStack_88,param_4);
  func_0x00010866972c(puVar4 + 0xe);
  func_0x000108669724();
  puVar4[0x16] = param_5;
  *(undefined1 *)(puVar4 + 0x17) = 1;
  puVar4[0x18] = param_6;
  *(undefined1 *)(puVar4 + 0x19) = 1;
  puVar4[0x14] = param_7 & 0xffffffff;
  *(undefined1 *)(puVar4 + 0x15) = 1;
  if (*(char *)(param_8 + 0x18) == '\x01') {
    FUN_108657eb4();
    puVar4[0x12] = param_8;
    *(undefined1 *)(puVar4 + 0x13) = 1;
  }
  if (*(char *)(param_9 + 1) == '\x01') {
    puVar4[0x25] = *param_9;
    *(undefined1 *)(puVar4 + 0x26) = 1;
  }
  if (*(char *)(param_13 + 1) == '\x01') {
    *(undefined4 *)(puVar4 + 0x28) = *param_13;
    *(undefined1 *)((long)puVar4 + 0x144) = 1;
  }
  if (*(char *)(param_14 + 1) == '\x01') {
    *(undefined4 *)(puVar4 + 0x27) = *param_14;
    *(undefined1 *)((long)puVar4 + 0x13c) = 1;
  }
  if (*(char *)(param_10 + 1) == '\x01') {
    *(undefined4 *)(puVar4 + 0x1a) = *param_10;
    *(undefined1 *)((long)puVar4 + 0xd4) = 1;
  }
  if (*param_11 != param_11[1]) {
    FUN_108657ef0(&puStack_88);
    func_0x00010866972c(puVar4 + 0x1b);
    func_0x000108669724();
  }
  if (*param_15 != param_15[1]) {
    FUN_108657ef0(&puStack_88);
    func_0x00010866972c(puVar4 + 0x29);
    func_0x000108669724();
  }
  uVar1 = *(ulong *)(param_12 + 8);
  if (-1 < (char)*(byte *)(param_12 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_12 + 0x17);
  }
  if (uVar1 != 0) {
    func_0x000107c27b98(puVar4 + 0x1f);
  }
  if (param_16[1] == 1) {
    *(ushort *)(puVar4 + 0x31) = *param_16 | 0x100;
  }
  func_0x000107c30128();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_88 = puVar6;
  puStack_80 = puVar4;
  func_0x00010b4a72ec();
  func_0x000105979594(&puStack_88);
  FUN_1086696f8(&puStack_70);
  return;
}



/* Entry: 1086696b8; end: 1086696c3;  */

void FUN_1086696b8(void)

{
  return;
}



/* Entry: 1086696c4; end: 1086696d7;  */

void FUN_1086696c4(void)

{
  func_0x0001086696e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086696d8; end: 1086696f7;  */

void FUN_1086696d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086696e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1086696f8; end: 108669723;  */

long FUN_1086696f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108669724; end: 108669733;  */

void FUN_108669724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 108669734; end: 1086697eb;  */

void FUN_108669734(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1;
  func_0x000107c289e4();
  if ((int)lVar1 != 0) {
    lVar1 = 0x20;
    if (*(char *)(param_2 + 0x38) == '\0') {
      lVar1 = 0x40;
    }
    if (*(char *)(param_2 + lVar1 + 0x18) == '\x01') {
      plVar2 = *(long **)(param_1 + 0x48);
      (**(code **)(*plVar2 + 0x10))
                (plVar2,param_2,*(undefined4 *)(param_2 + 0x18),param_2 + lVar1,5);
      if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001086697b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x58) + 0x48))(*(long **)(param_1 + 0x58),0x224,1);
        return;
      }
    }
  }
  return;
}



/* Entry: 1086697ec; end: 108669803;  */

void FUN_1086697ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_2 = param_2 + 8;
  func_0x00010866a53c(param_1,param_2);
  FUN_10866a250(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 108669804; end: 10866989b;  */

long * FUN_108669804(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4afe94,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10866989c; end: 10866989f;  */

undefined8 * FUN_10866989c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a613e0;
  func_0x000107c288a4(param_1 + 0xb);
  func_0x000107c289f4(param_1 + 9);
  func_0x000107c289f8(param_1 + 3);
  func_0x000107c289f0(param_1 + 1);
  return param_1;
}



/* Entry: 1086698a0; end: 1086698b3;  */

void FUN_1086698a0(void)

{
  func_0x0001086699d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086698b4; end: 1086698f3;  */

void FUN_1086698b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010866a56c();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x28) = param_2[5];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 1086698f4; end: 108669907;  */

/* WARNING: Possible PIC construction at 0x00010866991c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108669920) */

undefined * FUN_1086698f4(void)

{
  undefined *puVar1;
  undefined *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  puStack_58 = puVar1 + 0x20;
  func_0x000100100fd4(&puStack_58);
  return puVar1 + 0x20;
}



/* Entry: 108669908; end: 10866992f;  */

/* WARNING: Possible PIC construction at 0x00010866991c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108669920) */

long FUN_108669908(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x20;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x20;
}



/* Entry: 108669930; end: 10866994f;  */

void FUN_108669930(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_108669950();
  }
  return;
}



/* Entry: 108669950; end: 108669a1b;  */

long FUN_108669950(long param_1)

{
  long lStack_28;
  
  func_0x000104bee748(param_1 + 0x98);
  func_0x000107c279c4(param_1 + 0x40);
  func_0x000107c279c4(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108669a1c; end: 108669b6b;  */

void FUN_108669a1c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  code **ppcVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long alStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x000107c31eec();
  ppcVar9 = (code **)(param_1 + 0x10);
  FUN_108669b6c(alStack_a8);
  if ((alStack_a8[0] != 0) && (lVar6 = alStack_a8[0], func_0x000107c289e4(), (int)lVar6 != 0)) {
    plVar7 = *(long **)(alStack_a8[0] + 0x48);
    (**(code **)(*plVar7 + 0x30))();
    if (((ulong)plVar7 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x18) != 0) {
        do {
          func_0x00010866a548();
        } while (extraout_w10 != 0);
      }
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar6 = *(long *)(param_1 + 0x38);
      uStack_c8 = uVar2;
      lStack_c0 = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x00010866a548();
        } while (extraout_w10_00 != 0);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      pcStack_98 = FUN_108669bd0;
      ppuStack_90 = &PTR_FUN_110a61458;
      uStack_d8 = 0;
      uStack_d0 = 0;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppcVar9 = &pcStack_98;
      uStack_88 = uVar10;
      uStack_80 = uVar11;
      uStack_78 = uVar2;
      lStack_70 = lVar6;
      func_0x00010bcce9b8(auStack_b8,uVar3,ppcVar9,plVar7 + 750000000);
      func_0x00010866a518(ppuStack_90);
      func_0x000100688f2c(auStack_b8);
      func_0x000108669ba8(&uStack_d8);
    }
  }
  func_0x000107c28a00();
  func_0x000107c31ee4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010866a518(ppuStack_90);
    func_0x000108669ba8(&uStack_d8);
    plVar7 = alStack_a8;
    func_0x000107c28a00();
    func_0x00010866a524();
    *plVar7 = 0;
    plVar7[1] = 0;
    pcVar8 = ppcVar9[1];
    if (pcVar8 != (code *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar7[1] = (long)pcVar8;
      if (pcVar8 != (code *)0x0) {
        *plVar7 = (long)*ppcVar9;
      }
    }
    return;
  }
  return;
}



/* Entry: 108669b6c; end: 108669bcf;  */

void FUN_108669b6c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108669bd0; end: 108669f0f;  */

void FUN_108669bd0(long param_1)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long alStack_328 [2];
  undefined1 auStack_318 [24];
  undefined4 uStack_300;
  undefined1 auStack_2f8 [24];
  long alStack_2e0 [24];
  byte bStack_220;
  long alStack_218 [24];
  byte bStack_158;
  undefined1 auStack_150 [208];
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  FUN_108669b6c(alStack_328,param_1 + 0x10);
  if (alStack_328[0] != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar9 = alStack_328[0];
    func_0x000107c289e4();
    if ((int)lVar9 != 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10886dd3c(auStack_150,uVar7,5);
      FUN_1086697ec(alStack_218,auStack_150);
      _bzero(alStack_2e0,200);
      uVar12 = 0;
      uVar8 = 0;
      while ((((bStack_158 & 1) != 0 || ((bStack_220 & 1) != 0)) &&
             (alStack_218[0] != alStack_2e0[0]))) {
        plVar5 = alStack_218;
        FUN_108669804();
        if ((char)plVar5[7] == '\x01') {
          func_0x000107c27994(auStack_318,plVar5);
          uStack_300 = (undefined4)plVar5[3];
          func_0x000107c27994(auStack_2f8,plVar5 + 4);
          if (uVar8 < uStack_70) {
            FUN_1086698b4(uVar8,auStack_318);
            uVar12 = uStack_80;
            uVar1 = uVar8;
          }
          else {
            uVar11 = (long)(uVar8 - uVar12) / 0x38 + 1;
            if (0x492492492492492 < uVar11) {
              FUN_1086698f4();
LAB_108669e94:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x108669e98);
              (*pcVar3)();
            }
            uVar4 = (long)(uStack_70 - uVar12) / 0x38;
            uVar6 = uVar4 * 2;
            if (uVar6 < uVar11 || uVar6 - uVar11 == 0) {
              uVar6 = uVar11;
            }
            if (0x249249249249248 < uVar4) {
              uVar6 = 0x492492492492492;
            }
            if (uVar6 == 0) {
              lVar9 = 0;
            }
            else {
              if (0x492492492492492 < uVar6) {
                func_0x000104bd35f4();
                goto LAB_108669e94;
              }
              lVar9 = uVar6 * 0x38;
              __Znwm();
            }
            uVar1 = lVar9 + (uVar8 - uVar12);
            FUN_1086698b4(uVar1,auStack_318);
            uVar10 = uStack_80;
            uVar12 = uVar1 + ((long)(uVar8 - uStack_80) / -0x38) * 0x38;
            uVar4 = uVar12;
            for (uVar11 = uStack_80; uVar11 != uVar8; uVar11 = uVar11 + 0x38) {
              FUN_1086698b4(uVar4,uVar11);
              uVar4 = uVar4 + 0x38;
            }
            for (; uVar10 != uVar8; uVar10 = uVar10 + 0x38) {
              FUN_108669908(uVar10);
            }
            uStack_70 = lVar9 + uVar6 * 0x38;
            bVar2 = uStack_80 != 0;
            uStack_80 = uVar12;
            if (bVar2) {
              __ZdlPv();
            }
          }
          uVar8 = uVar1 + 0x38;
          uStack_78 = uVar8;
          FUN_108669908(auStack_318);
          if (0x9c3 < (ulong)((long)(uVar8 - uVar12) / 0x38)) break;
        }
        FUN_10866a30c(alStack_218);
      }
      func_0x00010866a534(alStack_2e0);
      func_0x00010866a534(alStack_218);
      FUN_108669fc4(auStack_150);
      plVar5 = *(long **)(alStack_328[0] + 0x48);
      (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_80);
      if ((int)plVar5 != 0) {
        (**(code **)(**(long **)(alStack_328[0] + 0x58) + 0x48))
                  (*(long **)(alStack_328[0] + 0x58),0x225,1);
        (**(code **)(**(long **)(alStack_328[0] + 0x58) + 0x70))
                  (*(long **)(alStack_328[0] + 0x58),0x226,(long)(uStack_78 - uStack_80) / 0x38);
      }
      func_0x000108669988(&uStack_80);
    }
  }
  func_0x000107c28a00(alStack_328);
  return;
}



/* Entry: 108669f10; end: 108669fc3;  */

undefined8 FUN_108669f10(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 8;
  func_0x000107c28808(param_1 + 0x18);
  func_0x00010054e364();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 108669fc4; end: 10866a027;  */

undefined8 * FUN_108669fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [192];
  
  _bzero(auStack_e8,200);
  FUN_10866a028(param_1 + 1,auStack_e8);
  FUN_108669930(auStack_e0);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_108669930(param_1 + 2);
  return param_1;
}



/* Entry: 10866a028; end: 10866a04f;  */

undefined8 * FUN_10866a028(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10866a050(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10866a050; end: 10866a073;  */

undefined8 FUN_10866a050(undefined8 param_1)

{
  FUN_10866a074();
  return param_1;
}



/* Entry: 10866a074; end: 10866a09b;  */

void FUN_10866a074(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 != *(char *)(param_2 + 0xb8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xb8) == '\x01') {
        FUN_108669950();
        *(undefined1 *)(param_1 + 0xb8) = 0;
      }
      return;
    }
    FUN_10866a1b0();
    *(undefined1 *)(param_1 + 0xb8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010866a53c();
    func_0x000107c3194c();
    *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
    func_0x0001052b2b60(unaff_x20 + 0x20,unaff_x19 + 0x20);
    func_0x0001052b2b60(unaff_x20 + 0x40,unaff_x19 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x20 + 0x78) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x60) = uVar6;
    FUN_10866a140(unaff_x20 + 0x98,unaff_x19 + 0x98);
    return;
  }
  return;
}



/* Entry: 10866a09c; end: 10866a0ff;  */

void FUN_10866a09c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010866a53c();
  func_0x000107c3194c();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  func_0x0001052b2b60(unaff_x20 + 0x20,unaff_x19 + 0x20);
  func_0x0001052b2b60(unaff_x20 + 0x40,unaff_x19 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  FUN_10866a140(unaff_x20 + 0x98,unaff_x19 + 0x98);
  return;
}



/* Entry: 10866a100; end: 10866a13f;  */

void FUN_10866a100(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_108669950();
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



/* Entry: 10866a140; end: 10866a163;  */

undefined8 FUN_10866a140(undefined8 param_1)

{
  FUN_10866a164();
  return param_1;
}



/* Entry: 10866a164; end: 10866a18b;  */

void FUN_10866a164(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000107c27a04();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    func_0x00010528db50();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001006577c8();
    func_0x00010065ad8c();
    func_0x00010065ae08();
    return;
  }
  return;
}



/* Entry: 10866a18c; end: 10866a1af;  */

void FUN_10866a18c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27a04();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10866a1b0; end: 10866a24f;  */

void FUN_10866a1b0(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010866a53c();
  func_0x00010866a56c();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 3);
  func_0x0001006b78fc(param_1 + 0x20,param_2 + 4);
  func_0x0001006b78fc(unaff_x20 + 0x40,unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  func_0x00010528d0b0(unaff_x20 + 0x98,unaff_x19 + 0x98);
  return;
}



/* Entry: 10866a250; end: 10866a2c7;  */

void FUN_10866a250(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_d8 [184];
  
  func_0x00010866a53c();
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 != *(char *)(param_2 + 0xb8)) {
    if (cVar1 == '\0') {
      func_0x00010866a124();
    }
    else {
      func_0x00010866a124();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xb8) == '\x01') {
      FUN_108669950();
      *(undefined1 *)(unaff_x19 + 0xb8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010866a53c();
    FUN_10866a1b0(auStack_d8,unaff_x20);
    FUN_10866a09c(unaff_x20,unaff_x19);
    FUN_10866a09c(unaff_x19,auStack_d8);
    func_0x00010866a564();
    return;
  }
  return;
}



/* Entry: 10866a2c8; end: 10866a30b;  */

void FUN_10866a2c8(void)

{
  undefined1 auStack_d8 [184];
  
  func_0x00010866a53c();
  FUN_10866a1b0(auStack_d8);
  FUN_10866a09c();
  FUN_10866a09c();
  func_0x00010866a564();
  return;
}



/* Entry: 10866a30c; end: 10866a373;  */

void FUN_10866a30c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_d8 [184];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_10866a3a8(auStack_d8,*param_1);
    FUN_10866a374(param_1 + 1,auStack_d8);
    func_0x00010866a564();
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x18] == '\x01') {
    FUN_108669950();
    *(undefined1 *)(plVar1 + 0x17) = 0;
  }
  return;
}



/* Entry: 10866a374; end: 10866a3a7;  */

long FUN_10866a374(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10866a09c();
  }
  else {
    func_0x00010866a124();
  }
  return param_1;
}



/* Entry: 10866a3a8; end: 10866a493;  */

void FUN_10866a3a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,1);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  func_0x0001073a755c(param_1 + 0x20,param_2,2);
  func_0x0001073a755c(param_1 + 0x40,param_2,3);
  uVar2 = 4;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x68) = uVar2;
  uVar1 = param_2;
  func_0x000107c287bc(param_2,5);
  *(char *)(param_1 + 0x70) = (char)uVar1;
  uVar2 = 6;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined1 *)(param_1 + 0x80) = uVar2;
  uVar2 = 7;
  uVar1 = param_2;
  func_0x000107c28228();
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x90) = uVar2;
  FUN_10866a494(param_1 + 0x98,param_2,8);
  return;
}



/* Entry: 10866a494; end: 10866a517;  */

void FUN_10866a494(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = param_2;
  _sqlite3_column_type();
  bVar1 = (int)uVar2 != 5;
  if (bVar1) {
    func_0x000107c28928(&uStack_50,param_2,param_3);
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    func_0x000107c27a04(&uStack_50);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 10866a518; end: 10866a587;  */

void FUN_10866a518(undefined8 *param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010866a520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(unaff_x20 + 8);
  return;
}



/* Entry: 10866a588; end: 10866ab5f;  */

void FUN_10866a588(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 extraout_w9;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  long *extraout_x10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = (undefined8 *)0x120;
  __Znwm();
  *puVar4 = FUN_10866f770;
  puVar4[1] = FUN_10866f95c;
  puVar4[0x21] = param_2;
  puVar4[0x22] = param_3;
  func_0x00010867010c();
  FUN_10866ab60(param_1,puVar4 + 2);
  if ((*(byte *)(param_2 + 0xe) & 1) != 0) {
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,param_3,0);
    if (((ulong)plVar5 >> 0x20 & 1) == 0) {
      puVar6 = puVar4 + 0x1c;
      puVar4[0x19] = 0;
      puVar4[0x1a] = 0;
      *(undefined1 *)(puVar4 + 0x1b) = 0;
      func_0x000107c28258();
      puVar4[0x1a] = plVar5;
      *(undefined1 *)(puVar4 + 0x1b) = 1;
      puVar4[0x1d] = 0;
      puVar4[0x1e] = 0;
      *puVar6 = 0;
      func_0x000107c27ab0(puVar6,(long)*(int *)(param_3 + 0x38));
      func_0x0001086700e0();
      plVar5 = extraout_x8;
      if (!(bool)in_ZR) {
        plVar5 = extraout_x10;
      }
      for (lVar11 = (long)(int)extraout_x8[1] << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
        in_CY = 1;
        in_ZR = *(undefined ***)(*plVar5 + 0x18) == (undefined **)0x0;
        ppuVar2 = &PTR_PTR_11326cb58;
        if (!(bool)in_ZR) {
          ppuVar2 = *(undefined ***)(*plVar5 + 0x18);
        }
        func_0x000100696384(&uStack_f8,ppuVar2);
        func_0x00010069c690(puVar6,&uStack_f8);
        func_0x000107c27914(&uStack_f8);
        plVar5 = plVar5 + 1;
      }
      uStack_f8 = uStack_f8 & 0xffffffffffffff00;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      lVar11 = param_3 + 0x18;
      FUN_10867932c(puVar4 + 0x15,lVar11,&uStack_f8);
      func_0x0001086702d4();
      if ((*(byte *)(puVar4 + 0x18) & 1) == 0) {
        func_0x00010866ffd4();
        uStack_f8 = uStack_f8 & 0xffffffffffffff00;
        uStack_e0 = uStack_e0 & 0xffffffffffffff00;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107c278b8(auStack_a0,"");
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x00010866ff70((double)lVar11 / 1000.0,param_2,0,0,param_3);
        func_0x000107c27a04(&uStack_b8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
        func_0x000108670088();
        func_0x0001086702d4();
        func_0x00010866fd4c();
      }
      else {
        FUN_10866ad28(puVar4 + 0x20);
        puVar4[0x1f] = puVar4[0x20];
        do {
          func_0x00010866fe28();
        } while (extraout_w10 != 0);
        func_0x000108670034(puVar4[0x1f]);
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar4 + 0x23) = 0;
          lVar11 = puVar4[0x1f];
          func_0x00010866fd80();
          lVar10 = *param_2;
          if (lVar10 == 0) {
            func_0x000107c3a5c0();
            lVar10 = *param_2;
          }
          plVar5 = (long *)(lVar11 + 0x10);
          do {
            if (*plVar5 == 0) {
              func_0x00010866fed0();
              plVar5 = extraout_x8_01;
              uVar3 = extraout_w10_01;
              uVar8 = extraout_w11_00;
            }
            else {
              func_0x0001086701a8();
              plVar5 = extraout_x8_00;
              uVar3 = extraout_w10_00;
              uVar8 = extraout_w11;
            }
            if ((uVar8 & 1) != 0) {
              func_0x00010866ffa0();
              if ((bool)in_ZR) {
                func_0x00010866fef0();
                uVar1 = extraout_w8;
                if ((bool)in_CY) {
                  uVar1 = extraout_w9;
                }
                func_0x00010866fea0();
                *(undefined1 *)param_2 = uVar1;
                func_0x00010866fe68(0);
                *(long **)(lVar11 + 0x90) = param_2;
              }
              func_0x00010866ff90();
              *(long *)(extraout_x8_04 + 0x20) = lVar10;
              func_0x00010866fee0(*(undefined8 *)(lVar11 + 0x90));
              *(undefined8 *)(lVar11 + 0x10) = 0;
              return;
            }
          } while ((uVar3 >> 1 & 1) == 0);
        }
        puVar6 = puVar4 + 0x1f;
        FUN_10866b034(puVar6);
        func_0x0001086700b0();
        func_0x00010866ff14();
        func_0x00010866ffe4();
        if (*(char *)(puVar4 + 0xf) == '\x01') {
          func_0x00010866fda0(puVar4[9]);
          plVar5 = extraout_x8_02;
          lVar11 = extraout_x9;
          do {
            if (lVar11 == 0) goto LAB_10866a9b4;
            lVar10 = *plVar5;
            lVar11 = lVar11 + -8;
            plVar5 = plVar5 + 1;
          } while (*(int *)(lVar10 + 0x20) == 0);
          func_0x000108670280();
          puVar6 = puVar4 + 4;
          FUN_108679724(&uStack_f8,puVar6);
          func_0x0001086703a4();
          func_0x00010866ffd4();
          func_0x00010866ff34(puVar4[0x21],(double)(long)puVar6 / 1000.0);
          func_0x00010866ff84();
          FUN_10866e508(&uStack_f8);
        }
        else {
LAB_10866a9b4:
          func_0x0001086703a4();
          func_0x00010866ffd4();
          auStack_a0[0] = 0;
          uStack_98 = 0;
          func_0x000107c278b8(&uStack_f8,"");
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          func_0x000108670364(&uStack_78,(double)(long)puVar6 / 1000.0,puVar4[0x21]);
          func_0x00010866ff70();
          func_0x000108670088();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f8);
          func_0x00010866fd4c();
        }
        func_0x00010866fec8();
      }
      func_0x0001086700f4();
      func_0x0001086700ec();
      goto LAB_10866aa30;
    }
    plVar9 = (long *)param_2[7];
    func_0x00010866ff00();
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = extraout_x8_03 + 0x10;
    uStack_f0 = 0;
    uStack_d8 = 0x20e;
    puVar7 = &uStack_f8;
    FUN_10866abdc(puVar7,0x25010c);
    if (0x46 < ((uint)((ulong)plVar5 >> 0x11) & 0x7fff)) {
      func_0x000108670190();
    }
    func_0x000107c278b8(&uStack_78);
    if (((uint)plVar5 & 0xfff8) < 0x2b8) {
      func_0x00010866ff5c((ulong)plVar5 & 0xffff);
    }
    else {
      func_0x000108670184();
    }
    func_0x000107c28824(puVar7,&uStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
    FUN_10866ac2c(puVar7,param_4);
    func_0x000107c2884c(puVar4 + 0x10,puVar7);
    (**(code **)(*plVar9 + 0x50))(plVar9,puVar4 + 0x10);
    func_0x000107c2882c(puVar4 + 0x10);
    func_0x0001086702dc();
  }
  func_0x00010866fd4c();
LAB_10866aa30:
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866ab60; end: 10866aba7;  */

void FUN_10866ab60(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x0001086702cc();
  return;
}



/* Entry: 10866aba8; end: 10866abdb;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_10866aba8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_10866eb28(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 10866abdc; end: 10866ac2b;  */

undefined8 FUN_10866abdc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010866ff7c(param_1,PTR_DAT_113268ce0);
  func_0x00010866fe04((uint)param_2 & 0x10f);
  func_0x0001086701c0();
  func_0x000107c28824();
  func_0x00010866fd74();
  return param_2;
}



/* Entry: 10866ac2c; end: 10866ac83;  */

void FUN_10866ac2c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010866fe4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe38();
  }
  else {
    func_0x000108670190();
  }
  func_0x00010866ff7c();
  func_0x0001086703b0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe04();
  }
  else {
    func_0x000108670184();
  }
  func_0x00010866fe94();
  func_0x00010866fd74();
  return;
}



/* Entry: 10866ac84; end: 10866ad27;  */

void FUN_10866ac84(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 10866ad28; end: 10866b033;  */

void FUN_10866ad28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *plVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char cStack_60;
  undefined4 uStack_58;
  char cStack_54;
  
  puVar5 = (undefined8 *)0x128;
  __Znwm();
  *puVar5 = FUN_10866f5f4;
  puVar5[1] = FUN_10866f73c;
  *(undefined4 *)((long)puVar5 + 0x11c) = param_5;
  puVar5[0x20] = param_2;
  puVar5[0x21] = param_6;
  *(undefined4 *)(puVar5 + 0x23) = param_7;
  func_0x00010867010c();
  puVar6 = puVar5 + 2;
  FUN_10866ab60(param_1);
  puVar5[0x16] = 0;
  *(undefined1 *)(puVar5 + 0x17) = 0;
  puVar5[0x15] = 0;
  func_0x000107c28258();
  puVar9 = puVar5 + 4;
  *(undefined1 *)puVar9 = 0;
  puVar5[0x10] = puVar5 + 0x22;
  puVar5[0x16] = puVar6;
  *(undefined1 *)(puVar5 + 0x17) = 1;
  *(undefined1 *)(puVar5 + 0x22) = 0;
  *(undefined1 *)((long)puVar5 + 0x114) = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  puVar5[0x11] = puVar9;
  puVar5[0x12] = puVar5 + 0x23;
  puVar5[0x13] = param_2;
  puVar5[0x14] = puVar5 + 0x15;
  FUN_10866c678(puVar5 + 0x18,param_4);
  uVar3 = (ulong)puVar5[0x19] <= (ulong)puVar5[0x18];
  uVar4 = puVar5[0x18] == puVar5[0x19];
  if ((bool)uVar4) {
    func_0x000108670144(0x240108);
    func_0x0001086700d8();
    func_0x00010866fd4c();
  }
  else {
    FUN_10866c21c(puVar5 + 0x1f,param_2,puVar5 + 0x18);
    puVar5[0x1e] = puVar5[0x1f];
    do {
      func_0x00010866fe28();
    } while (extraout_w10 != 0);
    func_0x000108670034(puVar5[0x1e]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x24) = 0;
      lVar10 = puVar5[0x1e];
      func_0x00010866fd80();
      lVar11 = *param_2;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *param_2;
      }
      plVar7 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x00010866fed0();
          plVar7 = extraout_x8_00;
          uVar2 = extraout_w10_01;
          uVar8 = extraout_w11_00;
        }
        else {
          func_0x0001086701a8();
          plVar7 = extraout_x8;
          uVar2 = extraout_w10_00;
          uVar8 = extraout_w11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x00010866ffa0();
          if ((bool)uVar4) {
            func_0x00010866fef0();
            uVar4 = extraout_w8;
            if ((bool)uVar3) {
              uVar4 = extraout_w9;
            }
            func_0x000108670114();
            *(undefined1 *)param_2 = uVar4;
            func_0x00010866fe68(0);
            *(long **)(lVar10 + 0x90) = param_2;
          }
          func_0x00010866ff90();
          *(long *)(extraout_x8_01 + 0x20) = lVar11;
          func_0x00010866fee0(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    puVar6 = puVar5 + 0x1e;
    FUN_108662304(puVar6);
    FUN_1086644a4(puVar5 + 0x1b,puVar6);
    func_0x000108670080();
    func_0x00010866ff14();
    if (puVar5[0x1b] == puVar5[0x1c]) {
      func_0x000108670144(0x240105);
      func_0x0001086700d8();
      func_0x00010866fd4c();
    }
    else {
      func_0x0001086702c0();
      if (cStack_54 == '\x01') {
        *(undefined4 *)(puVar5 + 0x22) = uStack_58;
        *(undefined1 *)((long)puVar5 + 0x114) = 1;
        func_0x0001086700d8();
        func_0x00010866fd4c();
      }
      else {
        cVar1 = *(char *)(puVar5 + 0xf);
        if (cVar1 == cStack_60) {
          if (cVar1 != '\0') {
            func_0x0001086701c0();
            FUN_1088f75d4();
          }
        }
        else if (cVar1 == '\0') {
          func_0x0001086701c0();
          func_0x00010866e4cc();
        }
        else {
          FUN_1088f72bc(puVar9);
          *(undefined1 *)(puVar5 + 0xf) = 0;
        }
        func_0x0001086700d8();
        FUN_10866b1f0(puVar5 + 2,puVar9);
      }
      func_0x0001086700d0();
    }
    func_0x000108670078();
  }
  func_0x00010866ffcc();
  func_0x00010866e4e8(puVar9);
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866b034; end: 10866b08b;  */

long FUN_10866b034(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10866b07c);
  (*pcVar1)();
}



/* Entry: 10866b08c; end: 10866b1ef;  */

void FUN_10866b08c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined8 ***pppuVar5;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x10;
  long *extraout_x10_00;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [32];
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  
  FUN_10866c678(&lStack_68);
  puStack_78 = (undefined8 **)0x0;
  uStack_70 = 0;
  ppuStack_80 = &puStack_78;
  func_0x0001086700e0();
  lVar6 = extraout_x8;
  if (!(bool)in_ZR) {
    lVar6 = extraout_x10;
  }
  lVar1 = lVar6 + (long)*(int *)(extraout_x8 + 8) * 8;
  for (; bVar4 = lVar6 == lVar1, lVar7 = lStack_68, !bVar4; lVar6 = lVar6 + 8) {
    func_0x0001086700e0();
    plVar2 = extraout_x8_00;
    if (!bVar4) {
      plVar2 = extraout_x10_00;
    }
    for (lVar7 = (long)(int)extraout_x8_00[1] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      ppuVar3 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(*plVar2 + 0x30) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(*plVar2 + 0x30);
      }
      func_0x000100696384(auStack_a0,ppuVar3);
      FUN_10866e450(&ppuStack_80,auStack_a0);
      func_0x000107c27914(auStack_a0);
      plVar2 = plVar2 + 1;
    }
  }
  for (; lVar7 != lStack_60; lVar7 = lVar7 + 0x18) {
    pppuVar5 = &ppuStack_80;
    FUN_10866f384(pppuVar5,lVar7);
    if ((undefined8 ***)&puStack_78 == pppuVar5) {
      func_0x000107c29ee4(auStack_a0,lVar7);
      FUN_10866ea00(param_1 + 0x10);
      func_0x000107c287d0();
      func_0x0001086700fc();
    }
  }
  func_0x00010866f0d0(&ppuStack_80);
  func_0x000107c27a04(&lStack_68);
  return;
}



/* Entry: 10866b1f0; end: 10866b273;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */
/* WARNING: Removing unreachable block (ram,0x00010866b224) */

void FUN_10866b1f0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long unaff_x21;
  
  func_0x0001086701cc();
  plVar6 = (long *)(unaff_x19 + 8);
  lVar7 = *plVar6;
  do {
    iVar4 = (int)lVar7 + 0x10;
    func_0x00010866fdc4();
  } while (iVar4 == 0);
  FUN_10866ebc0(lVar7 + 0x98);
  *(undefined1 *)(lVar7 + 0x98) = 0;
  *(undefined1 *)(lVar7 + 0xf0) = 0;
  if (*(char *)(unaff_x21 + 0x58) == '\x01') {
    FUN_10866ebe4(lVar7 + 0x98);
    *(undefined1 *)(lVar7 + 0xf0) = 1;
  }
  *(undefined1 *)(lVar7 + 0xf8) = 1;
  func_0x00010866fdd4();
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
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
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
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
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 10866b274; end: 10866b5c7;  */

void FUN_10866b274(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,ulong *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long lVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [88];
  char cStack_70;
  byte bStack_64;
  
  puVar7 = (undefined8 *)0xa8;
  __Znwm();
  *puVar7 = FUN_10866f994;
  puVar7[1] = FUN_10866fb44;
  puVar7[0x12] = param_5;
  puVar7[0x13] = param_6;
  plVar1 = puVar7 + 4;
  puVar2 = puVar7 + 7;
  *(undefined4 *)(puVar7 + 0x14) = param_4;
  puVar7[0x11] = param_2;
  func_0x00010867010c();
  FUN_10866ab60(param_1,puVar7 + 2);
  uVar13 = *param_6;
  uVar3 = param_6[1];
  puVar7[4] = plVar1;
  puVar7[5] = plVar1;
  puVar7[6] = 0;
  while( true ) {
    uVar5 = uVar3 <= uVar13;
    uVar6 = uVar13 == uVar3;
    if ((bool)uVar6) break;
    plVar11 = plVar1;
    FUN_10865b344(plVar1,0,0,uVar13);
    lVar8 = puVar7[4];
    *plVar11 = lVar8;
    plVar11[1] = (long)plVar1;
    *(long **)(lVar8 + 8) = plVar11;
    puVar7[4] = plVar11;
    puVar7[6] = puVar7[6] + 1;
    uVar13 = uVar13 + 0x18;
  }
  plVar11 = *(long **)(param_2 + 0x28);
  FUN_10865b198(puVar7 + 10,plVar1);
  (**(code **)(*plVar11 + 0x10))(puVar7 + 0x10,plVar11,puVar7 + 10,0x5d0206);
  puVar7[0xd] = puVar7[0x10];
  do {
    func_0x00010866fe28();
  } while (extraout_w10 != 0);
  func_0x000108670034(puVar7[0xd]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar7 + 0xa4) = 0;
    lVar8 = puVar7[0xd];
    func_0x00010866fd80();
    lVar14 = *plVar11;
    if (lVar14 == 0) {
      func_0x000107c3a5c0();
      lVar14 = *plVar11;
    }
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar9 == 0) {
        func_0x00010866fed0();
        plVar9 = extraout_x8_00;
        uVar4 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x0001086701a8();
        plVar9 = extraout_x8;
        uVar4 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        func_0x00010866ffa0();
        if ((bool)uVar6) {
          func_0x00010866fef0();
          uVar6 = extraout_w8;
          if ((bool)uVar5) {
            uVar6 = extraout_w9;
          }
          func_0x000108670114();
          *(undefined1 *)plVar11 = uVar6;
          func_0x00010866fe68(0);
          *(long **)(lVar8 + 0x90) = plVar11;
        }
        func_0x00010866ff90();
        *(long *)(extraout_x8_01 + 0x20) = lVar14;
        func_0x00010866fee0(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar12 = puVar7 + 0xd;
  FUN_10865ae40(puVar12);
  FUN_10865b140(puVar2,puVar12);
  func_0x00010866ff68();
  func_0x00010866ffbc();
  func_0x00010866ffec();
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  FUN_10864a640(puVar7 + 0xd,puVar7[9]);
  puVar12 = puVar2;
  while (puVar12 = (undefined8 *)puVar12[1], puVar12 != puVar2) {
    func_0x000108668510(puVar7 + 0xd,puVar12 + 2,puVar12 + 5);
  }
  func_0x000108670090(auStack_c8,puVar7[0x11]);
  if ((cStack_70 == '\x01') && ((bStack_64 & 1) == 0)) {
    FUN_10866bd04(auStack_120,auStack_c8);
    lVar14 = ((long *)puVar7[0x13])[1];
    for (lVar8 = *(long *)puVar7[0x13]; lVar8 != lVar14; lVar8 = lVar8 + 0x18) {
      func_0x000107c29ee4(auStack_140,lVar8);
      FUN_10866ea00(auStack_110);
      func_0x000107c287d0();
      func_0x0001086700fc();
    }
    FUN_10866bd10(puVar7 + 2,auStack_120);
    FUN_1088f72bc(auStack_120);
  }
  else {
    func_0x00010866fd4c();
  }
  func_0x00010866e4e8(auStack_c8);
  func_0x0001086700a8();
  FUN_10865a078(puVar2);
  FUN_10865a014(plVar1);
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866b5c8; end: 10866bd03;  */

long * FUN_10866b5c8(long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  int iVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong extraout_x8_03;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_250 [40];
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined4 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  long alStack_1c0 [4];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  byte bStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined1 uStack_100;
  long lStack_f8;
  long lStack_f0;
  byte bStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  int iStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = 0;
  plVar13 = param_1;
  func_0x000107c28258();
  plVar12 = (long *)0x1;
  uStack_100 = 1;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  uStack_128 = 0;
  plStack_108 = plVar13;
  func_0x000107c28258();
  uStack_118 = 1;
  plStack_120 = plVar13;
  (**(code **)(**(long **)(param_2 + 0x18) + 0x30))(&lStack_168);
  if ((bStack_130 & 1) == 0) {
    func_0x0001086701d8();
    func_0x0001086703c8();
    goto LAB_10866bb84;
  }
  plVar12 = *(long **)(param_2 + 0x38);
  func_0x00010866ff00();
  alStack_1c0[2] = 0;
  alStack_1c0[3] = 0;
  alStack_1c0[0] = extraout_x8 + 0x10;
  alStack_1c0[1] = 0;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x20f);
  plVar13 = alStack_1c0;
  func_0x0001086701f8(plVar13);
  puVar4 = &uStack_128;
  func_0x000107c2825c();
  puStack_200 = puVar4;
  (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,&puStack_200);
  func_0x000107c2882c(alStack_1c0);
  func_0x000108670134();
  alStack_1c0[1] = 0;
  alStack_1c0[3] = 0;
  alStack_1c0[2] = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x0001086703dc();
  uStack_178 = 0;
  uStack_170 = (ulong)param_5 & 0xffffffff;
  func_0x00010539283c(auStack_180,*param_4,param_4[1] - *param_4,0);
  puVar4 = &uStack_198;
  func_0x000107c303b0(puVar4,0x10866e534);
  func_0x000107c29ee4(&puStack_200,param_2 + 0x58);
  *(uint *)(puVar4 + 2) = *(uint *)(puVar4 + 2) | 1;
  if (puVar4[7] == 0) {
    uVar5 = puVar4[1];
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    puVar4[7] = uVar5;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(&puStack_200);
  in_ZR = *(char *)(param_2 + 0x7c) == '\x01';
  if ((bool)in_ZR) {
    FUN_108657b48(&puStack_200,lStack_168,lStack_160 - lStack_168);
    uVar5 = uStack_1e8;
    plVar12 = (long *)(uStack_1e8 & 0xff);
    if ((uStack_1e8 & 1) == 0) {
      func_0x0001086701d8();
      func_0x0001086703c8(extraout_w8 + 6);
    }
    else {
      if ((puVar4[1] & 1) != 0) {
        func_0x0001086701e4();
      }
      func_0x00010539283c(puVar4 + 6);
    }
    func_0x000107c279c4(&puStack_200);
    if ((uVar5 & 1) != 0) goto LAB_10866b7d8;
  }
  else {
    if ((puVar4[1] & 1) != 0) {
      func_0x0001086701e4();
    }
    func_0x00010539283c(puVar4 + 6);
LAB_10866b7d8:
    lVar11 = *param_3;
    lVar1 = param_3[1];
    func_0x000108670174();
    func_0x00010866fd90();
    for (; lVar11 != lVar1; lVar11 = lVar11 + 0x40) {
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffd) != 0) {
        func_0x000107c27994(auStack_98,lVar11);
        if ((*(char *)(lVar11 + 0x38) == '\x01') &&
           (*(long *)(lVar11 + 0x20) != *(long *)(lVar11 + 0x28))) {
          uStack_c8 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_a0 = 0;
          FUN_108847298(&lStack_f8);
          func_0x000107c29ee4(&lStack_228,&lStack_f8);
          uStack_c0 = uStack_c0 | 1;
          if (uStack_a0 == 0) {
            uVar5 = uStack_c8;
            if ((uStack_c8 & 1) != 0) {
              uVar5 = *(ulong *)(uStack_c8 & 0xfffffffffffffffe);
            }
            func_0x000107c287e0();
            uStack_a0 = uVar5;
          }
          func_0x000107c287d0();
          func_0x000107c2a2e0(&lStack_228);
          func_0x000107c27914(&lStack_f8);
          plVar13 = *(long **)(lVar11 + 0x20);
          plVar12 = *(long **)(lVar11 + 0x28);
          do {
            if (plVar13 == plVar12) {
              func_0x000108670174();
              uStack_1f8 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_1d0 = 0;
              puStack_200 = extraout_x8_01;
              if ((uStack_c8 & 1) == 0) {
                if (uStack_c8 == 0) goto LAB_10866ba24;
LAB_10866b9f4:
                FUN_1088f7b00(&puStack_200,&puStack_d0);
              }
              else {
                if (*(long *)(uStack_c8 & 0xfffffffffffffffe) != 0) goto LAB_10866b9f4;
LAB_10866ba24:
                func_0x0001088f7b30(&puStack_200,&puStack_d0);
              }
              iStack_1c8 = 0;
              break;
            }
            lVar6 = *plVar13;
            FUN_108657e30(lVar6,plVar13[1] - lVar6);
            uStack_d8 = (undefined4)lVar6;
            uStack_d4 = (undefined1)((ulong)lVar6 >> 0x20);
            lVar6 = *plVar13;
            iVar10 = (int)plVar13[1] - (int)lVar6;
            FUN_108657bec(&lStack_228);
            if ((uStack_210 & 1) == 0) {
              func_0x0001086701d8();
              func_0x000108670164(extraout_w8_02 + 3);
              func_0x00010867034c();
              break;
            }
            FUN_1086794e0();
            lStack_80 = lVar6;
            iStack_78 = iVar10;
            FUN_108679524(&lStack_f8,lStack_228,lStack_220 - lStack_228,lStack_168,
                          lStack_160 - lStack_168,*plVar13,plVar13[1] - *plVar13,&lStack_80,0xc,
                          *param_4,param_4[1] - *param_4,(int)param_5);
            bVar2 = bStack_e0;
            if ((bStack_e0 & 1) == 0) {
              func_0x0001086701d8();
              func_0x000108670164(extraout_w8_00 + 4);
            }
            else {
              puVar7 = &uStack_b8;
              func_0x000107c303b0(puVar7,FUN_10866e780);
              if ((puVar7[1] & 1) != 0) {
                func_0x0001086701e4();
              }
              func_0x00010539283c(puVar7 + 2,&lStack_80,0xc);
              if ((puVar7[1] & 1) != 0) {
                func_0x0001086701e4();
              }
              func_0x00010539283c(puVar7 + 3,&uStack_d8,5);
              if ((puVar7[1] & 1) != 0) {
                func_0x0001086701e4();
              }
              func_0x00010539283c(puVar7 + 4,lStack_f8,lStack_f0 - lStack_f8);
            }
            func_0x000107c279c4(&lStack_f8);
            func_0x00010867034c();
            plVar13 = plVar13 + 7;
          } while ((bVar2 & 1) != 0);
          FUN_1088f78cc(&puStack_d0);
        }
        else {
          func_0x0001086701d8();
          func_0x000108670164(extraout_w8_01 + 2);
        }
        func_0x000107c27914(auStack_98);
        if (iStack_1c8 == 0) {
          func_0x000107c303b0(puVar4 + 3,0x10866e588);
          FUN_1088f7b00();
        }
        else {
          if (iStack_1c8 != 1) {
            func_0x00010563ab98();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10866bbc0);
            (*pcVar3)();
          }
          lStack_220 = 0;
          uStack_218 = 0;
          uStack_210 = 0;
          uStack_208 = 0x214;
          plVar13 = &lStack_228;
          lStack_228 = extraout_x8_00;
          FUN_10866c1c4(plVar13,(ulong)puStack_200 & 0xffffffff);
          func_0x0001086701f8();
          func_0x000107c2884c(&puStack_d0,plVar13);
          func_0x000107c2882c(&lStack_228);
          plVar13 = *(long **)(param_2 + 0x38);
          func_0x000107c2884c(auStack_250,&puStack_d0);
          func_0x000108670264(*(undefined8 *)(*plVar13 + 0x50));
          func_0x0001086700a0();
          func_0x000107c2882c(&puStack_d0);
        }
        FUN_10866e5d0(&puStack_200);
      }
    }
    param_5 = *(long **)(param_2 + 0x38);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x00010866fd90();
    uStack_1f8 = 0;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x211);
    ppuVar8 = &puStack_200;
    puStack_200 = extraout_x8_02;
    func_0x0001086701f8(ppuVar8);
    puVar4 = &uStack_110;
    func_0x000107c2825c();
    puStack_d0 = puVar4;
    (**(code **)(*param_5 + 0x18))(param_5,ppuVar8,&puStack_d0);
    func_0x000107c2882c(&puStack_200);
    in_ZR = (char)param_1[0xb] == '\x01';
    plVar12 = param_1;
    if ((bool)in_ZR) {
      FUN_1088f75d4(param_1,alStack_1c0);
    }
    else {
      FUN_10866bd04(param_1,alStack_1c0);
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
  }
  FUN_1088f72bc(alStack_1c0);
LAB_10866bb84:
  plVar13 = &lStack_168;
  FUN_1086566c8();
  func_0x000108670378(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c279c4(&puStack_200);
    FUN_1088f72bc(alStack_1c0);
    FUN_1086566c8(&lStack_168);
    func_0x00010866e4e8(param_1);
    func_0x00010866ff24();
    func_0x000107c348d8();
    func_0x000107c34930(&PTR_FUN_110a8d558);
    if ((extraout_x8_03 & 1) != 0) {
      func_0x0001088f84b8();
    }
    func_0x000107c34938(plVar12 + 2);
    FUN_1088f7ed4(plVar12 + 5,param_5,plVar13 + 5);
    plVar9 = plVar13 + 8;
    func_0x000107c2809c(plVar9,param_5);
    plVar12[8] = (long)plVar9;
    *(undefined4 *)((long)plVar12 + 0x54) = 0;
    lVar11 = plVar13[9];
    *(int *)(plVar12 + 10) = (int)plVar13[10];
    plVar12[9] = lVar11;
    return plVar12;
  }
  return plVar13;
}



/* Entry: 10866bd04; end: 10866bd0f;  */

void FUN_10866bd04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c348d8(param_1,0,param_2);
  func_0x000107c34930(&PTR_FUN_110a8d558);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  func_0x000107c34938(unaff_x19 + 0x10);
  FUN_1088f7ed4(unaff_x19 + 0x28);
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x54) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return;
}



/* Entry: 10866bd10; end: 10866bd7b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */
/* WARNING: Removing unreachable block (ram,0x00010866bd44) */

void FUN_10866bd10(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  func_0x0001086701cc();
  plVar6 = (long *)(unaff_x19 + 8);
  lVar7 = *plVar6;
  do {
    iVar4 = (int)lVar7 + 0x10;
    func_0x00010866fdc4();
  } while (iVar4 == 0);
  FUN_10866ebc0(lVar7 + 0x98);
  FUN_10866ebe4(lVar7 + 0x98);
  *(undefined1 *)(lVar7 + 0xf0) = 1;
  *(undefined1 *)(lVar7 + 0xf8) = 1;
  func_0x00010866fdd4();
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
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
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
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
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 10866bd7c; end: 10866c1c3;  */

void FUN_10866bd7c(undefined8 param_1,byte *param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  ulong uVar9;
  byte extraout_w9;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  double dVar14;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar6 = (undefined8 *)0x168;
  __Znwm();
  *puVar6 = FUN_10866fb78;
  puVar6[1] = FUN_10866fd18;
  puVar6[0x2a] = param_3;
  puVar6[0x2b] = param_4;
  puVar6[0x29] = param_2;
  func_0x00010867010c();
  puVar7 = puVar6 + 2;
  FUN_10866ab60(param_1);
  puVar6[0x24] = 0;
  func_0x000107c28258();
  puVar6[0x25] = puVar7;
  *(undefined1 *)(puVar6 + 0x26) = 1;
  if ((((*param_4 != param_4[1]) && (param_2[0x70] == 1)) &&
      (pbVar13 = param_2,
      (**(code **)(*(long *)param_2 + 0x38))(param_2,param_3,(param_4[1] - *param_4) / 0x18),
      ((ulong)pbVar13 >> 0x20 & 1) == 0)) && ((*(byte *)(param_3 + 0x29) >> 6 & 1) != 0)) {
    iVar2 = *(int *)(*(long *)(param_3 + 0xf0) + 0x28);
    *(int *)(puVar6 + 0x2c) = iVar2;
    if (iVar2 != 0) {
      func_0x000108670134();
      puVar6[0x10] = extraout_x8;
      puVar6[0x11] = 0;
      dVar14 = 0.0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      func_0x0001086703dc();
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x18] = extraout_x8_00;
      *(int *)(puVar6 + 0x1a) = iVar2;
      (**(code **)(*(long *)param_2 + 0x28))(puVar6 + 0x20,param_2,iVar2,param_3);
      if (*(char *)(puVar6 + 0x23) == '\x01') {
        FUN_10866ad28(puVar6 + 0x28);
        puVar6[0x27] = puVar6[0x28];
        do {
          func_0x00010866fe28();
        } while (extraout_w10 != 0);
        func_0x000108670034(puVar6[0x27]);
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)((long)puVar6 + 0x164) = 0;
          lVar10 = puVar6[0x27];
          func_0x00010866fd80();
          lVar12 = *(long *)param_2;
          if (lVar12 == 0) {
            func_0x000107c3a5c0();
            lVar12 = *(long *)param_2;
          }
          plVar8 = (long *)(lVar10 + 0x10);
          do {
            if (*plVar8 == 0) {
              func_0x00010866fed0();
              plVar8 = extraout_x8_02;
              uVar4 = extraout_w10_01;
              uVar9 = extraout_x11_00;
            }
            else {
              func_0x0001086701a8();
              plVar8 = extraout_x8_01;
              uVar4 = extraout_w10_00;
              uVar9 = extraout_x11;
            }
            if ((uVar9 & 1) != 0) {
              pbVar13 = *(byte **)(lVar10 + 0x90);
              bVar3 = pbVar13[1];
              uVar9 = (ulong)bVar3;
              bVar5 = *pbVar13 <= bVar3;
              if (bVar3 == *pbVar13) {
                func_0x00010866fef0();
                bVar3 = extraout_w8;
                if (bVar5) {
                  bVar3 = extraout_w9;
                }
                func_0x00010866fea0();
                uVar9 = 0;
                *param_2 = bVar3;
                param_2[1] = 0;
                param_2[8] = 0;
                param_2[9] = 0;
                param_2[10] = 0;
                param_2[0xb] = 0;
                param_2[0xc] = 0;
                param_2[0xd] = 0;
                param_2[0xe] = 0;
                param_2[0xf] = 0;
                *(byte **)(pbVar13 + 8) = param_2;
                *(byte **)(lVar10 + 0x90) = param_2;
                pbVar13 = param_2;
              }
              pbVar1 = pbVar13 + uVar9 * 0x18 + 0x10;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
              *(undefined8 **)(pbVar13 + uVar9 * 0x18 + 0x18) = puVar6;
              *(long *)(pbVar13 + uVar9 * 0x18 + 0x20) = lVar12;
              func_0x00010866fee0(*(undefined8 *)(lVar10 + 0x90));
              *(undefined8 *)(lVar10 + 0x10) = 0;
              return;
            }
          } while ((uVar4 >> 1 & 1) == 0);
        }
        FUN_10866b034(puVar6 + 0x27);
        func_0x0001086700b0();
        func_0x000108670124();
        func_0x00010867000c();
        if (*(char *)(puVar6 + 0xf) == '\x01') {
          func_0x000108670208();
        }
        func_0x00010866fec8();
      }
      else {
        plVar11 = *(long **)(param_2 + 0x38);
        func_0x00010866ff00();
        uStack_80 = 0;
        uStack_78 = 0;
        lStack_90 = extraout_x8_03 + 0x10;
        uStack_88 = 0;
        uStack_70 = 0x20e;
        plVar8 = &lStack_90;
        FUN_10866abdc(plVar8,0x25010b);
        FUN_10866c1c4();
        FUN_10866ac2c();
        func_0x000107c2884c(puVar6 + 0x1b,plVar8);
        (**(code **)(*plVar11 + 0x50))(plVar11,puVar6 + 0x1b);
        func_0x000107c2882c(puVar6 + 0x1b);
        func_0x0001086700a0();
      }
      FUN_10866b08c(puVar6 + 0x10,puVar6[0x2b]);
      func_0x00010866fda0(puVar6[0x15]);
      plVar8 = extraout_x8_04;
      lVar10 = extraout_x9;
      do {
        if (lVar10 == 0) break;
        lVar12 = *plVar8;
        lVar10 = lVar10 + -8;
        plVar8 = plVar8 + 1;
      } while (*(int *)(lVar12 + 0x20) == 0);
      FUN_108679724(&lStack_90,puVar6 + 0x10);
      func_0x000107c2825c(puVar6 + 0x24);
      func_0x00010867004c();
      auStack_b0[0] = 0;
      uStack_98 = 0;
      func_0x000108670258(dVar14 / 1000.0);
      func_0x000107c279c4(auStack_b0);
      func_0x0001086702fc();
      FUN_10866e508(&lStack_90);
      func_0x00010866ffdc();
      func_0x00010866ffc4();
      goto LAB_10866bf58;
    }
  }
  func_0x00010866fd4c();
LAB_10866bf58:
  func_0x00010866fe20();
  func_0x00010866fe7c();
  return;
}



/* Entry: 10866c1c4; end: 10866c21b;  */

void FUN_10866c1c4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010866fe4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe38();
  }
  else {
    func_0x000108670190();
  }
  func_0x00010866ff7c();
  func_0x0001086703b0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe04();
  }
  else {
    func_0x000108670184();
  }
  func_0x00010866fe94();
  func_0x00010866fd74();
  return;
}



/* Entry: 10866c21c; end: 10866c677;  */

void FUN_10866c21c(undefined8 param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = (undefined8 *)0x80;
  __Znwm();
  *puVar8 = FUN_10866f424;
  puVar8[1] = FUN_10866f5bc;
  puVar8[0xe] = param_2;
  FUN_108668cc0(puVar8 + 2);
  FUN_10866846c(param_1,puVar8 + 2);
  puVar14 = puVar8 + 4;
  *puVar14 = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar17 = puVar14;
  FUN_108647df0(puVar14,(long)(param_3[1] - *param_3) / 0x18);
  uVar18 = *param_3;
  uVar1 = param_3[1];
  while( true ) {
    uVar6 = uVar1 <= uVar18;
    uVar7 = uVar18 == uVar1;
    if ((bool)uVar7) break;
    FUN_108847238(&puStack_90,uVar18);
    puVar17 = puVar14;
    func_0x000108648150(puVar14,&puStack_90);
    func_0x000108670104();
    uVar18 = uVar18 + 0x18;
  }
  puVar8[7] = 0;
  func_0x000107c28258();
  puVar8[8] = puVar17;
  *(undefined1 *)(puVar8 + 9) = 1;
  puVar9 = (undefined8 *)0x30;
  __Znwm();
  plVar19 = puVar9 + 1;
  *plVar19 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a61578;
  puVar20 = puVar9 + 3;
  *puVar20 = &PTR_FUN_110a5fc10;
  puVar16 = puVar9 + 4;
  *puVar16 = 0;
  puStack_90 = (undefined8 *)0x0;
  func_0x000107c27f9c(&puStack_90);
  puVar9[5] = 0;
  puStack_90 = (undefined8 *)0x0;
  func_0x000107c27f98(&puStack_90);
  puVar10 = (undefined8 *)0xc0;
  __Znwm();
  puVar17 = puVar10;
  func_0x000107c31510();
  *puVar17 = &PTR_FUN_110a61640;
  *(undefined1 *)(puVar17 + 0x13) = 0;
  *(undefined1 *)(puVar17 + 0x17) = 0;
  puStack_90 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  func_0x000107c27f98(&puStack_a8);
  func_0x000107c27f9c(&puStack_90);
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_a8 = puVar10;
  puStack_a0 = puVar10;
  func_0x000107c27f98(&uStack_70);
  func_0x000107c27f9c(&uStack_68);
  func_0x000107c27fec(&puStack_90);
  func_0x000107c288b0(puVar16,&puStack_a8);
  func_0x000107c2887c(puVar9 + 5,&puStack_a0);
  func_0x000107c27f98(&puStack_a0);
  func_0x0001086702cc();
  puVar9[3] = &PTR_FUN_110a615c8;
  puVar8[10] = puVar20;
  puVar8[0xb] = puVar9;
  plVar11 = *(long **)(param_2 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar3) {
      *plVar19 = *plVar19 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_90 = puVar20;
  puStack_88 = puVar9;
  (**(code **)(*plVar11 + 0x28))(plVar11,puVar14,1,&puStack_90);
  ppuVar12 = &puStack_90;
  FUN_10864a618();
  puVar8[0xd] = *puVar16;
  do {
    func_0x00010866fe28();
  } while (extraout_w10 != 0);
  puVar8[0xc] = puVar8[0xd];
  do {
    func_0x00010866fe28();
  } while (extraout_w10_00 != 0);
  func_0x000108670034(puVar8[0xc]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0xf) = 0;
    lVar15 = puVar8[0xc];
    func_0x00010866fd80();
    puVar17 = *ppuVar12;
    if (puVar17 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
      puVar17 = *ppuVar12;
    }
    plVar11 = (long *)(lVar15 + 0x10);
    do {
      if (*plVar11 == 0) {
        func_0x00010866fed0();
        plVar11 = extraout_x8_00;
        uVar4 = extraout_w10_02;
        uVar13 = extraout_w11_00;
      }
      else {
        func_0x0001086701a8();
        plVar11 = extraout_x8;
        uVar4 = extraout_w10_01;
        uVar13 = extraout_w11;
      }
      if ((uVar13 & 1) != 0) {
        func_0x00010866ffa0();
        if ((bool)uVar7) {
          func_0x00010866fef0();
          uVar7 = extraout_w8;
          if ((bool)uVar6) {
            uVar7 = extraout_w9;
          }
          func_0x00010866fea0();
          *(undefined1 *)ppuVar12 = uVar7;
          func_0x00010866fe68(0);
          *(undefined8 ***)(lVar15 + 0x90) = ppuVar12;
        }
        func_0x00010866ff90();
        *(undefined8 **)(extraout_x8_02 + 0x20) = puVar17;
        func_0x00010866fee0(*(undefined8 *)(lVar15 + 0x90));
        *(undefined8 *)(lVar15 + 0x10) = 0;
        return;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  func_0x000108670034(puVar8[0xc]);
  lVar15 = puVar8[0xc];
  if ((extraout_w8_01 >> 5 & 1) == 0) {
    func_0x000107c27f9c(puVar8 + 0xc);
    func_0x00010866ff68();
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if ((*(byte *)(lVar15 + 0xb0) & 1) == 0) {
      func_0x0001086701b4(*(undefined8 *)(puVar8[0xe] + 0x38));
      func_0x00010867024c();
      FUN_108668738(&puStack_90);
      puStack_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      puStack_a8 = (undefined8 *)0x0;
      func_0x00010864a454(&puStack_a8);
    }
    else {
      func_0x0001086684dc(&puStack_90,lVar15 + 0x98);
    }
    lVar15 = puVar8[0xe];
    plVar11 = *(long **)(lVar15 + 0x38);
    puVar17 = puVar8 + 7;
    func_0x000107c2825c();
    puStack_a8 = puVar17;
    (**(code **)(*plVar11 + 0x10))(plVar11,0x210,&puStack_a8);
    func_0x0001086701b4(*(undefined8 *)(lVar15 + 0x38));
    (*extraout_x8_01)();
    func_0x0001086684b4(puVar8 + 2,&puStack_90);
    func_0x00010864a454(&puStack_90);
    func_0x000108670294();
    func_0x000108647874(puVar14);
    func_0x00010866fe20();
    func_0x00010866fe7c();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&puStack_90,lVar15 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&puStack_90);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10866c5f0);
  (*pcVar5)();
}



/* Entry: 10866c678; end: 10866c757;  */

void FUN_10866c678(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long lVar7;
  undefined1 auStack_140 [40];
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [40];
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long alStack_68 [4];
  long alStack_48 [3];
  
  func_0x0001086701cc();
  alStack_48[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27ab0();
  alStack_48[0] = 0;
  alStack_48[1] = 0;
  lVar1 = unaff_x21[1];
  for (lVar7 = *unaff_x21; bVar3 = lVar7 == lVar1, !bVar3; lVar7 = lVar7 + 0x18) {
    param_1 = alStack_48;
    func_0x000108659f30(param_1,lVar7);
    if (((ulong)param_1 & 1) == 0) {
      func_0x000107c29ee4(alStack_68,lVar7);
      unaff_x21 = alStack_68;
      FUN_1086a5fbc();
      param_1 = alStack_68;
      func_0x000107c2a2e0();
      if (((ulong)unaff_x21 & 1) == 0) {
        func_0x0001086703bc();
        func_0x000107c28840();
      }
    }
  }
  func_0x000108670378(alStack_48[2]);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27a04();
  func_0x00010866ff24();
  if ((*(byte *)(*unaff_x19 + 4) & 1) == 0) {
    uVar2 = 0x25010a;
    if (*(char *)(unaff_x19[1] + 0x58) == '\0') {
      uVar2 = 0x25010c;
    }
  }
  else {
    uVar2 = 0x25010b;
  }
  lVar7 = unaff_x19[3];
  uStack_e0 = 0;
  uStack_d8 = 0;
  ppuStack_f0 = &PTR_FUN_110a609a8;
  uStack_e8 = 0;
  uStack_d0 = 0x20e;
  pppuVar4 = &ppuStack_f0;
  lStack_a0 = lVar1;
  plStack_98 = unaff_x21;
  plStack_90 = param_1;
  FUN_10866abdc(pppuVar4,uVar2);
  FUN_10866ac2c();
  func_0x000107c2884c(auStack_c8,pppuVar4);
  func_0x000107c2882c(&ppuStack_f0);
  uStack_108 = 0;
  uStack_100 = 0;
  ppuStack_118 = &PTR_FUN_110a609a8;
  uStack_110 = 0;
  uStack_f8 = 0x20e;
  pppuVar4 = &ppuStack_118;
  FUN_10866abdc(pppuVar4,uVar2);
  FUN_10866ac2c();
  func_0x000107c2884c(&ppuStack_f0,pppuVar4);
  func_0x0001086702dc();
  if (*(char *)((undefined4 *)*unaff_x19 + 1) == '\x01') {
    FUN_10866c1c4(auStack_c8,*(undefined4 *)*unaff_x19);
    FUN_10866c1c4(&ppuStack_f0,*(undefined4 *)*unaff_x19);
  }
  plVar6 = *(long **)(lVar7 + 0x38);
  ppuVar5 = (undefined **)unaff_x19[4];
  func_0x000107c2825c();
  ppuStack_118 = ppuVar5;
  (**(code **)(*plVar6 + 0x18))(plVar6,auStack_c8,&ppuStack_118);
  plVar6 = *(long **)(lVar7 + 0x38);
  func_0x000107c2884c(auStack_140,&ppuStack_f0);
  (**(code **)(*plVar6 + 0x50))(plVar6,auStack_140);
  func_0x000107c2882c(auStack_140);
  func_0x000107c2882c(&ppuStack_f0);
  func_0x000107c2882c(auStack_c8);
  return;
}



/* Entry: 10866c758; end: 10866c90b;  */

void FUN_10866c758(long *param_1)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_d0 [40];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  if ((*(byte *)(*param_1 + 4) & 1) == 0) {
    uVar1 = 0x25010a;
    if (*(char *)(param_1[1] + 0x58) == '\0') {
      uVar1 = 0x25010c;
    }
  }
  else {
    uVar1 = 0x25010b;
  }
  lVar5 = param_1[3];
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x20e;
  pppuVar2 = &ppuStack_80;
  FUN_10866abdc(pppuVar2,uVar1);
  FUN_10866ac2c();
  func_0x000107c2884c(auStack_58,pppuVar2);
  func_0x000107c2882c(&ppuStack_80);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a8 = &PTR_FUN_110a609a8;
  uStack_a0 = 0;
  uStack_88 = 0x20e;
  pppuVar2 = &ppuStack_a8;
  FUN_10866abdc(pppuVar2,uVar1);
  FUN_10866ac2c();
  func_0x000107c2884c(&ppuStack_80,pppuVar2);
  func_0x0001086702dc();
  if (*(char *)((undefined4 *)*param_1 + 1) == '\x01') {
    FUN_10866c1c4(auStack_58,*(undefined4 *)*param_1);
    FUN_10866c1c4(&ppuStack_80,*(undefined4 *)*param_1);
  }
  plVar4 = *(long **)(lVar5 + 0x38);
  ppuVar3 = (undefined **)param_1[4];
  func_0x000107c2825c();
  ppuStack_a8 = ppuVar3;
  (**(code **)(*plVar4 + 0x18))(plVar4,auStack_58,&ppuStack_a8);
  plVar4 = *(long **)(lVar5 + 0x38);
  func_0x000107c2884c(auStack_d0,&ppuStack_80);
  (**(code **)(*plVar4 + 0x50))(plVar4,auStack_d0);
  func_0x000107c2882c(auStack_d0);
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 10866c90c; end: 10866c93f;  */

long FUN_10866c90c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c28904();
  }
  else {
    func_0x00010528d0f0();
  }
  return param_1;
}



/* Entry: 10866c940; end: 10866c997;  */

void FUN_10866c940(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010866fe4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe38();
  }
  else {
    func_0x000108670190();
  }
  func_0x00010866ff7c();
  func_0x0001086703b0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe04();
  }
  else {
    func_0x000108670184();
  }
  func_0x00010866fe94();
  func_0x00010866fd74();
  return;
}



/* Entry: 10866c998; end: 10866c9e7;  */

undefined8 FUN_10866c998(undefined8 param_1,undefined8 param_2)

{
  func_0x00010866ff7c(param_1,PTR_DAT_113268cf0);
  func_0x00010866fe04((uint)param_2 & 0x117);
  func_0x0001086701c0();
  func_0x000107c28824();
  func_0x00010866fd74();
  return param_2;
}



/* Entry: 10866c9e8; end: 10866ca3f;  */

void FUN_10866c9e8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x00010866fe4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe38();
  }
  else {
    func_0x000108670190();
  }
  func_0x00010866ff7c();
  func_0x0001086703b0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010866fe04();
  }
  else {
    func_0x000108670184();
  }
  func_0x00010866fe94();
  func_0x00010866fd74();
  return;
}



/* Entry: 10866ca40; end: 10866ca87;  */

void FUN_10866ca40(undefined8 param_1,undefined8 *param_2)

{
  long *unaff_x19;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010867006c();
  uStack_30 = *param_2;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  func_0x000107c28a14(*unaff_x19 + 0x40);
  func_0x000107c2798c(&uStack_30);
  return;
}



/* Entry: 10866ca88; end: 10866de77;  */

/* WARNING: Removing unreachable block (ram,0x00010866d8e0) */

void FUN_10866ca88(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long ******pppppplVar2;
  byte bVar3;
  undefined8 uVar4;
  long ****pppplVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  ulong uVar10;
  undefined3 uVar11;
  undefined4 *puVar12;
  code *pcVar13;
  undefined1 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined **ppuVar20;
  long ******pppppplVar21;
  long *plVar22;
  ulong *puVar23;
  undefined8 ******ppppppuVar24;
  byte bVar25;
  int extraout_w8;
  undefined4 extraout_w8_00;
  uint extraout_w8_01;
  undefined4 extraout_w8_02;
  uint uVar26;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar27;
  undefined8 *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long *****extraout_x8_04;
  long extraout_x8_05;
  long ****pppplVar28;
  long ***ppplVar29;
  long *****ppppplVar30;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long *****extraout_x8_09;
  long *****extraout_x8_10;
  long ******extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  char extraout_w9;
  long ******pppppplVar31;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar32;
  undefined8 *extraout_x10;
  long *****ppppplVar33;
  undefined8 *extraout_x10_00;
  long *extraout_x10_01;
  undefined8 *puVar34;
  long *****ppppplVar35;
  undefined4 *puVar36;
  undefined8 *puVar37;
  long ******pppppplVar38;
  long **pplVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined8 uVar42;
  long ******pppppplVar43;
  long ******pppppplVar44;
  long *plVar45;
  long **pplVar46;
  uint uStack_4d4;
  undefined8 uStack_4d0;
  long *plStack_478;
  long lStack_470;
  undefined4 auStack_460 [2];
  undefined1 uStack_458;
  byte bStack_440;
  undefined1 uStack_438;
  undefined1 uStack_420;
  undefined1 uStack_418;
  undefined1 uStack_410;
  undefined1 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  undefined1 uStack_3c8;
  undefined1 auStack_3c0 [32];
  undefined1 auStack_3a0 [24];
  byte bStack_388;
  undefined1 auStack_380 [32];
  long ****pppplStack_360;
  undefined1 uStack_358;
  long **pplStack_348;
  byte bStack_340;
  long lStack_328;
  long lStack_320;
  char cStack_310;
  long ***ppplStack_308;
  undefined1 *puStack_300;
  undefined1 uStack_2f8;
  undefined4 *puStack_2f0;
  undefined4 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [48];
  long ****pppplStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *****ppppplStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  uint uStack_250;
  uint uStack_24c;
  char cStack_248;
  long ****pppplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined8 *****pppppuStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined1 uStack_204;
  long lStack_200;
  long lStack_1f8;
  long *****ppppplStack_1e8;
  long lStack_1e0;
  long ****apppplStack_1d0 [3];
  undefined8 uStack_1b8;
  long *****ppppplStack_1b0;
  undefined1 uStack_1a8;
  long *****ppppplStack_1a0;
  long ***ppplStack_198;
  byte bStack_188;
  undefined4 uStack_180;
  long ***ppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte bStack_158;
  long ***ppplStack_150;
  long *****ppppplStack_148;
  undefined1 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  uint uStack_118;
  byte bStack_114;
  long *****ppppplStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 uStack_f8;
  long alStack_98 [3];
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((param_1[0x80] & 1) == 0) {
    plVar45 = *(long **)(param_1 + 0x38);
    uVar26 = 0x2f0132;
  }
  else {
    if (*(uint *)(param_3 + 0x28) != 0) {
      puStack_2e8 = (undefined4 *)0x0;
      puStack_2f0 = (undefined4 *)0x0;
      uStack_2e0 = 0;
      uVar14 = *(int *)(param_3 + 0x2c) == 1;
      puVar18 = param_1;
      if ((bool)uVar14) {
        func_0x0001086702f4(param_1,(ulong)*(uint *)(param_3 + 0x28) << 0x20);
      }
      func_0x0001086700e0();
      puVar34 = extraout_x8;
      if (!(bool)uVar14) {
        puVar34 = extraout_x10;
      }
      puVar1 = puVar34 + *(int *)(extraout_x8 + 1);
      func_0x00010866fd90();
      do {
        if (puVar34 == puVar1) {
          if (0 < *(int *)(param_3 + 0x18)) {
            FUN_10886db5c(&plStack_138,*(undefined8 *)(param_1 + 8),param_2,
                          *(undefined4 *)(param_3 + 0x28));
            func_0x0001086702b0();
            if (((byte)uStack_80 & 1) == 0) {
              func_0x0001086702f4();
            }
          }
          puVar12 = puStack_2e8;
          puVar36 = puStack_2f0;
          if (puStack_2f0 != puStack_2e8) {
            FUN_10866ca40(&plStack_138,param_1 + 0xd0);
            if (plStack_138 != (long *)0x0) {
              for (; puVar36 != puVar12; puVar36 = puVar36 + 2) {
                lVar41 = 0x20;
                lVar32 = 0x28;
                switch(*puVar36) {
                case 2:
                  lVar41 = 0x18;
                case 1:
                  (**(code **)(*plStack_138 + lVar41))(plStack_138,param_2,puVar36[1]);
                  break;
                case 3:
                  lVar32 = 0x30;
                case 0:
                  (**(code **)(*plStack_138 + lVar32))(plStack_138,param_2);
                }
              }
            }
            func_0x000107c28a18(&plStack_138);
          }
          FUN_10866e710(&puStack_2f0);
          return;
        }
        pppppplVar38 = (long ******)*puVar34;
        puStack_300 = (undefined1 *)0x0;
        ppplStack_308 = (long ***)0x0;
        uStack_2f8 = 0;
        func_0x000107c28258();
        uStack_2f8 = 1;
        puStack_300 = puVar18;
        FUN_10886db5c(&plStack_138,*(undefined8 *)(param_1 + 8),param_2,
                      *(undefined4 *)(pppppplVar38 + 10));
        func_0x000107c27994(&plStack_478,param_2);
        auStack_460[0] = *(undefined4 *)(pppppplVar38 + 10);
        uStack_458 = 0;
        bStack_440 = 0;
        uStack_438 = 0;
        uStack_420 = 0;
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_408 = 0;
        uStack_400 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        pplVar39 = &plStack_138;
        if ((byte)uStack_80 == '\0') {
          pplVar39 = &plStack_478;
        }
        uStack_3c8 = 0;
        FUN_10866a1b0(auStack_3c0,pplVar39);
        FUN_108669950(&plStack_478);
        func_0x0001086702b0();
        lVar41 = lStack_320;
        bVar16 = false;
        lVar32 = lStack_328;
        if (cStack_310 == '\x01') {
          do {
            bVar16 = lVar32 != lVar41;
            if (lVar32 == lVar41) break;
            lVar19 = lVar32;
            func_0x0001006760a8(lVar32,param_1 + 0x58);
            lVar32 = lVar32 + 0x18;
          } while ((int)lVar19 == 0);
        }
        if ((int)*(uint *)(pppppplVar38 + 3) < 1) {
          bVar15 = false;
        }
        else {
          ppppplVar33 = pppppplVar38[2];
          pppppplVar21 = pppppplVar38 + 2;
          if (((ulong)ppppplVar33 & 1) != 0) {
            pppppplVar21 = (long ******)((long)ppppplVar33 + 7);
          }
          lVar41 = (ulong)*(uint *)(pppppplVar38 + 3) << 3;
          do {
            bVar15 = lVar41 != 0;
            if (lVar41 == 0) break;
            iVar17 = (int)*pppppplVar21;
            func_0x000100696384(&plStack_138);
            func_0x00010867029c();
            func_0x00010866fffc();
            lVar41 = lVar41 + -8;
            pppppplVar21 = pppppplVar21 + 1;
          } while (iVar17 == 0);
        }
        puVar23 = (ulong *)((ulong)pppppplVar38[8] & 0xfffffffffffffffc);
        uVar27 = (ulong)*(char *)((long)puVar23 + 0x17);
        if ((long)uVar27 < 0) {
          uVar27 = puVar23[1];
          if (uVar27 != 0) {
            puVar23 = (ulong *)*puVar23;
            goto LAB_10866ccb0;
          }
        }
        else if (*(char *)((long)puVar23 + 0x17) != '\0') {
LAB_10866ccb0:
          func_0x00010069648c(&plStack_138,puVar23,(long)puVar23 + uVar27);
          FUN_1086554b0(auStack_380,&plStack_138);
          func_0x00010866fffc();
        }
        if (pppppplVar38[9] != (long *****)0x0) {
          uStack_358 = 1;
          pppplStack_360 = (long ****)pppppplVar38[9];
        }
        uVar14 = *(int *)(pppppplVar38 + 3) == 1;
        if (*(int *)(pppppplVar38 + 3) < 1) {
          if (bStack_340 == 1) {
            bStack_340 = 0;
          }
          FUN_10866a18c(&lStack_328);
        }
        else {
          plStack_130 = (long *)0x0;
          plStack_138 = (long *)0x0;
          uStack_128 = 0;
          pplVar39 = &plStack_138;
          func_0x000107c27ab0();
          func_0x0001086700e0();
          puVar37 = extraout_x8_01;
          if (!(bool)uVar14) {
            puVar37 = extraout_x10_00;
          }
          for (lVar41 = (long)*(int *)(extraout_x8_01 + 1) << 3; lVar41 != 0; lVar41 = lVar41 + -8)
          {
            func_0x000100696384(&plStack_478,*puVar37);
            func_0x00010069c690(&plStack_138,&plStack_478);
            pplVar39 = &plStack_478;
            func_0x000107c27914();
            puVar37 = puVar37 + 1;
          }
          if (bVar15 == false) {
            if ((bStack_340 & 1) != 0) {
              bStack_340 = 0;
            }
          }
          else if ((bStack_340 & 1) == 0) {
            func_0x000107c316c4();
            bStack_340 = 1;
            pplStack_348 = pplVar39;
          }
          FUN_10866c90c(&lStack_328,&plStack_138);
          func_0x000107c27a04(&plStack_138);
        }
        bVar3 = bVar16 & (bVar15 ^ 1U);
        if ((bStack_388 & 1) == 0) {
          pppppplVar31 = pppppplVar38 + 5;
          uVar7 = *(undefined4 *)(pppppplVar38 + 10);
          pppppplVar21 = pppppplVar31;
          if (((ulong)*pppppplVar31 & 1) != 0) {
            pppppplVar21 = (long ******)((long)*pppppplVar31 + 7);
          }
          pppppplVar44 = pppppplVar21 + *(int *)(pppppplVar38 + 6);
          for (; bVar16 = pppppplVar21 == pppppplVar44, !bVar16; pppppplVar21 = pppppplVar21 + 1) {
            func_0x0001086700e0();
            plVar45 = extraout_x8_02;
            if (!bVar16) {
              plVar45 = extraout_x10_01;
            }
            lVar41 = (long)(int)extraout_x8_02[1] << 3;
            while (lVar41 != 0) {
              ppuVar20 = &PTR_PTR_11326cb58;
              if (*(undefined ***)(*plVar45 + 0x30) != (undefined **)0x0) {
                ppuVar20 = *(undefined ***)(*plVar45 + 0x30);
              }
              func_0x000100696384(&plStack_138);
              func_0x00010867029c();
              func_0x00010866fffc();
              lVar41 = lVar41 + -8;
              plVar45 = plVar45 + 1;
              if (((ulong)ppuVar20 & 1) != 0) goto LAB_10866ce3c;
            }
          }
LAB_10866ce3c:
          bVar16 = false;
          if (pppppplVar21 == pppppplVar44) {
            bVar16 = bVar15;
          }
          if (bVar16 == false) {
            pppppplVar21 = pppppplVar38;
            FUN_108679724(auStack_2d8);
            uStack_1b8 = 0;
            func_0x000107c28258();
            uStack_1a8 = 1;
            ppppplStack_1b0 = (long *****)pppppplVar21;
            (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(&plStack_478);
            if (bStack_440 == 1) {
              plVar45 = plStack_478;
              FUN_108657e30(plStack_478,lStack_470 - (long)plStack_478);
              ppppplStack_270._0_5_ = SUB85(plVar45,0);
              pppppplVar21 = &ppppplStack_270;
              FUN_108657e88();
              if ((bStack_440 & 1) == 0) goto LAB_10866d4d8;
              uVar42 = *(undefined8 *)(param_1 + 0x38);
              pppppplVar44 = pppppplVar21;
              func_0x000108670244();
              ppppplStack_270 = (long *****)pppppplVar44;
              func_0x00010867019c();
              (*extraout_x8_03)(uVar42,0x216,&ppppplStack_270);
              func_0x000107c27994(apppplStack_1d0,param_1 + 0x58);
              func_0x000107c27994(&ppppplStack_1e8,&plStack_478);
              func_0x000107c27994(&lStack_200,auStack_460);
              pppppplVar44 = (long ******)ppppplStack_1e8;
              FUN_108657e30(ppppplStack_1e8,lStack_1e0 - (long)ppppplStack_1e8);
              uStack_208 = SUB84(pppppplVar44,0);
              uStack_204 = (undefined1)((ulong)pppppplVar44 >> 0x20);
              uVar8 = *(undefined4 *)(pppppplVar38 + 10);
              uStack_1b8 = 0;
              func_0x000107c28258();
              uStack_4d0 = 0;
              uStack_4d4 = 0;
              iVar17 = 0;
              uStack_1a8 = 1;
              if (((ulong)pppppplVar38[5] & 1) != 0) {
                pppppplVar31 = (long ******)((long)pppppplVar38[5] + 7);
              }
              pppppplVar2 = pppppplVar31 + *(int *)(pppppplVar38 + 6);
              ppppplStack_1b0 = (long *****)pppppplVar44;
              for (; pppppplVar31 != pppppplVar2; pppppplVar31 = pppppplVar31 + 1) {
                ppppplVar35 = *pppppplVar31;
                pppppplVar43 = (long ******)((ulong)ppppplVar35[6] & 0xfffffffffffffffc);
                lStack_218 = 0;
                pppppuStack_220 = (undefined8 ******)0x0;
                uStack_210 = 0;
                plVar45 = *(long **)(param_1 + 0x38);
                ppppplVar33 = pppppplVar43[1];
                if (-1 < (char)*(byte *)((long)pppppplVar43 + 0x17)) {
                  ppppplVar33 = (long *****)(ulong)*(byte *)((long)pppppplVar43 + 0x17);
                }
                func_0x00010866fd5c(&ppppplStack_1a0);
                uStack_180 = 0x221;
                ppppplStack_1a0 = extraout_x8_04;
                func_0x000107c278b8(&uStack_170,PTR_DAT_113268d18);
                uVar42 = 0x122;
                if (ppppplVar33 != (long *****)0x41) {
                  uVar42 = 0x123;
                }
                uVar4 = 0x121;
                if (ppppplVar33 != (long *****)0x21) {
                  uVar4 = uVar42;
                }
                func_0x00010866ff5c(uVar4);
                func_0x000107c28824(&ppppplStack_1a0,&uStack_170,
                                    *(undefined8 *)(extraout_x9 + extraout_x8_05 * 8));
                func_0x0001086701f0();
                pppppplVar44 = &ppppplStack_270;
                func_0x000108670200();
                func_0x000108670264(*(undefined8 *)(*plVar45 + 0x50));
                func_0x00010866ff0c();
                func_0x00010866ff54();
                if (ppppplVar33 == (long *****)0x41) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&pppplStack_240,pppppplVar43);
                  iStack_228 = 0;
LAB_10866d038:
                  pppppplVar44 = &pppppuStack_220;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (pppppplVar44,&pppplStack_240);
                  pppplVar28 = ppppplVar35[3];
                  ppppplVar33 = ppppplVar35 + 3;
                  if (((ulong)pppplVar28 & 1) != 0) {
                    ppppplVar33 = (long *****)((long)pppplVar28 + 7);
                  }
                  ppppplVar35 = ppppplVar33 + *(int *)(ppppplVar35 + 4);
                  for (; ppppplVar33 != ppppplVar35; ppppplVar33 = ppppplVar33 + 1) {
                    pppplVar28 = *ppppplVar33;
                    ppplVar29 = (long ***)&PTR_PTR_11326cb58;
                    if (pppplVar28[6] != (long ***)0x0) {
                      ppplVar29 = pppplVar28[6];
                    }
                    pppppplVar44 = (long ******)apppplStack_1d0;
                    func_0x0001006933e4(pppppplVar44,ppplVar29);
                    if (((ulong)pppppplVar44 & 1) != 0) {
                      ppplVar29 = pppplVar28[3];
                      pppplVar5 = pppplVar28 + 3;
                      if (((ulong)ppplVar29 & 1) != 0) {
                        pppplVar5 = (long ****)((long)ppplVar29 + 7);
                      }
                      for (lVar41 = (long)*(int *)(pppplVar28 + 4) << 3; lVar41 != 0;
                          lVar41 = lVar41 + -8) {
                        ppplVar29 = *pppplVar5;
                        ppppplVar30 = (long *****)((ulong)ppplVar29[3] & 0xfffffffffffffffc);
                        cVar9 = *(char *)((long)ppppplVar30 + 0x17);
                        ppppplStack_1a0 = (long *****)*ppppplVar30;
                        if (-1 < (long)cVar9) {
                          ppppplStack_1a0 = ppppplVar30;
                        }
                        ppplStack_198 = (long ***)ppppplVar30[1];
                        if (-1 < cVar9) {
                          ppplStack_198 = (long ***)(long)cVar9;
                        }
                        uStack_170 = (long *****)&uStack_208;
                        uStack_168 = 5;
                        pppppplVar44 = &ppppplStack_1a0;
                        FUN_108664790(pppppplVar44,&uStack_170);
                        if (((ulong)pppppplVar44 & 1) == 0) {
                          ppppplStack_270 =
                               (long *****)((ulong)ppppplStack_270 & 0xffffffffffffff00);
                          uStack_258 = uStack_258 & 0xffffffffffffff00;
                          uStack_250 = uStack_250 & 0xffffff00;
                          uStack_24c = uStack_24c & 0xffffff00;
                          cStack_248 = '\0';
                        }
                        else {
                          pplVar39 = ppplVar29[2];
                          pplVar46 = ppplVar29[4];
                          ppplStack_150 = (long ***)0x0;
                          func_0x000107c28258();
                          uStack_140 = 1;
                          ppppppuVar24 = (undefined8 ******)pppppuStack_220;
                          if (-1 < (long)uStack_210._7_1_) {
                            ppppppuVar24 = &pppppuStack_220;
                          }
                          lVar32 = lStack_218;
                          if (-1 < uStack_210) {
                            lVar32 = (long)uStack_210._7_1_;
                          }
                          ppppplStack_148 = (long *****)pppppplVar44;
                          FUN_108657bec(&ppppplStack_1a0,ppppppuVar24,lVar32,lStack_200,
                                        lStack_1f8 - lStack_200);
                          pppppplVar44 = *(long *******)(param_1 + 0x38);
                          ppppplVar30 = (long *****)&ppplStack_150;
                          func_0x000107c2825c();
                          uStack_170 = ppppplVar30;
                          func_0x00010867019c();
                          (*extraout_x8_06)(pppppplVar44,0x218,&uStack_170);
                          if ((bStack_188 & 1) == 0) {
                            ppppplStack_270 =
                                 (long *****)((ulong)ppppplStack_270 & 0xffffffffffffff00);
                            uStack_258 = uStack_258 & 0xffffffffffffff00;
                            uStack_250 = CONCAT31(uStack_250._1_3_,1);
                            func_0x000108670040();
                            uStack_24c = extraout_w8 - 3;
                            cStack_248 = extraout_w9;
                          }
                          else {
                            puVar37 = (undefined8 *)((ulong)pplVar39 & 0xfffffffffffffffc);
                            puVar40 = (undefined8 *)((ulong)pplVar46 & 0xfffffffffffffffc);
                            ppplStack_150 = (long ***)0x0;
                            func_0x000107c28258();
                            uStack_140 = 1;
                            ppppppuVar24 = (undefined8 ******)pppppuStack_220;
                            if (-1 < (long)uStack_210._7_1_) {
                              ppppppuVar24 = &pppppuStack_220;
                            }
                            lVar32 = lStack_218;
                            if (-1 < uStack_210) {
                              lVar32 = (long)uStack_210._7_1_;
                            }
                            bVar25 = *(byte *)((long)puVar37 + 0x17);
                            uVar27 = puVar37[1];
                            if (-1 < (char)bVar25) {
                              uVar27 = (ulong)bVar25;
                            }
                            puVar6 = (undefined8 *)*puVar37;
                            if (-1 < (char)bVar25) {
                              puVar6 = puVar37;
                            }
                            puVar37 = (undefined8 *)*puVar40;
                            uVar10 = puVar40[1];
                            if (-1 < (char)*(byte *)((long)puVar40 + 0x17)) {
                              puVar37 = puVar40;
                              uVar10 = (ulong)*(byte *)((long)puVar40 + 0x17);
                            }
                            ppppplStack_148 = (long *****)pppppplVar44;
                            FUN_108679678(&uStack_170,ppppplStack_1a0,
                                          (long)ppplStack_198 - (long)ppppplStack_1a0,ppppppuVar24,
                                          lVar32,ppppplStack_1e8,lStack_1e0 - (long)ppppplStack_1e8,
                                          puVar6,uVar27,puVar37,uVar10,uVar8);
                            uVar42 = *(undefined8 *)(param_1 + 0x38);
                            pppplVar28 = &ppplStack_150;
                            func_0x000107c2825c();
                            ppplStack_178 = (long ***)pppplVar28;
                            func_0x00010867019c();
                            (*extraout_x8_07)(uVar42,0x219,&ppplStack_178);
                            if ((bStack_158 & 1) == 0) {
                              ppppplStack_270 =
                                   (long *****)((ulong)ppppplStack_270 & 0xffffffffffffff00);
                              uStack_258 = uStack_258 & 0xffffffffffffff00;
                              cStack_248 = '\x01';
                              uStack_24c = 0x29011a;
                            }
                            else {
                              func_0x0001086701b4(*(undefined8 *)(param_1 + 0x38));
                              (*extraout_x8_08)();
                              if ((bStack_158 & 1) == 0) {
                                func_0x000104bdc2c8();
                                goto LAB_10866dc00;
                              }
                              func_0x000105c41160(&ppppplStack_270,&uStack_170);
                              cStack_248 = '\0';
                              uStack_24c = uStack_24c & 0xffffff00;
                            }
                            uStack_250 = CONCAT31(uStack_250._1_3_,1);
                            pppppplVar44 = (long ******)&uStack_170;
                            func_0x000107c279c4();
                          }
                          func_0x00010867035c();
                          if ((char)uStack_250 == '\x01') {
                            if ((long)uStack_210._7_1_ < 0) {
                              ppppppuVar24 = (undefined8 ******)pppppuStack_220;
                              lVar32 = lStack_218;
                              if (lStack_218 != 0) goto LAB_10866d300;
                            }
                            else if (uStack_210._7_1_ != '\0') {
                              ppppppuVar24 = &pppppuStack_220;
                              lVar32 = (long)uStack_210._7_1_;
LAB_10866d300:
                              func_0x00010866e7d8(&ppppplStack_1a0,ppppppuVar24,
                                                  (long)ppppppuVar24 + lVar32);
                              ppppplVar30 = ppppplStack_1a0;
                              FUN_108657e30(ppppplStack_1a0,
                                            (long)ppplStack_198 - (long)ppppplStack_1a0);
                              uStack_170._0_5_ = (uint5)ppppplVar30;
                              pppppplVar44 = (long ******)&uStack_170;
                              FUN_108657e88();
                              func_0x00010867012c();
                            }
                            uVar26 = uStack_24c;
                            iVar17 = iVar17 + 1;
                            if (cStack_248 == '\x01') {
                              plVar45 = *(long **)(param_1 + 0x38);
                              func_0x00010866fd5c(&ppppplStack_1a0);
                              uStack_180 = 0x21b;
                              pppppplVar44 = &ppppplStack_1a0;
                              ppppplStack_1a0 = extraout_x8_09;
                              FUN_10866c9e8(pppppplVar44,uVar26);
                              func_0x000107c2884c(&pppplStack_298,pppppplVar44);
                              func_0x000108670264(*(undefined8 *)(*plVar45 + 0x50));
                              uStack_4d4 = uVar26 >> 8;
                              uStack_4d0._0_4_ = uVar26 & 0xff;
                              pppppplVar44 = (long ******)&pppplStack_298;
                              func_0x000107c2882c();
                              func_0x00010866ff54();
                              uStack_4d0 = CONCAT44(1,(uint)uStack_4d0);
                            }
                          }
                        }
                        if ((char)uStack_258 == '\x01') {
                          func_0x000108670244();
                          ppppplStack_1a0 = (long *****)pppppplVar44;
                          func_0x00010867019c();
                          func_0x00010867022c();
                          func_0x00010866fd5c(&ppppplStack_1a0);
                          uStack_180 = 0x21c;
                          ppppplStack_1a0 = extraout_x8_10;
                          FUN_10866c998(&ppppplStack_1a0,0x270113);
                          func_0x00010867038c();
                          func_0x000108670224();
                          func_0x00010866ff54();
                          func_0x000105c41160(&plStack_138,&ppppplStack_270);
                          uStack_118 = uStack_118 & 0xffffff00;
                          bStack_114 = 0;
                          ppppplStack_110 = (long *****)pppppplVar21;
                          func_0x000108670014(1);
                          func_0x000107c279c4(&ppppplStack_270);
                          func_0x000108670354();
                          func_0x000108670344();
                          goto LAB_10866d590;
                        }
                        pppppplVar44 = &ppppplStack_270;
                        func_0x000107c279c4();
                        pppplVar5 = pppplVar5 + 1;
                      }
                    }
                  }
                }
                else {
                  if (ppppplVar33 == (long *****)0x21) {
                    pppppplVar44 = (long ******)*pppppplVar43;
                    ppppplVar33 = pppppplVar43[1];
                    if (-1 < (char)*(byte *)((long)pppppplVar43 + 0x17)) {
                      pppppplVar44 = pppppplVar43;
                      ppppplVar33 = (long *****)(ulong)*(byte *)((long)pppppplVar43 + 0x17);
                    }
                    func_0x000108657b5c(&ppppplStack_1a0,pppppplVar44,ppppplVar33);
                    if ((bStack_188 == 1) && ((long)ppplStack_198 - (long)ppppplStack_1a0 == 0x41))
                    {
                      pppppplVar44 = (long ******)&uStack_170;
                      func_0x0001006ad92c();
                      uStack_238 = uStack_168;
                      pppplStack_240 = (long ****)uStack_170;
                      uStack_230 = uStack_160;
                      uStack_160 = 0;
                      uStack_170 = (long *****)0x0;
                      uStack_168 = 0;
                      iStack_228 = 0;
                      func_0x0001086701f0();
                    }
                    else {
                      func_0x000108670040();
                      pppplStack_240 = (long ****)CONCAT44(pppplStack_240._4_4_,extraout_w8_02);
                      iStack_228 = 1;
                    }
                    func_0x00010867035c();
                    if (iStack_228 == 0) goto LAB_10866d038;
                    if (iStack_228 != 1) {
                      func_0x00010563ab98();
LAB_10866dc00:
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x10866dc04);
                      (*pcVar13)();
                    }
                    uVar26 = (uint)pppplStack_240;
                  }
                  else {
                    func_0x000108670040();
                    pppplStack_240 = (long ****)CONCAT44(pppplStack_240._4_4_,extraout_w8_00);
                    iStack_228 = 1;
                    func_0x000108670040();
                    uVar26 = extraout_w8_01;
                  }
                  uStack_4d4 = uVar26 >> 8;
                  uStack_4d0 = CONCAT44(1,uVar26 & 0xff);
                }
                func_0x000108670354();
                func_0x000108670344();
              }
              func_0x000108670244();
              ppppplStack_270 = (long *****)pppppplVar44;
              func_0x00010867019c();
              func_0x00010867022c();
              uVar26 = (uint)uStack_4d0 | uStack_4d4 << 8;
              if (iVar17 == 0) {
                if ((uStack_4d0 & 0x100000000) == 0) {
                  func_0x00010866fd5c(&ppppplStack_270);
                  func_0x000108670154();
                  func_0x00010866fe84();
                  func_0x00010867038c();
                  func_0x000108670238();
                  func_0x00010866ff0c();
                  func_0x000108670398();
                  func_0x000108670040();
                  uStack_118 = extraout_w8_05 - 4;
                }
                else {
                  uStack_268 = 0;
                  uStack_260 = 0;
                  uStack_258 = 0;
                  func_0x000108670154(extraout_x8_00);
                  func_0x00010866fe84();
                  func_0x00010867038c();
                  func_0x000108670238();
                  func_0x00010866ff0c();
                  func_0x000108670398();
                  uStack_118 = uVar26;
                }
                bStack_114 = 1;
                uStack_108 = 1;
                auStack_100[0] = 0;
                uStack_f8 = 0;
                ppppplStack_110 = (long *****)pppppplVar21;
              }
              else {
                func_0x000108670040();
                if ((uStack_4d0 & 0x100000000) == 0) {
                  uVar26 = extraout_w8_04 - 1;
                }
                func_0x00010866fd5c(&ppppplStack_270);
                func_0x000108670154();
                func_0x00010866fe84();
                func_0x00010867038c();
                func_0x000108670224();
                func_0x00010866ff0c();
                func_0x000108670398();
                bStack_114 = 1;
                uStack_118 = uVar26;
                ppppplStack_110 = (long *****)pppppplVar21;
                func_0x000108670014();
              }
LAB_10866d590:
              func_0x000107c27914(&lStack_200);
              func_0x000107c27914(&ppppplStack_1e8);
              func_0x000107c27914(apppplStack_1d0);
            }
            else {
LAB_10866d4d8:
              func_0x000108670398();
              func_0x000108670040();
              uStack_118 = extraout_w8_03 - 5;
              bStack_114 = 1;
              ppppplStack_110 = (long *****)((ulong)ppppplStack_110 & 0xffffffffffffff00);
              uStack_108 = 0;
              auStack_100[0] = 0;
              uStack_f8 = 0;
            }
            FUN_1086566c8(&plStack_478);
            if ((char)uStack_120 == '\x01') {
              FUN_1086554b0(auStack_3a0,&plStack_138);
              puVar23 = (ulong *)((ulong)pppppplVar38[8] & 0xfffffffffffffffc);
              uVar27 = (ulong)*(char *)((long)puVar23 + 0x17);
              if ((long)uVar27 < 0) {
                uVar27 = puVar23[1];
                if (uVar27 != 0) {
                  puVar23 = (ulong *)*puVar23;
                  goto LAB_10866d5f0;
                }
              }
              else if (*(char *)((long)puVar23 + 0x17) != '\0') {
LAB_10866d5f0:
                func_0x00010069648c(&ppppplStack_1a0,puVar23,(long)puVar23 + uVar27);
                puVar18 = auStack_3a0;
                func_0x0001006760a8(puVar18,&ppppplStack_1a0);
                plVar45 = *(long **)(param_1 + 0x38);
                func_0x00010866fd5c(&ppppplStack_270);
                uStack_250 = 0x21d;
                ppppplStack_270 = (long *****)extraout_x8_11;
                func_0x000107c278b8(&plStack_478,PTR_DAT_113268d10);
                uVar42 = 0x8f8;
                if ((int)puVar18 == 0) {
                  uVar42 = 0x900;
                }
                func_0x00010866ff5c(uVar42);
                func_0x000107c28824(&ppppplStack_270,&plStack_478,
                                    *(undefined8 *)(extraout_x9_00 + extraout_x8_12));
                func_0x000108670320();
                func_0x000108670200(&plStack_478);
                (**(code **)(*plVar45 + 0x50))(plVar45,&plStack_478);
                func_0x000107c2882c(&plStack_478);
                func_0x00010866ff0c();
                func_0x00010867012c();
              }
            }
            bVar25 = bStack_388;
            func_0x00010866fd5c(&ppppplStack_1a0);
            uStack_180 = 0x215;
            pppppplVar21 = &ppppplStack_1a0;
            FUN_10866c940(pppppplVar21,(int)param_5);
            FUN_10866c998();
            func_0x000107c278b8(&pppplStack_298,PTR_DAT_113268cf8);
            uVar42 = 0x8a8;
            if (bVar3 == 0) {
              uVar42 = 0x8b0;
            }
            func_0x00010866ff5c(uVar42);
            func_0x000107c28824(pppppplVar21,&pppplStack_298,
                                *(undefined8 *)(extraout_x9_01 + extraout_x8_13));
            func_0x000108670314();
            func_0x000108670200(&ppppplStack_270);
            func_0x00010866ff54();
            if ((bVar25 & 1) == 0) {
              FUN_10866c9e8(&ppppplStack_270,uStack_118);
            }
            plVar45 = *(long **)(param_1 + 0x38);
            ppppplVar33 = (long *****)&ppplStack_308;
            func_0x000107c2825c();
            ppppplStack_1a0 = ppppplVar33;
            func_0x000108670224(*(undefined8 *)(*plVar45 + 0x18));
            plVar45 = *(long **)(param_1 + 0x38);
            func_0x000107c2884c(&ppppplStack_1a0,&ppppplStack_270);
            (**(code **)(*plVar45 + 0x50))(plVar45,&ppppplStack_1a0);
            func_0x00010866ff54();
            pppplVar28 = &ppplStack_308;
            func_0x000107c2825c(pppplVar28);
            uStack_290 = 0;
            pppplStack_298 = (long ****)0x0;
            uStack_288 = 0;
            uVar11 = (undefined3)((ulong)uStack_170 >> 0x28);
            uVar26 = (uint)uStack_170;
            uStack_170._0_5_ = (uint5)(uVar26 & 0xffffff00);
            uStack_170 = (long *****)CONCAT35(uVar11,(uint5)uStack_170);
            if ((bVar25 == 0) && ((bStack_114 & 1) != 0)) {
              uVar26 = uStack_118 - 0x290117;
              if (2 < uVar26) {
                uVar26 = 3;
              }
              uStack_170._0_5_ = CONCAT14(1,uVar26);
              uStack_170 = (long *****)CONCAT35(uVar11,(uint5)uStack_170);
            }
            uVar27 = (ulong)pppplStack_240 >> 0x28;
            pppplStack_240._0_4_ = (uint)pppplStack_240 & 0xffffff00;
            pppplStack_240._0_5_ = (uint5)(uint)pppplStack_240;
            pppplStack_240 = (long ****)CONCAT35((int3)uVar27,(uint5)pppplStack_240);
            uVar27 = (ulong)ppplStack_150 >> 0x28;
            uVar26 = (uint)ppplStack_150;
            ppplStack_150._0_5_ = (uint5)(uVar26 & 0xffffff00);
            ppplStack_150 = (long ***)CONCAT35((int3)uVar27,(uint5)ppplStack_150);
            uStack_1b8._0_2_ = CONCAT11(1,bVar3);
            (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                      (*(long **)(param_1 + 0x48),2,bVar25,param_2,param_4,
                       (long)((double)(long)pppplVar28 / 1000.0),uVar7,auStack_3a0,auStack_100,
                       &pppplStack_240,&pppplStack_298,auStack_2c8,&ppplStack_150,&uStack_170,
                       &pppplStack_298,&uStack_1b8);
            func_0x000107c27a04(&pppplStack_298);
            func_0x00010866ff0c();
            func_0x000107c279c4(&plStack_138);
            FUN_10866e508(auStack_2d8);
          }
        }
        FUN_10886da3c(*(undefined8 *)(param_1 + 8),auStack_3c0);
        if (bStack_388 == 1) {
          uVar7 = *(undefined4 *)(pppppplVar38 + 10);
          func_0x000107c27994(&plStack_138,param_2);
          uStack_120 = uVar7;
          FUN_10866df60(param_1 + 0x98,&plStack_138,auStack_3a0);
          func_0x00010866fffc();
        }
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))(*(long **)(param_1 + 0xe0),auStack_3c0);
        plStack_130 = (long *)0x0;
        plStack_138 = (long *)0x0;
        uStack_128 = 0;
        if ((bStack_388 & 1) == 0) {
          func_0x0001086702a8();
          bVar25 = bStack_388;
          if ((bStack_388 & 1) != 0) goto LAB_10866d8f8;
        }
        else {
          bVar25 = 1;
LAB_10866d8f8:
          if (0 < *(int *)(pppppplVar38 + 3)) {
            func_0x0001086702a8();
            bVar25 = bStack_388;
          }
        }
        plVar22 = plStack_138;
        plVar45 = plStack_130;
        if ((bVar3 & bVar25) == 1) {
          func_0x0001086702a8();
          plVar22 = plStack_138;
          plVar45 = plStack_130;
        }
        for (; plVar22 != plVar45; plVar22 = plVar22 + 1) {
          func_0x0001086702f4();
        }
        FUN_10866e710(&plStack_138);
        puVar18 = auStack_3c0;
        FUN_108669950();
        puVar34 = puVar34 + 1;
      } while( true );
    }
    plVar45 = *(long **)(param_1 + 0x38);
    uVar26 = 0x2f0133;
  }
  func_0x00010866ff00(plVar45,param_5);
  alStack_98[2] = 0;
  uStack_80 = 0;
  alStack_98[0] = extraout_x8_14 + 0x10;
  alStack_98[1] = 0;
  uStack_78 = 0x223;
  plVar22 = alStack_98;
  FUN_10866c940(plVar22);
  func_0x000107c278b8(&stack0xffffffffffffffb8,PTR_DAT_113268d30);
  func_0x00010866fe04(uVar26 & 0x133);
  func_0x000107c28824(plVar22,&stack0xffffffffffffffb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0xffffffffffffffb8);
  func_0x000107c2884c(&stack0xffffffffffffff90,plVar22);
  (**(code **)(*plVar45 + 0x50))(plVar45,&stack0xffffffffffffff90);
  func_0x000107c2882c(&stack0xffffffffffffff90);
  func_0x000107c2882c(alStack_98);
  return;
}



/* Entry: 10866de78; end: 10866df5f;  */

void FUN_10866de78(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long extraout_x8;
  long alStack_98 [4];
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  func_0x00010866ff00();
  alStack_98[2] = 0;
  alStack_98[3] = 0;
  alStack_98[0] = extraout_x8 + 0x10;
  alStack_98[1] = 0;
  uStack_78 = 0x223;
  plVar1 = alStack_98;
  FUN_10866c940(plVar1);
  func_0x000107c278b8(auStack_48,PTR_DAT_113268d30);
  func_0x00010866fe04(param_3 & 0x133);
  func_0x000107c28824(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(auStack_70,plVar1);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_70);
  func_0x000107c2882c(auStack_70);
  func_0x000107c2882c(alStack_98);
  return;
}



/* Entry: 10866df60; end: 10866e1a3;  */

void FUN_10866df60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *unaff_x19;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x21;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  ulong *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001086701cc();
  func_0x000107c27994(&uStack_b0);
  uStack_98 = *(undefined4 *)(unaff_x21 + 0x18);
  func_0x000107c27994(&uStack_c8,param_3);
  puVar9 = unaff_x19 + 1;
  FUN_10866ef80(puVar9,&uStack_b0);
  uVar5 = uStack_b8;
  uVar4 = uStack_c0;
  uVar3 = uStack_c8;
  puVar12 = unaff_x19 + 2;
  if (puVar12 == puVar9) {
    uStack_80 = uStack_c8;
    uStack_78 = uStack_c0;
    uStack_70 = uStack_b8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    puVar7 = (undefined8 *)0x60;
    puStack_88 = unaff_x19 + 4;
    __Znwm();
    puVar10 = puVar7 + 4;
    puVar7[5] = uStack_a8;
    *puVar10 = uStack_b0;
    uStack_58 = 1;
    puVar7[6] = uStack_a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *(undefined4 *)(puVar7 + 7) = uStack_98;
    puVar7[8] = unaff_x19 + 4;
    puVar7[9] = uVar3;
    puVar7[10] = uVar4;
    puVar7[0xb] = uVar5;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    puVar9 = (ulong *)*puVar12;
    puStack_60 = puVar12;
    puStack_68 = puVar7;
    while (puVar13 = puVar12, puVar9 != (ulong *)0x0) {
      while( true ) {
        puVar13 = puVar9;
        puVar7 = puVar10;
        FUN_10866f000(puVar10,puVar13 + 4);
        cVar6 = (char)puVar7;
        if (cVar6 < '\0') break;
        func_0x000108670274();
        if (-1 < cVar6) {
          if (*puVar12 == 0) goto LAB_10866e084;
          goto LAB_10866e0c0;
        }
        puVar12 = puVar13 + 1;
        puVar9 = (ulong *)*puVar12;
        if ((ulong *)*puVar12 == (ulong *)0x0) goto LAB_10866e084;
      }
      puVar12 = puVar13;
      puVar9 = (ulong *)*puVar13;
    }
LAB_10866e084:
    *puStack_68 = 0;
    puStack_68[1] = 0;
    puStack_68[2] = puVar13;
    *puVar12 = (ulong)puStack_68;
    if (*(ulong *)unaff_x19[1] != 0) {
      unaff_x19[1] = *(ulong *)unaff_x19[1];
    }
    func_0x000107c27be4(unaff_x19[2],puStack_68);
    unaff_x19[3] = unaff_x19[3] + 1;
    puStack_68 = (undefined8 *)0x0;
LAB_10866e0c0:
    FUN_10866f090(&puStack_68);
    func_0x000107c27914(&uStack_80);
  }
  else {
    func_0x000107c27cfc(puVar9 + 9,&uStack_c8);
  }
  func_0x0001086703bc();
  FUN_10866eee8();
  if (*unaff_x19 < unaff_x19[6]) {
    uVar11 = *(ulong *)(unaff_x19[4] + 0x10);
    uVar8 = uVar11;
    func_0x000107c27be0();
    if (unaff_x19[1] == uVar11) {
      unaff_x19[1] = uVar8;
    }
    unaff_x19[3] = unaff_x19[3] - 1;
    func_0x00010530d618(unaff_x19[2],uVar11);
    func_0x00010866e9d8(uVar11 + 0x20);
    func_0x0001086702e4();
    lVar1 = *(long *)unaff_x19[4];
    plVar2 = (long *)((long *)unaff_x19[4])[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    unaff_x19[6] = unaff_x19[6] - 1;
    __ZdlPv();
  }
  func_0x000107c27914(&uStack_c8);
  func_0x000108670104();
  return;
}



/* Entry: 10866e1a4; end: 10866e30f;  */

void FUN_10866e1a4(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_140 [24];
  byte bStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [24];
  char cStack_c8;
  byte bStack_68;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  
  func_0x000107c27994(auStack_60,param_4);
  uStack_48 = (undefined4)param_3;
  lVar1 = param_2 + 0xa0;
  FUN_10866ef80(lVar1,auStack_60);
  if (param_2 + 0xa8 != lVar1) {
    FUN_10866eee8(param_2 + 0x98,lVar1);
    FUN_10866e73c(param_1,lVar1 + 0x48);
    goto LAB_10866e2c0;
  }
  FUN_10886db5c(auStack_120,*(undefined8 *)(param_2 + 8),param_4,param_3);
  if ((bStack_68 & 1) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x000104be0ccc(auStack_140,auStack_100);
    if ((bStack_128 & 1) == 0) {
      if ((cStack_c8 == '\x01') && (*(char *)(param_2 + 0x81) == '\x01')) {
        FUN_10866e758(auStack_140,auStack_e0);
        if (bStack_128 == 1) goto LAB_10866e248;
      }
      *param_1 = 0;
      param_1[0x18] = 0;
    }
    else {
LAB_10866e248:
      FUN_10866df60(param_2 + 0x98,auStack_60,auStack_140);
      func_0x0001006b78fc(param_1,auStack_140);
    }
    func_0x000107c279c4(auStack_140);
  }
  FUN_108669930(auStack_120);
LAB_10866e2c0:
  func_0x000107c27914(auStack_60);
  return;
}



/* Entry: 10866e310; end: 10866e387;  */

ulong FUN_10866e310(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x108) == 1) {
    if (*(int *)(param_2 + 0x11c) == 7) {
      uVar2 = 0x26010e;
    }
    else {
      if (*(int *)(param_2 + 0x11c) != 8) {
        uVar1 = param_3 + *(int *)(param_2 + 0x38);
        uVar3 = 0x100000000;
        uVar2 = 0x260111;
        if (*(uint *)(param_1 + 0x74) <= uVar1) {
          uVar3 = 0x100000000;
          if (uVar1 <= *(uint *)(param_1 + 0x78)) {
            uVar3 = 0;
            uVar2 = 0x260100;
          }
        }
        goto LAB_10866e350;
      }
      uVar2 = 0x26010d;
    }
  }
  else {
    uVar2 = 0x260112;
  }
  uVar3 = 0x100000000;
LAB_10866e350:
  return uVar2 | uVar3;
}



/* Entry: 10866e388; end: 10866e44f;  */

void FUN_10866e388(long param_1)

{
  ulong uVar1;
  code *extraout_x8;
  long *unaff_x20;
  undefined1 auStack_218 [41];
  byte bStack_1ef;
  byte bStack_48;
  long *aplStack_40 [2];
  
  if (*(char *)(param_1 + 0x71) == '\x01') {
    func_0x00010867006c();
    FUN_10866ca40(aplStack_40,unaff_x20 + 0x1a);
    if (aplStack_40[0] != (long *)0x0) {
      uVar1 = unaff_x20[1];
      FUN_1086a1148(auStack_218);
      if (((bStack_48 & 1) != 0) && ((bStack_1ef >> 6 & 1) == 0)) {
        func_0x0001086701c0(*(undefined8 *)(*unaff_x20 + 0x38));
        (*extraout_x8)();
        if ((uVar1 >> 0x20 & 1) == 0) {
          func_0x0001086702b8(*(undefined8 *)(*aplStack_40[0] + 0x10));
        }
      }
      func_0x000107c288c8(auStack_218);
    }
    func_0x000107c28a18(aplStack_40);
  }
  return;
}



/* Entry: 10866e450; end: 10866e467;  */

void FUN_10866e450(void)

{
  FUN_10866f134();
  return;
}



/* Entry: 10866e468; end: 10866e46b;  */

undefined8 * FUN_10866e468(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a61498;
  func_0x000107c28a04(param_1 + 0x1c);
  func_0x000107c28a08(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    plVar3 = (long *)param_1[0x18];
    plVar1 = *(long **)(param_1[0x17] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[0x19] = 0;
    while (plVar3 != param_1 + 0x17) {
      plVar3 = (long *)plVar3[1];
      __ZdlPv();
    }
  }
  FUN_10866e99c(param_1[0x15]);
  func_0x000107c27914(param_1 + 0xb);
  func_0x000107c28a0c(param_1 + 9);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c28a10(param_1 + 5);
  func_0x000107c286cc(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10866e46c; end: 10866e47f;  */

void FUN_10866e46c(void)

{
  FUN_10866e8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10866e480; end: 10866e4b7;  */

undefined1 * FUN_10866e480(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  FUN_10866e4b8();
  return param_1;
}



/* Entry: 10866e4b8; end: 10866e4cb;  */

void FUN_10866e4b8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10866bd04();
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  return;
}



/* Entry: 10866e4cc; end: 10866e507;  */

void FUN_10866e4cc(long param_1)

{
  FUN_10866bd04();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10866e508; end: 10866e5cf;  */

long FUN_10866e508(long param_1)

{
  func_0x000107c27a04(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10866e5d0; end: 10866e617;  */

void FUN_10866e5d0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x0001086702b8((&PTR_FUN_110a61508)[*(uint *)(param_1 + 0x38)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10866e618; end: 10866e623;  */

undefined8 FUN_10866e618(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c348e0();
  FUN_1088f78f8(param_2);
  return param_2;
}



/* Entry: 10866e624; end: 10866e6fb;  */

long * FUN_10866e624(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  
  func_0x0001086701cc();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
  }
  else {
    lVar7 = *unaff_x19;
    lVar8 = (long)puVar2 - lVar7;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10866e6fc();
LAB_10866e6f8:
      func_0x000104bd35f4();
      plVar4 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      if (*plVar4 != 0) {
        plVar4[1] = *plVar4;
        __ZdlPv();
      }
      return plVar4;
    }
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10866e6f8;
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8);
    plVar4 = puVar2 + -(lVar8 >> 3);
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
    param_1 = plVar4;
    _memcpy(plVar4,lVar7,lVar8);
    *unaff_x19 = (long)plVar4;
    unaff_x19[1] = (long)puVar9;
    unaff_x19[2] = lVar3 + uVar6 * 8;
    if (lVar7 != 0) {
      func_0x0001086702e4();
    }
  }
  unaff_x19[1] = (long)puVar9;
  return param_1;
}



/* Entry: 10866e6fc; end: 10866e70f;  */

long * FUN_10866e6fc(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10866e710; end: 10866e73b;  */

long * FUN_10866e710(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10866e73c; end: 10866e757;  */

void FUN_10866e73c(long param_1)

{
  func_0x000107c27994();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10866e758; end: 10866e77f;  */

undefined8 * FUN_10866e758(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000100100fec();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return param_1;
    }
    func_0x00010054f8dc();
    func_0x00010028b5dc();
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      func_0x0001006202ac(param_1,*param_2,param_2[1]);
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10866e780; end: 10866e803;  */

void FUN_10866e780(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110a8d198;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10866e804; end: 10866e87b;  */

void FUN_10866e804(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000107c27998(param_1,param_4);
    FUN_10866e87c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000107c2799c(&uStack_40);
  return;
}



/* Entry: 10866e87c; end: 10866e89b;  */

void FUN_10866e87c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10866e89c; end: 10866e8e3;  */

void FUN_10866e89c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001086702b8((&PTR_FUN_110a61518)[*(uint *)(param_1 + 0x18)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10866e8e4; end: 10866e8ef;  */

void FUN_10866e8e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 10866e8f0; end: 10866e99b;  */

undefined8 * FUN_10866e8f0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a61498;
  func_0x000107c28a04(param_1 + 0x1c);
  func_0x000107c28a08(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    plVar3 = (long *)param_1[0x18];
    plVar1 = *(long **)(param_1[0x17] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[0x19] = 0;
    while (plVar3 != param_1 + 0x17) {
      plVar3 = (long *)plVar3[1];
      __ZdlPv();
    }
  }
  FUN_10866e99c(param_1[0x15]);
  func_0x000107c27914(param_1 + 0xb);
  func_0x000107c28a0c(param_1 + 9);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c28a10(param_1 + 5);
  func_0x000107c286cc(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10866e99c; end: 10866e9ff;  */

void FUN_10866e99c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10866e99c(*param_1);
    FUN_10866e99c(param_1[1]);
    func_0x00010866e9d8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10866ea00; end: 10866ea0b;  */

void FUN_10866ea00(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_1005ff1bc);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_1005ff1bc);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10866ea0c; end: 10866ea47;  */

undefined8 * FUN_10866ea0c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10866ea48(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 10866ea48; end: 10866ea8f;  */

void FUN_10866ea48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x100;
  __Znwm();
  FUN_10866ea90();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001086702cc();
  return;
}



/* Entry: 10866ea90; end: 10866eabb;  */

void FUN_10866ea90(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a61538;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



/* Entry: 10866eabc; end: 10866eabf;  */

undefined8 * FUN_10866eabc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61538;
  FUN_10866eb08(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}


