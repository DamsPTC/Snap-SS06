/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0037fc3c; end: 0037fc6f;  */

ulong FUN_0037fc3c(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = lRam0000000000b65d18;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  lVar5 = *(long *)(lVar2 + 0xd8);
  if (*(long *)(lVar2 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "message_size";
    do {
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar3 + 0x10))();
      iVar1 = (int)plVar3;
      if ((pcVar4 == "\x06") && (pcVar4 = "message_size", _memcmp(), iVar1 == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar2 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar2 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 0037fc70; end: 0037fd53;  */

int FUN_0037fc70(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_003a21a4(param_1,"grpc.minimal_stack",0x12);
  uVar1 = (uint)uVar4 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a2028(param_1,"grpc.max_receive_message_length",0x1f);
    iVar2 = (int)param_1;
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    iVar3 = 0x400000;
    if ((param_1 & 0xff00000000) != 0) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



/* Entry: 0037fd54; end: 0037ff6f;  */

void FUN_0037fd54(undefined8 ***param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 ***pppuVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 **ppuVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar11 = param_1[2];
  bVar3 = (byte)param_2[2];
  if ((((bVar3 >> 2 & 1) == 0) || (uVar1 = *(uint *)(ppuVar11 + 1), (int)uVar1 < 0)) ||
     (ppuVar7 = *(undefined8 ***)(*(long *)(param_2[1] + 0x28) + 0x20),
     ppuVar7 <= (undefined8 **)(ulong)uVar1)) {
    if ((bVar3 >> 4 & 1) != 0) {
      uVar6 = param_2[1];
      ppuVar11[0xc] = *(undefined8 **)(uVar6 + 0x78);
      ppuVar11[0xb] = *(undefined8 **)(uVar6 + 0x60);
      *(undefined8 ***)(uVar6 + 0x78) = ppuVar11 + 2;
      bVar3 = (byte)param_2[2];
    }
    if ((bVar3 >> 5 & 1) != 0) {
      uVar6 = param_2[1];
      ppuVar11[0xd] = *(undefined8 **)(uVar6 + 0x90);
      *(undefined8 ***)(uVar6 + 0x90) = ppuVar11 + 6;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x003a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1[3])(param_1 + 3,param_2);
      return;
    }
  }
  else {
    uStack_50 = 0x560a20;
    uStack_40 = 0x5606ac;
    puStack_58 = ppuVar7;
    puStack_48 = (undefined8 **)(ulong)uVar1;
    FUN_0056189c(&ppuStack_80,"Sent message larger than max (%u vs. %d)",0x28,&puStack_58,2);
    pppuVar4 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      pppuVar4 = &ppuStack_80;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    FUN_003b646c(&uStack_68,2,pppuVar4,uStack_78,&uStack_81,&uStack_a0);
    FUN_003be104(&uStack_60,&uStack_68,3,8);
    puVar5 = &uStack_60;
    FUN_004007f4(param_2,puVar5,*ppuVar11);
    param_2 = puVar5;
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
      param_2 = puVar5;
    }
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
    }
    param_1 = (undefined8 ***)&puStack_58;
    puStack_58 = &uStack_a0;
    FUN_0033d548();
    if ((char)bStack_69 < '\0') {
      param_1 = (undefined8 ***)ppuStack_80;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_60);
    FUN_0033c494(&uStack_68);
    puStack_58 = &uStack_a0;
    FUN_0033d548(&puStack_58);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppuStack_80);
    }
  }
  __Unwind_Resume();
  ppuVar11 = param_1[1];
  ppuVar7 = param_1[2];
  *ppuVar7 = (undefined8 *)param_2[7];
  puVar8 = *ppuVar11;
  ppuVar7[1] = puVar8;
  *(undefined1 *)(ppuVar7 + 0xe) = 0;
  ppuVar7[0xf] = (undefined8 *)0x0;
  ppuVar7[0xb] = (undefined8 *)0x0;
  ppuVar7[0xc] = (undefined8 *)0x0;
  ppuVar7[3] = (undefined8 *)FUN_00380478;
  ppuVar7[4] = param_1;
  ppuVar7[5] = (undefined8 *)0x0;
  ppuVar7[7] = (undefined8 *)FUN_003807cc;
  ppuVar7[8] = param_1;
  ppuVar7[9] = (undefined8 *)0x0;
  ppuVar7[10] = (undefined8 *)0x0;
  if (((param_2[2] != 0) && (lVar9 = *(long *)(param_2[2] + 0x40), lVar9 != 0)) &&
     ((plVar10 = *(long **)(lVar9 + 8), plVar10 != (long *)0x0 &&
      (lVar9 = *(long *)(*plVar10 + (long)ppuVar11[1] * 8), lVar9 != 0)))) {
    iVar2 = *(int *)(lVar9 + 8);
    if ((-1 < iVar2) && (((int)puVar8 < 0 || (iVar2 < (int)puVar8)))) {
      *(int *)(ppuVar7 + 1) = iVar2;
    }
    iVar2 = *(int *)(lVar9 + 0xc);
    if ((-1 < iVar2) && (((long)puVar8 < 0 || (iVar2 < (int)((ulong)puVar8 >> 0x20))))) {
      *(int *)((long)ppuVar7 + 0xc) = iVar2;
    }
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 0037ff70; end: 00380013;  */

void FUN_0037ff70(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  lVar4 = *plVar1;
  puVar2[1] = lVar4;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[0xf] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[3] = FUN_00380478;
  puVar2[4] = param_2;
  puVar2[5] = 0;
  puVar2[7] = FUN_003807cc;
  puVar2[8] = param_2;
  puVar2[9] = 0;
  puVar2[10] = 0;
  if ((((*(long *)(param_3 + 0x10) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_3 + 0x10) + 0x40), lVar5 != 0)) &&
      (plVar6 = *(long **)(lVar5 + 8), plVar6 != (long *)0x0)) &&
     (lVar5 = *(long *)(*plVar6 + plVar1[1] * 8), lVar5 != 0)) {
    iVar3 = *(int *)(lVar5 + 8);
    if ((-1 < iVar3) && (((int)lVar4 < 0 || (iVar3 < (int)lVar4)))) {
      *(int *)(puVar2 + 1) = iVar3;
    }
    iVar3 = *(int *)(lVar5 + 0xc);
    if ((-1 < iVar3) && ((lVar4 < 0 || (iVar3 < (int)((ulong)lVar4 >> 0x20))))) {
      *(int *)((long)puVar2 + 0xc) = iVar3;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 00380014; end: 0038004f;  */

void FUN_00380014(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0x78) & 1) != 0) {
    FUN_0055293c();
  }
  if ((*(ulong *)(lVar1 + 0x50) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00380050; end: 00380117;  */

void FUN_00380050(undefined8 *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  puVar4 = auStack_40;
  puVar5 = auStack_40;
  if (*(int *)(param_3 + 0x14) == 0) {
    puVar7 = *(ulong **)(param_2 + 8);
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_0037fc3c();
    puVar7[1] = param_2;
    FUN_003a1d70(auStack_40,*(undefined8 *)(param_3 + 8));
    func_0x0037fce4();
    func_0x0037fc70();
    *puVar7 = (ulong)puVar4 & 0xffffffff | (long)puVar5 << 0x20;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    *param_1 = 0;
    return;
  }
  func_0x007726f4();
  FUN_0033d180(auStack_40);
  __Unwind_Resume(param_2);
  return;
}



/* Entry: 00380118; end: 0038011b;  */

void FUN_00380118(void)

{
  return;
}



/* Entry: 0038011c; end: 003802e7;  */

undefined *** FUN_0038011c(long param_1)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0037fbb8();
  param_1 = param_1 + 0x18;
  ppuStack_58 = &PTR_FUN_009de508;
  pcStack_50 = FUN_003802e8;
  pppuStack_40 = &ppuStack_58;
  FUN_003f517c(param_1,1,&UNK_00002710,&ppuStack_58);
  if (pppuStack_40 == &ppuStack_58) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_58;
LAB_0038019c:
    (*(code *)(*pppuVar2)[lVar4])();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar2 = pppuStack_40;
    goto LAB_0038019c;
  }
  ppuStack_78 = &PTR_FUN_009de508;
  pcStack_70 = FUN_00380344;
  pppuStack_60 = &ppuStack_78;
  FUN_003f517c(param_1,3,&UNK_00002710,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_78;
LAB_003801f0:
    (*(code *)(*pppuVar2)[lVar4])();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar4 = 5;
    pppuVar2 = pppuStack_60;
    goto LAB_003801f0;
  }
  ppuStack_98 = &PTR_FUN_009de508;
  pcStack_90 = FUN_00380344;
  pppuStack_80 = &ppuStack_98;
  FUN_003f517c(param_1,4,&UNK_00002710,&ppuStack_98);
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_98;
LAB_0038023c:
    (*(code *)(*pppuVar2)[lVar4])();
  }
  else {
    pppuVar2 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      lVar4 = 5;
      goto LAB_0038023c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  if (pppuStack_80 == &ppuStack_98) {
    lVar4 = 4;
    pppuVar3 = &ppuStack_98;
  }
  else {
    if (pppuStack_80 == (undefined ***)0x0) goto LAB_003802e0;
    lVar4 = 5;
    pppuVar3 = pppuStack_80;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_003802e0:
  __Unwind_Resume();
  pppuVar3 = pppuVar2 + 7;
  FUN_003a21a4(pppuVar3,"grpc.minimal_stack",0x12);
  uVar1 = (uint)pppuVar3 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a6bac(pppuVar2,&PTR_FUN_009de928);
  }
  return (undefined ***)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 003802e8; end: 00380343;  */

undefined8 FUN_003802e8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x38;
  FUN_003a21a4(lVar2,"grpc.minimal_stack",0x12);
  uVar1 = (uint)lVar2 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_003a6bac(param_1,&PTR_FUN_009de928);
  }
  return 1;
}



/* Entry: 00380344; end: 0038045f;  */

undefined8 FUN_00380344(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_48 [16];
  char cStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  plStack_28 = *(long **)(param_1 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = &uStack_30;
  FUN_003a21a4(puVar7,"grpc.minimal_stack",0x12);
  uVar5 = (uint)puVar7 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    uVar5 = (uint)&uStack_30;
    func_0x0037fce4();
    uVar6 = (uint)&uStack_30;
    func_0x0037fc70();
    if ((uVar6 & uVar5) == 0xffffffff) {
      FUN_003a20f4(auStack_48,&uStack_30,"grpc.service_config",0x13);
      if (cStack_38 == '\0') goto LAB_003803f4;
    }
    FUN_003a6bac(param_1,&PTR_FUN_009de928);
  }
LAB_003803f4:
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return 1;
}



/* Entry: 00380460; end: 00380477;  */

void FUN_00380460(void)

{
  return;
}



/* Entry: 00380478; end: 003807cb;  */

void FUN_00380478(long param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  bool bVar17;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 uStack_139;
  ulong uStack_138;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  ulong uStack_68;
  ulong uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar16 = *(undefined8 **)(param_1 + 0x10);
  if (((*(char *)(puVar16[0xb] + 0x128) != '\0') &&
      (uVar1 = *(uint *)((long)puVar16 + 0xc), -1 < (int)uVar1)) &&
     (pcVar13 = *(char **)(puVar16[0xb] + 0x20), (char *)(ulong)uVar1 < pcVar13)) {
    uStack_50 = 0x560a20;
    uStack_40 = 0x5606ac;
    pcStack_58 = pcVar13;
    pcStack_48 = (char *)(ulong)uVar1;
    FUN_0056189c(&pppuStack_80,"Received message larger than max (%u vs. %d)",0x2c,&pcStack_58,2);
    ppppuVar4 = (undefined8 ****)pppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      ppppuVar4 = &pppuStack_80;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    FUN_003b646c(&uStack_68,2,ppppuVar4,uStack_78,&uStack_81,&uStack_a0);
    FUN_003be104(&uStack_60,&uStack_68,3,8);
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_58 = (char *)&uStack_a0;
    FUN_0033d548(&pcStack_58);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(pppuStack_80);
    }
    uStack_a8 = *param_2;
    if ((uStack_a8 & 1) != 0) {
      piVar10 = (int *)(uStack_a8 - 1);
      do {
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar17) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_b0 = uStack_60;
    if ((uStack_60 & 1) != 0) {
      piVar10 = (int *)(uStack_60 - 1);
      do {
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar17) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be56c(&pcStack_58,&uStack_a8,&uStack_b0);
    pcVar13 = (char *)*param_2;
    if (pcStack_58 == pcVar13) {
LAB_003805e8:
      if (((ulong)pcVar13 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = (ulong)pcStack_58;
      pcStack_58 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar13 & 1) != 0) {
        FUN_0055293c();
        pcVar13 = pcStack_58;
        goto LAB_003805e8;
      }
    }
    if ((uStack_b0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
    uVar5 = puVar16[10];
    uVar11 = *param_2;
    if (uVar11 != uVar5) {
      if ((uVar11 & 1) != 0) {
        piVar10 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar17) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar11 = *param_2;
      }
      puVar16[10] = uVar11;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((uStack_60 & 1) != 0) {
      FUN_0055293c();
    }
  }
  puVar14 = (ulong *)puVar16[0xc];
  puVar16[0xc] = 0;
  if (*(char *)(puVar16 + 0xe) != '\0') {
    *(undefined1 *)(puVar16 + 0xe) = 0;
    uVar6 = *puVar16;
    uStack_b8 = puVar16[0xf];
    if ((uStack_b8 & 1) != 0) {
      piVar10 = (int *)(uStack_b8 - 1);
      do {
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar17) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bb88c(uVar6,puVar16 + 6,&uStack_b8,"continue recv_trailing_metadata_ready");
    if ((uStack_b8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uStack_c0 = *param_2;
  if ((uStack_c0 & 1) != 0) {
    piVar10 = (int *)(uStack_c0 - 1);
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar17) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar9 = puVar14;
  FUN_00342584(&pcStack_58,puVar14,&uStack_c0);
  uVar5 = uStack_c0;
  if ((uStack_c0 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&uStack_60);
  uVar11 = uVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_003807cc;
  puVar16 = *(undefined8 **)(uVar11 + 0x10);
  puStack_e0 = puVar14;
  uStack_d8 = uVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (puVar16[0xc] != 0) {
    *(undefined1 *)(puVar16 + 0xe) = 1;
    uVar5 = puVar16[0xf];
    uVar11 = *puVar9;
    if (uVar11 != uVar5) {
      if ((uVar11 & 1) != 0) {
        piVar10 = (int *)(uVar11 - 1);
        do {
          cVar2 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar17) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar11 = *puVar9;
      }
      puVar16[0xf] = uVar11;
      if ((uVar5 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar7 = (long *)*puVar16;
    pcVar13 = "deferring recv_trailing_metadata_ready until after recv_message_ready";
    do {
      lVar12 = *plVar7;
      lVar3 = lVar12 + -1;
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar3 != 0) {
      if (lVar12 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_f8);
        FUN_0033c494(&uStack_f0);
        __Unwind_Resume();
        plVar7 = plVar7 + 0xb;
        do {
          pcVar15 = (char *)*plVar7;
          if (((ulong)pcVar15 & 1) == 0) {
            uStack_138 = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar7 != pcVar15) {
                ClearExclusiveLocal();
                bVar17 = true;
                goto LAB_003bbb24;
              }
              cVar2 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar17) {
                *plVar7 = (long)pcVar13;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pcVar15 == (char *)0x0) goto LAB_003bbb14;
            uStack_150 = 0;
            FUN_003c1e6c(&uStack_139,pcVar15,&uStack_150);
            if ((uStack_150 & 1) != 0) {
              FUN_0055293c();
            }
            bVar17 = false;
            pcVar13 = pcVar15;
          }
          else {
            FUN_003b7b3c(&uStack_138,(ulong)pcVar15 & 0xfffffffffffffffe);
            if (uStack_138 == 0) goto LAB_003bbad0;
            uStack_148 = uStack_138;
            if ((uStack_138 & 1) != 0) {
              piVar10 = (int *)(uStack_138 - 1);
              do {
                cVar2 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar17) {
                  *piVar10 = *piVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            FUN_003c1e6c(&uStack_139,pcVar13,&uStack_148);
            if ((uStack_148 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar17 = false;
          }
LAB_003bbb24:
          if ((uStack_138 & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar17) {
            return;
          }
        } while( true );
      }
      plVar7 = plVar7 + 1;
      plVar8 = plVar7;
      FUN_0033b3e4(plVar7,(long)&uStack_e8 + 7);
      while (plVar8 == (long *)0x0) {
        plVar8 = plVar7;
        FUN_0033b3e4(plVar7,(long)&uStack_e8 + 7);
      }
      FUN_003b7b6c(&uStack_f0,plVar8[3]);
      uVar5 = uStack_f0;
      plVar8[3] = 0;
      uStack_f8 = uStack_f0;
      if ((uStack_f0 & 1) != 0) {
        piVar10 = (int *)(uStack_f0 - 1);
        do {
          cVar2 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar17) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003bb81c();
      if ((uVar5 & 1) != 0) {
        FUN_0055293c(uVar5);
      }
      if ((uStack_f0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_f0 = *puVar9;
  if ((uStack_f0 & 1) != 0) {
    piVar10 = (int *)(uStack_f0 - 1);
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar17) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_f8 = puVar16[10];
  if ((uStack_f8 & 1) != 0) {
    piVar10 = (int *)(uStack_f8 - 1);
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar17) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003be56c(&uStack_e8,&uStack_f0,&uStack_f8);
  uVar5 = *puVar9;
  if (uStack_e8 != uVar5) {
    *puVar9 = uStack_e8;
    uStack_e8 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_003808c8;
    FUN_0055293c();
    uVar5 = uStack_e8;
  }
  if ((uVar5 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003808c8:
  if ((uStack_f8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_f0 & 1) != 0) {
    FUN_0055293c();
  }
  uVar6 = puVar16[0xd];
  uStack_100 = *puVar9;
  if ((uStack_100 & 1) != 0) {
    piVar10 = (int *)(uStack_100 - 1);
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar17) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00342584(&uStack_e8,uVar6,&uStack_100);
  if ((uStack_100 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003807cc; end: 00380973;  */

void FUN_003807cc(long param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  bool bVar13;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  if (puVar11[0xc] != 0) {
    *(undefined1 *)(puVar11 + 0xe) = 1;
    uVar3 = puVar11[0xf];
    uVar8 = *param_2;
    if (uVar8 != uVar3) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar13) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar8 = *param_2;
      }
      puVar11[0xf] = uVar8;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
    plVar4 = (long *)*puVar11;
    pcVar7 = "deferring recv_trailing_metadata_ready until after recv_message_ready";
    do {
      lVar10 = *plVar4;
      lVar2 = lVar10 + -1;
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar13) {
        *plVar4 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar2 != 0) {
      if (lVar10 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_38);
        FUN_0033c494(&uStack_30);
        __Unwind_Resume();
        plVar4 = plVar4 + 0xb;
        do {
          pcVar12 = (char *)*plVar4;
          if (((ulong)pcVar12 & 1) == 0) {
            uStack_78 = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar4 != pcVar12) {
                ClearExclusiveLocal();
                bVar13 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar13) {
                *plVar4 = (long)pcVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar12 == (char *)0x0) goto LAB_003bbb14;
            uStack_90 = 0;
            FUN_003c1e6c(&uStack_79,pcVar12,&uStack_90);
            if ((uStack_90 & 1) != 0) {
              FUN_0055293c();
            }
            bVar13 = false;
            pcVar7 = pcVar12;
          }
          else {
            FUN_003b7b3c(&uStack_78,(ulong)pcVar12 & 0xfffffffffffffffe);
            if (uStack_78 == 0) goto LAB_003bbad0;
            uStack_88 = uStack_78;
            if ((uStack_78 & 1) != 0) {
              piVar9 = (int *)(uStack_78 - 1);
              do {
                cVar1 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar13) {
                  *piVar9 = *piVar9 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c(&uStack_79,pcVar7,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar13 = false;
          }
LAB_003bbb24:
          if ((uStack_78 & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar13) {
            return;
          }
        } while( true );
      }
      plVar4 = plVar4 + 1;
      plVar5 = plVar4;
      FUN_0033b3e4(plVar4,(long)&uStack_28 + 7);
      while (plVar5 == (long *)0x0) {
        plVar5 = plVar4;
        FUN_0033b3e4(plVar4,(long)&uStack_28 + 7);
      }
      FUN_003b7b6c(&uStack_30,plVar5[3]);
      uVar3 = uStack_30;
      plVar5[3] = 0;
      uStack_38 = uStack_30;
      if ((uStack_30 & 1) != 0) {
        piVar9 = (int *)(uStack_30 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar13) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((uVar3 & 1) != 0) {
        FUN_0055293c(uVar3);
      }
      if ((uStack_30 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar9 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = puVar11[10];
  if ((uStack_38 & 1) != 0) {
    piVar9 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&uStack_28,&uStack_30,&uStack_38);
  uVar3 = *param_2;
  if (uStack_28 != uVar3) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_003808c8;
    FUN_0055293c();
    uVar3 = uStack_28;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003808c8:
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  uVar6 = puVar11[0xd];
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar9 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar13) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_28,uVar6,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00380974; end: 0038097b;  */

void FUN_00380974(void)

{
  return;
}



/* Entry: 0038097c; end: 003809df;  */

bool FUN_0038097c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = 0;
  bVar3 = false;
  do {
    uVar2 = param_1;
    _strncmp(param_1,(&PTR_s_grpc_exp_009dea18)[lVar4],param_2);
    if ((int)uVar2 == 0) break;
    lVar4 = 1;
    bVar1 = !bVar3;
    bVar3 = true;
  } while (bVar1);
  return (int)uVar2 == 0;
}



/* Entry: 003809e0; end: 003809e7;  */

undefined8 FUN_003809e0(void)

{
  return 2;
}



/* Entry: 003809e8; end: 00380a0f;  */

undefined8 * FUN_003809e8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 < (undefined8 *)((long)&MACH_HEADER.magic + 2)) {
    return (undefined8 *)(&PTR_s_grpc_exp_009dea18)[(long)param_1];
  }
  func_0x0077272c();
  *param_1 = &PTR_FUN_009dea38;
  if (param_1[0x11] != 0) {
    FUN_003bcf54();
  }
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_0033e204(param_1 + 0x21);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 00380a10; end: 00380a8f;  */

undefined8 * FUN_00380a10(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dea38;
  if (param_1[0x11] != 0) {
    FUN_003bcf54();
  }
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_0033e204(param_1 + 0x21);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 00380a90; end: 00380a93;  */

undefined8 * FUN_00380a90(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dea38;
  if (param_1[0x11] != 0) {
    FUN_003bcf54();
  }
  plVar4 = (long *)param_1[0x23];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_0033e204(param_1 + 0x21);
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 00380a94; end: 00380aa7;  */

void FUN_00380a94(void)

{
  FUN_00380a10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00380aa8; end: 00380e53;  */

/* WARNING: Removing unreachable block (ram,0x00380b8c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00380aa8(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong auStack_130 [4];
  undefined1 uStack_109;
  ulong uStack_108;
  long alStack_100 [4];
  ulong *apuStack_e0 [4];
  undefined1 auStack_c0 [32];
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 *******pppppppuStack_98;
  byte bStack_89;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00339d8c(param_1 + 0x10);
  plVar13 = (long *)(param_1 + 0x78);
  if (*plVar13 == 0) {
    uVar7 = *param_2;
    uVar15 = param_2[3];
    uVar14 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[1];
    *(undefined8 *)(param_1 + 0x50) = uVar7;
    *(undefined8 *)(param_1 + 0x68) = uVar15;
    *(undefined8 *)(param_1 + 0x60) = uVar14;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(undefined8 *)(param_1 + 0x78) = param_4;
    if (*(long *)(param_1 + 0x88) == 0) {
      func_0x00339da8(param_1 + 0x10);
      FUN_003a0d08(alStack_100,*param_2);
      if (alStack_100[0] == 0) {
        plVar13 = alStack_100;
        FUN_00375c3c();
        plVar8 = (long *)*plVar13;
        if (-1 < *(char *)((long)plVar13 + 0x17)) {
          plVar8 = plVar13;
        }
        FUN_003a2ec4(apuStack_e0,"grpc.internal.tcp_handshaker_resolved_address",plVar8);
        func_0x003a2ed0(auStack_c0,"grpc.internal.tcp_handshaker_bind_endpoint_to_pollset",1);
        FUN_00353aa0(&bStack_a0,apuStack_e0,&bStack_a0,&uStack_108);
        puVar6 = *(ulong **)(param_1 + 0x68);
        pppppppuVar1 = &pppppppuStack_98;
        if ((bStack_a0 & 1) != 0) {
          pppppppuVar1 = pppppppuStack_98;
        }
        FUN_003a1ecc(puVar6,pppppppuVar1,CONCAT71(uStack_9f,bStack_a0) >> 1);
        uVar7 = 0x148;
        __Znwm();
        FUN_003fc12c();
        plVar13 = *(long **)(param_1 + 0x118);
        if (plVar13 != (long *)0x0) {
          plVar8 = plVar13 + 1;
          do {
            lVar12 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        *(undefined8 *)(param_1 + 0x118) = uVar7;
        lVar12 = lRam0000000000b65d18;
        if (lRam0000000000b65d18 == 0) {
          FUN_003b171c();
        }
        FUN_003fce44(lVar12 + 0x90,0,puVar6,*(undefined8 *)(param_1 + 0x58),
                     *(undefined8 *)(param_1 + 0x118));
        plVar13 = (long *)(param_1 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar13 = (long *)0x0;
        puVar9 = puVar6;
        FUN_003fc81c(*(undefined8 *)(param_1 + 0x118),0,puVar6,param_2[2],0,FUN_00380ecc,param_1);
        FUN_003a2a64(puVar6);
        if ((bStack_a0 & 1) != 0) {
          __ZdlPv(pppppppuStack_98);
        }
      }
      else {
        FUN_00552ec8(&bStack_a0,alStack_100,1);
        pbVar4 = (byte *)CONCAT71(uStack_9f,bStack_a0);
        if (-1 < (char)bStack_89) {
          pppppppuStack_98 = (undefined8 *******)(ulong)bStack_89;
          pbVar4 = &bStack_a0;
        }
        auStack_130[2] = 0;
        auStack_130[3] = 0;
        auStack_130[1] = 0;
        FUN_003b646c(&uStack_108,2,pbVar4,pppppppuStack_98,&uStack_109,auStack_130 + 1);
        apuStack_e0[0] = auStack_130 + 1;
        FUN_0033d548(apuStack_e0);
        uVar11 = uStack_108;
        auStack_130[0] = uStack_108;
        if ((uStack_108 & 1) != 0) {
          piVar10 = (int *)(uStack_108 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar9 = auStack_130;
        FUN_00380e54(&bStack_a0);
        if ((uVar11 & 1) != 0) {
          FUN_0055293c(uVar11);
        }
        if ((uStack_108 & 1) != 0) {
          FUN_0055293c();
        }
      }
      plVar8 = alStack_100;
      FUN_0035d18c();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
        ___stack_chk_fail();
        if ((int)plVar13 == 0) {
          __Unwind_Resume(plVar8);
        }
        func_0x0040cf10(plVar8);
        *plVar13 = 0;
        uVar11 = *puVar9;
        if ((uVar11 & 1) != 0) {
          piVar10 = (int *)(uVar11 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003c1e6c();
        if ((uVar11 & 1) != 0) {
          FUN_0055293c();
        }
        return;
      }
      return;
    }
    uVar7 = 0x6a;
  }
  else {
    uVar7 = 0x66;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
               ,uVar7,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x380d88);
  (*pcVar5)();
}



/* Entry: 00380e54; end: 00380ecb;  */

void FUN_00380e54(undefined8 param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *param_2;
  *param_2 = 0;
  uStack_28 = *param_3;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(param_1,uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00380ecc; end: 00381277;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00380ecc(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  code *pcVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  plVar10 = (long *)param_1[4];
  func_0x00339d8c(plVar10 + 2);
  if (*param_2 == 0) {
    if ((char)plVar10[0x10] == '\0') {
      if (*param_1 == 0) {
        uStack_78 = 0;
        FUN_00380e54(&puStack_38,plVar10 + 0xf,&uStack_78);
      }
      else {
        lVar8 = param_1[1];
        FUN_00387f70(lVar8,*param_1,1);
        *(long *)plVar10[0xe] = lVar8;
        FUN_00387f48(&puStack_38);
        puVar4 = puStack_38;
        lVar8 = plVar10[0xe];
        plVar6 = *(long **)(lVar8 + 0x10);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        *(ulong **)(lVar8 + 0x10) = puVar4;
        plVar6 = (long *)plVar10[0xe];
        plVar6[1] = param_1[1];
        if (*plVar6 == 0) {
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                       ,0xb2,2,"assertion failed: %s");
          _abort();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x3811e4);
          (*pcVar5)();
        }
        plVar10[0x11] = *param_1;
        plVar1 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar10[0x13] = (long)FUN_00381328;
        plVar10[0x14] = (long)plVar10;
        plVar10[0x15] = 0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_00387fd0(*plVar6,param_1[2],plVar10 + 0x12,0);
        plVar10[0x1e] = (long)FUN_003814b8;
        plVar10[0x1f] = (long)plVar10;
        plVar10[0x20] = 0;
        func_0x003cf010(plVar10 + 0x16,plVar10[0xc],plVar10 + 0x1d);
      }
      goto LAB_00380f68;
    }
    auStack_68[2] = 0;
    auStack_68[3] = 0;
    auStack_68[1] = 0;
    FUN_003b646c(&uStack_40,2,"connector shutdown",0x12,&uStack_41,auStack_68 + 1);
    uVar12 = *param_2;
    if (uStack_40 == uVar12) {
LAB_00381018:
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = uStack_40;
      uStack_40 = 0x36;
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
        uVar12 = uStack_40;
        goto LAB_00381018;
      }
    }
    puStack_38 = auStack_68 + 1;
    FUN_0033d548(&puStack_38);
    lVar8 = *param_1;
    if (lVar8 != 0) {
      auStack_68[0] = *param_2;
      if ((auStack_68[0] & 1) != 0) {
        piVar7 = (int *)(auStack_68[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003bcee0(lVar8,auStack_68);
      if ((auStack_68[0] & 1) != 0) {
        FUN_0055293c();
      }
      FUN_003bcf54(*param_1);
      FUN_003a2a64(param_1[1]);
      FUN_003ecf54(param_1[2]);
      FUN_00338cb8(param_1[2]);
    }
  }
  puVar11 = (undefined8 *)plVar10[0xe];
  *puVar11 = 0;
  puVar11[1] = 0;
  plVar6 = (long *)puVar11[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  puVar11[2] = 0;
  uVar12 = *param_2;
  if ((uVar12 & 1) != 0) {
    piVar7 = (int *)(uVar12 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_70 = uVar12;
  FUN_00380e54(&puStack_38,plVar10 + 0xf,&uStack_70);
  if ((uVar12 & 1) != 0) {
    FUN_0055293c(uVar12);
  }
LAB_00380f68:
  plVar6 = (long *)plVar10[0x23];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar10[0x23] = 0;
  func_0x00339da8(plVar10 + 2);
  plVar6 = plVar10 + 1;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}



/* Entry: 00381278; end: 00381327;  */

void FUN_00381278(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x80) = 1;
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003fc2ec(lVar3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(param_1 + 0x10);
  return;
}



/* Entry: 00381328; end: 003814b7;  */

void FUN_00381328(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 2);
  if ((char)param_1[0x22] == '\0') {
    func_0x003bced4(param_1[0x11],param_1[0xb]);
    if (*param_2 == 0) {
      uStack_38 = 0;
    }
    else {
      func_0x0040073c(*(undefined8 *)param_1[0xe]);
      FUN_003a2a64(*(undefined8 *)(param_1[0xe] + 8));
      puVar5 = (undefined8 *)param_1[0xe];
      *puVar5 = 0;
      puVar5[1] = 0;
      plVar4 = (long *)puVar5[2];
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      puVar5[2] = 0;
      uStack_38 = *param_2;
      if ((uStack_38 & 1) != 0) {
        piVar6 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    FUN_00381658(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    func_0x003cf020(param_1 + 0x16);
  }
  else {
    uStack_40 = 0;
    FUN_00381658(param_1,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(param_1 + 2);
  plVar4 = param_1 + 1;
  do {
    lVar7 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 003814b8; end: 00381657;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003814b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  func_0x00339d8c(param_1 + 2);
  if ((char)param_1[0x22] == '\0') {
    func_0x003bced4(param_1[0x11],param_1[0xb]);
    func_0x0040073c(*(undefined8 *)param_1[0xe]);
    FUN_003a2a64(*(undefined8 *)(param_1[0xe] + 8));
    puVar5 = (undefined8 *)param_1[0xe];
    *puVar5 = 0;
    puVar5[1] = 0;
    plVar4 = (long *)puVar5[2];
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    puVar5[2] = 0;
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    FUN_003b646c(&uStack_30,2,"connection attempt timed out before receiving SETTINGS frame",0x3c,
                 &uStack_31,auStack_58 + 1);
    FUN_00381658(param_1,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = auStack_58 + 1;
    FUN_0033d548(&puStack_28);
  }
  else {
    auStack_58[0] = 0;
    FUN_00381658(param_1,auStack_58);
    if ((auStack_58[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00339da8(param_1 + 2);
  plVar4 = param_1 + 1;
  do {
    lVar6 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 00381658; end: 00381707;  */

ulong * FUN_00381658(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  undefined1 uStack_31;
  
  puVar3 = (ulong *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x110) != '\0') {
    uVar6 = *(ulong *)(param_1 + 0x108);
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = uVar6;
    FUN_00380e54(&uStack_31,param_1 + 0x78,&uStack_40);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_00381708(puVar3);
    return puVar3;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar6 = *param_2;
    *puVar3 = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar4 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  else {
    uVar6 = *puVar3;
    uVar5 = *param_2;
    if (uVar5 != uVar6) {
      if ((uVar5 & 1) != 0) {
        piVar4 = (int *)(uVar5 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar5 = *param_2;
      }
      *puVar3 = uVar5;
      if ((uVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  return puVar3;
}



/* Entry: 00381708; end: 0038173f;  */

void FUN_00381708(ulong *param_1)

{
  if ((char)param_1[1] != '\0') {
    if ((*param_1 & 1) != 0) {
      FUN_0055293c();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 00381740; end: 003817cb;  */

ulong * FUN_00381740(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((char)param_1[1] == '\0') {
    uVar3 = *param_2;
    *param_1 = uVar3;
    if ((uVar3 & 1) != 0) {
      piVar5 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    uVar3 = *param_1;
    uVar4 = *param_2;
    if (uVar4 != uVar3) {
      if ((uVar4 & 1) != 0) {
        piVar5 = (int *)(uVar4 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar4 = *param_2;
      }
      *param_1 = uVar4;
      if ((uVar3 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  return param_1;
}



/* Entry: 003817cc; end: 00381de7;  */

/* WARNING: Removing unreachable block (ram,0x00381ad8) */
/* WARNING: Removing unreachable block (ram,0x00381a58) */
/* WARNING: Removing unreachable block (ram,0x00381ae8) */

long FUN_003817cc(long param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  char *pcVar12;
  int *piVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  ulong uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [72];
  ulong uStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_78;
  ulong uStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_003413d4(auStack_d8);
  uStack_e0 = 0;
  if (param_2 == (long *)0x0) {
    bVar6 = false;
LAB_00381c20:
    uVar10 = uStack_e0;
    puVar11 = &uStack_138;
    uStack_138 = uStack_e0;
    FUN_003be1d0(puVar11,3,&uStack_90);
    if ((uStack_138 & 1) != 0) {
      FUN_0055293c();
    }
    uVar4 = (undefined4)uStack_90;
    if ((int)puVar11 == 0) {
      uVar4 = 0xd;
    }
    FUN_003f93d0(param_1,uVar4,"Failed to create secure client channel");
    lVar14 = param_1;
    if (!bVar6) goto LAB_00381c70;
  }
  else {
    func_0x00339fa0(0xafa568,FUN_00381de8);
    if (lRam0000000000b65d18 == 0) {
      FUN_003b171c();
    }
    FUN_003a6080(auStack_50);
    plVar1 = param_2 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    pcVar12 = "grpc.internal.channel_credentials";
    puVar9 = auStack_50;
    plStack_108 = param_2;
    FUN_0038233c(&uStack_70,puVar9,"grpc.internal.channel_credentials",0x21,&plStack_108);
    uVar10 = uRam0000000000b5e738;
    FUN_003584b0();
    uStack_90 = uVar10;
    ppuStack_88 = &PTR_FUN_009deb28;
    uStack_78 = 2;
    FUN_003a1bc4(auStack_100,&uStack_70,puVar9,pcVar12,&uStack_90);
    FUN_00382478(&uStack_90);
    (**(code **)(*param_2 + 0x20))(&uStack_f0,param_2,auStack_100);
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    ppuVar8 = ppuStack_68;
    if (ppuStack_68 != (undefined **)0x0) {
      ppuVar2 = ppuStack_68 + 1;
      do {
        puVar15 = *ppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar6) {
          *ppuVar2 = puVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_68 + 0x10))(ppuStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar1 = plStack_108 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plStack_108 + 8))();
      }
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    uStack_128 = uStack_f0;
    plStack_120 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (param_1 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                   ,0x150,2,"cannot create channel with NULL target name");
      func_0x005535e8(&uStack_90,"channel target is NULL",0x16);
      FUN_0038227c(&uStack_118,&uStack_90);
      if ((uStack_90 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      lVar14 = lRam0000000000b65d18;
      if (lRam0000000000b65d18 == 0) {
        FUN_003b171c();
      }
      lVar16 = param_1;
      _strlen(param_1);
      FUN_003d4a4c(&uStack_90,lVar14 + 0xf0,param_1,lVar16);
      ppuStack_68 = ppuStack_88;
      uStack_70 = uStack_90;
      FUN_003a1f88(auStack_50,&uStack_128,"grpc.server_uri",0xf,&uStack_70);
      FUN_003f2f5c(&uStack_118,param_1,auStack_50,0,0);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar14 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
    plVar1 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar3 = plStack_120 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    lVar14 = lStack_110;
    if (uStack_118 == 0) {
      lStack_110 = 0;
    }
    else {
      uStack_130 = uStack_118;
      if ((uStack_118 & 1) != 0) {
        piVar13 = (int *)(uStack_118 - 1);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_003fbec4(&uStack_90,&uStack_130);
      uVar10 = uStack_e0;
      if (uStack_90 == uStack_e0) {
LAB_00381b80:
        if ((uVar10 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        uStack_e0 = uStack_90;
        uStack_90 = 0x36;
        if ((uVar10 & 1) != 0) {
          FUN_0055293c();
          uVar10 = uStack_90;
          goto LAB_00381b80;
        }
      }
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
      }
      lVar14 = 0;
    }
    FUN_003822d4(&uStack_118);
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    if (lVar14 == 0) {
      if ((uStack_e0 & 1) == 0) {
        bVar6 = false;
      }
      else {
        piVar13 = (int *)(uStack_e0 - 1);
        bVar6 = true;
        do {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar7) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      goto LAB_00381c20;
    }
    uVar10 = uStack_e0;
    param_1 = lVar14;
    if ((uStack_e0 & 1) == 0) goto LAB_00381c70;
  }
  FUN_0055293c(uVar10);
  lVar14 = param_1;
LAB_00381c70:
  FUN_00341470(auStack_d8);
  return lVar14;
}



/* Entry: 00381de8; end: 00381e13;  */

void FUN_00381de8(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009deab8;
  pdRam0000000000b5e738 = pdVar1;
  return;
}



/* Entry: 00381e14; end: 00381eeb;  */

void FUN_00381e14(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_003b646c(&uStack_30,2,"Subchannel disconnected",0x17,&uStack_31,&uStack_50);
  (**(code **)(*param_1 + 0x20))(param_1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = (undefined1 *)&uStack_50;
  FUN_0033d548(&puStack_28);
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 00381eec; end: 00381ef3;  */

void FUN_00381eec(void)

{
  return;
}



/* Entry: 00381ef4; end: 0038227b;  */

void FUN_00381ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = param_4;
  FUN_003dcc4c();
  if (plVar3 == (long *)0x0) {
    FUN_003a2ef8(auStack_78,param_4);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                 ,0x124,2,
                 "Can\'t create subchannel: channel credentials missing for secure channel. Got args: %s"
                );
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    goto LAB_00382174;
  }
  plVar4 = param_4;
  FUN_003de8bc();
  if (plVar4 != (long *)0x0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                 ,300,2,
                 "Can\'t create subchannel: security connector already present in channel args.");
    goto LAB_00382174;
  }
  plVar4 = param_4;
  func_0x003a2dcc(param_4,"grpc.default_authority");
  if (plVar4 == (long *)0x0) {
    func_0x00772764();
LAB_00382154:
    (**(code **)(*plVar4 + 8))();
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_58 = (long *)0x0;
    (**(code **)(*plVar3 + 0x10))(&plStack_50,plVar3,&plStack_58,plVar4,param_4,&plStack_48);
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plStack_58;
      if (lVar6 + -1 == 0) goto LAB_00382154;
    }
  }
  if (plStack_50 == (long *)0x0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                 ,0x13d,2,"Failed to create secure subchannel for secure name \'%s\'");
    param_4 = (long *)0x0;
  }
  else {
    func_0x003de830(auStack_78);
    if (plStack_48 != (long *)0x0) {
      param_4 = plStack_48;
    }
    FUN_003a1ecc(param_4,auStack_78,1);
    if (plStack_50 != (long *)0x0) {
      plVar3 = plStack_50 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    plStack_50 = (long *)0x0;
    FUN_003a2a64(plStack_48);
  }
  if (plStack_50 != (long *)0x0) {
    plVar3 = plStack_50 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (param_4 != (long *)0x0) {
    pcVar5 = section_00000108.segname + 8;
    __Znwm();
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    *(undefined8 *)(pcVar5 + 0x20) = 0;
    *(undefined8 *)(pcVar5 + 0x38) = 0;
    *(undefined8 *)(pcVar5 + 0x30) = 0;
    *(undefined8 *)(pcVar5 + 0x48) = 0;
    *(undefined8 *)(pcVar5 + 0x40) = 0;
    *(undefined8 *)(pcVar5 + 0x58) = 0;
    *(undefined8 *)(pcVar5 + 0x50) = 0;
    *(undefined8 *)(pcVar5 + 0x68) = 0;
    *(undefined8 *)(pcVar5 + 0x60) = 0;
    *(undefined8 *)(pcVar5 + 0x78) = 0;
    *(undefined8 *)(pcVar5 + 0x70) = 0;
    *(undefined8 *)(pcVar5 + 0x88) = 0;
    *(undefined8 *)(pcVar5 + 0x80) = 0;
    *(undefined8 *)(pcVar5 + 0x98) = 0;
    *(undefined8 *)(pcVar5 + 0x90) = 0;
    *(undefined8 *)(pcVar5 + 0xa8) = 0;
    *(undefined8 *)(pcVar5 + 0xa0) = 0;
    *(undefined8 *)(pcVar5 + 0xb8) = 0;
    *(undefined8 *)(pcVar5 + 0xb0) = 0;
    *(undefined8 *)(pcVar5 + 200) = 0;
    *(undefined8 *)(pcVar5 + 0xc0) = 0;
    *(undefined8 *)(pcVar5 + 0xd8) = 0;
    *(undefined8 *)(pcVar5 + 0xd0) = 0;
    *(undefined8 *)(pcVar5 + 0xe8) = 0;
    *(undefined8 *)(pcVar5 + 0xe0) = 0;
    *(undefined8 *)(pcVar5 + 0xf8) = 0;
    *(undefined8 *)(pcVar5 + 0xf0) = 0;
    *(undefined8 *)(pcVar5 + 0x18) = 0;
    *(qword *)(pcVar5 + 0x10) = 0;
    *(undefined8 *)(pcVar5 + 0x108) = 0;
    *(undefined8 *)(pcVar5 + 0x100) = 0;
    *(undefined8 *)(pcVar5 + 0x118) = 0;
    *(undefined8 *)(pcVar5 + 0x110) = 0;
    *(undefined ***)pcVar5 = &PTR_FUN_009dea38;
    *(qword *)(pcVar5 + 8) = 1;
    FUN_00339d50();
    *(undefined8 *)(pcVar5 + 0x60) = 0;
    *(undefined8 *)(pcVar5 + 0x88) = 0;
    pcVar5[0x108] = 0;
    pcVar5[0x110] = 0;
    *(undefined8 *)(pcVar5 + 0x118) = 0;
    *(undefined8 *)(pcVar5 + 0x70) = 0;
    *(undefined8 *)(pcVar5 + 0x78) = 0;
    pcVar5[0x80] = 0;
    pcStack_80 = pcVar5;
    FUN_00372758(param_1,&pcStack_80,param_3,param_4);
    pcVar5 = pcStack_80;
    pcStack_80 = (char *)0x0;
    if (pcVar5 != (char *)0x0) {
      (*(code *)**(undefined8 **)pcVar5)();
    }
    FUN_003a2a64(param_4);
    return;
  }
LAB_00382174:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
               ,0x114,2,"Failed to create channel args during subchannel creation.");
  *param_1 = 0;
  return;
}



/* Entry: 0038227c; end: 003822d3;  */

long * FUN_0038227c(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003822d4; end: 0038233b;  */

ulong * FUN_003822d4(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0038233c; end: 003823ab;  */

void FUN_0038233c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x3;
  long lStack_40;
  undefined **ppuStack_38;
  undefined4 uStack_28;
  
  lStack_40 = *in_x3;
  plVar1 = (long *)(lStack_40 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_38 = &PTR_FUN_009deaf8;
  uStack_28 = 2;
  FUN_003a1bc4();
  FUN_00382478(&lStack_40);
  return;
}



/* Entry: 003823ac; end: 003823f3;  */

void FUN_003823ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003823f4; end: 00382477;  */

long * FUN_003823f4(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 uStack_61;
  ulong auStack_40 [2];
  ulong auStack_30 [2];
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))(auStack_30);
    (**(code **)(*param_2 + 0x28))(auStack_40,param_2);
    uVar2 = (uint)(auStack_40[0] < auStack_30[0]);
    if (auStack_30[0] < auStack_40[0]) {
      uVar2 = 0xffffffff;
    }
    plVar1 = (long *)(ulong)uVar2;
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
      plVar1 = param_1;
    }
    return plVar1;
  }
  func_0x0077279c();
  if (*(uint *)(param_1 + 3) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009deb10)[*(uint *)(param_1 + 3)])(&uStack_61,param_1);
  }
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return param_1;
}



/* Entry: 00382478; end: 003824cf;  */

long FUN_00382478(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009deb10)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 003824d0; end: 003824e7;  */

void FUN_003824d0(void)

{
  return;
}



/* Entry: 003824e8; end: 00382507;  */

void FUN_003824e8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(param_2[1] + 8))(*param_2);
  return;
}



/* Entry: 00382508; end: 00382523;  */

void FUN_00382508(void)

{
  return;
}



/* Entry: 00382524; end: 00382773;  */

void FUN_00382524(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  uint uStack_70;
  uint uStack_6c;
  byte *pbStack_68;
  
  puVar7 = &uStack_70;
  puVar8 = &uStack_70;
  uVar6 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar6 = param_2[1];
  }
  uVar15 = uVar6 / 3;
  lVar14 = uVar6 - (uVar15 * 2 + uVar6 / 3);
  uVar9 = ((ulong)(byte)(&UNK_007f6070)[lVar14] + uVar15 * 4) * 0xb;
  puVar11 = (uint *)(uVar9 >> 3);
  if ((uVar9 & 7) != 0) {
    puVar11 = (uint *)((long)puVar11 + 1);
  }
  FUN_003ec0c8(param_1);
  pbVar10 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar10 = (byte *)param_2[2];
  }
  pbVar4 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar4 = (byte *)param_1[2];
  }
  uStack_70 = 0;
  uStack_6c = 0;
  pbStack_68 = pbVar4;
  if (2 < uVar6) {
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    do {
      FUN_00382774(&uStack_70,*pbVar10 >> 2,pbVar10[1] >> 4 | (*pbVar10 & 3) << 4);
      param_3 = (ulong)((uint)(pbVar10[2] >> 6) | (pbVar10[1] & 0xf) << 2);
      param_4 = (ulong)(pbVar10[2] & 0x3f);
      puVar11 = &uStack_70;
      FUN_00382774();
      pbVar10 = pbVar10 + 3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (lVar14 == 2) {
    param_3 = (ulong)(*pbVar10 >> 2);
    param_4 = (ulong)((uint)(pbVar10[1] >> 4) | (*pbVar10 & 3) << 4);
    FUN_00382774();
    lVar14 = ((ulong)pbVar10[1] & 0xf) * 0x10;
    uStack_70 = uStack_70 << (ulong)((byte)(&UNK_007f6076)[lVar14] & 0x1f) |
                (uint)*(ushort *)(&UNK_007f6074 + lVar14);
    uStack_6c = uStack_6c + (byte)(&UNK_007f6076)[lVar14];
    while (8 < uStack_6c) {
      uStack_6c = uStack_6c - 8;
      *pbStack_68 = (byte)(uStack_70 >> (ulong)(uStack_6c & 0x1f));
      pbStack_68 = pbStack_68 + 1;
    }
    pbVar13 = pbVar10 + 2;
  }
  else {
    puVar8 = puVar11;
    pbVar13 = pbVar10;
    if (lVar14 == 1) {
      pbVar13 = pbVar10 + 1;
      param_3 = (ulong)(*pbVar10 >> 2);
      param_4 = (ulong)((*pbVar10 & 3) << 4);
      FUN_00382774();
      puVar8 = puVar7;
    }
  }
  pbVar10 = pbStack_68;
  if (uStack_6c != 0) {
    pbVar10 = pbStack_68 + 1;
    *pbStack_68 = (byte)(uStack_70 << (ulong)(8 - uStack_6c & 0x1f)) |
                  (byte)(0xff >> (ulong)(uStack_6c & 0x1f));
  }
  lVar14 = *param_1;
  pbVar5 = (byte *)((long)param_1 + 9);
  if (lVar14 != 0) {
    pbVar5 = (byte *)param_1[2];
  }
  uVar6 = param_1[1] & 0xff;
  if (lVar14 != 0) {
    uVar6 = param_1[1];
  }
  if (pbVar5 + uVar6 < pbVar10) {
    func_0x007727d4();
  }
  else {
    if (lVar14 == 0) {
      *(char *)(param_1 + 1) = (char)((long)pbVar10 - (long)pbVar4);
    }
    else {
      param_1[1] = (long)pbVar10 - (long)pbVar4;
    }
    pbVar10 = (byte *)((long)param_2 + 9);
    if (*param_2 != 0) {
      pbVar10 = (byte *)param_2[2];
    }
    uVar6 = param_2[1] & 0xff;
    if (*param_2 != 0) {
      uVar6 = param_2[1];
    }
    if (pbVar13 == pbVar10 + uVar6) {
      return;
    }
  }
  func_0x00772808();
  lVar14 = (param_3 & 0xffffffff) * 4;
  lVar1 = (param_4 & 0xffffffff) * 4;
  uVar2 = (uint)(byte)(&UNK_007f6076)[lVar1] + (uint)(byte)(&UNK_007f6076)[lVar14];
  uVar3 = puVar8[1] + uVar2;
  *puVar8 = (uint)*(ushort *)(&UNK_007f6074 + lVar14) <<
            (ulong)((byte)(&UNK_007f6076)[lVar1] & 0x1f) | (uint)*(ushort *)(&UNK_007f6074 + lVar1)
            | *puVar8 << (ulong)(uVar2 & 0x1f);
  puVar8[1] = uVar3;
  while (8 < uVar3) {
    puVar8[1] = uVar3 - 8;
    puVar12 = *(undefined1 **)(puVar8 + 2);
    *(undefined1 **)(puVar8 + 2) = puVar12 + 1;
    *puVar12 = (char)(*puVar8 >> (ulong)(uVar3 - 8 & 0x1f));
    uVar3 = puVar8[1];
  }
  return;
}



/* Entry: 00382774; end: 003827f3;  */

void FUN_00382774(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar1 = (uint)(byte)(&UNK_007f6076)[(ulong)param_3 * 4] +
          (uint)(byte)(&UNK_007f6076)[(ulong)param_2 * 4];
  uVar2 = param_1[1] + uVar1;
  *param_1 = (uint)*(ushort *)(&UNK_007f6074 + (ulong)param_2 * 4) <<
             (ulong)((byte)(&UNK_007f6076)[(ulong)param_3 * 4] & 0x1f) |
             (uint)*(ushort *)(&UNK_007f6074 + (ulong)param_3 * 4) |
             *param_1 << (ulong)(uVar1 & 0x1f);
  param_1[1] = uVar2;
  while (8 < uVar2) {
    param_1[1] = uVar2 - 8;
    puVar3 = *(undefined1 **)(param_1 + 2);
    *(undefined1 **)(param_1 + 2) = puVar3 + 1;
    *puVar3 = (char)(*param_1 >> (ulong)(uVar2 - 8 & 0x1f));
    uVar2 = param_1[1];
  }
  return;
}



/* Entry: 003827f4; end: 00382acb;  */

long FUN_003827f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  plVar5 = *(long **)(param_1 + 0xce8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    *(undefined8 *)(param_1 + 0xce8) = 0;
  }
  FUN_003bcf54(*(undefined8 *)(param_1 + 0x10));
  FUN_003ecf54(param_1 + 0x630);
  FUN_003ecf54(param_1 + 0x310);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_003b646c(&uStack_30,2,"Transport destroyed",0x13,&uStack_31,&uStack_50);
  puStack_28 = &uStack_50;
  FUN_0033d548(&puStack_28);
  uVar6 = *(undefined8 *)(param_1 + 0xce0);
  uStack_58 = uStack_30;
  if ((uStack_30 & 1) != 0) {
    piVar7 = (int *)(uStack_30 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0038bc64(uVar6,0,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  *(undefined8 *)(param_1 + 0xce0) = 0;
  FUN_003ecf54(param_1 + 0x1a0);
  func_0x0038cd68(param_1 + 0x988);
  lVar8 = 0;
  while( true ) {
    if (*(long *)(param_1 + lVar8 + 0xa8) != 0) {
      uVar6 = 0x102;
      goto LAB_00382a58;
    }
    if (*(long *)(param_1 + lVar8 + 0xb0) != 0) break;
    lVar8 = lVar8 + 0x10;
    if (lVar8 == 0x50) {
      lVar8 = param_1 + 0xf8;
      func_0x0039d43c();
      if (lVar8 == 0) {
        func_0x0039d274(param_1 + 0xf8);
        FUN_003bc6a8(*(undefined8 *)(param_1 + 0x78));
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        FUN_003b646c(&uStack_60,2,"Transport destroyed",0x13,&uStack_31,&uStack_78);
        FUN_00382acc(param_1,&uStack_60);
        if ((uStack_60 & 1) != 0) {
          FUN_0055293c();
        }
        puStack_28 = &uStack_78;
        FUN_0033d548(&puStack_28);
        lVar8 = *(long *)(param_1 + 0xac8);
        while (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          FUN_00338cb8(lVar8);
          *(long *)(param_1 + 0xac8) = lVar9;
          lVar8 = lVar9;
        }
        FUN_00338cb8(*(undefined8 *)(param_1 + 0x8c0));
        if (pcRam0000000000b5e748 != (code *)0x0) {
          (*pcRam0000000000b5e748)();
        }
        if ((uStack_30 & 1) != 0) {
          FUN_0055293c();
        }
        plVar5 = *(long **)(param_1 + 0xce8);
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        if ((*(ulong *)(param_1 + 0xb38) & 1) != 0) {
          FUN_0055293c();
        }
        FUN_003926dc(param_1 + 0x8d8);
        if ((*(ulong *)(param_1 + 0x760) & 1) != 0) {
          FUN_0055293c();
        }
        FUN_0038893c(param_1 + 0x438);
        FUN_003fb02c(param_1 + 0x2e0);
        if ((*(ulong *)(param_1 + 0x98) & 1) != 0) {
          FUN_0055293c();
        }
        FUN_003d61b4(param_1 + 0x58);
        FUN_00388a1c(param_1 + 0x40);
        FUN_00377730(param_1 + 0x30);
        if (*(char *)(param_1 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x18));
        }
        return param_1;
      }
      uVar6 = 0x108;
LAB_00382a58:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,uVar6,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x382a7c);
      (*pcVar4)();
    }
  }
  uVar6 = 0x103;
  goto LAB_00382a58;
}



/* Entry: 00382acc; end: 00382bd3;  */

/* WARNING: Removing unreachable block (ram,0x00383658) */

dword * FUN_00382acc(dword *param_1,ulong *param_2,dword *param_3,ulong param_4)

{
  long *plVar1;
  qword *pqVar2;
  int *piVar3;
  char *pcVar4;
  uint *puVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  dword *pdVar10;
  ulong *puVar11;
  char *pcVar12;
  qword qVar13;
  char ****ppppcVar14;
  long *plVar15;
  dword *pdVar16;
  undefined4 uVar17;
  int *piVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  dword *pdVar22;
  char *pcVar23;
  long lVar24;
  dword *pdVar25;
  long *plVar26;
  undefined **ppuVar27;
  dword *pdVar28;
  qword *pqVar29;
  uint uStack_1ec;
  long *plStack_180;
  ulong uStack_178;
  long *plStack_170;
  dword *pdStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined1 auStack_150 [32];
  char ***pppcStack_130;
  dword *pdStack_128;
  undefined8 uStack_120;
  dword *pdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  code *pcStack_e8;
  long lStack_d0;
  ulong uStack_60;
  ulong uStack_58;
  
  if (*param_2 != 0) {
    lVar24 = 0;
    do {
      uVar21 = *param_2;
      if ((uVar21 & 1) != 0) {
        piVar18 = (int *)(uVar21 - 1);
        do {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar8) {
            *piVar18 = *piVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar26 = *(long **)(param_1 + (lVar24 * 2 + 0xfe) * 2);
      uStack_60 = uVar21;
      if (plVar26 != (long *)0x0) {
        piVar18 = (int *)(uVar21 - 1);
        do {
          if (plVar26[3] == 0) {
            if ((uVar21 & 1) != 0) {
              do {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                if (bVar8) {
                  *piVar18 = *piVar18 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            puVar11 = &uStack_58;
            uStack_58 = uVar21;
            FUN_003b7ab0();
            plVar26[3] = (long)puVar11;
            if ((uStack_58 & 1) != 0) {
              FUN_0055293c();
            }
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
      }
      if ((uVar21 & 1) != 0) {
        FUN_0055293c(uVar21);
      }
      pdVar10 = (dword *)&uStack_58;
      FUN_003c1f14(pdVar10,param_1 + (lVar24 * 2 + 0xfe) * 2);
      lVar24 = lVar24 + 1;
    } while (lVar24 != 3);
    return pdVar10;
  }
  func_0x0077283c();
  func_0x0040cf10();
  func_0x0040cf10();
  FUN_0033c494(&uStack_58);
  FUN_0033c494(&uStack_60);
  __Unwind_Resume();
  lStack_d0 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar29 = (qword *)(param_1 + 2);
  *pqVar29 = 1;
  *(dword **)(param_1 + 4) = param_3;
  pdVar10 = param_1 + 6;
  pdVar25 = param_3;
  puVar11 = param_2;
  func_0x003bcf60();
  if (puVar11 < (ulong *)0x7ffffffffffffff8) {
    if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar11) {
      uVar21 = ((ulong)puVar11 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar11 | 7) != 0x17) {
        uVar21 = (ulong)puVar11 | 7;
      }
      pdVar22 = (dword *)(uVar21 + 1);
      __Znwm();
      *(ulong **)(param_1 + 8) = puVar11;
      *(ulong *)(param_1 + 10) = uVar21 + 1 | 0x8000000000000000;
      *(dword **)(param_1 + 6) = pdVar22;
LAB_00382c8c:
      _memmove(pdVar22,pdVar25,puVar11);
    }
    else {
      *(char *)((long)param_1 + 0x2f) = (char)puVar11;
      pdVar22 = pdVar10;
      if (puVar11 != (ulong *)0x0) goto LAB_00382c8c;
      pdVar25 = (dword *)0x0;
    }
    *(char *)((long)pdVar22 + (long)puVar11) = '\0';
    func_0x003d5b44(&plStack_180,param_2);
    uVar21 = plStack_180[2];
    plVar26 = (long *)plStack_180[3];
    if (plVar26 != (long *)0x0) {
      plVar15 = plVar26 + 1;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = *plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_178 = uVar21;
    plStack_170 = plVar26;
    func_0x003bcf60();
    pppcStack_130 = (char ***)0x8c4469;
    pdStack_128 = (dword *)((long)&MACH_HEADER.ncmds + 1);
    pdStack_100 = param_3;
    pdStack_f8 = pdVar25;
    FUN_00575d30(&pdStack_168,&pdStack_100,&pppcStack_130);
    pdVar25 = param_1 + 0xc;
    pdVar22 = pdStack_168;
    if (-1 < (char)bStack_151) {
      uStack_160 = (ulong)bStack_151;
      pdVar22 = (dword *)&pdStack_168;
    }
    FUN_003d77d0(pdVar25,uVar21,pdVar22,uStack_160);
    if ((char)bStack_151 < '\0') {
      __ZdlPv(pdStack_168);
    }
    if (plVar26 != (long *)0x0) {
      plVar15 = plVar26 + 1;
      do {
        lVar24 = *plVar15;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
    }
    if (plStack_180 != (long *)0x0) {
      plVar26 = plStack_180 + 1;
      do {
        lVar24 = *plVar26;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = lVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar24 + -1 == 0) {
        (**(code **)(*plStack_180 + 8))();
      }
    }
    pdVar22 = pdVar25;
    FUN_003839ec(param_1 + 0x10,pdVar25,0xd00,0xd00);
    pcVar23 = (char *)(param_1 + 0x16);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x18);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x1c);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    FUN_003bc618();
    pcVar23 = (char *)(param_1 + 0x26);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x20);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x22);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(dword **)(param_1 + 0x1e) = pdVar22;
    pcVar23 = (char *)((long)param_1 + 0x8d);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(char *)(param_1 + 0x28) = '\x01';
    pcVar23 = (char *)(param_1 + 0x2a);
    pcVar12 = (char *)(param_1 + 0x2c);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x2e);
    pcVar12 = (char *)(param_1 + 0x30);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x32);
    pcVar12 = (char *)(param_1 + 0x34);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x36);
    pcVar12 = (char *)(param_1 + 0x38);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x3a);
    pcVar12 = (char *)(param_1 + 0x3c);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0xb2);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    iVar20 = (int)param_4;
    pcVar23 = "client_transport";
    if (iVar20 == 0) {
      pcVar23 = "server_transport";
    }
    *(char **)(param_1 + 0xb8) = pcVar23;
    pcVar23 = (char *)(param_1 + 0xba);
    pcVar23[0] = '\x02';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23 = (char *)(param_1 + 0xbc);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0xc2);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0xc0);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(dword **)(param_1 + 0xbe) = param_1 + 0xc0;
    FUN_00388a58();
    *(char *)(param_1 + 0x18a) = (char)param_4;
    pcVar23 = (char *)(param_1 + 0x1d6);
    pcVar23[0] = -1;
    pcVar23[1] = -1;
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23 = (char *)(param_1 + 0x1d8);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x1da);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    *(char *)((long)(param_1 + 0x1db) + 0) = '\x01';
    *(char *)((long)(param_1 + 0x1db) + 1) = '\0';
    pcVar23 = (char *)(param_1 + 0x1dc);
    pcVar23[0] = '\b';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    uVar17 = 1;
    if (iVar20 == 0) {
      uVar17 = 2;
    }
    param_1[0x1f9] = uVar17;
    pcVar23 = (char *)(param_1 + 0x1fa);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23 = (char *)(param_1 + 0x222);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x1fc);
    pcVar12 = (char *)(param_1 + 0x1fe);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x200);
    pcVar12 = (char *)(param_1 + 0x202);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x204);
    pcVar12 = (char *)(param_1 + 0x206);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x208);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x20e);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x20c);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x22c);
    pcVar12 = (char *)(param_1 + 0x22e);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x230);
    pcVar12 = (char *)(param_1 + 0x232);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    FUN_003926a0();
    pdVar22 = pdVar10;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      pdVar22 = *(dword **)pdVar10;
    }
    puVar11 = param_2;
    func_0x003a2e80(param_2,"grpc.http2.bdp_probe",1);
    pdVar16 = param_1 + 0x26a;
    FUN_0038be88(pdVar16,pdVar22,puVar11,pdVar25);
    pcVar23 = (char *)(param_1 + 0x2a4);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    uVar17 = 0x18;
    if (iVar20 == 0) {
      uVar17 = 0;
    }
    param_1[0x2a6] = uVar17;
    pcVar23 = (char *)(param_1 + 0x2a7);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\x01';
    pcVar23 = (char *)(param_1 + 0x2a8);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x2aa);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23 = (char *)(param_1 + 0x2b2);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(char *)(param_1 + 0x2b4) = '\0';
    *(char *)((long)(param_1 + 0x2e6) + 0) = '\0';
    *(char *)((long)(param_1 + 0x2e6) + 1) = '\0';
    plVar26 = (long *)(param_1 + 0x332);
    pcVar23 = (char *)(param_1 + 0x2ac);
    pcVar12 = (char *)(param_1 + 0x2ae);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x2ce);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    pcVar23 = (char *)(param_1 + 0x2d0);
    pcVar12 = (char *)(param_1 + 0x2d2);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(char *)((long)(param_1 + 0x2d4) + 0) = '\0';
    *(char *)((long)(param_1 + 0x2d4) + 1) = '\0';
    *(char *)((long)(param_1 + 0x336) + 0) = '\0';
    *(char *)((long)(param_1 + 0x336) + 1) = '\0';
    pcVar23 = (char *)(param_1 + 0x334);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *plVar26 = 0;
    pcVar23 = (char *)(param_1 + 0x33c);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(char *)(param_1 + 0x33e) = '\0';
    pcVar23 = (char *)(param_1 + 0x338);
    pcVar12 = (char *)(param_1 + 0x33a);
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12[4] = '\0';
    pcVar12[5] = '\0';
    pcVar12[6] = '\0';
    pcVar12[7] = '\0';
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = '\0';
    *(undefined **)param_1 = &UNK_009decd8;
    FUN_0039d238(param_1 + 0x3e,8);
    FUN_003ecf38(param_1 + 0x68);
    pcVar23 = (char *)(param_1 + 0xc4);
    FUN_003ecf38(pcVar23);
    if (iVar20 != 0) {
      FUN_003ec31c(auStack_150,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
      FUN_003ecb34(pcVar23,auStack_150);
    }
    FUN_003ecf38(param_1 + 0x18c);
    lVar24 = 0;
    pcVar12 = (char *)(param_1 + 0x1dd);
    do {
      lVar19 = 0;
      do {
        *(undefined4 *)(pcVar12 + lVar19) = *(undefined4 *)(&UNK_009df2b8 + lVar24 * 0x20);
        lVar19 = lVar19 + 0x1c;
      } while (lVar19 != 0x70);
      lVar24 = lVar24 + 1;
      pcVar12 = pcVar12 + 4;
    } while (lVar24 != 7);
    FUN_0038cd60(param_1 + 0x262);
    if (iVar20 != 0) {
      FUN_00383a6c(param_1,1,0);
      FUN_00383a6c(param_1,2,0);
    }
    FUN_00383a6c(param_1,5,0x2000);
    pdVar25 = (dword *)((long)&MACH_HEADER.cputype + 2);
    pcVar12 = (char *)param_1;
    FUN_00383a6c(param_1,6,1);
    param_1[0x20a] = uRam0000000000afa58c;
    param_1[0x20b] = uRam0000000000afa588;
    *(long *)(param_1 + 0x20c) = (long)(int)uRam0000000000afa590;
    bVar8 = *(char *)(param_1 + 0x18a) != '\0';
    piVar18 = (int *)0xafa57c;
    if (bVar8) {
      piVar18 = (int *)0xafa578;
    }
    piVar3 = (int *)0xafa584;
    if (bVar8) {
      piVar3 = (int *)0xafa580;
    }
    pcVar4 = (char *)0xb5e752;
    if (bVar8) {
      pcVar4 = (char *)0xb5e751;
    }
    iVar20 = *piVar3;
    lVar24 = 0x7fffffffffffffff;
    if (*piVar18 != 0x7fffffff) {
      lVar24 = (long)*piVar18;
    }
    cVar6 = *pcVar4;
    *(long *)(param_1 + 0x332) = lVar24;
    lVar24 = 0x7fffffffffffffff;
    if (iVar20 != 0x7fffffff) {
      lVar24 = (long)iVar20;
    }
    *(long *)(param_1 + 0x334) = lVar24;
    *(char *)(param_1 + 0x336) = cVar6;
    if (param_2 != (ulong *)0x0) {
      if (*param_2 != 0) {
        uVar21 = 0;
        uStack_1ec = 1;
        do {
          pdVar22 = (dword *)(param_2[1] + uVar21 * 0x20);
          pdVar28 = *(dword **)(pdVar22 + 2);
          pdVar25 = pdVar28;
          _strcmp(pdVar28,"grpc.http2.initial_sequence_number");
          if ((int)pdVar25 == 0) {
            pcVar23 = (char *)((ulong)pcVar23 & 0xffffffff00000000 | 0x7fffffff);
            pdVar25 = (dword *)0xffffffff;
            FUN_003a2c94(pdVar22,0xffffffff,pcVar23);
            uVar9 = (uint)pdVar22;
            pcVar12 = (char *)pdVar22;
            if (-1 < (int)uVar9) {
              if ((param_1[0x1f9] & 1) == (uVar9 & 1)) {
                param_1[0x1f9] = uVar9;
              }
              else {
                pcVar12 = 
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                ;
                pdVar25 = (dword *)((long)&section_00000108.addr + 7);
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x12f,2,"%s: low bit must be %d on %s");
              }
            }
          }
          else {
            pdVar25 = pdVar28;
            _strcmp(pdVar28,"grpc.http2.hpack_table_size.encoder");
            if ((int)pdVar25 == 0) {
              FUN_003a2c94(pdVar22,0xffffffff);
              pcVar12 = (char *)pdVar22;
              pdVar25 = pdVar22;
              if (-1 < (int)pdVar22) {
                pcVar12 = (char *)(param_1 + 0x10e);
                FUN_00391ab4();
                pdVar25 = pdVar22;
              }
            }
            else {
              pdVar25 = pdVar28;
              _strcmp(pdVar28,"grpc.http2.max_pings_without_data");
              if ((int)pdVar25 == 0) {
                pdVar25 = (dword *)(ulong)uRam0000000000afa58c;
                FUN_003a2c94();
                param_1[0x20a] = (int)pdVar22;
                pcVar12 = (char *)pdVar22;
              }
              else {
                pdVar25 = pdVar28;
                _strcmp(pdVar28,"grpc.http2.max_ping_strikes");
                if ((int)pdVar25 == 0) {
                  pdVar25 = (dword *)(ulong)uRam0000000000afa588;
                  FUN_003a2c94();
                  param_1[0x20b] = (int)pdVar22;
                  pcVar12 = (char *)pdVar22;
                }
                else {
                  pdVar25 = pdVar28;
                  _strcmp(pdVar28,"grpc.http2.min_ping_interval_without_data_ms");
                  if ((int)pdVar25 == 0) {
                    pdVar25 = (dword *)(ulong)uRam0000000000afa590;
                    FUN_003a2c94();
                    lVar24 = (long)(int)pdVar22;
                    plVar15 = (long *)(param_1 + 0x20c);
LAB_003833c0:
                    *plVar15 = lVar24;
                    pcVar12 = (char *)pdVar22;
                  }
                  else {
                    pdVar25 = pdVar28;
                    _strcmp(pdVar28,"grpc.http2.write_buffer_size");
                    if ((int)pdVar25 == 0) {
                      pdVar25 = (dword *)0x0;
                      FUN_003a2c94();
                      param_1[0x1d6] = (int)pdVar22;
                      pcVar12 = (char *)pdVar22;
                    }
                    else {
                      pdVar25 = pdVar28;
                      _strcmp(pdVar28,"grpc.keepalive_time_ms");
                      if ((int)pdVar25 == 0) {
                        puVar5 = (uint *)0xafa57c;
                        if (*(char *)(param_1 + 0x18a) != '\0') {
                          puVar5 = (uint *)0xafa578;
                        }
                        pdVar25 = (dword *)((ulong)*puVar5 | 0x100000000);
                        FUN_003a2c94();
                        lVar24 = 0x7fffffffffffffff;
                        plVar15 = plVar26;
                        if ((int)pdVar22 != 0x7fffffff) {
                          lVar24 = (long)(int)pdVar22;
                        }
                        goto LAB_003833c0;
                      }
                      pdVar25 = pdVar28;
                      _strcmp(pdVar28,"grpc.keepalive_timeout_ms");
                      if ((int)pdVar25 == 0) {
                        puVar5 = (uint *)0xafa584;
                        if (*(char *)(param_1 + 0x18a) != '\0') {
                          puVar5 = (uint *)0xafa580;
                        }
                        pdVar25 = (dword *)(ulong)*puVar5;
                        FUN_003a2c94();
                        lVar24 = 0x7fffffffffffffff;
                        if ((int)pdVar22 != 0x7fffffff) {
                          lVar24 = (long)(int)pdVar22;
                        }
                        *(long *)(param_1 + 0x334) = lVar24;
                        pcVar12 = (char *)pdVar22;
                      }
                      else {
                        pdVar25 = pdVar28;
                        _strcmp(pdVar28,"grpc.keepalive_permit_without_calls");
                        if ((int)pdVar25 == 0) {
                          pdVar25 = (dword *)0x0;
                          FUN_003a2c94();
                          *(bool *)(param_1 + 0x336) = (int)pdVar22 != 0;
                          pcVar12 = (char *)pdVar22;
                        }
                        else {
                          pdVar25 = pdVar28;
                          _strcmp(pdVar28,"grpc.optimization_target");
                          if ((int)pdVar25 == 0) {
                            pcVar12 = 
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ;
                            pdVar25 = (dword *)(section_00000158.segname + 8);
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                         ,0x170,1,"GRPC_ARG_OPTIMIZATION_TARGET is deprecated");
                          }
                          else {
                            pdVar25 = pdVar28;
                            _strcmp(pdVar28,"grpc.enable_channelz");
                            if ((int)pdVar25 == 0) {
                              pdVar25 = (dword *)((long)&MACH_HEADER.magic + 1);
                              func_0x003a2de0();
                              uStack_1ec = (uint)pdVar22;
                              pcVar12 = (char *)pdVar22;
                            }
                            else {
                              lVar24 = 6;
                              ppuVar27 = &PTR_s_grpc_max_concurrent_streams_009deb40;
                              do {
                                pdVar25 = (dword *)*ppuVar27;
                                pcVar12 = (char *)pdVar28;
                                _strcmp();
                                if ((int)pcVar12 == 0) {
                                  if (*(char *)((long)ppuVar27 + (param_4 & 0xffffffff | 0x18)) ==
                                      '\0') {
                                    pcVar12 = 
                                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                    ;
                                    pdVar25 = (dword *)((long)&section_00000158.nrelocs + 3);
                                    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                                 ,0x197,0,"%s is not available on %s");
                                  }
                                  else {
                                    pdVar25 = *(dword **)((long)ppuVar27 + 0xc);
                                    FUN_003a2c94();
                                    pcVar12 = (char *)pdVar22;
                                    if (-1 < (int)pdVar22) {
                                      pdVar25 = (dword *)(ulong)*(uint *)(ppuVar27 + 1);
                                      pcVar12 = (char *)param_1;
                                      FUN_00383a6c(param_1,pdVar25,pdVar22);
                                    }
                                  }
                                  break;
                                }
                                ppuVar27 = ppuVar27 + 4;
                                lVar24 = lVar24 + -1;
                              } while (lVar24 != 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *param_2);
        if ((uStack_1ec & 1) == 0) goto LAB_00383660;
      }
      qVar13 = *(qword *)(param_1 + 4);
      func_0x003bcf6c(qVar13);
      if ((dword *)0x7ffffffffffffff7 < pdVar25) goto LAB_003837f4;
      if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pdVar25) {
        uVar21 = ((ulong)pdVar25 & 0xfffffffffffffff8) + 8;
        if (((ulong)pdVar25 | 7) != 0x17) {
          uVar21 = (ulong)pdVar25 | 7;
        }
        ppppcVar14 = (char ****)(uVar21 + 1);
        __Znwm();
        uStack_120 = uVar21 + 1 | 0x8000000000000000;
        pppcStack_130 = (char ***)ppppcVar14;
        pdStack_128 = pdVar25;
LAB_0038357c:
        _memmove(ppppcVar14,qVar13,pdVar25);
      }
      else {
        uStack_120 = CONCAT17((char)pdVar25,(undefined7)uStack_120);
        ppppcVar14 = &pppcStack_130;
        if (pdVar25 != (dword *)0x0) goto LAB_0038357c;
      }
      *(char *)((long)ppppcVar14 + (long)pdVar25) = '\0';
      pdStack_100 = (dword *)0x8c506b;
      pdStack_f8 = (dword *)0x560e98;
      pcStack_e8 = FUN_00561110;
      pdStack_f0 = pdVar10;
      FUN_0056189c(&pdStack_168,"%s %s",5,&pdStack_100,2);
      FUN_003a9d84(&pdStack_100,param_2);
      FUN_00388be8(&uStack_178,&pppcStack_130,pdVar10,&pdStack_168,&pdStack_100);
      uVar21 = uStack_178;
      plVar15 = *(long **)(param_1 + 0x33a);
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          lVar24 = *plVar1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar24 + -1 == 0) {
          (**(code **)(*plVar15 + 8))();
        }
      }
      *(ulong *)(param_1 + 0x33a) = uVar21;
      uStack_178 = 0;
      pcVar12 = (char *)pdStack_100;
      if (pdStack_100 != (dword *)0x0) {
        pqVar2 = (qword *)(pdStack_100 + 2);
        do {
          qVar13 = *pqVar2;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pqVar2,0x10);
          if (bVar8) {
            *pqVar2 = qVar13 - 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (qVar13 - 1 == 0) {
          (**(code **)(*(long *)pdStack_100 + 8))();
        }
      }
      pdVar25 = pdVar10;
      if ((char)bStack_151 < '\0') {
        __ZdlPv();
        pcVar12 = (char *)pdStack_168;
        pdVar25 = pdVar10;
      }
    }
LAB_00383660:
    uVar17 = SUB84(pdVar25,0);
    pcVar23 = (char *)(param_1 + 0x210);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    *(char *)(param_1 + 0x220) = '\0';
    pcVar23 = (char *)(param_1 + 0x20e);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = -0x80;
    pcVar23 = (char *)(param_1 + 0x232);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    pcVar23[4] = '\0';
    pcVar23[5] = '\0';
    pcVar23[6] = '\0';
    pcVar23[7] = -0x80;
    pcVar23 = (char *)(param_1 + 0x234);
    pcVar23[0] = '\0';
    pcVar23[1] = '\0';
    pcVar23[2] = '\0';
    pcVar23[3] = '\0';
    if (*(long *)(param_1 + 0x332) == 0x7fffffffffffffff) {
      pcVar23 = (char *)(param_1 + 0x337);
      pcVar23[0] = '\x03';
      pcVar23[1] = '\0';
      pcVar23[2] = '\0';
      pcVar23[3] = '\0';
    }
    else {
      pcVar23 = (char *)(param_1 + 0x337);
      pcVar23[0] = '\0';
      pcVar23[1] = '\0';
      pcVar23[2] = '\0';
      pcVar23[3] = '\0';
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pqVar29,0x10);
        if (bVar8) {
          *pqVar29 = *pqVar29 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(code **)(param_1 + 0x2f8) = FUN_00388d70;
      *(dword **)(param_1 + 0x2fa) = param_1;
      pcVar23 = (char *)(param_1 + 0x2fc);
      pcVar23[0] = '\0';
      pcVar23[1] = '\0';
      pcVar23[2] = '\0';
      pcVar23[3] = '\0';
      pcVar23[4] = '\0';
      pcVar23[5] = '\0';
      pcVar23[6] = '\0';
      pcVar23[7] = '\0';
      func_0x003c1f6c();
      uVar21 = *(ulong *)pcVar12;
      FUN_003c1e28();
      lVar19 = *plVar26;
      lVar24 = 0x7fffffffffffffff;
      if ((uVar21 != 0x7fffffffffffffff && lVar19 != 0x7fffffffffffffff) &&
         (lVar24 = -0x8000000000000000,
         uVar21 != 0x8000000000000000 && lVar19 != -0x8000000000000000)) {
        if ((long)uVar21 < 1) {
          if ((long)(-0x8000000000000000 - uVar21) <= lVar19) goto LAB_00383720;
        }
        else if ((long)(uVar21 ^ 0x7fffffffffffffff) < lVar19) {
          lVar24 = 0x7fffffffffffffff;
        }
        else {
LAB_00383720:
          lVar24 = lVar19 + uVar21;
        }
      }
      func_0x003cf010(param_1 + 0x316,lVar24,param_1 + 0x2f6);
      uVar17 = (undefined4)lVar24;
    }
    if (*(char *)(param_1 + 0x26e) != '\0') {
      *(char *)(param_1 + 0x2b4) = '\x01';
      FUN_0038c15c();
      pdStack_f8 = (dword *)CONCAT44(pdStack_f8._4_4_,uVar17);
      pdStack_100 = pdVar16;
      func_0x00383b10(&pdStack_100,param_1,0);
    }
    FUN_00383c14(param_1,0);
    FUN_00383cc8(param_1);
    if (pcRam0000000000b5e740 != (code *)0x0) {
      (*pcRam0000000000b5e740)();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d0) {
      return param_1;
    }
  }
  else {
    func_0x0033b318(pdVar10);
  }
  ___stack_chk_fail();
LAB_003837f4:
  func_0x0033b318(&pppcStack_130);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x383800);
  (*pcVar7)();
}



/* Entry: 00382bd4; end: 003839eb;  */

/* WARNING: Removing unreachable block (ram,0x00383658) */

dword * FUN_00382bd4(dword *param_1,ulong *param_2,dword *param_3,uint param_4)

{
  long *plVar1;
  qword *pqVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  ulong *puVar13;
  char *pcVar14;
  qword qVar15;
  char ****ppppcVar16;
  long *plVar17;
  dword *pdVar18;
  dword *pdVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  dword *pdVar23;
  char *pcVar24;
  dword *pdVar25;
  undefined **ppuVar26;
  ulong uVar27;
  dword *pdVar28;
  qword *pqVar29;
  uint uStack_18c;
  long *plStack_120;
  ulong uStack_118;
  long *plStack_110;
  dword *pdStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined1 auStack_f0 [32];
  char ***pppcStack_d0;
  dword *pdStack_c8;
  undefined8 uStack_c0;
  dword *pdStack_a0;
  dword *pdStack_98;
  dword *pdStack_90;
  code *pcStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar29 = (qword *)(param_1 + 2);
  *pqVar29 = 1;
  *(dword **)(param_1 + 4) = param_3;
  pdVar19 = param_1 + 6;
  pdVar25 = param_3;
  puVar13 = param_2;
  func_0x003bcf60();
  if (puVar13 < (ulong *)0x7ffffffffffffff8) {
    if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar13) {
      uVar27 = ((ulong)puVar13 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar13 | 7) != 0x17) {
        uVar27 = (ulong)puVar13 | 7;
      }
      pdVar23 = (dword *)(uVar27 + 1);
      __Znwm();
      *(ulong **)(param_1 + 8) = puVar13;
      *(ulong *)(param_1 + 10) = uVar27 + 1 | 0x8000000000000000;
      *(dword **)(param_1 + 6) = pdVar23;
LAB_00382c8c:
      _memmove(pdVar23,pdVar25,puVar13);
    }
    else {
      *(char *)((long)param_1 + 0x2f) = (char)puVar13;
      pdVar23 = pdVar19;
      if (puVar13 != (ulong *)0x0) goto LAB_00382c8c;
      pdVar25 = (dword *)0x0;
    }
    *(char *)((long)pdVar23 + (long)puVar13) = '\0';
    func_0x003d5b44(&plStack_120,param_2);
    uVar27 = plStack_120[2];
    plVar7 = (long *)plStack_120[3];
    if (plVar7 != (long *)0x0) {
      plVar17 = plVar7 + 1;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = *plVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uStack_118 = uVar27;
    plStack_110 = plVar7;
    func_0x003bcf60();
    pppcStack_d0 = (char ***)0x8c4469;
    pdStack_c8 = (dword *)((long)&MACH_HEADER.ncmds + 1);
    pdStack_a0 = param_3;
    pdStack_98 = pdVar25;
    FUN_00575d30(&pdStack_108,&pdStack_a0,&pppcStack_d0);
    pdVar25 = param_1 + 0xc;
    pdVar23 = pdStack_108;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
      pdVar23 = (dword *)&pdStack_108;
    }
    FUN_003d77d0(pdVar25,uVar27,pdVar23,uStack_100);
    if ((char)bStack_f1 < '\0') {
      __ZdlPv(pdStack_108);
    }
    if (plVar7 != (long *)0x0) {
      plVar17 = plVar7 + 1;
      do {
        lVar21 = *plVar17;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = lVar21 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_120 != (long *)0x0) {
      plVar7 = plStack_120 + 1;
      do {
        lVar21 = *plVar7;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = lVar21 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar21 + -1 == 0) {
        (**(code **)(*plStack_120 + 8))();
      }
    }
    pdVar23 = pdVar25;
    FUN_003839ec(param_1 + 0x10,pdVar25,0xd00,0xd00);
    pcVar24 = (char *)(param_1 + 0x16);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x18);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x1c);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    FUN_003bc618();
    pcVar24 = (char *)(param_1 + 0x26);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x20);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x22);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(dword **)(param_1 + 0x1e) = pdVar23;
    pcVar24 = (char *)((long)param_1 + 0x8d);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(char *)(param_1 + 0x28) = '\x01';
    pcVar24 = (char *)(param_1 + 0x2a);
    pcVar14 = (char *)(param_1 + 0x2c);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x2e);
    pcVar14 = (char *)(param_1 + 0x30);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x32);
    pcVar14 = (char *)(param_1 + 0x34);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x36);
    pcVar14 = (char *)(param_1 + 0x38);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x3a);
    pcVar14 = (char *)(param_1 + 0x3c);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0xb2);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = "client_transport";
    if (param_4 == 0) {
      pcVar24 = "server_transport";
    }
    *(char **)(param_1 + 0xb8) = pcVar24;
    pcVar24 = (char *)(param_1 + 0xba);
    pcVar24[0] = '\x02';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = (char *)(param_1 + 0xbc);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0xc2);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0xc0);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(dword **)(param_1 + 0xbe) = param_1 + 0xc0;
    FUN_00388a58();
    *(char *)(param_1 + 0x18a) = (char)param_4;
    pcVar24 = (char *)(param_1 + 0x1d6);
    pcVar24[0] = -1;
    pcVar24[1] = -1;
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = (char *)(param_1 + 0x1d8);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x1da);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    *(char *)((long)(param_1 + 0x1db) + 0) = '\x01';
    *(char *)((long)(param_1 + 0x1db) + 1) = '\0';
    pcVar24 = (char *)(param_1 + 0x1dc);
    pcVar24[0] = '\b';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    uVar20 = 1;
    if (param_4 == 0) {
      uVar20 = 2;
    }
    param_1[0x1f9] = uVar20;
    pcVar24 = (char *)(param_1 + 0x1fa);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = (char *)(param_1 + 0x222);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x1fc);
    pcVar14 = (char *)(param_1 + 0x1fe);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x200);
    pcVar14 = (char *)(param_1 + 0x202);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x204);
    pcVar14 = (char *)(param_1 + 0x206);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x208);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x20e);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x20c);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x22c);
    pcVar14 = (char *)(param_1 + 0x22e);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x230);
    pcVar14 = (char *)(param_1 + 0x232);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    FUN_003926a0();
    pdVar23 = pdVar19;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      pdVar23 = *(dword **)pdVar19;
    }
    puVar13 = param_2;
    func_0x003a2e80(param_2,"grpc.http2.bdp_probe",1);
    pdVar18 = param_1 + 0x26a;
    FUN_0038be88(pdVar18,pdVar23,puVar13,pdVar25);
    pcVar24 = (char *)(param_1 + 0x2a4);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    uVar20 = 0x18;
    if (param_4 == 0) {
      uVar20 = 0;
    }
    param_1[0x2a6] = uVar20;
    pcVar24 = (char *)(param_1 + 0x2a7);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\x01';
    pcVar24 = (char *)(param_1 + 0x2a8);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x2aa);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = (char *)(param_1 + 0x2b2);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(char *)(param_1 + 0x2b4) = '\0';
    *(char *)((long)(param_1 + 0x2e6) + 0) = '\0';
    *(char *)((long)(param_1 + 0x2e6) + 1) = '\0';
    plVar7 = (long *)(param_1 + 0x332);
    pcVar24 = (char *)(param_1 + 0x2ac);
    pcVar14 = (char *)(param_1 + 0x2ae);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x2ce);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = (char *)(param_1 + 0x2d0);
    pcVar14 = (char *)(param_1 + 0x2d2);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(char *)((long)(param_1 + 0x2d4) + 0) = '\0';
    *(char *)((long)(param_1 + 0x2d4) + 1) = '\0';
    *(char *)((long)(param_1 + 0x336) + 0) = '\0';
    *(char *)((long)(param_1 + 0x336) + 1) = '\0';
    pcVar24 = (char *)(param_1 + 0x334);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *plVar7 = 0;
    pcVar24 = (char *)(param_1 + 0x33c);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(char *)(param_1 + 0x33e) = '\0';
    pcVar24 = (char *)(param_1 + 0x338);
    pcVar14 = (char *)(param_1 + 0x33a);
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14[4] = '\0';
    pcVar14[5] = '\0';
    pcVar14[6] = '\0';
    pcVar14[7] = '\0';
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    *(undefined **)param_1 = &UNK_009decd8;
    FUN_0039d238(param_1 + 0x3e,8);
    FUN_003ecf38(param_1 + 0x68);
    pcVar24 = (char *)(param_1 + 0xc4);
    FUN_003ecf38(pcVar24);
    if (param_4 != 0) {
      FUN_003ec31c(auStack_f0,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
      FUN_003ecb34(pcVar24,auStack_f0);
    }
    FUN_003ecf38(param_1 + 0x18c);
    lVar21 = 0;
    pcVar14 = (char *)(param_1 + 0x1dd);
    do {
      lVar22 = 0;
      do {
        *(undefined4 *)(pcVar14 + lVar22) = *(undefined4 *)(&UNK_009df2b8 + lVar21 * 0x20);
        lVar22 = lVar22 + 0x1c;
      } while (lVar22 != 0x70);
      lVar21 = lVar21 + 1;
      pcVar14 = pcVar14 + 4;
    } while (lVar21 != 7);
    FUN_0038cd60(param_1 + 0x262);
    if (param_4 != 0) {
      FUN_00383a6c(param_1,1,0);
      FUN_00383a6c(param_1,2,0);
    }
    FUN_00383a6c(param_1,5,0x2000);
    pdVar25 = (dword *)((long)&MACH_HEADER.cputype + 2);
    pcVar14 = (char *)param_1;
    FUN_00383a6c(param_1,6,1);
    param_1[0x20a] = uRam0000000000afa58c;
    param_1[0x20b] = uRam0000000000afa588;
    *(long *)(param_1 + 0x20c) = (long)(int)uRam0000000000afa590;
    bVar11 = *(char *)(param_1 + 0x18a) != '\0';
    piVar3 = (int *)0xafa57c;
    if (bVar11) {
      piVar3 = (int *)0xafa578;
    }
    piVar4 = (int *)0xafa584;
    if (bVar11) {
      piVar4 = (int *)0xafa580;
    }
    pcVar5 = (char *)0xb5e752;
    if (bVar11) {
      pcVar5 = (char *)0xb5e751;
    }
    iVar8 = *piVar4;
    lVar21 = 0x7fffffffffffffff;
    if (*piVar3 != 0x7fffffff) {
      lVar21 = (long)*piVar3;
    }
    cVar9 = *pcVar5;
    *(long *)(param_1 + 0x332) = lVar21;
    lVar21 = 0x7fffffffffffffff;
    if (iVar8 != 0x7fffffff) {
      lVar21 = (long)iVar8;
    }
    *(long *)(param_1 + 0x334) = lVar21;
    *(char *)(param_1 + 0x336) = cVar9;
    if (param_2 != (ulong *)0x0) {
      if (*param_2 != 0) {
        uVar27 = 0;
        uStack_18c = 1;
        do {
          pdVar23 = (dword *)(param_2[1] + uVar27 * 0x20);
          pdVar28 = *(dword **)(pdVar23 + 2);
          pdVar25 = pdVar28;
          _strcmp(pdVar28,"grpc.http2.initial_sequence_number");
          if ((int)pdVar25 == 0) {
            pcVar24 = (char *)((ulong)pcVar24 & 0xffffffff00000000 | 0x7fffffff);
            pdVar25 = (dword *)0xffffffff;
            FUN_003a2c94(pdVar23,0xffffffff,pcVar24);
            uVar12 = (uint)pdVar23;
            pcVar14 = (char *)pdVar23;
            if (-1 < (int)uVar12) {
              if ((param_1[0x1f9] & 1) == (uVar12 & 1)) {
                param_1[0x1f9] = uVar12;
              }
              else {
                pcVar14 = 
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                ;
                pdVar25 = (dword *)((long)&section_00000108.addr + 7);
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x12f,2,"%s: low bit must be %d on %s");
              }
            }
          }
          else {
            pdVar25 = pdVar28;
            _strcmp(pdVar28,"grpc.http2.hpack_table_size.encoder");
            if ((int)pdVar25 == 0) {
              FUN_003a2c94(pdVar23,0xffffffff);
              pcVar14 = (char *)pdVar23;
              pdVar25 = pdVar23;
              if (-1 < (int)pdVar23) {
                pcVar14 = (char *)(param_1 + 0x10e);
                FUN_00391ab4();
                pdVar25 = pdVar23;
              }
            }
            else {
              pdVar25 = pdVar28;
              _strcmp(pdVar28,"grpc.http2.max_pings_without_data");
              if ((int)pdVar25 == 0) {
                pdVar25 = (dword *)(ulong)uRam0000000000afa58c;
                FUN_003a2c94();
                param_1[0x20a] = (int)pdVar23;
                pcVar14 = (char *)pdVar23;
              }
              else {
                pdVar25 = pdVar28;
                _strcmp(pdVar28,"grpc.http2.max_ping_strikes");
                if ((int)pdVar25 == 0) {
                  pdVar25 = (dword *)(ulong)uRam0000000000afa588;
                  FUN_003a2c94();
                  param_1[0x20b] = (int)pdVar23;
                  pcVar14 = (char *)pdVar23;
                }
                else {
                  pdVar25 = pdVar28;
                  _strcmp(pdVar28,"grpc.http2.min_ping_interval_without_data_ms");
                  if ((int)pdVar25 == 0) {
                    pdVar25 = (dword *)(ulong)uRam0000000000afa590;
                    FUN_003a2c94();
                    lVar21 = (long)(int)pdVar23;
                    plVar17 = (long *)(param_1 + 0x20c);
LAB_003833c0:
                    *plVar17 = lVar21;
                    pcVar14 = (char *)pdVar23;
                  }
                  else {
                    pdVar25 = pdVar28;
                    _strcmp(pdVar28,"grpc.http2.write_buffer_size");
                    if ((int)pdVar25 == 0) {
                      pdVar25 = (dword *)0x0;
                      FUN_003a2c94();
                      param_1[0x1d6] = (int)pdVar23;
                      pcVar14 = (char *)pdVar23;
                    }
                    else {
                      pdVar25 = pdVar28;
                      _strcmp(pdVar28,"grpc.keepalive_time_ms");
                      if ((int)pdVar25 == 0) {
                        puVar6 = (uint *)0xafa57c;
                        if (*(char *)(param_1 + 0x18a) != '\0') {
                          puVar6 = (uint *)0xafa578;
                        }
                        pdVar25 = (dword *)((ulong)*puVar6 | 0x100000000);
                        FUN_003a2c94();
                        lVar21 = 0x7fffffffffffffff;
                        plVar17 = plVar7;
                        if ((int)pdVar23 != 0x7fffffff) {
                          lVar21 = (long)(int)pdVar23;
                        }
                        goto LAB_003833c0;
                      }
                      pdVar25 = pdVar28;
                      _strcmp(pdVar28,"grpc.keepalive_timeout_ms");
                      if ((int)pdVar25 == 0) {
                        puVar6 = (uint *)0xafa584;
                        if (*(char *)(param_1 + 0x18a) != '\0') {
                          puVar6 = (uint *)0xafa580;
                        }
                        pdVar25 = (dword *)(ulong)*puVar6;
                        FUN_003a2c94();
                        lVar21 = 0x7fffffffffffffff;
                        if ((int)pdVar23 != 0x7fffffff) {
                          lVar21 = (long)(int)pdVar23;
                        }
                        *(long *)(param_1 + 0x334) = lVar21;
                        pcVar14 = (char *)pdVar23;
                      }
                      else {
                        pdVar25 = pdVar28;
                        _strcmp(pdVar28,"grpc.keepalive_permit_without_calls");
                        if ((int)pdVar25 == 0) {
                          pdVar25 = (dword *)0x0;
                          FUN_003a2c94();
                          *(bool *)(param_1 + 0x336) = (int)pdVar23 != 0;
                          pcVar14 = (char *)pdVar23;
                        }
                        else {
                          pdVar25 = pdVar28;
                          _strcmp(pdVar28,"grpc.optimization_target");
                          if ((int)pdVar25 == 0) {
                            pcVar14 = 
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ;
                            pdVar25 = (dword *)(section_00000158.segname + 8);
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                         ,0x170,1,"GRPC_ARG_OPTIMIZATION_TARGET is deprecated");
                          }
                          else {
                            pdVar25 = pdVar28;
                            _strcmp(pdVar28,"grpc.enable_channelz");
                            if ((int)pdVar25 == 0) {
                              pdVar25 = (dword *)((long)&MACH_HEADER.magic + 1);
                              func_0x003a2de0();
                              uStack_18c = (uint)pdVar23;
                              pcVar14 = (char *)pdVar23;
                            }
                            else {
                              lVar21 = 6;
                              ppuVar26 = &PTR_s_grpc_max_concurrent_streams_009deb40;
                              do {
                                pdVar25 = (dword *)*ppuVar26;
                                pcVar14 = (char *)pdVar28;
                                _strcmp();
                                if ((int)pcVar14 == 0) {
                                  if (*(char *)((long)ppuVar26 + ((ulong)param_4 | 0x18)) == '\0') {
                                    pcVar14 = 
                                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                    ;
                                    pdVar25 = (dword *)((long)&section_00000158.nrelocs + 3);
                                    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                                 ,0x197,0,"%s is not available on %s");
                                  }
                                  else {
                                    pdVar25 = *(dword **)((long)ppuVar26 + 0xc);
                                    FUN_003a2c94();
                                    pcVar14 = (char *)pdVar23;
                                    if (-1 < (int)pdVar23) {
                                      pdVar25 = (dword *)(ulong)*(uint *)(ppuVar26 + 1);
                                      pcVar14 = (char *)param_1;
                                      FUN_00383a6c(param_1,pdVar25,pdVar23);
                                    }
                                  }
                                  break;
                                }
                                ppuVar26 = ppuVar26 + 4;
                                lVar21 = lVar21 + -1;
                              } while (lVar21 != 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < *param_2);
        if ((uStack_18c & 1) == 0) goto LAB_00383660;
      }
      qVar15 = *(qword *)(param_1 + 4);
      func_0x003bcf6c(qVar15);
      if ((dword *)0x7ffffffffffffff7 < pdVar25) goto LAB_003837f4;
      if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pdVar25) {
        uVar27 = ((ulong)pdVar25 & 0xfffffffffffffff8) + 8;
        if (((ulong)pdVar25 | 7) != 0x17) {
          uVar27 = (ulong)pdVar25 | 7;
        }
        ppppcVar16 = (char ****)(uVar27 + 1);
        __Znwm();
        uStack_c0 = uVar27 + 1 | 0x8000000000000000;
        pppcStack_d0 = (char ***)ppppcVar16;
        pdStack_c8 = pdVar25;
LAB_0038357c:
        _memmove(ppppcVar16,qVar15,pdVar25);
      }
      else {
        uStack_c0 = CONCAT17((char)pdVar25,(undefined7)uStack_c0);
        ppppcVar16 = &pppcStack_d0;
        if (pdVar25 != (dword *)0x0) goto LAB_0038357c;
      }
      *(char *)((long)ppppcVar16 + (long)pdVar25) = '\0';
      pdStack_a0 = (dword *)0x8c506b;
      pdStack_98 = (dword *)0x560e98;
      pcStack_88 = FUN_00561110;
      pdStack_90 = pdVar19;
      FUN_0056189c(&pdStack_108,"%s %s",5,&pdStack_a0,2);
      FUN_003a9d84(&pdStack_a0,param_2);
      FUN_00388be8(&uStack_118,&pppcStack_d0,pdVar19,&pdStack_108,&pdStack_a0);
      uVar27 = uStack_118;
      plVar17 = *(long **)(param_1 + 0x33a);
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar21 = *plVar1;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar21 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar21 + -1 == 0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
      *(ulong *)(param_1 + 0x33a) = uVar27;
      uStack_118 = 0;
      pcVar14 = (char *)pdStack_a0;
      if (pdStack_a0 != (dword *)0x0) {
        pqVar2 = (qword *)(pdStack_a0 + 2);
        do {
          qVar15 = *pqVar2;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pqVar2,0x10);
          if (bVar11) {
            *pqVar2 = qVar15 - 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (qVar15 - 1 == 0) {
          (**(code **)(*(long *)pdStack_a0 + 8))();
        }
      }
      pdVar25 = pdVar19;
      if ((char)bStack_f1 < '\0') {
        __ZdlPv();
        pcVar14 = (char *)pdStack_108;
        pdVar25 = pdVar19;
      }
    }
LAB_00383660:
    uVar20 = SUB84(pdVar25,0);
    pcVar24 = (char *)(param_1 + 0x210);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    *(char *)(param_1 + 0x220) = '\0';
    pcVar24 = (char *)(param_1 + 0x20e);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = -0x80;
    pcVar24 = (char *)(param_1 + 0x232);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = -0x80;
    pcVar24 = (char *)(param_1 + 0x234);
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    if (*(long *)(param_1 + 0x332) == 0x7fffffffffffffff) {
      pcVar24 = (char *)(param_1 + 0x337);
      pcVar24[0] = '\x03';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
    }
    else {
      pcVar24 = (char *)(param_1 + 0x337);
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pqVar29,0x10);
        if (bVar11) {
          *pqVar29 = *pqVar29 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(code **)(param_1 + 0x2f8) = FUN_00388d70;
      *(dword **)(param_1 + 0x2fa) = param_1;
      pcVar24 = (char *)(param_1 + 0x2fc);
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      func_0x003c1f6c();
      uVar27 = *(ulong *)pcVar14;
      FUN_003c1e28();
      lVar22 = *plVar7;
      lVar21 = 0x7fffffffffffffff;
      if ((uVar27 != 0x7fffffffffffffff && lVar22 != 0x7fffffffffffffff) &&
         (lVar21 = -0x8000000000000000,
         uVar27 != 0x8000000000000000 && lVar22 != -0x8000000000000000)) {
        if ((long)uVar27 < 1) {
          if ((long)(-0x8000000000000000 - uVar27) <= lVar22) goto LAB_00383720;
        }
        else if ((long)(uVar27 ^ 0x7fffffffffffffff) < lVar22) {
          lVar21 = 0x7fffffffffffffff;
        }
        else {
LAB_00383720:
          lVar21 = lVar22 + uVar27;
        }
      }
      func_0x003cf010(param_1 + 0x316,lVar21,param_1 + 0x2f6);
      uVar20 = (undefined4)lVar21;
    }
    if (*(char *)(param_1 + 0x26e) != '\0') {
      *(char *)(param_1 + 0x2b4) = '\x01';
      FUN_0038c15c();
      pdStack_98 = (dword *)CONCAT44(pdStack_98._4_4_,uVar20);
      pdStack_a0 = pdVar18;
      func_0x00383b10(&pdStack_a0,param_1,0);
    }
    FUN_00383c14(param_1,0);
    FUN_00383cc8(param_1);
    if (pcRam0000000000b5e740 != (code *)0x0) {
      (*pcRam0000000000b5e740)();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return param_1;
    }
  }
  else {
    func_0x0033b318(pdVar19);
  }
  ___stack_chk_fail();
LAB_003837f4:
  func_0x0033b318(&pppcStack_d0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x383800);
  (*pcVar10)();
}



/* Entry: 003839ec; end: 00383a6b;  */

void FUN_003839ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  plVar5 = plVar1;
  if (lVar2 != 0) {
    plVar5 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)*param_2;
  }
  (**(code **)(*plVar5 + 0x10))();
  *param_1 = plVar1;
  param_1[1] = lVar2;
  param_1[2] = plVar5;
  return;
}



/* Entry: 00383a6c; end: 00383c13;  */

void FUN_00383a6c(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = (param_2 & 0xffffffff) * 0x20;
  uVar2 = *(uint *)(&UNK_009df2c0 + lVar1);
  if (param_3 <= *(uint *)(&UNK_009df2c0 + lVar1)) {
    uVar2 = param_3;
  }
  uVar3 = *(uint *)(&UNK_009df2bc + lVar1);
  if (*(uint *)(&UNK_009df2bc + lVar1) <= param_3) {
    uVar3 = uVar2;
  }
  if (uVar3 != param_3) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x435,1,"Requested parameter %s clamped from %d to %d");
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  if (uVar3 != *(uint *)(lVar1 + 0x790)) {
    *(uint *)(lVar1 + 0x790) = uVar3;
    *(undefined1 *)(param_1 + 0x76c) = 1;
  }
  return;
}



/* Entry: 00383c14; end: 00383cc7;  */

void FUN_00383c14(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0x90) == 1) {
    FUN_00384638(param_2);
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    FUN_00384638(param_2);
    *(undefined4 *)(param_1 + 0x90) = 1;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(code **)(param_1 + 0x128) = FUN_00384674;
    *(long *)(param_1 + 0x130) = param_1;
    *(undefined8 *)(param_1 + 0x138) = 0;
    uStack_28 = 0;
    FUN_003bcb64(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00383cc8; end: 00383e93;  */

void FUN_00383cc8(qword param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  dword *pdVar5;
  segment_command *psVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  dword *pdStack_58;
  
  if (*(char *)(param_1 + 0xb50) == '\0') {
    *(undefined1 *)(param_1 + 0xb50) = 1;
    plVar10 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00339d8c(lVar8 + 0x40);
    if (*(char *)(lVar8 + 0x80) != '\0') {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                   ,0x13a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x383e2c);
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar8 + 0x18);
    pdVar5 = &MACH_HEADER.flags;
    __Znwm();
    uVar1 = *(undefined8 *)(lVar9 + 0x30);
    lVar7 = *(long *)(lVar9 + 0x38);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)(pdVar5 + 2);
    *plVar10 = 1;
    *(undefined ***)pdVar5 = &PTR_FUN_009e07f8;
    psVar6 = &segment_command_00000020;
    __Znwm();
    *(undefined ***)psVar6 = &PTR_FUN_009dec60;
    *(undefined8 *)psVar6->segname = uVar1;
    *(long *)(psVar6->segname + 8) = lVar7;
    psVar6->vmaddr = param_1;
    *(segment_command **)(pdVar5 + 4) = psVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdStack_58 = pdVar5;
    FUN_003d62f4(lVar9 + 0x30,&pdStack_58);
    if (pdStack_58 != (dword *)0x0) {
      plVar10 = (long *)(pdStack_58 + 2);
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*(long *)pdStack_58 + 0x10))();
      }
    }
    FUN_0038aa60(lVar8 + 0x90,pdVar5);
    func_0x00339da8(lVar8 + 0x40);
  }
  return;
}



/* Entry: 00383e94; end: 00383ecb;  */

void FUN_00383e94(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 00383ecc; end: 0038406f;  */

long FUN_00383ecc(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  *(long *)(param_1 + 8) = param_2;
  *(long **)(param_1 + 0x10) = param_3;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar3) {
      *param_3 = *param_3 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x167) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x380) = param_5;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x588) = param_5;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined1 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined2 *)(param_1 + 0x6f0) = 0;
  func_0x0038bee8(param_1 + 0x6f8,param_2 + 0x9a8);
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined1 *)(param_1 + 0x870) = 0;
  if (param_4 != 0) {
    *(int *)(param_1 + 0x9c) = (int)param_4;
    **(long **)(param_2 + 0x2c8) = param_1;
    FUN_0039d29c(param_2 + 0xf8,param_4,param_1);
    FUN_00384070(param_2);
  }
  FUN_003ecf38(param_1 + 0x5a0);
  FUN_003ecf38(param_1 + 0x728);
  return param_1;
}



/* Entry: 00384070; end: 0038423b;  */

void FUN_00384070(qword param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  dword *pdVar5;
  segment_command *psVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  dword *pdStack_58;
  
  if (*(char *)(param_1 + 0xb51) == '\0') {
    *(undefined1 *)(param_1 + 0xb51) = 1;
    plVar10 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00339d8c(lVar8 + 0x40);
    if (*(char *)(lVar8 + 0x80) != '\0') {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                   ,0x13a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x3841d4);
      (*pcVar4)();
    }
    lVar9 = *(long *)(lVar8 + 0x18);
    pdVar5 = &MACH_HEADER.flags;
    __Znwm();
    uVar1 = *(undefined8 *)(lVar9 + 0x50);
    lVar7 = *(long *)(lVar9 + 0x58);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)(pdVar5 + 2);
    *plVar10 = 1;
    *(undefined ***)pdVar5 = &PTR_FUN_009e07f8;
    psVar6 = &segment_command_00000020;
    __Znwm();
    *(undefined ***)psVar6 = &PTR_FUN_009decb8;
    *(undefined8 *)psVar6->segname = uVar1;
    *(long *)(psVar6->segname + 8) = lVar7;
    psVar6->vmaddr = param_1;
    *(segment_command **)(pdVar5 + 4) = psVar6;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdStack_58 = pdVar5;
    FUN_003d62f4(lVar9 + 0x50,&pdStack_58);
    if (pdStack_58 != (dword *)0x0) {
      plVar10 = (long *)(pdStack_58 + 2);
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*(long *)pdStack_58 + 0x10))();
      }
    }
    FUN_0038aa60(lVar8 + 0xa0,pdVar5);
    func_0x00339da8(lVar8 + 0x40);
  }
  return;
}



/* Entry: 0038423c; end: 003844d7;  */

long FUN_0038423c(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_30;
  undefined1 uStack_21;
  
  func_0x0039d228(*(undefined8 *)(param_1 + 8),param_1);
  func_0x0039d1e0(*(undefined8 *)(param_1 + 8),param_1);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0xce8);
  if (lVar6 != 0) {
    if (*(char *)(*(long *)(param_1 + 8) + 0x628) == '\0') {
      if (*(char *)(param_1 + 0x16e) == '\0') goto LAB_00384294;
LAB_00384284:
      plVar7 = (long *)(lVar6 + 0x40);
    }
    else {
      if (*(char *)(param_1 + 0x16d) != '\0') goto LAB_00384284;
LAB_00384294:
      plVar7 = (long *)(lVar6 + 0x48);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(char *)(param_1 + 0x168) == '\0') || (*(char *)(param_1 + 0x169) == '\0')) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar5 = 0x2c8;
      goto LAB_003844a4;
    }
  }
  else if (*(int *)(param_1 + 0x9c) != 0) {
    lVar6 = *(long *)(param_1 + 8) + 0xf8;
    func_0x0039d3ec();
    if (lVar6 != 0) {
      uVar5 = 0x2ca;
      goto LAB_003844a4;
    }
  }
  FUN_003ecf54(param_1 + 0x5a0);
  uVar8 = 0;
  do {
    if ((*(byte *)(param_1 + 0x98 + (uVar8 >> 3)) >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x2d1,2,"%s stream %d still included in list %d");
      goto LAB_00384440;
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulong)uVar1;
  } while (uVar1 != 5);
  if (*(long *)(param_1 + 0xa8) == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        if (*(long *)(param_1 + 0x118) == 0) {
          if (*(long *)(param_1 + 0x128) == 0) {
            FUN_003ecf54(param_1 + 0x728);
            lVar6 = *(long *)(param_1 + 8);
            plVar7 = (long *)(lVar6 + 8);
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((lVar6 != 0) && (lVar9 == 1)) {
              FUN_003827f4();
              __ZdlPv();
            }
            uStack_30 = 0;
            FUN_003c1e6c(&uStack_21,*(undefined8 *)(param_1 + 0x40),&uStack_30);
            if ((uStack_30 & 1) != 0) {
              FUN_0055293c();
            }
            if (0 < *(long *)(param_1 + 0x710)) {
              *(long *)(*(long *)(param_1 + 0x6f8) + 8) =
                   *(long *)(*(long *)(param_1 + 0x6f8) + 8) - *(long *)(param_1 + 0x710);
            }
            if ((*(ulong *)(param_1 + 0x6d8) & 1) != 0) {
              FUN_0055293c();
            }
            FUN_0036d7cc(param_1 + 0x398);
            FUN_0036d7cc(param_1 + 400);
            if ((*(ulong *)(param_1 + 0x178) & 1) != 0) {
              FUN_0055293c();
            }
            if ((*(ulong *)(param_1 + 0x170) & 1) != 0) {
              FUN_0055293c();
            }
            return param_1;
          }
          uVar5 = 0x2db;
        }
        else {
          uVar5 = 0x2da;
        }
      }
      else {
        uVar5 = 0x2d9;
      }
    }
    else {
      uVar5 = 0x2d8;
    }
  }
  else {
    uVar5 = 0x2d7;
  }
LAB_003844a4:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,uVar5,2,"assertion failed: %s");
LAB_00384440:
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x384448);
  (*pcVar4)();
}



/* Entry: 003844d8; end: 0038453b;  */

undefined8 ****** FUN_003844d8(undefined8 ******param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 ******ppppppuVar3;
  int *piVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuStack_68;
  undefined8 uStack_60;
  undefined8 *****pppppuStack_58;
  undefined8 *****pppppuStack_28;
  
  if (param_1[0x5a] == (undefined8 *****)0x0) {
    return (undefined8 ******)0x0;
  }
  pppppuStack_28 = (undefined8 ******)0x0;
  if (param_1[0x59] == (undefined8 *****)0x0) {
    param_1[0x59] = &pppppuStack_28;
    (*(code *)param_1[0x5a])(param_1[0x5b],param_1,param_2);
    param_1[0x59] = (undefined8 *****)0x0;
    return (undefined8 ******)pppppuStack_28;
  }
  FUN_00772958();
  *(int *)(param_1 + 0x12) = param_2;
  if (param_2 != 0) {
    return param_1;
  }
  ppppppuVar3 = &pppppuStack_58;
  FUN_003c1f14(ppppppuVar3,param_1 + 0x168);
  ppppppuVar5 = (undefined8 ******)param_1[0x167];
  if (ppppppuVar5 == (undefined8 ******)0x0) {
    return ppppppuVar3;
  }
  ppppppuVar3 = ppppppuVar5;
  pppppuStack_58 = ppppppuVar5;
  if (((ulong)ppppppuVar5 & 1) == 0) {
LAB_003845a8:
    param_1[0x167] = (undefined8 *****)0x0;
    uStack_60 = 0x36;
    if (((ulong)ppppppuVar3 & 1) != 0) {
      FUN_0055293c();
    }
    if (((ulong)ppppppuVar5 & 1) == 0) goto LAB_003845e0;
  }
  else {
    piVar4 = (int *)((long)ppppppuVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppppppuVar3 = (undefined8 ******)param_1[0x167];
    if ((undefined8 ******)param_1[0x167] != (undefined8 ******)0x0) goto LAB_003845a8;
  }
  piVar4 = (int *)((long)ppppppuVar5 - 1);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_003845e0:
  pppppuStack_68 = ppppppuVar5;
  FUN_00385754(param_1,&pppppuStack_68);
  ppppppuVar3 = (undefined8 ******)pppppuStack_68;
  if (((ulong)pppppuStack_68 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)ppppppuVar5 & 1) != 0) {
    FUN_0055293c(ppppppuVar5);
    ppppppuVar3 = ppppppuVar5;
  }
  return ppppppuVar3;
}



/* Entry: 0038453c; end: 00384637;  */

void FUN_0038453c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong auStack_38 [3];
  
  *(int *)(param_1 + 0x90) = param_2;
  if (param_2 != 0) {
    return;
  }
  FUN_003c1f14(auStack_38 + 2,param_1 + 0xb40);
  uVar5 = *(ulong *)(param_1 + 0xb38);
  if (uVar5 == 0) {
    return;
  }
  uVar3 = uVar5;
  auStack_38[2] = uVar5;
  if ((uVar5 & 1) == 0) {
LAB_003845a8:
    *(undefined8 *)(param_1 + 0xb38) = 0;
    auStack_38[1] = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uVar5 & 1) == 0) goto LAB_003845e0;
  }
  else {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *(ulong *)(param_1 + 0xb38);
    if (*(ulong *)(param_1 + 0xb38) != 0) goto LAB_003845a8;
  }
  piVar4 = (int *)(uVar5 - 1);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_003845e0:
  auStack_38[0] = uVar5;
  FUN_00385754(param_1,auStack_38);
  if ((auStack_38[0] & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 00384638; end: 00384673;  */

char * FUN_00384638(uint param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  char *unaff_x19;
  long unaff_x20;
  char *pcStack_38;
  
  if (param_1 < 0x16) {
    return (&PTR_s_INITIAL_WRITE_009ded30)[(int)param_1];
  }
  pcVar5 = "return \"unknown\"";
  func_0x00338df0("return \"unknown\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                  ,0xc16);
  if (*(int *)(pcVar5 + 0x90) != 0) {
    if ((*(long *)(pcVar5 + 0x98) == 0) &&
       (pcVar6 = pcVar5, FUN_0039d5f0(), ((ulong)pcVar6 & 1) != 0)) {
      uVar9 = 1;
      if (((ulong)pcVar6 & 0x100) != 0) {
        uVar9 = 2;
      }
      FUN_0038453c(pcVar5,uVar9);
      pcStack_38 = (char *)0x0;
      unaff_x20 = 0xb5e000;
      if ((bRam0000000000b5e758 & 1) == 0) goto LAB_003847c0;
      while( true ) {
        uVar7 = *(undefined8 *)(pcVar5 + 0xce0);
        pcVar5[0xce0] = '\0';
        pcVar5[0xce1] = '\0';
        pcVar5[0xce2] = '\0';
        pcVar5[0xce3] = '\0';
        pcVar5[0xce4] = '\0';
        pcVar5[0xce5] = '\0';
        pcVar5[0xce6] = '\0';
        pcVar5[0xce7] = '\0';
        if (*(char *)(unaff_x20 + 0x753) == '\0') {
          iVar8 = 0x7fffffff;
        }
        else {
          iVar8 = *(int *)(pcVar5 + 0x784) << 1;
        }
        *(code **)(pcVar5 + 0x168) = FUN_00389878;
        *(char **)(pcVar5 + 0x170) = pcVar5;
        pcVar5[0x178] = '\0';
        pcVar5[0x179] = '\0';
        pcVar5[0x17a] = '\0';
        pcVar5[0x17b] = '\0';
        pcVar5[0x17c] = '\0';
        pcVar5[0x17d] = '\0';
        pcVar5[0x17e] = '\0';
        pcVar5[0x17f] = '\0';
        func_0x003bceb0(*(undefined8 *)(pcVar5 + 0x10),pcVar5 + 0x310,pcVar5 + 0x160,uVar7,iVar8);
        pcVar6 = pcStack_38;
        if (((ulong)pcStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        if (pcVar5[0xcf8] == '\0') break;
        if (*(int *)(pcVar5 + 0xcf4) == 0) {
          pcVar5[0xcf8] = '\0';
          *(code **)(pcVar5 + 0x188) = FUN_00389b48;
          *(char **)(pcVar5 + 400) = pcVar5;
          pcVar5[0x198] = '\0';
          pcVar5[0x199] = '\0';
          pcVar5[0x19a] = '\0';
          pcVar5[0x19b] = '\0';
          pcVar5[0x19c] = '\0';
          pcVar5[0x19d] = '\0';
          pcVar5[0x19e] = '\0';
          pcVar5[0x19f] = '\0';
          pcVar6 = *(char **)(pcVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x003bceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)pcVar6)
                    (pcVar6,pcVar5 + 0x1a0,pcVar5 + 0x180,*(long *)(pcVar5 + 0x760) != 0,1);
          return pcVar6;
        }
LAB_003847bc:
        func_0x007729c0();
LAB_003847c0:
        iVar8 = 0xb5e758;
        ___cxa_guard_acquire();
        if (iVar8 != 0) {
          uVar4 = 200;
          FUN_0033ab98();
          *(undefined1 *)(unaff_x20 + 0x753) = uVar4;
          ___cxa_guard_release(0xb5e758);
        }
      }
    }
    else {
      pcVar6 = pcVar5;
      FUN_0038453c(pcVar5,0);
      plVar1 = (long *)(pcVar5 + 8);
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        FUN_003827f4(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)();
        return pcVar5;
      }
    }
    return pcVar6;
  }
  func_0x0077298c();
  pcVar5 = unaff_x19;
  goto LAB_003847bc;
}



/* Entry: 00384674; end: 0038481b;  */

void FUN_00384674(ulong param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong unaff_x19;
  long unaff_x20;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    func_0x0077298c();
    param_1 = unaff_x19;
    goto LAB_003847bc;
  }
  if ((*(long *)(param_1 + 0x98) == 0) && (uVar5 = param_1, FUN_0039d5f0(), (uVar5 & 1) != 0)) {
    uVar8 = 1;
    if ((uVar5 & 0x100) != 0) {
      uVar8 = 2;
    }
    FUN_0038453c(param_1,uVar8);
    uStack_28 = 0;
    unaff_x20 = 0xb5e000;
    if ((bRam0000000000b5e758 & 1) == 0) goto LAB_003847c0;
    while( true ) {
      uVar6 = *(undefined8 *)(param_1 + 0xce0);
      *(undefined8 *)(param_1 + 0xce0) = 0;
      if (*(char *)(unaff_x20 + 0x753) == '\0') {
        iVar7 = 0x7fffffff;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x784) << 1;
      }
      *(code **)(param_1 + 0x168) = FUN_00389878;
      *(ulong *)(param_1 + 0x170) = param_1;
      *(undefined8 *)(param_1 + 0x178) = 0;
      func_0x003bceb0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x310,param_1 + 0x160,uVar6,iVar7);
      if ((uStack_28 & 1) != 0) {
        FUN_0055293c();
      }
      if (*(char *)(param_1 + 0xcf8) == '\0') break;
      if (*(int *)(param_1 + 0xcf4) == 0) {
        *(undefined1 *)(param_1 + 0xcf8) = 0;
        *(code **)(param_1 + 0x188) = FUN_00389b48;
        *(ulong *)(param_1 + 400) = param_1;
        *(undefined8 *)(param_1 + 0x198) = 0;
                    /* WARNING: Could not recover jumptable at 0x003bceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)**(undefined8 **)(param_1 + 0x10))
                  (*(undefined8 **)(param_1 + 0x10),param_1 + 0x1a0,param_1 + 0x180,
                   *(long *)(param_1 + 0x760) != 0,1);
        return;
      }
LAB_003847bc:
      func_0x007729c0();
LAB_003847c0:
      iVar7 = 0xb5e758;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        uVar4 = 200;
        FUN_0033ab98();
        *(undefined1 *)(unaff_x20 + 0x753) = uVar4;
        ___cxa_guard_release(0xb5e758);
      }
    }
  }
  else {
    FUN_0038453c(param_1,0);
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      FUN_003827f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)();
      return;
    }
  }
  return;
}



/* Entry: 0038481c; end: 0038485b;  */

void FUN_0038481c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  
  iVar3 = (int)param_1;
  if ((*(long *)(param_1 + 0x98) == 0) && (FUN_0039cf7c(), iVar3 != 0)) {
    plVar4 = *(long **)(param_2 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 0038485c; end: 00384cc7;  */

void FUN_0038485c(long param_1,int param_2,undefined4 param_3,long *param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_c8 [16];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *apuStack_a0 [2];
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined4 uStack_44;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_44 = param_3;
  FUN_003b646c(&uStack_68,2,"GOAWAY received",0xf,&uStack_69,&uStack_88);
  FUN_003be104(&uStack_60,&uStack_68,7,param_2);
  FUN_003be104(&uStack_58,&uStack_60,3,0xe);
  FUN_003be254(&uStack_50,&uStack_58,6,param_4,param_5);
  uVar3 = *(ulong *)(param_1 + 0x760);
  if (uStack_50 == uVar3) {
LAB_00384918:
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *(ulong *)(param_1 + 0x760) = uStack_50;
    uStack_50 = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
      uVar3 = uStack_50;
      goto LAB_00384918;
    }
  }
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_68 & 1) != 0) {
    FUN_0055293c();
  }
  apuStack_a0[0] = &uStack_88;
  FUN_0033d548(apuStack_a0);
  if (param_2 != 0) {
    uStack_a8 = *(ulong *)(param_1 + 0x760);
    if ((uStack_a8 & 1) != 0) {
      piVar5 = (int *)(uStack_a8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be004(apuStack_a0,&uStack_a8);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x461,1,"%s: Got goaway [%d] err=%s");
    if (cStack_89 < '\0') {
      __ZdlPv(apuStack_a0[0]);
    }
    if ((uStack_a8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(char *)(param_1 + 0x628) != '\0') {
    uVar3 = *(ulong *)(param_1 + 0x760);
    if ((uVar3 & 1) != 0) {
      piVar5 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_b0 = uVar3;
    FUN_00384cc8(param_1,&uStack_b0);
    if ((uVar3 & 1) != 0) {
      FUN_0055293c(uVar3);
    }
    FUN_0039d4e8(param_1 + 0xf8,FUN_00389bd4,&uStack_44);
  }
  uStack_b8 = *(ulong *)(param_1 + 0x760);
  if ((uStack_b8 & 1) != 0) {
    piVar5 = (int *)(uStack_b8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003fbde8(&uStack_50,&uStack_b8);
  if ((uStack_b8 & 1) != 0) {
    FUN_0055293c();
  }
  if ((((param_2 != 0xb) || (*(char *)(param_1 + 0x628) == '\0')) || (param_5 != 0xe)) ||
     (*param_4 != 0x796e616d5f6f6f74 || *(long *)((long)param_4 + 6) != 0x73676e69705f796e))
  goto LAB_00384ac0;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x47e,2,
               "Received a GOAWAY with error code ENHANCE_YOUR_CALM and debug data equal to \"too_many_pings\""
              );
  lVar6 = *(long *)(param_1 + 0xcc8);
  if (lVar6 < 0x40000000) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000) {
      dVar7 = (((double)lVar6 + (double)lVar6) / 1000.0) * 1000.0;
      if (9.223372036854776e+18 <= dVar7) goto LAB_00384b34;
      if (-9.223372036854776e+18 < dVar7) {
        lVar4 = (long)dVar7;
      }
    }
  }
  else {
LAB_00384b34:
    lVar4 = 0x7fffffffffffffff;
  }
  *(long *)(param_1 + 0xcc8) = lVar4;
  __ZNSt3__19to_stringEx(apuStack_a0);
  FUN_00557234(auStack_c8,apuStack_a0);
  FUN_005521b8(&uStack_50,"grpc.internal.keepalive_throttling",0x22,auStack_c8);
  FUN_00543968(auStack_c8);
  if (cStack_89 < '\0') {
    __ZdlPv(apuStack_a0[0]);
  }
LAB_00384ac0:
  if (cRam0000000000b5e750 == '\0') {
    FUN_003fb114(param_1 + 0x2e0,3,&uStack_50,"got_goaway");
  }
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00384cc8; end: 00384d77;  */

void FUN_00384cc8(ulong param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_40;
  long lStack_38;
  
  uVar4 = param_1;
  func_0x0039d190(param_1,&lStack_38);
  if ((int)uVar4 != 0) {
    do {
      *(uint *)(lStack_38 + 0x398) = *(uint *)(lStack_38 + 0x398) | 0x1000000;
      *(undefined1 *)(lStack_38 + 0x3d0) = 0;
      uVar4 = *param_2;
      if ((uVar4 & 1) != 0) {
        piVar3 = (int *)(uVar4 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_40 = uVar4;
      FUN_003862d8(param_1,lStack_38,&uStack_40);
      if ((uVar4 & 1) != 0) {
        FUN_0055293c(uVar4);
      }
      uVar4 = param_1;
      func_0x0039d190(param_1,&lStack_38);
    } while ((uVar4 & 1) != 0);
  }
  return;
}



/* Entry: 00384d78; end: 003850eb;  */

void FUN_00384d78(long param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  char **ppcVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  char *pcStack_90;
  char *pcStack_88;
  ulong uStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char acStack_68 [31];
  undefined1 uStack_49;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  puVar9 = (ulong *)*param_3;
  *param_3 = 0;
  if (puVar9 == (ulong *)0x0) {
    return;
  }
  uVar5 = *puVar9 - 0x10000;
  *puVar9 = uVar5;
  if (*param_4 == 0) goto LAB_00384f88;
  FUN_003b7b6c(&pcStack_40,puVar9[3]);
  if (pcStack_40 == (char *)0x0) {
    acStack_68[8] = '\0';
    acStack_68[9] = '\0';
    acStack_68[10] = '\0';
    acStack_68[0xb] = '\0';
    acStack_68[0xc] = '\0';
    acStack_68[0xd] = '\0';
    acStack_68[0xe] = '\0';
    acStack_68[0xf] = '\0';
    acStack_68[0x10] = '\0';
    acStack_68[0x11] = '\0';
    acStack_68[0x12] = '\0';
    acStack_68[0x13] = '\0';
    acStack_68[0x14] = '\0';
    acStack_68[0x15] = '\0';
    acStack_68[0x16] = '\0';
    acStack_68[0x17] = '\0';
    acStack_68[0] = '\0';
    acStack_68[1] = '\0';
    acStack_68[2] = '\0';
    acStack_68[3] = '\0';
    acStack_68[4] = '\0';
    acStack_68[5] = '\0';
    acStack_68[6] = '\0';
    acStack_68[7] = '\0';
    FUN_003b646c(&pcStack_48,2,"Error in HTTP transport completing operation",0x2c,&uStack_49,
                 acStack_68);
    pcVar6 = pcStack_40;
    if (pcStack_48 == pcStack_40) {
LAB_00384e14:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_40 = pcStack_48;
      pcStack_48 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_48;
        goto LAB_00384e14;
      }
    }
    pcStack_38 = acStack_68;
    FUN_0033d548(&pcStack_38);
    pcStack_70 = pcStack_40;
    if (((ulong)pcStack_40 & 1) != 0) {
      pcVar6 = pcStack_40 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar2) {
          *(int *)pcVar6 = *(int *)pcVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if ((char)*(byte *)(param_1 + 0x2f) < '\0') {
      lVar4 = *(long *)(param_1 + 0x18);
      uVar5 = *(ulong *)(param_1 + 0x20);
    }
    else {
      lVar4 = param_1 + 0x18;
      uVar5 = (ulong)*(byte *)(param_1 + 0x2f);
    }
    FUN_003be254(&pcStack_38,&pcStack_70,4,lVar4,uVar5);
    pcVar6 = pcStack_40;
    if (pcStack_38 == pcStack_40) {
LAB_00384e98:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_40 = pcStack_38;
      pcStack_38 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_38;
        goto LAB_00384e98;
      }
    }
    if (((ulong)pcStack_70 & 1) != 0) {
      FUN_0055293c();
    }
  }
  pcStack_78 = pcStack_40;
  if (((ulong)pcStack_40 & 1) != 0) {
    pcVar6 = pcStack_40 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar2) {
        *(int *)pcVar6 = *(int *)pcVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_80 = *param_4;
  if ((uStack_80 & 1) != 0) {
    piVar7 = (int *)(uStack_80 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&pcStack_38,&pcStack_78,&uStack_80);
  pcVar6 = pcStack_40;
  if (pcStack_38 == pcStack_40) {
LAB_00384f20:
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    pcStack_40 = pcStack_38;
    pcStack_38 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
      pcVar6 = pcStack_38;
      goto LAB_00384f20;
    }
  }
  if ((uStack_80 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)pcStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  pcStack_88 = pcStack_40;
  if (((ulong)pcStack_40 & 1) != 0) {
    pcVar6 = pcStack_40 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar2) {
        *(int *)pcVar6 = *(int *)pcVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppcVar3 = &pcStack_88;
  FUN_003b7ab0();
  puVar9[3] = (ulong)ppcVar3;
  if (((ulong)pcStack_88 & 1) != 0) {
    FUN_0055293c();
  }
  if (((ulong)pcStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  uVar5 = *puVar9;
LAB_00384f88:
  if (uVar5 >> 0x10 == 0) {
    if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
      FUN_003b7b6c(&pcStack_38,puVar9[3]);
      puVar9[3] = 0;
      pcStack_90 = pcStack_38;
      if (((ulong)pcStack_38 & 1) != 0) {
        pcVar6 = pcStack_38 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar2) {
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c1e6c(&pcStack_40,puVar9,&pcStack_90);
      if (((ulong)pcStack_90 & 1) != 0) {
        FUN_0055293c();
      }
      if (((ulong)pcStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *puVar9 = 0;
      if (*(long *)(param_1 + 0xb40) == 0) {
        puVar8 = (undefined8 *)(param_1 + 0xb40);
      }
      else {
        puVar8 = *(undefined8 **)(param_1 + 0xb48);
      }
      *puVar8 = puVar9;
      *(ulong **)(param_1 + 0xb48) = puVar9;
    }
  }
  return;
}



/* Entry: 003850ec; end: 0038517b;  */

void FUN_003850ec(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x898) = FUN_0038517c;
  *(long *)(param_1 + 0x8a0) = param_1;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bca14(uVar3,param_1 + 0x890,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 0038517c; end: 0038525f;  */

void FUN_0038517c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x880) = 0;
  if (*param_2 == 0) {
    FUN_00383c14(param_1,5);
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003827f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00385260; end: 003853fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00385260(long param_1)

{
  int iVar1;
  ulong auStack_80 [4];
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  ulong *puStack_28;
  
  iVar1 = *(int *)(param_1 + 0x8d0);
  *(int *)(param_1 + 0x8d0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x82c) <= iVar1 && *(int *)(param_1 + 0x82c) != 0) {
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[1] = 0;
    FUN_003b646c(&uStack_38,2,"too_many_pings",0xe,&uStack_39,auStack_60 + 1);
    FUN_003be104(&uStack_30,&uStack_38,7,0xb);
    FUN_003853fc(param_1,&uStack_30,1);
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = auStack_60 + 1;
    FUN_0033d548(&puStack_28);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[0] = 0;
    FUN_003b646c(auStack_80 + 3,2,"Too many pings",0xe,&uStack_39,auStack_80);
    FUN_003be104(auStack_60,auStack_80 + 3,3,0xe);
    FUN_00385754(param_1,auStack_60);
    if ((auStack_60[0] & 1) != 0) {
      FUN_0055293c();
    }
    if ((auStack_80[3] & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = auStack_80;
    FUN_0033d548(&puStack_28);
  }
  return;
}



/* Entry: 003853fc; end: 00385753;  */

/* WARNING: Removing unreachable block (ram,0x003855f0) */

void FUN_003853fc(long *param_1,ulong *param_2,ulong param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  qword *pqVar6;
  undefined *puVar7;
  char **ppcVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  int *piVar13;
  char *pcVar14;
  dword *pdVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  char *pcStack_130;
  char *pcStack_128;
  long *plStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iStack_5c;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = *param_2;
  if ((uStack_80 & 1) != 0) {
    piVar13 = (int *)(uStack_80 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003fb7d8(&uStack_80,0x7fffffffffffffff,0,&plStack_78,&iStack_5c,0);
  if ((uStack_80 & 1) != 0) {
    FUN_0055293c();
  }
  if ((((char)param_1[0xc5] == '\0') && (iStack_5c == 0)) && ((param_3 & 1) == 0)) {
    if (*(uint *)(param_1 + 0xed) == 0) {
      pqVar6 = &section_00000068.size;
      __Znwm();
      pdVar15 = (dword *)(pqVar6 + 1);
      *(long *)pdVar15 = 1;
      *pqVar6 = (qword)&PTR_FUN_009dec10;
      pqVar6[2] = (qword)param_1;
      *(undefined4 *)(param_1 + 0xed) = 1;
      plVar10 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_003ec024(auStack_58);
      func_0x0038d0a8(0x7fffffff,0,auStack_58,param_1 + 0xc6);
      pqVar6[4] = (qword)FUN_00389c74;
      pqVar6[5] = (qword)pqVar6;
      pqVar6[6] = 0;
      FUN_00387c9c(param_1,0,pqVar6 + 3);
      plVar10 = param_1;
      FUN_00383c14(param_1,7);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pdVar15,0x10);
        if (bVar3) {
          *(long *)pdVar15 = *(long *)pdVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x003c1f6c();
      puVar7 = (undefined *)*plVar10;
      FUN_003c1e28();
      if (puVar7 == (undefined *)0x8000000000000000) {
        puVar7 = (undefined *)0x8000000000000000;
      }
      else {
        puVar1 = (undefined *)0x7fffffffffffffff;
        if ((long)puVar7 < 0x7fffffffffffb1e0) {
          puVar1 = &UNK_00004e20 + (long)puVar7;
        }
        if (puVar7 != (undefined *)0x7fffffffffffffff) {
          puVar7 = puVar1;
        }
      }
      pqVar6[0xf] = (qword)FUN_00389ce4;
      pqVar6[0x10] = (qword)pqVar6;
      pqVar6[0x11] = 0;
      func_0x003cf010(pqVar6 + 7,puVar7,pqVar6 + 0xe);
    }
  }
  else if (*(uint *)(param_1 + 0xed) < 2) {
    uStack_88 = *param_2;
    if ((uStack_88 & 1) != 0) {
      piVar13 = (int *)(uStack_88 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be004(auStack_58,&uStack_88);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x728,0,"%s: Sending goaway err=%s");
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
    *(undefined4 *)(param_1 + 0xed) = 2;
    lVar12 = param_1[0xfd];
    uStack_98 = uStack_70;
    plStack_a0 = plStack_78;
    lStack_90 = lStack_68;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    lStack_68 = 0;
    func_0x003ec34c(auStack_58,&plStack_a0);
    func_0x0038d0a8((int)lVar12,iStack_5c,auStack_58,param_1 + 0xc6);
    if (lStack_90 < 0) {
      __ZdlPv(plStack_a0);
    }
  }
  puVar11 = (ulong *)((long)&MACH_HEADER.cputype + 3);
  FUN_00383c14();
  if (lStack_68 < 0) {
    param_1 = plStack_78;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&uStack_80);
    if (lStack_68 < 0) {
      __ZdlPv(plStack_78);
    }
  }
  __Unwind_Resume();
  pcVar16 = (char *)*puVar11;
  uVar18 = (ulong)pcVar16 & 1;
  pcStack_130 = pcVar16;
  if (((ulong)pcVar16 & 1) == 0) {
    if ((char)param_1[0xc5] == '\0') {
LAB_003857cc:
      uVar9 = 0;
      pcStack_100 = pcVar16;
      FUN_003fbfc0();
      if ((uVar9 & 1) == 0) {
        if (uVar18 != 0) {
          pcVar14 = pcVar16 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
            if (bVar3) {
              *(int *)pcVar14 = *(int *)pcVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppcVar8 = &pcStack_108;
        pcStack_108 = pcVar16;
        FUN_003be1d0(ppcVar8,7,&uStack_f8);
        uVar17 = (uint)ppcVar8 ^ 1;
        if (((ulong)pcStack_108 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        uVar17 = 0;
      }
      if (((ulong)pcStack_100 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar17 != 0) {
        if (uVar18 != 0) {
          pcVar14 = pcVar16 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
            if (bVar3) {
              *(int *)pcVar14 = *(int *)pcVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_110 = pcVar16;
        FUN_003be104(&pcStack_128,&pcStack_110,3,0xe);
        pcVar14 = pcStack_128;
        pcVar5 = pcVar16;
        if (pcStack_128 == pcVar16) {
joined_r0x00385894:
          pcVar14 = pcVar5;
          if (((ulong)pcVar16 & 1) != 0) {
            FUN_0055293c(pcVar16);
          }
        }
        else {
          pcStack_130 = pcStack_128;
          pcStack_128 = segment_command_00000020.segname + 0xe;
          if (uVar18 != 0) {
            FUN_0055293c(pcVar16);
            pcVar5 = pcVar14;
            pcVar16 = pcStack_128;
            goto joined_r0x00385894;
          }
        }
        if (((ulong)pcStack_110 & 1) != 0) {
          FUN_0055293c();
        }
        uVar18 = (ulong)pcVar14 & 1;
        pcVar16 = pcVar14;
      }
    }
    if (uVar18 != 0) goto LAB_003858bc;
    bVar3 = true;
    pcStack_118 = pcVar16;
  }
  else {
    pcVar14 = pcVar16 + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
      if (bVar3) {
        *(int *)pcVar14 = *(int *)pcVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)param_1[0xc5] == '\0') {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
        if (bVar3) {
          *(int *)pcVar14 = *(int *)pcVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_003857cc;
    }
LAB_003858bc:
    pcVar14 = pcVar16 + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
      if (bVar3) {
        *(int *)pcVar14 = *(int *)pcVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = false;
    pcStack_118 = pcVar16;
  }
  pcVar16 = pcStack_118;
  FUN_00384cc8(param_1,&pcStack_118);
  if (!bVar3) {
    FUN_0055293c(pcVar16);
    pcVar14 = pcVar16 + -1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
      if (bVar4) {
        *(int *)pcVar14 = *(int *)pcVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_128 = pcVar16;
  plStack_120 = param_1;
  FUN_0039d4e8(param_1 + 0x1f,FUN_00389f58,&pcStack_128);
  if (((ulong)pcStack_128 & 1) != 0) {
    FUN_0055293c();
  }
  if (!bVar3) {
    FUN_0055293c(pcVar16);
  }
  uVar18 = *puVar11;
  if ((uVar18 & 1) != 0) {
    piVar13 = (int *)(uVar18 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_138 = uVar18;
  FUN_00382acc(param_1,&uStack_138);
  if ((uVar18 & 1) != 0) {
    FUN_0055293c(uVar18);
  }
  if (param_1[0x13] != 0) goto LAB_00385988;
  plStack_140 = (long *)*puVar11;
  if (((ulong)plStack_140 & 1) != 0) {
    piVar13 = (int *)((long)plStack_140 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar18 = 0;
  FUN_003fbfc0();
  plVar10 = plStack_140;
  if (((ulong)plStack_140 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar18 & 1) == 0) {
    plStack_148 = (long *)*puVar11;
    if (((ulong)plStack_148 & 1) != 0) {
      piVar13 = (int *)((long)plStack_148 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be104(&pcStack_128,&plStack_148,3,0xe);
    pcVar16 = (char *)*puVar11;
    if (pcStack_128 == pcVar16) {
LAB_00385ac0:
      if (((ulong)pcVar16 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *puVar11 = (ulong)pcStack_128;
      pcStack_128 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar16 & 1) != 0) {
        FUN_0055293c();
        pcVar16 = pcStack_128;
        goto LAB_00385ac0;
      }
    }
    plVar10 = plStack_148;
    if (((ulong)plStack_148 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((int)param_1[0x12] != 0) {
    uStack_168 = param_1[0x167];
    if (uStack_168 == 0) {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      FUN_003b646c(&uStack_f8,2,"Delayed close due to in-progress write",0x26,&pcStack_100,
                   &uStack_160);
      uVar18 = param_1[0x167];
      if (uStack_f8 == uVar18) {
LAB_00385b34:
        if ((uVar18 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        param_1[0x167] = uStack_f8;
        uStack_f8 = 0x36;
        if ((uVar18 & 1) != 0) {
          FUN_0055293c();
          uVar18 = uStack_f8;
          goto LAB_00385b34;
        }
      }
      pcStack_128 = (char *)&uStack_160;
      FUN_0033d548(&pcStack_128);
      uStack_168 = param_1[0x167];
    }
    if ((uStack_168 & 1) != 0) {
      piVar13 = (int *)(uStack_168 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_170 = *puVar11;
    if ((uStack_170 & 1) != 0) {
      piVar13 = (int *)(uStack_170 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003be56c(&pcStack_128,&uStack_168,&uStack_170);
    pcVar16 = (char *)param_1[0x167];
    if (pcStack_128 != pcVar16) {
      param_1[0x167] = (long)pcStack_128;
      pcStack_128 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar16 & 1) == 0) goto LAB_00385bcc;
      FUN_0055293c();
      pcVar16 = pcStack_128;
    }
    if (((ulong)pcVar16 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00385bcc:
    if ((uStack_170 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_168 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  uVar18 = *puVar11;
  if (uVar18 == 0) {
    func_0x007729f4();
    goto LAB_00385d24;
  }
  uVar9 = param_1[0x13];
  if (uVar18 != uVar9) {
    if ((uVar18 & 1) != 0) {
      piVar13 = (int *)(uVar18 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar18 = *puVar11;
    }
    param_1[0x13] = uVar18;
    if ((uVar9 & 1) != 0) {
      FUN_0055293c();
    }
  }
  pcStack_128 = (char *)0x0;
  FUN_003fb114(param_1 + 0x5c,4,&pcStack_128,"close_transport");
  if (((ulong)pcStack_128 & 1) != 0) {
    FUN_0055293c();
  }
  if ((char)param_1[0x110] != '\0') {
    func_0x003cf020(param_1 + 0x109);
  }
  if ((char)param_1[0x173] != '\0') {
    func_0x003cf020(param_1 + 0x174);
  }
  if (*(int *)((long)param_1 + 0xcdc) == 1) {
    func_0x003cf020(param_1 + 0x18b);
    plVar10 = param_1 + 0x192;
LAB_00385c90:
    func_0x003cf020(plVar10);
  }
  else if (*(int *)((long)param_1 + 0xcdc) == 0) {
    plVar10 = param_1 + 0x18b;
    goto LAB_00385c90;
  }
  plVar10 = param_1;
  FUN_0039cfd4(param_1,&pcStack_128);
  if ((int)plVar10 != 0) {
    do {
      plVar10 = *(long **)(pcStack_128 + 0x10);
      do {
        lVar12 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        FUN_004005ec();
      }
      plVar10 = param_1;
      FUN_0039cfd4(param_1,&pcStack_128);
    } while (((ulong)plVar10 & 1) != 0);
  }
  if ((int)param_1[0x12] == 0) {
    lVar12 = param_1[2];
    uStack_178 = *puVar11;
    if ((uStack_178 & 1) != 0) {
      piVar13 = (int *)(uStack_178 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bcee0(lVar12,&uStack_178);
    if ((uStack_178 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00385988:
    lVar12 = param_1[0x10];
    if (lVar12 != 0) {
      uStack_180 = *puVar11;
      if ((uStack_180 & 1) != 0) {
        piVar13 = (int *)(uStack_180 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003c1e6c(&pcStack_128,lVar12,&uStack_180);
      if ((uStack_180 & 1) != 0) {
        FUN_0055293c();
      }
      param_1[0x10] = 0;
    }
    lVar12 = param_1[0x11];
    if (lVar12 != 0) {
      uStack_188 = *puVar11;
      if ((uStack_188 & 1) != 0) {
        piVar13 = (int *)(uStack_188 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003c1e6c(&pcStack_128,lVar12,&uStack_188);
      if ((uStack_188 & 1) != 0) {
        FUN_0055293c();
      }
      param_1[0x11] = 0;
    }
    return;
  }
LAB_00385d24:
  func_0x00772a28();
  FUN_0033c494(&uStack_f8);
  pcStack_128 = (char *)&uStack_160;
  FUN_0033d548(&pcStack_128);
  __Unwind_Resume();
  if ((char)plVar10[0xc5] == '\0') {
    plVar10[0x119] = -0x8000000000000000;
    *(undefined4 *)(plVar10 + 0x11a) = 0;
  }
  *(int *)(plVar10 + 0x108) = (int)plVar10[0x105];
  return;
}



/* Entry: 00385754; end: 00385e87;  */

void FUN_00385754(ulong param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char **ppcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  char *pcStack_80;
  char *pcStack_78;
  ulong uStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  ulong uStack_48;
  
  pcVar12 = (char *)*param_2;
  uVar14 = (ulong)pcVar12 & 1;
  pcStack_80 = pcVar12;
  if (((ulong)pcVar12 & 1) == 0) {
    if (*(char *)(param_1 + 0x628) == '\0') {
LAB_003857cc:
      uVar6 = 0;
      pcStack_50 = pcVar12;
      FUN_003fbfc0();
      if ((uVar6 & 1) == 0) {
        if (uVar14 != 0) {
          pcVar10 = pcVar12 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
            if (bVar2) {
              *(int *)pcVar10 = *(int *)pcVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppcVar5 = &pcStack_58;
        pcStack_58 = pcVar12;
        FUN_003be1d0(ppcVar5,7,&uStack_48);
        uVar13 = (uint)ppcVar5 ^ 1;
        if (((ulong)pcStack_58 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        uVar13 = 0;
      }
      if (((ulong)pcStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      if (uVar13 != 0) {
        if (uVar14 != 0) {
          pcVar10 = pcVar12 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
            if (bVar2) {
              *(int *)pcVar10 = *(int *)pcVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_60 = pcVar12;
        FUN_003be104(&pcStack_78,&pcStack_60,3,0xe);
        pcVar10 = pcStack_78;
        pcVar4 = pcVar12;
        if (pcStack_78 == pcVar12) {
joined_r0x00385894:
          pcVar10 = pcVar4;
          if (((ulong)pcVar12 & 1) != 0) {
            FUN_0055293c(pcVar12);
          }
        }
        else {
          pcStack_80 = pcStack_78;
          pcStack_78 = segment_command_00000020.segname + 0xe;
          if (uVar14 != 0) {
            FUN_0055293c(pcVar12);
            pcVar4 = pcVar10;
            pcVar12 = pcStack_78;
            goto joined_r0x00385894;
          }
        }
        if (((ulong)pcStack_60 & 1) != 0) {
          FUN_0055293c();
        }
        uVar14 = (ulong)pcVar10 & 1;
        pcVar12 = pcVar10;
      }
    }
    if (uVar14 != 0) goto LAB_003858bc;
    bVar2 = true;
    pcStack_68 = pcVar12;
  }
  else {
    pcVar10 = pcVar12 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar2) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (*(char *)(param_1 + 0x628) == '\0') {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
        if (bVar2) {
          *(int *)pcVar10 = *(int *)pcVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_003857cc;
    }
LAB_003858bc:
    pcVar10 = pcVar12 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar2) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar2 = false;
    pcStack_68 = pcVar12;
  }
  pcVar12 = pcStack_68;
  FUN_00384cc8(param_1,&pcStack_68);
  if (!bVar2) {
    FUN_0055293c(pcVar12);
    pcVar10 = pcVar12 + -1;
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar3) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_78 = pcVar12;
  uStack_70 = param_1;
  FUN_0039d4e8(param_1 + 0xf8,FUN_00389f58,&pcStack_78);
  if (((ulong)pcStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  if (!bVar2) {
    FUN_0055293c(pcVar12);
  }
  uVar14 = *param_2;
  if ((uVar14 & 1) != 0) {
    piVar11 = (int *)(uVar14 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = uVar14;
  FUN_00382acc(param_1,&uStack_88);
  if ((uVar14 & 1) != 0) {
    FUN_0055293c(uVar14);
  }
  if (*(long *)(param_1 + 0x98) != 0) goto LAB_00385988;
  uStack_90 = *param_2;
  if ((uStack_90 & 1) != 0) {
    piVar11 = (int *)(uStack_90 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = 0;
  FUN_003fbfc0();
  uVar6 = uStack_90;
  if ((uStack_90 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uVar14 & 1) == 0) {
    uStack_98 = *param_2;
    if ((uStack_98 & 1) != 0) {
      piVar11 = (int *)(uStack_98 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be104(&pcStack_78,&uStack_98,3,0xe);
    pcVar12 = (char *)*param_2;
    if (pcStack_78 == pcVar12) {
LAB_00385ac0:
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_2 = (ulong)pcStack_78;
      pcStack_78 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar12 & 1) != 0) {
        FUN_0055293c();
        pcVar12 = pcStack_78;
        goto LAB_00385ac0;
      }
    }
    uVar6 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    uStack_b8 = *(ulong *)(param_1 + 0xb38);
    if (uStack_b8 == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      FUN_003b646c(&uStack_48,2,"Delayed close due to in-progress write",0x26,&pcStack_50,&uStack_b0
                  );
      uVar14 = *(ulong *)(param_1 + 0xb38);
      if (uStack_48 == uVar14) {
LAB_00385b34:
        if ((uVar14 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *(ulong *)(param_1 + 0xb38) = uStack_48;
        uStack_48 = 0x36;
        if ((uVar14 & 1) != 0) {
          FUN_0055293c();
          uVar14 = uStack_48;
          goto LAB_00385b34;
        }
      }
      pcStack_78 = (char *)&uStack_b0;
      FUN_0033d548(&pcStack_78);
      uStack_b8 = *(ulong *)(param_1 + 0xb38);
    }
    if ((uStack_b8 & 1) != 0) {
      piVar11 = (int *)(uStack_b8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_c0 = *param_2;
    if ((uStack_c0 & 1) != 0) {
      piVar11 = (int *)(uStack_c0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be56c(&pcStack_78,&uStack_b8,&uStack_c0);
    pcVar12 = *(char **)(param_1 + 0xb38);
    if (pcStack_78 != pcVar12) {
      *(char **)(param_1 + 0xb38) = pcStack_78;
      pcStack_78 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar12 & 1) == 0) goto LAB_00385bcc;
      FUN_0055293c();
      pcVar12 = pcStack_78;
    }
    if (((ulong)pcVar12 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00385bcc:
    if ((uStack_c0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_b8 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  uVar14 = *param_2;
  if (uVar14 == 0) {
    func_0x007729f4();
    goto LAB_00385d24;
  }
  uVar6 = *(ulong *)(param_1 + 0x98);
  if (uVar14 != uVar6) {
    if ((uVar14 & 1) != 0) {
      piVar11 = (int *)(uVar14 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar14 = *param_2;
    }
    *(ulong *)(param_1 + 0x98) = uVar14;
    if ((uVar6 & 1) != 0) {
      FUN_0055293c();
    }
  }
  pcStack_78 = (char *)0x0;
  FUN_003fb114(param_1 + 0x2e0,4,&pcStack_78,"close_transport");
  if (((ulong)pcStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(char *)(param_1 + 0x880) != '\0') {
    func_0x003cf020(param_1 + 0x848);
  }
  if (*(char *)(param_1 + 0xb98) != '\0') {
    func_0x003cf020(param_1 + 0xba0);
  }
  if (*(int *)(param_1 + 0xcdc) == 1) {
    func_0x003cf020(param_1 + 0xc58);
    lVar9 = param_1 + 0xc90;
LAB_00385c90:
    func_0x003cf020(lVar9);
  }
  else if (*(int *)(param_1 + 0xcdc) == 0) {
    lVar9 = param_1 + 0xc58;
    goto LAB_00385c90;
  }
  uVar6 = param_1;
  FUN_0039cfd4(param_1,&pcStack_78);
  if ((int)uVar6 != 0) {
    do {
      plVar7 = *(long **)(pcStack_78 + 0x10);
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        FUN_004005ec();
      }
      uVar6 = param_1;
      FUN_0039cfd4(param_1,&pcStack_78);
    } while ((uVar6 & 1) != 0);
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uStack_c8 = *param_2;
    if ((uStack_c8 & 1) != 0) {
      piVar11 = (int *)(uStack_c8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bcee0(uVar8,&uStack_c8);
    if ((uStack_c8 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00385988:
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 != 0) {
      uStack_d0 = *param_2;
      if ((uStack_d0 & 1) != 0) {
        piVar11 = (int *)(uStack_d0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c1e6c(&pcStack_78,lVar9,&uStack_d0);
      if ((uStack_d0 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    lVar9 = *(long *)(param_1 + 0x88);
    if (lVar9 != 0) {
      uStack_d8 = *param_2;
      if ((uStack_d8 & 1) != 0) {
        piVar11 = (int *)(uStack_d8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003c1e6c(&pcStack_78,lVar9,&uStack_d8);
      if ((uStack_d8 & 1) != 0) {
        FUN_0055293c();
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    return;
  }
LAB_00385d24:
  func_0x00772a28();
  FUN_0033c494(&uStack_48);
  pcStack_78 = (char *)&uStack_b0;
  FUN_0033d548(&pcStack_78);
  __Unwind_Resume();
  if (*(char *)(uVar6 + 0x628) == '\0') {
    *(undefined8 *)(uVar6 + 0x8c8) = 0x8000000000000000;
    *(undefined4 *)(uVar6 + 0x8d0) = 0;
  }
  *(undefined4 *)(uVar6 + 0x840) = *(undefined4 *)(uVar6 + 0x828);
  return;
}



/* Entry: 00385e88; end: 00385ea7;  */

void FUN_00385e88(long param_1)

{
  if (*(char *)(param_1 + 0x628) == '\0') {
    *(undefined8 *)(param_1 + 0x8c8) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 0x8d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x828);
  return;
}



/* Entry: 00385ea8; end: 00385f6b;  */

/* WARNING: Removing unreachable block (ram,0x00385f9c) */

void FUN_00385ea8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_2 + 0xf0);
  if ((*plVar5 != 0) && (*(int *)(param_2 + 0x180) != 0)) {
    if (*(char *)(param_2 + 0x16b) != '\0') {
      func_0x003ecf8c(param_2 + 0x5a0);
    }
    FUN_0036a260(*(undefined8 *)(param_2 + 0xe8),param_2 + 400);
    puVar4 = *(uint **)(param_2 + 0xe8);
    *puVar4 = *puVar4 | 0x2000000;
    uVar1 = *(ulong *)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x2f);
      puVar2 = (undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 **)(puVar4 + 10) = puVar2;
    *(ulong *)(puVar4 + 0xc) = uVar1;
    if (((*(undefined1 **)(param_2 + 0xf8) != (undefined1 *)0x0) && (*(int *)(param_2 + 0x180) != 2)
        ) && (*(int *)(param_2 + 0x184) == 1)) {
      **(undefined1 **)(param_2 + 0xf8) = 1;
      *(undefined8 *)(param_2 + 0xf8) = 0;
    }
    lVar3 = *plVar5;
    *plVar5 = 0;
    FUN_003c1e6c(&stack0xffffffffffffffdf,lVar3,&stack0xffffffffffffffd0);
    return;
  }
  return;
}



/* Entry: 00385f6c; end: 00385fc7;  */

void FUN_00385f6c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_30 = 0;
  FUN_003c1e6c(&uStack_21,uVar1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00385fc8; end: 003861fb;  */

void FUN_00385fc8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  int iStack_40;
  uint uStack_34;
  
  if (*(long *)(param_2 + 0x118) == 0) {
    return;
  }
  uStack_50 = param_2 + 0x6f8;
  uStack_58 = *(undefined8 *)(param_2 + 0x6f8);
  if ((*(char *)(param_2 + 0x188) == '\0') || (*(char *)(param_2 + 0x16b) == '\0')) {
    if (*(long *)(param_2 + 0x5c0) == 0) {
      if (*(char *)(param_2 + 0x169) == '\0') {
        uVar8 = 0;
        *(undefined8 *)(param_2 + 0x700) = 5;
        goto LAB_00386148;
      }
      goto LAB_0038606c;
    }
    FUN_0038c910(&uStack_48,param_2,&uStack_34,*(undefined8 *)(param_2 + 0x100),
                 *(undefined8 *)(param_2 + 0x108));
    if (iStack_40 == 1) {
      if (uStack_48 == 0) {
LAB_003860f0:
        if (*(long *)(param_1 + 0xce8) != 0) {
          func_0x003a9f84();
        }
        goto LAB_003860fc;
      }
      if ((uStack_48 & 1) != 0) {
        piVar7 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (uStack_48 == 0) goto LAB_003860f0;
      }
      *(undefined1 *)(param_2 + 0x16b) = 1;
      func_0x003ecf8c(param_2 + 0x5a0);
      FUN_0033e1ac(&uStack_48);
      uVar8 = uStack_48;
      goto LAB_00386124;
    }
    if (iStack_40 != 0) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3861c4);
      (*pcVar3)();
    }
    if (*(char *)(param_2 + 0x169) != '\0') {
      func_0x003ecf8c(param_2 + 0x5a0);
      FUN_0036b714(*(undefined8 *)(param_2 + 0x100));
LAB_003860fc:
      FUN_0033e1ac(&uStack_48);
      goto LAB_00386104;
    }
    *(ulong *)(uStack_50 + 8) = (ulong)uStack_34;
    FUN_0033e1ac(&uStack_48);
  }
  else {
    func_0x003ecf8c(param_2 + 0x5a0);
LAB_0038606c:
    FUN_0036b714(*(undefined8 *)(param_2 + 0x100));
LAB_00386104:
    if (*(char *)(*(long *)(param_2 + 0x100) + 0x128) == '\0') {
      uVar8 = 0;
LAB_00386124:
      if (*(int *)(param_2 + 0x184) != 0) {
        if (*(long *)(param_2 + 0x110) != 0) {
          *(bool *)*(long *)(param_2 + 0x110) = *(int *)(param_2 + 0x184) != 3;
        }
        FUN_00385f6c(param_2 + 0x118);
      }
      goto LAB_00386148;
    }
    FUN_00385f6c(param_2 + 0x118);
  }
  uVar8 = 0;
LAB_00386148:
  FUN_0038c508(&uStack_58,*(undefined8 *)(param_2 + 0x5c0));
  uVar5 = uStack_50;
  uVar4 = uStack_58;
  uStack_58 = 0;
  uVar6 = 0;
  FUN_0038c048(uVar4,0,0);
  FUN_0038c488(uVar5,uVar4,uVar6 & 0xffffffff);
  iStack_40 = (int)uVar4;
  uStack_48 = uVar5;
  func_0x00383b10(&uStack_48,param_1,param_2);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  FUN_0038a000(&uStack_58);
  return;
}



/* Entry: 003861fc; end: 003862d7;  */

/* WARNING: Removing unreachable block (ram,0x00385f9c) */

void FUN_003861fc(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint *puVar5;
  
  FUN_00385fc8();
  if ((((*(long *)(param_2 + 0x128) != 0) && (*(char *)(param_2 + 0x169) != '\0')) &&
      (*(char *)(param_2 + 0x168) != '\0')) &&
     ((((*(char *)(param_2 + 0x16b) == '\0' && (*(char *)(param_1 + 0x628) != '\0')) ||
       (func_0x003ecf8c(param_2 + 0x5a0), *(char *)(param_2 + 0x169) != '\0')) &&
      ((*(long *)(param_2 + 0x5c0) == 0 && (plVar1 = (long *)(param_2 + 0x128), *plVar1 != 0)))))) {
    func_0x004006ac(param_2 + 0x138,*(undefined8 *)(param_2 + 0x130));
    *(undefined8 *)(param_2 + 0x130) = 0;
    FUN_0036a260(*(undefined8 *)(param_2 + 0x120),param_2 + 0x398);
    puVar5 = *(uint **)(param_2 + 0x120);
    *puVar5 = *puVar5 | 0x2000000;
    uVar2 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x2f);
      puVar3 = (undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 **)(puVar5 + 10) = puVar3;
    *(ulong *)(puVar5 + 0xc) = uVar2;
    lVar4 = *plVar1;
    *plVar1 = 0;
    FUN_003c1e6c(&stack0xffffffffffffffdf,lVar4,&stack0xffffffffffffffd0);
    return;
  }
  return;
}



/* Entry: 003862d8; end: 0038709f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003862d8(ulong param_1,long param_2,ulong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulong uVar25;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  uint uVar26;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 uStack_2b9;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong uStack_298;
  long lStack_290;
  ulong uStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  char *pcStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  uint uStack_204;
  undefined1 auStack_200 [32];
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(char *)(param_1 + 0x628) == '\0') && (*(char *)(param_2 + 0x6f1) == '\0')) {
    uStack_250 = *param_3;
    if ((uStack_250 & 1) != 0) {
      piVar16 = (int *)(uStack_250 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x22 = &uStack_250;
    FUN_003fbfc0();
    if ((uStack_250 & 1) != 0) {
      FUN_0055293c();
    }
    if ((int)unaff_x22 == 0) goto LAB_0038637c;
    uStack_258 = *param_3;
    if ((uStack_258 & 1) != 0) {
      piVar16 = (int *)(uStack_258 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_228 = uStack_258;
    FUN_003fb7d8(&uStack_228,*(undefined8 *)(param_2 + 0x6d0),&uStack_204,&uStack_220,0,0);
    if ((uStack_228 & 1) != 0) {
      FUN_0055293c();
    }
    if (99 < uStack_204) {
      pcStack_270 = "grpc_status >= 0 && (int)grpc_status < 100";
      uVar13 = 0x8d5;
LAB_00386fb4:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,uVar13,2,"assertion failed: %s");
      _abort();
LAB_00386fd4:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x386fd8);
      (*pcVar6)();
    }
    unaff_x23 = &uStack_1e0;
    if (*(char *)(param_2 + 0x6f0) == '\0') {
      FUN_003ec0c8(&uStack_140,0xd);
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
      uStack_c8 = uStack_128;
      uStack_d0 = puStack_130;
      puVar17 = (undefined1 *)((ulong)&uStack_e0 | 9);
      bVar7 = uStack_140 != 0;
      puVar23 = puVar17;
      if (bVar7) {
        puVar23 = puStack_130;
      }
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 10);
      if (bVar7) {
        puVar22 = puStack_130 + 1;
      }
      puVar3 = (undefined1 *)((ulong)&uStack_e0 | 0xb);
      if (bVar7) {
        puVar3 = puStack_130 + 2;
      }
      *puVar23 = 0;
      *puVar22 = 7;
      puVar23 = (undefined1 *)((ulong)&uStack_e0 | 0xc);
      if (bVar7) {
        puVar23 = puStack_130 + 3;
      }
      *puVar3 = 0x3a;
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 0xd);
      if (bVar7) {
        puVar22 = puStack_130 + 4;
      }
      *puVar23 = 0x73;
      puVar23 = (undefined1 *)((ulong)&uStack_e0 | 0xe);
      if (bVar7) {
        puVar23 = puStack_130 + 5;
      }
      *puVar22 = 0x74;
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 0xf);
      if (bVar7) {
        puVar22 = puStack_130 + 6;
      }
      *puVar23 = 0x61;
      puVar20 = &uStack_d0;
      if (bVar7) {
        puVar20 = (undefined8 *)(puStack_130 + 7);
      }
      *puVar22 = 0x74;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 1);
      if (bVar7) {
        puVar23 = puStack_130 + 8;
      }
      *(undefined1 *)puVar20 = 0x75;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 2);
      if (bVar7) {
        puVar22 = puStack_130 + 9;
      }
      *puVar23 = 0x73;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 3);
      if (bVar7) {
        puVar23 = puStack_130 + 10;
      }
      *puVar22 = 3;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 4);
      if (bVar7) {
        puVar22 = puStack_130 + 0xb;
      }
      *puVar23 = 0x32;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 5);
      if (bVar7) {
        puVar23 = puStack_130 + 0xc;
      }
      *puVar22 = 0x30;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 6);
      if (bVar7) {
        puVar22 = puStack_130 + 0xd;
      }
      *puVar23 = 0x30;
      if (uStack_140 != 0) {
        puVar17 = uStack_d0;
      }
      uVar25 = uStack_138 & 0xff;
      if (uStack_140 != 0) {
        uVar25 = uStack_138;
      }
      if (puVar22 == puVar17 + uVar25) {
        FUN_003ec0c8(&uStack_140,0x1f);
        puVar17 = (undefined1 *)((ulong)&uStack_100 | 9);
        uStack_f8 = uStack_138;
        uStack_100 = uStack_140;
        uStack_e8 = uStack_128;
        uStack_f0 = puStack_130;
        bVar7 = uStack_140 != 0;
        puVar23 = puVar17;
        if (bVar7) {
          puVar23 = puStack_130;
        }
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 10);
        if (bVar7) {
          puVar22 = puStack_130 + 1;
        }
        puVar3 = (undefined1 *)((ulong)&uStack_100 | 0xb);
        if (bVar7) {
          puVar3 = puStack_130 + 2;
        }
        *puVar23 = 0;
        *puVar22 = 0xc;
        puVar23 = (undefined1 *)((ulong)&uStack_100 | 0xc);
        if (bVar7) {
          puVar23 = puStack_130 + 3;
        }
        *puVar3 = 99;
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 0xd);
        if (bVar7) {
          puVar22 = puStack_130 + 4;
        }
        *puVar23 = 0x6f;
        puVar23 = (undefined1 *)((ulong)&uStack_100 | 0xe);
        if (bVar7) {
          puVar23 = puStack_130 + 5;
        }
        *puVar22 = 0x6e;
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 0xf);
        if (bVar7) {
          puVar22 = puStack_130 + 6;
        }
        *puVar23 = 0x74;
        puVar20 = &uStack_f0;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 7);
        }
        *puVar22 = 0x65;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 8;
        }
        *(undefined1 *)puVar20 = 0x6e;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 9;
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 10;
        }
        *puVar22 = 0x2d;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0xb;
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0xc;
        }
        *puVar22 = 0x79;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0xd;
        }
        *puVar23 = 0x70;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0xe;
        }
        *puVar22 = 0x65;
        puVar20 = &uStack_e8;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 0xf);
        }
        *puVar23 = 0x10;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 0x10;
        }
        *(undefined1 *)puVar20 = 0x61;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 0x11;
        }
        *puVar23 = 0x70;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 0x12;
        }
        *puVar22 = 0x70;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0x13;
        }
        *puVar23 = 0x6c;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0x14;
        }
        *puVar22 = 0x69;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0x15;
        }
        *puVar23 = 99;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0x16;
        }
        *puVar22 = 0x61;
        puVar20 = &uStack_e0;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 0x17);
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 0x18;
        }
        *(undefined1 *)puVar20 = 0x69;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 0x19;
        }
        *puVar23 = 0x6f;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1a;
        }
        *puVar22 = 0x6e;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0x1b;
        }
        *puVar23 = 0x2f;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1c;
        }
        *puVar22 = 0x67;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0x1d;
        }
        *puVar23 = 0x72;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1e;
        }
        *puVar22 = 0x70;
        puVar8 = &uStack_d8;
        if (bVar7) {
          puVar8 = (ulong *)(puStack_130 + 0x1f);
        }
        *puVar23 = 99;
        if (uStack_140 != 0) {
          puVar17 = uStack_f0;
        }
        uVar9 = uStack_138 & 0xff;
        if (uStack_140 != 0) {
          uVar9 = uStack_138;
        }
        if (puVar8 == (ulong *)(puVar17 + uVar9)) {
          unaff_x24 = (ulong)(uint)((int)uVar9 + (int)uVar25);
          goto LAB_003868f0;
        }
        pcStack_270 = "p == GRPC_SLICE_END_PTR(content_type_hdr)";
        uVar13 = 0x911;
      }
      else {
        pcStack_270 = "p == GRPC_SLICE_END_PTR(http_status_hdr)";
        uVar13 = 0x8ed;
      }
      goto LAB_00386fb4;
    }
    unaff_x24 = 0;
LAB_003868f0:
    uVar13 = 0xf;
    if (9 < (int)uStack_204) {
      uVar13 = 0x10;
    }
    FUN_003ec0c8(&uStack_140,uVar13);
    puVar17 = (undefined1 *)((ulong)&uStack_c0 | 9);
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    auStack_a8 = (undefined1  [8])uStack_128;
    uStack_b0 = puStack_130;
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_c0 | 0xb);
    if (bVar7) {
      puVar22 = puStack_130 + 2;
    }
    puVar3 = (undefined1 *)((ulong)&uStack_c0 | 0xc);
    if (bVar7) {
      puVar3 = puStack_130 + 3;
    }
    *puVar23 = 0;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 10);
    if (bVar7) {
      puVar23 = puStack_130 + 1;
    }
    *puVar23 = 0xb;
    *puVar22 = 0x67;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 0xd);
    if (bVar7) {
      puVar23 = puStack_130 + 4;
    }
    *puVar3 = 0x72;
    puVar22 = (undefined1 *)((ulong)&uStack_c0 | 0xe);
    if (bVar7) {
      puVar22 = puStack_130 + 5;
    }
    *puVar23 = 0x70;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 0xf);
    if (bVar7) {
      puVar23 = puStack_130 + 6;
    }
    *puVar22 = 99;
    puVar20 = &uStack_b0;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar23 = 0x2d;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(undefined1 *)puVar20 = 0x73;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = 0x74;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 3);
    if (bVar7) {
      puVar23 = puStack_130 + 10;
    }
    *puVar22 = 0x61;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 4);
    if (bVar7) {
      puVar22 = puStack_130 + 0xb;
    }
    *puVar23 = 0x74;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 5);
    if (bVar7) {
      puVar23 = puStack_130 + 0xc;
    }
    *puVar22 = 0x75;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 6);
    if (bVar7) {
      puVar22 = puStack_130 + 0xd;
    }
    *puVar23 = 0x73;
    pcVar1 = (char *)((long)&uStack_b0 + 7);
    if (bVar7) {
      pcVar1 = puStack_130 + 0xe;
    }
    if ((int)uStack_204 < 10) {
      *puVar22 = 1;
      puVar20 = (undefined8 *)auStack_a8;
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0xf);
      }
      *pcVar1 = (char)uStack_204 + '0';
    }
    else {
      *puVar22 = 2;
      cVar4 = (char)(uStack_204 / 10);
      pbVar2 = auStack_a8;
      if (uStack_140 != 0) {
        pbVar2 = puStack_130 + 0xf;
      }
      *pcVar1 = cVar4 + '0';
      puVar20 = (undefined8 *)((long)auStack_a8 + 1);
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0x10);
      }
      *pbVar2 = (char)uStack_204 + cVar4 * -10 | 0x30;
    }
    if (uStack_140 != 0) {
      puVar17 = uStack_b0;
    }
    uVar25 = uStack_138 & 0xff;
    if (uStack_140 != 0) {
      uVar25 = uStack_138;
    }
    if (puVar20 != (undefined8 *)(puVar17 + uVar25)) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(status_hdr)";
      uVar13 = 0x92c;
      goto LAB_00386fb4;
    }
    uVar9 = uStack_210 >> 0x38;
    if (((long)uStack_210 < 0) && (uVar9 = uStack_218, uStack_218 >> 0x20 != 0)) {
      pcStack_270 = "msg_len <= UINT32_MAX";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x930,2,"assertion failed: %s");
      _abort();
      goto LAB_00386fd4;
    }
    uVar26 = (uint)uVar9;
    unaff_x22 = (ulong *)(ulong)(uVar26 - 0x7f);
    if (uVar26 < 0x7f) {
      uVar24 = 1;
    }
    else {
      puVar8 = unaff_x22;
      func_0x0039d54c();
      uVar24 = (uint)puVar8;
    }
    FUN_003ec0c8(&uStack_140,uVar24 + 0xe);
    puVar17 = (undefined1 *)((ulong)&uStack_120 | 9);
    uStack_118 = uStack_138;
    uStack_120 = uStack_140;
    uStack_108 = uStack_128;
    uStack_110 = puStack_130;
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 10);
    if (bVar7) {
      puVar22 = puStack_130 + 1;
    }
    puVar3 = (undefined1 *)((ulong)&uStack_120 | 0xb);
    if (bVar7) {
      puVar3 = puStack_130 + 2;
    }
    *puVar23 = 0;
    *puVar22 = 0xc;
    puVar23 = (undefined1 *)((ulong)&uStack_120 | 0xc);
    if (bVar7) {
      puVar23 = puStack_130 + 3;
    }
    *puVar3 = 0x67;
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 0xd);
    if (bVar7) {
      puVar22 = puStack_130 + 4;
    }
    *puVar23 = 0x72;
    puVar23 = (undefined1 *)((ulong)&uStack_120 | 0xe);
    if (bVar7) {
      puVar23 = puStack_130 + 5;
    }
    *puVar22 = 0x70;
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 0xf);
    if (bVar7) {
      puVar22 = puStack_130 + 6;
    }
    *puVar23 = 99;
    puVar20 = &uStack_110;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar22 = 0x2d;
    puVar23 = (undefined1 *)((long)&uStack_110 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(undefined1 *)puVar20 = 0x6d;
    puVar22 = (undefined1 *)((long)&uStack_110 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = 0x65;
    puVar23 = (undefined1 *)((long)&uStack_110 + 3);
    if (bVar7) {
      puVar23 = puStack_130 + 10;
    }
    *puVar22 = 0x73;
    puVar22 = (undefined1 *)((long)&uStack_110 + 4);
    if (bVar7) {
      puVar22 = puStack_130 + 0xb;
    }
    *puVar23 = 0x73;
    puVar23 = (undefined1 *)((long)&uStack_110 + 5);
    if (bVar7) {
      puVar23 = puStack_130 + 0xc;
    }
    *puVar22 = 0x61;
    puVar22 = (undefined1 *)((long)&uStack_110 + 6);
    if (bVar7) {
      puVar22 = puStack_130 + 0xd;
    }
    *puVar23 = 0x67;
    puVar23 = (undefined1 *)((long)&uStack_110 + 7);
    if (bVar7) {
      puVar23 = puStack_130 + 0xe;
    }
    *puVar22 = 0x65;
    if (uVar24 - 1 == 0) {
      *puVar23 = (char)uVar9;
    }
    else {
      *puVar23 = 0x7f;
      puVar20 = &uStack_108;
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0xf);
      }
      func_0x0039d584(unaff_x22,puVar20,uVar24 - 1);
    }
    if (uStack_120 != 0) {
      puVar17 = uStack_110;
    }
    uVar9 = uStack_118 & 0xff;
    if (uStack_120 != 0) {
      uVar9 = uStack_118;
    }
    if (puVar23 + uVar24 != puVar17 + uVar9) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(message_pfx)";
      uVar13 = 0x944;
LAB_00386f74:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,uVar13,2,"assertion failed: %s");
      _abort();
      goto LAB_00386fd4;
    }
    FUN_003ec0c8(&uStack_140,9);
    iVar14 = (int)unaff_x24 + (int)uVar25 + uVar26 + (int)uVar9;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = puStack_130;
    puVar17 = (undefined1 *)((ulong)&uStack_a0 | 9);
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 10);
    if (bVar7) {
      puVar22 = puStack_130 + 1;
    }
    *puVar23 = (char)((uint)iVar14 >> 0x10);
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xb);
    if (bVar7) {
      puVar23 = puStack_130 + 2;
    }
    *puVar22 = (char)((uint)iVar14 >> 8);
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 0xc);
    if (bVar7) {
      puVar22 = puStack_130 + 3;
    }
    *puVar23 = (char)iVar14;
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xd);
    if (bVar7) {
      puVar23 = puStack_130 + 4;
    }
    *puVar22 = 1;
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 0xe);
    if (bVar7) {
      puVar22 = puStack_130 + 5;
    }
    *puVar23 = 5;
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xf);
    if (bVar7) {
      puVar23 = puStack_130 + 6;
    }
    *puVar22 = *(undefined1 *)(param_2 + 0x9f);
    puVar20 = &uStack_90;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar23 = (char)*(undefined2 *)(param_2 + 0x9e);
    puVar23 = (undefined1 *)((long)&uStack_90 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(char *)puVar20 = (char)((uint)*(undefined4 *)(param_2 + 0x9c) >> 8);
    puVar22 = (undefined1 *)((long)&uStack_90 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = (char)*(undefined4 *)(param_2 + 0x9c);
    if (uStack_140 != 0) {
      puVar17 = uStack_90;
    }
    uVar25 = uStack_138 & 0xff;
    if (uStack_140 != 0) {
      uVar25 = uStack_138;
    }
    if (puVar22 != puVar17 + uVar25) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(hdr)";
      uVar13 = 0x953;
      goto LAB_00386f74;
    }
    lVar12 = param_1 + 0x630;
    uStack_158 = uStack_138;
    uStack_160 = uStack_140;
    uStack_148 = uStack_88;
    puStack_150 = uStack_90;
    FUN_003ecb34(lVar12,&uStack_160);
    if (*(char *)(param_2 + 0x6f0) == '\0') {
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      puStack_170 = uStack_d0;
      FUN_003ecb34(lVar12,&uStack_180);
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      puStack_190 = uStack_f0;
      FUN_003ecb34(lVar12,&uStack_1a0);
    }
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = auStack_a8;
    puStack_1b0 = uStack_b0;
    FUN_003ecb34(lVar12,&uStack_1c0);
    uStack_1d8 = uStack_118;
    uStack_1e0 = uStack_120;
    uStack_1c8 = uStack_108;
    puStack_1d0 = uStack_110;
    FUN_003ecb34(lVar12,&uStack_1e0);
    uStack_238 = uStack_218;
    uStack_240 = uStack_220;
    uStack_230 = uStack_210;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    func_0x003ec34c(auStack_200,&uStack_240);
    FUN_003ecb34(lVar12,auStack_200);
    if ((long)uStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if (*(char *)(param_1 + 0x628) == '\0') {
      *(undefined8 *)(param_1 + 0x8c8) = 0x8000000000000000;
      *(undefined4 *)(param_1 + 0x8d0) = 0;
    }
    *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x828);
    FUN_0038d784(param_1,*(undefined4 *)(param_2 + 0x9c),0,param_2 + 0x150);
    uVar25 = uStack_258;
    uStack_248 = uStack_258;
    if ((uStack_258 & 1) != 0) {
      piVar16 = (int *)(uStack_258 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar8 = &uStack_248;
    iVar14 = 1;
    iVar15 = 1;
    FUN_003870a0(param_1,param_2);
    if ((uVar25 & 1) != 0) {
      FUN_0055293c(uVar25);
    }
    lVar12 = 9;
    FUN_00383c14();
    if ((long)uStack_210 < 0) {
      param_1 = uStack_220;
      __ZdlPv();
    }
    if ((uVar25 & 1) != 0) {
      param_1 = uVar25;
      FUN_0055293c();
    }
  }
  else {
LAB_0038637c:
    if (((*(char *)(param_2 + 0x169) == '\0') || (*(char *)(param_2 + 0x168) == '\0')) &&
       (*(int *)(param_2 + 0x9c) != 0)) {
      uStack_260 = *param_3;
      if ((uStack_260 & 1) != 0) {
        piVar16 = (int *)(uStack_260 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_003fb7d8(&uStack_260,*(undefined8 *)(param_2 + 0x6d0),0,0,&uStack_a0,0);
      if ((uStack_260 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0038d784(param_1,*(undefined4 *)(param_2 + 0x9c),uStack_a0 & 0xffffffff,param_2 + 0x150);
      FUN_00383c14(param_1,8);
    }
    uVar25 = *param_3;
    if (uVar25 == 0) {
      uStack_268 = 0;
    }
    else {
      if (*(char *)(param_2 + 0x16b) == '\0') {
        *(undefined1 *)(param_2 + 0x16b) = 1;
      }
      uStack_268 = uVar25;
      if ((uVar25 & 1) != 0) {
        piVar16 = (int *)(uVar25 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    puVar8 = &uStack_268;
    iVar14 = 1;
    iVar15 = 1;
    lVar12 = param_2;
    FUN_003870a0();
    if ((uVar25 & 1) != 0) {
      param_1 = uVar25;
      FUN_0055293c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((long)uStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  FUN_0033c494(&uStack_258);
  uVar9 = param_1;
  __Unwind_Resume();
  pcStack_278 = FUN_003870a0;
  uStack_2b0 = unaff_x24;
  puStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  uStack_298 = uVar25;
  lStack_290 = param_2;
  uStack_288 = param_1;
  puStack_280 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar12 + 0x169) == '\0') {
    if (iVar14 != 0) {
      uVar25 = *(ulong *)(lVar12 + 0x170);
      uVar18 = *puVar8;
      if (uVar18 != uVar25) {
        if ((uVar18 & 1) != 0) {
          piVar16 = (int *)(uVar18 - 1);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar7) {
              *piVar16 = *piVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar18 = *puVar8;
        }
        *(ulong *)(lVar12 + 0x170) = uVar18;
        if ((uVar25 & 1) != 0) {
          FUN_0055293c();
        }
      }
      bVar7 = true;
      *(undefined1 *)(lVar12 + 0x169) = 1;
      goto joined_r0x003871bc;
    }
  }
  else if (*(char *)(lVar12 + 0x168) != '\0') {
    uVar25 = *puVar8;
    if ((uVar25 & 1) != 0) {
      piVar16 = (int *)(uVar25 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_2c8 = uVar25;
    FUN_00387970(&uStack_2b8,&uStack_2c8,lVar12,"Stream removed");
    if ((uVar25 & 1) != 0) {
      FUN_0055293c(uVar25);
    }
    uVar25 = uStack_2b8;
    if (uStack_2b8 != 0) {
      uStack_2d0 = uStack_2b8;
      if ((uStack_2b8 & 1) != 0) {
        piVar16 = (int *)(uStack_2b8 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_00387554(uVar9,lVar12,&uStack_2d0);
      if ((uVar25 & 1) != 0) {
        FUN_0055293c(uVar25);
      }
    }
    FUN_003861fc(uVar9,lVar12);
    if ((uStack_2b8 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  bVar7 = false;
joined_r0x003871bc:
  if ((iVar15 != 0) && (*(char *)(lVar12 + 0x168) == '\0')) {
    uVar25 = *(ulong *)(lVar12 + 0x178);
    uVar18 = *puVar8;
    if (uVar18 != uVar25) {
      if ((uVar18 & 1) != 0) {
        piVar16 = (int *)(uVar18 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar18 = *puVar8;
      }
      *(ulong *)(lVar12 + 0x178) = uVar18;
      if ((uVar25 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(lVar12 + 0x168) = 1;
    uStack_2d8 = *puVar8;
    if ((uStack_2d8 & 1) != 0) {
      piVar16 = (int *)(uStack_2d8 - 1);
      do {
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar21) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00387710(uVar9,lVar12,&uStack_2d8);
    if ((uStack_2d8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(char *)(lVar12 + 0x169) == '\0') || (*(char *)(lVar12 + 0x168) == '\0')) {
    uVar5 = false;
  }
  else {
    uVar25 = *puVar8;
    if ((uVar25 & 1) != 0) {
      piVar16 = (int *)(uVar25 - 1);
      do {
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar21) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_2e8 = uVar25;
    FUN_00387970(&uStack_2e0,&uStack_2e8,lVar12,"Stream removed");
    if ((uVar25 & 1) != 0) {
      FUN_0055293c(uVar25);
    }
    if (*(int *)(lVar12 + 0x9c) == 0) {
      func_0x0039d198(uVar9,lVar12);
    }
    else {
      uStack_2f0 = uStack_2e0;
      if ((uStack_2e0 & 1) != 0) {
        piVar16 = (int *)(uStack_2e0 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar19 = uVar9 + 0xf8;
      lVar10 = lVar19;
      FUN_0039d38c();
      if (*(long *)(uVar9 + 0xab8) == lVar10) {
        *(undefined8 *)(uVar9 + 0xab8) = 0;
        FUN_0039cc2c(uVar9);
      }
      func_0x0039d43c();
      if ((lVar19 == 0) && (FUN_00383cc8(uVar9), *(int *)(uVar9 + 0x768) == 3)) {
        FUN_003bdf2c(&uStack_2b8,2,"Last stream closed after sending GOAWAY",0x27,&uStack_2b9,1,
                     &uStack_2f0);
        FUN_00385754(uVar9,&uStack_2b8);
        if ((uStack_2b8 & 1) != 0) {
          FUN_0055293c();
        }
      }
      uVar25 = uVar9;
      FUN_0039d064(uVar9,lVar10);
      if ((int)uVar25 != 0) {
        plVar11 = *(long **)(lVar10 + 0x10);
        do {
          lVar19 = *plVar11;
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar21) {
            *plVar11 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 + -1 == 0) {
          FUN_004005ec();
        }
      }
      func_0x0039d228(uVar9,lVar10);
      func_0x0039d1e0(uVar9,lVar10);
      FUN_0038a118(uVar9);
      if ((uStack_2f0 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar25 = uStack_2e0;
    if (uStack_2e0 != 0) {
      uStack_2f8 = uStack_2e0;
      if ((uStack_2e0 & 1) != 0) {
        piVar16 = (int *)(uStack_2e0 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_00387554(uVar9,lVar12,&uStack_2f8);
      if ((uVar25 & 1) != 0) {
        FUN_0055293c(uVar25);
      }
    }
    if ((uStack_2e0 & 1) != 0) {
      FUN_0055293c();
    }
    uVar5 = true;
  }
  if (bVar7) {
    lVar19 = 0;
    bVar7 = true;
    do {
      bVar21 = bVar7;
      lVar19 = lVar12 + lVar19 * 4;
      if (*(int *)(lVar19 + 0x180) == 0) {
        *(undefined4 *)(lVar19 + 0x180) = 3;
      }
      lVar19 = 1;
      bVar7 = false;
    } while (bVar21);
    FUN_00385ea8(uVar9,lVar12);
    FUN_00385fc8(uVar9,lVar12);
  }
  if ((bool)uVar5) {
    FUN_003861fc(uVar9,lVar12);
    plVar11 = *(long **)(lVar12 + 0x10);
    do {
      lVar12 = *plVar11;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      FUN_004005ec();
    }
  }
  return;
}



/* Entry: 003870a0; end: 00387553;  */

void FUN_003870a0(long param_1,long param_2,int param_3,int param_4,ulong *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  
  if (*(char *)(param_2 + 0x169) == '\0') {
    if (param_3 != 0) {
      uVar10 = *(ulong *)(param_2 + 0x170);
      uVar7 = *param_5;
      if (uVar7 != uVar10) {
        if ((uVar7 & 1) != 0) {
          piVar6 = (int *)(uVar7 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          uVar7 = *param_5;
        }
        *(ulong *)(param_2 + 0x170) = uVar7;
        if ((uVar10 & 1) != 0) {
          FUN_0055293c();
        }
      }
      bVar2 = true;
      *(undefined1 *)(param_2 + 0x169) = 1;
      goto joined_r0x003871bc;
    }
  }
  else if (*(char *)(param_2 + 0x168) != '\0') {
    uVar10 = *param_5;
    if ((uVar10 & 1) != 0) {
      piVar6 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_58 = uVar10;
    FUN_00387970(&uStack_48,&uStack_58,param_2,"Stream removed");
    if ((uVar10 & 1) != 0) {
      FUN_0055293c(uVar10);
    }
    uVar10 = uStack_48;
    if (uStack_48 != 0) {
      uStack_60 = uStack_48;
      if ((uStack_48 & 1) != 0) {
        piVar6 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_00387554(param_1,param_2,&uStack_60);
      if ((uVar10 & 1) != 0) {
        FUN_0055293c(uVar10);
      }
    }
    FUN_003861fc(param_1,param_2);
    if ((uStack_48 & 1) == 0) {
      return;
    }
    FUN_0055293c();
    return;
  }
  bVar2 = false;
joined_r0x003871bc:
  if ((param_4 != 0) && (*(char *)(param_2 + 0x168) == '\0')) {
    uVar10 = *(ulong *)(param_2 + 0x178);
    uVar7 = *param_5;
    if (uVar7 != uVar10) {
      if ((uVar7 & 1) != 0) {
        piVar6 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar7 = *param_5;
      }
      *(ulong *)(param_2 + 0x178) = uVar7;
      if ((uVar10 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(param_2 + 0x168) = 1;
    uStack_68 = *param_5;
    if ((uStack_68 & 1) != 0) {
      piVar6 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00387710(param_1,param_2,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(char *)(param_2 + 0x169) == '\0') || (*(char *)(param_2 + 0x168) == '\0')) {
    bVar3 = false;
  }
  else {
    uVar10 = *param_5;
    if ((uVar10 & 1) != 0) {
      piVar6 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_78 = uVar10;
    FUN_00387970(&uStack_70,&uStack_78,param_2,"Stream removed");
    if ((uVar10 & 1) != 0) {
      FUN_0055293c(uVar10);
    }
    if (*(int *)(param_2 + 0x9c) == 0) {
      func_0x0039d198(param_1,param_2);
    }
    else {
      uStack_80 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        piVar6 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar8 = param_1 + 0xf8;
      lVar4 = lVar8;
      FUN_0039d38c();
      if (*(long *)(param_1 + 0xab8) == lVar4) {
        *(undefined8 *)(param_1 + 0xab8) = 0;
        FUN_0039cc2c(param_1);
      }
      func_0x0039d43c();
      if ((lVar8 == 0) && (FUN_00383cc8(param_1), *(int *)(param_1 + 0x768) == 3)) {
        FUN_003bdf2c(&uStack_48,2,"Last stream closed after sending GOAWAY",0x27,&uStack_49,1,
                     &uStack_80);
        FUN_00385754(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar8 = param_1;
      FUN_0039d064(param_1,lVar4);
      if ((int)lVar8 != 0) {
        plVar5 = *(long **)(lVar4 + 0x10);
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 + -1 == 0) {
          FUN_004005ec();
        }
      }
      func_0x0039d228(param_1,lVar4);
      func_0x0039d1e0(param_1,lVar4);
      FUN_0038a118(param_1);
      if ((uStack_80 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uVar10 = uStack_70;
    if (uStack_70 != 0) {
      uStack_88 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        piVar6 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_00387554(param_1,param_2,&uStack_88);
      if ((uVar10 & 1) != 0) {
        FUN_0055293c(uVar10);
      }
    }
    if ((uStack_70 & 1) != 0) {
      FUN_0055293c();
    }
    bVar3 = true;
  }
  if (bVar2) {
    lVar8 = 0;
    bVar2 = true;
    do {
      bVar9 = bVar2;
      lVar8 = param_2 + lVar8 * 4;
      if (*(int *)(lVar8 + 0x180) == 0) {
        *(undefined4 *)(lVar8 + 0x180) = 3;
      }
      lVar8 = 1;
      bVar2 = false;
    } while (bVar9);
    FUN_00385ea8(param_1,param_2);
    FUN_00385fc8(param_1,param_2);
  }
  if (bVar3) {
    FUN_003861fc(param_1,param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_004005ec();
    }
  }
  return;
}



/* Entry: 00387554; end: 0038770f;  */

void FUN_00387554(undefined8 ***param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  int iStack_74;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = (undefined8 **)*param_3;
  if (((ulong)ppuStack_98 & 1) != 0) {
    piVar7 = (int *)((long)ppuStack_98 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *(long *)(param_2 + 0x6d0);
  puVar6 = (ulong *)&iStack_74;
  FUN_003fb7d8(&ppuStack_98,lVar5,puVar6,&ppuStack_90,0,0);
  pppuVar3 = (undefined8 ***)ppuStack_98;
  if (((ulong)ppuStack_98 & 1) != 0) {
    FUN_0055293c();
  }
  if (iStack_74 != 0) {
    *(undefined1 *)(param_2 + 0x16b) = 1;
  }
  if ((*(int *)(param_2 + 0x184) == 0) || (*(long *)(param_2 + 0x128) != 0)) {
    *(uint *)(param_2 + 0x398) = *(uint *)(param_2 + 0x398) | 0x400;
    *(int *)(param_2 + 0x520) = iStack_74;
    uVar8 = uStack_88;
    if (-1 < (long)uStack_80) {
      uVar8 = uStack_80 >> 0x38;
    }
    if (uVar8 != 0) {
      pppuVar3 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        pppuVar3 = &ppuStack_90;
      }
      func_0x003ec288(&plStack_48,pppuVar3);
      uStack_68 = uStack_40;
      plStack_70 = plStack_48;
      uStack_58 = uStack_30;
      uStack_60 = uStack_38;
      FUN_0034ce60(param_2 + 0x398,&plStack_70);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
        do {
          lVar5 = *plStack_70;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
          if (bVar2) {
            *plStack_70 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (*(code *)plStack_70[1])();
        }
      }
    }
    *(undefined4 *)(param_2 + 0x184) = 1;
    FUN_003861fc();
    pppuVar3 = param_1;
    lVar5 = param_2;
  }
  if ((long)uStack_80 < 0) {
    pppuVar3 = (undefined8 ***)ppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)lVar5 != 0) {
    func_0x0040cf10();
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  __Unwind_Resume(pppuVar3);
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e0 = uVar8;
  FUN_00387970(&uStack_d8,&uStack_e0,lVar5,"Pending writes failed due to stream closure");
  uVar4 = *puVar6;
  if (uStack_d8 != uVar4) {
    *puVar6 = uStack_d8;
    uStack_d8 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_00387798;
    FUN_0055293c();
    uVar4 = uStack_d8;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00387798:
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e8 = uVar8;
  FUN_00384d78(pppuVar3);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f0 = uVar8;
  FUN_00384d78(pppuVar3);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f8 = uVar8;
  FUN_00384d78(pppuVar3);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_100 = uVar8;
  FUN_00387b64(pppuVar3,lVar5,lVar5 + 0x858,&uStack_100);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_108 = uVar8;
  FUN_00387b64(pppuVar3,lVar5,lVar5 + 0x850,&uStack_108);
  if ((uVar8 & 1) != 0) {
    FUN_0055293c(uVar8);
  }
  return;
}



/* Entry: 00387710; end: 0038796f;  */

void FUN_00387710(undefined8 param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_40 = uVar5;
  FUN_00387970(&uStack_38,&uStack_40,param_2,"Pending writes failed due to stream closure");
  uVar3 = *param_3;
  if (uStack_38 != uVar3) {
    *param_3 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_00387798;
    FUN_0055293c();
    uVar3 = uStack_38;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00387798:
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  *(undefined8 *)(param_2 + 0xa0) = 0;
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = uVar5;
  FUN_00384d78(param_1);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = uVar5;
  FUN_00384d78(param_1);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_58 = uVar5;
  FUN_00384d78(param_1);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = uVar5;
  FUN_00387b64(param_1,param_2,param_2 + 0x858,&uStack_60);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = uVar5;
  FUN_00387b64(param_1,param_2,param_2 + 0x850,&uStack_68);
  if ((uVar5 & 1) != 0) {
    FUN_0055293c(uVar5);
  }
  return;
}



/* Entry: 00387970; end: 00387b63;  */

void FUN_00387970(long *param_1,ulong *param_2,long param_3,ulong *param_4,ulong *param_5)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uStack_79;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong auStack_50 [4];
  
  auStack_50[3] = *(ulong *)PTR____stack_chk_guard_00999f88;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  uStack_60 = *(ulong *)(param_3 + 0x170);
  uStack_58 = 0;
  if ((uStack_60 & 1) != 0) {
    piVar7 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0038a054(&uStack_60,auStack_50,&uStack_58);
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_68 = *(ulong *)(param_3 + 0x178);
  if ((uStack_68 & 1) != 0) {
    piVar7 = (int *)(uStack_68 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0038a054(&uStack_68,auStack_50,&uStack_58);
  if ((uStack_68 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_70 = *param_2;
  if ((uStack_70 & 1) != 0) {
    piVar7 = (int *)(uStack_70 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6 = auStack_50;
  puVar3 = &uStack_58;
  FUN_0038a054(&uStack_70);
  if ((uStack_70 & 1) != 0) {
    FUN_0055293c();
  }
  *param_1 = 0;
  if (uStack_58 != 0) {
    puVar3 = param_4;
    _strlen();
    param_5 = (ulong *)&uStack_79;
    FUN_003bdf2c(&lStack_78,2);
    puVar6 = param_4;
    if (lStack_78 != 0) {
      *param_1 = lStack_78;
    }
  }
  lVar9 = 0x10;
  do {
    uVar4 = *(ulong *)((long)auStack_50 + lVar9);
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
    iVar5 = (int)puVar6;
    lVar9 = lVar9 + -8;
  } while (lVar9 != -8);
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_50[3]) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume(uVar4);
  }
  func_0x0040cf10();
  uVar10 = *puVar3;
  while (uVar10 != 0) {
    *puVar3 = *(ulong *)(uVar10 + 0x10);
    uVar8 = *param_5;
    if ((uVar8 & 1) != 0) {
      piVar7 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00384d78(uVar4);
    if ((uVar8 & 1) != 0) {
      FUN_0055293c();
    }
    *(undefined8 *)(uVar10 + 0x10) = *(undefined8 *)(uVar4 + 0xac8);
    *(ulong *)(uVar4 + 0xac8) = uVar10;
    uVar10 = *puVar3;
  }
  return;
}



/* Entry: 00387b64; end: 00387c0f;  */

void FUN_00387b64(long param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uStack_38;
  
  lVar4 = *param_3;
  while (lVar4 != 0) {
    *param_3 = *(long *)(lVar4 + 0x10);
    uStack_38 = *param_4;
    if ((uStack_38 & 1) != 0) {
      piVar3 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_00384d78(param_1,param_2,lVar4 + 8,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0xac8);
    *(long *)(param_1 + 0xac8) = lVar4;
    lVar4 = *param_3;
  }
  return;
}



/* Entry: 00387c10; end: 00387c73;  */

void FUN_00387c10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_28;
  
  FUN_00387c74(param_1 + 0x9c0);
  *(code **)(param_1 + 0xb00) = FUN_00387e28;
  *(long *)(param_1 + 0xb08) = param_1;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(code **)(param_1 + 0xb20) = FUN_00387eb8;
  *(long *)(param_1 + 0xb28) = param_1;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  FUN_00387c9c(param_1,param_1 + 0xaf8,param_1 + 0xb18);
  if (*(int *)(param_1 + 0x90) == 1) {
    FUN_00384638(0x11);
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    FUN_00384638(0x11);
    *(undefined4 *)(param_1 + 0x90) = 1;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(code **)(param_1 + 0x128) = FUN_00384674;
    *(long *)(param_1 + 0x130) = param_1;
    *(undefined8 *)(param_1 + 0x138) = 0;
    uStack_28 = 0;
    FUN_003bcb64(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00387c74; end: 00387c9b;  */

void FUN_00387c74(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  long *plVar5;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if (*param_1 == 0) {
    *param_1 = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  func_0x00772a5c();
  uStack_50 = *(ulong *)(param_1 + 0x26);
  if (uStack_50 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uStack_48 = 0;
      puVar3 = &uStack_48;
      FUN_003b7ab0();
      param_2[3] = puVar3;
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      plVar5 = (long *)(param_1 + 0x1fc);
      *param_2 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x1fe);
      }
      *plVar5 = (long)param_2;
      *(undefined8 **)(param_1 + 0x1fe) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      uStack_48 = 0;
      puVar3 = &uStack_48;
      FUN_003b7ab0();
      param_3[3] = puVar3;
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
      plVar5 = (long *)(param_1 + 0x200);
      *param_3 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x202);
      }
      *plVar5 = (long)param_3;
      *(undefined8 **)(param_1 + 0x202) = param_3;
    }
  }
  else {
    if ((uStack_50 & 1) != 0) {
      piVar4 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&uStack_48,param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    uStack_58 = *(ulong *)(param_1 + 0x26);
    if ((uStack_58 & 1) != 0) {
      piVar4 = (int *)(uStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&uStack_48,param_3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00387c9c; end: 00387e27;  */

void FUN_00387c9c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  long *plVar5;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_40 = *(ulong *)(param_1 + 0x98);
  if (uStack_40 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uStack_38 = 0;
      puVar3 = &uStack_38;
      FUN_003b7ab0();
      param_2[3] = puVar3;
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      plVar5 = (long *)(param_1 + 0x7f0);
      *param_2 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x7f8);
      }
      *plVar5 = (long)param_2;
      *(undefined8 **)(param_1 + 0x7f8) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      uStack_38 = 0;
      puVar3 = &uStack_38;
      FUN_003b7ab0();
      param_3[3] = puVar3;
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      plVar5 = (long *)(param_1 + 0x800);
      *param_3 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x808);
      }
      *plVar5 = (long)param_3;
      *(undefined8 **)(param_1 + 0x808) = param_3;
    }
  }
  else {
    if ((uStack_40 & 1) != 0) {
      piVar4 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&uStack_38,param_2,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    uStack_48 = *(ulong *)(param_1 + 0x98);
    if ((uStack_48 & 1) != 0) {
      piVar4 = (int *)(uStack_48 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003c1e6c(&uStack_38,param_3,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00387e28; end: 00387eb7;  */

void FUN_00387e28(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xb00) = FUN_0038a3bc;
  *(long *)(param_1 + 0xb08) = param_1;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bca14(uVar3,param_1 + 0xaf8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00387eb8; end: 00387f47;  */

void FUN_00387eb8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xb20) = FUN_0038a448;
  *(long *)(param_1 + 0xb28) = param_1;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bca14(uVar3,param_1 + 0xb18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00387f48; end: 00387f6f;  */

void FUN_00387f48(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(long *)(param_2 + 0xce8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0xce8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 0xce8);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 00387f70; end: 00387fcf;  */

undefined8 FUN_00387f70(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00;
  __Znwm(0xd00);
  FUN_00382bd4();
  return uVar1;
}



/* Entry: 00387fd0; end: 0038807f;  */

void FUN_00387fd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_38;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 != 0) {
    FUN_003ed300(param_2,param_1 + 0x1a0);
    FUN_00338cb8(param_2);
  }
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x88) = param_4;
  *(code **)(param_1 + 0x188) = FUN_00388080;
  *(long *)(param_1 + 400) = param_1;
  *(undefined8 *)(param_1 + 0x198) = 0;
  uStack_38 = 0;
  FUN_003bca14(*(undefined8 *)(param_1 + 0x78),param_1 + 0x180,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00388080; end: 0038893b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00388080(long param_1,dword *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lStack_1188;
  long lStack_1180;
  ulong uStack_1178;
  undefined1 *puStack_1170;
  code *pcStack_1168;
  ulong uStack_1160;
  ulong uStack_1158;
  ulong uStack_1150;
  ulong uStack_1148;
  ulong uStack_1140;
  ulong uStack_1138;
  ulong uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined1 uStack_1111;
  ulong uStack_1110;
  ulong uStack_1108;
  ulong uStack_1100;
  ulong uStack_10f8;
  int aiStack_10f0 [2];
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined4 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  ulong *puStack_10b8;
  ulong auStack_10b0 [521];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_1138 = *(ulong *)param_2;
  if ((uStack_1138 & 1) != 0) {
    piVar6 = (int *)(uStack_1138 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcVar5 = (char *)param_2;
  uVar8 = uStack_1138;
  if (uStack_1138 != 0) {
    FUN_003bdf2c(&uStack_1140,2,"Endpoint read failed",0x14,aiStack_10f0,1,&uStack_1138);
    pcVar5 = (char *)&MACH_HEADER.filetype;
    FUN_003be104(auStack_10b0 + 3,&uStack_1140,0xc,*(undefined4 *)(param_1 + 0x90));
    uVar8 = uStack_1138;
    if (auStack_10b0[3] == uStack_1138) {
LAB_00388144:
      if ((uVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      uStack_1138 = auStack_10b0[3];
      auStack_10b0[3] = 0x36;
      if ((uVar8 & 1) != 0) {
        FUN_0055293c();
        uVar8 = auStack_10b0[3];
        goto LAB_00388144;
      }
    }
    uVar8 = uStack_1138;
    if ((uStack_1140 & 1) != 0) {
      FUN_0055293c();
      uVar8 = uStack_1138;
    }
  }
  iVar3 = (int)pcVar5;
  uStack_1138 = 0x36;
  uVar9 = *(ulong *)param_2;
  if (uVar9 != 0x36) {
    *(undefined8 *)param_2 = 0x36;
    uStack_1138 = uVar9;
  }
  if (uVar8 != 0x36) {
    *(ulong *)param_2 = uVar8;
  }
  plVar12 = (long *)(param_1 + 0x98);
  if (*plVar12 == 0) {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    auStack_10b0[1] = 0;
    auStack_10b0[2] = 0;
    auStack_10b0[0] = uVar8;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      lVar11 = 0;
      uVar8 = 0;
      puVar4 = auStack_10b0 + 1;
      do {
        auStack_10b0[3] = 0;
        if (auStack_10b0[1] != 0) {
          pcVar5 = (char *)(auStack_10b0 + 3);
          iVar3 = (int)puVar4;
          FUN_00552b00();
          if ((auStack_10b0[3] & 1) != 0) {
            FUN_0055293c();
          }
          if (iVar3 == 0) break;
        }
        pcVar5 = (char *)(*(long *)(param_1 + 0x1a8) + lVar11);
        FUN_0039bcf4(auStack_10b0 + 3,param_1);
        uVar9 = auStack_10b0[1];
        if (auStack_10b0[3] == auStack_10b0[1]) {
LAB_0038823c:
          if ((uVar9 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          auStack_10b0[1] = auStack_10b0[3];
          auStack_10b0[3] = 0x36;
          if ((uVar9 & 1) != 0) {
            FUN_0055293c();
            uVar9 = auStack_10b0[3];
            goto LAB_0038823c;
          }
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x20;
      } while (uVar8 < *(ulong *)(param_1 + 0x1b0));
      auStack_10b0[3] = 0;
      if (auStack_10b0[1] != 0) {
        pcVar5 = (char *)(auStack_10b0 + 3);
        FUN_00552b00();
        if ((auStack_10b0[3] & 1) != 0) {
          FUN_0055293c();
        }
        if (((ulong)puVar4 & 1) == 0) {
          uStack_1148 = 0;
          aiStack_10f0[0] = 0;
          uStack_10e0 = 0;
          uStack_10d8 = 0;
          uStack_10e8 = 0;
          uStack_10d0 = 0;
          uStack_10c8 = 0;
          uStack_10c0 = 0;
          FUN_003ba4e8(auStack_10b0 + 3,0,aiStack_10f0);
          uStack_10f8 = 0;
          if (*(long *)(param_1 + 0x1b0) == 0) {
LAB_0038832c:
            FUN_003bb738(&uStack_1130,auStack_10b0 + 3);
            uVar8 = uStack_10f8;
            if (uStack_1130 != uStack_10f8) {
              uStack_10f8 = uStack_1130;
              uStack_1130 = 0x36;
              if ((uVar8 & 1) != 0) {
                FUN_0055293c();
              }
            }
            puStack_10b8 = (ulong *)0x0;
            if (uStack_10f8 == 0) {
              iVar3 = 1;
            }
            else {
              puVar4 = &uStack_10f8;
              FUN_00552b00(puVar4,&puStack_10b8);
              iVar3 = (int)puVar4;
              if (((ulong)puStack_10b8 & 1) != 0) {
                FUN_0055293c();
              }
            }
            if ((uStack_1130 & 1) != 0) {
              FUN_0055293c();
            }
            if (iVar3 != 0) {
              uStack_1128 = 0;
              uStack_1120 = 0;
              uStack_1130 = 0;
              FUN_003b646c(&uStack_1110,2,"Trying to connect an http1.x server",0x23,&uStack_1111,
                           &uStack_1130);
              FUN_003be104(&uStack_1108,&uStack_1110,0xb,(long)aiStack_10f0[0]);
              iVar3 = aiStack_10f0[0];
              FUN_003ff434(aiStack_10f0[0]);
              FUN_003be104(&uStack_1100,&uStack_1108,3,(long)iVar3);
              if (uStack_1100 != 0) {
                uStack_1148 = uStack_1100;
                uStack_1100 = 0x36;
              }
              if ((uStack_1108 & 1) != 0) {
                FUN_0055293c();
              }
              if ((uStack_1110 & 1) != 0) {
                FUN_0055293c();
              }
              puStack_10b8 = &uStack_1130;
              FUN_0033d548(&puStack_10b8);
            }
          }
          else {
            lVar11 = 0;
            uVar8 = 0;
            do {
              FUN_003ba5a0(&uStack_1130,auStack_10b0 + 3,*(long *)(param_1 + 0x1a8) + lVar11,0);
              uVar9 = uStack_10f8;
              if (uStack_1130 == uStack_10f8) {
LAB_00388300:
                if ((uVar9 & 1) != 0) {
                  FUN_0055293c();
                }
              }
              else {
                uStack_10f8 = uStack_1130;
                uStack_1130 = 0x36;
                if ((uVar9 & 1) != 0) {
                  FUN_0055293c();
                  uVar9 = uStack_1130;
                  goto LAB_00388300;
                }
              }
              uVar8 = uVar8 + 1;
              if (*(ulong *)(param_1 + 0x1b0) <= uVar8) {
                if (uStack_10f8 == 0) goto LAB_0038832c;
                break;
              }
              lVar11 = lVar11 + 0x20;
            } while (uStack_10f8 == 0);
          }
          FUN_003ba52c(auStack_10b0 + 3);
          FUN_003ba530(aiStack_10f0);
          if ((uStack_10f8 & 1) != 0) {
            FUN_0055293c();
          }
          uVar8 = auStack_10b0[2];
          if (uStack_1148 == auStack_10b0[2]) {
LAB_0038847c:
            if ((uVar8 & 1) != 0) {
              FUN_0055293c();
            }
          }
          else {
            auStack_10b0[2] = uStack_1148;
            uStack_1148 = 0x36;
            if ((uVar8 & 1) != 0) {
              FUN_0055293c();
              uVar8 = uStack_1148;
              goto LAB_0038847c;
            }
          }
          pcVar5 = "Failed parsing HTTP/2";
          FUN_003bdf2c(auStack_10b0 + 3,2,"Failed parsing HTTP/2",0x15,aiStack_10f0,3,auStack_10b0);
          uVar8 = *(ulong *)param_2;
          if (auStack_10b0[3] != uVar8) {
            *(ulong *)param_2 = auStack_10b0[3];
            auStack_10b0[3] = 0x36;
            if ((uVar8 & 1) == 0) goto LAB_003884d8;
            FUN_0055293c();
            uVar8 = auStack_10b0[3];
          }
          if ((uVar8 & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
    }
LAB_003884d8:
    if (*(long *)(param_1 + 0xa90) != 0) {
      if (0 < *(long *)(param_1 + 0xa90)) {
        while( true ) {
          pcVar5 = (char *)(auStack_10b0 + 3);
          lVar11 = param_1;
          func_0x0039d220();
          uVar8 = auStack_10b0[3];
          if ((int)lVar11 == 0) break;
          if ((*plVar12 == 0) &&
             (lVar11 = param_1, FUN_0039cf7c(param_1,auStack_10b0[3]), (int)lVar11 != 0)) {
            plVar7 = *(long **)(uVar8 + 0x10);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = *plVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          FUN_00383c14(param_1,0xe);
        }
      }
      *(undefined8 *)(param_1 + 0xa90) = 0;
    }
    lVar11 = 0x10;
    do {
      if ((*(ulong *)((long)auStack_10b0 + lVar11) & 1) != 0) {
        FUN_0055293c();
      }
      iVar3 = (int)pcVar5;
      lVar11 = lVar11 + -8;
    } while (lVar11 != -8);
    uVar8 = *(ulong *)param_2;
  }
  if (uVar8 == 0) {
    if (*plVar12 != 0) {
      iVar3 = 0x8c517f;
      FUN_003bdf2c(auStack_10b0 + 3,2,"Transport closed",0x10,aiStack_10f0,1,plVar12);
      uVar8 = auStack_10b0[3];
      uVar9 = *(ulong *)param_2;
      if (auStack_10b0[3] == uVar9) {
LAB_003885b8:
        if ((uVar9 & 1) != 0) {
          FUN_0055293c();
        }
        uVar8 = *(ulong *)param_2;
      }
      else {
        *(ulong *)param_2 = auStack_10b0[3];
        auStack_10b0[3] = 0x36;
        if ((uVar9 & 1) != 0) {
          FUN_0055293c();
          uVar9 = auStack_10b0[3];
          goto LAB_003885b8;
        }
      }
      if (uVar8 != 0) goto LAB_003885c8;
      if (*plVar12 != 0) {
        bVar2 = false;
        goto LAB_003886a4;
      }
    }
    if (*(int *)(param_1 + 0xcdc) == 0) {
      func_0x003cf020(param_1 + 0xc58);
    }
    bVar2 = true;
    goto LAB_003886a4;
  }
LAB_003885c8:
  uVar9 = *(ulong *)(param_1 + 0x760);
  if (uVar9 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar9 = *(ulong *)(param_1 + 0x760);
    }
    if ((uVar9 & 1) != 0) {
      piVar6 = (int *)(uVar9 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_1158 = uVar9;
    uStack_1150 = uVar8;
    FUN_003be56c(auStack_10b0 + 3,&uStack_1150,&uStack_1158);
    uVar8 = *(ulong *)param_2;
    if (auStack_10b0[3] == uVar8) {
LAB_00388644:
      if ((uVar8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *(ulong *)param_2 = auStack_10b0[3];
      auStack_10b0[3] = 0x36;
      if ((uVar8 & 1) != 0) {
        FUN_0055293c();
        uVar8 = auStack_10b0[3];
        goto LAB_00388644;
      }
    }
    if ((uStack_1158 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_1150 & 1) != 0) {
      FUN_0055293c();
    }
    uVar8 = *(ulong *)param_2;
  }
  if ((uVar8 & 1) != 0) {
    piVar6 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_1160 = uVar8;
  iVar3 = (int)&uStack_1160;
  FUN_00385754(param_1);
  if ((uStack_1160 & 1) != 0) {
    FUN_0055293c();
  }
  bVar2 = false;
  *(undefined1 *)(param_1 + 0xa0) = 0;
LAB_003886a4:
  lVar11 = param_1 + 0x1a0;
  func_0x003ecf8c(lVar11);
  if (bVar2) {
    if (*(uint *)(param_1 + 0xcf4) >> 4 < 0x271) {
      *(code **)(param_1 + 0x188) = FUN_00389b48;
      *(long *)(param_1 + 400) = param_1;
      *(undefined8 *)(param_1 + 0x198) = 0;
      lVar10 = lVar11;
      FUN_003bcea4(*(undefined8 *)(param_1 + 0x10),lVar11,param_1 + 0x180,
                   *(long *)(param_1 + 0x760) != 0,1);
      iVar3 = (int)lVar10;
    }
    else {
      *(undefined1 *)(param_1 + 0xcf8) = 1;
    }
  }
  else {
    plVar12 = (long *)(param_1 + 8);
    do {
      lVar10 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      FUN_003827f4(param_1);
      __ZdlPv();
    }
  }
  uVar8 = uStack_1138;
  if ((uStack_1138 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    if (iVar3 != 0) {
      func_0x0040cf10();
      lVar11 = 0x10;
      do {
        FUN_0033c494((long)auStack_10b0 + lVar11);
        lVar11 = lVar11 + -8;
      } while (lVar11 != -8);
      FUN_0033c494(&uStack_1138);
      lVar11 = -8;
    }
    uVar9 = uVar8;
    __Unwind_Resume();
    pcStack_1168 = FUN_0038893c;
    lStack_1180 = lVar11;
    uStack_1178 = uVar8;
    puStack_1170 = &stack0xfffffffffffffff0;
    if (*(long *)(uVar9 + 0x1d8) != 0) {
      *(long *)(uVar9 + 0x1e0) = *(long *)(uVar9 + 0x1d8);
      __ZdlPv();
    }
    lStack_1188 = uVar9 + 0x1c0;
    FUN_003889ac(&lStack_1188);
    lStack_1188 = uVar9 + 0x1a8;
    FUN_003889ac(&lStack_1188);
    FUN_0034b418(uVar9 + 0x188);
    if ((*(byte *)(uVar9 + 0x18) & 1) != 0) {
      __ZdlPv(*(undefined8 *)(uVar9 + 0x20));
    }
    return uVar9;
  }
  return uVar8;
}



/* Entry: 0038893c; end: 003889ab;  */

long FUN_0038893c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x1c0;
  FUN_003889ac(&lStack_28);
  lStack_28 = param_1 + 0x1a8;
  FUN_003889ac(&lStack_28);
  FUN_0034b418(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1;
}



/* Entry: 003889ac; end: 00388a1b;  */

void FUN_003889ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        FUN_0034b418();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar2);
    return;
  }
  return;
}



/* Entry: 00388a1c; end: 00388a57;  */

long * FUN_00388a1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1[2]);
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 00388a58; end: 00388b03;  */

undefined4 * FUN_00388a58(undefined4 *param_1)

{
  undefined1 uStack_31;
  
  *param_1 = 0x1000;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0x100000000000;
  FUN_00388b04(param_1 + 6,0x80,&uStack_31);
  *(undefined8 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x003b088c(param_1 + 0x5f);
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 00388b04; end: 00388b47;  */

undefined8 * FUN_00388b04(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_00388b48();
  return param_1;
}



/* Entry: 00388b48; end: 00388be7;  */

void FUN_00388b48(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 < 0x81) {
    lVar3 = 0;
    if (param_2 == 0) goto LAB_00388ba0;
  }
  else {
    uVar2 = param_2;
    if (param_2 < 0x101) {
      uVar2 = 0x100;
    }
    puVar1 = param_1;
    func_0x00388bb8();
    param_1[1] = (ulong)puVar1;
    param_1[2] = uVar2;
    *param_1 = *param_1 | 1;
  }
  lVar3 = param_2 << 1;
  _bzero();
LAB_00388ba0:
  *param_1 = *param_1 + lVar3;
  return;
}



/* Entry: 00388be8; end: 00388d6f;  */

void FUN_00388be8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar4 = 0xc0;
  __Znwm();
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  lStack_50 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_002971d4(&uStack_80,*param_3,param_3[1]);
  }
  else {
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    lStack_70 = param_3[2];
  }
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  lStack_90 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plStack_a8 = (long *)*param_5;
  *param_5 = 0;
  FUN_003a9ed4(uVar4,&uStack_60,&uStack_80,&uStack_a0,&plStack_a8);
  *param_1 = uVar4;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_a8 + 8))();
    }
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 00388d70; end: 00388dff;  */

void FUN_00388d70(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xbe0) = FUN_00388e5c;
  *(long *)(param_1 + 0xbe8) = param_1;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bca14(uVar3,param_1 + 0xbd8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00388e00; end: 00388e5b;  */

long FUN_00388e00(ulong param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (((param_1 != 0x7fffffffffffffff && param_2 != 0x7fffffffffffffff) &&
      (lVar1 = -0x8000000000000000, param_1 != 0x8000000000000000)) &&
     (param_2 != -0x8000000000000000)) {
    if ((long)param_1 < 1) {
      if (param_2 < (long)(-0x8000000000000000 - param_1)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(param_1 ^ 0x7fffffffffffffff) < param_2) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_2 + param_1;
  }
  return lVar1;
}



/* Entry: 00388e5c; end: 00389287;  */

void FUN_00388e5c(dword *param_1,long *param_2)

{
  dword *pdVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  dword **ppdVar7;
  dword *pdVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_48;
  ulong uStack_40;
  dword *pdStack_38;
  
  if (param_1[0x337] != 0) {
    func_0x00772ac8();
    func_0x0040cf10();
    func_0x0040cf10();
    func_0x0040cf10();
    func_0x0040cf10();
    FUN_0033c494(&pdStack_38);
    FUN_0033c494(&uStack_48);
    __Unwind_Resume();
    if (*param_2 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x33a) != 0) {
      plVar12 = (long *)(*(long *)(param_1 + 0x33a) + 0x60);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pdVar8 = param_1 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
      if (bVar4) {
        *(long *)pdVar8 = *(long *)pdVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(code **)(param_1 + 0x310) = FUN_00389624;
    *(dword **)(param_1 + 0x312) = param_1;
    *(undefined8 *)(param_1 + 0x314) = 0;
    pdVar8 = param_1;
    func_0x003c1f6c();
    uVar5 = *(ulong *)pdVar8;
    FUN_003c1e28();
    lVar9 = *(long *)(param_1 + 0x334);
    lVar11 = 0x7fffffffffffffff;
    if ((uVar5 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) &&
       (lVar11 = -0x8000000000000000, uVar5 != 0x8000000000000000 && lVar9 != -0x8000000000000000))
    {
      if ((long)uVar5 < 1) {
        if (lVar9 < (long)(-0x8000000000000000 - uVar5)) goto LAB_0038934c;
      }
      else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar9) {
        lVar11 = 0x7fffffffffffffff;
        goto LAB_0038934c;
      }
      lVar11 = lVar9 + uVar5;
    }
LAB_0038934c:
    func_0x003cf010(param_1 + 0x324,lVar11,param_1 + 0x30e);
    *(undefined1 *)((long)param_1 + 0xcd9) = 1;
    return;
  }
  if ((*(char *)(param_1 + 0x25) != '\0') || (*(long *)(param_1 + 0x26) != 0)) {
    param_1[0x337] = 2;
    goto LAB_00388e94;
  }
  if (*param_2 == 0) {
    if (*(char *)(param_1 + 0x336) == '\0') {
      plVar12 = (long *)(param_1 + 0x3e);
      func_0x0039d43c();
      if (plVar12 == (long *)0x0) {
        pdVar8 = param_1 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
          if (bVar4) {
            *(long *)pdVar8 = *(long *)pdVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(code **)(param_1 + 0x2f8) = FUN_00388d70;
        *(dword **)(param_1 + 0x2fa) = param_1;
        *(undefined8 *)(param_1 + 0x2fc) = 0;
        func_0x003c1f6c();
        lVar11 = *plVar12;
        FUN_003c1e28(lVar11);
        FUN_00388e00();
        goto LAB_00389208;
      }
    }
    param_1[0x337] = 1;
    pdVar8 = param_1 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
      if (bVar4) {
        *(long *)pdVar8 = *(long *)pdVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x003cf070(param_1 + 0x324);
    pdStack_38 = *(dword **)(param_1 + 0x26);
    if (pdStack_38 == (dword *)0x0) {
      if (*(long *)(param_1 + 0x204) == 0) {
        *(code **)(param_1 + 0x300) = FUN_00389594;
        *(dword **)(param_1 + 0x302) = param_1;
        *(undefined8 *)(param_1 + 0x304) = 0;
        uStack_40 = 0;
        pdStack_38 = (dword *)0x0;
        ppdVar7 = &pdStack_38;
        FUN_003b7ab0();
        *(dword ***)(param_1 + 0x304) = ppdVar7;
        if (((ulong)pdStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        plVar12 = (long *)(param_1 + 0x1fc);
        puVar2 = (undefined8 *)(param_1 + 0x2fe);
        *puVar2 = 0;
        if (*plVar12 != 0) {
          plVar12 = *(long **)(param_1 + 0x1fe);
        }
        *plVar12 = (long)puVar2;
        *(undefined8 **)(param_1 + 0x1fe) = puVar2;
        *(code **)(param_1 + 0x308) = FUN_00389504;
        *(dword **)(param_1 + 0x30a) = param_1;
        *(undefined8 *)(param_1 + 0x30c) = 0;
        uStack_48 = 0;
        pdStack_38 = (dword *)0x0;
        ppdVar7 = &pdStack_38;
        FUN_003b7ab0();
        *(dword ***)(param_1 + 0x30c) = ppdVar7;
        if (((ulong)pdStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        plVar12 = (long *)(param_1 + 0x200);
        puVar2 = (undefined8 *)(param_1 + 0x306);
        *puVar2 = 0;
        if (*plVar12 != 0) {
          plVar12 = *(long **)(param_1 + 0x202);
        }
        *plVar12 = (long)puVar2;
        *(undefined8 **)(param_1 + 0x202) = puVar2;
      }
      else {
        *(code **)(param_1 + 0x300) = FUN_00389288;
        *(dword **)(param_1 + 0x302) = param_1;
        *(undefined8 *)(param_1 + 0x304) = 0;
        uStack_40 = 0;
        FUN_003bca14(*(undefined8 *)(param_1 + 0x1e),param_1 + 0x2fe,&uStack_40);
        if ((uStack_40 & 1) != 0) {
          FUN_0055293c();
        }
        *(code **)(param_1 + 0x308) = FUN_00389504;
        *(dword **)(param_1 + 0x30a) = param_1;
        *(undefined8 *)(param_1 + 0x30c) = 0;
        uStack_48 = 0;
        pdStack_38 = (dword *)0x0;
        ppdVar7 = &pdStack_38;
        FUN_003b7ab0();
        *(dword ***)(param_1 + 0x30c) = ppdVar7;
        if (((ulong)pdStack_38 & 1) != 0) {
          FUN_0055293c();
        }
        plVar12 = (long *)(param_1 + 0x204);
        puVar2 = (undefined8 *)(param_1 + 0x306);
        *puVar2 = 0;
        if (*plVar12 != 0) {
          plVar12 = *(long **)(param_1 + 0x206);
        }
        *plVar12 = (long)puVar2;
        *(undefined8 **)(param_1 + 0x206) = puVar2;
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x1e);
      *(code **)(param_1 + 0x300) = FUN_00389288;
      *(dword **)(param_1 + 0x302) = param_1;
      *(undefined8 *)(param_1 + 0x304) = 0;
      if (((ulong)pdStack_38 & 1) != 0) {
        piVar10 = (int *)((long)pdStack_38 + -1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = *piVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003bca14(uVar6,param_1 + 0x2fe,&pdStack_38);
      if (((ulong)pdStack_38 & 1) != 0) {
        FUN_0055293c();
      }
      uVar6 = *(undefined8 *)(param_1 + 0x1e);
      *(code **)(param_1 + 0x308) = FUN_00389370;
      *(dword **)(param_1 + 0x30a) = param_1;
      *(undefined8 *)(param_1 + 0x30c) = 0;
      uStack_40 = *(ulong *)(param_1 + 0x26);
      if ((uStack_40 & 1) != 0) {
        piVar10 = (int *)(uStack_40 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = *piVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_003bca14(uVar6,param_1 + 0x306,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_00383c14(param_1,0x12);
    goto LAB_00388e94;
  }
  pdStack_38 = &MACH_HEADER.cputype;
  pdVar8 = param_1;
  if (*param_2 != 4) {
    FUN_00552b00(param_2,&pdStack_38);
    pdVar8 = pdStack_38;
    if (((ulong)pdStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    if ((int)param_2 == 0) goto LAB_00388e94;
  }
  pdVar1 = param_1 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pdVar1,0x10);
    if (bVar4) {
      *(long *)pdVar1 = *(long *)pdVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(code **)(param_1 + 0x2f8) = FUN_00388d70;
  *(dword **)(param_1 + 0x2fa) = param_1;
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  func_0x003c1f6c();
  uVar5 = *(ulong *)pdVar8;
  FUN_003c1e28();
  lVar9 = *(long *)(param_1 + 0x332);
  lVar11 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) &&
     (lVar11 = -0x8000000000000000, uVar5 != 0x8000000000000000 && lVar9 != -0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)(-0x8000000000000000 - uVar5) <= lVar9) goto LAB_00389204;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar9) {
      lVar11 = 0x7fffffffffffffff;
    }
    else {
LAB_00389204:
      lVar11 = lVar9 + uVar5;
    }
  }
LAB_00389208:
  func_0x003cf010(param_1 + 0x316,lVar11,param_1 + 0x2f6);
LAB_00388e94:
  pdVar8 = param_1 + 2;
  do {
    lVar11 = *(long *)pdVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
    if (bVar4) {
      *(long *)pdVar8 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 + -1 == 0) {
    FUN_003827f4(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 00389288; end: 0038936f;  */

void FUN_00389288(ulong *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*param_2 != 0) {
    return;
  }
  if (param_1[0x19d] != 0) {
    plVar1 = (long *)(param_1[0x19d] + 0x60);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = *puVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x188] = (ulong)FUN_00389624;
  param_1[0x189] = (ulong)param_1;
  param_1[0x18a] = 0;
  puVar4 = param_1;
  func_0x003c1f6c();
  uVar5 = *puVar4;
  FUN_003c1e28();
  uVar7 = param_1[0x19a];
  lVar6 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && uVar7 != 0x7fffffffffffffff) &&
     (lVar6 = -0x8000000000000000, uVar5 != 0x8000000000000000 && uVar7 != 0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)uVar7 < (long)(-0x8000000000000000 - uVar5)) goto LAB_0038934c;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < (long)uVar7) {
      lVar6 = 0x7fffffffffffffff;
      goto LAB_0038934c;
    }
    lVar6 = uVar7 + uVar5;
  }
LAB_0038934c:
  func_0x003cf010(param_1 + 0x192,lVar6,param_1 + 0x187);
  *(undefined1 *)((long)param_1 + 0xcd9) = 1;
  return;
}


