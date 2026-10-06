/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0f3000; end: 10a0f3027;  */

void FUN_10a0f3000(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a0f3028; end: 10a0f304b;  */

void FUN_10a0f3028(undefined4 *param_1,long *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  long lVar3;
  
  FUN_10a8bb1fc();
  *(undefined4 *)((long)param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0x10001;
  *(undefined4 *)((long)param_1 + 0xb) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  func_0x000107c2b054(param_1 + 6,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0xc,&UNK_10f67fb58);
  func_0x000107c2b054(param_1 + 0x12,&DAT_10f5aca3f);
  func_0x000107c2b054(param_1 + 0x18,"Default");
  func_0x000107c2b054(param_1 + 0x1e,"default");
  param_1[0x24] = 0xffffffff;
  func_0x000107c2b054(param_1 + 0x26,"default");
  puVar1 = (undefined1 *)(*param_2 + 0x260);
  FUN_10a08f69c();
  *(undefined1 *)param_1 = *puVar1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 2) = *pbVar2 >> 1 & 1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 3) = *pbVar2 >> 2 & 1;
  pbVar2 = (byte *)(*param_2 + 0x2c0);
  FUN_10a08fec0();
  *(byte *)((long)param_1 + 1) = *pbVar2 & 1;
  lVar3 = *param_2;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 6,lVar3);
  lVar3 = *param_2 + 0x98;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xc,lVar3);
  lVar3 = *param_2 + 0x130;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x12,lVar3);
  lVar3 = *param_2 + 0x1c8;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x18,lVar3);
  puVar1 = (undefined1 *)(*param_2 + 0x328);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 5) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x388);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 7) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 1000);
  FUN_10a08f69c();
  *(undefined1 *)(param_1 + 2) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x448);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 9) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x4a8);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 10) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x508);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xb) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x568);
  FUN_10a08f69c();
  *(undefined1 *)(param_1 + 3) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x5c8);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xd) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x628);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xe) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x688);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 0xf) = *puVar1;
  puVar1 = (undefined1 *)(*param_2 + 0x748);
  FUN_10a08f69c();
  *(undefined1 *)((long)param_1 + 6) = *puVar1;
  lVar3 = *param_2 + 0x7a8;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x1e,lVar3);
  lVar3 = *param_2 + 0x840;
  FUN_10a051594(lVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x26,lVar3);
  return;
}



/* Entry: 10a0f304c; end: 10a0f32eb;  */

void FUN_10a0f304c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "LensEntryPoint";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "LiveCamera";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "StoryReply";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "ChatReply";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Restart";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "PreviewCancel";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Map";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "BitmojiStickers";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "PostCapturePreview";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "PostCaptureTranscoding";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a0f32ec();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0f32ec; end: 10a0f338f;  */

undefined8 * FUN_10a0f32ec(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f3390);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0f3390; end: 10a0f34c7;  */

undefined8 * FUN_10a0f3390(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puStack_50 = (undefined *)0x0;
  FUN_10a109a70(param_1);
  FUN_10a109a70(&puStack_50,0);
  puVar2 = (undefined8 *)0xe0;
  __Znwm();
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[0x15] = 0xffffffffffffffff;
  puVar2[0x14] = 0xffffffffffffffff;
  puVar2[0x17] = 0xffffffffffffffff;
  puVar2[0x16] = 0xffffffffffffffff;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0xffffffffffffffff;
  puVar2[0x1a] = 0xffffffffffffffff;
  puVar2[0x1b] = 0xffffffffffffffff;
  lVar3 = param_1[1];
  param_1[1] = puVar2;
  if (lVar3 != 0) {
    __ZdlPv(lVar3);
    puStack_50 = &UNK_10f63b678;
    uStack_48 = 0x20;
    if (param_1[1] == 0) {
      FUN_10a0edfc4(&puStack_50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f3480);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Entry: 10a0f34c8; end: 10a0f352f;  */

undefined8 * FUN_10a0f34c8(undefined8 *param_1)

{
  long lVar1;
  
  func_0x00010ad5aea0(*param_1);
  FUN_10ad5b0cc(*param_1);
  func_0x00010a06e21c(param_1 + 6);
  FUN_10a071d0c(param_1 + 4);
  FUN_10a09e870(param_1 + 2);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10a109a70(param_1,0);
  return param_1;
}



/* Entry: 10a0f3530; end: 10a0f367b;  */

void FUN_10a0f3530(long param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = iRam00000001132ffd98 < 2;
  if ((*param_2 == 0) || (param_4 = param_3, *param_3 == 0)) {
    FUN_10a109d08(auStack_38,&uStack_21,&uStack_22,param_3,param_4);
    func_0x00010a0f3618(param_1 + 0x20,auStack_38);
    if (plStack_30 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_30 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_30;
    } while (cVar2 != '\0');
  }
  else {
    FUN_10a109b38(auStack_38,&uStack_21,&uStack_22,param_2);
    func_0x00010a0f3618(param_1 + 0x20,auStack_38);
    if (plStack_30 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_30 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_30;
    } while (cVar2 != '\0');
  }
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 10a0f367c; end: 10a0f377f;  */

/* WARNING: Possible PIC construction at 0x00010a0f37e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0f37ec) */
/* WARNING: Removing unreachable block (ram,0x00010a0f37f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0f37f8) */
/* WARNING: Removing unreachable block (ram,0x00010a0f3800) */
/* WARNING: Removing unreachable block (ram,0x00010a0f3808) */
/* WARNING: Removing unreachable block (ram,0x00010a0f380c) */

undefined ** FUN_10a0f367c(undefined8 param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar4 = *ppuVar6;
  puStack_30 = &UNK_10f63b699;
  uStack_28 = 0x28;
  if (puVar4 != (undefined *)0x0) {
    if (*(undefined **)(puVar4 + 0x20) == (undefined *)0x0) {
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
      FUN_10a0f3530(puVar4,&uStack_40,&uStack_50);
      plVar7 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    return (undefined **)(puVar4 + 0x20);
  }
  ppuVar6 = &puStack_30;
  FUN_10a0edfc4();
  func_0x00010a06e274(&uStack_50);
  func_0x00010a06e274(&uStack_40);
  __Unwind_Resume(ppuVar6);
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_88 = &UNK_10f63b699;
  uStack_80 = 0x28;
  if (*ppuVar6 == (undefined *)0x0) {
    ppuVar6 = &puStack_88;
    FUN_10a0edfc4();
  }
  else {
    ppuVar6 = (undefined **)(*ppuVar6 + 0x30);
    if (*ppuVar6 != (undefined *)0x0) {
      return ppuVar6;
    }
    FUN_10a109ecc(&puStack_88,&uStack_71);
    param_2 = &puStack_88;
  }
  puVar8 = param_2[1];
  puVar4 = *param_2;
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  plVar7 = (long *)ppuVar6[1];
  ppuVar6[1] = puVar8;
  *ppuVar6 = puVar4;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return ppuVar6;
}



/* Entry: 10a0f3780; end: 10a0f390f;  */

/* WARNING: Possible PIC construction at 0x00010a0f37e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0f37ec) */
/* WARNING: Removing unreachable block (ram,0x00010a0f37f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0f37f8) */
/* WARNING: Removing unreachable block (ram,0x00010a0f3800) */
/* WARNING: Removing unreachable block (ram,0x00010a0f3808) */
/* WARNING: Removing unreachable block (ram,0x00010a0f380c) */

undefined ** FUN_10a0f3780(undefined8 param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_38 = &UNK_10f63b699;
  uStack_30 = 0x28;
  if (*ppuVar5 == (undefined *)0x0) {
    ppuVar5 = &puStack_38;
    FUN_10a0edfc4();
  }
  else {
    ppuVar5 = (undefined **)(*ppuVar5 + 0x30);
    if (*ppuVar5 != (undefined *)0x0) {
      return ppuVar5;
    }
    FUN_10a109ecc(&puStack_38,&uStack_21);
    param_2 = &puStack_38;
  }
  puVar8 = param_2[1];
  puVar7 = *param_2;
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  plVar6 = (long *)ppuVar5[1];
  ppuVar5[1] = puVar8;
  *ppuVar5 = puVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return ppuVar5;
}



/* Entry: 10a0f3910; end: 10a0f3c4f;  */

void FUN_10a0f3910(undefined8 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uStack_a0;
  int iStack_98;
  int iStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar17 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar17[0] = 0;
  piVar17[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  puVar12 = param_1 + 10;
  *puVar12 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = puVar12;
  param_1[0xb] = 0;
  uVar5 = param_2[5];
  if (uVar5 == 7) {
    iStack_94 = *param_2;
    iStack_98 = param_2[1];
    lStack_90 = *(long *)(param_2 + 6);
    lVar15 = *(long *)(param_2 + 2);
    uStack_a0 = 0x242ff0000;
    piStack_60 = &iStack_98;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    if ((lStack_90 == 0) && ((long)iStack_94 * (long)iStack_98 != 0)) {
      puVar9 = (undefined4 *)0x24;
      lStack_88 = lStack_90;
      func_0x000107c2ae8c();
      *puVar9 = 1;
      uStack_40 = puVar9 + 1;
      uStack_38 = 0x1c;
      *(undefined1 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
      func_0x000109ac3188(0xffffff29,&uStack_40,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0f3bf8);
      (*pcVar8)();
    }
    lVar16 = (long)iStack_94;
    lVar13 = lVar16;
    if (iStack_98 != 1) {
      lVar13 = lVar15;
    }
    lVar2 = lVar16;
    if (lVar15 != 0) {
      lVar2 = lVar13;
    }
    uVar10 = 0x42ff4000;
    if (lVar13 != lVar16 && lVar15 != 0) {
      uVar10 = 0x42ff0000;
    }
    *(undefined4 *)param_1 = uVar10;
    *(undefined4 *)((long)param_1 + 4) = 2;
    *(int *)(param_1 + 1) = iStack_98;
    *(int *)((long)param_1 + 0xc) = iStack_94;
    param_1[2] = lStack_90;
    param_1[3] = lStack_90;
    lStack_90 = lStack_90 + lVar2 * iStack_98;
    param_1[4] = (lStack_90 - lVar2) + lVar16;
    param_1[5] = lStack_90;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[10] = lVar2;
    param_1[0xb] = 1;
  }
  else {
    iVar4 = param_2[1];
    iVar11 = (iVar4 * 3) / 2;
    if ((1 << (ulong)(uVar5 & 0x1f) & 0x400500U) == 0) {
      iVar11 = iVar4;
    }
    if (uVar5 < 0x17) {
      uVar10 = *(undefined4 *)(&UNK_10e497124 + (ulong)uVar5 * 4);
      iVar4 = iVar11;
    }
    else {
      uVar10 = 0xfffffff8;
    }
    uStack_40 = (undefined4 *)CONCAT44(iVar4,*param_2);
    uVar3 = 2;
    if ((uVar5 & 0xfffffffe) != 4) {
      uVar3 = (ulong)(uVar5 == 0);
    }
    if (param_3 == 0) {
      uVar3 = 0;
    }
    func_0x0001094c84f4(&uStack_a0,&uStack_40,uVar10,*(long *)(param_2 + 6) + uVar3,
                        *(undefined8 *)(param_2 + 2));
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        iVar11 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar15 = 0;
      lVar13 = param_1[8];
      do {
        *(undefined4 *)(lVar13 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *piVar17);
    }
    param_1[1] = CONCAT44(iStack_94,iStack_98);
    *param_1 = uStack_a0;
    param_1[3] = lStack_88;
    param_1[2] = lStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar14 = (undefined8 *)param_1[9];
    iVar11 = uStack_a0._4_4_;
    if (puVar14 != puVar12) {
      if (puVar14 != (undefined8 *)0x0) {
        _free(puVar14[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar12;
      puVar14 = puVar12;
      iVar11 = uStack_a0._4_4_;
    }
    if (iVar11 < 3) {
      puVar12 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar14 = *puStack_58;
      puVar14[1] = puStack_58[1];
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0x42ff0000);
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      *(undefined8 *)((long)puVar12 + 0x34) = 0;
      *(undefined8 *)((long)puVar12 + 0x2c) = 0;
      if (puStack_58 != &uStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = piStack_60;
      param_1[9] = puStack_58;
    }
  }
  return;
}



/* Entry: 10a0f3c50; end: 10a0f3f6f;  */

undefined *** FUN_10a0f3c50(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = (undefined8 *)param_2[1];
  uStack_110 = (code *)*param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uVar3 = *(uint *)((long)param_2 + 4);
  uVar15 = (ulong)&uStack_110 | 8;
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar3 = *(uint *)((long)param_2 + 4);
  }
  uStack_d0 = uVar15;
  puStack_c8 = &uStack_c0;
  if ((int)uVar3 < 3) {
    uStack_c0 = *(ulong *)param_2[9];
    uStack_b8 = ((ulong *)param_2[9])[1];
  }
  else {
    uStack_110 = (code *)((ulong)uStack_110 & 0xffffffff);
    func_0x000109a84868(&uStack_110,param_2);
  }
  pcStack_b0 = FUN_10a10a0d4;
  ppuStack_a8 = &PTR_FUN_110ba4d88;
  pcVar7 = (code *)0x60;
  __Znwm();
  puVar10 = (undefined8 *)((ulong)&uStack_110 | 4);
  *(undefined8 **)(pcVar7 + 8) = puStack_108;
  *(code **)pcVar7 = uStack_110;
  *(ulong *)(pcVar7 + 0x18) = uStack_f8;
  *(ulong *)(pcVar7 + 0x10) = uStack_100;
  *(ulong *)(pcVar7 + 0x50) = 0;
  *(ulong *)(pcVar7 + 0x28) = uStack_e8;
  *(ulong *)(pcVar7 + 0x20) = uStack_f0;
  *(ulong *)(pcVar7 + 0x38) = uStack_d8;
  *(ulong *)(pcVar7 + 0x30) = uStack_e0;
  *(code **)(pcVar7 + 0x40) = pcVar7 + 8;
  *(code **)(pcVar7 + 0x48) = pcVar7 + 0x50;
  *(ulong *)(pcVar7 + 0x58) = 0;
  if (uStack_110._4_4_ < 3) {
    *(ulong *)(pcVar7 + 0x50) = *puStack_c8;
    *(ulong *)(pcVar7 + 0x58) = puStack_c8[1];
  }
  else {
    *(ulong *)(pcVar7 + 0x40) = uStack_d0;
    *(ulong **)(pcVar7 + 0x48) = puStack_c8;
    puStack_c8 = &uStack_c0;
    uStack_d0 = uVar15;
  }
  uStack_110 = (code *)CONCAT44(uStack_110._4_4_,0x42ff0000);
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[2] = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  pcStack_a0 = pcVar7;
  uStack_d8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (puStack_c8 != &uStack_c0) {
    _free(puStack_c8[-1]);
  }
  if ((int)param_4 == -1) {
    uVar15 = (ulong)((uint)*param_2 >> 3) & 0x1ff;
    if ((uint)uVar15 < 4) {
      param_4 = (ulong)*(uint *)(&UNK_10e496020 + uVar15 * 4);
    }
    else {
      param_4 = 0xffffffff;
    }
  }
  if (((param_3 & 1) == 0) && (param_2[7] != 0)) {
    uVar15 = param_2[2];
    ppuVar13 = &PTR_FUN_110ba4d88;
  }
  else {
    uVar15 = *(long *)param_2[9] * (long)(int)(uint)param_2[1];
    FUN_10a1b29f0(uVar15);
    _memcpy();
    pcStack_b0 = (code *)0x109d138c8;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    ppuVar13 = &PTR_DAT_110b3e838;
    ppuStack_a8 = &PTR_DAT_110b3e838;
    pcStack_a0 = FUN_10a1b1e10;
  }
  uVar6 = param_2[1];
  uVar3 = *(uint *)((long)param_2 + 0xc);
  puVar10 = (undefined8 *)param_2[9];
  uVar8 = 0x90;
  __Znwm();
  uVar14 = *puVar10;
  uStack_110 = pcStack_b0;
  (*(code *)ppuVar13[3])(&puStack_108,&ppuStack_a8);
  FUN_10a1b2668(uVar8,uVar15,CONCAT44((uint)uVar6,uVar3),uVar14,param_4,&uStack_110,0,0);
  *param_1 = uVar8;
  (*(code *)*puStack_108)(&puStack_108);
  pppuVar9 = &ppuStack_a8;
  (*(code *)*ppuStack_a8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (pppuVar9[7] != (undefined **)0x0) {
    piVar1 = (int *)((long)pppuVar9[7] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(pppuVar9);
    }
  }
  pppuVar9[7] = (undefined **)0x0;
  pppuVar9[3] = (undefined **)0x0;
  pppuVar9[2] = (undefined **)0x0;
  pppuVar9[5] = (undefined **)0x0;
  pppuVar9[4] = (undefined **)0x0;
  if (0 < *(int *)((long)pppuVar9 + 4)) {
    lVar11 = 0;
    ppuVar13 = pppuVar9[8];
    do {
      *(undefined4 *)((long)ppuVar13 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)((long)pppuVar9 + 4));
  }
  pppuVar12 = (undefined ***)pppuVar9[9];
  if (pppuVar12 != pppuVar9 + 10 && pppuVar12 != (undefined ***)0x0) {
    _free(pppuVar12[-1]);
  }
  return pppuVar9;
}



/* Entry: 10a0f3f70; end: 10a0f400b;  */

long FUN_10a0f3f70(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a0f400c; end: 10a0f423f;  */

void FUN_10a0f400c(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 auStack_d0 [2];
  undefined4 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_a0 = 0x42ff0000;
  lStack_60 = (long)&uStack_9c + 4;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  iVar2 = *param_3;
  puStack_58 = &uStack_50;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      auStack_b8[0] = 0x2010000;
      uStack_a8 = 0;
      puStack_b0 = param_1;
      func_0x000109a479a0(param_2,auStack_b8);
    }
    else if (iVar2 == 1) {
      uStack_a8 = 0;
      auStack_b8[0] = 0x1010000;
      auStack_d0[0] = 0x2010000;
      uStack_c0 = 0;
      puStack_c8 = &uStack_a0;
      puStack_b0 = param_2;
      func_0x000109a895d0(auStack_b8,auStack_d0);
      uStack_a8 = 0;
      auStack_b8[0] = 0x1010000;
      auStack_d0[0] = 0x2010000;
      uStack_c0 = 0;
      puStack_c8 = param_1;
      puStack_b0 = &uStack_a0;
      func_0x000109a491e0(auStack_b8,auStack_d0,1);
    }
  }
  else if (iVar2 == 2) {
    uStack_a8 = 0;
    auStack_b8[0] = 0x1010000;
    auStack_d0[0] = 0x2010000;
    uStack_c0 = 0;
    puStack_c8 = param_1;
    puStack_b0 = param_2;
    func_0x000109a491e0(auStack_b8,auStack_d0,0xffffffff);
  }
  else if (iVar2 == 3) {
    uStack_a8 = 0;
    auStack_b8[0] = 0x1010000;
    auStack_d0[0] = 0x2010000;
    uStack_c0 = 0;
    puStack_c8 = &uStack_a0;
    puStack_b0 = param_2;
    func_0x000109a895d0(auStack_b8,auStack_d0);
    uStack_a8 = 0;
    auStack_b8[0] = 0x1010000;
    auStack_d0[0] = 0x2010000;
    uStack_c0 = 0;
    puStack_c8 = param_1;
    puStack_b0 = &uStack_a0;
    func_0x000109a491e0(auStack_b8,auStack_d0,0);
  }
  if (lStack_68 != 0) {
    piVar1 = (int *)(lStack_68 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_a0);
    }
  }
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0 < (int)uStack_9c) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_60 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_9c);
  }
  if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
    _free(puStack_58[-1]);
  }
  return;
}



/* Entry: 10a0f4240; end: 10a0f433f;  */

undefined1  [16] FUN_10a0f4240(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = param_1 & 7;
  uVar3 = 0;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_1 & 7) == 0) {
        uVar4 = 0x406fe00000000000;
      }
      else {
        uVar4 = 0x405fc00000000000;
        uVar3 = 0xc060000000000000;
      }
    }
    else if (uVar1 == 2) {
      uVar4 = 0x40efffe000000000;
    }
    else {
      uVar4 = 0x40dfffc000000000;
      uVar3 = 0xc0e0000000000000;
    }
  }
  else {
    uVar4 = 0x3ff0000000000000;
    if (1 < uVar1 - 5) {
      if (uVar1 != 4) {
        __ZNSt3__19to_stringEi(auStack_50,0,0x3ff0000000000000);
        FUN_109feb280(auStack_38,&UNK_10f63b6c2,auStack_50);
        FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f430c);
        (*pcVar2)();
      }
      uVar4 = 0x41dfffffffc00000;
      uVar3 = 0xc1e0000000000000;
    }
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 10a0f4340; end: 10a0f471f;  */

void FUN_10a0f4340(undefined8 *param_1,undefined8 param_2,double param_3,uint *param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 auStack_c8 [2];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  double dStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar6 = *(ulong **)(param_4 + 2);
    uStack_70 = (ulong)&uStack_b0 | 8;
    uStack_a8 = puVar6[1];
    uStack_b0 = *puVar6;
    uStack_98 = puVar6[3];
    uStack_a0 = puVar6[2];
    uStack_88 = puVar6[5];
    uStack_90 = puVar6[4];
    uStack_78 = puVar6[7];
    param_3 = (double)puVar6[6];
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    if (puVar6[7] != 0) {
      piVar1 = (int *)(puVar6[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    dStack_80 = param_3;
    if (*(int *)((long)puVar6 + 4) < 3) {
      uStack_60 = *(undefined8 *)puVar6[9];
      uStack_58 = ((undefined8 *)puVar6[9])[1];
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffffff;
      func_0x000109a84868(&uStack_b0);
    }
  }
  else {
    func_0x000109a8a180(&uStack_b0,param_4,0xffffffff);
  }
  uVar5 = (uint)uStack_b0;
  if (uStack_78 != 0) {
    piVar1 = (int *)(uStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  uStack_78 = 0;
  dVar12 = 0.0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  param_5 = param_5 & 7;
  if ((uVar5 & 7) == param_5) {
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar7 = *(undefined8 **)(param_4 + 2);
      uVar10 = *puVar7;
      param_1[1] = puVar7[1];
      *param_1 = uVar10;
      uVar10 = puVar7[2];
      param_1[3] = puVar7[3];
      param_1[2] = uVar10;
      uVar10 = puVar7[4];
      param_1[5] = puVar7[5];
      param_1[4] = uVar10;
      lVar8 = puVar7[7];
      uVar10 = puVar7[6];
      param_1[7] = puVar7[7];
      param_1[6] = uVar10;
      param_1[10] = 0;
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar7 + 4) < 3) {
        puVar7 = (undefined8 *)puVar7[9];
        puVar9 = (undefined8 *)param_1[9];
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
      }
      else {
        *(undefined4 *)((long)param_1 + 4) = 0;
        func_0x000109a84868(param_1);
      }
    }
    else {
      func_0x000109a8a180(param_1,param_4,0xffffffff);
    }
  }
  else {
    FUN_10a0f4240(uVar5 & 7);
    dVar11 = dVar12;
    dVar13 = param_3;
    FUN_10a0f4240(param_5);
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar6 = *(ulong **)(param_4 + 2);
      uStack_70 = (ulong)&uStack_b0 | 8;
      uStack_a8 = puVar6[1];
      uStack_b0 = *puVar6;
      uStack_98 = puVar6[3];
      uStack_a0 = puVar6[2];
      uStack_88 = puVar6[5];
      uStack_90 = puVar6[4];
      uStack_78 = puVar6[7];
      dStack_80 = (double)puVar6[6];
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_58 = 0;
      if (puVar6[7] != 0) {
        piVar1 = (int *)(puVar6[7] + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar6 + 4) < 3) {
        uStack_60 = *(undefined8 *)puVar6[9];
        uStack_58 = ((undefined8 *)puVar6[9])[1];
      }
      else {
        uStack_b0 = uStack_b0 & 0xffffffff;
        func_0x000109a84868(&uStack_b0);
      }
    }
    else {
      func_0x000109a8a180(&uStack_b0,param_4,0xffffffff);
    }
    dVar12 = (dVar13 - dVar11) / (param_3 - dVar12);
    auStack_c8[0] = 0x2010000;
    uStack_b8 = 0;
    puStack_c0 = param_1;
    func_0x000109a41858(dVar12,dVar13 - dVar12 * param_3,&uStack_b0,auStack_c8,param_5);
    if (uStack_78 != 0) {
      piVar1 = (int *)(uStack_78 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_b0);
      }
    }
    uStack_78 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    if (0 < uStack_b0._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(uStack_70 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_b0._4_4_);
    }
    if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
      _free(puStack_68[-1]);
    }
  }
  return;
}



/* Entry: 10a0f4720; end: 10a0f4833;  */

void FUN_10a0f4720(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 auStack_f0 [2];
  undefined8 **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint auStack_40 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_2;
  lVar2 = param_2[1];
  *(undefined4 *)param_1 = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  uVar1 = (uint)((ulong)(lVar2 - lVar12) >> 3);
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = (long)(param_1 + 1);
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  auStack_40[1] = 2;
  plVar5 = param_1;
  auStack_40[0] = uVar1;
  func_0x000109a83fd0(param_1,2,auStack_40,5);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar12 = *param_2;
    lVar2 = param_2[1];
    lVar7 = param_1[2];
    plVar8 = (long *)param_1[9];
    puVar9 = (undefined4 *)(lVar12 + 4);
    do {
      if (lVar2 - lVar12 >> 3 == uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0f482c);
        (*pcVar4)();
      }
      puVar10 = (undefined4 *)(lVar7 + *plVar8 * uVar6);
      *puVar10 = puVar9[-1];
      puVar10[1] = *puVar9;
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 2;
    } while (uVar1 != uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar12 = *plVar5;
  lVar2 = plVar5[1];
  if (lVar12 != lVar2) {
    do {
      puStack_c0 = (undefined8 *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      ppuStack_d8 = (undefined8 **)CONCAT44(ppuStack_d8._4_4_,0x1010000);
      auStack_f0[0] = 0x2050000;
      uStack_e0 = 0;
      ppuStack_e8 = &puStack_c0;
      lStack_d0 = lVar12;
      func_0x000109a3dcec(&ppuStack_d8,auStack_f0);
      puVar3 = puStack_b8;
      for (puVar11 = puStack_c0; puVar11 != puVar3; puVar11 = puVar11 + 0xc) {
        FUN_109fed894(&uStack_a8,puVar11);
      }
      ppuStack_d8 = &puStack_c0;
      FUN_109ffe3e8(&ppuStack_d8);
      lVar12 = lVar12 + 0x60;
    } while (lVar12 != lVar2);
  }
  *extraout_x8 = 0x42ff0000;
  *(undefined8 *)(extraout_x8 + 3) = 0;
  *(undefined8 *)(extraout_x8 + 1) = 0;
  *(undefined8 *)(extraout_x8 + 7) = 0;
  *(undefined8 *)(extraout_x8 + 5) = 0;
  *(undefined8 *)(extraout_x8 + 0xb) = 0;
  *(undefined8 *)(extraout_x8 + 9) = 0;
  *(undefined8 *)(extraout_x8 + 0xe) = 0;
  *(undefined8 *)(extraout_x8 + 0xc) = 0;
  *(undefined8 *)(extraout_x8 + 0x14) = 0;
  *(undefined4 **)(extraout_x8 + 0x10) = extraout_x8 + 2;
  *(undefined4 **)(extraout_x8 + 0x12) = extraout_x8 + 0x14;
  *(undefined8 *)(extraout_x8 + 0x16) = 0;
  puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,0x1050000);
  uStack_b0 = 0;
  ppuStack_d8 = (undefined8 **)CONCAT44(ppuStack_d8._4_4_,0x2010000);
  uStack_c8 = 0;
  puStack_b8 = &uStack_a8;
  func_0x000109a3ecac(&puStack_c0,&ppuStack_d8);
  puStack_c0 = &uStack_a8;
  FUN_109ffe3e8(&puStack_c0);
  return;
}



/* Entry: 10a0f4834; end: 10a0f4993;  */

void FUN_10a0f4834(undefined4 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 auStack_b0 [2];
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 **ppuStack_98;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if (lVar4 != lVar1) {
    do {
      puStack_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      uStack_88 = 0;
      ppuStack_98 = (undefined8 **)CONCAT44(ppuStack_98._4_4_,0x1010000);
      auStack_b0[0] = 0x2050000;
      uStack_a0 = 0;
      ppuStack_a8 = &puStack_80;
      puStack_90 = (undefined4 *)lVar4;
      func_0x000109a3dcec(&ppuStack_98,auStack_b0);
      puVar2 = puStack_78;
      for (puVar3 = puStack_80; puVar3 != puVar2; puVar3 = puVar3 + 0xc) {
        FUN_109fed894(&uStack_68,puVar3);
      }
      ppuStack_98 = &puStack_80;
      FUN_109ffe3e8(&ppuStack_98);
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar1);
  }
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,0x1050000);
  uStack_70 = 0;
  ppuStack_98 = (undefined8 **)CONCAT44(ppuStack_98._4_4_,0x2010000);
  uStack_88 = 0;
  puStack_90 = param_1;
  puStack_78 = &uStack_68;
  func_0x000109a3ecac(&puStack_80,&ppuStack_98);
  puStack_80 = &uStack_68;
  FUN_109ffe3e8(&puStack_80);
  return;
}



/* Entry: 10a0f4994; end: 10a0f4fd7;  */

void FUN_10a0f4994(long param_1,uint *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *extraout_x8;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 auStack_58 [2];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar7 = param_2;
  lVar9 = param_3;
  func_0x000109a8e1c4();
  uStack_c0._0_4_ = 0xf63b6f4;
  uStack_c0._4_4_ = 1;
  uStack_b8._0_4_ = 0x17;
  uStack_b8._4_4_ = 0;
  if ((int)puVar7 == 0) {
    puVar7 = param_2;
    func_0x000109a8b904(param_2,0xffffffff);
    if (((uint)puVar7 & 0xff8) != 0x10) {
      lVar9 = 0xffffffff;
      puVar7 = param_2;
      func_0x000109a8b904();
      uStack_c0._0_4_ = 0xf63b70c;
      uStack_c0._4_4_ = 1;
      uStack_b8._0_4_ = 0x21;
      uStack_b8._4_4_ = 0;
      if (((uint)puVar7 & 0xff8) != 0x18) goto LAB_10a0f4f3c;
    }
    puVar7 = param_2;
    func_0x000109a8b904(param_2,0xffffffff);
    if (((uint)puVar7 & 0xff8) == 0x10) {
      if ((*param_2 & 0x1f0000) == 0x10000) {
        puVar10 = *(undefined8 **)(param_2 + 2);
        puStack_80 = (undefined8 *)((ulong)&uStack_c0 | 8);
        uStack_b8._0_4_ = (undefined4)puVar10[1];
        uStack_b8._4_4_ = (undefined4)((ulong)puVar10[1] >> 0x20);
        uStack_c0._0_4_ = (undefined4)*puVar10;
        uStack_c0._4_4_ = (int)((ulong)*puVar10 >> 0x20);
        uStack_a8 = (undefined4)puVar10[3];
        uStack_a4 = (undefined4)((ulong)puVar10[3] >> 0x20);
        uStack_b0 = (undefined4)puVar10[2];
        uStack_ac = (undefined4)((ulong)puVar10[2] >> 0x20);
        lStack_88 = puVar10[7];
        uStack_98 = (undefined4)puVar10[5];
        uStack_94 = (undefined4)((ulong)puVar10[5] >> 0x20);
        uStack_a0 = (undefined4)puVar10[4];
        uStack_9c = (undefined4)((ulong)puVar10[4] >> 0x20);
        uStack_90 = (undefined4)puVar10[6];
        uStack_8c = (undefined4)((ulong)puVar10[6] >> 0x20);
        puStack_78 = &uStack_70;
        uStack_70 = 0;
        uStack_68 = 0;
        if (puVar10[7] != 0) {
          piVar1 = (int *)(puVar10[7] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (*(int *)((long)puVar10 + 4) < 3) {
          uStack_70 = *(undefined8 *)puVar10[9];
          uStack_68 = ((undefined8 *)puVar10[9])[1];
        }
        else {
          uStack_c0._4_4_ = 0;
          func_0x000109a84868(&uStack_c0);
        }
      }
      else {
        func_0x000109a8a180(&uStack_c0,param_2,0xffffffff);
      }
      if ((int)param_3 != 0) {
        uStack_120 = 0x42ff0000;
        uStack_114 = 0;
        uStack_110 = 0;
        iStack_11c = 0;
        uStack_118 = 0;
        puStack_e0 = (undefined4 *)((ulong)&uStack_120 | 8);
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_10c = 0;
        uStack_108 = 0;
        uStack_f4 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        lStack_e8 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        auStack_58[0] = 0x2010000;
        uStack_48 = 0;
        puStack_d8 = &uStack_d0;
        puStack_50 = (undefined8 *)&uStack_120;
        func_0x000109a479a0(&uStack_c0,auStack_58);
        if (lStack_88 != 0) {
          piVar1 = (int *)(lStack_88 + 0x14);
          do {
            iVar17 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_c0);
          }
        }
        if (0 < uStack_c0._4_4_) {
          lVar9 = 0;
          do {
            *(undefined4 *)((long)puStack_80 + lVar9 * 4) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < uStack_c0._4_4_);
        }
        uStack_b8._0_4_ = uStack_118;
        uStack_b8._4_4_ = uStack_114;
        uStack_c0._0_4_ = uStack_120;
        uStack_c0._4_4_ = iStack_11c;
        uStack_a8 = uStack_108;
        uStack_a4 = uStack_104;
        uStack_b0 = uStack_110;
        uStack_ac = uStack_10c;
        uStack_98 = uStack_f8;
        uStack_94 = uStack_f4;
        uStack_a0 = uStack_100;
        uStack_9c = uStack_fc;
        lStack_88 = lStack_e8;
        uStack_90 = uStack_f0;
        uStack_8c = uStack_ec;
        puVar10 = puStack_80;
        puVar13 = puStack_78;
        if ((puStack_78 != &uStack_70) &&
           (puVar10 = (undefined8 *)((ulong)&uStack_c0 | 8), puVar13 = &uStack_70,
           puStack_78 != (undefined8 *)0x0)) {
          _free(puStack_78[-1]);
        }
        puStack_78 = puVar13;
        puStack_80 = puVar10;
        if (iStack_11c < 3) {
          puVar10 = (undefined8 *)((ulong)&uStack_120 | 4);
          *puStack_78 = *puStack_d8;
          puStack_78[1] = puStack_d8[1];
          uStack_120 = 0x42ff0000;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          *(undefined8 *)((long)puVar10 + 0x34) = 0;
          *(undefined8 *)((long)puVar10 + 0x2c) = 0;
          if (puStack_d8 != &uStack_d0) {
            _free(puStack_d8[-1]);
          }
        }
        else {
          puStack_80 = (undefined8 *)puStack_e0;
          puStack_78 = puStack_d8;
        }
      }
      uStack_120 = 0x42ff0000;
      uStack_114 = 0;
      uStack_110 = 0;
      iStack_11c = 0;
      uStack_118 = 0;
      puStack_e0 = &uStack_118;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_f4 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puStack_d8 = &uStack_d0;
      FUN_10a105b20(param_1,&uStack_c0);
      FUN_10a105bbc(param_1 + 0x60,&uStack_120);
      if (lStack_e8 != 0) {
        piVar1 = (int *)(lStack_e8 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      lStack_e8 = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      if (0 < iStack_11c) {
        lVar9 = 0;
        do {
          puStack_e0[lVar9] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iStack_11c);
      }
      if (puStack_d8 != &uStack_d0 && puStack_d8 != (undefined8 *)0x0) {
        _free(puStack_d8[-1]);
      }
      if (lStack_88 != 0) {
        piVar1 = (int *)(lStack_88 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_c0);
        }
      }
      lStack_88 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      if (0 < uStack_c0._4_4_) {
        lVar9 = 0;
        do {
          *(undefined4 *)((long)puStack_80 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_c0._4_4_);
      }
      if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
        _free(puStack_78[-1]);
      }
    }
    else {
      uStack_120 = 0;
      iStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_c0._0_4_ = 0x2050000;
      uStack_b8 = &uStack_120;
      uStack_b0 = 0;
      uStack_ac = 0;
      func_0x000109a3dcec(param_2,&uStack_c0);
      uStack_c0._0_4_ = 0x42ff0000;
      uStack_b8._4_4_ = 0;
      uStack_b0 = 0;
      uStack_c0._4_4_ = 0;
      uStack_b8._0_4_ = 0;
      puStack_80 = &uStack_b8;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_94 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_138 = 0;
      puStack_78 = &uStack_70;
      FUN_109ffe4f8(&uStack_138,CONCAT44(iStack_11c,uStack_120),
                    CONCAT44(iStack_11c,uStack_120) + 0x120,3);
      uStack_48 = 0;
      auStack_58[0] = 0x1050000;
      puStack_150 = (undefined8 *)CONCAT44(puStack_150._4_4_,0x2010000);
      puStack_148 = &uStack_c0;
      uStack_140 = 0;
      puStack_50 = &uStack_138;
      func_0x000109a3ecac(auStack_58,&puStack_150);
      puStack_150 = &uStack_138;
      FUN_109ffe3e8(&puStack_150);
      lVar9 = CONCAT44(iStack_11c,uStack_120);
      if ((ulong)((CONCAT44(uStack_114,uStack_118) - lVar9 >> 5) * -0x5555555555555555) < 4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0f4f3c);
        (*pcVar6)();
      }
      FUN_10a105b20(param_1,&uStack_c0);
      uVar22 = *(undefined8 *)(lVar9 + 0x128);
      uVar21 = *(undefined8 *)(lVar9 + 0x120);
      uVar23 = *(undefined8 *)(lVar9 + 0x130);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar9 + 0x138);
      *(undefined8 *)(param_1 + 0x70) = uVar23;
      uVar23 = *(undefined8 *)(lVar9 + 0x140);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar9 + 0x148);
      *(undefined8 *)(param_1 + 0x80) = uVar23;
      lVar11 = *(long *)(lVar9 + 0x158);
      uVar24 = *(undefined8 *)(lVar9 + 0x158);
      uVar23 = *(undefined8 *)(lVar9 + 0x150);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x98) = uVar24;
      *(undefined8 *)(param_1 + 0x90) = uVar23;
      *(long *)(param_1 + 0xa0) = param_1 + 0x68;
      *(undefined8 **)(param_1 + 0xa8) = (undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0x68) = uVar22;
      *(undefined8 *)(param_1 + 0x60) = uVar21;
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 0x14);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(int *)(lVar9 + 0x124) < 3) {
        puVar10 = *(undefined8 **)(lVar9 + 0x168);
        puVar13 = *(undefined8 **)(param_1 + 0xa8);
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
      }
      else {
        *(undefined4 *)(param_1 + 100) = 0;
        func_0x000109a84868((undefined8 *)(param_1 + 0x60),lVar9 + 0x120);
      }
      if (lStack_88 != 0) {
        piVar1 = (int *)(lStack_88 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar17 + -1 == 0) {
          func_0x000109a848d4(&uStack_c0);
        }
      }
      lStack_88 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      if (0 < uStack_c0._4_4_) {
        lVar9 = 0;
        do {
          *(undefined4 *)((long)puStack_80 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < uStack_c0._4_4_);
      }
      if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
        _free(puStack_78[-1]);
      }
      uStack_c0 = &uStack_120;
      FUN_109ffe3e8(&uStack_c0);
    }
    return;
  }
LAB_10a0f4f3c:
  uStack_b8._4_4_ = 0;
  uStack_c0._4_4_ = 1;
  puVar10 = &uStack_c0;
  FUN_10a0edfc4();
  func_0x00010567aa40(&uStack_120);
  func_0x00010567aa40(&uStack_c0);
  __Unwind_Resume();
  plVar8 = extraout_x8;
  FUN_109ffe1f4(extraout_x8,0x100);
  iVar17 = *(int *)(puVar10 + 1);
  if (0 < iVar17) {
    lVar11 = 0;
    lVar12 = *(long *)(lVar9 + 0x10);
    plVar14 = *(long **)(lVar9 + 0x48);
    iVar15 = *(int *)((long)puVar10 + 0xc);
    do {
      if (0 < iVar15) {
        lVar9 = 0;
        lVar20 = *plVar14;
        lVar18 = puVar10[2];
        plVar19 = (long *)puVar10[9];
        lVar2 = *plVar8;
        lVar3 = plVar8[1];
        do {
          if (*(char *)(lVar12 + lVar20 * lVar11 + lVar9) != '\0') {
            uVar16 = (ulong)*(byte *)(lVar18 + lVar11 * *plVar19 + lVar9);
            if ((ulong)(lVar3 - lVar2 >> 2) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0f5094);
              (*pcVar6)();
            }
            *(int *)(lVar2 + uVar16 * 4) = *(int *)(lVar2 + uVar16 * 4) + 1;
            iVar15 = *(int *)((long)puVar10 + 0xc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar15);
        iVar17 = *(int *)(puVar10 + 1);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar17);
  }
  return;
}



/* Entry: 10a0f4fd8; end: 10a0f5093;  */

void FUN_10a0f4fd8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  FUN_109ffe1f4(param_1,0x100);
  iVar9 = *(int *)(param_2 + 8);
  if (0 < iVar9) {
    lVar4 = 0;
    lVar5 = *(long *)(param_3 + 0x10);
    plVar6 = *(long **)(param_3 + 0x48);
    iVar7 = *(int *)(param_2 + 0xc);
    do {
      if (0 < iVar7) {
        lVar10 = 0;
        lVar13 = *plVar6;
        lVar11 = *(long *)(param_2 + 0x10);
        plVar12 = *(long **)(param_2 + 0x48);
        lVar1 = *param_1;
        lVar2 = param_1[1];
        do {
          if (*(char *)(lVar5 + lVar13 * lVar4 + lVar10) != '\0') {
            uVar8 = (ulong)*(byte *)(lVar11 + lVar4 * *plVar12 + lVar10);
            if ((ulong)(lVar2 - lVar1 >> 2) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f5094);
              (*pcVar3)();
            }
            *(int *)(lVar1 + uVar8 * 4) = *(int *)(lVar1 + uVar8 * 4) + 1;
            iVar7 = *(int *)(param_2 + 0xc);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar7);
        iVar9 = *(int *)(param_2 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar9);
  }
  return;
}



/* Entry: 10a0f5094; end: 10a0f5103;  */

uint FUN_10a0f5094(double param_1,int *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  lVar2 = param_3 << 2;
  dVar5 = 0.0;
  if (lVar2 != 0) {
    iVar3 = 0;
    piVar4 = param_2;
    do {
      iVar3 = *piVar4 + iVar3;
      lVar2 = lVar2 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar2 != 0);
    dVar5 = (double)iVar3;
  }
  lVar2 = 0;
  iVar3 = 0;
  do {
    if (param_3 == lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f5100);
      (*pcVar1)();
    }
    iVar3 = param_2[lVar2] + iVar3;
    if (param_1 * dVar5 < (double)iVar3) goto LAB_10a0f50f4;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  lVar2 = 0xff;
LAB_10a0f50f4:
  return (uint)lVar2 & 0xff;
}



/* Entry: 10a0f5104; end: 10a0f51a3;  */

undefined8 FUN_10a0f5104(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1;
  FUN_10a10a278();
  if (param_1 + 8 == lVar2) {
    bVar1 = false;
  }
  else {
    bVar1 = **(int **)(lVar2 + 0x38) == 1;
  }
  func_0x0001098390a4(&UNK_10f63c7bf,0x191,&UNK_10f63cc4d,bVar1);
  FUN_10a10a278(param_1,param_2);
  piVar3 = *(int **)(param_1 + 0x38);
  func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar3 == 1);
  return *(undefined8 *)(piVar3 + 2);
}



/* Entry: 10a0f51a4; end: 10a0f51cb;  */

bool FUN_10a0f51a4(long param_1,long param_2)

{
  return param_1 == param_2;
}



/* Entry: 10a0f51cc; end: 10a0f523b;  */

long FUN_10a0f51cc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a0f523c; end: 10a0f534f;  */

undefined8 * FUN_10a0f523c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110ba2e90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 != 0) && (param_2 != 0 || param_4 != 0)) {
    if (param_2 == 0) {
      puVar2 = (undefined8 *)0x50;
      __Znwm();
      FUN_10a0f5350();
      plVar3 = (long *)param_1[3];
      param_1[3] = puVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        puVar2 = (undefined8 *)param_1[3];
      }
    }
    else {
      puVar2 = (undefined8 *)0x30;
      __Znwm();
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = param_3;
      puVar2[5] = 0;
      *puVar2 = &PTR_FUN_110ba4ae0;
      puVar2[2] = param_4;
      puVar2[3] = param_2;
      param_1[3] = puVar2;
    }
    param_1[1] = param_3;
    param_1[2] = puVar2;
    return param_1;
  }
  FUN_10a00946c(&UNK_10f63b72e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f5314);
  (*pcVar1)();
}



/* Entry: 10a0f5350; end: 10a0f53e7;  */

undefined8 * FUN_10a0f5350(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_SUB_110ba4b48;
  uStack_38 = param_3;
  FUN_10a105ff0(param_1 + 6,param_2,&uStack_38);
  param_1[2] = param_3;
  param_1[3] = param_1[6];
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10a0f53e8; end: 10a0f552b;  */

long FUN_10a0f53e8(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(lVar5 + 0x28);
    lVar6 = *(long *)(lVar5 + 0x18);
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = (ulong)(lVar3 + lVar6) / param_3;
    }
    lVar8 = (lVar3 + lVar6) - uVar1 * param_3;
    lVar7 = 0;
    if (lVar8 != 0) {
      lVar7 = param_3 - lVar8;
    }
    if (((ulong)(lVar7 + param_2) <= (ulong)(*(long *)(lVar5 + 0x20) - lVar3)) &&
       (*(long *)(lVar5 + 0x28) = lVar7 + param_2 + lVar3, lVar6 != 0)) {
      return lVar6 + lVar3 + lVar7;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      dVar9 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
      *(long *)(param_1 + 8) = (long)(dVar9 + dVar9);
      lVar3 = 0x50;
      __Znwm();
      FUN_10a0f5350();
      plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 8);
      *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      *(long *)(param_1 + 0x10) = lVar3;
      lVar5 = *(long *)(lVar3 + 0x28);
      uVar1 = lVar5 + *(long *)(lVar3 + 0x18);
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = uVar1 / param_3;
      }
      lVar7 = uVar1 - uVar2 * param_3;
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = param_3 - lVar7;
      }
      if ((ulong)(lVar6 + param_2) <= (ulong)(*(long *)(lVar3 + 0x20) - lVar5)) {
        *(long *)(lVar3 + 0x28) = lVar6 + param_2 + lVar5;
        return *(long *)(lVar3 + 0x18) + lVar5 + lVar6;
      }
    }
  }
  return 0;
}



/* Entry: 10a0f552c; end: 10a0f552f;  */

void FUN_10a0f552c(void)

{
  return;
}



/* Entry: 10a0f5530; end: 10a0f56e3;  */

void FUN_10a0f5530(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "RecordingState";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x12400000162;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Preview";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x12400000162;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f56e4(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Photo";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x12400000162;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f56e4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Video";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f63b3ad;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x12400000162;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f56e4();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Thumbnail";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000019;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x12400000162;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a0f56e4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a0f56e4; end: 10a0f5a5b;  */

undefined8 * FUN_10a0f56e4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f578c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a0f5a5c; end: 10a0f5aef;  */

void FUN_10a0f5a5c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [48];
  byte bStack_28;
  
  FUN_10a0f1b8c(auStack_58,param_2 + 8,0);
  if ((bStack_28 & 1) != 0) {
    FUN_10a0f1f4c(param_1,auStack_58);
    if (bStack_28 == 1) {
      FUN_10a0f1ea0(auStack_58);
    }
    return;
  }
  FUN_10a10a2f4(&UNK_10f63b757,param_2 + 8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f5ad0);
  (*pcVar1)();
}



/* Entry: 10a0f5af0; end: 10a0f5b27;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a0f5af0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x1f)) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    return;
  }
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a0f5b28; end: 10a0f5c9f;  */

void FUN_10a0f5b28(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  lVar5 = (long)*(char *)(param_2 + 0x1f);
  lVar1 = lVar5;
  if (lVar5 < 0) {
    lVar1 = *(long *)(param_2 + 0x10);
  }
  if (lVar1 == 0) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_60,*param_3,param_3[1]);
    }
    else {
      puStack_58 = (undefined8 *)param_3[1];
      puStack_60 = (undefined8 *)*param_3;
      puStack_50 = (undefined8 *)param_3[2];
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    if (-1 < *(char *)(param_2 + 0x1f)) {
      lVar1 = lVar5;
    }
    FUN_10a003c90(appuStack_78,lVar1 + 1,&uStack_41);
    pppuVar3 = (undefined8 ***)appuStack_78[0];
    if (-1 < cStack_61) {
      pppuVar3 = appuStack_78;
    }
    if (lVar1 != 0) {
      lVar5 = *(long *)(param_2 + 8);
      if (-1 < *(char *)(param_2 + 0x1f)) {
        lVar5 = param_2 + 8;
      }
      _memmove(pppuVar3,lVar5,lVar1);
    }
    *(undefined2 *)((long)pppuVar3 + lVar1) = 0x2f;
    uVar2 = param_3[1];
    puVar4 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar4 = param_3;
    }
    pppuVar3 = appuStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar3,puVar4,uVar2);
    puStack_58 = pppuVar3[1];
    puStack_60 = *pppuVar3;
    puStack_50 = pppuVar3[2];
    pppuVar3[1] = (undefined8 **)0x0;
    pppuVar3[2] = (undefined8 **)0x0;
    *pppuVar3 = (undefined8 **)0x0;
    if (cStack_61 < '\0') {
      __ZdlPv(appuStack_78[0]);
    }
  }
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_DAT_110ba3828;
  puVar4[2] = puStack_58;
  puVar4[1] = puStack_60;
  puVar4[3] = puStack_50;
  *param_1 = puVar4;
  return;
}



/* Entry: 10a0f5ca0; end: 10a0f5e17;  */

void FUN_10a0f5ca0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_41;
  
  lVar5 = (long)*(char *)(param_2 + 0x1f);
  lVar1 = lVar5;
  if (lVar5 < 0) {
    lVar1 = *(long *)(param_2 + 0x10);
  }
  if (lVar1 == 0) {
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_60,*param_3,param_3[1]);
    }
    else {
      puStack_58 = (undefined8 *)param_3[1];
      puStack_60 = (undefined8 *)*param_3;
      puStack_50 = (undefined8 *)param_3[2];
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    if (-1 < *(char *)(param_2 + 0x1f)) {
      lVar1 = lVar5;
    }
    FUN_10a003c90(appuStack_78,lVar1 + 1,&uStack_41);
    pppuVar3 = (undefined8 ***)appuStack_78[0];
    if (-1 < cStack_61) {
      pppuVar3 = appuStack_78;
    }
    if (lVar1 != 0) {
      lVar5 = *(long *)(param_2 + 8);
      if (-1 < *(char *)(param_2 + 0x1f)) {
        lVar5 = param_2 + 8;
      }
      _memmove(pppuVar3,lVar5,lVar1);
    }
    *(undefined2 *)((long)pppuVar3 + lVar1) = 0x2f;
    uVar2 = param_3[1];
    puVar4 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar4 = param_3;
    }
    pppuVar3 = appuStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar3,puVar4,uVar2);
    puStack_58 = pppuVar3[1];
    puStack_60 = *pppuVar3;
    puStack_50 = pppuVar3[2];
    pppuVar3[1] = (undefined8 **)0x0;
    pppuVar3[2] = (undefined8 **)0x0;
    *pppuVar3 = (undefined8 **)0x0;
    if (cStack_61 < '\0') {
      __ZdlPv(appuStack_78[0]);
    }
  }
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  *puVar4 = &PTR_FUN_110ba56f0;
  puVar4[2] = puStack_58;
  puVar4[1] = puStack_60;
  puVar4[3] = puStack_50;
  *param_1 = puVar4;
  return;
}



/* Entry: 10a0f5e18; end: 10a0f602b;  */

undefined8 * FUN_10a0f5e18(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plVar4 = (long *)0x88;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110ba4db8;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined4 *)(plVar4 + 8) = 0x3f800000;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)(plVar4 + 0xd) = 0x3f800000;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plStack_70 = plVar4 + 3;
  plVar4[4] = 0;
  *plStack_70 = 0;
  plStack_68 = plVar4;
  FUN_10a0f602c(param_1,param_2,&plStack_70);
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *param_1 = &PTR_FUN_110ba2ec8;
  param_1[0xf] = &PTR_DAT_110ba3140;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  puVar5 = (undefined8 *)0x48;
  __Znwm();
  *puVar5 = &PTR_FUN_110ba3160;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 8) = 0x3f800000;
  param_1[0x20] = puVar5;
  lVar6 = 48000;
  puStack_38 = param_1 + 0x24;
  __Znwm();
  FUN_10a107140(0,0,lVar6);
  uStack_58 = param_1[0x24];
  param_1[0x24] = lVar6;
  param_1[0x25] = lVar6;
  uStack_40 = param_1[0x26];
  param_1[0x26] = lVar6 + 48000;
  uStack_50 = uStack_58;
  uStack_48 = uStack_58;
  func_0x00010a1071c4(&uStack_58);
  return param_1;
}



/* Entry: 10a0f602c; end: 10a0f6123;  */

undefined8 * FUN_10a0f602c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ba33f8;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[0xb] = 0;
  param_1[3] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = &PTR_FUN_110c38400;
  *(undefined2 *)(param_1 + 0xe) = 0;
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 4,*(long *)(param_2 + 0x100) + 0x220);
    if (*(long *)(param_2 + 0xa20) != 0) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(*(long *)(param_2 + 0xa20) + 0x18);
    }
  }
  return param_1;
}



/* Entry: 10a0f6124; end: 10a0f623b;  */

undefined8 * FUN_10a0f6124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba33f8;
  param_1[10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  FUN_10a10a59c(param_1 + 1);
  return param_1;
}



/* Entry: 10a0f623c; end: 10a0f6247;  */

void FUN_10a0f623c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba2ec8;
  param_1[0xf] = &PTR_DAT_110ba3140;
  puStack_28 = param_1 + 0x24;
  func_0x00010a107224(&puStack_28);
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x20];
  param_1[0x20] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  FUN_10a0f6124(param_1);
  return;
}



/* Entry: 10a0f6248; end: 10a0f6273;  */

void FUN_10a0f6248(void)

{
  func_0x00010a0f618c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0f6274; end: 10a0f62f3;  */

undefined * FUN_10a0f6274(undefined *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (param_3 >> 0x20 != 0) {
    puVar1 = &UNK_10f63b766;
    FUN_10a00946c(&UNK_10f63b766);
    FUN_10a0f5e18();
    FUN_10a0f6274();
    return puVar1;
  }
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c2b048(&lStack_38,param_2,param_2 + param_3,param_3);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  *(long *)(param_1 + 0xe8) = lStack_38;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  *(long *)(param_1 + 0xf0) = lStack_30;
  FUN_10a0f63f4(param_1,lStack_38,lStack_30 - lStack_38);
  return param_1;
}



/* Entry: 10a0f62f4; end: 10a0f634f;  */

undefined8 FUN_10a0f62f4(undefined8 param_1)

{
  FUN_10a0f5e18(param_1,0);
  FUN_10a0f6274();
  return param_1;
}



/* Entry: 10a0f6350; end: 10a0f639b;  */

undefined8 FUN_10a0f6350(undefined8 param_1)

{
  FUN_10a0f5e18(param_1,0);
  FUN_10a0f6274();
  return param_1;
}



/* Entry: 10a0f639c; end: 10a0f63f3;  */

undefined8 FUN_10a0f639c(undefined8 param_1)

{
  FUN_10a0f5e18(param_1,0);
  FUN_10a0f6274();
  return param_1;
}



/* Entry: 10a0f63f4; end: 10a0f6c03;  */

/* WARNING: Removing unreachable block (ram,0x00010a0f68b0) */

void FUN_10a0f63f4(undefined8 *****param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  undefined8 *****pppppuVar8;
  undefined *puVar9;
  undefined8 *****pppppuVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 ****ppppuVar14;
  int iVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined **appuStack_d8 [2];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 ***pppuStack_70;
  
  if (param_3 >> 0x20 == 0) {
    FUN_10a1072b0(appuStack_d8);
    lVar16 = lStack_b8;
    if ((ulong)(lStack_c0 - lStack_b8) < 0x48) {
LAB_10a0f6af4:
      lStack_b8 = lVar16;
      puVar9 = &UNK_10f63c881;
    }
    else {
      puVar1 = (undefined8 *)(lStack_c8 + lStack_b8);
      lVar16 = lStack_b8 + 0x48;
      ppppuVar14 = (undefined8 ****)*puVar1;
      param_1[0x14] = (undefined8 ****)puVar1[1];
      param_1[0x13] = ppppuVar14;
      ppppuVar24 = (undefined8 ****)puVar1[5];
      ppppuVar23 = (undefined8 ****)puVar1[4];
      ppppuVar22 = (undefined8 ****)puVar1[7];
      ppppuVar6 = (undefined8 ****)puVar1[6];
      ppppuVar14 = (undefined8 ****)puVar1[8];
      ppppuVar25 = (undefined8 ****)puVar1[2];
      param_1[0x16] = (undefined8 ****)puVar1[3];
      param_1[0x15] = ppppuVar25;
      param_1[0x1b] = ppppuVar14;
      param_1[0x1a] = ppppuVar22;
      param_1[0x19] = ppppuVar6;
      param_1[0x18] = ppppuVar24;
      param_1[0x17] = ppppuVar23;
      if (*(uint *)(param_1 + 0x13) < 2) {
LAB_10a0f65f8:
        lStack_b8 = lVar16;
        ppppuStack_90 = (undefined8 ****)&UNK_10f63b79b;
        ppppuStack_88 = (undefined8 *****)0x13;
        if (*(uint *)((long)param_1 + 0x9c) <= param_3) {
          if ((uint)param_3 != *(uint *)((long)param_1 + 0x9c)) {
            ppppuVar14 = (undefined8 ****)0x28;
            __Znwm();
            FUN_10a1072b0();
            ppppuVar6 = param_1[0x1c];
            param_1[0x1c] = ppppuVar14;
            if (ppppuVar6 != (undefined8 ****)0x0) {
              (*(code *)(*ppppuVar6)[1])();
            }
          }
          pppppuVar10 = param_1;
          FUN_10a0f6edc(param_1);
          FUN_10a0e6678(param_1 + 0x21,pppppuVar10);
          if (*(char *)((long)param_1 + 0x4f) < '\0') {
            *(undefined1 *)param_1[7] = 0;
            param_1[8] = (undefined8 ****)0x0;
          }
          else {
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined1 *)((long)param_1 + 0x4f) = 0;
          }
          lStack_f0 = 0;
          lStack_e8 = 0;
          uStack_e0 = 0;
          FUN_10a0e6678(&lStack_f0,pppppuVar10);
          if (lStack_f0 != lStack_e8) {
            puStack_f8 = &UNK_10f63c881;
            do {
              if ((ulong)(lStack_c0 - lStack_b8) < 2) {
LAB_10a0f6ac8:
                FUN_10a00946c(puStack_f8);
                goto LAB_10a0f6b44;
              }
              lVar16 = lStack_b8 + 2;
              uVar2 = *(ushort *)(lStack_c8 + lStack_b8);
              if (0x26 < uVar2) {
                puStack_f8 = &UNK_10f63b7af;
                lStack_b8 = lVar16;
                goto LAB_10a0f6ac8;
              }
              uVar20 = (uint)uVar2;
              if (uVar20 != 0) {
                if (*(uint *)(param_1 + 0x13) < 2) {
                  pppuVar4 = appuStack_d8;
                  lStack_b8 = lVar16;
                  func_0x00010a0f70a0(pppuVar4);
                  func_0x000107c2c4d8(param_1 + 0x10,pppuVar4,pppppuVar10);
                  ppppuVar14 = param_1[0x20];
                  if (*(char *)((long)param_1 + 0x97) < '\0') {
                    func_0x000107c3192c(&ppppuStack_b0,param_1[0x10],param_1[0x11]);
                  }
                  else {
                    ppppuStack_a8 = param_1[0x11];
                    ppppuStack_b0 = param_1[0x10];
                    uStack_a0 = (undefined8 *****)param_1[0x12];
                  }
                  ppppuVar6 = ppppuVar14 + 4;
                  pppppuVar10 = &ppppuStack_b0;
                  func_0x000107c2b0ec();
                  if (ppppuVar6 == (undefined8 ****)0x0) {
                    pppuVar18 = ppppuVar14[2];
                    if (pppuVar18 < ppppuVar14[3]) {
                      pppuVar18[2] = uStack_a0;
                      pppuVar18[1] = ppppuStack_a8;
                      *pppuVar18 = ppppuStack_b0;
                      ppppuStack_a8 = (undefined8 *****)0x0;
                      uStack_a0 = (undefined8 *****)0x0;
                      ppppuStack_b0 = (undefined8 *****)0x0;
                      pppuVar18 = pppuVar18 + 3;
                    }
                    else {
                      ppppuVar6 = ppppuVar14 + 1;
                      lVar16 = (long)pppuVar18 - (long)*ppppuVar6;
                      uVar7 = (lVar16 >> 3) * -0x5555555555555555 + 1;
                      if (0xaaaaaaaaaaaaaaa < uVar7) {
                        FUN_10a05a0c0();
                        goto LAB_10a0f6b44;
                      }
                      lVar11 = (long)ppppuVar14[3] - (long)*ppppuVar6 >> 3;
                      uVar12 = lVar11 * 0x5555555555555556;
                      if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
                        uVar12 = uVar7;
                      }
                      if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
                        uVar12 = 0xaaaaaaaaaaaaaaa;
                      }
                      pppuStack_70 = ppppuVar6;
                      FUN_10a05a0d4();
                      puVar1 = (undefined8 *)((long)ppppuVar6 + lVar16);
                      puVar1[2] = uStack_a0;
                      puVar1[1] = ppppuStack_a8;
                      *puVar1 = ppppuStack_b0;
                      ppppuStack_a8 = (undefined8 *****)0x0;
                      uStack_a0 = (undefined8 *****)0x0;
                      ppppuStack_b0 = (undefined8 *****)0x0;
                      pppuVar18 = (undefined8 ***)(puVar1 + 3);
                      pppuVar17 = (undefined8 ***)
                                  ((long)puVar1 - ((long)ppppuVar14[2] - (long)ppppuVar14[1]));
                      _memcpy(pppuVar17);
                      ppppuStack_90 = (undefined8 ****)ppppuVar14[1];
                      ppppuVar14[1] = pppuVar17;
                      ppppuVar14[2] = pppuVar18;
                      ppuStack_78 = ppppuVar14[3];
                      ppppuVar14[3] = ppppuVar6 + uVar12 * 3;
                      ppppuStack_88 = ppppuStack_90;
                      ppppuStack_80 = ppppuStack_90;
                      func_0x000107c31938(&ppppuStack_90);
                    }
                    ppppuVar14[2] = pppuVar18;
                    if ((long)pppuVar18 - (long)ppppuVar14[1] == 0) goto LAB_10a0f6b44;
                    ppppuStack_88 = (undefined8 ****)pppuVar18[-2];
                    ppppuStack_90 = (undefined8 ****)pppuVar18[-3];
                    ppppuStack_80 = (undefined8 ****)pppuVar18[-1];
                    iVar15 = (int)((ulong)((long)pppuVar18 - (long)ppppuVar14[1]) >> 3) *
                             -0x55555555;
                    ppuStack_78 = (undefined8 **)CONCAT44(ppuStack_78._4_4_,iVar15);
                    pppppuVar10 = &ppppuStack_90;
                    FUN_10a10b6b8(ppppuVar14 + 4,pppppuVar10,&ppppuStack_90);
                    if ((long)ppppuStack_80 < 0) {
                      __ZdlPv(ppppuStack_90);
                    }
                  }
                  else {
                    iVar15 = *(int *)(ppppuVar6 + 5);
                  }
                  if ((long)uStack_a0 < 0) {
                    __ZdlPv(ppppuStack_b0);
                  }
                  lVar11 = lStack_b8;
                  if (3 < (ulong)(lStack_c0 - lStack_b8)) {
                    puVar13 = (uint *)(lStack_c8 + lStack_b8);
                    lStack_b8 = lStack_b8 + 4;
                    goto LAB_10a0f691c;
                  }
                }
                else {
                  lVar11 = lVar16;
                  if ((3 < (ulong)(lStack_c0 - lVar16)) &&
                     (lVar11 = lStack_b8 + 6, 3 < (ulong)(lStack_c0 - lVar11))) {
                    iVar15 = *(int *)(lStack_c8 + lVar16);
                    puVar13 = (uint *)(lStack_c8 + lVar11);
                    lStack_b8 = lStack_b8 + 10;
LAB_10a0f691c:
                    uVar19 = *puVar13;
                    uVar21 = (uint)uVar2;
                    pppppuVar8 = param_1;
                    lVar11 = lStack_b8;
                    if (uVar20 < 0x19) {
                      if ((1 << (ulong)(uVar20 & 0x1f) & 0x1c31fe0U) != 0) goto LAB_10a0f6938;
                      if (uVar21 != 0xe) {
                        if (uVar21 != 0xf) goto LAB_10a0f69f4;
                        if ((ulong)(lStack_c0 - lStack_b8) < 4) goto LAB_10a0f6ae8;
                        ppppuVar14 = (undefined8 ****)(lStack_c8 + lStack_b8);
                        lStack_b8 = lStack_b8 + 4;
                        goto LAB_10a0f695c;
                      }
                      FUN_10a0f6edc();
                      *(undefined2 *)((long)pppppuVar8 + 0xc) = 0xe;
                      *(int *)((long)pppppuVar8 + 4) = iVar15;
                      *(uint *)(pppppuVar8 + 1) = uVar19;
LAB_10a0f697c:
                      if (lStack_f0 != lStack_e8) {
                        uVar7 = (ulong)*(uint *)(lStack_e8 + -4);
                        uVar12 = ((long)param_1[0x25] - (long)param_1[0x24] >> 4) *
                                 -0x5555555555555555;
                        if (uVar7 <= uVar12 && uVar12 - uVar7 != 0) {
                          pppppuVar10 = pppppuVar8;
                          FUN_10a0e6678(param_1[0x24] + uVar7 * 6 + 3);
                          if (uVar21 == 0xe) {
                            FUN_10a0e6678(&lStack_f0);
                            pppppuVar10 = pppppuVar8;
                          }
                          goto LAB_10a0f6a50;
                        }
                      }
                      goto LAB_10a0f6b44;
                    }
LAB_10a0f69f4:
                    if (uVar21 - 1 < 3) {
LAB_10a0f6938:
                      uVar7 = (ulong)(uint)(int)(short)uVar2;
                      func_0x00010a0f7058();
                      lVar11 = lStack_b8;
                      if (uVar7 <= (ulong)(lStack_c0 - lStack_b8)) {
                        ppppuVar14 = (undefined8 ****)(lStack_c8 + lStack_b8);
                        lStack_b8 = lStack_b8 + uVar7;
LAB_10a0f695c:
                        if (ppppuVar14 == (undefined8 ****)0x0) goto LAB_10a0f6a3c;
LAB_10a0f6964:
                        FUN_10a0f6edc();
                        *(ushort *)((long)pppppuVar8 + 0xc) = uVar2;
                        *(int *)((long)pppppuVar8 + 4) = iVar15;
                        *(uint *)(pppppuVar8 + 1) = uVar19;
                        pppppuVar8[2] = ppppuVar14;
                        goto LAB_10a0f697c;
                      }
                    }
                    else if (uVar21 == 4) {
                      if (3 < (ulong)(lStack_c0 - lStack_b8)) {
                        ppppuVar14 = (undefined8 ****)(lStack_c8 + lStack_b8);
                        lVar11 = lStack_b8 + 4;
                        if ((ulong)(long)*(int *)ppppuVar14 <= (ulong)(lStack_c0 - lVar11)) {
                          lStack_b8 = lVar11 + *(int *)ppppuVar14;
                          goto LAB_10a0f6964;
                        }
                      }
                    }
                    else {
LAB_10a0f6a3c:
                      if ((ulong)uVar19 <= (ulong)(lStack_c0 - lStack_b8)) {
                        lStack_b8 = lStack_b8 + (ulong)uVar19;
                        goto LAB_10a0f6a50;
                      }
                      puStack_f8 = &UNK_10f63c88c;
                      lVar11 = lStack_b8;
                    }
                  }
                }
LAB_10a0f6ae8:
                lStack_b8 = lVar11;
                FUN_10a00946c(puStack_f8);
                goto LAB_10a0f6b44;
              }
              lStack_e8 = lStack_e8 + -4;
              lStack_b8 = lVar16;
LAB_10a0f6a50:
            } while (lStack_f0 != lStack_e8);
          }
          if (lStack_f0 != 0) {
            lStack_e8 = lStack_f0;
            __ZdlPv();
          }
          appuStack_d8[0] = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(appuStack_d8);
          return;
        }
        goto LAB_10a0f6b20;
      }
      if (*(uint *)(param_1 + 0x13) == 2) {
        if (*(char *)(param_1 + 0x14) == '\0') {
          if ((ulong)(lStack_c0 - lVar16) < 4) goto LAB_10a0f6af4;
          ppppuVar14 = param_1[0x20];
          lStack_b8 = lStack_b8 + 0x4c;
          uVar20 = *(uint *)(lStack_c8 + lVar16);
          pppuVar18 = (undefined8 ***)(ulong)uVar20;
          if (uVar20 < 0x7fffffff) {
            func_0x000107c31930(ppppuVar14 + 1,pppuVar18);
            pppppuVar10 = (undefined8 *****)
                          (long)((float)(long)pppuVar18 / *(float *)(ppppuVar14 + 8));
            FUN_10a10b4ac(ppppuVar14 + 4);
            if (uVar20 != 0) {
              uVar19 = 1;
              do {
                pppuVar4 = appuStack_d8;
                func_0x00010a0f70a0(pppuVar4);
                if ((undefined8 *****)0x7ffffffffffffff7 < pppppuVar10) {
                  func_0x000109ffde50();
                  goto LAB_10a0f6b44;
                }
                if (pppppuVar10 < (undefined8 *****)0x17) {
                  uStack_a0 = (undefined8 *****)CONCAT17((char)pppppuVar10,(undefined7)uStack_a0);
                  pppppuVar5 = &ppppuStack_b0;
                  if (pppppuVar10 != (undefined8 *****)0x0) goto LAB_10a0f6540;
                }
                else {
                  pppppuVar8 = (undefined8 *****)0x19;
                  if (((ulong)pppppuVar10 | 7) != 0x17) {
                    pppppuVar8 = (undefined8 *****)(((ulong)pppppuVar10 | 7) + 1);
                  }
                  pppppuVar5 = pppppuVar8;
                  __Znwm();
                  uStack_a0 = (undefined8 *****)((ulong)pppppuVar8 | 0x8000000000000000);
                  ppppuStack_b0 = pppppuVar5;
                  ppppuStack_a8 = pppppuVar10;
LAB_10a0f6540:
                  _memmove(pppppuVar5,pppuVar4,pppppuVar10);
                }
                *(undefined1 *)((long)pppppuVar5 + (long)pppppuVar10) = 0;
                FUN_10a0b4ec0(ppppuVar14 + 1,&ppppuStack_b0);
                if ((long)uStack_a0 < 0) {
                  func_0x000107c3192c(&ppppuStack_90,ppppuStack_b0,ppppuStack_a8);
                }
                else {
                  ppppuStack_88 = ppppuStack_a8;
                  ppppuStack_90 = ppppuStack_b0;
                  ppppuStack_80 = uStack_a0;
                }
                ppuStack_78 = (undefined8 **)CONCAT44(ppuStack_78._4_4_,uVar19);
                pppppuVar10 = &ppppuStack_90;
                FUN_10a10b6b8(ppppuVar14 + 4,pppppuVar10,&ppppuStack_90);
                if ((long)ppppuStack_80 < 0) {
                  __ZdlPv(ppppuStack_90);
                }
                if ((long)uStack_a0 < 0) {
                  __ZdlPv(ppppuStack_b0);
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 <= uVar20);
            }
            if ((((long)ppppuVar14[2] - (long)ppppuVar14[1] >> 3) * -0x5555555555555555 -
                 (long)pppuVar18 == 0) && (lVar16 = lStack_b8, ppppuVar14[7] == pppuVar18))
            goto LAB_10a0f65f8;
          }
          puVar9 = &UNK_10f63b8ac;
        }
        else {
          puVar9 = &UNK_10f63b7e1;
          lStack_b8 = lVar16;
        }
      }
      else {
        puVar9 = &UNK_10f63b7c5;
        lStack_b8 = lVar16;
      }
    }
    FUN_10a00946c(puVar9);
  }
  else {
    FUN_10a00946c(&UNK_10f63b766);
LAB_10a0f6b20:
    FUN_10a0edfc4(&ppppuStack_90);
  }
LAB_10a0f6b44:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f6b48);
  (*pcVar3)();
}



/* Entry: 10a0f6c04; end: 10a0f6c5f;  */

long FUN_10a0f6c04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a0f5e18(param_1,0);
  func_0x000107c3194c(lVar1 + 0xe8,param_2);
  FUN_10a0f63f4(param_1,*(long *)(param_1 + 0xe8),
                *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8));
  return param_1;
}



/* Entry: 10a0f6c60; end: 10a0f6cab;  */

undefined8 FUN_10a0f6c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10a0f5e18(param_1,param_3);
  FUN_10a0f6274();
  return param_1;
}



/* Entry: 10a0f6cac; end: 10a0f6cf7;  */

undefined8 FUN_10a0f6cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10a0f5e18(param_1,param_3);
  FUN_10a0f6274();
  return param_1;
}



/* Entry: 10a0f6cf8; end: 10a0f6d8b;  */

long FUN_10a0f6cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f5e18(param_1,param_3);
  FUN_10a0f1f4c(&lStack_38,param_2);
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xf0) = lVar1;
    __ZdlPv();
    *(long *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(long *)(param_1 + 0xe8) = lStack_38;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  *(long *)(param_1 + 0xf0) = lStack_30;
  FUN_10a0f63f4(param_1,lStack_38,lStack_30 - lStack_38);
  return param_1;
}



/* Entry: 10a0f6d8c; end: 10a0f6e1f;  */

long FUN_10a0f6d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f5e18(param_1,param_3);
  FUN_10a0f1f4c(&lStack_38,param_2);
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xf0) = lVar1;
    __ZdlPv();
    *(long *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(long *)(param_1 + 0xe8) = lStack_38;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  *(long *)(param_1 + 0xf0) = lStack_30;
  FUN_10a0f63f4(param_1,lStack_38,lStack_30 - lStack_38);
  return param_1;
}



/* Entry: 10a0f6e20; end: 10a0f6edb;  */

long FUN_10a0f6e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  FUN_10a0f5e18(param_1,param_3);
  FUN_10a0f19e0(auStack_50,param_2,0);
  FUN_10a0f1f4c(&lStack_68,auStack_50);
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xf0) = lVar1;
    __ZdlPv();
    *(long *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(long *)(param_1 + 0xe8) = lStack_68;
  *(undefined8 *)(param_1 + 0xf8) = uStack_58;
  *(long *)(param_1 + 0xf0) = lStack_60;
  FUN_10a0f63f4(param_1,lStack_68,lStack_60 - lStack_68);
  FUN_10a0f1ea0(auStack_50);
  return param_1;
}



/* Entry: 10a0f6edc; end: 10a0f7023;  */

int * FUN_10a0f6edc(int *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar2 = *(undefined8 **)(param_1 + 0x4a);
  if (puVar2 < *(undefined8 **)(param_1 + 0x4c)) {
    *(undefined8 *)((long)puVar2 + 6) = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar7 = puVar2 + 6;
LAB_10a0f6fdc:
    *(undefined8 **)(param_1 + 0x4a) = puVar7;
    *(int *)(puVar7 + -6) =
         (int)((ulong)((long)puVar7 - *(long *)(param_1 + 0x48)) >> 4) * -0x55555555 + -1;
    return (int *)(puVar7 + -6);
  }
  plVar1 = (long *)(param_1 + 0x48);
  lVar6 = *plVar1;
  uVar4 = ((long)puVar2 - lVar6 >> 4) * -0x5555555555555555 + 1;
  if (uVar4 < 0x555555555555556) {
    lVar3 = (long)*(undefined8 **)(param_1 + 0x4c) - lVar6 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0x555555555555555;
    }
    plStack_48 = plVar1;
    if (uVar5 < 0x555555555555556) {
      lVar3 = uVar5 * 0x30;
      __Znwm();
      puVar7 = (undefined8 *)(lVar3 + ((long)puVar2 - lVar6));
      *puVar7 = 0;
      *(undefined8 *)((long)puVar7 + 6) = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7 = puVar7 + 6;
      FUN_10a107140(lVar6,puVar2,lVar3);
      uStack_68 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = lVar3;
      *(undefined8 **)(param_1 + 0x4a) = puVar7;
      uStack_50 = *(undefined8 *)(param_1 + 0x4c);
      *(ulong *)(param_1 + 0x4c) = lVar3 + uVar5 * 0x30;
      uStack_60 = uStack_68;
      uStack_58 = uStack_68;
      func_0x00010a1071c4(&uStack_68);
      goto LAB_10a0f6fdc;
    }
  }
  else {
    FUN_10a10712c();
  }
  func_0x000109ffded8();
  *(undefined ***)param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10a0f7024; end: 10a0f7057;  */

undefined8 * FUN_10a0f7024(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10a0f7058; end: 10a0f70fb;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10a0f7058(int param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  uVar2 = param_1 - 1;
  if ((uVar2 < 0x26) && ((0x3fc0e18ff7U >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
    return *(ulong *)(&UNK_10e497180 + ((ulong)uVar2 & 0xffff) * 8);
  }
  puVar5 = &UNK_10f63c874;
  FUN_10a00946c();
  lVar9 = *(long *)(puVar5 + 0x20);
  if (3 < (ulong)(*(long *)(puVar5 + 0x18) - lVar9)) {
    lVar8 = lVar9 + 4;
    *(long *)(puVar5 + 0x20) = lVar8;
    iVar1 = *(int *)(*(long *)(puVar5 + 0x10) + lVar9);
    param_2 = (undefined8 *)(long)iVar1;
    if (param_2 <= (undefined8 *)(*(long *)(puVar5 + 0x18) - lVar8)) {
      *(long *)(puVar5 + 0x20) = lVar8 + (long)param_2;
      if (-1 < iVar1) {
        return *(long *)(puVar5 + 0x10) + lVar8;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0f70f0);
      (*pcVar4)();
    }
  }
  puVar5 = &UNK_10f63c881;
  FUN_10a00946c();
  if (param_2[1] != 0) {
    lVar9 = *(long *)(puVar5 + 0x100);
    FUN_109ffe064(auStack_58,*param_2);
    lVar9 = lVar9 + 0x20;
    func_0x000107c2b0ec(lVar9,auStack_58);
    if (lVar9 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)*(uint *)(lVar9 + 0x28) | 0x100000000;
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    if (uVar10 >> 0x20 != 0) {
      uVar6 = *(ulong *)(puVar5 + 0x138);
      if ((uVar6 != 0) && (*(int *)(uVar6 + 4) == (int)uVar10)) {
        return uVar6;
      }
      *(undefined8 *)(puVar5 + 0x138) = 0;
      if (*(long *)(puVar5 + 0x108) != *(long *)(puVar5 + 0x110)) {
        uVar7 = (ulong)*(uint *)(*(long *)(puVar5 + 0x110) + -4);
        lVar9 = *(long *)(puVar5 + 0x120);
        uVar6 = (*(long *)(puVar5 + 0x128) - lVar9 >> 4) * -0x5555555555555555;
        if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
          lVar8 = lVar9 + uVar7 * 0x30;
          puVar3 = *(uint **)(lVar8 + 0x18);
          while( true ) {
            if (puVar3 == *(uint **)(lVar8 + 0x20)) {
              return 0;
            }
            uVar7 = (ulong)*puVar3;
            if (uVar6 < uVar7 || uVar6 - uVar7 == 0) break;
            uVar7 = lVar9 + uVar7 * 0x30;
            puVar3 = puVar3 + 1;
            if (*(int *)(uVar7 + 4) == (int)uVar10) {
              *(ulong *)(puVar5 + 0x138) = uVar7;
              return uVar7;
            }
          }
        }
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0f7208);
      (*pcVar4)();
    }
    return 0;
  }
  puVar5 = &UNK_10f63b7fc;
  FUN_10a00946c(&UNK_10f63b7fc);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  __Unwind_Resume(puVar5);
  FUN_10a0f70fc();
  return (ulong)(puVar5 != (undefined *)0x0);
}



/* Entry: 10a0f70fc; end: 10a0f722f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10a0f70fc(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (param_2[1] == 0) {
    puVar4 = &UNK_10f63b7fc;
    FUN_10a00946c(&UNK_10f63b7fc);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    __Unwind_Resume(puVar4);
    FUN_10a0f70fc();
    return (ulong)(puVar4 != (undefined *)0x0);
  }
  lVar7 = *(long *)(param_1 + 0x100);
  FUN_109ffe064(auStack_38,*param_2);
  lVar7 = lVar7 + 0x20;
  func_0x000107c2b0ec(lVar7,auStack_38);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*(uint *)(lVar7 + 0x28) | 0x100000000;
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (uVar8 >> 0x20 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x138);
    if ((uVar3 != 0) && (*(int *)(uVar3 + 4) == (int)uVar8)) {
      return uVar3;
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x110)) {
      uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x110) + -4);
      lVar7 = *(long *)(param_1 + 0x120);
      uVar3 = (*(long *)(param_1 + 0x128) - lVar7 >> 4) * -0x5555555555555555;
      if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
        lVar6 = lVar7 + uVar5 * 0x30;
        puVar1 = *(uint **)(lVar6 + 0x18);
        while( true ) {
          if (puVar1 == *(uint **)(lVar6 + 0x20)) {
            return 0;
          }
          uVar5 = (ulong)*puVar1;
          if (uVar3 < uVar5 || uVar3 - uVar5 == 0) break;
          uVar5 = lVar7 + uVar5 * 0x30;
          puVar1 = puVar1 + 1;
          if (*(int *)(uVar5 + 4) == (int)uVar8) {
            *(ulong *)(param_1 + 0x138) = uVar5;
            return uVar5;
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7208);
    (*pcVar2)();
  }
  return 0;
}



/* Entry: 10a0f7230; end: 10a0f724b;  */

bool FUN_10a0f7230(long param_1)

{
  FUN_10a0f70fc();
  return param_1 != 0;
}



/* Entry: 10a0f724c; end: 10a0f7297;  */

ulong FUN_10a0f724c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x110)) {
    uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x110) + -4);
    uVar4 = (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) * -0x5555555555555555;
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x120) + uVar2 * 0x30;
      return (ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f7298);
  (*pcVar1)();
}



/* Entry: 10a0f7298; end: 10a0f733f;  */

void FUN_10a0f7298(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  lVar4 = param_1;
  FUN_10a0f70fc();
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar4 != 0) {
    FUN_10a0e6678(param_1 + 0x108,lVar4);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar4 = (long)*(char *)(param_1 + 0x4f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(param_1 + 0x40);
    }
    if (lVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0x38,0x2e);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
              (param_1 + 0x38,uVar1,uVar2);
    return;
  }
  FUN_109ffe064(auStack_50,*param_2,param_2[1]);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f63b811,auStack_50);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f730c);
  (*pcVar3)();
}



/* Entry: 10a0f7340; end: 10a0f7393;  */

void FUN_10a0f7340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)*(char *)(param_1 + 0x4f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  if (lVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 0x38,0x2e);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_1 + 0x38,param_2,param_3);
  return;
}



/* Entry: 10a0f7394; end: 10a0f7453;  */

void FUN_10a0f7394(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  plVar4 = param_1;
  uVar7 = param_2;
  (**(code **)(*param_1 + 0x208))();
  if (((int)(uint)param_2 < 0) || ((uint)plVar4 <= (uint)param_2)) {
    puVar5 = &UNK_10f63b82f;
    FUN_10a00946c();
    lVar6 = (long)(char)puVar5[0x4f];
    if (lVar6 < 0) {
      lVar6 = *(long *)(puVar5 + 0x40);
    }
    if (lVar6 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x38,0x2e);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(puVar5 + 0x38,0x23)
    ;
    __ZNSt3__19to_stringEi(&pppuStack_68,uVar7);
    ppppuVar2 = (undefined8 ****)pppuStack_68;
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
      ppppuVar2 = &pppuStack_68;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5 + 0x38,ppppuVar2,uStack_60);
    if ((char)bStack_51 < '\0') {
      __ZdlPv(pppuStack_68);
    }
    return;
  }
  if (param_1[0x21] != param_1[0x22]) {
    uVar8 = (ulong)*(uint *)(param_1[0x22] + -4);
    lVar6 = param_1[0x24];
    uVar7 = (param_1[0x25] - lVar6 >> 4) * -0x5555555555555555;
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      lVar9 = lVar6 + uVar8 * 0x30;
      lVar1 = *(long *)(lVar9 + 0x18);
      if (((param_2 & 0xffffffff) < (ulong)(*(long *)(lVar9 + 0x20) - lVar1 >> 2)) &&
         (uVar8 = (ulong)*(uint *)(lVar1 + (param_2 & 0xffffffff) * 4),
         uVar8 <= uVar7 && uVar7 - uVar8 != 0)) {
        FUN_10a0e6678(param_1 + 0x21,lVar6 + uVar8 * 0x30);
        FUN_10a0f7454(param_1,param_2);
        param_1[0x27] = 0;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f7448);
  (*pcVar3)();
}



/* Entry: 10a0f7454; end: 10a0f7507;  */

void FUN_10a0f7454(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  lVar2 = (long)*(char *)(param_1 + 0x4f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0x40);
  }
  if (lVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 0x38,0x2e);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1 + 0x38,0x23);
  __ZNSt3__19to_stringEi(&ppuStack_48,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1 + 0x38,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 10a0f7508; end: 10a0f7547;  */

void FUN_10a0f7508(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x110);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x108)) < 5) {
    param_1 = &UNK_10f63b843;
    FUN_10a00946c();
  }
  else {
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(long *)(param_1 + 0x108) == lVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f7534);
      (*pcVar3)();
    }
    *(long *)(param_1 + 0x110) = lVar4 + -4;
  }
  lVar4 = (long)(char)param_1[0x4f];
  puVar1 = param_1 + 0x38;
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    puVar1 = *(undefined **)(param_1 + 0x38);
  }
  if (lVar4 != 0) {
    do {
      if (lVar4 == 0) goto LAB_10a0f758c;
      lVar2 = lVar4 + -1;
      lVar4 = lVar4 + -1;
    } while (puVar1[lVar2] != '.');
    if (lVar4 != -1) goto LAB_10a0f7590;
  }
LAB_10a0f758c:
  lVar4 = 0;
LAB_10a0f7590:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(param_1 + 0x38,lVar4,0);
  return;
}



/* Entry: 10a0f7548; end: 10a0f7597;  */

void FUN_10a0f7548(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)*(char *)(param_1 + 0x4f);
  lVar2 = param_1 + 0x38;
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x38);
  }
  if (lVar3 != 0) {
    do {
      if (lVar3 == 0) goto LAB_10a0f758c;
      pcVar1 = (char *)(lVar2 + -1 + lVar3);
      lVar3 = lVar3 + -1;
    } while (*pcVar1 != '.');
    if (lVar3 != -1) goto LAB_10a0f7590;
  }
LAB_10a0f758c:
  lVar3 = 0;
LAB_10a0f7590:
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(param_1 + 0x38,lVar3,0);
  return;
}



/* Entry: 10a0f7598; end: 10a0f76a7;  */

long * FUN_10a0f7598(long *param_1,long *param_2,long param_3,long *param_4)

{
  short sVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 ***pppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar3 = param_2;
  FUN_10a0f70fc();
  if (plVar3 == (long *)0x0) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
    goto LAB_10a0f760c;
  }
  uVar8 = (ulong)*(uint *)(plVar3 + 1);
  if (*(uint *)(plVar3 + 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_10a0f7608:
    uVar7 = 1;
LAB_10a0f760c:
    *(undefined1 *)(param_1 + 2) = uVar7;
    return plVar3;
  }
  uVar9 = (ulong)*(uint *)plVar3[2];
  lVar11 = param_2[0x1c];
  if (*(ulong *)(lVar11 + 0x18) < uVar9) {
    FUN_10a00946c(&UNK_10f63c88c);
  }
  else {
    *(ulong *)(lVar11 + 0x20) = uVar9;
    if (uVar8 <= *(ulong *)(lVar11 + 0x18) - uVar9) {
      *(ulong *)(lVar11 + 0x20) = uVar9 + uVar8;
      *param_1 = *(long *)(lVar11 + 0x10) + uVar9;
      param_1[1] = uVar8;
      goto LAB_10a0f7608;
    }
  }
  puVar4 = &UNK_10f63c881;
  FUN_10a00946c();
  uStack_28 = 0x10a0f7634;
  plStack_40 = param_2;
  plStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0f70fc();
  plVar2 = plStack_38;
  plVar3 = plStack_40;
  if (puVar4 == (undefined *)0x0) {
    return param_4;
  }
  plStack_40 = (long *)&UNK_10f63cc79;
  plStack_38 = (long *)0x12;
  if (*(undefined8 **)(puVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar4 + 0xc) == 0x18) {
      plStack_40 = (long *)&UNK_10f63cc8c;
      plStack_38 = (long *)0x21;
    }
    else {
      plStack_40 = (long *)&UNK_10f63cc8c;
      plStack_38 = (long *)0x21;
      if (*(short *)(puVar4 + 0xc) == 0x11) {
        if (*(int *)(puVar4 + 8) == 8) {
          return (long *)**(undefined8 **)(puVar4 + 0x10);
        }
        plStack_40 = (long *)&UNK_10f63ccae;
        plStack_38 = (long *)0x11;
      }
    }
  }
  FUN_10a0edfc4(&plStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10a860;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(uint **)(param_3 + 0x10) != (uint *)0x0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)(param_3 + 0xc) == 2) {
        if (*(int *)(param_3 + 8) == 4) {
          return (long *)(ulong)**(uint **)(param_3 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  ppuStack_50 = &puStack_30;
  FUN_10a0edfc4();
  uStack_68 = 0x10a10a8ec;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 3) {
        if ((int)ppuVar5[1] == 4) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10a978;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(byte **)(param_3 + 0x10) != (byte *)0x0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)(param_3 + 0xc) == 1) {
        if (*(int *)(param_3 + 8) == 1) {
          return (long *)(ulong)**(byte **)(param_3 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_d0;
  plStack_c0 = plVar3;
  plStack_b8 = plVar2;
  pcStack_a8 = FUN_10a10aa04;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)((long)ppuVar5 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar5 + 0xc);
    lVar11 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar5 + 8) == 4) {
      FUN_10a0f7058();
      puStack_d0 = &UNK_10f63ccae;
      uStack_c8 = 0x11;
      if (lVar11 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
      }
    }
    else {
      puStack_d0 = &UNK_10f63ccae;
      uStack_c8 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_d0);
  ppuVar5 = &puStack_f0;
  pcStack_d8 = FUN_10a10aaac;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_3 + 0xc) == 5) {
        if (*(int *)(param_3 + 8) == 8) {
          return (long *)ppuVar6;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  pppuStack_e0 = &pppuStack_b0;
  FUN_10a0edfc4(&puStack_f0);
  ppuVar6 = &puStack_110;
  uStack_f8 = 0x10a10ab38;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)(param_3 + 0xc) == 7) {
        if (*(int *)(param_3 + 8) == 8) {
          return (long *)ppuVar5;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_110);
  ppuVar5 = &puStack_130;
  uStack_118 = 0x10a10abc4;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)(param_3 + 0xc) == 8) {
        if (*(int *)(param_3 + 8) == 0xc) {
          return (long *)ppuVar6;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_150;
  uStack_138 = 0x10a10ac54;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x20) {
        if ((int)ppuVar5[1] == 0x18) {
          return (long *)ppuVar5;
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_150);
  ppuVar5 = &puStack_170;
  uStack_158 = 0x10a10ace4;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)(param_3 + 0xc) == 9) {
        if (*(int *)(param_3 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_190;
  uStack_178 = 0x10a10ad74;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1b0;
  uStack_198 = 0x10a10ae00;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1d0;
  uStack_1b8 = 0x10a10ae90;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1f0;
  uStack_1d8 = 0x10a10af1c;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_210;
  uStack_1f8 = 0x10a10afa8;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_230;
  uStack_218 = 0x10a10b038;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_250;
  uStack_238 = 0x10a10b0c4;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar5 = &puStack_270;
  uStack_258 = 0x10a10b150;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_3 + 0xc) == 0xc) {
        if (*(int *)(param_3 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_290;
  uStack_278 = 0x10a10b1e0;
  pppuStack_2a0 = &pppuStack_280;
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar5 = &puStack_2b0;
  uStack_298 = 0x10a10b270;
  pppuStack_2c0 = &pppuStack_2a0;
  puVar10 = *(undefined8 **)(param_3 + 0x10);
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (puVar10 != (undefined8 *)0x0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)(param_3 + 0xc) == 0xb) {
        if (*(int *)(param_3 + 8) == 0x40) {
          uVar12 = *puVar10;
          uVar14 = puVar10[3];
          uVar13 = puVar10[2];
          extraout_x8[1] = puVar10[1];
          *extraout_x8 = uVar12;
          extraout_x8[3] = uVar14;
          extraout_x8[2] = uVar13;
          uVar12 = puVar10[4];
          uVar14 = puVar10[7];
          uVar13 = puVar10[6];
          extraout_x8[5] = puVar10[5];
          extraout_x8[4] = uVar12;
          extraout_x8[7] = uVar14;
          extraout_x8[6] = uVar13;
          return (long *)ppuVar6;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2b0);
  ppuVar6 = &puStack_2d0;
  uStack_2b8 = 0x10a10b308;
  pppuStack_2e0 = &pppuStack_2c0;
  puStack_2d0 = &UNK_10f63cc79;
  uStack_2c8 = 0x12;
  if (*(long *)(param_3 + 0x10) != 0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
    }
    else {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
      if (*(short *)(param_3 + 0xc) == 0x16) {
        if (*(int *)(param_3 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_2d0 = &UNK_10f63ccae;
        uStack_2c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2d0);
  ppuVar5 = &puStack_2f0;
  uStack_2d8 = 0x10a10b398;
  puVar10 = *(undefined8 **)(param_3 + 0x10);
  puStack_2f0 = &UNK_10f63cc79;
  uStack_2e8 = 0x12;
  if (puVar10 != (undefined8 *)0x0) {
    if (*(short *)(param_3 + 0xc) == 0x18) {
      puStack_2f0 = &UNK_10f63cc8c;
      uStack_2e8 = 0x21;
    }
    else {
      puStack_2f0 = &UNK_10f63cc8c;
      uStack_2e8 = 0x21;
      if (*(short *)(param_3 + 0xc) == 10) {
        if (*(int *)(param_3 + 8) == 0x24) {
          uVar12 = *puVar10;
          uVar14 = puVar10[3];
          uVar13 = puVar10[2];
          extraout_x8_00[1] = puVar10[1];
          *extraout_x8_00 = uVar12;
          extraout_x8_00[3] = uVar14;
          extraout_x8_00[2] = uVar13;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar10 + 4);
          return (long *)ppuVar6;
        }
        puStack_2f0 = &UNK_10f63ccae;
        uStack_2e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar11 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar11 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f76a8; end: 10a0f76db;  */

long * FUN_10a0f76a8(long *param_1,long param_2)

{
  short sVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((((param_1[2] != 0) && (*(short *)((long)param_1 + 0xc) != 0x18)) &&
      (*(short *)((long)param_1 + 0xc) == 3)) && ((int)param_1[1] == 4)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar2 = &puStack_40;
  uStack_28 = 0x10a10a978;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(byte **)(param_2 + 0x10) != (byte *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(param_2 + 0xc) == 1) {
        if (*(int *)(param_2 + 8) == 1) {
          return (long *)(ulong)**(byte **)(param_2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_70;
  pcStack_48 = FUN_10a10aa04;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)((long)ppuVar2 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar2 + 0xc);
    lVar3 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar2 + 8) == 4) {
      FUN_10a0f7058();
      puStack_70 = &UNK_10f63ccae;
      uStack_68 = 0x11;
      if (lVar3 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar2 + 0x10);
      }
    }
    else {
      puStack_70 = &UNK_10f63ccae;
      uStack_68 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_70);
  ppuVar2 = &puStack_90;
  pcStack_78 = FUN_10a10aaac;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_2 + 0xc) == 5) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  pppuStack_80 = &ppuStack_50;
  FUN_10a0edfc4(&puStack_90);
  ppuVar4 = &puStack_b0;
  uStack_98 = 0x10a10ab38;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 7) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar2;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
  ppuVar2 = &puStack_d0;
  uStack_b8 = 0x10a10abc4;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 8) {
        if (*(int *)(param_2 + 8) == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_f0;
  uStack_d8 = 0x10a10ac54;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (ppuVar2[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x20) {
        if ((int)ppuVar2[1] == 0x18) {
          return (long *)ppuVar2;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_f0);
  ppuVar2 = &puStack_110;
  uStack_f8 = 0x10a10ace4;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)(param_2 + 0xc) == 9) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_130;
  uStack_118 = 0x10a10ad74;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar2 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_150;
  uStack_138 = 0x10a10ae00;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_170;
  uStack_158 = 0x10a10ae90;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar2 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_190;
  uStack_178 = 0x10a10af1c;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1b0;
  uStack_198 = 0x10a10afa8;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar2 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar2 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_1d0;
  uStack_1b8 = 0x10a10b038;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1f0;
  uStack_1d8 = 0x10a10b0c4;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(uint **)((long)ppuVar2 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar2 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar2 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1f0);
  ppuVar2 = &puStack_210;
  uStack_1f8 = 0x10a10b150;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xc) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_230;
  uStack_218 = 0x10a10b1e0;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (ppuVar2[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar2 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar2 + 0xc) == 0x21) {
        if ((int)ppuVar2[1] == 0x20) {
          return (long *)ppuVar2;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar2 = &puStack_250;
  uStack_238 = 0x10a10b270;
  pppuStack_260 = &pppuStack_240;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xb) {
        if (*(int *)(param_2 + 8) == 0x40) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8[1] = puVar5[1];
          *extraout_x8 = uVar6;
          extraout_x8[3] = uVar8;
          extraout_x8[2] = uVar7;
          uVar6 = puVar5[4];
          uVar8 = puVar5[7];
          uVar7 = puVar5[6];
          extraout_x8[5] = puVar5[5];
          extraout_x8[4] = uVar6;
          extraout_x8[7] = uVar8;
          extraout_x8[6] = uVar7;
          return (long *)ppuVar4;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar4 = &puStack_270;
  uStack_258 = 0x10a10b308;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0x16) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar2;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar2 = &puStack_290;
  uStack_278 = 0x10a10b398;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)(param_2 + 0xc) == 10) {
        if (*(int *)(param_2 + 8) == 0x24) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8_00[1] = puVar5[1];
          *extraout_x8_00 = uVar6;
          extraout_x8_00[3] = uVar8;
          extraout_x8_00[2] = uVar7;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar5 + 4);
          return (long *)ppuVar4;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = (long)*ppuVar2;
  *ppuVar2 = (undefined *)0x0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar2;
}



/* Entry: 10a0f76dc; end: 10a0f771b;  */

long * FUN_10a0f76dc(long param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    return param_3;
  }
  puVar2 = &stack0xffffffffffffffe0;
  if ((((*(byte **)(param_1 + 0x10) != (byte *)0x0) && (*(short *)(param_1 + 0xc) != 0x18)) &&
      (*(short *)(param_1 + 0xc) == 1)) && (*(int *)(param_1 + 8) == 1)) {
    return (long *)(ulong)**(byte **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_50;
  pcStack_28 = FUN_10a10aa04;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar2 + 0x10) != 0) {
    sVar1 = *(short *)(puVar2 + 0xc);
    lVar3 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(puVar2 + 8) == 4) {
      FUN_10a0f7058();
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
      if (lVar3 == 4) {
        return (long *)(ulong)**(uint **)(puVar2 + 0x10);
      }
    }
    else {
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_50);
  ppuVar5 = &puStack_70;
  pcStack_58 = FUN_10a10aaac;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)(param_1 + 0xc) == 5) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  ppuStack_60 = &puStack_30;
  FUN_10a0edfc4(&puStack_70);
  ppuVar4 = &puStack_90;
  uStack_78 = 0x10a10ab38;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_1 + 0xc) == 7) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar5;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_90);
  ppuVar5 = &puStack_b0;
  uStack_98 = 0x10a10abc4;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 8) {
        if (*(int *)(param_1 + 8) == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_d0;
  uStack_b8 = 0x10a10ac54;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x20) {
        if ((int)ppuVar5[1] == 0x18) {
          return (long *)ppuVar5;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_d0);
  ppuVar5 = &puStack_f0;
  uStack_d8 = 0x10a10ace4;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 9) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_110;
  uStack_f8 = 0x10a10ad74;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_130;
  uStack_118 = 0x10a10ae00;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_150;
  uStack_138 = 0x10a10ae90;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_170;
  uStack_158 = 0x10a10af1c;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_190;
  uStack_178 = 0x10a10afa8;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1b0;
  uStack_198 = 0x10a10b038;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1d0;
  uStack_1b8 = 0x10a10b0c4;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1d0);
  ppuVar5 = &puStack_1f0;
  uStack_1d8 = 0x10a10b150;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xc) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_210;
  uStack_1f8 = 0x10a10b1e0;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar5 = &puStack_230;
  uStack_218 = 0x10a10b270;
  pppuStack_240 = &pppuStack_220;
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xb) {
        if (*(int *)(param_1 + 8) == 0x40) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8[1] = puVar6[1];
          *extraout_x8 = uVar7;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar8;
          uVar7 = puVar6[4];
          uVar9 = puVar6[7];
          uVar8 = puVar6[6];
          extraout_x8[5] = puVar6[5];
          extraout_x8[4] = uVar7;
          extraout_x8[7] = uVar9;
          extraout_x8[6] = uVar8;
          return (long *)ppuVar4;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar4 = &puStack_250;
  uStack_238 = 0x10a10b308;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x16) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar5 = &puStack_270;
  uStack_258 = 0x10a10b398;
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_1 + 0xc) == 10) {
        if (*(int *)(param_1 + 8) == 0x24) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8_00[1] = puVar6[1];
          *extraout_x8_00 = uVar7;
          extraout_x8_00[3] = uVar9;
          extraout_x8_00[2] = uVar8;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar6 + 4);
          return (long *)ppuVar4;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f771c; end: 10a0f786b;  */

ulong * FUN_10a0f771c(ulong *param_1,ulong *param_2,undefined8 param_3,uint *param_4,
                     undefined *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 ***pppuStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = param_2;
  FUN_10a0f70fc();
  if (puVar4 == (ulong *)0x0) {
LAB_10a0f77e0:
    if (param_5 < (undefined *)0x7ffffffffffffff8) {
      if (param_5 < (undefined *)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)param_5;
        puVar5 = param_1;
        if (param_5 == (undefined *)0x0) goto LAB_10a0f7838;
      }
      else {
        puVar4 = (ulong *)0x19;
        if (((ulong)param_5 | 7) != 0x17) {
          puVar4 = (ulong *)(((ulong)param_5 | 7) + 1);
        }
        puVar5 = puVar4;
        __Znwm();
        param_1[1] = (ulong)param_5;
        param_1[2] = (ulong)puVar4 | 0x8000000000000000;
        *param_1 = (ulong)puVar5;
      }
      puVar4 = puVar5;
      _memmove(puVar5,param_4,param_5);
      param_1 = puVar5;
LAB_10a0f7838:
      *(undefined1 *)((long)param_1 + (long)param_5) = 0;
      return puVar4;
    }
    func_0x000109ffde50();
  }
  else if ((uint)param_2[0x13] < 2) {
    puStack_40 = &UNK_10f63ccc0;
    uStack_38 = 0xe;
    if (*(short *)((long)puVar4 + 0xc) == 4) {
      param_4 = (uint *)puVar4[2] + 1;
      uVar2 = *(uint *)puVar4[2];
      param_5 = (undefined *)(ulong)uVar2;
      if ((int)uVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0f7854);
        (*pcVar3)();
      }
      goto LAB_10a0f77e0;
    }
  }
  else {
    puStack_40 = &UNK_10f63ccc0;
    uStack_38 = 0xe;
    if (*(short *)((long)puVar4 + 0xc) == 0x18) {
      FUN_10a10aa04();
      if (((int)puVar4 == 0) ||
         (lVar1 = *(long *)(param_2[0x20] + 8),
         (ulong)((*(long *)(param_2[0x20] + 0x10) - lVar1 >> 3) * -0x5555555555555555) <
         ((ulong)puVar4 & 0xffffffff))) goto LAB_10a0f7860;
      puVar10 = (uint *)(lVar1 + (ulong)((int)puVar4 - 1) * 0x18);
      param_5 = (undefined *)(long)*(char *)((long)puVar10 + 0x17);
      param_4 = puVar10;
      if ((long)param_5 < 0) {
        param_4 = *(uint **)puVar10;
        param_5 = *(undefined **)(puVar10 + 2);
      }
      goto LAB_10a0f77e0;
    }
  }
  FUN_10a0edfc4(&puStack_40);
LAB_10a0f7860:
  puVar4 = (ulong *)&UNK_10f63cccf;
  FUN_10a00946c();
  pcStack_48 = FUN_10a0f786c;
  puVar5 = puVar4;
  puStack_60 = param_5;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a0f70fc();
  if (puVar5 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  ppuVar6 = &puStack_60;
  puStack_60 = &UNK_10f63cc79;
  puStack_58 = (ulong *)0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      puStack_58 = (ulong *)0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      puStack_58 = (ulong *)0x21;
      if (*(short *)((long)puVar5 + 0xc) == 5) {
        if ((int)puVar5[1] == 8) {
          return puVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        puStack_58 = (ulong *)0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar7 = &puStack_80;
  puStack_90 = &stack0xffffffffffffff90;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 7) {
        if ((int)puVar5[1] == 8) {
          return (ulong *)ppuVar6;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar6 = &puStack_a0;
  uStack_88 = 0x10a10abc4;
  ppuStack_b0 = &puStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 8) {
        if ((int)puVar5[1] == 0xc) {
          return (ulong *)ppuVar7;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_c0;
  uStack_a8 = 0x10a10ac54;
  pppuStack_d0 = &ppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x20) {
        if ((int)ppuVar6[1] == 0x18) {
          return (ulong *)ppuVar6;
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_c0);
  ppuVar6 = &puStack_e0;
  uStack_c8 = 0x10a10ace4;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 9) {
        if ((int)puVar5[1] == 0x10) {
          return (ulong *)ppuVar7;
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_100;
  uStack_e8 = 0x10a10ad74;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (ulong *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_120;
  uStack_108 = 0x10a10ae00;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar7 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar7 + 8) == 0xc) {
          return (ulong *)**(undefined8 **)((long)ppuVar7 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_140;
  uStack_128 = 0x10a10ae90;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (ulong *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_160;
  uStack_148 = 0x10a10af1c;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar7 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar7 + 8) == 8) {
          return (ulong *)**(undefined8 **)((long)ppuVar7 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_180;
  uStack_168 = 0x10a10afa8;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (ulong *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1a0;
  uStack_188 = 0x10a10b038;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)ppuVar7 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar7 + 8) == 0x10) {
          return (ulong *)**(undefined8 **)((long)ppuVar7 + 0x10);
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_1c0;
  uStack_1a8 = 0x10a10b0c4;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (*(uint **)((long)ppuVar6 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar6 + 8) == 4) {
          return (ulong *)(ulong)**(uint **)((long)ppuVar6 + 0x10);
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar6 = &puStack_1e0;
  uStack_1c8 = 0x10a10b150;
  pppuStack_1f0 = &pppuStack_1d0;
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 0xc) {
        if ((int)puVar5[1] == 0x10) {
          return (ulong *)ppuVar7;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_200;
  uStack_1e8 = 0x10a10b1e0;
  pppuStack_210 = &pppuStack_1f0;
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x21) {
        if ((int)ppuVar6[1] == 0x20) {
          return (ulong *)ppuVar6;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_200);
  ppuVar6 = &puStack_220;
  uStack_208 = 0x10a10b270;
  pppuStack_230 = &pppuStack_210;
  puVar9 = (undefined8 *)puVar5[2];
  puStack_220 = &UNK_10f63cc79;
  uStack_218 = 0x12;
  if (puVar9 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
    }
    else {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 0xb) {
        if ((int)puVar5[1] == 0x40) {
          uVar11 = *puVar9;
          uVar13 = puVar9[3];
          uVar12 = puVar9[2];
          extraout_x8[1] = puVar9[1];
          *extraout_x8 = uVar11;
          extraout_x8[3] = uVar13;
          extraout_x8[2] = uVar12;
          uVar11 = puVar9[4];
          uVar13 = puVar9[7];
          uVar12 = puVar9[6];
          extraout_x8[5] = puVar9[5];
          extraout_x8[4] = uVar11;
          extraout_x8[7] = uVar13;
          extraout_x8[6] = uVar12;
          return (ulong *)ppuVar7;
        }
        puStack_220 = &UNK_10f63ccae;
        uStack_218 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_220);
  ppuVar7 = &puStack_240;
  uStack_228 = 0x10a10b308;
  pppuStack_250 = &pppuStack_230;
  puStack_240 = &UNK_10f63cc79;
  uStack_238 = 0x12;
  if (puVar5[2] != 0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_240 = &UNK_10f63cc8c;
      uStack_238 = 0x21;
    }
    else {
      puStack_240 = &UNK_10f63cc8c;
      uStack_238 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 0x16) {
        if ((int)puVar5[1] == 0x10) {
          return (ulong *)ppuVar6;
        }
        puStack_240 = &UNK_10f63ccae;
        uStack_238 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_240);
  ppuVar6 = &puStack_260;
  uStack_248 = 0x10a10b398;
  puVar9 = (undefined8 *)puVar5[2];
  puStack_260 = &UNK_10f63cc79;
  uStack_258 = 0x12;
  if (puVar9 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar5 + 0xc) == 0x18) {
      puStack_260 = &UNK_10f63cc8c;
      uStack_258 = 0x21;
    }
    else {
      puStack_260 = &UNK_10f63cc8c;
      uStack_258 = 0x21;
      if (*(short *)((long)puVar5 + 0xc) == 10) {
        if ((int)puVar5[1] == 0x24) {
          uVar11 = *puVar9;
          uVar13 = puVar9[3];
          uVar12 = puVar9[2];
          extraout_x8_00[1] = puVar9[1];
          *extraout_x8_00 = uVar11;
          extraout_x8_00[3] = uVar13;
          extraout_x8_00[2] = uVar12;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar9 + 4);
          return (ulong *)ppuVar7;
        }
        puStack_260 = &UNK_10f63ccae;
        uStack_258 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  uVar8 = (ulong)*ppuVar6;
  *ppuVar6 = (undefined *)0x0;
  if (uVar8 != 0) {
    __ZdlPv();
  }
  return (ulong *)ppuVar6;
}



/* Entry: 10a0f786c; end: 10a0f78b7;  */

long * FUN_10a0f786c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  FUN_10a0f70fc();
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar1[2] != 0) && (*(short *)((long)plVar1 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar1 + 0xc) == 5)) && ((int)plVar1[1] == 8)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  puStack_50 = &stack0xffffffffffffffd0;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 7) {
        if ((int)plVar1[1] == 8) {
          return plVar2;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10abc4;
  ppuStack_70 = &puStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 8) {
        if ((int)plVar1[1] == 0xc) {
          return (long *)ppuVar3;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10ac54;
  pppuStack_90 = &ppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10ace4;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 9) {
        if ((int)plVar1[1] == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10ad74;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10ae00;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_100;
  uStack_e8 = 0x10a10ae90;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_120;
  uStack_108 = 0x10a10af1c;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_140;
  uStack_128 = 0x10a10afa8;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_160;
  uStack_148 = 0x10a10b038;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_180;
  uStack_168 = 0x10a10b0c4;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar4 = &puStack_1a0;
  uStack_188 = 0x10a10b150;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 0xc) {
        if ((int)plVar1[1] == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1c0;
  uStack_1a8 = 0x10a10b1e0;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar4 = &puStack_1e0;
  uStack_1c8 = 0x10a10b270;
  pppuStack_1f0 = &pppuStack_1d0;
  puVar6 = (undefined8 *)plVar1[2];
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 0xb) {
        if ((int)plVar1[1] == 0x40) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8[1] = puVar6[1];
          *extraout_x8 = uVar7;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar8;
          uVar7 = puVar6[4];
          uVar9 = puVar6[7];
          uVar8 = puVar6[6];
          extraout_x8[5] = puVar6[5];
          extraout_x8[4] = uVar7;
          extraout_x8[7] = uVar9;
          extraout_x8[6] = uVar8;
          return (long *)ppuVar3;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar3 = &puStack_200;
  uStack_1e8 = 0x10a10b308;
  pppuStack_210 = &pppuStack_1f0;
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 0x16) {
        if ((int)plVar1[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_200);
  ppuVar4 = &puStack_220;
  uStack_208 = 0x10a10b398;
  puVar6 = (undefined8 *)plVar1[2];
  puStack_220 = &UNK_10f63cc79;
  uStack_218 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
    }
    else {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 10) {
        if ((int)plVar1[1] == 0x24) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8_00[1] = puVar6[1];
          *extraout_x8_00 = uVar7;
          extraout_x8_00[3] = uVar9;
          extraout_x8_00[2] = uVar8;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar6 + 4);
          return (long *)ppuVar3;
        }
        puStack_220 = &UNK_10f63ccae;
        uStack_218 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f78b8; end: 10a0f7bf3;  */

long * FUN_10a0f78b8(long param_1,long param_2,long *param_3)

{
  short sVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    return param_3;
  }
  ppuVar3 = &puStack_30;
  puStack_30 = &UNK_10f63cc79;
  uStack_28 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    lVar2 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_30 = &UNK_10f63cc8c;
      uStack_28 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(param_1 + 8) == 4) {
      FUN_10a0f7058();
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
      if (lVar2 == 4) {
        return (long *)(ulong)**(uint **)(param_1 + 0x10);
      }
    }
    else {
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_30);
  ppuVar4 = &puStack_50;
  pcStack_38 = FUN_10a10aaac;
  ppuStack_60 = &puStack_40;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
    }
    else {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (*(short *)(param_2 + 0xc) == 5) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar3;
        }
        puStack_50 = &UNK_10f63ccae;
        uStack_48 = 0x11;
      }
    }
  }
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_50);
  ppuVar3 = &puStack_70;
  uStack_58 = 0x10a10ab38;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)(param_2 + 0xc) == 7) {
        if (*(int *)(param_2 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_70);
  ppuVar4 = &puStack_90;
  uStack_78 = 0x10a10abc4;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_2 + 0xc) == 8) {
        if (*(int *)(param_2 + 8) == 0xc) {
          return (long *)ppuVar3;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_b0;
  uStack_98 = 0x10a10ac54;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
  ppuVar4 = &puStack_d0;
  uStack_b8 = 0x10a10ace4;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 9) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_f0;
  uStack_d8 = 0x10a10ad74;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_110;
  uStack_f8 = 0x10a10ae00;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_130;
  uStack_118 = 0x10a10ae90;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_150;
  uStack_138 = 0x10a10af1c;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_170;
  uStack_158 = 0x10a10afa8;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_190;
  uStack_178 = 0x10a10b038;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1b0;
  uStack_198 = 0x10a10b0c4;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1b0);
  ppuVar4 = &puStack_1d0;
  uStack_1b8 = 0x10a10b150;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xc) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1f0;
  uStack_1d8 = 0x10a10b1e0;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1f0);
  ppuVar4 = &puStack_210;
  uStack_1f8 = 0x10a10b270;
  pppuStack_220 = &pppuStack_200;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0xb) {
        if (*(int *)(param_2 + 8) == 0x40) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8[1] = puVar5[1];
          *extraout_x8 = uVar6;
          extraout_x8[3] = uVar8;
          extraout_x8[2] = uVar7;
          uVar6 = puVar5[4];
          uVar8 = puVar5[7];
          uVar7 = puVar5[6];
          extraout_x8[5] = puVar5[5];
          extraout_x8[4] = uVar6;
          extraout_x8[7] = uVar8;
          extraout_x8[6] = uVar7;
          return (long *)ppuVar3;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar3 = &puStack_230;
  uStack_218 = 0x10a10b308;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_2 + 0xc) == 0x16) {
        if (*(int *)(param_2 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar4 = &puStack_250;
  uStack_238 = 0x10a10b398;
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar5 != (undefined8 *)0x0) {
    if (*(short *)(param_2 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_2 + 0xc) == 10) {
        if (*(int *)(param_2 + 8) == 0x24) {
          uVar6 = *puVar5;
          uVar8 = puVar5[3];
          uVar7 = puVar5[2];
          extraout_x8_00[1] = puVar5[1];
          *extraout_x8_00 = uVar6;
          extraout_x8_00[3] = uVar8;
          extraout_x8_00[2] = uVar7;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar5 + 4);
          return (long *)ppuVar3;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar2 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f7bf4; end: 10a0f7c6b;  */

long * FUN_10a0f7bf4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0x3f80000000000000;
  param_1[5] = 0x3f800000;
  param_1[4] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[6] = 0;
  plVar1 = param_2;
  FUN_10a0f70fc();
  if (plVar1 == (long *)0x0) {
    uVar7 = *param_4;
    uVar9 = param_4[3];
    uVar8 = param_4[2];
    param_1[1] = param_4[1];
    *param_1 = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    uVar7 = param_4[4];
    uVar9 = param_4[7];
    uVar8 = param_4[6];
    param_1[5] = param_4[5];
    param_1[4] = uVar7;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    return (long *)0x0;
  }
  plVar2 = (long *)&stack0xffffffffffffffe0;
  puVar6 = (undefined8 *)plVar1[2];
  if ((((puVar6 != (undefined8 *)0x0) && (*(short *)((long)plVar1 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar1 + 0xc) == 0xb)) && ((int)plVar1[1] == 0x40)) {
    uVar7 = *puVar6;
    uVar9 = puVar6[3];
    uVar8 = puVar6[2];
    param_1[1] = puVar6[1];
    *param_1 = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    uVar7 = puVar6[4];
    uVar9 = puVar6[7];
    uVar8 = puVar6[6];
    param_1[5] = puVar6[5];
    param_1[4] = uVar7;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    return param_2;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  puStack_50 = &stack0xffffffffffffffd0;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar1[2] != 0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 0x16) {
        if ((int)plVar1[1] == 0x10) {
          return plVar2;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10b398;
  puVar6 = (undefined8 *)plVar1[2];
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar1 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar1 + 0xc) == 10) {
        if ((int)plVar1[1] == 0x24) {
          uVar7 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          extraout_x8[1] = puVar6[1];
          *extraout_x8 = uVar7;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar8;
          *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar6 + 4);
          return (long *)ppuVar3;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f7c6c; end: 10a0f7cab;  */

void FUN_10a0f7c6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a0f70fc();
  if (lVar1 != 0) {
    func_0x00010a10b308(param_1,lVar1);
  }
  return;
}



/* Entry: 10a0f7cac; end: 10a0f7d23;  */

long * FUN_10a0f7cac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0x3f800000;
  plVar1 = param_2;
  FUN_10a0f70fc();
  if (plVar1 == (long *)0x0) {
    uVar5 = *param_4;
    uVar7 = param_4[3];
    uVar6 = param_4[2];
    param_1[1] = param_4[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
    return (long *)0x0;
  }
  plVar2 = (long *)&stack0xffffffffffffffe0;
  puVar4 = (undefined8 *)plVar1[2];
  if ((((puVar4 != (undefined8 *)0x0) && (*(short *)((long)plVar1 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar1 + 0xc) == 10)) && ((int)plVar1[1] == 0x24)) {
    uVar5 = *puVar4;
    uVar7 = puVar4[3];
    uVar6 = puVar4[2];
    param_1[1] = puVar4[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar4 + 4);
    return param_2;
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a0f7d24; end: 10a0f7e07;  */

long * FUN_10a0f7d24(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  puVar9 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    uStack_40 = *param_2;
    FUN_10a0ee900(&puStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7dc4);
    (*pcVar2)();
  }
  puStack_38 = &UNK_10f63cc79;
  uStack_30 = 0x12;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_38 = &UNK_10f63cc8c;
      uStack_30 = 0x21;
    }
    else {
      puStack_38 = &UNK_10f63cc8c;
      uStack_30 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x10) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)**(undefined8 **)(param_1 + 0x10);
        }
        puStack_38 = &UNK_10f63ccae;
        uStack_30 = 0x11;
      }
    }
  }
  ppuVar3 = &puStack_38;
  FUN_10a0edfc4();
  if (cStack_21 < '\0') {
    __ZdlPv(puStack_38);
  }
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_48 = FUN_10a0f7e08;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a0f70fc();
  if (ppuVar4 == (undefined **)0x0) {
    puStack_80 = (undefined *)*puVar9;
    FUN_10a0ee900(&uStack_78,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_78);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7e6c);
    (*pcVar2)();
  }
  plVar5 = (long *)&stack0xffffffffffffffa0;
  if (((((uint *)ppuVar4[2] != (uint *)0x0) && (*(short *)((long)ppuVar4 + 0xc) != 0x18)) &&
      (*(short *)((long)ppuVar4 + 0xc) == 2)) && (*(int *)(ppuVar4 + 1) == 4)) {
    return (long *)(ulong)*(uint *)ppuVar4[2];
  }
  FUN_10a0edfc4();
  uStack_68 = 0x10a10a8ec;
  pppuStack_90 = &ppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (plVar5[2] != 0) {
    if (*(short *)((long)plVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)plVar5 + 0xc) == 3) {
        if ((int)plVar5[1] == 4) {
          return plVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  ppuStack_70 = &puStack_50;
  FUN_10a0edfc4(&puStack_80);
  ppuVar6 = &puStack_a0;
  uStack_88 = 0x10a10a978;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (ppuVar4[2] != (byte *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 1) {
        if (*(int *)(ppuVar4 + 1) == 1) {
          return (long *)(ulong)(byte)*ppuVar4[2];
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar8 = &puStack_d0;
  pcStack_a8 = FUN_10a10aa04;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  ppuStack_b8 = ppuVar3;
  if (*(long *)((long)ppuVar6 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar6 + 0xc);
    lVar7 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar6 + 8) == 4) {
      FUN_10a0f7058();
      puStack_d0 = &UNK_10f63ccae;
      uStack_c8 = 0x11;
      if (lVar7 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar6 + 0x10);
      }
    }
    else {
      puStack_d0 = &UNK_10f63ccae;
      uStack_c8 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_d0);
  ppuVar3 = &puStack_f0;
  pcStack_d8 = FUN_10a10aaac;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 5) {
        if (*(int *)(ppuVar4 + 1) == 8) {
          return (long *)ppuVar8;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  pppuStack_e0 = &pppuStack_b0;
  FUN_10a0edfc4(&puStack_f0);
  ppuVar6 = &puStack_110;
  uStack_f8 = 0x10a10ab38;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 7) {
        if (*(int *)(ppuVar4 + 1) == 8) {
          return (long *)ppuVar3;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_110);
  ppuVar3 = &puStack_130;
  uStack_118 = 0x10a10abc4;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 8) {
        if (*(int *)(ppuVar4 + 1) == 0xc) {
          return (long *)ppuVar6;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_150;
  uStack_138 = 0x10a10ac54;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x20) {
        if ((int)ppuVar3[1] == 0x18) {
          return (long *)ppuVar3;
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_150);
  ppuVar3 = &puStack_170;
  uStack_158 = 0x10a10ace4;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 9) {
        if (*(int *)(ppuVar4 + 1) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_190;
  uStack_178 = 0x10a10ad74;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1b0;
  uStack_198 = 0x10a10ae00;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1d0;
  uStack_1b8 = 0x10a10ae90;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1f0;
  uStack_1d8 = 0x10a10af1c;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_210;
  uStack_1f8 = 0x10a10afa8;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_230;
  uStack_218 = 0x10a10b038;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_250;
  uStack_238 = 0x10a10b0c4;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar3 = &puStack_270;
  uStack_258 = 0x10a10b150;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0xc) {
        if (*(int *)(ppuVar4 + 1) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_290;
  uStack_278 = 0x10a10b1e0;
  pppuStack_2a0 = &pppuStack_280;
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar3 = &puStack_2b0;
  uStack_298 = 0x10a10b270;
  pppuStack_2c0 = &pppuStack_2a0;
  puVar9 = (undefined8 *)ppuVar4[2];
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (puVar9 != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0xb) {
        if (*(int *)(ppuVar4 + 1) == 0x40) {
          uVar10 = *puVar9;
          uVar12 = puVar9[3];
          uVar11 = puVar9[2];
          extraout_x8[1] = puVar9[1];
          *extraout_x8 = uVar10;
          extraout_x8[3] = uVar12;
          extraout_x8[2] = uVar11;
          uVar10 = puVar9[4];
          uVar12 = puVar9[7];
          uVar11 = puVar9[6];
          extraout_x8[5] = puVar9[5];
          extraout_x8[4] = uVar10;
          extraout_x8[7] = uVar12;
          extraout_x8[6] = uVar11;
          return (long *)ppuVar6;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2b0);
  ppuVar6 = &puStack_2d0;
  uStack_2b8 = 0x10a10b308;
  pppuStack_2e0 = &pppuStack_2c0;
  puStack_2d0 = &UNK_10f63cc79;
  uStack_2c8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
    }
    else {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x16) {
        if (*(int *)(ppuVar4 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_2d0 = &UNK_10f63ccae;
        uStack_2c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2d0);
  ppuVar3 = &puStack_2f0;
  uStack_2d8 = 0x10a10b398;
  puVar9 = (undefined8 *)ppuVar4[2];
  puStack_2f0 = &UNK_10f63cc79;
  uStack_2e8 = 0x12;
  if (puVar9 != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_2f0 = &UNK_10f63cc8c;
      uStack_2e8 = 0x21;
    }
    else {
      puStack_2f0 = &UNK_10f63cc8c;
      uStack_2e8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 10) {
        if (*(int *)(ppuVar4 + 1) == 0x24) {
          uVar10 = *puVar9;
          uVar12 = puVar9[3];
          uVar11 = puVar9[2];
          extraout_x8_00[1] = puVar9[1];
          *extraout_x8_00 = uVar10;
          extraout_x8_00[3] = uVar12;
          extraout_x8_00[2] = uVar11;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar9 + 4);
          return (long *)ppuVar6;
        }
        puStack_2f0 = &UNK_10f63ccae;
        uStack_2e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar7 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar7 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f7e08; end: 10a0f7e0b;  */

long * FUN_10a0f7e08(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7e6c);
    (*pcVar2)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((*(uint **)(param_1 + 0x10) != (uint *)0x0) && (*(short *)(param_1 + 0xc) != 0x18)) &&
      (*(short *)(param_1 + 0xc) == 2)) && (*(int *)(param_1 + 8) == 4)) {
    return (long *)(ulong)**(uint **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  uStack_28 = 0x10a10a8ec;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 3) {
        if ((int)plVar3[1] == 4) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10a978;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(byte **)(param_1 + 0x10) != (byte *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)(param_1 + 0xc) == 1) {
        if (*(int *)(param_1 + 8) == 1) {
          return (long *)(ulong)**(byte **)(param_1 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_90;
  pcStack_68 = FUN_10a10aa04;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)((long)ppuVar4 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar4 + 0xc);
    lVar5 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar4 + 8) == 4) {
      FUN_10a0f7058();
      puStack_90 = &UNK_10f63ccae;
      uStack_88 = 0x11;
      if (lVar5 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
      }
    }
    else {
      puStack_90 = &UNK_10f63ccae;
      uStack_88 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_90);
  ppuVar4 = &puStack_b0;
  pcStack_98 = FUN_10a10aaac;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 5) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar6;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  pppuStack_a0 = &pppuStack_70;
  FUN_10a0edfc4(&puStack_b0);
  ppuVar6 = &puStack_d0;
  uStack_b8 = 0x10a10ab38;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 7) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_d0);
  ppuVar4 = &puStack_f0;
  uStack_d8 = 0x10a10abc4;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 8) {
        if (*(int *)(param_1 + 8) == 0xc) {
          return (long *)ppuVar6;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_110;
  uStack_f8 = 0x10a10ac54;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_110);
  ppuVar4 = &puStack_130;
  uStack_118 = 0x10a10ace4;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)(param_1 + 0xc) == 9) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_150;
  uStack_138 = 0x10a10ad74;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_170;
  uStack_158 = 0x10a10ae00;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_190;
  uStack_178 = 0x10a10ae90;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1b0;
  uStack_198 = 0x10a10af1c;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1d0;
  uStack_1b8 = 0x10a10afa8;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1f0;
  uStack_1d8 = 0x10a10b038;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_210;
  uStack_1f8 = 0x10a10b0c4;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar4 = &puStack_230;
  uStack_218 = 0x10a10b150;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xc) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_250;
  uStack_238 = 0x10a10b1e0;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar4 = &puStack_270;
  uStack_258 = 0x10a10b270;
  pppuStack_280 = &pppuStack_260;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xb) {
        if (*(int *)(param_1 + 8) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar6;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar6 = &puStack_290;
  uStack_278 = 0x10a10b308;
  pppuStack_2a0 = &pppuStack_280;
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x16) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar4 = &puStack_2b0;
  uStack_298 = 0x10a10b398;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 10) {
        if (*(int *)(param_1 + 8) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar6;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f7e0c; end: 10a0f7e87;  */

long * FUN_10a0f7e0c(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7e6c);
    (*pcVar2)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((*(uint **)(param_1 + 0x10) != (uint *)0x0) && (*(short *)(param_1 + 0xc) != 0x18)) &&
      (*(short *)(param_1 + 0xc) == 2)) && (*(int *)(param_1 + 8) == 4)) {
    return (long *)(ulong)**(uint **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  uStack_28 = 0x10a10a8ec;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 3) {
        if ((int)plVar3[1] == 4) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10a978;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(byte **)(param_1 + 0x10) != (byte *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)(param_1 + 0xc) == 1) {
        if (*(int *)(param_1 + 8) == 1) {
          return (long *)(ulong)**(byte **)(param_1 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_90;
  pcStack_68 = FUN_10a10aa04;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)((long)ppuVar4 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar4 + 0xc);
    lVar5 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar4 + 8) == 4) {
      FUN_10a0f7058();
      puStack_90 = &UNK_10f63ccae;
      uStack_88 = 0x11;
      if (lVar5 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
      }
    }
    else {
      puStack_90 = &UNK_10f63ccae;
      uStack_88 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_90);
  ppuVar4 = &puStack_b0;
  pcStack_98 = FUN_10a10aaac;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 5) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar6;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  pppuStack_a0 = &pppuStack_70;
  FUN_10a0edfc4(&puStack_b0);
  ppuVar6 = &puStack_d0;
  uStack_b8 = 0x10a10ab38;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 7) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar4;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_d0);
  ppuVar4 = &puStack_f0;
  uStack_d8 = 0x10a10abc4;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 8) {
        if (*(int *)(param_1 + 8) == 0xc) {
          return (long *)ppuVar6;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_110;
  uStack_f8 = 0x10a10ac54;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_110);
  ppuVar4 = &puStack_130;
  uStack_118 = 0x10a10ace4;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)(param_1 + 0xc) == 9) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_150;
  uStack_138 = 0x10a10ad74;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_170;
  uStack_158 = 0x10a10ae00;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_190;
  uStack_178 = 0x10a10ae90;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1b0;
  uStack_198 = 0x10a10af1c;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1d0;
  uStack_1b8 = 0x10a10afa8;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1f0;
  uStack_1d8 = 0x10a10b038;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_210;
  uStack_1f8 = 0x10a10b0c4;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar4 = &puStack_230;
  uStack_218 = 0x10a10b150;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xc) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_250;
  uStack_238 = 0x10a10b1e0;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar4 = &puStack_270;
  uStack_258 = 0x10a10b270;
  pppuStack_280 = &pppuStack_260;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xb) {
        if (*(int *)(param_1 + 8) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar6;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar6 = &puStack_290;
  uStack_278 = 0x10a10b308;
  pppuStack_2a0 = &pppuStack_280;
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x16) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar4 = &puStack_2b0;
  uStack_298 = 0x10a10b398;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 10) {
        if (*(int *)(param_1 + 8) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar6;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f7e88; end: 10a0f7ef7;  */

long * FUN_10a0f7e88(long *param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7edc);
    (*pcVar2)();
  }
  if ((((param_1[2] != 0) && (*(short *)((long)param_1 + 0xc) != 0x18)) &&
      (*(short *)((long)param_1 + 0xc) == 3)) && ((int)param_1[1] == 4)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10a978;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if ((byte *)puVar6[2] != (byte *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 1) {
        if (*(int *)(puVar6 + 1) == 1) {
          return (long *)(ulong)*(byte *)puVar6[2];
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar5 = &puStack_70;
  pcStack_48 = FUN_10a10aa04;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)((long)ppuVar3 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar3 + 0xc);
    lVar4 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar3 + 8) == 4) {
      FUN_10a0f7058();
      puStack_70 = &UNK_10f63ccae;
      uStack_68 = 0x11;
      if (lVar4 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
      }
    }
    else {
      puStack_70 = &UNK_10f63ccae;
      uStack_68 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_70);
  ppuVar3 = &puStack_90;
  pcStack_78 = FUN_10a10aaac;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 5) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar5;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  pppuStack_80 = &ppuStack_50;
  FUN_10a0edfc4(&puStack_90);
  ppuVar5 = &puStack_b0;
  uStack_98 = 0x10a10ab38;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 7) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar3;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
  ppuVar3 = &puStack_d0;
  uStack_b8 = 0x10a10abc4;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 8) {
        if (*(int *)(puVar6 + 1) == 0xc) {
          return (long *)ppuVar5;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_f0;
  uStack_d8 = 0x10a10ac54;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x20) {
        if ((int)ppuVar3[1] == 0x18) {
          return (long *)ppuVar3;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_f0);
  ppuVar3 = &puStack_110;
  uStack_f8 = 0x10a10ace4;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 9) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_130;
  uStack_118 = 0x10a10ad74;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_150;
  uStack_138 = 0x10a10ae00;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_170;
  uStack_158 = 0x10a10ae90;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_190;
  uStack_178 = 0x10a10af1c;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1b0;
  uStack_198 = 0x10a10afa8;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1d0;
  uStack_1b8 = 0x10a10b038;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1f0;
  uStack_1d8 = 0x10a10b0c4;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1f0);
  ppuVar3 = &puStack_210;
  uStack_1f8 = 0x10a10b150;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_230;
  uStack_218 = 0x10a10b1e0;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar3 = &puStack_250;
  uStack_238 = 0x10a10b270;
  pppuStack_260 = &pppuStack_240;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar5 = &puStack_270;
  uStack_258 = 0x10a10b308;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar3 = &puStack_290;
  uStack_278 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f7ef8; end: 10a0f7efb;  */

long * FUN_10a0f7ef8(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    uStack_40 = *param_2;
    FUN_10a0ee900(auStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7f5c);
    (*pcVar2)();
  }
  puVar3 = &stack0xffffffffffffffe0;
  if ((((*(byte **)(param_1 + 0x10) != (byte *)0x0) && (*(short *)(param_1 + 0xc) != 0x18)) &&
      (*(short *)(param_1 + 0xc) == 1)) && (*(int *)(param_1 + 8) == 1)) {
    return (long *)(ulong)**(byte **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_50;
  pcStack_28 = FUN_10a10aa04;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar3 + 0x10) != 0) {
    sVar1 = *(short *)(puVar3 + 0xc);
    lVar4 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(puVar3 + 8) == 4) {
      FUN_10a0f7058();
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
      if (lVar4 == 4) {
        return (long *)(ulong)**(uint **)(puVar3 + 0x10);
      }
    }
    else {
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_50);
  ppuVar6 = &puStack_70;
  pcStack_58 = FUN_10a10aaac;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)(param_1 + 0xc) == 5) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar5;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  ppuStack_60 = &puStack_30;
  FUN_10a0edfc4(&puStack_70);
  ppuVar5 = &puStack_90;
  uStack_78 = 0x10a10ab38;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_1 + 0xc) == 7) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar6;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_90);
  ppuVar6 = &puStack_b0;
  uStack_98 = 0x10a10abc4;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 8) {
        if (*(int *)(param_1 + 8) == 0xc) {
          return (long *)ppuVar5;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_d0;
  uStack_b8 = 0x10a10ac54;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x20) {
        if ((int)ppuVar6[1] == 0x18) {
          return (long *)ppuVar6;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_d0);
  ppuVar6 = &puStack_f0;
  uStack_d8 = 0x10a10ace4;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 9) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_110;
  uStack_f8 = 0x10a10ad74;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_130;
  uStack_118 = 0x10a10ae00;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_150;
  uStack_138 = 0x10a10ae90;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_170;
  uStack_158 = 0x10a10af1c;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_190;
  uStack_178 = 0x10a10afa8;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1b0;
  uStack_198 = 0x10a10b038;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1d0;
  uStack_1b8 = 0x10a10b0c4;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(uint **)((long)ppuVar6 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar6 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar6 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1d0);
  ppuVar6 = &puStack_1f0;
  uStack_1d8 = 0x10a10b150;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xc) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_210;
  uStack_1f8 = 0x10a10b1e0;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x21) {
        if ((int)ppuVar6[1] == 0x20) {
          return (long *)ppuVar6;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar6 = &puStack_230;
  uStack_218 = 0x10a10b270;
  pppuStack_240 = &pppuStack_220;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xb) {
        if (*(int *)(param_1 + 8) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar5 = &puStack_250;
  uStack_238 = 0x10a10b308;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x16) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar6 = &puStack_270;
  uStack_258 = 0x10a10b398;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_1 + 0xc) == 10) {
        if (*(int *)(param_1 + 8) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = (long)*ppuVar6;
  *ppuVar6 = (undefined *)0x0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar6;
}



/* Entry: 10a0f7efc; end: 10a0f7f77;  */

long * FUN_10a0f7efc(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_10a0f70fc();
  if (param_1 == 0) {
    uStack_40 = *param_2;
    FUN_10a0ee900(auStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f7f5c);
    (*pcVar2)();
  }
  puVar3 = &stack0xffffffffffffffe0;
  if ((((*(byte **)(param_1 + 0x10) != (byte *)0x0) && (*(short *)(param_1 + 0xc) != 0x18)) &&
      (*(short *)(param_1 + 0xc) == 1)) && (*(int *)(param_1 + 8) == 1)) {
    return (long *)(ulong)**(byte **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_50;
  pcStack_28 = FUN_10a10aa04;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar3 + 0x10) != 0) {
    sVar1 = *(short *)(puVar3 + 0xc);
    lVar4 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(puVar3 + 8) == 4) {
      FUN_10a0f7058();
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
      if (lVar4 == 4) {
        return (long *)(ulong)**(uint **)(puVar3 + 0x10);
      }
    }
    else {
      puStack_50 = &UNK_10f63ccae;
      uStack_48 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_50);
  ppuVar6 = &puStack_70;
  pcStack_58 = FUN_10a10aaac;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)(param_1 + 0xc) == 5) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar5;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  ppuStack_60 = &puStack_30;
  FUN_10a0edfc4(&puStack_70);
  ppuVar5 = &puStack_90;
  uStack_78 = 0x10a10ab38;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)(param_1 + 0xc) == 7) {
        if (*(int *)(param_1 + 8) == 8) {
          return (long *)ppuVar6;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_90);
  ppuVar6 = &puStack_b0;
  uStack_98 = 0x10a10abc4;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 8) {
        if (*(int *)(param_1 + 8) == 0xc) {
          return (long *)ppuVar5;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_d0;
  uStack_b8 = 0x10a10ac54;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x20) {
        if ((int)ppuVar6[1] == 0x18) {
          return (long *)ppuVar6;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_d0);
  ppuVar6 = &puStack_f0;
  uStack_d8 = 0x10a10ace4;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 9) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_110;
  uStack_f8 = 0x10a10ad74;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar6 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_130;
  uStack_118 = 0x10a10ae00;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_150;
  uStack_138 = 0x10a10ae90;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar6 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_170;
  uStack_158 = 0x10a10af1c;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_190;
  uStack_178 = 0x10a10afa8;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar6 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar6 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar6 = &puStack_1b0;
  uStack_198 = 0x10a10b038;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1d0;
  uStack_1b8 = 0x10a10b0c4;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(uint **)((long)ppuVar6 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar6 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar6 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1d0);
  ppuVar6 = &puStack_1f0;
  uStack_1d8 = 0x10a10b150;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xc) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_210;
  uStack_1f8 = 0x10a10b1e0;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (ppuVar6[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar6 + 0xc) == 0x21) {
        if ((int)ppuVar6[1] == 0x20) {
          return (long *)ppuVar6;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar6 = &puStack_230;
  uStack_218 = 0x10a10b270;
  pppuStack_240 = &pppuStack_220;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0xb) {
        if (*(int *)(param_1 + 8) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar5 = &puStack_250;
  uStack_238 = 0x10a10b308;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)(param_1 + 0xc) == 0x16) {
        if (*(int *)(param_1 + 8) == 0x10) {
          return (long *)ppuVar6;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_250);
  ppuVar6 = &puStack_270;
  uStack_258 = 0x10a10b398;
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)(param_1 + 0xc) == 10) {
        if (*(int *)(param_1 + 8) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = (long)*ppuVar6;
  *ppuVar6 = (undefined *)0x0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar6;
}



/* Entry: 10a0f7f78; end: 10a0f7f7b;  */

long ****** FUN_10a0f7f78(ulong param_1,long *****param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long ******pppppplVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 uStack_2a8;
  long ****pppplStack_2a0;
  undefined8 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 uStack_288;
  long ****pppplStack_280;
  undefined8 uStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 uStack_268;
  long ****pppplStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  undefined8 uStack_238;
  undefined8 *****pppppuStack_230;
  undefined8 uStack_228;
  long ****pppplStack_220;
  undefined8 uStack_218;
  undefined8 *****pppppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *****pppppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 uStack_128;
  long ****pppplStack_120;
  undefined8 uStack_118;
  undefined1 *****pppppuStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  undefined8 uStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  long ****pppplStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *****ppppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  long ***ppplStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  uVar3 = param_1;
  ppppplVar9 = param_2;
  FUN_10a0f70fc();
  if (uVar3 == 0) {
    ppplStack_40 = (long ***)*param_2;
    FUN_10a0ee900(&puStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_38);
LAB_10a0f8068:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f806c);
    (*pcVar2)();
  }
  if (*(uint *)(param_1 + 0x98) < 2) {
    puStack_38 = &UNK_10f63ccc0;
    uStack_30 = 0xe;
    if (*(short *)(uVar3 + 0xc) == 4) {
      if (-1 < **(int **)(uVar3 + 0x10)) {
        return (long ******)(*(int **)(uVar3 + 0x10) + 1);
      }
      goto LAB_10a0f8068;
    }
LAB_10a0f806c:
    uStack_30 = 0xe;
    puStack_38 = &UNK_10f63ccc0;
    FUN_10a0edfc4(&puStack_38);
  }
  else {
    puStack_38 = &UNK_10f63ccc0;
    uStack_30 = 0xe;
    if (*(short *)(uVar3 + 0xc) != 0x18) goto LAB_10a0f806c;
    FUN_10a10aa04();
    if (((int)uVar3 != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x100) + 8),
       (uVar3 & 0xffffffff) <=
       (ulong)((*(long *)(*(long *)(param_1 + 0x100) + 0x10) - lVar1 >> 3) * -0x5555555555555555)))
    {
      pppppplVar4 = (long ******)(lVar1 + (ulong)((int)uVar3 - 1) * 0x18);
      if (*(char *)((long)pppppplVar4 + 0x17) < '\0') {
        pppppplVar4 = (long ******)*pppppplVar4;
      }
      return pppppplVar4;
    }
  }
  pppppplVar4 = (long ******)&UNK_10f63cccf;
  FUN_10a00946c();
  if (cStack_21 < '\0') {
    __ZdlPv(puStack_38);
  }
  __Unwind_Resume();
  pcStack_48 = FUN_10a0f809c;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a0f7f7c();
  if ((long *****)0x7ffffffffffffff7 < ppppplVar9) {
    func_0x000109ffde50();
    pcStack_a8 = FUN_10a0f8168;
    pppppplVar5 = pppppplVar4;
    pppplStack_c0 = (long ****)param_2;
    ppuStack_b0 = &puStack_50;
    FUN_10a0f70fc();
    if (pppppplVar5 == (long ******)0x0) {
      pppplStack_e0 = *ppppplVar9;
      FUN_10a0ee900(&uStack_d8,&UNK_10f63ccee,0x15);
      FUN_10a0029c0(&uStack_d8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f81cc);
      (*pcVar2)();
    }
    pppppplVar6 = (long ******)&pppplStack_c0;
    pppplStack_c0 = (long ****)&UNK_10f63cc79;
    uStack_b8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_c0 = (long ****)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
      }
      else {
        pppplStack_c0 = (long ****)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 5) {
          if (*(int *)(pppppplVar5 + 1) == 8) {
            return pppppplVar4;
          }
          pppplStack_c0 = (long ****)&UNK_10f63ccae;
          uStack_b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_c0);
    pppppplVar4 = (long ******)&pppplStack_e0;
    uStack_c8 = 0x10a10ab38;
    ppppuStack_f0 = &pppuStack_d0;
    pppplStack_e0 = (long ****)&UNK_10f63cc79;
    uStack_d8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_e0 = (long ****)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
      }
      else {
        pppplStack_e0 = (long ****)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 7) {
          if (*(int *)(pppppplVar5 + 1) == 8) {
            return pppppplVar6;
          }
          pppplStack_e0 = (long ****)&UNK_10f63ccae;
          uStack_d8 = 0x11;
        }
      }
    }
    pppuStack_d0 = &ppuStack_b0;
    FUN_10a0edfc4(&pppplStack_e0);
    pppppplVar6 = (long ******)&pppplStack_100;
    uStack_e8 = 0x10a10abc4;
    pppppuStack_110 = &ppppuStack_f0;
    pppplStack_100 = (long ****)&UNK_10f63cc79;
    uStack_f8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_100 = (long ****)&UNK_10f63cc8c;
        uStack_f8 = 0x21;
      }
      else {
        pppplStack_100 = (long ****)&UNK_10f63cc8c;
        uStack_f8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 8) {
          if (*(int *)(pppppplVar5 + 1) == 0xc) {
            return pppppplVar4;
          }
          pppplStack_100 = (long ****)&UNK_10f63ccae;
          uStack_f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_120;
    uStack_108 = 0x10a10ac54;
    pppppuStack_130 = &pppppuStack_110;
    pppplStack_120 = (long ****)&UNK_10f63cc79;
    uStack_118 = 0x12;
    if (pppppplVar6[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar6 + 0xc) == 0x18) {
        pppplStack_120 = (long ****)&UNK_10f63cc8c;
        uStack_118 = 0x21;
      }
      else {
        pppplStack_120 = (long ****)&UNK_10f63cc8c;
        uStack_118 = 0x21;
        if (*(short *)((long)pppppplVar6 + 0xc) == 0x20) {
          if (*(int *)(pppppplVar6 + 1) == 0x18) {
            return pppppplVar6;
          }
          pppplStack_120 = (long ****)&UNK_10f63ccae;
          uStack_118 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_120);
    ppuVar7 = &puStack_140;
    uStack_128 = 0x10a10ace4;
    pppppuStack_150 = &pppppuStack_130;
    puStack_140 = &UNK_10f63cc79;
    uStack_138 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
      }
      else {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 9) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar4;
          }
          puStack_140 = &UNK_10f63ccae;
          uStack_138 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_160;
    uStack_148 = 0x10a10ad74;
    pppppuStack_170 = &pppppuStack_150;
    puStack_160 = &UNK_10f63cc79;
    uStack_158 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
      }
      else {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x1f) {
          if (*(int *)((long)ppuVar7 + 8) == 8) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_160 = &UNK_10f63ccae;
          uStack_158 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_180;
    uStack_168 = 0x10a10ae00;
    pppppuStack_190 = &pppppuStack_170;
    puStack_180 = &UNK_10f63cc79;
    uStack_178 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
      }
      else {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x22) {
          if (*(int *)((long)ppuVar8 + 8) == 0xc) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_180 = &UNK_10f63ccae;
          uStack_178 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_1a0;
    uStack_188 = 0x10a10ae90;
    pppppuStack_1b0 = &pppppuStack_190;
    puStack_1a0 = &UNK_10f63cc79;
    uStack_198 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
      }
      else {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x23) {
          if (*(int *)((long)ppuVar7 + 8) == 0x10) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_1a0 = &UNK_10f63ccae;
          uStack_198 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_1c0;
    uStack_1a8 = 0x10a10af1c;
    pppppuStack_1d0 = &pppppuStack_1b0;
    puStack_1c0 = &UNK_10f63cc79;
    uStack_1b8 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
      }
      else {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x24) {
          if (*(int *)((long)ppuVar8 + 8) == 8) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_1c0 = &UNK_10f63ccae;
          uStack_1b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_1e0;
    uStack_1c8 = 0x10a10afa8;
    pppppuStack_1f0 = &pppppuStack_1d0;
    puStack_1e0 = &UNK_10f63cc79;
    uStack_1d8 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_1e0 = &UNK_10f63cc8c;
        uStack_1d8 = 0x21;
      }
      else {
        puStack_1e0 = &UNK_10f63cc8c;
        uStack_1d8 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x25) {
          if (*(int *)((long)ppuVar7 + 8) == 0xc) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_1e0 = &UNK_10f63ccae;
          uStack_1d8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_200;
    uStack_1e8 = 0x10a10b038;
    pppppuStack_210 = &pppppuStack_1f0;
    puStack_200 = &UNK_10f63cc79;
    uStack_1f8 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_200 = &UNK_10f63cc8c;
        uStack_1f8 = 0x21;
      }
      else {
        puStack_200 = &UNK_10f63cc8c;
        uStack_1f8 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x26) {
          if (*(int *)((long)ppuVar8 + 8) == 0x10) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_200 = &UNK_10f63ccae;
          uStack_1f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_220;
    uStack_208 = 0x10a10b0c4;
    pppppuStack_230 = &pppppuStack_210;
    pppplStack_220 = (long ****)&UNK_10f63cc79;
    uStack_218 = 0x12;
    if (*(uint **)((long)ppuVar7 + 0x10) != (uint *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        pppplStack_220 = (long ****)&UNK_10f63cc8c;
        uStack_218 = 0x21;
      }
      else {
        pppplStack_220 = (long ****)&UNK_10f63cc8c;
        uStack_218 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x17) {
          if (*(int *)((long)ppuVar7 + 8) == 4) {
            return (long ******)(ulong)**(uint **)((long)ppuVar7 + 0x10);
          }
          pppplStack_220 = (long ****)&UNK_10f63ccae;
          uStack_218 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_220);
    pppppplVar6 = (long ******)&pppplStack_240;
    uStack_228 = 0x10a10b150;
    pppppuStack_250 = &pppppuStack_230;
    pppplStack_240 = (long ****)&UNK_10f63cc79;
    uStack_238 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_240 = (long ****)&UNK_10f63cc8c;
        uStack_238 = 0x21;
      }
      else {
        pppplStack_240 = (long ****)&UNK_10f63cc8c;
        uStack_238 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0xc) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar4;
          }
          pppplStack_240 = (long ****)&UNK_10f63ccae;
          uStack_238 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_260;
    uStack_248 = 0x10a10b1e0;
    pppppuStack_270 = &pppppuStack_250;
    pppplStack_260 = (long ****)&UNK_10f63cc79;
    uStack_258 = 0x12;
    if (pppppplVar6[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar6 + 0xc) == 0x18) {
        pppplStack_260 = (long ****)&UNK_10f63cc8c;
        uStack_258 = 0x21;
      }
      else {
        pppplStack_260 = (long ****)&UNK_10f63cc8c;
        uStack_258 = 0x21;
        if (*(short *)((long)pppppplVar6 + 0xc) == 0x21) {
          if (*(int *)(pppppplVar6 + 1) == 0x20) {
            return pppppplVar6;
          }
          pppplStack_260 = (long ****)&UNK_10f63ccae;
          uStack_258 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_260);
    pppppplVar6 = (long ******)&pppplStack_280;
    uStack_268 = 0x10a10b270;
    pppppuStack_290 = &pppppuStack_270;
    ppppplVar9 = pppppplVar5[2];
    pppplStack_280 = (long ****)&UNK_10f63cc79;
    uStack_278 = 0x12;
    if (ppppplVar9 != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_280 = (long ****)&UNK_10f63cc8c;
        uStack_278 = 0x21;
      }
      else {
        pppplStack_280 = (long ****)&UNK_10f63cc8c;
        uStack_278 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0xb) {
          if (*(int *)(pppppplVar5 + 1) == 0x40) {
            pppplVar10 = *ppppplVar9;
            pppplVar12 = ppppplVar9[3];
            pppplVar11 = ppppplVar9[2];
            extraout_x8_00[1] = ppppplVar9[1];
            *extraout_x8_00 = pppplVar10;
            extraout_x8_00[3] = pppplVar12;
            extraout_x8_00[2] = pppplVar11;
            pppplVar10 = ppppplVar9[4];
            pppplVar12 = ppppplVar9[7];
            pppplVar11 = ppppplVar9[6];
            extraout_x8_00[5] = ppppplVar9[5];
            extraout_x8_00[4] = pppplVar10;
            extraout_x8_00[7] = pppplVar12;
            extraout_x8_00[6] = pppplVar11;
            return pppppplVar4;
          }
          pppplStack_280 = (long ****)&UNK_10f63ccae;
          uStack_278 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_280);
    pppppplVar4 = (long ******)&pppplStack_2a0;
    uStack_288 = 0x10a10b308;
    pppppuStack_2b0 = &pppppuStack_290;
    pppplStack_2a0 = (long ****)&UNK_10f63cc79;
    uStack_298 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_2a0 = (long ****)&UNK_10f63cc8c;
        uStack_298 = 0x21;
      }
      else {
        pppplStack_2a0 = (long ****)&UNK_10f63cc8c;
        uStack_298 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0x16) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar6;
          }
          pppplStack_2a0 = (long ****)&UNK_10f63ccae;
          uStack_298 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_2a0);
    pppppplVar6 = (long ******)&pppplStack_2c0;
    uStack_2a8 = 0x10a10b398;
    ppppplVar9 = pppppplVar5[2];
    pppplStack_2c0 = (long ****)&UNK_10f63cc79;
    uStack_2b8 = 0x12;
    if (ppppplVar9 != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_2c0 = (long ****)&UNK_10f63cc8c;
        uStack_2b8 = 0x21;
      }
      else {
        pppplStack_2c0 = (long ****)&UNK_10f63cc8c;
        uStack_2b8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 10) {
          if (*(int *)(pppppplVar5 + 1) == 0x24) {
            pppplVar10 = *ppppplVar9;
            pppplVar12 = ppppplVar9[3];
            pppplVar11 = ppppplVar9[2];
            extraout_x8_01[1] = ppppplVar9[1];
            *extraout_x8_01 = pppplVar10;
            extraout_x8_01[3] = pppplVar12;
            extraout_x8_01[2] = pppplVar11;
            *(undefined4 *)(extraout_x8_01 + 4) = *(undefined4 *)(ppppplVar9 + 4);
            return pppppplVar4;
          }
          pppplStack_2c0 = (long ****)&UNK_10f63ccae;
          uStack_2b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    func_0x00010a10b468();
    ppppplVar9 = *pppppplVar6;
    *pppppplVar6 = (long *****)0x0;
    if (ppppplVar9 != (long *****)0x0) {
      __ZdlPv();
    }
    return pppppplVar6;
  }
  if (ppppplVar9 < (long *****)0x17) {
    uStack_88 = CONCAT17((char)ppppplVar9,(undefined7)uStack_88);
    pppppplVar6 = &ppppplStack_98;
    if (ppppplVar9 == (long *****)0x0) goto LAB_10a0f8128;
  }
  else {
    pppppplVar5 = (long ******)0x19;
    if (((ulong)ppppplVar9 | 7) != 0x17) {
      pppppplVar5 = (long ******)(((ulong)ppppplVar9 | 7) + 1);
    }
    pppppplVar6 = pppppplVar5;
    __Znwm();
    uStack_88 = (ulong)pppppplVar5 | 0x8000000000000000;
    ppppplStack_98 = (long *****)pppppplVar6;
    pppplStack_90 = (long ****)ppppplVar9;
  }
  pppppplVar5 = pppppplVar6;
  _memmove(pppppplVar6,pppppplVar4,ppppplVar9);
  pppppplVar4 = pppppplVar5;
LAB_10a0f8128:
  *(undefined1 *)((long)pppppplVar6 + (long)ppppplVar9) = 0;
  if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
    pppppplVar4 = (long ******)*extraout_x8;
    __ZdlPv(pppppplVar4);
  }
  extraout_x8[1] = pppplStack_90;
  *extraout_x8 = ppppplStack_98;
  extraout_x8[2] = uStack_88;
  return pppppplVar4;
}



/* Entry: 10a0f7f7c; end: 10a0f809b;  */

long ****** FUN_10a0f7f7c(ulong param_1,long *****param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long ******pppppplVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *****ppppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 uStack_2a8;
  long ****pppplStack_2a0;
  undefined8 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 uStack_288;
  long ****pppplStack_280;
  undefined8 uStack_278;
  undefined8 *****pppppuStack_270;
  undefined8 uStack_268;
  long ****pppplStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  undefined8 uStack_238;
  undefined8 *****pppppuStack_230;
  undefined8 uStack_228;
  long ****pppplStack_220;
  undefined8 uStack_218;
  undefined8 *****pppppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *****pppppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 uStack_128;
  long ****pppplStack_120;
  undefined8 uStack_118;
  undefined1 *****pppppuStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  undefined8 uStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined8 uStack_e8;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined8 uStack_c8;
  long ****pppplStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *****ppppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  long ***ppplStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  uVar3 = param_1;
  ppppplVar9 = param_2;
  FUN_10a0f70fc();
  if (uVar3 == 0) {
    ppplStack_40 = (long ***)*param_2;
    FUN_10a0ee900(&puStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&puStack_38);
LAB_10a0f8068:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f806c);
    (*pcVar2)();
  }
  if (*(uint *)(param_1 + 0x98) < 2) {
    puStack_38 = &UNK_10f63ccc0;
    uStack_30 = 0xe;
    if (*(short *)(uVar3 + 0xc) == 4) {
      if (-1 < **(int **)(uVar3 + 0x10)) {
        return (long ******)(*(int **)(uVar3 + 0x10) + 1);
      }
      goto LAB_10a0f8068;
    }
LAB_10a0f806c:
    uStack_30 = 0xe;
    puStack_38 = &UNK_10f63ccc0;
    FUN_10a0edfc4(&puStack_38);
  }
  else {
    puStack_38 = &UNK_10f63ccc0;
    uStack_30 = 0xe;
    if (*(short *)(uVar3 + 0xc) != 0x18) goto LAB_10a0f806c;
    FUN_10a10aa04();
    if (((int)uVar3 != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x100) + 8),
       (uVar3 & 0xffffffff) <=
       (ulong)((*(long *)(*(long *)(param_1 + 0x100) + 0x10) - lVar1 >> 3) * -0x5555555555555555)))
    {
      pppppplVar4 = (long ******)(lVar1 + (ulong)((int)uVar3 - 1) * 0x18);
      if (*(char *)((long)pppppplVar4 + 0x17) < '\0') {
        pppppplVar4 = (long ******)*pppppplVar4;
      }
      return pppppplVar4;
    }
  }
  pppppplVar4 = (long ******)&UNK_10f63cccf;
  FUN_10a00946c();
  if (cStack_21 < '\0') {
    __ZdlPv(puStack_38);
  }
  __Unwind_Resume();
  pcStack_48 = FUN_10a0f809c;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a0f7f7c();
  if ((long *****)0x7ffffffffffffff7 < ppppplVar9) {
    func_0x000109ffde50();
    pcStack_a8 = FUN_10a0f8168;
    pppppplVar5 = pppppplVar4;
    pppplStack_c0 = (long ****)param_2;
    ppuStack_b0 = &puStack_50;
    FUN_10a0f70fc();
    if (pppppplVar5 == (long ******)0x0) {
      pppplStack_e0 = *ppppplVar9;
      FUN_10a0ee900(&uStack_d8,&UNK_10f63ccee,0x15);
      FUN_10a0029c0(&uStack_d8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f81cc);
      (*pcVar2)();
    }
    pppppplVar6 = (long ******)&pppplStack_c0;
    pppplStack_c0 = (long ****)&UNK_10f63cc79;
    uStack_b8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_c0 = (long ****)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
      }
      else {
        pppplStack_c0 = (long ****)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 5) {
          if (*(int *)(pppppplVar5 + 1) == 8) {
            return pppppplVar4;
          }
          pppplStack_c0 = (long ****)&UNK_10f63ccae;
          uStack_b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_c0);
    pppppplVar4 = (long ******)&pppplStack_e0;
    uStack_c8 = 0x10a10ab38;
    ppppuStack_f0 = &pppuStack_d0;
    pppplStack_e0 = (long ****)&UNK_10f63cc79;
    uStack_d8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_e0 = (long ****)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
      }
      else {
        pppplStack_e0 = (long ****)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 7) {
          if (*(int *)(pppppplVar5 + 1) == 8) {
            return pppppplVar6;
          }
          pppplStack_e0 = (long ****)&UNK_10f63ccae;
          uStack_d8 = 0x11;
        }
      }
    }
    pppuStack_d0 = &ppuStack_b0;
    FUN_10a0edfc4(&pppplStack_e0);
    pppppplVar6 = (long ******)&pppplStack_100;
    uStack_e8 = 0x10a10abc4;
    pppppuStack_110 = &ppppuStack_f0;
    pppplStack_100 = (long ****)&UNK_10f63cc79;
    uStack_f8 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_100 = (long ****)&UNK_10f63cc8c;
        uStack_f8 = 0x21;
      }
      else {
        pppplStack_100 = (long ****)&UNK_10f63cc8c;
        uStack_f8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 8) {
          if (*(int *)(pppppplVar5 + 1) == 0xc) {
            return pppppplVar4;
          }
          pppplStack_100 = (long ****)&UNK_10f63ccae;
          uStack_f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_120;
    uStack_108 = 0x10a10ac54;
    pppppuStack_130 = &pppppuStack_110;
    pppplStack_120 = (long ****)&UNK_10f63cc79;
    uStack_118 = 0x12;
    if (pppppplVar6[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar6 + 0xc) == 0x18) {
        pppplStack_120 = (long ****)&UNK_10f63cc8c;
        uStack_118 = 0x21;
      }
      else {
        pppplStack_120 = (long ****)&UNK_10f63cc8c;
        uStack_118 = 0x21;
        if (*(short *)((long)pppppplVar6 + 0xc) == 0x20) {
          if (*(int *)(pppppplVar6 + 1) == 0x18) {
            return pppppplVar6;
          }
          pppplStack_120 = (long ****)&UNK_10f63ccae;
          uStack_118 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_120);
    ppuVar7 = &puStack_140;
    uStack_128 = 0x10a10ace4;
    pppppuStack_150 = &pppppuStack_130;
    puStack_140 = &UNK_10f63cc79;
    uStack_138 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
      }
      else {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 9) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar4;
          }
          puStack_140 = &UNK_10f63ccae;
          uStack_138 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_160;
    uStack_148 = 0x10a10ad74;
    pppppuStack_170 = &pppppuStack_150;
    puStack_160 = &UNK_10f63cc79;
    uStack_158 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
      }
      else {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x1f) {
          if (*(int *)((long)ppuVar7 + 8) == 8) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_160 = &UNK_10f63ccae;
          uStack_158 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_180;
    uStack_168 = 0x10a10ae00;
    pppppuStack_190 = &pppppuStack_170;
    puStack_180 = &UNK_10f63cc79;
    uStack_178 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
      }
      else {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x22) {
          if (*(int *)((long)ppuVar8 + 8) == 0xc) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_180 = &UNK_10f63ccae;
          uStack_178 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_1a0;
    uStack_188 = 0x10a10ae90;
    pppppuStack_1b0 = &pppppuStack_190;
    puStack_1a0 = &UNK_10f63cc79;
    uStack_198 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
      }
      else {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x23) {
          if (*(int *)((long)ppuVar7 + 8) == 0x10) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_1a0 = &UNK_10f63ccae;
          uStack_198 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_1c0;
    uStack_1a8 = 0x10a10af1c;
    pppppuStack_1d0 = &pppppuStack_1b0;
    puStack_1c0 = &UNK_10f63cc79;
    uStack_1b8 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
      }
      else {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x24) {
          if (*(int *)((long)ppuVar8 + 8) == 8) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_1c0 = &UNK_10f63ccae;
          uStack_1b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar8 = &puStack_1e0;
    uStack_1c8 = 0x10a10afa8;
    pppppuStack_1f0 = &pppppuStack_1d0;
    puStack_1e0 = &UNK_10f63cc79;
    uStack_1d8 = 0x12;
    if (*(undefined8 **)((long)ppuVar7 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        puStack_1e0 = &UNK_10f63cc8c;
        uStack_1d8 = 0x21;
      }
      else {
        puStack_1e0 = &UNK_10f63cc8c;
        uStack_1d8 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x25) {
          if (*(int *)((long)ppuVar7 + 8) == 0xc) {
            return (long ******)**(undefined8 **)((long)ppuVar7 + 0x10);
          }
          puStack_1e0 = &UNK_10f63ccae;
          uStack_1d8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar7 = &puStack_200;
    uStack_1e8 = 0x10a10b038;
    pppppuStack_210 = &pppppuStack_1f0;
    puStack_200 = &UNK_10f63cc79;
    uStack_1f8 = 0x12;
    if (*(undefined8 **)((long)ppuVar8 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar8 + 0xc) == 0x18) {
        puStack_200 = &UNK_10f63cc8c;
        uStack_1f8 = 0x21;
      }
      else {
        puStack_200 = &UNK_10f63cc8c;
        uStack_1f8 = 0x21;
        if (*(short *)((long)ppuVar8 + 0xc) == 0x26) {
          if (*(int *)((long)ppuVar8 + 8) == 0x10) {
            return (long ******)**(undefined8 **)((long)ppuVar8 + 0x10);
          }
          puStack_200 = &UNK_10f63ccae;
          uStack_1f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_220;
    uStack_208 = 0x10a10b0c4;
    pppppuStack_230 = &pppppuStack_210;
    pppplStack_220 = (long ****)&UNK_10f63cc79;
    uStack_218 = 0x12;
    if (*(uint **)((long)ppuVar7 + 0x10) != (uint *)0x0) {
      if (*(short *)((long)ppuVar7 + 0xc) == 0x18) {
        pppplStack_220 = (long ****)&UNK_10f63cc8c;
        uStack_218 = 0x21;
      }
      else {
        pppplStack_220 = (long ****)&UNK_10f63cc8c;
        uStack_218 = 0x21;
        if (*(short *)((long)ppuVar7 + 0xc) == 0x17) {
          if (*(int *)((long)ppuVar7 + 8) == 4) {
            return (long ******)(ulong)**(uint **)((long)ppuVar7 + 0x10);
          }
          pppplStack_220 = (long ****)&UNK_10f63ccae;
          uStack_218 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_220);
    pppppplVar6 = (long ******)&pppplStack_240;
    uStack_228 = 0x10a10b150;
    pppppuStack_250 = &pppppuStack_230;
    pppplStack_240 = (long ****)&UNK_10f63cc79;
    uStack_238 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_240 = (long ****)&UNK_10f63cc8c;
        uStack_238 = 0x21;
      }
      else {
        pppplStack_240 = (long ****)&UNK_10f63cc8c;
        uStack_238 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0xc) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar4;
          }
          pppplStack_240 = (long ****)&UNK_10f63ccae;
          uStack_238 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppppplVar4 = (long ******)&pppplStack_260;
    uStack_248 = 0x10a10b1e0;
    pppppuStack_270 = &pppppuStack_250;
    pppplStack_260 = (long ****)&UNK_10f63cc79;
    uStack_258 = 0x12;
    if (pppppplVar6[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar6 + 0xc) == 0x18) {
        pppplStack_260 = (long ****)&UNK_10f63cc8c;
        uStack_258 = 0x21;
      }
      else {
        pppplStack_260 = (long ****)&UNK_10f63cc8c;
        uStack_258 = 0x21;
        if (*(short *)((long)pppppplVar6 + 0xc) == 0x21) {
          if (*(int *)(pppppplVar6 + 1) == 0x20) {
            return pppppplVar6;
          }
          pppplStack_260 = (long ****)&UNK_10f63ccae;
          uStack_258 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_260);
    pppppplVar6 = (long ******)&pppplStack_280;
    uStack_268 = 0x10a10b270;
    pppppuStack_290 = &pppppuStack_270;
    ppppplVar9 = pppppplVar5[2];
    pppplStack_280 = (long ****)&UNK_10f63cc79;
    uStack_278 = 0x12;
    if (ppppplVar9 != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_280 = (long ****)&UNK_10f63cc8c;
        uStack_278 = 0x21;
      }
      else {
        pppplStack_280 = (long ****)&UNK_10f63cc8c;
        uStack_278 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0xb) {
          if (*(int *)(pppppplVar5 + 1) == 0x40) {
            pppplVar10 = *ppppplVar9;
            pppplVar12 = ppppplVar9[3];
            pppplVar11 = ppppplVar9[2];
            extraout_x8_00[1] = ppppplVar9[1];
            *extraout_x8_00 = pppplVar10;
            extraout_x8_00[3] = pppplVar12;
            extraout_x8_00[2] = pppplVar11;
            pppplVar10 = ppppplVar9[4];
            pppplVar12 = ppppplVar9[7];
            pppplVar11 = ppppplVar9[6];
            extraout_x8_00[5] = ppppplVar9[5];
            extraout_x8_00[4] = pppplVar10;
            extraout_x8_00[7] = pppplVar12;
            extraout_x8_00[6] = pppplVar11;
            return pppppplVar4;
          }
          pppplStack_280 = (long ****)&UNK_10f63ccae;
          uStack_278 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_280);
    pppppplVar4 = (long ******)&pppplStack_2a0;
    uStack_288 = 0x10a10b308;
    pppppuStack_2b0 = &pppppuStack_290;
    pppplStack_2a0 = (long ****)&UNK_10f63cc79;
    uStack_298 = 0x12;
    if (pppppplVar5[2] != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_2a0 = (long ****)&UNK_10f63cc8c;
        uStack_298 = 0x21;
      }
      else {
        pppplStack_2a0 = (long ****)&UNK_10f63cc8c;
        uStack_298 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 0x16) {
          if (*(int *)(pppppplVar5 + 1) == 0x10) {
            return pppppplVar6;
          }
          pppplStack_2a0 = (long ****)&UNK_10f63ccae;
          uStack_298 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pppplStack_2a0);
    pppppplVar6 = (long ******)&pppplStack_2c0;
    uStack_2a8 = 0x10a10b398;
    ppppplVar9 = pppppplVar5[2];
    pppplStack_2c0 = (long ****)&UNK_10f63cc79;
    uStack_2b8 = 0x12;
    if (ppppplVar9 != (long *****)0x0) {
      if (*(short *)((long)pppppplVar5 + 0xc) == 0x18) {
        pppplStack_2c0 = (long ****)&UNK_10f63cc8c;
        uStack_2b8 = 0x21;
      }
      else {
        pppplStack_2c0 = (long ****)&UNK_10f63cc8c;
        uStack_2b8 = 0x21;
        if (*(short *)((long)pppppplVar5 + 0xc) == 10) {
          if (*(int *)(pppppplVar5 + 1) == 0x24) {
            pppplVar10 = *ppppplVar9;
            pppplVar12 = ppppplVar9[3];
            pppplVar11 = ppppplVar9[2];
            extraout_x8_01[1] = ppppplVar9[1];
            *extraout_x8_01 = pppplVar10;
            extraout_x8_01[3] = pppplVar12;
            extraout_x8_01[2] = pppplVar11;
            *(undefined4 *)(extraout_x8_01 + 4) = *(undefined4 *)(ppppplVar9 + 4);
            return pppppplVar4;
          }
          pppplStack_2c0 = (long ****)&UNK_10f63ccae;
          uStack_2b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    func_0x00010a10b468();
    ppppplVar9 = *pppppplVar6;
    *pppppplVar6 = (long *****)0x0;
    if (ppppplVar9 != (long *****)0x0) {
      __ZdlPv();
    }
    return pppppplVar6;
  }
  if (ppppplVar9 < (long *****)0x17) {
    uStack_88 = CONCAT17((char)ppppplVar9,(undefined7)uStack_88);
    pppppplVar6 = &ppppplStack_98;
    if (ppppplVar9 == (long *****)0x0) goto LAB_10a0f8128;
  }
  else {
    pppppplVar5 = (long ******)0x19;
    if (((ulong)ppppplVar9 | 7) != 0x17) {
      pppppplVar5 = (long ******)(((ulong)ppppplVar9 | 7) + 1);
    }
    pppppplVar6 = pppppplVar5;
    __Znwm();
    uStack_88 = (ulong)pppppplVar5 | 0x8000000000000000;
    ppppplStack_98 = (long *****)pppppplVar6;
    pppplStack_90 = (long ****)ppppplVar9;
  }
  pppppplVar5 = pppppplVar6;
  _memmove(pppppplVar6,pppppplVar4,ppppplVar9);
  pppppplVar4 = pppppplVar5;
LAB_10a0f8128:
  *(undefined1 *)((long)pppppplVar6 + (long)ppppplVar9) = 0;
  if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
    pppppplVar4 = (long ******)*extraout_x8;
    __ZdlPv(pppppplVar4);
  }
  extraout_x8[1] = pppplStack_90;
  *extraout_x8 = ppppplStack_98;
  extraout_x8[2] = uStack_88;
  return pppppplVar4;
}



/* Entry: 10a0f809c; end: 10a0f8167;  */

long **** FUN_10a0f809c(ulong *param_1,long ****param_2,undefined8 *param_3)

{
  code *pcVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long ***ppplVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplStack_280;
  undefined8 uStack_278;
  undefined8 ***pppuStack_270;
  undefined8 uStack_268;
  long **pplStack_260;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  long **pplStack_240;
  undefined8 uStack_238;
  undefined8 ***pppuStack_230;
  undefined8 uStack_228;
  long **pplStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  long **pplStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  long **pplStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  undefined8 uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  long ***ppplStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0f7f7c();
  if ((undefined8 *)0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    pcStack_68 = FUN_10a0f8168;
    pppplVar2 = param_2;
    puStack_70 = &stack0xfffffffffffffff0;
    FUN_10a0f70fc();
    if (pppplVar2 == (long ****)0x0) {
      pplStack_a0 = (long **)*param_3;
      FUN_10a0ee900(&uStack_98,&UNK_10f63ccee,0x15);
      FUN_10a0029c0(&uStack_98);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f81cc);
      (*pcVar1)();
    }
    pppplVar3 = (long ****)&stack0xffffffffffffff80;
    if ((((pppplVar2[2] != (long ***)0x0) && (*(short *)((long)pppplVar2 + 0xc) != 0x18)) &&
        (*(short *)((long)pppplVar2 + 0xc) == 5)) && (*(int *)(pppplVar2 + 1) == 8)) {
      return param_2;
    }
    FUN_10a0edfc4(&stack0xffffffffffffff80);
    pppplVar4 = (long ****)&pplStack_a0;
    uStack_88 = 0x10a10ab38;
    pppuStack_b0 = &ppuStack_90;
    pplStack_a0 = (long **)&UNK_10f63cc79;
    uStack_98 = 0x12;
    if (pppplVar2[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_a0 = (long **)&UNK_10f63cc8c;
        uStack_98 = 0x21;
      }
      else {
        pplStack_a0 = (long **)&UNK_10f63cc8c;
        uStack_98 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 7) {
          if (*(int *)(pppplVar2 + 1) == 8) {
            return pppplVar3;
          }
          pplStack_a0 = (long **)&UNK_10f63ccae;
          uStack_98 = 0x11;
        }
      }
    }
    ppuStack_90 = &puStack_70;
    FUN_10a0edfc4(&pplStack_a0);
    pppplVar3 = (long ****)&pplStack_c0;
    uStack_a8 = 0x10a10abc4;
    pppuStack_d0 = &pppuStack_b0;
    pplStack_c0 = (long **)&UNK_10f63cc79;
    uStack_b8 = 0x12;
    if (pppplVar2[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_c0 = (long **)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
      }
      else {
        pplStack_c0 = (long **)&UNK_10f63cc8c;
        uStack_b8 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 8) {
          if (*(int *)(pppplVar2 + 1) == 0xc) {
            return pppplVar4;
          }
          pplStack_c0 = (long **)&UNK_10f63ccae;
          uStack_b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppplVar4 = (long ****)&pplStack_e0;
    uStack_c8 = 0x10a10ac54;
    pppuStack_f0 = &pppuStack_d0;
    pplStack_e0 = (long **)&UNK_10f63cc79;
    uStack_d8 = 0x12;
    if (pppplVar3[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar3 + 0xc) == 0x18) {
        pplStack_e0 = (long **)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
      }
      else {
        pplStack_e0 = (long **)&UNK_10f63cc8c;
        uStack_d8 = 0x21;
        if (*(short *)((long)pppplVar3 + 0xc) == 0x20) {
          if (*(int *)(pppplVar3 + 1) == 0x18) {
            return pppplVar3;
          }
          pplStack_e0 = (long **)&UNK_10f63ccae;
          uStack_d8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pplStack_e0);
    ppuVar5 = &puStack_100;
    uStack_e8 = 0x10a10ace4;
    pppuStack_110 = &pppuStack_f0;
    puStack_100 = &UNK_10f63cc79;
    uStack_f8 = 0x12;
    if (pppplVar2[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        puStack_100 = &UNK_10f63cc8c;
        uStack_f8 = 0x21;
      }
      else {
        puStack_100 = &UNK_10f63cc8c;
        uStack_f8 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 9) {
          if (*(int *)(pppplVar2 + 1) == 0x10) {
            return pppplVar4;
          }
          puStack_100 = &UNK_10f63ccae;
          uStack_f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar6 = &puStack_120;
    uStack_108 = 0x10a10ad74;
    pppuStack_130 = &pppuStack_110;
    puStack_120 = &UNK_10f63cc79;
    uStack_118 = 0x12;
    if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
        puStack_120 = &UNK_10f63cc8c;
        uStack_118 = 0x21;
      }
      else {
        puStack_120 = &UNK_10f63cc8c;
        uStack_118 = 0x21;
        if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
          if (*(int *)((long)ppuVar5 + 8) == 8) {
            return (long ****)**(undefined8 **)((long)ppuVar5 + 0x10);
          }
          puStack_120 = &UNK_10f63ccae;
          uStack_118 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar5 = &puStack_140;
    uStack_128 = 0x10a10ae00;
    pppuStack_150 = &pppuStack_130;
    puStack_140 = &UNK_10f63cc79;
    uStack_138 = 0x12;
    if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
      }
      else {
        puStack_140 = &UNK_10f63cc8c;
        uStack_138 = 0x21;
        if (*(short *)((long)ppuVar6 + 0xc) == 0x22) {
          if (*(int *)((long)ppuVar6 + 8) == 0xc) {
            return (long ****)**(undefined8 **)((long)ppuVar6 + 0x10);
          }
          puStack_140 = &UNK_10f63ccae;
          uStack_138 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar6 = &puStack_160;
    uStack_148 = 0x10a10ae90;
    pppuStack_170 = &pppuStack_150;
    puStack_160 = &UNK_10f63cc79;
    uStack_158 = 0x12;
    if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
      }
      else {
        puStack_160 = &UNK_10f63cc8c;
        uStack_158 = 0x21;
        if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
          if (*(int *)((long)ppuVar5 + 8) == 0x10) {
            return (long ****)**(undefined8 **)((long)ppuVar5 + 0x10);
          }
          puStack_160 = &UNK_10f63ccae;
          uStack_158 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar5 = &puStack_180;
    uStack_168 = 0x10a10af1c;
    pppuStack_190 = &pppuStack_170;
    puStack_180 = &UNK_10f63cc79;
    uStack_178 = 0x12;
    if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
      }
      else {
        puStack_180 = &UNK_10f63cc8c;
        uStack_178 = 0x21;
        if (*(short *)((long)ppuVar6 + 0xc) == 0x24) {
          if (*(int *)((long)ppuVar6 + 8) == 8) {
            return (long ****)**(undefined8 **)((long)ppuVar6 + 0x10);
          }
          puStack_180 = &UNK_10f63ccae;
          uStack_178 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar6 = &puStack_1a0;
    uStack_188 = 0x10a10afa8;
    pppuStack_1b0 = &pppuStack_190;
    puStack_1a0 = &UNK_10f63cc79;
    uStack_198 = 0x12;
    if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
      }
      else {
        puStack_1a0 = &UNK_10f63cc8c;
        uStack_198 = 0x21;
        if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
          if (*(int *)((long)ppuVar5 + 8) == 0xc) {
            return (long ****)**(undefined8 **)((long)ppuVar5 + 0x10);
          }
          puStack_1a0 = &UNK_10f63ccae;
          uStack_198 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    ppuVar5 = &puStack_1c0;
    uStack_1a8 = 0x10a10b038;
    pppuStack_1d0 = &pppuStack_1b0;
    puStack_1c0 = &UNK_10f63cc79;
    uStack_1b8 = 0x12;
    if (*(undefined8 **)((long)ppuVar6 + 0x10) != (undefined8 *)0x0) {
      if (*(short *)((long)ppuVar6 + 0xc) == 0x18) {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
      }
      else {
        puStack_1c0 = &UNK_10f63cc8c;
        uStack_1b8 = 0x21;
        if (*(short *)((long)ppuVar6 + 0xc) == 0x26) {
          if (*(int *)((long)ppuVar6 + 8) == 0x10) {
            return (long ****)**(undefined8 **)((long)ppuVar6 + 0x10);
          }
          puStack_1c0 = &UNK_10f63ccae;
          uStack_1b8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppplVar3 = (long ****)&pplStack_1e0;
    uStack_1c8 = 0x10a10b0c4;
    pppuStack_1f0 = &pppuStack_1d0;
    pplStack_1e0 = (long **)&UNK_10f63cc79;
    uStack_1d8 = 0x12;
    if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
      if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
        pplStack_1e0 = (long **)&UNK_10f63cc8c;
        uStack_1d8 = 0x21;
      }
      else {
        pplStack_1e0 = (long **)&UNK_10f63cc8c;
        uStack_1d8 = 0x21;
        if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
          if (*(int *)((long)ppuVar5 + 8) == 4) {
            return (long ****)(ulong)**(uint **)((long)ppuVar5 + 0x10);
          }
          pplStack_1e0 = (long **)&UNK_10f63ccae;
          uStack_1d8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pplStack_1e0);
    pppplVar4 = (long ****)&pplStack_200;
    uStack_1e8 = 0x10a10b150;
    pppuStack_210 = &pppuStack_1f0;
    pplStack_200 = (long **)&UNK_10f63cc79;
    uStack_1f8 = 0x12;
    if (pppplVar2[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_200 = (long **)&UNK_10f63cc8c;
        uStack_1f8 = 0x21;
      }
      else {
        pplStack_200 = (long **)&UNK_10f63cc8c;
        uStack_1f8 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 0xc) {
          if (*(int *)(pppplVar2 + 1) == 0x10) {
            return pppplVar3;
          }
          pplStack_200 = (long **)&UNK_10f63ccae;
          uStack_1f8 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    pppplVar3 = (long ****)&pplStack_220;
    uStack_208 = 0x10a10b1e0;
    pppuStack_230 = &pppuStack_210;
    pplStack_220 = (long **)&UNK_10f63cc79;
    uStack_218 = 0x12;
    if (pppplVar4[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar4 + 0xc) == 0x18) {
        pplStack_220 = (long **)&UNK_10f63cc8c;
        uStack_218 = 0x21;
      }
      else {
        pplStack_220 = (long **)&UNK_10f63cc8c;
        uStack_218 = 0x21;
        if (*(short *)((long)pppplVar4 + 0xc) == 0x21) {
          if (*(int *)(pppplVar4 + 1) == 0x20) {
            return pppplVar4;
          }
          pplStack_220 = (long **)&UNK_10f63ccae;
          uStack_218 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pplStack_220);
    pppplVar4 = (long ****)&pplStack_240;
    uStack_228 = 0x10a10b270;
    pppuStack_250 = &pppuStack_230;
    ppplVar7 = pppplVar2[2];
    pplStack_240 = (long **)&UNK_10f63cc79;
    uStack_238 = 0x12;
    if (ppplVar7 != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_240 = (long **)&UNK_10f63cc8c;
        uStack_238 = 0x21;
      }
      else {
        pplStack_240 = (long **)&UNK_10f63cc8c;
        uStack_238 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 0xb) {
          if (*(int *)(pppplVar2 + 1) == 0x40) {
            pplVar8 = *ppplVar7;
            pplVar10 = ppplVar7[3];
            pplVar9 = ppplVar7[2];
            extraout_x8[1] = ppplVar7[1];
            *extraout_x8 = pplVar8;
            extraout_x8[3] = pplVar10;
            extraout_x8[2] = pplVar9;
            pplVar8 = ppplVar7[4];
            pplVar10 = ppplVar7[7];
            pplVar9 = ppplVar7[6];
            extraout_x8[5] = ppplVar7[5];
            extraout_x8[4] = pplVar8;
            extraout_x8[7] = pplVar10;
            extraout_x8[6] = pplVar9;
            return pppplVar3;
          }
          pplStack_240 = (long **)&UNK_10f63ccae;
          uStack_238 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pplStack_240);
    pppplVar3 = (long ****)&pplStack_260;
    uStack_248 = 0x10a10b308;
    pppuStack_270 = &pppuStack_250;
    pplStack_260 = (long **)&UNK_10f63cc79;
    uStack_258 = 0x12;
    if (pppplVar2[2] != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_260 = (long **)&UNK_10f63cc8c;
        uStack_258 = 0x21;
      }
      else {
        pplStack_260 = (long **)&UNK_10f63cc8c;
        uStack_258 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 0x16) {
          if (*(int *)(pppplVar2 + 1) == 0x10) {
            return pppplVar4;
          }
          pplStack_260 = (long **)&UNK_10f63ccae;
          uStack_258 = 0x11;
        }
      }
    }
    FUN_10a0edfc4(&pplStack_260);
    pppplVar4 = (long ****)&pplStack_280;
    uStack_268 = 0x10a10b398;
    ppplVar7 = pppplVar2[2];
    pplStack_280 = (long **)&UNK_10f63cc79;
    uStack_278 = 0x12;
    if (ppplVar7 != (long ***)0x0) {
      if (*(short *)((long)pppplVar2 + 0xc) == 0x18) {
        pplStack_280 = (long **)&UNK_10f63cc8c;
        uStack_278 = 0x21;
      }
      else {
        pplStack_280 = (long **)&UNK_10f63cc8c;
        uStack_278 = 0x21;
        if (*(short *)((long)pppplVar2 + 0xc) == 10) {
          if (*(int *)(pppplVar2 + 1) == 0x24) {
            pplVar8 = *ppplVar7;
            pplVar10 = ppplVar7[3];
            pplVar9 = ppplVar7[2];
            extraout_x8_00[1] = ppplVar7[1];
            *extraout_x8_00 = pplVar8;
            extraout_x8_00[3] = pplVar10;
            extraout_x8_00[2] = pplVar9;
            *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(ppplVar7 + 4);
            return pppplVar3;
          }
          pplStack_280 = (long **)&UNK_10f63ccae;
          uStack_278 = 0x11;
        }
      }
    }
    FUN_10a0edfc4();
    func_0x00010a10b468();
    ppplVar7 = *pppplVar4;
    *pppplVar4 = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      __ZdlPv();
    }
    return pppplVar4;
  }
  if (param_3 < (undefined8 *)0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppplVar3 = &ppplStack_58;
    if (param_3 == (undefined8 *)0x0) goto LAB_10a0f8128;
  }
  else {
    pppplVar2 = (long ****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      pppplVar2 = (long ****)(((ulong)param_3 | 7) + 1);
    }
    pppplVar3 = pppplVar2;
    __Znwm();
    uStack_48 = (ulong)pppplVar2 | 0x8000000000000000;
    ppplStack_58 = (long ***)pppplVar3;
    puStack_50 = param_3;
  }
  pppplVar2 = pppplVar3;
  _memmove(pppplVar3,param_2,param_3);
  param_2 = pppplVar2;
LAB_10a0f8128:
  *(undefined1 *)((long)pppplVar3 + (long)param_3) = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_2 = (long ****)*param_1;
    __ZdlPv(param_2);
  }
  param_1[1] = (ulong)puStack_50;
  *param_1 = (ulong)ppplStack_58;
  param_1[2] = uStack_48;
  return param_2;
}



/* Entry: 10a0f8168; end: 10a0f816b;  */

long * FUN_10a0f8168(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f81cc);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 5)) && ((int)plVar2[1] == 8)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ab38;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 7) {
        if ((int)plVar2[1] == 8) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10abc4;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 8) {
        if ((int)plVar2[1] == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ac54;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x20) {
        if ((int)ppuVar5[1] == 0x18) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ace4;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ad74;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10ae00;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10ae90;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10af1c;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10afa8;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b038;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b0c4;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b150;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b1e0;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b270;
  pppuStack_1f0 = &pppuStack_1d0;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar4 = &puStack_200;
  uStack_1e8 = 0x10a10b308;
  pppuStack_210 = &pppuStack_1f0;
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_200);
  ppuVar5 = &puStack_220;
  uStack_208 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_220 = &UNK_10f63cc79;
  uStack_218 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
    }
    else {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_220 = &UNK_10f63ccae;
        uStack_218 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f816c; end: 10a0f81e7;  */

long * FUN_10a0f816c(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f81cc);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 5)) && ((int)plVar2[1] == 8)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ab38;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 7) {
        if ((int)plVar2[1] == 8) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10abc4;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 8) {
        if ((int)plVar2[1] == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ac54;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x20) {
        if ((int)ppuVar5[1] == 0x18) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ace4;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ad74;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10ae00;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10ae90;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10af1c;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10afa8;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b038;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b0c4;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b150;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b1e0;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b270;
  pppuStack_1f0 = &pppuStack_1d0;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar4 = &puStack_200;
  uStack_1e8 = 0x10a10b308;
  pppuStack_210 = &pppuStack_1f0;
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_200);
  ppuVar5 = &puStack_220;
  uStack_208 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_220 = &UNK_10f63cc79;
  uStack_218 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
    }
    else {
      puStack_220 = &UNK_10f63cc8c;
      uStack_218 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_220 = &UNK_10f63ccae;
        uStack_218 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f81e8; end: 10a0f8257;  */

long * FUN_10a0f81e8(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 ***pppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined1 *)*param_2;
    FUN_10a0ee900(&pcStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&pcStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f823c);
    (*pcVar2)();
  }
  ppuVar4 = &puStack_30;
  puStack_30 = &UNK_10f63cc79;
  uStack_28 = 0x12;
  if (*(long *)(param_1 + 0x10) != 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    lVar3 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_30 = &UNK_10f63cc8c;
      uStack_28 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)(param_1 + 8) == 4) {
      FUN_10a0f7058();
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
      if (lVar3 == 4) {
        return (long *)(ulong)**(uint **)(param_1 + 0x10);
      }
    }
    else {
      puStack_30 = &UNK_10f63ccae;
      uStack_28 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_30);
  ppuVar5 = &puStack_50;
  pcStack_38 = FUN_10a10aaac;
  ppuStack_60 = &puStack_40;
  puStack_50 = &UNK_10f63cc79;
  uStack_48 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
    }
    else {
      puStack_50 = &UNK_10f63cc8c;
      uStack_48 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 5) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar4;
        }
        puStack_50 = &UNK_10f63ccae;
        uStack_48 = 0x11;
      }
    }
  }
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_50);
  ppuVar4 = &puStack_70;
  uStack_58 = 0x10a10ab38;
  pppuStack_80 = &ppuStack_60;
  puStack_70 = &UNK_10f63cc79;
  uStack_68 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
    }
    else {
      puStack_70 = &UNK_10f63cc8c;
      uStack_68 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 7) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar5;
        }
        puStack_70 = &UNK_10f63ccae;
        uStack_68 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_70);
  ppuVar5 = &puStack_90;
  uStack_78 = 0x10a10abc4;
  pppuStack_a0 = &pppuStack_80;
  puStack_90 = &UNK_10f63cc79;
  uStack_88 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
    }
    else {
      puStack_90 = &UNK_10f63cc8c;
      uStack_88 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 8) {
        if (*(int *)(puVar6 + 1) == 0xc) {
          return (long *)ppuVar4;
        }
        puStack_90 = &UNK_10f63ccae;
        uStack_88 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_b0;
  uStack_98 = 0x10a10ac54;
  pppuStack_c0 = &pppuStack_a0;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
    }
    else {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x20) {
        if ((int)ppuVar5[1] == 0x18) {
          return (long *)ppuVar5;
        }
        puStack_b0 = &UNK_10f63ccae;
        uStack_a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_b0);
  ppuVar5 = &puStack_d0;
  uStack_b8 = 0x10a10ace4;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 9) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_f0;
  uStack_d8 = 0x10a10ad74;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_110;
  uStack_f8 = 0x10a10ae00;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_130;
  uStack_118 = 0x10a10ae90;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_150;
  uStack_138 = 0x10a10af1c;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_170;
  uStack_158 = 0x10a10afa8;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_190;
  uStack_178 = 0x10a10b038;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1b0;
  uStack_198 = 0x10a10b0c4;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1b0);
  ppuVar5 = &puStack_1d0;
  uStack_1b8 = 0x10a10b150;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_1f0;
  uStack_1d8 = 0x10a10b1e0;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1f0);
  ppuVar5 = &puStack_210;
  uStack_1f8 = 0x10a10b270;
  pppuStack_220 = &pppuStack_200;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_210);
  ppuVar4 = &puStack_230;
  uStack_218 = 0x10a10b308;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar5 = &puStack_250;
  uStack_238 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar3 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f8258; end: 10a0f82c7;  */

long * FUN_10a0f8258(long param_1,undefined8 *param_2)

{
  short sVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0f82ac);
    (*pcVar2)();
  }
  if ((((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) &&
       (*(short *)(param_1 + 0xc) != 0x18)) && (*(short *)(param_1 + 0xc) == 0x11)) &&
     (*(int *)(param_1 + 8) == 8)) {
    return (long *)**(undefined8 **)(param_1 + 0x10);
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10a860;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if ((uint *)puVar6[2] != (uint *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 2) {
        if (*(int *)(puVar6 + 1) == 4) {
          return (long *)(ulong)*(uint *)puVar6[2];
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  uStack_48 = 0x10a10a8ec;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 3) {
        if ((int)ppuVar3[1] == 4) {
          return (long *)ppuVar3;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10a978;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if ((byte *)puVar6[2] != (byte *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 1) {
        if (*(int *)(puVar6 + 1) == 1) {
          return (long *)(ulong)*(byte *)puVar6[2];
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_b0;
  pcStack_88 = FUN_10a10aa04;
  puStack_b0 = &UNK_10f63cc79;
  uStack_a8 = 0x12;
  if (*(long *)((long)ppuVar3 + 0x10) != 0) {
    sVar1 = *(short *)((long)ppuVar3 + 0xc);
    lVar4 = (long)sVar1;
    if (sVar1 != 0x18) {
      puStack_b0 = &UNK_10f63cc8c;
      uStack_a8 = 0x21;
      if (sVar1 != 6) goto LAB_10a10aaa4;
    }
    if (*(int *)((long)ppuVar3 + 8) == 4) {
      FUN_10a0f7058();
      puStack_b0 = &UNK_10f63ccae;
      uStack_a8 = 0x11;
      if (lVar4 == 4) {
        return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
      }
    }
    else {
      puStack_b0 = &UNK_10f63ccae;
      uStack_a8 = 0x11;
    }
  }
LAB_10a10aaa4:
  FUN_10a0edfc4(&puStack_b0);
  ppuVar3 = &puStack_d0;
  pcStack_b8 = FUN_10a10aaac;
  pppuStack_e0 = &pppuStack_c0;
  puStack_d0 = &UNK_10f63cc79;
  uStack_c8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
    }
    else {
      puStack_d0 = &UNK_10f63cc8c;
      uStack_c8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 5) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar5;
        }
        puStack_d0 = &UNK_10f63ccae;
        uStack_c8 = 0x11;
      }
    }
  }
  pppuStack_c0 = &pppuStack_90;
  FUN_10a0edfc4(&puStack_d0);
  ppuVar5 = &puStack_f0;
  uStack_d8 = 0x10a10ab38;
  pppuStack_100 = &pppuStack_e0;
  puStack_f0 = &UNK_10f63cc79;
  uStack_e8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
    }
    else {
      puStack_f0 = &UNK_10f63cc8c;
      uStack_e8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 7) {
        if (*(int *)(puVar6 + 1) == 8) {
          return (long *)ppuVar3;
        }
        puStack_f0 = &UNK_10f63ccae;
        uStack_e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_f0);
  ppuVar3 = &puStack_110;
  uStack_f8 = 0x10a10abc4;
  pppuStack_120 = &pppuStack_100;
  puStack_110 = &UNK_10f63cc79;
  uStack_108 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
    }
    else {
      puStack_110 = &UNK_10f63cc8c;
      uStack_108 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 8) {
        if (*(int *)(puVar6 + 1) == 0xc) {
          return (long *)ppuVar5;
        }
        puStack_110 = &UNK_10f63ccae;
        uStack_108 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_130;
  uStack_118 = 0x10a10ac54;
  pppuStack_140 = &pppuStack_120;
  puStack_130 = &UNK_10f63cc79;
  uStack_128 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
    }
    else {
      puStack_130 = &UNK_10f63cc8c;
      uStack_128 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x20) {
        if ((int)ppuVar3[1] == 0x18) {
          return (long *)ppuVar3;
        }
        puStack_130 = &UNK_10f63ccae;
        uStack_128 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_130);
  ppuVar3 = &puStack_150;
  uStack_138 = 0x10a10ace4;
  pppuStack_160 = &pppuStack_140;
  puStack_150 = &UNK_10f63cc79;
  uStack_148 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
    }
    else {
      puStack_150 = &UNK_10f63cc8c;
      uStack_148 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 9) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_150 = &UNK_10f63ccae;
        uStack_148 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_170;
  uStack_158 = 0x10a10ad74;
  pppuStack_180 = &pppuStack_160;
  puStack_170 = &UNK_10f63cc79;
  uStack_168 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
    }
    else {
      puStack_170 = &UNK_10f63cc8c;
      uStack_168 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_170 = &UNK_10f63ccae;
        uStack_168 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_190;
  uStack_178 = 0x10a10ae00;
  pppuStack_1a0 = &pppuStack_180;
  puStack_190 = &UNK_10f63cc79;
  uStack_188 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
    }
    else {
      puStack_190 = &UNK_10f63cc8c;
      uStack_188 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_190 = &UNK_10f63ccae;
        uStack_188 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1b0;
  uStack_198 = 0x10a10ae90;
  pppuStack_1c0 = &pppuStack_1a0;
  puStack_1b0 = &UNK_10f63cc79;
  uStack_1a8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
    }
    else {
      puStack_1b0 = &UNK_10f63cc8c;
      uStack_1a8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_1b0 = &UNK_10f63ccae;
        uStack_1a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_1d0;
  uStack_1b8 = 0x10a10af1c;
  pppuStack_1e0 = &pppuStack_1c0;
  puStack_1d0 = &UNK_10f63cc79;
  uStack_1c8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
    }
    else {
      puStack_1d0 = &UNK_10f63cc8c;
      uStack_1c8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_1d0 = &UNK_10f63ccae;
        uStack_1c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1f0;
  uStack_1d8 = 0x10a10afa8;
  pppuStack_200 = &pppuStack_1e0;
  puStack_1f0 = &UNK_10f63cc79;
  uStack_1e8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
    }
    else {
      puStack_1f0 = &UNK_10f63cc8c;
      uStack_1e8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_1f0 = &UNK_10f63ccae;
        uStack_1e8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_210;
  uStack_1f8 = 0x10a10b038;
  pppuStack_220 = &pppuStack_200;
  puStack_210 = &UNK_10f63cc79;
  uStack_208 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
    }
    else {
      puStack_210 = &UNK_10f63cc8c;
      uStack_208 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_210 = &UNK_10f63ccae;
        uStack_208 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_230;
  uStack_218 = 0x10a10b0c4;
  pppuStack_240 = &pppuStack_220;
  puStack_230 = &UNK_10f63cc79;
  uStack_228 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
    }
    else {
      puStack_230 = &UNK_10f63cc8c;
      uStack_228 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_230 = &UNK_10f63ccae;
        uStack_228 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_230);
  ppuVar3 = &puStack_250;
  uStack_238 = 0x10a10b150;
  pppuStack_260 = &pppuStack_240;
  puStack_250 = &UNK_10f63cc79;
  uStack_248 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
    }
    else {
      puStack_250 = &UNK_10f63cc8c;
      uStack_248 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_250 = &UNK_10f63ccae;
        uStack_248 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_270;
  uStack_258 = 0x10a10b1e0;
  pppuStack_280 = &pppuStack_260;
  puStack_270 = &UNK_10f63cc79;
  uStack_268 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
    }
    else {
      puStack_270 = &UNK_10f63cc8c;
      uStack_268 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_270 = &UNK_10f63ccae;
        uStack_268 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_270);
  ppuVar3 = &puStack_290;
  uStack_278 = 0x10a10b270;
  pppuStack_2a0 = &pppuStack_280;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_290 = &UNK_10f63cc79;
  uStack_288 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
    }
    else {
      puStack_290 = &UNK_10f63cc8c;
      uStack_288 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_290 = &UNK_10f63ccae;
        uStack_288 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_290);
  ppuVar5 = &puStack_2b0;
  uStack_298 = 0x10a10b308;
  pppuStack_2c0 = &pppuStack_2a0;
  puStack_2b0 = &UNK_10f63cc79;
  uStack_2a8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
    }
    else {
      puStack_2b0 = &UNK_10f63cc8c;
      uStack_2a8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_2b0 = &UNK_10f63ccae;
        uStack_2a8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_2b0);
  ppuVar3 = &puStack_2d0;
  uStack_2b8 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_2d0 = &UNK_10f63cc79;
  uStack_2c8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
    }
    else {
      puStack_2d0 = &UNK_10f63cc8c;
      uStack_2c8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_2d0 = &UNK_10f63ccae;
        uStack_2c8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar4 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f82c8; end: 10a0f82cb;  */

long * FUN_10a0f82c8(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f832c);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 7)) && ((int)plVar2[1] == 8)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10abc4;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 8) {
        if ((int)plVar2[1] == 0xc) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ac54;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ace4;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ad74;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ae00;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10ae90;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10af1c;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10afa8;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b038;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b0c4;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b150;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b1e0;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1a0);
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b270;
  pppuStack_1d0 = &pppuStack_1b0;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b308;
  pppuStack_1f0 = &pppuStack_1d0;
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar4 = &puStack_200;
  uStack_1e8 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f82cc; end: 10a0f8347;  */

long * FUN_10a0f82cc(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f832c);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 7)) && ((int)plVar2[1] == 8)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10abc4;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 8) {
        if ((int)plVar2[1] == 0xc) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ac54;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x20) {
        if ((int)ppuVar4[1] == 0x18) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ace4;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ad74;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ae00;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10ae90;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10af1c;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10afa8;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b038;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b0c4;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b150;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b1e0;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1a0);
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b270;
  pppuStack_1d0 = &pppuStack_1b0;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b308;
  pppuStack_1f0 = &pppuStack_1d0;
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1e0);
  ppuVar4 = &puStack_200;
  uStack_1e8 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_200 = &UNK_10f63cc79;
  uStack_1f8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
    }
    else {
      puStack_200 = &UNK_10f63cc8c;
      uStack_1f8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar5;
        }
        puStack_200 = &UNK_10f63ccae;
        uStack_1f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f8348; end: 10a0f834b;  */

long * FUN_10a0f8348(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f83ac);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 8)) && ((int)plVar2[1] == 0xc)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ac54;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 0x20) {
        if ((int)plVar3[1] == 0x18) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ace4;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ad74;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ae00;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ae90;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10af1c;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10afa8;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10b038;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b0c4;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_140);
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b150;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b1e0;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b270;
  pppuStack_1b0 = &pppuStack_190;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1a0);
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b308;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f834c; end: 10a0f83c7;  */

long * FUN_10a0f834c(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f83ac);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 8)) && ((int)plVar2[1] == 0xc)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ac54;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 0x20) {
        if ((int)plVar3[1] == 0x18) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ace4;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 9) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ad74;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar5 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10ae00;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10ae90;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10af1c;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10afa8;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10b038;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b0c4;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_140);
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b150;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b1e0;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b270;
  pppuStack_1b0 = &pppuStack_190;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1a0);
  ppuVar4 = &puStack_1c0;
  uStack_1a8 = 0x10a10b308;
  pppuStack_1d0 = &pppuStack_1b0;
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1c0);
  ppuVar5 = &puStack_1e0;
  uStack_1c8 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1e0 = &UNK_10f63cc79;
  uStack_1d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
    }
    else {
      puStack_1e0 = &UNK_10f63cc8c;
      uStack_1d8 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_1e0 = &UNK_10f63ccae;
        uStack_1d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f83c8; end: 10a0f8437;  */

long * FUN_10a0f83c8(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f841c);
    (*pcVar1)();
  }
  plVar2 = (long *)&stack0xffffffffffffffe0;
  if ((((param_1[2] != 0) && (*(short *)((long)param_1 + 0xc) != 0x18)) &&
      (*(short *)((long)param_1 + 0xc) == 0x20)) && ((int)param_1[1] == 0x18)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10ace4;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 9) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return plVar2;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10ad74;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x1f) {
        if (*(int *)((long)ppuVar3 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10ae00;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10ae90;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10af1c;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10afa8;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_100;
  uStack_e8 = 0x10a10b038;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_120;
  uStack_108 = 0x10a10b0c4;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_120);
  ppuVar3 = &puStack_140;
  uStack_128 = 0x10a10b150;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_160;
  uStack_148 = 0x10a10b1e0;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar3 = &puStack_180;
  uStack_168 = 0x10a10b270;
  pppuStack_190 = &pppuStack_170;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar4 = &puStack_1a0;
  uStack_188 = 0x10a10b308;
  pppuStack_1b0 = &pppuStack_190;
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_1a0);
  ppuVar3 = &puStack_1c0;
  uStack_1a8 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_1c0 = &UNK_10f63cc79;
  uStack_1b8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
    }
    else {
      puStack_1c0 = &UNK_10f63cc8c;
      uStack_1b8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_1c0 = &UNK_10f63ccae;
        uStack_1b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f8438; end: 10a0f843b;  */

long * FUN_10a0f8438(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f849c);
    (*pcVar1)();
  }
  puVar3 = &stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 9)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ad74;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(undefined8 **)(puVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar3 + 0xc) == 0x1f) {
        if (*(int *)(puVar3 + 8) == 8) {
          return (long *)**(undefined8 **)(puVar3 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ae00;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ae90;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10af1c;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10afa8;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10b038;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10b0c4;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_100);
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10b150;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b1e0;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_140);
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b270;
  pppuStack_170 = &pppuStack_150;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b308;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f843c; end: 10a0f84b7;  */

long * FUN_10a0f843c(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f849c);
    (*pcVar1)();
  }
  puVar3 = &stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 9)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10ad74;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(undefined8 **)(puVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar3 + 0xc) == 0x1f) {
        if (*(int *)(puVar3 + 8) == 8) {
          return (long *)**(undefined8 **)(puVar3 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10ae00;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x22) {
        if (*(int *)((long)ppuVar4 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10ae90;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar5 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10af1c;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_c0;
  uStack_a8 = 0x10a10afa8;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar5 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar5 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar5 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar5 = &puStack_e0;
  uStack_c8 = 0x10a10b038;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_100;
  uStack_e8 = 0x10a10b0c4;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (*(uint **)((long)ppuVar5 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar5 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar5 + 0x10);
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_100);
  ppuVar5 = &puStack_120;
  uStack_108 = 0x10a10b150;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xc) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_140;
  uStack_128 = 0x10a10b1e0;
  pppuStack_150 = &pppuStack_130;
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (ppuVar5[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar5 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)ppuVar5 + 0xc) == 0x21) {
        if ((int)ppuVar5[1] == 0x20) {
          return (long *)ppuVar5;
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_140);
  ppuVar5 = &puStack_160;
  uStack_148 = 0x10a10b270;
  pppuStack_170 = &pppuStack_150;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar4 = &puStack_180;
  uStack_168 = 0x10a10b308;
  pppuStack_190 = &pppuStack_170;
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_180);
  ppuVar5 = &puStack_1a0;
  uStack_188 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_1a0 = &UNK_10f63cc79;
  uStack_198 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
    }
    else {
      puStack_1a0 = &UNK_10f63cc8c;
      uStack_198 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_1a0 = &UNK_10f63ccae;
        uStack_198 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f84b8; end: 10a0f8527;  */

long * FUN_10a0f84b8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f850c);
    (*pcVar1)();
  }
  puVar2 = &stack0xffffffffffffffe0;
  if ((((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) &&
       (*(short *)(param_1 + 0xc) != 0x18)) && (*(short *)(param_1 + 0xc) == 0x1f)) &&
     (*(int *)(param_1 + 8) == 8)) {
    return (long *)**(undefined8 **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10ae00;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(undefined8 **)(puVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar2 + 0xc) == 0x22) {
        if (*(int *)(puVar2 + 8) == 0xc) {
          return (long *)**(undefined8 **)(puVar2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10ae90;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x23) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10af1c;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x24) {
        if (*(int *)((long)ppuVar4 + 8) == 8) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10afa8;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10b038;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10b0c4;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_e0);
  ppuVar3 = &puStack_100;
  uStack_e8 = 0x10a10b150;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_120;
  uStack_108 = 0x10a10b1e0;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_120);
  ppuVar3 = &puStack_140;
  uStack_128 = 0x10a10b270;
  pppuStack_150 = &pppuStack_130;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_140);
  ppuVar4 = &puStack_160;
  uStack_148 = 0x10a10b308;
  pppuStack_170 = &pppuStack_150;
  puStack_160 = &UNK_10f63cc79;
  uStack_158 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
    }
    else {
      puStack_160 = &UNK_10f63cc8c;
      uStack_158 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_160 = &UNK_10f63ccae;
        uStack_158 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_160);
  ppuVar3 = &puStack_180;
  uStack_168 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_180 = &UNK_10f63cc79;
  uStack_178 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
    }
    else {
      puStack_180 = &UNK_10f63cc8c;
      uStack_178 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_180 = &UNK_10f63ccae;
        uStack_178 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f8528; end: 10a0f859f;  */

void FUN_10a0f8528(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_10a0f70fc();
  if (param_1 != 0) {
    func_0x00010a10ae00();
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f63ccee,0x15);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8584);
  (*pcVar1)();
}



/* Entry: 10a0f85a0; end: 10a0f860f;  */

long * FUN_10a0f85a0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f85f4);
    (*pcVar1)();
  }
  puVar2 = &stack0xffffffffffffffe0;
  if ((((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) &&
       (*(short *)(param_1 + 0xc) != 0x18)) && (*(short *)(param_1 + 0xc) == 0x23)) &&
     (*(int *)(param_1 + 8) == 0x10)) {
    return (long *)**(undefined8 **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10af1c;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(undefined8 **)(puVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar2 + 0xc) == 0x24) {
        if (*(int *)(puVar2 + 8) == 8) {
          return (long *)**(undefined8 **)(puVar2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10afa8;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x25) {
        if (*(int *)((long)ppuVar3 + 8) == 0xc) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10b038;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(undefined8 **)((long)ppuVar4 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar4 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar4 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10b0c4;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (*(uint **)((long)ppuVar3 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar3 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar3 + 0x10);
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_a0);
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10b150;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10b1e0;
  pppuStack_f0 = &pppuStack_d0;
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (ppuVar3[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x21) {
        if ((int)ppuVar3[1] == 0x20) {
          return (long *)ppuVar3;
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_e0);
  ppuVar3 = &puStack_100;
  uStack_e8 = 0x10a10b270;
  pppuStack_110 = &pppuStack_f0;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_100);
  ppuVar4 = &puStack_120;
  uStack_108 = 0x10a10b308;
  pppuStack_130 = &pppuStack_110;
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_120);
  ppuVar3 = &puStack_140;
  uStack_128 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_140 = &UNK_10f63cc79;
  uStack_138 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
    }
    else {
      puStack_140 = &UNK_10f63cc8c;
      uStack_138 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_140 = &UNK_10f63ccae;
        uStack_138 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}



/* Entry: 10a0f8610; end: 10a0f867f;  */

long * FUN_10a0f8610(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8664);
    (*pcVar1)();
  }
  puVar2 = &stack0xffffffffffffffe0;
  if ((((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) &&
       (*(short *)(param_1 + 0xc) != 0x18)) && (*(short *)(param_1 + 0xc) == 0x24)) &&
     (*(int *)(param_1 + 8) == 8)) {
    return (long *)**(undefined8 **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10afa8;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(undefined8 **)(puVar2 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)(puVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar2 + 0xc) == 0x25) {
        if (*(int *)(puVar2 + 8) == 0xc) {
          return (long *)**(undefined8 **)(puVar2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10b038;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (*(undefined8 **)((long)ppuVar3 + 0x10) != (undefined8 *)0x0) {
    if (*(short *)((long)ppuVar3 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)ppuVar3 + 0xc) == 0x26) {
        if (*(int *)((long)ppuVar3 + 8) == 0x10) {
          return (long *)**(undefined8 **)((long)ppuVar3 + 0x10);
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10b0c4;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (*(uint **)((long)ppuVar4 + 0x10) != (uint *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x17) {
        if (*(int *)((long)ppuVar4 + 8) == 4) {
          return (long *)(ulong)**(uint **)((long)ppuVar4 + 0x10);
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10b150;
  pppuStack_b0 = &pppuStack_90;
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10b1e0;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_c0);
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10b270;
  pppuStack_f0 = &pppuStack_d0;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar3;
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_e0);
  ppuVar3 = &puStack_100;
  uStack_e8 = 0x10a10b308;
  pppuStack_110 = &pppuStack_f0;
  puStack_100 = &UNK_10f63cc79;
  uStack_f8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
    }
    else {
      puStack_100 = &UNK_10f63cc8c;
      uStack_f8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_100 = &UNK_10f63ccae;
        uStack_f8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_100);
  ppuVar4 = &puStack_120;
  uStack_108 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_120 = &UNK_10f63cc79;
  uStack_118 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
    }
    else {
      puStack_120 = &UNK_10f63cc8c;
      uStack_118 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar3;
        }
        puStack_120 = &UNK_10f63ccae;
        uStack_118 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f8680; end: 10a0f86f7;  */

void FUN_10a0f8680(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  FUN_10a0f70fc();
  if (param_1 != 0) {
    func_0x00010a10afa8();
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f63ccee,0x15);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f86dc);
  (*pcVar1)();
}



/* Entry: 10a0f86f8; end: 10a0f8767;  */

long * FUN_10a0f86f8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == 0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f874c);
    (*pcVar1)();
  }
  puVar2 = &stack0xffffffffffffffe0;
  if ((((*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) &&
       (*(short *)(param_1 + 0xc) != 0x18)) && (*(short *)(param_1 + 0xc) == 0x26)) &&
     (*(int *)(param_1 + 8) == 0x10)) {
    return (long *)**(undefined8 **)(param_1 + 0x10);
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10b0c4;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (*(uint **)(puVar2 + 0x10) != (uint *)0x0) {
    if (*(short *)(puVar2 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)(puVar2 + 0xc) == 0x17) {
        if (*(int *)(puVar2 + 8) == 4) {
          return (long *)(ulong)**(uint **)(puVar2 + 0x10);
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10b150;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xc) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10b1e0;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (ppuVar4[2] != (undefined *)0x0) {
    if (*(short *)((long)ppuVar4 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)ppuVar4 + 0xc) == 0x21) {
        if ((int)ppuVar4[1] == 0x20) {
          return (long *)ppuVar4;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar4 = &puStack_a0;
  uStack_88 = 0x10a10b270;
  pppuStack_b0 = &pppuStack_90;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar3;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_a0);
  ppuVar3 = &puStack_c0;
  uStack_a8 = 0x10a10b308;
  pppuStack_d0 = &pppuStack_b0;
  puStack_c0 = &UNK_10f63cc79;
  uStack_b8 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
    }
    else {
      puStack_c0 = &UNK_10f63cc8c;
      uStack_b8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar4;
        }
        puStack_c0 = &UNK_10f63ccae;
        uStack_b8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_c0);
  ppuVar4 = &puStack_e0;
  uStack_c8 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_e0 = &UNK_10f63cc79;
  uStack_d8 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
    }
    else {
      puStack_e0 = &UNK_10f63cc8c;
      uStack_d8 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar3;
        }
        puStack_e0 = &UNK_10f63ccae;
        uStack_d8 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar4;
  *ppuVar4 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar4;
}



/* Entry: 10a0f8768; end: 10a0f8813;  */

uint FUN_10a0f8768(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_38 [24];
  
  FUN_10a0f70fc();
  if (param_1 != 0) {
    func_0x00010a10b0c4();
    uVar2 = 0;
    if ((param_1 & 0xff000000) != 0) {
      uVar2 = 0x1000000;
    }
    uVar3 = 0;
    if ((param_1 & 0xff0000) != 0) {
      uVar3 = 0x10000;
    }
    uVar4 = 0;
    if ((param_1 & 0xff00) != 0) {
      uVar4 = 0x100;
    }
    uVar2 = uVar3 | uVar4 | uVar2;
    if ((param_1 & 0xff) != 0) {
      uVar2 = uVar2 + 1;
    }
    return uVar2;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f63ccee,0x15);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f87f8);
  (*pcVar1)();
}



/* Entry: 10a0f8814; end: 10a0f8817;  */

long * FUN_10a0f8814(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8878);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0xc)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10b1e0;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 0x21) {
        if ((int)plVar3[1] == 0x20) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10b270;
  pppuStack_70 = &ppuStack_50;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10b308;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f8818; end: 10a0f8893;  */

long * FUN_10a0f8818(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = param_1;
  FUN_10a0f70fc();
  if (plVar2 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f8878);
    (*pcVar1)();
  }
  plVar3 = (long *)&stack0xffffffffffffffe0;
  if ((((plVar2[2] != 0) && (*(short *)((long)plVar2 + 0xc) != 0x18)) &&
      (*(short *)((long)plVar2 + 0xc) == 0xc)) && ((int)plVar2[1] == 0x10)) {
    return param_1;
  }
  FUN_10a0edfc4();
  ppuVar4 = &puStack_40;
  uStack_28 = 0x10a10b1e0;
  ppuStack_50 = &puStack_30;
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (plVar3[2] != 0) {
    if (*(short *)((long)plVar3 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)plVar3 + 0xc) == 0x21) {
        if ((int)plVar3[1] == 0x20) {
          return plVar3;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar5 = &puStack_60;
  uStack_48 = 0x10a10b270;
  pppuStack_70 = &ppuStack_50;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0xb) {
        if ((int)plVar2[1] == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return (long *)ppuVar4;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar4 = &puStack_80;
  uStack_68 = 0x10a10b308;
  pppuStack_90 = &pppuStack_70;
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (plVar2[2] != 0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 0x16) {
        if ((int)plVar2[1] == 0x10) {
          return (long *)ppuVar5;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_80);
  ppuVar5 = &puStack_a0;
  uStack_88 = 0x10a10b398;
  puVar7 = (undefined8 *)plVar2[2];
  puStack_a0 = &UNK_10f63cc79;
  uStack_98 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)plVar2 + 0xc) == 0x18) {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
    }
    else {
      puStack_a0 = &UNK_10f63cc8c;
      uStack_98 = 0x21;
      if (*(short *)((long)plVar2 + 0xc) == 10) {
        if ((int)plVar2[1] == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_a0 = &UNK_10f63ccae;
        uStack_98 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 10a0f8894; end: 10a0f8903;  */

long * FUN_10a0f8894(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 ***pppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar6 = param_2;
  FUN_10a0f70fc();
  if (param_1 == (long *)0x0) {
    puStack_40 = (undefined *)*param_2;
    FUN_10a0ee900(&uStack_38,&UNK_10f63ccee,0x15);
    FUN_10a0029c0(&uStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0f88e8);
    (*pcVar1)();
  }
  plVar2 = (long *)&stack0xffffffffffffffe0;
  if ((((param_1[2] != 0) && (*(short *)((long)param_1 + 0xc) != 0x18)) &&
      (*(short *)((long)param_1 + 0xc) == 0x21)) && ((int)param_1[1] == 0x20)) {
    return param_1;
  }
  FUN_10a0edfc4(&stack0xffffffffffffffe0);
  ppuVar3 = &puStack_40;
  uStack_28 = 0x10a10b270;
  ppuStack_50 = &puStack_30;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_40 = &UNK_10f63cc79;
  uStack_38 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
    }
    else {
      puStack_40 = &UNK_10f63cc8c;
      uStack_38 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0xb) {
        if (*(int *)(puVar6 + 1) == 0x40) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8[1] = puVar7[1];
          *extraout_x8 = uVar8;
          extraout_x8[3] = uVar10;
          extraout_x8[2] = uVar9;
          uVar8 = puVar7[4];
          uVar10 = puVar7[7];
          uVar9 = puVar7[6];
          extraout_x8[5] = puVar7[5];
          extraout_x8[4] = uVar8;
          extraout_x8[7] = uVar10;
          extraout_x8[6] = uVar9;
          return plVar2;
        }
        puStack_40 = &UNK_10f63ccae;
        uStack_38 = 0x11;
      }
    }
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4(&puStack_40);
  ppuVar4 = &puStack_60;
  uStack_48 = 0x10a10b308;
  pppuStack_70 = &ppuStack_50;
  puStack_60 = &UNK_10f63cc79;
  uStack_58 = 0x12;
  if (puVar6[2] != 0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
    }
    else {
      puStack_60 = &UNK_10f63cc8c;
      uStack_58 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 0x16) {
        if (*(int *)(puVar6 + 1) == 0x10) {
          return (long *)ppuVar3;
        }
        puStack_60 = &UNK_10f63ccae;
        uStack_58 = 0x11;
      }
    }
  }
  FUN_10a0edfc4(&puStack_60);
  ppuVar3 = &puStack_80;
  uStack_68 = 0x10a10b398;
  puVar7 = (undefined8 *)puVar6[2];
  puStack_80 = &UNK_10f63cc79;
  uStack_78 = 0x12;
  if (puVar7 != (undefined8 *)0x0) {
    if (*(short *)((long)puVar6 + 0xc) == 0x18) {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
    }
    else {
      puStack_80 = &UNK_10f63cc8c;
      uStack_78 = 0x21;
      if (*(short *)((long)puVar6 + 0xc) == 10) {
        if (*(int *)(puVar6 + 1) == 0x24) {
          uVar8 = *puVar7;
          uVar10 = puVar7[3];
          uVar9 = puVar7[2];
          extraout_x8_00[1] = puVar7[1];
          *extraout_x8_00 = uVar8;
          extraout_x8_00[3] = uVar10;
          extraout_x8_00[2] = uVar9;
          *(undefined4 *)(extraout_x8_00 + 4) = *(undefined4 *)(puVar7 + 4);
          return (long *)ppuVar4;
        }
        puStack_80 = &UNK_10f63ccae;
        uStack_78 = 0x11;
      }
    }
  }
  FUN_10a0edfc4();
  func_0x00010a10b468();
  lVar5 = (long)*ppuVar3;
  *ppuVar3 = (undefined *)0x0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return (long *)ppuVar3;
}


