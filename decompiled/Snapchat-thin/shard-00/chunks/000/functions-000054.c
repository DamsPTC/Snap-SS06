/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10015d984; end: 10015d9ff; +[SCWeakTimer scheduledTimerWithTimeInterval:target:selector:repeats:] */

void FUN_10015d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61158(param_2);
  func_0x000107c51930(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10015da00; end: 10015daeb; +[SCWeakTimer scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:] */

void FUN_10015da00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126bc890;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c610f4();
  func_0x000107c48cf8(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_100c3b50c;
  puStack_60 = &UNK_110842e18;
  func_0x000107c61174(puVar1);
  puStack_58 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  func_0x000107c61170(puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10015daec; end: 10015dcd7; -[SCWeakTimer initWithTimeInterval:target:selector:userInfo:repeats:] */

undefined8 *
FUN_10015daec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_112702fd0;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    uVar2 = param_4;
    func_0x000107c4ce68();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4d910();
    func_0x000107c61170(uVar2);
    if ((uVar3 & 0xfffffffffffffffe) != 2) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_10015dc70;
    }
    func_0x000107c61144(auStack_78,puVar1);
    func_0x000107c61144(auStack_80,param_4);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c6111c(auStack_a0,auStack_78);
    func_0x000107c6111c(auStack_98,auStack_80);
    uStack_90 = param_5;
    uStack_88 = uVar3;
    func_0x000107c61174(param_6);
    func_0x000107c5ca5c(param_1);
    func_0x000107c61180();
    uVar5 = puVar1[1];
    puVar1[1] = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_6);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61174(puVar1);
  puVar6 = puVar1;
LAB_10015dc70:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  return puVar6;
}



/* Entry: 10015dcd8; end: 10015dd97;  */

undefined8 * FUN_10015dcd8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar2 = (undefined8 *)0x10;
  func_0x000107c60e20();
  *puVar1 = puVar2;
  puVar2[1] = 0x7fffffff00000002;
  *puVar2 = 0x100000000;
  puVar1[1] = puVar2 + 2;
  puVar1[2] = puVar2 + 2;
  puVar1[3] = 0x3eb2a456;
  return puVar1;
}



/* Entry: 10015dd98; end: 10015ddd7;  */

void FUN_10015dd98(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 8);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 0x10) = param_1;
  }
  plVar3 = (long *)param_1[2];
  *(long **)(lVar1 + 0x10) = plVar3;
  if (param_1 == (long *)*plVar3) {
    *plVar3 = lVar1;
  }
  else {
    plVar3[1] = lVar1;
  }
  *(long **)(lVar1 + 8) = param_1;
  param_1[2] = lVar1;
  return;
}



/* Entry: 10015ddd8; end: 10015de63;  */

undefined8 FUN_10015ddd8(void)

{
  return 2;
}



/* Entry: 10015de64; end: 10015df3f;  */

ulong FUN_10015de64(long param_1,uint param_2)

{
  ulong uVar1;
  int *piVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  piVar2 = (int *)**(long **)(param_1 + 0x18);
  lVar5 = (*(long **)(param_1 + 0x18))[1] - (long)piVar2 >> 2;
  uVar4 = lVar5 - 1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x10015df14);
    (*pcVar3)();
  }
  if ((int)param_2 < *piVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x10015df20);
    (*pcVar3)();
  }
  if (piVar2[uVar4] <= (int)param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x10015df2c);
    (*pcVar3)();
  }
  uVar6 = lVar5 - 2;
  if (piVar2[uVar6] != (int)uVar6) {
    if (uVar4 == 1) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = uVar4 >> 1;
      do {
        uVar1 = uVar6;
        if (piVar2[uVar6] <= (int)param_2) {
          uVar1 = uVar4;
          uVar7 = uVar6;
        }
        uVar6 = uVar7 + (uVar1 - uVar7 >> 1);
        uVar4 = uVar1;
      } while (1 < uVar1 - uVar7);
    }
    if (piVar2[uVar6 + 1] <= (int)param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0,0x10015df38);
      (*pcVar3)();
    }
    return uVar6;
  }
  if ((int)param_2 < 1) {
    return 0;
  }
  if ((int)param_2 <= piVar2[uVar6]) {
    uVar6 = (ulong)param_2;
  }
  return uVar6;
}



/* Entry: 10015df40; end: 10015e17b;  */

/* WARNING: Possible PIC construction at 0x000100220da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100220e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100220da8) */
/* WARNING: Removing unreachable block (ram,0x000100220e20) */
/* WARNING: Removing unreachable block (ram,0x000100220e28) */
/* WARNING: Removing unreachable block (ram,0x000100220db0) */

undefined8 ******* FUN_10015df40(undefined8 *******param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******unaff_x20;
  undefined8 *******unaff_x22;
  undefined8 uVar16;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  long lStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 ******ppppppuStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 ******ppppppuStack_58;
  undefined8 ******ppppppuStack_50;
  undefined8 uStack_48;
  
  pppppppuVar10 = param_1;
  (*(code *)(*param_1)[0xd])();
  if (param_1[2] == (undefined8 ******)0x0) {
    ppppppuVar15 = param_1[1];
    if (param_3 == 0) goto LAB_10015e0e4;
    if ((0xfffe0000 < param_3 - 0x10000) && ((ulong)pppppppuVar10 >> 0x10 == 0)) {
      puVar3 = (uint *)((long)ppppppuVar15 + 0x14);
      uVar8 = (uint)pppppppuVar10;
      if ((int)param_3 < 0) {
        while (((uVar13 = *puVar3, uVar13 != 0xffffffff &&
                (uVar13 == 0 || (uVar13 & 0xffff) == uVar8)) &&
               (uVar6 = (uVar13 >> 0x10) - (-param_3 & 0xffff), uVar1 = uVar8 | uVar6 * 0x10000,
               (uVar6 & 0xffff0000) == 0 && uVar1 != 0xffffffff))) {
          while (*puVar3 == uVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_10015e0e0;
          }
          ClearExclusiveLocal();
        }
      }
      else {
        uVar13 = *puVar3;
        while ((((uVar13 != 0xffffffff && (uVar13 == 0 || (uVar13 & 0xffff) == uVar8)) &&
                (uVar1 = (uVar13 >> 0x10) + (param_3 & 0xffff), uVar1 >> 0x10 == 0)) &&
               (uVar1 = uVar8 | uVar1 * 0x10000, uVar1 != 0xffffffff))) {
          while (*puVar3 == uVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_10015e0e0;
          }
          ClearExclusiveLocal();
          uVar13 = *puVar3;
        }
      }
    }
    FUN_10016181c(param_1);
  }
  puVar3 = (uint *)((long)param_1[2] + (long)pppppppuVar10 * 4);
  do {
    uVar13 = *puVar3;
    uVar8 = uVar13 + param_3;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar5) {
      *puVar3 = uVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppppppuVar15 = param_1[1] + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
    if (bVar5) {
      *ppppppuVar15 = (undefined8 *****)((long)*ppppppuVar15 + (long)(int)param_3 * (long)param_2);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppppppuVar15 = param_1[1] + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
    if (bVar5) {
      *(uint *)ppppppuVar15 = *(int *)ppppppuVar15 + param_3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((int)param_3 < 1) {
    return pppppppuVar10;
  }
  if (-1 < (int)(uVar8 ^ uVar13)) {
    return pppppppuVar10;
  }
  pppppppuVar10 = pppppppuRam000000011383aad8;
  if (pppppppuRam000000011383aad8 == (undefined8 *******)0x0) {
    pppppppuVar11 = (undefined8 *******)0x20;
    __Znwm(0x20,8);
    uStack_48 = 0x8000000000000020;
    ppppppuStack_50 = (undefined8 *******)0x1a;
    pppppppuVar11[1] = (undefined8 ******)0x706d615365766974;
    *pppppppuVar11 = (undefined8 ******)0x6167654e2e414d55;
    *(undefined8 *)((long)pppppppuVar11 + 0x12) = 0x6e6f736165522e73;
    *(undefined8 *)((long)pppppppuVar11 + 10) = 0x656c706d61536576;
    *(undefined1 *)((long)pppppppuVar11 + 0x1a) = 0;
    pppppppuVar10 = &ppppppuStack_58;
    ppppppuStack_58 = pppppppuVar11;
    func_0x000107c2cba0(pppppppuVar10,1,9,10,1);
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppppppuStack_58);
    }
  }
  pppppppuRam000000011383aad8 = pppppppuVar10;
  (*(code *)(*pppppppuRam000000011383aad8)[6])();
  if (plRam000000011383aae0 == (long *)0x0) {
    plVar12 = (long *)&UNK_10f7444f5;
    func_0x000107c2cb94(&UNK_10f7444f5,1,0x40000000,100,1);
    plRam000000011383aae0 = plVar12;
  }
  (**(code **)(*plRam000000011383aae0 + 0x30))();
  uVar8 = *(uint *)param_1[1];
  pppppppuVar10 = (undefined8 *******)&UNK_10f744513;
  uVar14 = (ulong)uVar8;
  func_0x000107c613d0();
  uVar13 = (uint)uVar14;
  if (pppppppuVar10 < (undefined8 *******)0x7ffffffffffffff8) {
    unaff_x20 = pppppppuVar10;
    if (pppppppuVar10 < (undefined8 *******)0x17) {
      uStack_48 = CONCAT17((char)pppppppuVar10,(undefined7)uStack_48);
      unaff_x22 = &ppppppuStack_58;
      if (pppppppuVar10 == (undefined8 *******)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
        ppppppuStack_58._0_1_ = 0;
        uVar13 = 1;
        uVar16 = 0x100220da8;
        pppppppuVar10 = &ppppppuStack_58;
        goto SUB_100220e44;
      }
    }
    else {
      pppppppuVar11 = (undefined8 *******)0x19;
      if (((ulong)pppppppuVar10 | 7) != 0x17) {
        pppppppuVar11 = (undefined8 *******)(((ulong)pppppppuVar10 | 7) + 1);
      }
      unaff_x22 = pppppppuVar11;
      func_0x000107c60e20();
      uStack_48 = (ulong)pppppppuVar11 | 0x8000000000000000;
      ppppppuStack_58 = unaff_x22;
      ppppppuStack_50 = pppppppuVar10;
    }
    func_0x000107c610b4(unaff_x22,&UNK_10f744513,pppppppuVar10);
    *(undefined1 *)((long)unaff_x22 + (long)pppppppuVar10) = 0;
    uVar13 = 1;
    uVar16 = 0x100220e20;
    pppppppuVar10 = &ppppppuStack_58;
  }
  else {
    uVar16 = 0x100220e44;
    func_0x000107c35c54();
  }
SUB_100220e44:
  puStack_88 = &UNK_10f744513;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar4 = *(char *)((long)pppppppuVar10 + 0x17);
  pppppppuVar11 = (undefined8 *******)*pppppppuVar10;
  if (-1 < (long)cVar4) {
    pppppppuVar11 = pppppppuVar10;
  }
  ppppppuVar15 = pppppppuVar10[1];
  if (-1 < cVar4) {
    ppppppuVar15 = (undefined8 ******)(long)cVar4;
  }
  ppppppuStack_90 = unaff_x22;
  ppppppuStack_80 = unaff_x20;
  uStack_78 = (ulong)uVar8;
  puStack_70 = &stack0xfffffffffffffff0;
  uStack_68 = uVar16;
  FUN_100121f3c(pppppppuVar11,ppppppuVar15);
  if (pppppppuVar11 == (undefined8 *******)0x0) {
    cVar4 = *(char *)((long)pppppppuVar10 + 0x17);
    pppppppuVar11 = (undefined8 *******)*pppppppuVar10;
    if (-1 < (long)cVar4) {
      pppppppuVar11 = pppppppuVar10;
    }
    ppppppuVar15 = pppppppuVar10[1];
    if (-1 < cVar4) {
      ppppppuVar15 = (undefined8 ******)(long)cVar4;
    }
    uStack_110 = 0xaaaaaaaaaaaaaaaa;
    uStack_108 = 0xaaaaaaaaaaaaaaaa;
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0x1032547698badcfe;
    uStack_100 = 0xefcdab8967452301;
    FUN_100122910(&uStack_100,pppppppuVar11,ppppppuVar15);
    FUN_100122a24(&uStack_110,&uStack_100);
    uVar8 = ((uint)uStack_110 & 0xff00ff00) >> 8 | ((uint)uStack_110 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    FUN_100123510();
    if (uVar8 == 0) {
      if ((bRam000000011383aa60 & 1) == 0) goto LAB_100220fc0;
      pppppppuVar11 = (undefined8 *******)0x11383aa48;
      goto LAB_100220eac;
    }
    pppppppuVar11 = (undefined8 *******)0x70;
    func_0x000107c60e20();
    FUN_1001245e8(pppppppuVar10);
    func_0x000100221000(pppppppuVar11,pppppppuVar10);
    pppppppuVar10 = pppppppuVar11 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
      if (bVar5) {
        *(uint *)pppppppuVar10 = *(uint *)pppppppuVar10 | uVar13 & 0xffffffbf;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_100124ac4();
    pppppppuVar10 = pppppppuVar11;
    (*(code *)(*pppppppuVar11)[4])();
    iVar9 = (int)pppppppuVar10;
  }
  else {
    pppppppuVar10 = pppppppuVar11;
    (*(code *)(*pppppppuVar11)[4])();
    iVar9 = (int)pppppppuVar10;
  }
  if (iVar9 != 4) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0,0x100220f98);
    (*pcVar7)();
  }
LAB_100220eac:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78();
LAB_100220fc0:
    iVar9 = 0x1383aa60;
    func_0x000107c60e48();
    pppppppuVar11 = (undefined8 *******)0x11383aa48;
    if (iVar9 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      func_0x000107c60e4c(0x11383aa60);
    }
  }
  return pppppppuVar11;
LAB_10015e0e0:
  ppppppuVar15 = param_1[1];
LAB_10015e0e4:
  ppppppuVar15 = ppppppuVar15 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
    if (bVar5) {
      *ppppppuVar15 = (undefined8 *****)((long)*ppppppuVar15 + (long)(int)param_3 * (long)param_2);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  ppppppuVar15 = param_1[1] + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
    if (bVar5) {
      *(uint *)ppppppuVar15 = *(int *)ppppppuVar15 + param_3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (param_1[2] != (undefined8 ******)0x0) {
    puVar3 = (uint *)((long)param_1[1] + 0x14);
    do {
      uVar8 = *puVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar5) {
        *puVar3 = 0xffffffff;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar13 = 0;
    if (uVar8 != 0xffffffff) {
      uVar13 = uVar8;
    }
    if (0xffff < uVar13) {
      piVar2 = (int *)((long)param_1[2] + (ulong)(uVar13 & 0xffff) * 4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + (uVar13 >> 0x10);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  return pppppppuVar10;
}



/* Entry: 10015e17c; end: 10015f3a7;  */

/* WARNING: Possible PIC construction at 0x00010015e1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010015e1d0) */
/* WARNING: Removing unreachable block (ram,0x00010015e1f4) */
/* WARNING: Removing unreachable block (ram,0x00010015e208) */
/* WARNING: Removing unreachable block (ram,0x00010015e21c) */
/* WARNING: Removing unreachable block (ram,0x00010015e224) */
/* WARNING: Removing unreachable block (ram,0x00010015e228) */
/* WARNING: Removing unreachable block (ram,0x00010015e234) */
/* WARNING: Removing unreachable block (ram,0x00010015e248) */
/* WARNING: Removing unreachable block (ram,0x00010015e25c) */
/* WARNING: Removing unreachable block (ram,0x00010015e26c) */
/* WARNING: Removing unreachable block (ram,0x00010015e2c8) */
/* WARNING: Removing unreachable block (ram,0x00010015e2dc) */
/* WARNING: Removing unreachable block (ram,0x00010015e2d0) */
/* WARNING: Removing unreachable block (ram,0x00010015e2d8) */
/* WARNING: Removing unreachable block (ram,0x00010015e278) */
/* WARNING: Removing unreachable block (ram,0x00010015e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010015e290) */
/* WARNING: Removing unreachable block (ram,0x00010015e2f0) */
/* WARNING: Removing unreachable block (ram,0x00010015e318) */
/* WARNING: Removing unreachable block (ram,0x00010015e344) */
/* WARNING: Removing unreachable block (ram,0x00010015e348) */
/* WARNING: Removing unreachable block (ram,0x00010015e338) */
/* WARNING: Removing unreachable block (ram,0x00010015e34c) */
/* WARNING: Removing unreachable block (ram,0x00010015e3a0) */
/* WARNING: Removing unreachable block (ram,0x00010015e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010015e394) */
/* WARNING: Removing unreachable block (ram,0x00010015e3a8) */

undefined8 * FUN_10015e17c(undefined8 *param_1)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010015d5e0();
  bVar1 = *(char *)(param_1[0x17] + 0x41) == '\x01';
  if (bVar1) {
    uStack_70 = 0xaaaaaaaaaaaaaaaa;
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_78 = 0xaaaaaaaaaaaaaaaa;
    uStack_80 = 0xaaaaaaaaaaaaaaaa;
    param_1 = &uStack_90;
  }
  else {
    func_0x00010015e59c(extraout_x8);
    if (bVar1) {
      return (undefined8 *)0x0;
    }
    func_0x000107c60e78();
  }
  *param_1 = 0;
  func_0x00010015ca30(param_1 + 1);
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10015f3a8; end: 10015f3af;  */

uint FUN_10015f3a8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *unaff_x21;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_1[1];
  puStack_20 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_1 + 0x17);
    puStack_20 = param_1;
  }
  uVar1 = unaff_x21[1];
  puVar2 = (undefined8 *)*unaff_x21;
  if (-1 < (char)*(byte *)((long)unaff_x21 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x21 + 0x17);
    puVar2 = unaff_x21;
  }
  iVar3 = (int)&puStack_20;
  FUN_100067218(&puStack_20,puVar2,uVar1);
  uVar4 = (uint)(0 < iVar3);
  if (iVar3 < 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* Entry: 10015f3b0; end: 100160b5b;  */

undefined8 FUN_10015f3b0(void)

{
  return 1;
}



/* Entry: 100160b5c; end: 100160bb7;  */

void FUN_100160b5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  uVar1 = lVar2 >> 0x3f ^ 0x7fffffffffffffff;
  if (1 < lVar2 + 0x8000000000000001U) {
    uVar1 = lVar2 / 1000;
  }
  if ((long)uVar1 < -0x7fffffff) {
    uVar1 = 0xffffffff80000000;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000100160bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,uVar1);
  return;
}



/* Entry: 100160bb8; end: 10016181b;  */

void FUN_100160bb8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  plStack_40 = (long *)(param_1 + 0x10);
  if (*plStack_40 == *(long *)(param_1 + 0x18)) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    plStack_40 = (long *)0x0;
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010016a9a8(&uStack_50,param_1 + 0x28);
    lStack_38 = 0;
    if (*(int *)(param_1 + 0x40) == 0) {
      uStack_30 = 0xffffffffffffffff;
    }
    else {
      func_0x0001001623b4(*(undefined8 *)(param_1 + 0x18));
      uStack_30 = extraout_x8;
    }
    func_0x0001001a757c(&uStack_50);
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  while( true ) {
    iVar1 = (int)&uStack_50;
    func_0x000100160cb8();
    if ((iVar1 != 0) && (uVar2 = 0, func_0x000100160cb8(), (uVar2 & 1) != 0)) break;
    if ((plStack_40 == (long *)0x0) && (lStack_38 == 0)) break;
    puVar3 = *(undefined8 **)(*plStack_40 + lStack_38 * 8);
    (**(code **)*puVar3)
              (puVar3,*(undefined8 *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x308),
               *(undefined4 *)(param_1 + 0x310));
    if (plStack_40 != (long *)0x0) {
      lStack_38 = lStack_38 + 1;
      func_0x0001001a757c(&uStack_50);
    }
  }
  func_0x000100160cf0(&uStack_80);
  func_0x000100160cf0(&uStack_50);
  return;
}



/* Entry: 10016181c; end: 100161a3f;  */

long * FUN_10016181c(long *param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long alStack_e8 [2];
  undefined4 *puStack_d8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  plVar12 = plRam00000001137f50a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_1;
  if (param_1[2] != 0) goto LAB_100161898;
  unaff_x21 = (long *)0x1137f50a0;
  if (plRam00000001137f50a0 < (long *)0x2) {
LAB_100161918:
    if (plRam00000001137f50a0 == (long *)0x0) goto code_r0x000100161920;
    ClearExclusiveLocal();
    if (plRam00000001137f50a0 == (long *)0x1) {
      unaff_x22 = 0x11336f000;
      (*(code *)PTR_FUN_11336f918)();
      uStack_78 = 1000000;
      lStack_80 = 0;
      plVar12 = plVar9;
      do {
        (*(code *)PTR_FUN_11336f918)();
        if ((long)plVar12 - (long)plVar9 < 1000) {
          func_0x000107c612dc();
        }
        else {
          lStack_70 = -0x5555555555555556;
          uStack_68 = 0xaaaaaaaaaaaaaaaa;
          uStack_58 = uStack_78;
          lStack_60 = lStack_80;
          plVar12 = &lStack_60;
          param_2 = &lStack_70;
          func_0x000107c610f0();
          iVar8 = (int)plVar12;
          while ((iVar8 == -1 && (func_0x000107c60e5c(), (int)*plVar12 == 4))) {
            uStack_58 = uStack_68;
            lStack_60 = lStack_70;
            plVar12 = &lStack_60;
            param_2 = &lStack_70;
            func_0x000107c610f0();
            iVar8 = (int)plVar12;
          }
        }
      } while (plRam00000001137f50a0 == (long *)0x1);
    }
    plVar12 = plRam00000001137f50a0;
    plVar9 = plRam00000001137f50a0;
    func_0x000107c61264();
    iVar8 = (int)plVar9;
    goto joined_r0x000100161a24;
  }
  plVar9 = plRam00000001137f50a0;
  func_0x000107c61264();
  iVar8 = (int)plVar9;
joined_r0x000100161a24:
  if (iVar8 != 0) goto LAB_100161a28;
LAB_100161870:
  lVar10 = param_1[2];
  unaff_x20 = plVar12;
  goto joined_r0x000100161a34;
code_r0x000100161920:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(0x1137f50a0,0x10);
  if (bVar6) {
    plRam00000001137f50a0 = (long *)0x1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto code_r0x000100161928;
  goto LAB_100161918;
code_r0x000100161928:
  lStack_60 = -0x5555555555555556;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(&lStack_60);
  func_0x000107c61274(&lStack_60,1);
  plVar12 = (long *)0x1137f50a8;
  param_2 = &lStack_60;
  func_0x000107c6125c(0x1137f50a8);
  func_0x000107c6126c(&lStack_60);
  plRam00000001137f50a0 = (long *)0x1137f50a8;
  plVar9 = plVar12;
  func_0x000107c61264();
  if ((int)plVar9 == 0) goto LAB_100161870;
LAB_100161a28:
  func_0x000107c2cfbc(plVar12);
  lVar10 = param_1[2];
  unaff_x20 = plVar12;
joined_r0x000100161a34:
  if (lVar10 == 0) {
    unaff_x21 = param_1 + 2;
    plVar12 = param_1;
    (**(code **)(*param_1 + 0x78))();
    *unaff_x21 = (long)plVar12;
  }
  plVar9 = unaff_x20;
  func_0x000107c61268();
LAB_100161898:
  puVar2 = (uint *)(param_1[1] + 0x14);
  do {
    uVar4 = *puVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = 0xffffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar3 = 0;
  if (uVar4 != 0xffffffff) {
    uVar3 = uVar4;
  }
  if (0xffff < uVar3) {
    piVar1 = (int *)(param_1[2] + (ulong)(uVar3 & 0xffff) * 4);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + (uVar3 >> 0x10);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar9;
  }
  func_0x000107c60e78();
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar12 = (long *)(plVar9[2] - *plVar9 >> 1);
    if (plVar12 <= param_2) {
      plVar12 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(plVar9[2] - *plVar9)) {
      plVar12 = (long *)0x3fffffffffffffff;
    }
    return plVar12;
  }
  pcStack_88 = FUN_100161a40;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c2a6e8();
  uStack_98 = 0x100161a80;
  if (param_2 <= (long *)(plVar9[2] - plVar9[1] >> 2)) {
    puVar11 = (undefined4 *)plVar9[1];
    puVar7 = puVar11;
    for (lVar10 = (long)param_2 << 2; lVar10 != 0; lVar10 = lVar10 + -4) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    plVar9[1] = (long)(puVar11 + (long)param_2);
    return plVar9;
  }
  plVar12 = plVar9;
  uStack_c0 = unaff_x22;
  plStack_b8 = unaff_x21;
  plStack_b0 = unaff_x20;
  plStack_a8 = param_1;
  puStack_a0 = (undefined1 *)&puStack_90;
  FUN_100161a40(plVar9,(long)param_2 + (plVar9[1] - *plVar9 >> 2));
  func_0x000100161bec(alStack_e8,plVar12,plVar9[1] - *plVar9 >> 2,plVar9 + 2);
  puVar7 = puStack_d8;
  for (lVar10 = (long)param_2 << 2; lVar10 != 0; lVar10 = lVar10 + -4) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puStack_d8 = puStack_d8 + (long)param_2;
  FUN_100161c3c(plVar9,alStack_e8);
  plVar12 = alStack_e8;
  FUN_100161cc4(plVar12);
  return plVar12;
}



/* Entry: 100161a40; end: 100161b47;  */

long * FUN_100161a40(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [2];
  undefined4 *puStack_58;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x3fffffffffffffff;
    }
    return plVar3;
  }
  func_0x000107c2a6e8();
  if (param_2 <= (long *)(param_1[2] - param_1[1] >> 2)) {
    puVar2 = (undefined4 *)param_1[1];
    puVar1 = puVar2;
    for (lVar4 = (long)param_2 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar2 + (long)param_2);
    return param_1;
  }
  plVar3 = param_1;
  FUN_100161a40(param_1,(long)param_2 + (param_1[1] - *param_1 >> 2));
  func_0x000100161bec(alStack_68,plVar3,param_1[1] - *param_1 >> 2,param_1 + 2);
  puVar1 = puStack_58;
  for (lVar4 = (long)param_2 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puStack_58 = puStack_58 + (long)param_2;
  FUN_100161c3c(param_1,alStack_68);
  plVar3 = alStack_68;
  FUN_100161cc4(plVar3);
  return plVar3;
}



/* Entry: 100161b48; end: 100161c33;  */

long FUN_100161b48(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x20);
  lVar1 = *plVar4;
  uVar2 = ((*(long **)(param_1 + 0x18))[1] - **(long **)(param_1 + 0x18) >> 2) - 1;
  uVar3 = *(long *)(param_1 + 0x28) - lVar1 >> 2;
  if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
    if (uVar2 < uVar3) {
      *(ulong *)(param_1 + 0x28) = lVar1 + uVar2 * 4;
      return lVar1;
    }
  }
  else {
    func_0x000100161a80(plVar4,uVar2 - uVar3);
    lVar1 = *plVar4;
  }
  return lVar1;
}



/* Entry: 100161c34; end: 100161c3b;  */

void FUN_100161c34(void)

{
  return;
}



/* Entry: 100161c3c; end: 100161cbb;  */

void FUN_100161c3c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  func_0x000107c610b4(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100161cbc; end: 100161cc3;  */

void FUN_100161cbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100161cc4; end: 100161cef;  */

long * FUN_100161cc4(long *param_1)

{
  FUN_100161cbc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100161cf0; end: 100161d0b;  */

void FUN_100161cf0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100161d0c; end: 100162c6f;  */

void FUN_100161d0c(void)

{
  return;
}



/* Entry: 100162c70; end: 100162e1b;  */

/* WARNING: Possible PIC construction at 0x000100162d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100162d84) */

undefined8 * FUN_100162c70(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_a8 [32];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaaaaaaaaaa;
  uStack_38 = 0xaaaaaaaaaaaaaaaa;
  uStack_40 = 0xaaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  FUN_10012dd4c(auStack_a8,&UNK_10f745512,&UNK_10f7454e2,0x1ae);
  FUN_10012defc(&uStack_80,auStack_a8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    puStack_88 = auStack_a8;
    func_0x000107c35cb0(&UNK_10f74523a,&puStack_88);
  }
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  iVar2 = (int)plVar1;
  lVar4 = 0;
  func_0x000107c60ec0();
  puVar3 = &uStack_80;
  func_0x0001001331dc(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)(ulong)(iVar2 == 0);
  }
  func_0x000107c60e78();
  func_0x000107c61174(*(undefined8 *)(lVar4 + 0x20));
  puVar3 = puVar3 + 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(puVar3,lVar4 + 0x28);
  return puVar3;
}



/* Entry: 100162e1c; end: 100162e47;  */

void FUN_100162e1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100162e48; end: 100162f9f; -[SCGrapheneRegistry authenticationGraphene] */

void FUN_100162e48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100162ed0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfa90 != -1) {
    FUN_10002a2fc(0x1136bfa90,&puStack_48);
  }
  uVar1 = uRam00000001136bfa88;
  func_0x000107c61174(uRam00000001136bfa88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100162fa0; end: 10016311f; -[SCGrapheneManager registerPartitionWithName:overrideNameForUpload:metricNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100162fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc8b8;
  func_0x000107c610f4(PTR_PTR_1126bc8b8);
  func_0x000107c48118();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100163120; end: 10016315f;  */

void FUN_100163120(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 100163160; end: 10016327f; -[SCGrapheneImpl initWithProcessor:partitionId:partitionName:flipper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100163160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e9830;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127272bc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127272c0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127272c4) = uVar2;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_1127272c8;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100163280; end: 100163287; -[SCGrapheneImpl increment:] */

void FUN_100163280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_increment_value__1125d8a90,param_3,1);
  return;
}



/* Entry: 100163288; end: 100163293; -[SCGrapheneImpl increment:value:] */

void FUN_100163288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf962f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enqueueMetric_type_value__1125c3260,param_3,0,param_4);
  return;
}



/* Entry: 100163294; end: 1001633bb; -[SCGrapheneImpl enqueueMetric:type:value:] */

/* WARNING: Possible PIC construction at 0x000100163344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100163374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100163398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100163378) */
/* WARNING: Removing unreachable block (ram,0x000100163348) */
/* WARNING: Removing unreachable block (ram,0x00010016339c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100163294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c44fdc(param_3);
  func_0x000107c410a4(param_3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127272bc);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127272c0);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4e3ac();
  func_0x000107c428e4(uVar2,param_2,param_4,uVar4,uVar1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1001633bc; end: 1001633c3; -[SCGrapheneMetricBase identifier] */

undefined4 FUN_1001633bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1001633c4; end: 1001633eb; -[SCGrapheneMetricBase customDimensions] */

void FUN_1001633c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001633ec; end: 1001634a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001633ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x38;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bc8a8;
    func_0x000107c610f4(PTR_PTR_1126bc8a8);
    func_0x000107c478e8();
    puVar4 = PTR_PTR_1126bc8b0;
    func_0x000107c610f4(PTR_PTR_1126bc8b0);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127272d8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4fc74();
    func_0x000107c47db8(puVar4,param_2,uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1001634a4; end: 1001635b3; -[SCNGraphenePartitionConfiguration initWithName:overrideNameForUpload:metricNames:] */

undefined1 *
FUN_1001634a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270b150;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_1001635b4(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_1001635b4(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1001635b4(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1001635b4; end: 1001635cb;  */

void FUN_1001635b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001635cc; end: 10016366b; -[SCNGrapheneClientMetricsProcessor registerPartition:] */

long * FUN_1001635cc(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_78 [72];
  
  func_0x0001001635bc();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10015144c();
  FUN_10016366c();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_78);
  FUN_100164334(auStack_78);
  func_0x00010015cacc();
  return plVar1;
}



/* Entry: 10016366c; end: 1001637db;  */

void FUN_10016366c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c4d3e4(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_58);
  uVar2 = param_2;
  func_0x000107c4e1c0(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_70);
  uVar3 = param_2;
  func_0x000107c4ce74(param_2);
  func_0x000107c61180();
  FUN_1000fbed0(&uStack_90);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  FUN_1000e30f4(&uStack_90);
  func_0x000107c61170(uVar3);
  func_0x000107c60ca0(&uStack_70);
  func_0x000107c61170(uVar2);
  func_0x000107c60ca0(&uStack_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1001637dc; end: 1001637e3; -[SCNGraphenePartitionConfiguration name] */

undefined8 FUN_1001637dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1001637e4; end: 1001637eb; -[SCNGraphenePartitionConfiguration overrideNameForUpload] */

undefined8 FUN_1001637e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1001637ec; end: 1001637f3; -[SCNGraphenePartitionConfiguration metricNames] */

undefined8 FUN_1001637ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1001637f4; end: 100163897;  */

undefined8 FUN_1001637f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c60c94(auStack_78);
  func_0x000107c60c94(auStack_60,param_2 + 0x18);
  FUN_10015bc98(auStack_48,param_2 + 0x30);
  FUN_1001639ac(uVar1,auStack_78,0);
  FUN_100164334(auStack_78);
  return uVar1;
}



/* Entry: 100163898; end: 1001638c3;  */

void FUN_100163898(void)

{
  return;
}



/* Entry: 1001638c4; end: 10016394b;  */

long FUN_1001638c4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c60c94(param_4,param_2);
    param_4 = lStack_38 + 0x18;
  }
  uStack_48 = 1;
  FUN_10007e34c(&uStack_60);
  return param_4;
}



/* Entry: 10016394c; end: 10016395f;  */

void FUN_10016394c(void)

{
  FUN_1001638c4();
  return;
}



/* Entry: 100163960; end: 10016398f;  */

void FUN_100163960(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10016394c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100163990; end: 1001639ab;  */

void FUN_100163990(void)

{
  return;
}



/* Entry: 1001639ac; end: 100163a13;  */

int FUN_1001639ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *unaff_x19;
  long unaff_x20;
  long lVar4;
  int *piStack_38;
  
  func_0x0001001639a0();
  if ((param_3 & 1) == 0) {
    FUN_100163a14();
  }
  FUN_100163a14(unaff_x19 + 6,0x20);
  lVar1 = *(long *)(unaff_x19 + 0xe);
  for (lVar4 = *(long *)(unaff_x19 + 0xc); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    FUN_100163a14(lVar4,0x40);
  }
  func_0x000100163a20(unaff_x20 + 0x18);
  piVar3 = unaff_x19 + 0x12;
  FUN_100163bc0();
  piStack_38 = piVar3;
  FUN_100163c74(unaff_x19 + 0x18,&piStack_38);
  lVar4 = *(long *)(unaff_x19 + 0x18);
  lVar1 = *(long *)(unaff_x19 + 0x1a);
  iVar2 = *unaff_x19;
  func_0x000100163eb8();
  FUN_1001642b0(unaff_x19 + 0x1e,&piStack_38,&stack0xffffffffffffffdc);
  FUN_10016432c();
  return iVar2 + (int)((ulong)(lVar1 - lVar4) >> 3) + -1;
}



/* Entry: 100163a14; end: 100163a2b;  */

/* WARNING: Removing unreachable block (ram,0x00010015b9a4) */
/* WARNING: Removing unreachable block (ram,0x00010015b9a8) */
/* WARNING: Removing unreachable block (ram,0x00010015b9cc) */
/* WARNING: Removing unreachable block (ram,0x00010015b9d8) */
/* WARNING: Removing unreachable block (ram,0x00010015b9b0) */
/* WARNING: Removing unreachable block (ram,0x00010015b9bc) */
/* WARNING: Removing unreachable block (ram,0x00010015b9e4) */
/* WARNING: Removing unreachable block (ram,0x00010015b9e8) */
/* WARNING: Removing unreachable block (ram,0x00010015b9f4) */

byte * FUN_100163a14(byte *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  int unaff_w21;
  
  pbVar8 = param_1;
  pbVar7 = *(byte **)param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  if (-1 < (char)param_1[0x17]) {
    pbVar7 = param_1;
    uVar11 = (ulong)param_1[0x17];
  }
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    FUN_10015bb44();
    bVar10 = 0x5f;
    if (unaff_w21 == 0x5f || (int)pbVar8 != 0) {
      pbVar8 = (byte *)(ulong)*pbVar7;
      FUN_10015bbd4();
      if ((int)pbVar8 == 0) {
        pbVar8 = (byte *)(long)(char)*pbVar7;
        func_0x000107c60e80();
        bVar10 = (byte)pbVar8;
        goto LAB_10015ba24;
      }
    }
    else {
LAB_10015ba24:
      *pbVar7 = bVar10;
    }
    pbVar7 = pbVar7 + 1;
  }
  bVar10 = param_1[0x17];
  uVar5 = (ulong)bVar10;
  pbVar7 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar11 = uVar9;
  pbVar8 = pbVar7;
  if (-1 < (char)bVar10) {
    uVar11 = uVar5;
    pbVar8 = param_1;
  }
  pbVar4 = pbVar8 + uVar11;
  bVar6 = 0x5f;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar8;
    pbVar3 = pbVar8;
    if (bVar1 == 0x5f && bVar6 == bVar1) goto LAB_10015ba88;
    pbVar8 = pbVar8 + 1;
    bVar6 = bVar1;
  }
LAB_10015babc:
  if (-1 < (char)bVar10) {
    uVar9 = uVar5;
    pbVar7 = param_1;
  }
  pbVar8 = param_1;
  FUN_10015bbdc(param_1,pbVar4,pbVar7 + uVar9);
  bVar10 = param_1[0x17];
  if ((char)bVar10 < 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    if (uVar11 <= param_2) {
      return pbVar8;
    }
    pbVar8 = *(byte **)param_1;
  }
  else {
    if ((uint)(int)(char)bVar10 <= param_2) {
      return pbVar8;
    }
    uVar11 = (ulong)(int)(char)bVar10;
    pbVar8 = param_1;
  }
  pbVar7 = pbVar8 + param_2;
  pbVar4 = param_1;
  if ((char)param_1[0x17] < '\0') {
    pbVar4 = *(byte **)param_1;
  }
  func_0x000107c60c4c(param_1,(long)pbVar7 - (long)pbVar4,pbVar8 + (uVar11 - (long)pbVar7));
  return pbVar7;
LAB_10015ba88:
  while (pbVar8 = pbVar8 + 1, pbVar8 != pbVar4) {
    bVar10 = *pbVar8;
    bVar2 = bVar6 != 0x5f;
    bVar6 = bVar10;
    if (bVar2 || bVar10 != 0x5f) {
      *pbVar3 = bVar10;
      pbVar3 = pbVar3 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar5 = (ulong)bVar10;
  pbVar7 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  pbVar4 = pbVar3;
  goto LAB_10015babc;
}



/* Entry: 100163a2c; end: 100163acf;  */

int FUN_100163a2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int *unaff_x19;
  int *apiStack_38 [2];
  int iStack_24;
  
  func_0x000100163a20();
  piVar2 = unaff_x19 + 0x12;
  FUN_100163bc0(piVar2,param_2);
  apiStack_38[0] = piVar2;
  FUN_100163c74(unaff_x19 + 0x18,apiStack_38);
  iStack_24 = *unaff_x19 +
              (int)((ulong)(*(long *)(unaff_x19 + 0x1a) - *(long *)(unaff_x19 + 0x18)) >> 3) + -1;
  func_0x000100163eb8();
  FUN_1001642b0(unaff_x19 + 0x1e,apiStack_38,&iStack_24);
  iVar1 = iStack_24;
  FUN_10016432c();
  return iVar1;
}



/* Entry: 100163ad0; end: 100163aff;  */

long FUN_100163ad0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100163ad0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100163b00; end: 100163b27;  */

long FUN_100163b00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100163ad0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100163b28; end: 100163bbf;  */

long * FUN_100163b28(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long alStack_50 [2];
  long *plStack_40;
  long lStack_38;
  
  plVar1 = alStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100163b00(alStack_50,1);
  *plStack_40 = param_2;
  plStack_40[1] = param_3;
  func_0x000100163c10(plStack_40 + 2,param_4);
  plVar2 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x000100163c64();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  plVar2 = plVar1;
  FUN_100163b28();
  lVar3 = *plVar1;
  *plVar2 = lVar3;
  plVar2[1] = (long)plVar1;
  *(long **)(lVar3 + 8) = plVar2;
  *plVar1 = (long)plVar2;
  plVar1[2] = plVar1[2] + 1;
  return plVar2 + 2;
}



/* Entry: 100163bc0; end: 100163c07;  */

long * FUN_100163bc0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_100163b28(param_1,0,0,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return plVar1 + 2;
}



/* Entry: 100163c08; end: 100163c73;  */

void FUN_100163c08(void)

{
  return;
}



/* Entry: 100163c74; end: 100163cb7;  */

undefined8 * FUN_100163c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_100163cf8();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 100163cb8; end: 100163cf7;  */

undefined8 * FUN_100163cb8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar4 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar4 <= param_2) {
      puVar4 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar4 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar4;
  }
  func_0x000107c3020c();
  plVar3 = param_1;
  FUN_100163cb8();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plStack_68 = param_1 + 2;
  plStack_48 = plStack_68;
  if (plVar3 == (long *)0x0) {
    plStack_68 = (long *)0x0;
  }
  else {
    FUN_100163dc4();
  }
  puStack_60 = (undefined8 *)((long)plStack_68 + (lVar2 - lVar1));
  plStack_50 = plStack_68 + (long)plVar3;
  puStack_58 = puStack_60 + 1;
  *puStack_60 = *param_2;
  FUN_100163de8(param_1,&plStack_68);
  puVar4 = (undefined8 *)param_1[1];
  FUN_100163e70(&plStack_68);
  return puVar4;
}



/* Entry: 100163cf8; end: 100163da7;  */

long FUN_100163cf8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_100163cb8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_100163dc4();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_100163de8(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_100163e70(&plStack_58);
  return lVar3;
}



/* Entry: 100163da8; end: 100163dc3;  */

void FUN_100163da8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_100163da8();
  return;
}



/* Entry: 100163dc4; end: 100163de7;  */

void FUN_100163dc4(void)

{
  FUN_100163da8();
  return;
}



/* Entry: 100163de8; end: 100163e67;  */

void FUN_100163de8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  func_0x000107c610b4(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100163e68; end: 100163e6f;  */

void FUN_100163e68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100163e70; end: 100163e9b;  */

long * FUN_100163e70(long *param_1)

{
  FUN_100163e68();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100163e9c; end: 100163edb;  */

void FUN_100163e9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100163edc; end: 1001642af;  */

undefined1  [16] FUN_100163edc(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  ulong uVar15;
  undefined1 auVar16 [16];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar8 = param_1 + 3;
  func_0x000100163ed0();
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    uVar15 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar15) == 0) {
      unaff_x26 = (long *)(uVar15 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar14 <= plVar8) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar14;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar7 * (long)plVar14);
      }
    }
    plVar13 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_100163fac;
          plVar5 = (long *)plVar13[1];
          if (plVar5 != plVar8) break;
          plVar5 = param_1 + 4;
          func_0x00010728905c(plVar5,plVar13 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_100164270;
          }
        }
        if (((ulong)plVar14 & uVar15) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar15);
        }
        else if (plVar14 <= plVar5) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar5 / (ulong)plVar14;
          }
          plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar14);
        }
      } while (plVar5 == unaff_x26);
    }
  }
LAB_100163fac:
  uVar1 = *param_4;
  plVar5 = param_1 + 2;
  plVar13 = (long *)0x28;
  func_0x000107c60e20();
  uStack_68 = 1;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  lVar3 = *param_3;
  plVar13[3] = param_3[1];
  plVar13[2] = lVar3;
  *(undefined4 *)(plVar13 + 4) = uVar1;
  plStack_70 = plVar5;
  if ((plVar14 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar14)) goto LAB_1001641f4;
  uVar15 = 1;
  if ((long *)0x2 < plVar14) {
    uVar15 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
  }
  plVar6 = (long *)(uVar15 | (long)plVar14 << 1);
  plVar14 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar14) {
    plVar6 = plVar14;
  }
  plStack_78 = plVar13;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    func_0x000107c60c44();
  }
  plVar14 = (long *)param_1[1];
  if (plVar14 < plVar6) {
LAB_100164060:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10016429c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    func_0x000107c60e20(lVar3);
    FUN_1001642e8(param_1,lVar3);
    param_1[1] = (long)plVar6;
    lVar3 = *param_1;
    for (plVar14 = (long *)0x0; plVar6 != plVar14; plVar14 = (long *)((long)plVar14 + 1)) {
      *(undefined8 *)(lVar3 + (long)plVar14 * 8) = 0;
    }
    plVar9 = (long *)*plVar5;
    plVar14 = plVar6;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar7 = (long)plVar6 - 1;
      uVar15 = 0;
      if (plVar6 != (long *)0x0) {
        uVar15 = (ulong)plVar10 / (ulong)plVar6;
      }
      plVar11 = plVar10;
      if (plVar6 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar15 * (long)plVar6);
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar7);
      }
      *(long **)(lVar3 + (long)plVar11 * 8) = plVar5;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar7);
        }
        else if (plVar6 <= plVar12) {
          uVar15 = 0;
          if (plVar6 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar6);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (plVar6 < plVar14) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 - 1) & 0x3fU));
    }
    if (plVar6 <= plVar9) {
      plVar6 = plVar9;
    }
    if (plVar6 < plVar14) {
      if (plVar6 != (long *)0x0) goto LAB_100164060;
      FUN_1001642e8(param_1,0);
      param_1[1] = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar14 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x26 = plVar8;
    if (plVar14 <= plVar8) {
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar8 / (ulong)plVar14;
      }
      unaff_x26 = (long *)((long)plVar8 - uVar15 * (long)plVar14);
    }
  }
LAB_1001641f4:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar13 = *plVar5;
    *plVar5 = (long)plVar13;
    *(long **)(lVar3 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar8) {
        uVar15 = 0;
        if (plVar14 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar14;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar14);
      }
      *(long **)(lVar3 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
  }
  plStack_78 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_100164300(&plStack_78);
  uVar4 = 1;
LAB_100164270:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = plVar13;
  return auVar16;
}



/* Entry: 1001642b0; end: 1001642e7;  */

void FUN_1001642b0(long param_1,ulong param_2,undefined4 *param_3)

{
  FUN_100163edc(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x20) = *param_3;
  }
  return;
}



/* Entry: 1001642e8; end: 1001642ff;  */

void FUN_1001642e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100164300; end: 10016432b;  */

long * FUN_100164300(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10016432c; end: 100164333;  */

void FUN_10016432c(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 100164334; end: 100164363;  */

/* WARNING: Possible PIC construction at 0x000100164350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100164354) */

void FUN_100164334(long param_1)

{
  FUN_1000e30f4(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 100164364; end: 10016436b;  */

void FUN_100164364(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10016436c; end: 10016439f;  */

void FUN_10016436c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1001643a0; end: 1001643a7;  */

void FUN_1001643a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1001643a8; end: 1001643ef; -[SCGraphenePartitionId initWithPartitionId:] */

void FUN_1001643a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9828;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1001643f0; end: 100164463; -[SCNGraphenePartitionConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100164408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010016440c) */

void FUN_1001643f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100164464; end: 10016446b; -[SCGraphenePartitionId partitionId] */

undefined4 FUN_100164464(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10016446c; end: 10016447b;  */

undefined1 * FUN_10016446c(undefined8 param_1)

{
  undefined8 *unaff_x27;
  undefined8 in_register_00005008;
  
  unaff_x27[3] = in_register_00005008;
  unaff_x27[2] = param_1;
  unaff_x27[5] = in_register_00005008;
  unaff_x27[4] = param_1;
  unaff_x27[1] = in_register_00005008;
  *unaff_x27 = param_1;
  return &stack0x00000090;
}



/* Entry: 10016447c; end: 100164677;  */

/* WARNING: Removing unreachable block (ram,0x000100164658) */

undefined8 FUN_10016447c(short *param_1)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psStack_68;
  short *psStack_60;
  
  lVar5 = (long)*(char *)((long)param_1 + 0x17);
  psVar8 = param_1;
  if (lVar5 < 0) {
    lVar5 = *(long *)(param_1 + 4);
    psVar8 = *(short **)param_1;
  }
  if (1 < lVar5) {
    psVar4 = (short *)((long)psVar8 + lVar5);
    psVar3 = psVar8;
    do {
      func_0x000107c610ac(psVar3,0x2e,lVar5 + -1);
      if (psVar3 == (short *)0x0) {
        return 0;
      }
      if (*psVar3 == 0x2e2e) {
        if (psVar3 == psVar4) {
          return 0;
        }
        if ((long)psVar3 - (long)psVar8 == -1) {
          return 0;
        }
        func_0x000107c2cab0(&psStack_68,param_1);
        psVar8 = psStack_68;
        if (psStack_68 == psStack_60) {
          uVar7 = 0;
          if (psStack_68 == (short *)0x0) {
            return 0;
          }
        }
        else {
          do {
            lVar5 = (long)*(char *)((long)psVar8 + 0x17);
            psVar3 = psVar8;
            lVar2 = lVar5;
            if (lVar5 < 0) {
              psVar3 = *(short **)psVar8;
              lVar2 = *(long *)(psVar8 + 4);
            }
            if (lVar2 != 0) {
              lVar6 = 0;
              do {
                if (0x3f < (ulong)*(byte *)((long)psVar3 + lVar6) ||
                    (1L << ((ulong)*(byte *)((long)psVar3 + lVar6) & 0x3f) & 0x400100002600U) == 0)
                {
                  if (lVar6 != -1) goto LAB_100164570;
                  break;
                }
                lVar6 = lVar6 + 1;
              } while (lVar2 != lVar6);
            }
            psVar3 = psVar8;
            if (*(char *)((long)psVar8 + 0x17) < '\0') {
              lVar5 = *(long *)(psVar8 + 4);
              psVar3 = *(short **)psVar8;
            }
            if (1 < lVar5) {
              psVar1 = (short *)((long)psVar3 + lVar5);
              psVar4 = psVar3;
              while (func_0x000107c610ac(psVar4,0x2e,lVar5 + -1), psVar4 != (short *)0x0) {
                if (*psVar4 == 0x2e2e) {
                  if ((psVar4 != psVar1) && ((long)psVar4 - (long)psVar3 != -1)) {
                    uVar7 = 1;
                    goto LAB_10016463c;
                  }
                  break;
                }
                psVar4 = (short *)((long)psVar4 + 1);
                lVar5 = (long)psVar1 - (long)psVar4;
                if (lVar5 < 2) break;
              }
            }
LAB_100164570:
            psVar8 = psVar8 + 0xc;
          } while (psVar8 != psStack_60);
          uVar7 = 0;
LAB_10016463c:
          if (psStack_68 == (short *)0x0) {
            return uVar7;
          }
          do {
            psStack_60 = psStack_60 + -0xc;
          } while (psStack_60 != psStack_68);
        }
        func_0x000107c60e14(psStack_68);
        return uVar7;
      }
      psVar3 = (short *)((long)psVar3 + 1);
      lVar5 = (long)psVar4 - (long)psVar3;
    } while (1 < lVar5);
  }
  return 0;
}



/* Entry: 100164678; end: 100164713;  */

undefined8 * FUN_100164678(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_DAT_110cd4978;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  puVar1 = param_2;
  FUN_10016447c();
  if ((int)puVar1 != 0) {
    func_0x000107c60e5c();
    *puVar1 = 0xd;
    *(undefined4 *)((long)param_1 + 0x2c) = 0xfffffffb;
    return param_1;
  }
  FUN_100164714(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 100164714; end: 100164a2b;  */

long * FUN_100164714(long param_1,long **param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong unaff_x23;
  undefined8 unaff_x24;
  long *plVar11;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  ulong uStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long *aplStack_c8 [4];
  long **pplStack_a8;
  long alStack_a0 [11];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_a0[7] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[6] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[9] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[8] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[3] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[2] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[5] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[4] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[1] = 0xaaaaaaaaaaaaaaaa;
  alStack_a0[0] = -0x5555555555555556;
  pplVar5 = aplStack_c8;
  FUN_10012dd4c(aplStack_c8,&UNK_10f7454a9,&UNK_10f74542c,0x1d0);
  plVar11 = alStack_a0;
  uVar7 = 0;
  uVar8 = 0;
  FUN_10012defc(plVar11,aplStack_c8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    plVar11 = (long *)&UNK_10f74523a;
    pplStack_a8 = pplVar5;
    func_0x000107c35cb0(&UNK_10f74523a,&pplStack_a8);
  }
  uVar10 = (uint)param_3;
  uVar1 = (int)(uVar10 << 0x1e) >> 0x1f & 0xa00;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((param_3 & 8) != 0) {
    uVar1 = 0x600;
  }
  if ((param_3 & 0x10) != 0) {
    uVar1 = 0x400;
  }
  if (uVar1 == 0 && (param_3 & 5) == 0) {
    func_0x000107c60e5c();
    *(undefined4 *)plVar11 = 0x66;
LAB_1001649a0:
    uVar9 = 0xffffffff;
    pplVar6 = pplVar5;
LAB_1001649a4:
    *(undefined4 *)(param_1 + 0x2c) = uVar9;
  }
  else {
    uVar3 = 2;
    if (((uVar10 ^ 0xffffffff) & 0x60) != 0) {
      uVar3 = uVar10 >> 6 & 1;
    }
    uVar2 = uVar1 | uVar3;
    if ((param_3 & 0x10000) != 0) {
      uVar2 = uVar1 | uVar3 | 0x20004;
    }
    uVar1 = uVar2;
    if ((param_3 & 0x80) != 0) {
      uVar1 = uVar2 | 9;
    }
    uVar3 = uVar2 | 10;
    if (((uVar10 ^ 0xffffffff) & 0xa0) != 0) {
      uVar3 = uVar1;
    }
    unaff_x23 = (ulong)uVar3;
    do {
      pplVar5 = (long **)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        pplVar5 = param_2;
      }
      uStack_d0 = 0x180;
      func_0x000107c611c4(pplVar5,unaff_x23);
      iVar4 = (int)pplVar5;
      pplVar6 = pplVar5;
    } while ((iVar4 == -1) && (func_0x000107c60e5c(), *(int *)pplVar6 == 4));
    if (((uVar10 >> 2 & 1) != 0) && (iVar4 < 0)) {
      do {
        pplVar6 = (long **)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          pplVar6 = param_2;
        }
        uStack_d0 = 0x180;
        func_0x000107c611c4(pplVar6,uVar3 | 0x200);
        if ((int)pplVar6 != -1) {
          pplVar5 = pplVar6;
          if (-1 < (int)pplVar6) {
            *(undefined1 *)(param_1 + 0x30) = 1;
            if ((param_3 & 10) == 0) goto LAB_1001648d0;
            goto LAB_1001648c8;
          }
          break;
        }
        func_0x000107c60e5c();
      } while (*(int *)pplVar6 == 4);
LAB_100164960:
      unaff_x24 = 0x180;
      func_0x000107c60e5c();
      uVar1 = *(int *)pplVar6 - 1;
      if ((0x1d < uVar1) || ((0x2ad99813U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
        func_0x000100220d50(&UNK_10f745488);
        goto LAB_1001649a0;
      }
      uVar9 = *(undefined4 *)(&UNK_10e574918 + (ulong)uVar1 * 4);
      pplVar6 = pplVar5;
      goto LAB_1001649a4;
    }
    if (iVar4 < 0) goto LAB_100164960;
    pplVar6 = pplVar5;
    if ((param_3 & 10) != 0) {
LAB_1001648c8:
      *(undefined1 *)(param_1 + 0x30) = 1;
      pplVar6 = pplVar5;
    }
LAB_1001648d0:
    unaff_x24 = 0x180;
    if ((uVar10 >> 0xd & 1) != 0) {
      pplVar5 = (long **)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        pplVar5 = param_2;
      }
      func_0x000107c616a4(pplVar5);
    }
    *(byte *)(param_1 + 0x31) = (byte)(uVar10 >> 10) & 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar1 = *(uint *)(param_1 + 8);
    plVar11 = (long *)(ulong)uVar1;
    if (uVar1 != 0xffffffff) {
      if (uVar1 == (uint)pplVar6) goto LAB_100164a28;
      func_0x000107c60f10();
      if ((((int)plVar11 != 0) &&
          ((((int)plVar11 != -1 || (func_0x000107c60e5c(), (int)*plVar11 != 4)) &&
           (func_0x000107c60e5c(), (int)*plVar11 == 9)))) &&
         (func_0x000107c2ca5c(aplStack_c8,&UNK_10f74421b,0x2b), aplStack_c8[0] != (long *)0x0)) {
        (**(code **)(*aplStack_c8[0] + 8))();
      }
    }
    *(uint *)(param_1 + 8) = (uint)pplVar6;
  }
  plVar11 = alStack_a0;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar11;
  }
  func_0x000107c60e78();
LAB_100164a28:
  func_0x000107c60ebc();
  pcStack_d8 = FUN_100164a2c;
  uStack_110 = unaff_x24;
  uStack_108 = unaff_x23;
  pplStack_100 = pplVar6;
  pplStack_f8 = param_2;
  uStack_f0 = param_3;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_6);
  plVar11 = (long *)plVar11[3];
  FUN_10015144c();
  FUN_1000fbed0();
  (**(code **)(*plVar11 + 0x28))(plVar11,uVar7,uVar8,param_5,auStack_128,param_7);
  FUN_1000e30f4(auStack_128);
  func_0x00010015cacc();
  return plVar11;
}



/* Entry: 100164a2c; end: 100164aff; -[SCNGrapheneClientMetricsProcessor enqueue:partition:metric:dimensions:value:] */

long * FUN_100164a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174(param_6);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10015144c();
  FUN_1000fbed0();
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4,param_5,auStack_58,param_7);
  FUN_1000e30f4(auStack_58);
  func_0x00010015cacc();
  return plVar1;
}



/* Entry: 100164b00; end: 100164bff;  */

int FUN_100164b00(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  undefined8 uStack_58;
  
  do {
    func_0x00010007e3b0();
  } while (extraout_w10 != 0);
  lVar3 = *(long *)(param_1 + 0x60);
  FUN_100078460();
  uVar2 = 0x38;
  func_0x000107c60e20();
  FUN_100164c28();
  uStack_58 = uVar2;
  func_0x000107c60d88(lVar3);
  uStack_58 = 0;
  FUN_100165030(*(long *)(lVar3 + 0x40) + (ulong)*(uint *)(lVar3 + 0x48) * 8,uVar2);
  func_0x00010007e57c();
  if ((bool)in_ZR) {
    iVar1 = 0;
    if (extraout_w10_00 + 1 != extraout_w8) {
      iVar1 = extraout_w10_00 + 1;
    }
    *(int *)(lVar3 + 0x4c) = iVar1;
  }
  func_0x00010007e59c();
  func_0x000107c60d8c(lVar3);
  FUN_100165048(&uStack_58);
  return extraout_w9 - extraout_w10_01 * extraout_w8_00;
}



/* Entry: 100164c00; end: 100164c27;  */

long * FUN_100164c00(long *param_1,ulong param_2,long param_3,undefined4 param_4,undefined4 param_5,
                    long *param_6,long param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  if ((ulong)((param_1[1] - *param_1) / 0x18) <= param_2) {
    func_0x000107c30238();
    lVar4 = 0;
    param_1[2] = 0;
    param_1[3] = param_7;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = param_3;
    *(undefined4 *)(param_1 + 5) = param_4;
    *(undefined4 *)((long)param_1 + 0x2c) = param_5;
    *(int *)(param_1 + 6) = (int)param_2;
    uVar3 = (uint)((ulong)((param_6[1] - *param_6) / 0x18) >> 1);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (5 < (int)uVar3) {
      uVar3 = 6;
    }
    for (; (ulong)uVar3 << 1 != lVar4; lVar4 = lVar4 + 2) {
      plVar1 = param_6;
      FUN_100164c00(param_6,lVar4);
      plVar2 = param_6;
      FUN_100164c00(param_6,lVar4 + 1);
      FUN_100164cf8(param_1,plVar1,plVar2);
    }
    return param_1;
  }
  return (long *)(*param_1 + param_2 * 0x18);
}



/* Entry: 100164c28; end: 100164ceb;  */

undefined8 *
FUN_100164c28(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,long *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  param_1[2] = 0;
  param_1[3] = param_7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 6) = param_2;
  uVar3 = (uint)((ulong)((param_6[1] - *param_6) / 0x18) >> 1);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  if (5 < (int)uVar3) {
    uVar3 = 6;
  }
  for (; (ulong)uVar3 << 1 != lVar4; lVar4 = lVar4 + 2) {
    plVar1 = param_6;
    FUN_100164c00(param_6,lVar4);
    plVar2 = param_6;
    FUN_100164c00(param_6,lVar4 + 1);
    FUN_100164cf8(param_1,plVar1,plVar2);
  }
  return param_1;
}



/* Entry: 100164cec; end: 100164cf7;  */

long FUN_100164cec(long param_1,undefined8 param_2,long param_3)

{
  return param_1 + param_3 * 0x18;
}



/* Entry: 100164cf8; end: 100164d37;  */

long FUN_100164cf8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1005f499c();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_100164d88();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 100164d38; end: 100164d87;  */

ulong FUN_100164d38(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (param_2 < 0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      uVar3 = 0x555555555555555;
    }
    return uVar3;
  }
  func_0x000105394cf0();
  plVar2 = param_1;
  FUN_100164d38();
  func_0x000100164e8c(auStack_68,plVar2,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_100164ee0(lStack_58,param_2,param_3);
  lStack_58 = lStack_58 + 0x30;
  FUN_100164f34(param_1,auStack_68);
  uVar3 = param_1[1];
  FUN_100164fd0(auStack_68);
  return uVar3;
}



/* Entry: 100164d88; end: 100164e3b;  */

long FUN_100164d88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_100164d38(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x000100164e8c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_100164ee0(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x30;
  FUN_100164f34(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_100164fd0(auStack_58);
  return lVar2;
}



/* Entry: 100164e3c; end: 100164e67;  */

void FUN_100164e3c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_100164e3c();
  return;
}



/* Entry: 100164e68; end: 100164ed7;  */

void FUN_100164e68(void)

{
  FUN_100164e3c();
  return;
}



/* Entry: 100164ed8; end: 100164edf;  */

void FUN_100164ed8(void)

{
  return;
}



/* Entry: 100164ee0; end: 100164f27;  */

long FUN_100164ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  func_0x000107c60c94(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 100164f28; end: 100164f33;  */

void FUN_100164f28(void)

{
  return;
}



/* Entry: 100164f34; end: 100164f77;  */

void FUN_100164f34(long *param_1,long param_2)

{
  FUN_100164f28();
  func_0x000107c610b4(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30);
  FUN_100164f78();
  return;
}



/* Entry: 100164f78; end: 100164fcf;  */

void FUN_100164f78(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 100164fd0; end: 10016502f;  */

long * FUN_100164fd0(long *param_1)

{
  func_0x000100164fc8();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100165030; end: 100165047;  */

void FUN_100165030(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c280f8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100165048; end: 100165067;  */

void FUN_100165048(void)

{
  func_0x0001000785d0();
  FUN_100165030();
  return;
}



/* Entry: 100165068; end: 10016506f; -[SCGrapheneMetricBase name] */

undefined8 FUN_100165068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100165070; end: 10016517b; -[SCUserSession initWithUserId:username:authToken:lagunaId:] */

undefined1 *
FUN_100165070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270e200;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}


