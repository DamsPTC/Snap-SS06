/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a464390; end: 10a4643c3;  */

long FUN_10a464390(long param_1)

{
  func_0x00010a004dac(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a4643c4; end: 10a46444f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a4643c4(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  plVar5 = (long *)*param_2;
  uVar2 = param_2[1];
  uVar1 = uVar2;
  plVar4 = plVar5;
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
    plVar4 = param_2;
  }
  if (uVar1 != 0) {
    do {
      uVar6 = uVar1;
      if (uVar6 == 0) goto LAB_10a464420;
      uVar1 = uVar6 - 1;
    } while (*(char *)((long)plVar4 + (uVar6 - 1)) != '/');
    if (uVar6 - 1 != 0xffffffffffffffff) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (param_1,param_2,uVar6,0xffffffffffffffff,&stack0xffffffffffffffef);
      return;
    }
  }
LAB_10a464420:
  if (-1 < (char)bVar3) {
    lVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar7;
    param_1[2] = param_2[2];
    return;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,plVar5,uVar2 + 1);
    return;
  }
  if (uVar2 < 0x7ffffffffffffff7) {
    plVar5 = (long *)0x19;
    if ((uVar2 | 7) != 0x17) {
      plVar5 = (long *)((uVar2 | 7) + 1);
    }
  }
  else {
    func_0x000104bd47d4();
  }
  func_0x000107c60e20(plVar5);
  return;
}



/* Entry: 10a464450; end: 10a46450b;  */

void FUN_10a464450(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 0xb8);
  if ((*(byte *)(lVar2 + 0x1e0) & 1) != 0) {
    uStack_40 = *(undefined8 *)(lVar2 + 0x50);
    func_0x00010989a870(&lStack_38,&uStack_40,1);
    if (lStack_38 != lStack_30) {
      param_2 = param_2 + 0x238;
      FUN_10a48ff28();
      if (param_2 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        lVar2 = *(long *)(param_2 + 0x30);
        if (lVar2 != 0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          param_1[1] = lVar2;
          if (lVar2 != 0) {
            *param_1 = *(undefined8 *)(param_2 + 0x28);
          }
        }
        FUN_10a472960(&lStack_38);
        return;
      }
    }
    FUN_10a00946c(&UNK_10f659c4f);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4644f4);
  (*pcVar1)();
}



/* Entry: 10a46450c; end: 10a464a73;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a46450c(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long *******ppppppplVar4;
  code *pcVar5;
  long ******pppppplVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *****ppppplVar13;
  long lVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long lVar17;
  long *****unaff_x24;
  long lVar18;
  float fVar19;
  undefined1 auStack_70 [8];
  int iStack_68;
  undefined8 *puStack_60;
  long *******ppppppplStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar7 = (long *)0x1;
  FUN_10a2163b8(*(undefined8 *)(*param_2 + 0xe0));
  if (plVar7 != (long *)0x0) {
    lVar18 = *plVar7;
    unaff_x24 = (long *****)0x0;
    if (lVar18 != 0) {
      iVar2 = *(int *)(lVar18 + 0x20);
      *(undefined8 *)(param_1 + 0x1f8) = *param_3;
      (*(code *)**(undefined8 **)(param_1 + 0x200))(param_1 + 0x200);
      (**(code **)(param_3[1] + 0x10))(param_1 + 0x200,param_3 + 1);
      if (iVar2 != 1) {
        return;
      }
      plVar7 = (long *)(lVar18 + 0x60);
      if ((*(byte *)(lVar18 + 0x58) >> 1 & 1) != 0) {
        cVar3 = *(char *)(lVar18 + 0x3f);
        lVar1 = *(long *)(lVar18 + 0x28);
        if (-1 < (long)cVar3) {
          lVar1 = lVar18 + 0x28;
        }
        lVar14 = *(long *)(lVar18 + 0x30);
        if (-1 < cVar3) {
          lVar14 = (long)cVar3;
        }
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa20) + 0x18) < 0xb1) {
          return;
        }
        lVar17 = *param_2;
        lVar8 = lVar17 + 0x128;
        lVar9 = (long)*(char *)(lVar18 + 0x77);
        if (lVar9 < 0) {
          lVar9 = *(long *)(lVar18 + 0x68);
          if (lVar9 == 0) goto LAB_10a464834;
          plVar7 = (long *)*plVar7;
        }
        else if (*(char *)(lVar18 + 0x77) == '\0') goto LAB_10a464834;
        uVar10 = *(ulong *)(lVar17 + 0x130);
        lVar18 = *(long *)(lVar17 + 0x128);
        if (-1 < (char)*(byte *)(lVar17 + 0x13f)) {
          uVar10 = (ulong)*(byte *)(lVar17 + 0x13f);
          lVar18 = lVar8;
        }
        ppppppplStack_58 = (long *******)0x5f00000000;
        func_0x00010989b250(*(undefined8 *)(param_1 + 0xd0),plVar7,lVar9,lVar18,uVar10,
                            &ppppppplStack_58);
LAB_10a464834:
        uVar10 = *(ulong *)(lVar17 + 0x130);
        lVar18 = *(long *)(lVar17 + 0x128);
        if (-1 < (char)*(byte *)(lVar17 + 0x13f)) {
          uVar10 = (ulong)*(byte *)(lVar17 + 0x13f);
          lVar18 = lVar8;
        }
        func_0x00010989b104(&ppppppplStack_58,*(undefined8 *)(param_1 + 0xd0),lVar1,lVar14,lVar18,
                            uVar10);
        FUN_10a462790(*(undefined8 *)(param_1 + 0xe0),lVar8,&ppppppplStack_58);
        FUN_10a462340(param_1);
        if ((int)plStack_50 < 4) {
          return;
        }
        if (uStack_48 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*uStack_48)();
        return;
      }
      if ((*(byte *)(lVar18 + 0x58) >> 2 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a464a50);
        (*pcVar5)();
      }
      lVar14 = *param_2;
      lVar1 = lVar14 + 0x128;
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa20) + 0x18) < 0xb1) {
        FUN_10a462990(param_1,lVar18 + 0x28,lVar1,0,0);
        return;
      }
      lVar8 = (long)*(char *)(lVar18 + 0x77);
      if (lVar8 < 0) {
        lVar8 = *(long *)(lVar18 + 0x68);
        if (lVar8 == 0) goto LAB_10a4648d8;
        plVar7 = (long *)*plVar7;
      }
      else if (*(char *)(lVar18 + 0x77) == '\0') goto LAB_10a4648d8;
      uVar10 = *(ulong *)(lVar14 + 0x130);
      lVar18 = *(long *)(lVar14 + 0x128);
      if (-1 < (char)*(byte *)(lVar14 + 0x13f)) {
        uVar10 = (ulong)*(byte *)(lVar14 + 0x13f);
        lVar18 = lVar1;
      }
      ppppppplStack_58 = (long *******)0x5f00000000;
      func_0x00010989b250(*(undefined8 *)(param_1 + 0xd0),plVar7,lVar8,lVar18,uVar10,
                          &ppppppplStack_58);
LAB_10a4648d8:
      func_0x00010b0ae4b8(&ppppppplStack_58,&UNK_10f65adb7,0x88);
      ppppppplVar4 = ppppppplStack_58;
      if (-1 < (long)uStack_48) {
        plStack_50 = (long *)((ulong)uStack_48 >> 0x38);
        ppppppplVar4 = (long *******)&ppppppplStack_58;
      }
      uVar10 = *(ulong *)(lVar14 + 0x130);
      lVar18 = *(long *)(lVar14 + 0x128);
      if (-1 < (char)*(byte *)(lVar14 + 0x13f)) {
        uVar10 = (ulong)*(byte *)(lVar14 + 0x13f);
        lVar18 = lVar1;
      }
      func_0x00010989ace0(auStack_70,*(undefined8 *)(param_1 + 0xd0),ppppppplVar4,plStack_50,lVar18,
                          uVar10);
      FUN_10a462790(*(undefined8 *)(param_1 + 0xe0),lVar1,auStack_70);
      FUN_10a462340(param_1);
      if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
        (**(code **)*puStack_60)();
      }
      if (-1 < uStack_48._7_1_) {
        return;
      }
      __ZdlPv(ppppppplStack_58);
      return;
    }
  }
  plVar7 = (long *)(param_1 + 0x260);
  ppppplVar16 = *(long ******)(*param_2 + 0x158);
  ppppplVar15 = *(long ******)(param_1 + 0x268);
  if (ppppplVar15 != (long *****)0x0) {
    uVar10 = (long)ppppplVar15 - 1;
    if (((ulong)ppppplVar15 & uVar10) == 0) {
      unaff_x24 = (long *****)(uVar10 & (ulong)ppppplVar16);
    }
    else {
      unaff_x24 = ppppplVar16;
      if (ppppplVar15 <= ppppplVar16) {
        uVar12 = 0;
        if (ppppplVar15 != (long *****)0x0) {
          uVar12 = (ulong)ppppplVar16 / (ulong)ppppplVar15;
        }
        unaff_x24 = (long *****)((long)ppppplVar16 - uVar12 * (long)ppppplVar15);
      }
    }
    plVar11 = *(long **)(*plVar7 + (long)unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10a46465c;
          ppppplVar13 = (long *****)plVar11[1];
          if (ppppplVar13 != ppppplVar16) break;
          if ((long *****)plVar11[2] == ppppplVar16) {
            return;
          }
        }
        if (((ulong)ppppplVar15 & uVar10) == 0) {
          ppppplVar13 = (long *****)((ulong)ppppplVar13 & uVar10);
        }
        else if (ppppplVar15 <= ppppplVar13) {
          uVar12 = 0;
          if (ppppplVar15 != (long *****)0x0) {
            uVar12 = (ulong)ppppplVar13 / (ulong)ppppplVar15;
          }
          ppppplVar13 = (long *****)((long)ppppplVar13 - uVar12 * (long)ppppplVar15);
        }
      } while (ppppplVar13 == unaff_x24);
    }
  }
LAB_10a46465c:
  pppppplVar6 = (long ******)0x28;
  __Znwm();
  uStack_48 = (undefined8 *)0x1;
  *pppppplVar6 = (long *****)0x0;
  pppppplVar6[1] = ppppplVar16;
  pppppplVar6[3] = (long *****)0x0;
  pppppplVar6[4] = (long *****)0x0;
  pppppplVar6[2] = ppppplVar16;
  fVar19 = (float)(*(long *)(param_1 + 0x278) + 1);
  if ((ppppplVar15 == (long *****)0x0) ||
     (*(float *)(param_1 + 0x280) * (float)ppppplVar15 < fVar19)) {
    uVar10 = 1;
    if ((long *****)0x2 < ppppplVar15) {
      uVar10 = (ulong)(((ulong)ppppplVar15 & (long)ppppplVar15 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)ppppplVar15 << 1;
    uVar12 = (ulong)(fVar19 / *(float *)(param_1 + 0x280));
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    ppppppplStack_58 = (long *******)pppppplVar6;
    plStack_50 = plVar7;
    FUN_10a49000c(plVar7,uVar10);
    ppppplVar15 = *(long ******)(param_1 + 0x268);
    if (((ulong)ppppplVar15 & (long)ppppplVar15 - 1U) == 0) {
      unaff_x24 = (long *****)((long)ppppplVar15 - 1U & (ulong)ppppplVar16);
    }
    else {
      unaff_x24 = ppppplVar16;
      if (ppppplVar15 <= ppppplVar16) {
        uVar10 = 0;
        if (ppppplVar15 != (long *****)0x0) {
          uVar10 = (ulong)ppppplVar16 / (ulong)ppppplVar15;
        }
        unaff_x24 = (long *****)((long)ppppplVar16 - uVar10 * (long)ppppplVar15);
      }
    }
  }
  lVar18 = *plVar7;
  plVar11 = *(long **)(lVar18 + (long)unaff_x24 * 8);
  if (plVar11 == (long *)0x0) {
    *pppppplVar6 = *(long ******)(param_1 + 0x270);
    *(long *******)(param_1 + 0x270) = pppppplVar6;
    *(long *)(lVar18 + (long)unaff_x24 * 8) = param_1 + 0x270;
    if (*pppppplVar6 == (long *****)0x0) goto LAB_10a4647b8;
    ppppplVar16 = (long *****)(*pppppplVar6)[1];
    if (((ulong)ppppplVar15 & (long)ppppplVar15 - 1U) == 0) {
      ppppplVar16 = (long *****)((ulong)ppppplVar16 & (long)ppppplVar15 - 1U);
    }
    else if (ppppplVar15 <= ppppplVar16) {
      uVar10 = 0;
      if (ppppplVar15 != (long *****)0x0) {
        uVar10 = (ulong)ppppplVar16 / (ulong)ppppplVar15;
      }
      ppppplVar16 = (long *****)((long)ppppplVar16 - uVar10 * (long)ppppplVar15);
    }
    plVar11 = (long *)(*plVar7 + (long)ppppplVar16 * 8);
  }
  else {
    *pppppplVar6 = (long *****)*plVar11;
  }
  *plVar11 = (long)pppppplVar6;
LAB_10a4647b8:
  *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 1;
  return;
}



/* Entry: 10a464a74; end: 10a464ac7;  */

undefined * FUN_10a464a74(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae030a0(0,param_1);
  ppuVar6 = &PTR_PTR_113302148;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a464ac8; end: 10a464b63;  */

long FUN_10a464ac8(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long extraout_x12;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x168);
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    uVar4 = (ulong)((int)uVar2 + 3);
    if ((uVar2 & uVar3) != 0) {
      uVar4 = 3;
    }
    uVar4 = uVar4 & param_2;
    plVar5 = *(long **)(*(long *)(param_1 + 0x160) + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10a464b4c;
          uVar6 = plVar5[1];
          if (uVar6 != param_2) break;
          if (*(byte *)(plVar5 + 2) == param_2) goto LAB_10a464b58;
        }
        if ((uVar2 & uVar3) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar2 <= uVar6) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar6 / uVar2;
          }
          uVar6 = uVar6 - uVar1 * uVar2;
        }
      } while (uVar6 == uVar4);
    }
  }
LAB_10a464b4c:
  FUN_109ffdddc(&UNK_10f639994);
  plVar5 = (long *)extraout_x12;
LAB_10a464b58:
  return (long)plVar5 + 0x18;
}



/* Entry: 10a464b64; end: 10a464bbf;  */

void FUN_10a464b64(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a052f68(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a464bc0; end: 10a464d3f;  */

void FUN_10a464bc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 10a464d40; end: 10a464ddf;  */

uint FUN_10a464d40(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_40 = *param_2;
  lVar4 = *(long *)(lStack_40 + 0xf0);
  lStack_28 = (long)*(char *)(lVar4 + 0xaf);
  if (lStack_28 < 0) {
    lStack_30 = *(long *)(lVar4 + 0x98);
    lStack_28 = *(long *)(lVar4 + 0xa0);
  }
  else {
    lStack_30 = lVar4 + 0x98;
  }
  lStack_38 = param_2[1];
  if (lStack_38 != 0) {
    plVar3 = (long *)(lStack_38 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = &lStack_30;
  FUN_10a490c4c(param_1 + 0x2d8,plVar3,&lStack_30,&lStack_40);
  if (lStack_38 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return (uint)plVar3 & 1;
}



/* Entry: 10a464de0; end: 10a464e5b;  */

void FUN_10a464de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x2d8;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10a4910b0(lVar1,&uStack_40);
  if (lVar1 == 0) {
    FUN_10ae03140();
    ppuVar2 = &PTR_PTR_1133021b0;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133021b0);
  }
  FUN_10a4911ac(param_1 + 0x2d8,&uStack_40);
  return;
}



/* Entry: 10a464e5c; end: 10a464ebf;  */

void FUN_10a464e5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_2 = param_2 + 0x2d8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10a4910b0(param_2,&uStack_30);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        *param_1 = *(undefined8 *)(param_2 + 0x20);
      }
    }
  }
  return;
}



/* Entry: 10a464ec0; end: 10a464f6b;  */

void FUN_10a464ec0(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plStack_28;
  
  if (*(int *)(param_2 + 8) == 7) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0xb8);
    if ((*(byte *)(lVar3 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a464f4c);
      (*pcVar1)();
    }
    plVar4 = *(long **)(lVar3 + 0x50);
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined8 *)(param_2 + 0x10));
    plStack_28 = plVar2;
    (**(code **)(*plVar4 + 0x310))(plVar4,&plStack_28,param_3);
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  return;
}



/* Entry: 10a464f6c; end: 10a4653b7;  */

/* WARNING: Possible PIC construction at 0x00010a46515c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a465160) */
/* WARNING: Removing unreachable block (ram,0x00010a4651d0) */
/* WARNING: Removing unreachable block (ram,0x00010a4651f4) */
/* WARNING: Removing unreachable block (ram,0x00010a465224) */
/* WARNING: Removing unreachable block (ram,0x00010a465244) */
/* WARNING: Removing unreachable block (ram,0x00010a465268) */
/* WARNING: Removing unreachable block (ram,0x00010a465298) */
/* WARNING: Removing unreachable block (ram,0x00010a4652b8) */
/* WARNING: Removing unreachable block (ram,0x00010a4652dc) */
/* WARNING: Removing unreachable block (ram,0x00010a46530c) */
/* WARNING: Removing unreachable block (ram,0x00010a46532c) */
/* WARNING: Removing unreachable block (ram,0x00010a46534c) */
/* WARNING: Removing unreachable block (ram,0x00010a46537c) */
/* WARNING: Removing unreachable block (ram,0x00010a4653b0) */
/* WARNING: Removing unreachable block (ram,0x00010a465400) */
/* WARNING: Removing unreachable block (ram,0x00010a465480) */
/* WARNING: Removing unreachable block (ram,0x00010a465428) */
/* WARNING: Removing unreachable block (ram,0x00010a465450) */
/* WARNING: Removing unreachable block (ram,0x00010a465484) */
/* WARNING: Removing unreachable block (ram,0x00010a465468) */
/* WARNING: Removing unreachable block (ram,0x00010a465394) */

undefined *** FUN_10a464f6c(undefined ***param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_b8;
  code *pcStack_b0;
  char **ppcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcStack_b8 = "error";
  pcStack_b0 = (code *)&UNK_10f65ae40;
  uStack_a0 = 1;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0x800000064;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x800000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppcStack_a8 = &pcStack_b8;
  FUN_10a4653b8(param_1,&pcStack_b0,param_2);
  pcStack_b8 = "error";
  pcStack_b0 = (code *)&UNK_10f659ce5;
  uStack_a0 = 1;
  uStack_c8 = 0xffffffffffffffff;
  uStack_d0 = 0x100000064;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  puStack_88 = &UNK_10f659cef;
  uStack_80 = 0x179;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppcStack_a8 = &pcStack_b8;
  FUN_10a4653b8(param_1,&pcStack_b0,param_2);
  ppcStack_a8 = (char **)0x0;
  uStack_a0 = 0;
  pcStack_b0 = (code *)&UNK_10f654e52;
  uStack_90 = uStack_c8;
  uStack_98 = uStack_d0;
  puStack_88 = &UNK_10f659e69;
  uStack_80 = 0x4f;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010a004eb4(param_1,&pcStack_b0);
  pppuVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar6 & 1) == 0) {
    pcStack_b0 = FUN_10a491af0;
    ppcStack_a8 = &PTR_FUN_110bdd9c0;
    uStack_a0 = param_2;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4653b0);
      (*pcVar5)();
    }
    FUN_10a0544d8(param_1,&UNK_10f659eb9,&pcStack_b0,1,param_1[3] + -1);
    (*(code *)*ppcStack_a8)(&ppcStack_a8);
  }
  func_0x00010a004064(param_1);
  ppcStack_a8 = &pcStack_b8;
  pcStack_b8 = "moduleName";
  pcStack_b0 = (code *)&UNK_10f659ecb;
  uStack_a0 = 1;
  uStack_90 = uStack_d8;
  uVar3 = uStack_90;
  uStack_98 = uStack_e0;
  uVar1 = uStack_98;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_110 = &UNK_10f659ed8;
  uStack_108 = 0xffffffff;
  uStack_e8 = 0x10a465160;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98._4_4_ = (undefined4)(uStack_e0 >> 0x20);
  uVar2 = uStack_98._4_4_;
  uStack_90._4_4_ = (undefined4)(uStack_d8 >> 0x20);
  uVar4 = uStack_90._4_4_;
  pppuVar6 = param_1;
  uStack_100 = param_2;
  pppuStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  uStack_98 = uVar1;
  uStack_90 = uVar3;
  FUN_10a0051e8(param_1,uStack_e0 & 0xffffffff,uVar2,0xffffffff,uStack_d8 & 0xffffffff,uVar4);
  if (((ulong)pppuVar6 & 1) == 0) {
    pcStack_158 = FUN_10a491cb4;
    ppuStack_150 = &PTR_DAT_110bdd9f0;
    uStack_148 = param_2;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a465554);
      (*pcVar5)();
    }
    FUN_10a0544d8(param_1,pcStack_b0,&pcStack_158,1,param_1[3] + -1);
    pppuVar6 = &ppuStack_150;
    (*(code *)*ppuStack_150)(pppuVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return param_1;
  }
  ___stack_chk_fail();
  return pppuVar6;
}



/* Entry: 10a4653b8; end: 10a465557;  */

undefined *** FUN_10a4653b8(undefined ***param_1,ulong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  code **ppcStack_e8;
  long lStack_b8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)(ulong)(uint)param_2[3];
  ppcVar5 = (code **)(ulong)*(uint *)((long)param_2 + 0x1c);
  pppuVar2 = param_1;
  FUN_10a0051e8();
  if (((ulong)pppuVar2 & 1) == 0) {
    puVar4 = (undefined8 *)*param_2;
    pcStack_78 = FUN_10a491988;
    ppuStack_70 = &PTR_FUN_110bdd9a8;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a465484);
      (*pcVar1)();
    }
    ppcVar5 = &pcStack_78;
    FUN_10a0544d8(param_1,puVar4,ppcVar5,1,param_1[3] + -1);
    pppuVar2 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = pppuVar2;
  FUN_10a0051e8();
  if (((ulong)pppuVar3 & 1) == 0) {
    pcStack_f8 = FUN_10a491cb4;
    ppuStack_f0 = &PTR_DAT_110bdd9f0;
    ppcStack_e8 = ppcVar5;
    if (pppuVar2[2] == pppuVar2[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a465554);
      (*pcVar1)();
    }
    FUN_10a0544d8(pppuVar2,*puVar4,&pcStack_f8,1,pppuVar2[3] + -1);
    pppuVar3 = &ppuStack_f0;
    (*(code *)*ppuStack_f0)(pppuVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  return pppuVar3;
}



/* Entry: 10a465558; end: 10a46555b;  */

void FUN_10a465558(void)

{
  return;
}



/* Entry: 10a46555c; end: 10a465b5b;  */

void FUN_10a46555c(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plStack_30;
  undefined **ppuStack_28;
  
  ppuVar1 = &PTR_DAT_110bd3000;
  (**(code **)(*param_2 + 0x140))(param_2,&PTR_DAT_110bd3000,param_1[8],param_1[9]);
  (**(code **)(*param_1 + 0x38))();
  plStack_30 = param_1;
  ppuStack_28 = ppuVar1;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdc218,&plStack_30);
  return;
}



/* Entry: 10a465b5c; end: 10a465e7b;  */

void FUN_10a465b5c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdac58);
  uVar5 = (uint)plVar6;
  uVar9 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  FUN_10a465e7c(param_1 + 0x50,uVar9);
  (**(code **)(*param_2 + 0xa0))(&uStack_d0,param_2,&PTR_DAT_110bdac78);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x70) = uStack_c8;
  *(ulong *)(param_1 + 0x68) = uStack_d0;
  *(ulong *)(param_1 + 0x78) = uStack_c0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bdac98);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bdac98);
    if (0 < (int)uVar5) {
      uVar10 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,uVar10);
        (**(code **)(*param_2 + 0xa0))(&uStack_78,param_2,&PTR_s_propertyName_110bdacb8);
        FUN_10a46604c(&uStack_88,param_2);
        FUN_10a46614c(&uStack_a0,uStack_88);
        if (cStack_61 < '\0') {
          func_0x000107c3192c(&uStack_d0,uStack_78,uStack_70);
        }
        else {
          uStack_c8 = uStack_70;
          uStack_d0 = uStack_78;
          uStack_c0 = CONCAT17(cStack_61,uStack_68);
        }
        plStack_b0 = plStack_98;
        uStack_b8 = uStack_a0;
        if (plStack_98 != (long *)0x0) {
          plVar6 = plStack_98 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar7 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x3333333333333333;
        if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a465e3c);
          (*pcVar4)();
        }
        puVar11 = (ulong *)(*(long *)(param_1 + 0x50) + uVar10 * 0x28);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = uStack_c0;
        puVar11[1] = uStack_c8;
        *puVar11 = uStack_d0;
        uStack_c0 = uStack_c0 & 0xffffffffffffff;
        uStack_d0 = uStack_d0 & 0xffffffffffffff00;
        func_0x00010a473a9c(puVar11 + 3,&uStack_b8);
        plVar6 = plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          plVar1 = plStack_b0 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if ((long)uStack_c0 < 0) {
          __ZdlPv(uStack_d0);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        plVar6 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar1 = plStack_80 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (cStack_61 < '\0') {
          __ZdlPv(uStack_78);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a465e7c; end: 10a46604b;  */

void FUN_10a465e7c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_80;
  long *plStack_78;
  
  lVar8 = *param_1;
  lVar11 = param_1[1];
  lVar9 = lVar11 - lVar8 >> 3;
  bVar5 = param_2 < (long *)(lVar9 * -0x3333333333333333);
  uVar4 = (long)param_2 + lVar9 * 0x3333333333333333;
  if (bVar5 || uVar4 == 0) {
    if (bVar5) {
      lVar8 = lVar8 + (long)param_2 * 0x28;
      while (lVar11 != lVar8) {
        lVar11 = lVar11 + -0x28;
        func_0x00010a473a60(lVar11);
      }
      param_1[1] = lVar8;
    }
  }
  else if ((ulong)((param_1[2] - lVar11 >> 3) * -0x3333333333333333) < uVar4) {
    if ((long *)0x666666666666666 < param_2) {
      FUN_10a473a08();
      (**(code **)(*param_2 + 600))(&lStack_80,param_2,0);
      if ((lStack_80 != 0) &&
         (___dynamic_cast(lStack_80,&PTR_DAT_110b9fe10,&PTR_DAT_110bde410,0), lStack_80 != 0)) {
        *param_1 = lStack_80;
        param_1[1] = (long)plStack_78;
        param_1 = &lStack_80;
      }
      *param_1 = 0;
      param_1[1] = 0;
      if (plStack_78 != (long *)0x0) {
        plVar10 = plStack_78 + 1;
        do {
          lVar8 = *plVar10;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      return;
    }
    lVar9 = param_1[2] - lVar8 >> 3;
    plVar10 = (long *)(lVar9 * -0x6666666666666666);
    if (plVar10 < param_2 || (long)plVar10 - (long)param_2 == 0) {
      plVar10 = param_2;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      plVar10 = (long *)0x666666666666666;
    }
    FUN_10a473a1c();
    lVar8 = (long)plVar10 + (lVar11 - lVar8);
    lVar11 = ((uVar4 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    _bzero(lVar8,lVar11);
    puVar12 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar12 + (lVar8 - (long)puVar2));
    puVar6 = puVar12;
    puVar7 = puVar1;
    if (puVar2 != puVar12) {
      do {
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar7[2] = puVar6[2];
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        uVar13 = puVar6[3];
        puVar7[4] = puVar6[4];
        puVar7[3] = uVar13;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6 = puVar6 + 5;
        puVar7 = puVar7 + 5;
      } while (puVar6 != puVar2);
      do {
        func_0x00010a473a60(puVar12);
        puVar12 = puVar12 + 5;
      } while (puVar12 != puVar2);
      puVar12 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = lVar8 + lVar11;
    param_1[2] = (long)(plVar10 + (long)param_2 * 5);
    if (puVar12 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar12);
      return;
    }
  }
  else {
    lVar8 = ((uVar4 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    _bzero(lVar11,lVar8);
    param_1[1] = lVar11 + lVar8;
  }
  return;
}



/* Entry: 10a46604c; end: 10a46614b;  */

void FUN_10a46604c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bde410,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a46614c; end: 10a4661df;  */

void FUN_10a46614c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a4661e0; end: 10a46640b;  */

void FUN_10a4661e0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined **ppuStack_e8;
  undefined1 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  FUN_10a46555c();
  (**(code **)(*param_2 + 0x40))
            (param_2,&PTR_DAT_110bdac58,
             (int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) *
             -0x33333333);
  FUN_10a00d760(param_2,&PTR_DAT_110bdac78,param_1 + 0x68);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bdac98);
  lVar8 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar8 != lVar2) {
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      ppuVar6 = &PTR_s_propertyName_110bdacb8;
      FUN_10a00d760(param_2,&PTR_s_propertyName_110bdacb8,lVar8);
      plVar5 = *(long **)(lVar8 + 0x18);
      if (plVar5 == (long *)0x0) {
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        ppuStack_e8 = &PTR_DAT_110bf2dc0;
        ppuStack_d8 = &PTR_DAT_110bf2e30;
        ppuStack_b0 = &PTR_DAT_110bf2e88;
        func_0x00010a0fda30();
        uStack_98 = 0;
        lStack_90 = 0;
        ppuStack_e8 = &PTR_FUN_110bdb0e8;
        ppuStack_d8 = &PTR_FUN_110bdb170;
        ppuStack_b0 = &PTR_FUN_110bdb1c8;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        lStack_78 = 0;
        plStack_68 = (long *)0x0;
        plStack_a8 = plVar5;
        ppuStack_a0 = ppuVar6;
        FUN_10a46640c(&ppuStack_e8,param_2);
        plVar5 = plStack_68;
        ppuStack_e8 = &PTR_FUN_110bdb0e8;
        ppuStack_d8 = &PTR_FUN_110bdb170;
        ppuStack_b0 = &PTR_FUN_110bdb1c8;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        if (lStack_78 < 0) {
          __ZdlPv(uStack_88);
        }
        ppuStack_e8 = &PTR_DAT_110bdc268;
        ppuStack_d8 = &PTR_FUN_110bdc2f0;
        ppuStack_b0 = &PTR_FUN_110bdc348;
        if (lStack_90 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        FUN_10a572f54(&ppuStack_e8);
      }
      else {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a46640c; end: 10a46646f;  */

void FUN_10a46640c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_10a46555c();
  lVar5 = param_1 + 0x60;
  FUN_10a00d760(param_2,&PTR_DAT_110bdb1d8,lVar5);
  lStack_38 = (long)*(char *)(param_1 + 0x77);
  if (lStack_38 < 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    lStack_38 = *(long *)(param_1 + 0x68);
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x58);
  lStack_40 = lVar5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_58 = plVar4;
      uStack_50 = uStack_60;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_s_value_110bdc238,&uStack_60,&lStack_40);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a466470; end: 10a4664eb;  */

undefined8 * FUN_10a466470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdb0e8;
  param_1[2] = &PTR_FUN_110bdb170;
  param_1[7] = &PTR_FUN_110bdb1c8;
  func_0x00010a052384(param_1 + 0xf);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  *param_1 = &PTR_DAT_110bdc268;
  param_1[2] = &PTR_FUN_110bdc2f0;
  param_1[7] = &PTR_FUN_110bdc348;
  if (param_1[0xb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a4664ec; end: 10a4667bf;  */

void FUN_10a4664ec(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long *plVar13;
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  
  if (param_4 == 0) {
    uVar7 = param_2;
    uVar6 = param_3;
    func_0x00010a0fda30();
  }
  else {
    uStack_98 = *(ulong *)(param_2 + 0x48);
    uStack_a0 = *(ulong *)(param_2 + 0x40);
    lVar10 = param_4 + 0x88;
    func_0x00010a35bf90(lVar10,&uStack_a0);
    puVar2 = (undefined8 *)((ulong)&uStack_a0 | 8);
    puVar12 = &uStack_a0;
    if (lVar10 != 0) {
      puVar2 = (undefined8 *)(lVar10 + 0x28);
      puVar12 = (ulong *)(lVar10 + 0x20);
    }
    uVar6 = *puVar2;
    uVar7 = *puVar12;
  }
  FUN_10a493620(&lStack_70,uVar7,uVar6);
  lVar11 = lStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x68,param_2 + 0x68);
  FUN_10a465e7c(lVar11 + 0x50,
                (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) * -0x3333333333333333);
  lVar10 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != lVar10) {
    uVar7 = 0;
    do {
      puVar12 = (ulong *)(lVar10 + uVar7 * 0x28);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_a0,*puVar12,puVar12[1]);
      }
      else {
        uStack_98 = puVar12[1];
        uStack_a0 = *puVar12;
        uStack_90 = puVar12[2];
      }
      plVar13 = (long *)puVar12[3];
      plVar8 = &lStack_88;
      if (((plVar13 != (long *)0x0) &&
          ((**(code **)(*plVar13 + 0x48))(&lStack_b0,plVar13,param_3,param_4), lStack_b0 != 0)) &&
         (lVar10 = lStack_b0, ___dynamic_cast(lStack_b0,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0),
         lVar10 != 0)) {
        plStack_80 = plStack_a8;
        plVar8 = &lStack_b0;
      }
      *plVar8 = 0;
      plVar8[1] = 0;
      uVar9 = (*(long *)(lStack_70 + 0x58) - *(long *)(lStack_70 + 0x50) >> 3) * -0x3333333333333333
      ;
      if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a466790);
        (*pcVar5)();
      }
      puVar12 = (ulong *)(*(long *)(lStack_70 + 0x50) + uVar7 * 0x28);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[2] = uStack_90;
      puVar12[1] = uStack_98;
      *puVar12 = uStack_a0;
      uStack_90 = uStack_90 & 0xffffffffffffff;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      func_0x00010a473a9c(puVar12 + 3,&lStack_88);
      plVar8 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_a8;
      if ((long)uStack_90 < 0) {
        __ZdlPv(uStack_a0);
        plVar8 = plStack_a8;
      }
      plStack_a8 = plVar8;
      if ((plVar13 != (long *)0x0) && (plVar8 != (long *)0x0)) {
        plVar13 = plVar8 + 1;
        do {
          lVar10 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      uVar7 = uVar7 + 1;
      lVar10 = *(long *)(param_2 + 0x50);
      uVar9 = (*(long *)(param_2 + 0x58) - lVar10 >> 3) * -0x3333333333333333;
      lVar11 = lStack_70;
    } while (uVar7 <= uVar9 && uVar9 - uVar7 != 0);
  }
  *param_1 = lVar11;
  param_1[1] = lStack_68;
  return;
}



/* Entry: 10a4667c0; end: 10a467043;  */

void FUN_10a4667c0(undefined4 param_1,long param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110bdc358);
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_s_value_110bdc238);
  if ((int)plVar3 == 0) {
    return;
  }
  uVar5 = (uint)plVar2;
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_s_value_110bdc238);
  func_0x00010742a308(param_2 + 0x50,uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  if (0 < (int)uVar5) {
    uVar4 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,uVar4);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_s_value_110bdc238);
      if ((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 2) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4668e4);
        (*pcVar1)();
      }
      *(undefined4 *)(*(long *)(param_2 + 0x50) + uVar4 * 4) = param_1;
      (**(code **)(*param_3 + 0x220))(param_3);
      uVar4 = uVar4 + 1;
    } while (((ulong)plVar2 & 0xffffffff) != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a4668c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x220))(param_3);
  return;
}



/* Entry: 10a467044; end: 10a46714f;  */

void FUN_10a467044(long param_1,long *param_2)

{
  undefined **ppuVar1;
  code **ppcVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  code **ppcVar6;
  undefined **ppuVar7;
  undefined8 *extraout_x8;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xa8))(&uStack_90,param_2,&PTR_DAT_110bdb1d8,"",0);
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_88;
  *(undefined8 *)(param_1 + 0x60) = uStack_90;
  *(undefined8 *)(param_1 + 0x70) = uStack_80;
  pcStack_78 = FUN_10a4937a4;
  ppuStack_70 = &PTR_FUN_110bddab8;
  ppuVar7 = &PTR_s_value_110bdc238;
  ppcVar6 = &pcStack_78;
  lStack_68 = param_1;
  FUN_10a1f46a0(param_2,&PTR_s_value_110bdc238,ppcVar6,0);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __Unwind_Resume();
  if (ppcVar6 == (code **)0x0) {
    pppuVar8 = pppuVar5;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_d8 = pppuVar5[9];
    ppuStack_e0 = pppuVar5[8];
    ppcVar6 = ppcVar6 + 0x11;
    func_0x00010a35bf90(ppcVar6,&ppuStack_e0);
    ppcVar2 = (code **)((ulong)&ppuStack_e0 | 8);
    pppuVar8 = &ppuStack_e0;
    if (ppcVar6 != (code **)0x0) {
      ppcVar2 = ppcVar6 + 5;
      pppuVar8 = (undefined ***)(ppcVar6 + 4);
    }
    ppuVar7 = (undefined **)*ppcVar2;
    pppuVar8 = (undefined ***)*pppuVar8;
  }
  FUN_10a49387c(&ppuStack_e0,pppuVar8,ppuVar7);
  ppuVar7 = pppuVar5[0xb];
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a467290();
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7 + 1;
    do {
      puVar9 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  ppuVar7 = ppuStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_e0 + 0xc,pppuVar5 + 0xc);
  *extraout_x8 = ppuVar7;
  extraout_x8[1] = ppuStack_d8;
  return;
}



/* Entry: 10a467150; end: 10a46728f;  */

void FUN_10a467150(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_48 = *(long *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar2 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar6 = *plVar5;
  }
  FUN_10a49387c(&lStack_50,lVar6,param_3);
  plVar5 = *(long **)(param_2 + 0x58);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a467290();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar6 = lStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_50 + 0x60,param_2 + 0x60);
  *param_1 = lVar6;
  param_1[1] = lStack_48;
  return;
}



/* Entry: 10a467290; end: 10a4674ff;  */

void FUN_10a467290(undefined ***param_1,undefined **param_2,undefined ***param_3)

{
  undefined ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  undefined **unaff_x22;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined ***apppuStack_d8 [2];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined ***)0x0) {
    pppuVar4 = (undefined ***)param_2[1];
    *param_2 = (undefined *)0x0;
    param_2[1] = (undefined *)0x0;
    pppuVar7 = param_3;
    if (pppuVar4 != (undefined ***)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
        return;
      }
      goto LAB_10a4674d4;
    }
  }
  else {
    unaff_x21 = param_1;
    if (param_3 == (undefined ***)0x0) {
      ppuVar5 = param_2;
      FUN_10a03d13c(&ppuStack_e0,param_1);
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar4 = apppuStack_d8[0] + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
          if (bVar3) {
            *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppuVar4 = (undefined ***)param_2[1];
      param_2[1] = (undefined *)apppuStack_d8[0];
      *param_2 = (undefined *)ppuStack_e0;
      param_2 = ppuVar5;
      pppuVar7 = param_3;
      if (pppuVar4 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = ppuVar5;
        pppuVar7 = param_3;
      }
      unaff_x20 = apppuStack_d8[0];
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar8 = apppuStack_d8[0] + 1;
        do {
          ppuVar5 = *pppuVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
          if (bVar3) {
            *pppuVar8 = (undefined **)((long)ppuVar5 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_10a467488:
        unaff_x20 = apppuStack_d8[0];
        if (ppuVar5 == (undefined **)0x0) {
          (*(code *)(*apppuStack_d8[0])[2])(apppuStack_d8[0]);
          pppuVar4 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    else {
      unaff_x22 = param_1[8];
      pppuVar4 = (undefined ***)param_1[9];
      if (*(char *)(param_3 + 0x17) == '\x01') {
        unaff_x21 = &ppuStack_80;
        uStack_88 = 0x10a493a08;
        ppuStack_80 = &PTR_FUN_110bddb20;
        ppuVar5 = unaff_x22;
        ppuStack_78 = param_2;
        FUN_10a069d9c(param_3,unaff_x22,pppuVar4,&uStack_88);
        pppuVar7 = pppuVar4;
        ppuVar6 = ppuStack_80;
      }
      else {
        pppuVar7 = param_3 + 0x11;
        ppuStack_e0 = unaff_x22;
        apppuStack_d8[0] = pppuVar4;
        func_0x00010a35bf90(pppuVar7,&ppuStack_e0);
        ppppuVar1 = apppuStack_d8;
        pppuVar8 = &ppuStack_e0;
        if (pppuVar7 != (undefined ***)0x0) {
          ppppuVar1 = (undefined ****)(pppuVar7 + 5);
          pppuVar8 = pppuVar7 + 4;
        }
        pppuVar7 = *ppppuVar1;
        ppuVar5 = *pppuVar8;
        if (unaff_x22 == ppuVar5 && pppuVar4 == pppuVar7) {
          FUN_10a03d13c(&ppuStack_e0,param_1);
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar4 = apppuStack_d8[0] + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
              if (bVar3) {
                *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pppuVar4 = (undefined ***)param_2[1];
          param_2[1] = (undefined *)apppuStack_d8[0];
          *param_2 = (undefined *)ppuStack_e0;
          if (pppuVar4 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          param_2 = ppuVar5;
          unaff_x20 = apppuStack_d8[0];
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar8 = apppuStack_d8[0] + 1;
            do {
              ppuVar5 = *pppuVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
              if (bVar3) {
                *pppuVar8 = (undefined **)((long)ppuVar5 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_10a467488;
          }
          goto LAB_10a4674a4;
        }
        unaff_x21 = &ppuStack_c0;
        pcStack_c8 = FUN_10a493ac8;
        ppuStack_c0 = &PTR_FUN_110bddb40;
        ppuStack_b8 = param_2;
        FUN_10a069d9c(param_3,ppuVar5,pppuVar7,&pcStack_c8);
        ppuVar6 = ppuStack_c0;
      }
      pppuVar4 = unaff_x21;
      (*(code *)*ppuVar6)();
      param_2 = ppuVar5;
      unaff_x20 = param_3;
    }
  }
LAB_10a4674a4:
  param_3 = pppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10a4674d4:
  ___stack_chk_fail();
  (*(code *)**unaff_x21)(unaff_x21);
  pppuVar7 = pppuVar4;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a467500;
  ppuStack_120 = (undefined **)0x0;
  ppuStack_118 = (undefined **)0x0;
  ppuVar5 = pppuVar7[0xb];
  pppuVar8 = &ppuStack_130;
  ppuStack_110 = unaff_x22;
  pppuStack_108 = unaff_x21;
  pppuStack_100 = unaff_x20;
  pppuStack_f8 = pppuVar4;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((((ppuVar5 != (undefined **)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar8 = &ppuStack_130, ppuStack_118 = ppuVar5,
       ppuVar5 != (undefined **)0x0)) &&
      (ppuVar6 = pppuVar7[10], pppuVar8 = &ppuStack_130, ppuStack_120 = ppuVar6,
      ppuVar6 != (undefined **)0x0)) &&
     (___dynamic_cast(ppuVar6,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), pppuVar8 = &ppuStack_130,
     ppuVar6 != (undefined **)0x0)) {
    pppuVar8 = &ppuStack_120;
    ppuStack_130 = ppuVar6;
    ppuStack_128 = ppuVar5;
  }
  *pppuVar8 = (undefined **)0x0;
  pppuVar8[1] = (undefined **)0x0;
  ppuVar5 = ppuStack_118;
  if (ppuStack_118 != (undefined **)0x0) {
    ppuVar6 = ppuStack_118 + 1;
    do {
      puVar9 = *ppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  if (ppuStack_130 == (undefined **)0x0) {
    FUN_10a39c058(param_3,param_2,pppuVar7 + 10);
  }
  else {
    FUN_10a052f68(&ppuStack_120,*param_3,&ppuStack_130);
    FUN_10a3b6bb0(param_3,param_2,&ppuStack_120);
    if ((3 < (int)ppuStack_120) && (ppuStack_118 != (undefined **)0x0)) {
      (**(code **)*ppuStack_118)();
    }
  }
  ppuVar5 = ppuStack_128;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar6 = ppuStack_128 + 1;
    do {
      puVar9 = *ppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuStack_128 + 0x10))(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return;
}



/* Entry: 10a467500; end: 10a467693;  */

void FUN_10a467500(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar3 = *(long **)(param_1 + 0x58);
  plVar5 = &lStack_50;
  if ((((plVar3 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 = &lStack_50, plStack_38 = plVar3,
       plVar3 != (long *)0x0)) &&
      (lVar4 = *(long *)(param_1 + 0x50), plVar5 = &lStack_50, lStack_40 = lVar4, lVar4 != 0)) &&
     (___dynamic_cast(lVar4,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), plVar5 = &lStack_50,
     lVar4 != 0)) {
    plVar5 = &lStack_40;
    lStack_50 = lVar4;
    plStack_48 = plVar3;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (lStack_50 == 0) {
    FUN_10a39c058(param_3,param_2,param_1 + 0x50);
  }
  else {
    FUN_10a052f68(&lStack_40,*param_3,&lStack_50);
    FUN_10a3b6bb0(param_3,param_2,&lStack_40);
    if ((3 < (int)lStack_40) && (plStack_38 != (long *)0x0)) {
      (**(code **)*plStack_38)();
    }
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a467694; end: 10a4677bb;  */

void FUN_10a467694(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = &lStack_50;
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar3 = *(long **)(param_2 + 0x58);
  if ((((plVar3 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar3, plVar3 == (long *)0x0)) ||
      (lVar4 = *(long *)(param_2 + 0x50), lStack_50 = lVar4, lVar4 == 0)) ||
     (___dynamic_cast(lVar4,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0), lVar4 == 0)) {
    plVar5 = &lStack_40;
    lVar4 = lStack_40;
    plVar3 = plStack_38;
  }
  plStack_38 = plVar3;
  lStack_40 = lVar4;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (lStack_40 == 0) {
    FUN_10a4677bc(param_1,param_2 + 0x50);
  }
  else {
    FUN_10a464b64(param_1,&lStack_40);
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a4677bc; end: 10a467817;  */

void FUN_10a4677bc(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3b95d8(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a467818; end: 10a467a3f;  */

void FUN_10a467818(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110bdc358);
  uVar3 = (uint)plVar4;
  func_0x00010983d018(param_5 + 0x50,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_value_110bdc238);
  if ((int)plVar5 == 0) {
    return;
  }
  (**(code **)(*param_6 + 0x210))(param_6,&PTR_s_value_110bdc238);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      (**(code **)(*param_6 + 0x218))(param_6,uVar6);
      (**(code **)(*param_6 + 0x188))(param_6,&PTR_s_value_110bdc238);
      if ((ulong)(*(long *)(param_5 + 0x58) - *(long *)(param_5 + 0x50) >> 4) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a467948);
        (*pcVar2)();
      }
      puVar1 = (undefined4 *)(*(long *)(param_5 + 0x50) + lVar7);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      (**(code **)(*param_6 + 0x220))(param_6);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (((ulong)plVar4 & 0xffffffff) << 4 != lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a46792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_6 + 0x220))(param_6);
  return;
}



/* Entry: 10a467a40; end: 10a467bd3;  */

void FUN_10a467a40(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lStack_50;
  long lStack_48;
  
  if (param_4 == 0) {
    lVar7 = param_2;
    func_0x00010a0fda30();
  }
  else {
    lStack_48 = *(long *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar2 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar6 = &lStack_50;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      plVar6 = (long *)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar7 = *plVar6;
  }
  FUN_10a493b88(&lStack_50,lVar7,param_3);
  FUN_10a35a288(lStack_50 + 0x50,*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 4);
  lVar7 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != lVar7) {
    uVar8 = 0;
    do {
      plVar6 = *(long **)(lVar7 + uVar8 * 0x10 + 8);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
      }
      if ((ulong)(*(long *)(lStack_50 + 0x58) - *(long *)(lStack_50 + 0x50) >> 4) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a467bb0);
        (*pcVar5)();
      }
      FUN_10a467290();
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = *(long *)(param_2 + 0x50);
    } while (uVar8 < (ulong)(*(long *)(param_2 + 0x58) - lVar7 >> 4));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_50 + 0x68,param_2 + 0x68);
  param_1[1] = lStack_48;
  *param_1 = lStack_50;
  return;
}



/* Entry: 10a467bd4; end: 10a467dab;  */

void FUN_10a467bd4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  code **unaff_x24;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdc358);
  (**(code **)(*param_2 + 0xa8))(&uStack_b0,param_2,&PTR_DAT_110bdb1d8,"",0);
  uVar9 = (uint)plVar4;
  uVar8 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU));
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x70) = uStack_a8;
  *(undefined8 *)(param_1 + 0x68) = uStack_b0;
  *(undefined8 *)(param_1 + 0x78) = uStack_a0;
  FUN_10a35a288(param_1 + 0x50,uVar8);
  FUN_10a3281fc(param_1 + 0x80,uVar8);
  ppuVar5 = &PTR_s_value_110bdc238;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar4 != 0) {
    ppuVar5 = &PTR_s_value_110bdc238;
    (**(code **)(*param_2 + 0x210))(param_2);
    if (0 < (int)uVar9) {
      uVar10 = 0;
      unaff_x24 = &pcStack_98;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,uVar10);
        pcStack_98 = FUN_10a493d60;
        ppuStack_90 = &PTR_FUN_110bddbb0;
        ppuVar5 = &PTR_s_value_110bdc238;
        lStack_88 = param_1;
        uStack_80 = uVar10;
        FUN_10a1f46a0(param_2,&PTR_s_value_110bdc238,&pcStack_98,0);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_90)(unaff_x24 + 1);
    __Unwind_Resume();
    FUN_10a46555c();
    lVar1 = plVar4[10];
    lVar2 = plVar4[0xb];
    uVar8 = (ulong)(lVar2 - lVar1) >> 4;
    (**(code **)(*ppuVar5 + 0x40))(ppuVar5,&PTR_DAT_110bdc358,uVar8);
    FUN_10a00d760(ppuVar5,&PTR_DAT_110bdb1d8,plVar4 + 0xd);
    (**(code **)(*ppuVar5 + 0x18))(ppuVar5,&PTR_s_value_110bdc238);
    if (0 < (int)uVar8) {
      lVar11 = 0;
      uVar8 = 0;
      do {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
        if ((ulong)(plVar4[0xb] - plVar4[10] >> 4) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a467ed0);
          (*pcVar3)();
        }
        lVar7 = (long)*(char *)((long)plVar4 + 0x7f);
        plVar6 = plVar4 + 0xd;
        if (lVar7 < 0) {
          lVar7 = plVar4[0xe];
          plVar6 = (long *)plVar4[0xd];
        }
        FUN_10a398a58(ppuVar5,&PTR_s_value_110bdc238,plVar4[10] + lVar11,plVar6,lVar7);
        (**(code **)(*ppuVar5 + 0x20))(ppuVar5);
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x10;
      } while (((ulong)(lVar2 - lVar1) >> 4 & 0x7fffffff) != uVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010a467ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar5 + 0x20))(ppuVar5);
    return;
  }
  return;
}



/* Entry: 10a467dac; end: 10a46839f;  */

void FUN_10a467dac(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_10a46555c();
  uVar6 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
  uVar4 = uVar6 >> 4;
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdc358,uVar4);
  FUN_10a00d760(param_2,&PTR_DAT_110bdb1d8,param_1 + 0x68);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_value_110bdc238);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a467ed0);
        (*pcVar1)();
      }
      lVar3 = (long)*(char *)(param_1 + 0x7f);
      lVar2 = param_1 + 0x68;
      if (lVar3 < 0) {
        lVar3 = *(long *)(param_1 + 0x70);
        lVar2 = *(long *)(param_1 + 0x68);
      }
      FUN_10a398a58(param_2,&PTR_s_value_110bdc238,*(long *)(param_1 + 0x50) + lVar5,lVar2,lVar3);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((uVar6 >> 4 & 0x7fffffff) != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a467ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a4683a0; end: 10a4686f7;  */

void FUN_10a4683a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110bdc358);
  uVar3 = (uint)plVar4;
  func_0x00010983d048(param_5 + 0x50,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_value_110bdc238);
  if ((int)plVar5 == 0) {
    return;
  }
  (**(code **)(*param_6 + 0x210))(param_6,&PTR_s_value_110bdc238);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      (**(code **)(*param_6 + 0x218))(param_6,uVar6);
      (**(code **)(*param_6 + 0x108))(param_6,&PTR_s_value_110bdc238);
      if ((ulong)(*(long *)(param_5 + 0x58) - *(long *)(param_5 + 0x50) >> 4) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4684d0);
        (*pcVar2)();
      }
      puVar1 = (undefined4 *)(*(long *)(param_5 + 0x50) + lVar7);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      (**(code **)(*param_6 + 0x220))(param_6);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (((ulong)plVar4 & 0xffffffff) << 4 != lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a4684b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_6 + 0x220))(param_6);
  return;
}



/* Entry: 10a4686f8; end: 10a468727;  */

long * FUN_10a4686f8(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return param_1;
  }
  param_2 = param_2 - uVar5;
  puVar3 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar3 >> 4) < param_2) {
    lVar8 = (long)puVar3 - *param_1;
    uVar5 = param_2 + (lVar8 >> 4);
    if (uVar5 >> 0x3c != 0) {
      FUN_10a369fac();
      *param_1 = (long)&PTR_FUN_110bdc388;
      param_1[2] = (long)&PTR_FUN_110bdc410;
      param_1[7] = (long)&PTR_FUN_110bdc468;
      FUN_10a493e78(param_1 + 10);
      if (param_1[6] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      param_1[2] = (long)&PTR_DAT_110b17898;
      func_0x00010a004dac(param_1 + 3);
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a369fc0();
    }
    puVar3 = (undefined8 *)((long)plVar1 + lVar8);
    lVar8 = param_2 * 0x10;
    puVar4 = puVar3;
    do {
      puVar4[1] = 0x3f80000000000000;
      *puVar4 = 0x3f800000;
      lVar8 = lVar8 + -0x10;
      puVar4 = puVar4 + 2;
    } while (lVar8 != 0);
    lVar8 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar2 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)(puVar3 + param_2 * 2);
    param_1[2] = (long)(plVar1 + uVar7 * 2);
    param_1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar2;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_2 != 0) {
      puVar4 = puVar3 + param_2 * 2;
      lVar8 = param_2 * 0x10;
      do {
        puVar3[1] = 0x3f80000000000000;
        *puVar3 = 0x3f800000;
        lVar8 = lVar8 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar8 != 0);
    }
    param_1[1] = (long)puVar4;
  }
  return param_1;
}



/* Entry: 10a468728; end: 10a46881f;  */

void FUN_10a468728(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_10a46555c();
  uVar4 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
  uVar2 = uVar4 >> 4;
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdc358,uVar2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_value_110bdc238);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a468820);
        (*pcVar1)();
      }
      (**(code **)(*param_2 + 0xe0))
                (param_2,&PTR_s_value_110bdc238,*(long *)(param_1 + 0x50) + lVar3);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((uVar4 >> 4 & 0x7fffffff) != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a468818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a468820; end: 10a468a97;  */

void FUN_10a468820(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdc358);
  uVar3 = (uint)plVar4;
  FUN_10a4248c8(param_1 + 0x50,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_value_110bdc238);
  if ((int)plVar5 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_value_110bdc238);
    if (0 < (int)uVar3) {
      lVar8 = 0;
      uVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,uVar7);
        (**(code **)(*param_2 + 0x1c8))(&uStack_74,param_2,&PTR_s_value_110bdc238);
        uVar6 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x71c71c71c71c71c7;
        if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a46897c);
          (*pcVar2)();
        }
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar8);
        *(undefined4 *)(puVar1 + 4) = uStack_54;
        puVar1[1] = uStack_6c;
        *puVar1 = uStack_74;
        puVar1[3] = uStack_5c;
        puVar1[2] = uStack_64;
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x24;
      } while (((ulong)plVar4 & 0xffffffff) * 0x24 - lVar8 != 0);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a468a98; end: 10a468bcb;  */

void FUN_10a468a98(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdc358);
  uVar3 = (uint)plVar4;
  FUN_10a01066c(param_1 + 0x50,uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_value_110bdc238);
  if ((int)plVar5 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_value_110bdc238);
    if (0 < (int)uVar3) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,uVar6);
        (**(code **)(*param_2 + 0x1a8))(&uStack_80,param_2,&PTR_s_value_110bdc238);
        if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 6) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a468bcc);
          (*pcVar2)();
        }
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar7);
        puVar1[5] = uStack_58;
        puVar1[4] = uStack_60;
        puVar1[7] = uStack_48;
        puVar1[6] = uStack_50;
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x40;
      } while (((ulong)plVar4 & 0xffffffff) << 6 != lVar7);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a468bcc; end: 10a468c73;  */

undefined8 * FUN_10a468bcc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a468c74; end: 10a468d3b;  */

undefined8 * FUN_10a468c74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[2] = &PTR_DAT_110bdba90;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_DAT_110bdba08;
  param_1[7] = &PTR_FUN_110bdbae8;
  func_0x00010a493ed0(auStack_38,&uStack_21);
  FUN_10a468bcc(param_1 + 10,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return param_1;
}



/* Entry: 10a468d3c; end: 10a468d83;  */

void FUN_10a468d3c(long param_1,long *param_2)

{
  long lVar1;
  
  FUN_10a46555c();
  lVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x50) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a468d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_value_110bdc238,lVar1);
  return;
}



/* Entry: 10a468d84; end: 10a468e67;  */

void FUN_10a468d84(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_value_110bdc238);
  if ((int)plVar3 != 0) {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + 0x50,auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar3 = plStack_40 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_value_110bdc238);
    lVar4 = 0;
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar4 = *(long *)(param_1 + 0x50) + 0x58;
    }
    (**(code **)(*param_2 + 0x1e0))(param_2,lVar4);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a468e68; end: 10a468f5f;  */

void FUN_10a468e68(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_10a46555c();
  uVar4 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50);
  uVar2 = uVar4 >> 6;
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdc358,uVar2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_value_110bdc238);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 6) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a468f60);
        (*pcVar1)();
      }
      (**(code **)(*param_2 + 0xf0))
                (param_2,&PTR_s_value_110bdc238,*(long *)(param_1 + 0x50) + lVar3);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x40;
    } while ((uVar4 >> 6 & 0x7fffffff) != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a468f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a468f60; end: 10a469333;  */

void FUN_10a468f60(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdc358);
  uVar6 = (uint)plVar8;
  FUN_10a469334(param_1 + 0x50);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bdac58);
  uVar7 = (uint)plVar8;
  uVar2 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x68) = uVar2;
  (**(code **)(*param_2 + 0xa0))(&uStack_c0,param_2,&PTR_DAT_110bdac78);
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  *(ulong *)(param_1 + 0x78) = uStack_b8;
  *(ulong *)(param_1 + 0x70) = uStack_c0;
  *(ulong *)(param_1 + 0x80) = uStack_b0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_value_110bdc238);
  if ((int)plVar8 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_value_110bdc238);
    if (0 < (int)uVar6) {
      uVar12 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,uVar12);
        uVar9 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x5555555555555555;
        if (uVar9 < uVar12 || uVar9 - uVar12 == 0) {
LAB_10a4692f0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4692f4);
          (*pcVar5)();
        }
        FUN_10a465e7c(*(long *)(param_1 + 0x50) + uVar12 * 0x18,(ulong)uVar2);
        if (0 < (int)uVar7) {
          uVar9 = 0;
          do {
            (**(code **)(*param_2 + 0x218))(param_2,uVar9);
            FUN_10a46604c(&uStack_70,param_2);
            FUN_10a46614c(&uStack_80,uStack_70);
            (**(code **)(*param_2 + 0xa0))(&uStack_98,param_2,&PTR_s_propertyName_110bdacb8);
            if (cStack_81 < '\0') {
              func_0x000107c3192c(&uStack_c0,uStack_98,uStack_90);
            }
            else {
              uStack_b8 = uStack_90;
              uStack_c0 = uStack_98;
              uStack_b0 = CONCAT17(cStack_81,uStack_88);
            }
            plStack_a0 = plStack_78;
            uStack_a8 = uStack_80;
            if (plStack_78 != (long *)0x0) {
              plVar8 = plStack_78 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = *plVar8 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            uVar10 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) *
                     -0x5555555555555555;
            if ((uVar10 < uVar12 || uVar10 - uVar12 == 0) ||
               (plVar8 = (long *)(*(long *)(param_1 + 0x50) + uVar12 * 0x18), lVar11 = *plVar8,
               uVar10 = (plVar8[1] - lVar11 >> 3) * -0x3333333333333333,
               uVar10 < uVar9 || uVar10 - uVar9 == 0)) goto LAB_10a4692f0;
            puVar13 = (ulong *)(lVar11 + uVar9 * 0x28);
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              __ZdlPv(*puVar13);
            }
            puVar13[2] = uStack_b0;
            puVar13[1] = uStack_b8;
            *puVar13 = uStack_c0;
            uStack_b0 = uStack_b0 & 0xffffffffffffff;
            uStack_c0 = uStack_c0 & 0xffffffffffffff00;
            func_0x00010a473a9c(puVar13 + 3,&uStack_a8);
            plVar8 = plStack_a0;
            if (plStack_a0 != (long *)0x0) {
              plVar1 = plStack_a0 + 1;
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if ((long)uStack_b0 < 0) {
              __ZdlPv(uStack_c0);
            }
            (**(code **)(*param_2 + 0x220))(param_2);
            if (cStack_81 < '\0') {
              __ZdlPv(uStack_98);
            }
            plVar8 = plStack_78;
            if (plStack_78 != (long *)0x0) {
              plVar1 = plStack_78 + 1;
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_78 + 0x10))(plStack_78);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            plVar8 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar1 = plStack_68 + 1;
              do {
                lVar11 = *plVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar2);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar12 = uVar12 + 1;
      } while (uVar12 != (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)));
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a469334; end: 10a4694ff;  */

void FUN_10a469334(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined **ppuStack_130;
  undefined1 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  
  lVar17 = *param_1;
  lVar14 = param_1[1];
  lVar12 = lVar14 - lVar17 >> 3;
  bVar6 = param_2 < (long *)(lVar12 * -0x5555555555555555);
  uVar16 = (long)param_2 + lVar12 * 0x5555555555555555;
  if (bVar6 || uVar16 == 0) {
    if (bVar6) {
      lVar17 = lVar17 + (long)param_2 * 0x18;
      while (lVar14 != lVar17) {
        lVar14 = lVar14 + -0x18;
        FUN_10a4740f0(lVar14);
      }
      param_1[1] = lVar17;
    }
  }
  else if ((ulong)((param_1[2] - lVar14 >> 3) * -0x5555555555555555) < uVar16) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10a474098();
      FUN_10a46555c();
      lVar17 = (param_1[0xb] - param_1[10] >> 3) * -0x5555555555555555;
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdc358,lVar17);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdac58,(int)param_1[0xd]);
      FUN_10a00d760(param_2,&PTR_DAT_110bdac78,param_1 + 0xe);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_value_110bdc238);
      lVar17 = lVar17 << 0x20;
      if (lVar17 != 0) {
        uVar16 = 0;
        do {
          (**(code **)(*param_2 + 0x10))(param_2);
          uVar10 = (param_1[0xb] - param_1[10] >> 3) * -0x5555555555555555;
          if (uVar10 < uVar16 || uVar10 - uVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4697b4);
            (*pcVar5)();
          }
          plVar13 = (long *)(param_1[10] + uVar16 * 0x18);
          lVar12 = plVar13[1];
          for (lVar14 = *plVar13; lVar14 != lVar12; lVar14 = lVar14 + 0x28) {
            (**(code **)(*param_2 + 0x10))(param_2);
            ppuVar7 = &PTR_s_propertyName_110bdacb8;
            FUN_10a00d760(param_2,&PTR_s_propertyName_110bdacb8,lVar14);
            plVar13 = *(long **)(lVar14 + 0x18);
            if (plVar13 == (long *)0x0) {
              uStack_128 = 0;
              uStack_110 = 0;
              uStack_118 = 0;
              uStack_100 = 0;
              uStack_108 = 0;
              ppuStack_130 = &PTR_DAT_110bf2dc0;
              ppuStack_120 = &PTR_DAT_110bf2e30;
              ppuStack_f8 = &PTR_DAT_110bf2e88;
              func_0x00010a0fda30();
              uStack_e0 = 0;
              lStack_d8 = 0;
              ppuStack_130 = &PTR_FUN_110bdb0e8;
              ppuStack_120 = &PTR_FUN_110bdb170;
              ppuStack_f8 = &PTR_FUN_110bdb1c8;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              lStack_c0 = 0;
              plStack_b0 = (long *)0x0;
              plStack_f0 = plVar13;
              ppuStack_e8 = ppuVar7;
              FUN_10a46640c(&ppuStack_130,param_2);
              plVar13 = plStack_b0;
              ppuStack_130 = &PTR_FUN_110bdb0e8;
              ppuStack_120 = &PTR_FUN_110bdb170;
              ppuStack_f8 = &PTR_FUN_110bdb1c8;
              if (plStack_b0 != (long *)0x0) {
                plVar1 = plStack_b0 + 1;
                do {
                  lVar11 = *plVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
              if (lStack_c0 < 0) {
                __ZdlPv(uStack_d0);
              }
              ppuStack_130 = &PTR_DAT_110bdc268;
              ppuStack_120 = &PTR_FUN_110bdc2f0;
              ppuStack_f8 = &PTR_FUN_110bdc348;
              if (lStack_d8 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10a572f54(&ppuStack_130);
            }
            else {
              (**(code **)(*plVar13 + 0x18))(plVar13,param_2);
            }
            (**(code **)(*param_2 + 0x20))(param_2);
          }
          (**(code **)(*param_2 + 0x20))(param_2);
          uVar16 = uVar16 + 1;
        } while (uVar16 != lVar17 >> 0x20);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      return;
    }
    lVar12 = param_1[2] - lVar17 >> 3;
    plVar13 = (long *)(lVar12 * 0x5555555555555556);
    if (plVar13 < param_2 || (long)plVar13 - (long)param_2 == 0) {
      plVar13 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      plVar13 = (long *)0xaaaaaaaaaaaaaaa;
    }
    FUN_10a4740ac();
    lVar17 = (long)plVar13 + (lVar14 - lVar17);
    lVar14 = ((uVar16 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar17,lVar14);
    puVar15 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar15 + (lVar17 - (long)puVar3));
    puVar8 = puVar2;
    puVar9 = puVar15;
    if (puVar3 != puVar15) {
      do {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        uVar18 = *puVar9;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar18;
        puVar8[2] = puVar9[2];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9 = puVar9 + 3;
        puVar8 = puVar8 + 3;
      } while (puVar9 != puVar3);
      do {
        FUN_10a4740f0(puVar15);
        puVar15 = puVar15 + 3;
      } while (puVar15 != puVar3);
      puVar15 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = lVar17 + lVar14;
    param_1[2] = (long)(plVar13 + (long)param_2 * 3);
    if (puVar15 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar15);
      return;
    }
  }
  else {
    lVar17 = ((uVar16 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar14,lVar17);
    param_1[1] = lVar14 + lVar17;
  }
  return;
}



/* Entry: 10a469500; end: 10a4697c7;  */

void FUN_10a469500(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuStack_f0;
  undefined1 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  FUN_10a46555c();
  lVar11 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x5555555555555555;
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdc358,lVar11);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bdac58,*(undefined4 *)(param_1 + 0x68));
  FUN_10a00d760(param_2,&PTR_DAT_110bdac78,param_1 + 0x70);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_value_110bdc238);
  lVar11 = lVar11 << 0x20;
  if (lVar11 != 0) {
    uVar10 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      uVar8 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x5555555555555555;
      if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4697b4);
        (*pcVar5)();
      }
      plVar7 = (long *)(*(long *)(param_1 + 0x50) + uVar10 * 0x18);
      lVar2 = plVar7[1];
      for (lVar12 = *plVar7; lVar12 != lVar2; lVar12 = lVar12 + 0x28) {
        (**(code **)(*param_2 + 0x10))(param_2);
        ppuVar6 = &PTR_s_propertyName_110bdacb8;
        FUN_10a00d760(param_2,&PTR_s_propertyName_110bdacb8,lVar12);
        plVar7 = *(long **)(lVar12 + 0x18);
        if (plVar7 == (long *)0x0) {
          uStack_e8 = 0;
          uStack_d0 = 0;
          uStack_d8 = 0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          ppuStack_f0 = &PTR_DAT_110bf2dc0;
          ppuStack_e0 = &PTR_DAT_110bf2e30;
          ppuStack_b8 = &PTR_DAT_110bf2e88;
          func_0x00010a0fda30();
          uStack_a0 = 0;
          lStack_98 = 0;
          ppuStack_f0 = &PTR_FUN_110bdb0e8;
          ppuStack_e0 = &PTR_FUN_110bdb170;
          ppuStack_b8 = &PTR_FUN_110bdb1c8;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          lStack_80 = 0;
          plStack_70 = (long *)0x0;
          plStack_b0 = plVar7;
          ppuStack_a8 = ppuVar6;
          FUN_10a46640c(&ppuStack_f0,param_2);
          plVar7 = plStack_70;
          ppuStack_f0 = &PTR_FUN_110bdb0e8;
          ppuStack_e0 = &PTR_FUN_110bdb170;
          ppuStack_b8 = &PTR_FUN_110bdb1c8;
          if (plStack_70 != (long *)0x0) {
            plVar1 = plStack_70 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if (lStack_80 < 0) {
            __ZdlPv(uStack_90);
          }
          ppuStack_f0 = &PTR_DAT_110bdc268;
          ppuStack_e0 = &PTR_FUN_110bdc2f0;
          ppuStack_b8 = &PTR_FUN_110bdc348;
          if (lStack_98 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_10a572f54(&ppuStack_f0);
        }
        else {
          (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
        }
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 != lVar11 >> 0x20);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a4697c8; end: 10a469b5f;  */

void FUN_10a4697c8(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long *plVar14;
  long lStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  
  if (param_4 == 0) {
    uVar7 = param_2;
    uVar6 = param_3;
    func_0x00010a0fda30();
  }
  else {
    uStack_98 = *(ulong *)(param_2 + 0x48);
    uStack_a0 = *(ulong *)(param_2 + 0x40);
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&uStack_a0);
    puVar2 = (undefined8 *)((ulong)&uStack_a0 | 8);
    puVar13 = &uStack_a0;
    if (lVar9 != 0) {
      puVar2 = (undefined8 *)(lVar9 + 0x28);
      puVar13 = (ulong *)(lVar9 + 0x20);
    }
    uVar6 = *puVar2;
    uVar7 = *puVar13;
  }
  FUN_10a494068(&lStack_70,uVar7,uVar6);
  lVar9 = lStack_70;
  FUN_10a469334(lStack_70 + 0x50,
                (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) * -0x5555555555555555);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar9 + 0x70,param_2 + 0x70);
  plVar8 = *(long **)(param_2 + 0x50);
  if (*(long **)(param_2 + 0x58) == plVar8) {
    *(undefined4 *)(lVar9 + 0x68) = 0;
    lStack_70 = lVar9;
  }
  else {
    uVar7 = 0;
    *(int *)(lVar9 + 0x68) = (int)((ulong)(plVar8[1] - *plVar8) >> 3) * -0x33333333;
    do {
      uVar10 = (*(long *)(lStack_70 + 0x58) - *(long *)(lStack_70 + 0x50) >> 3) *
               -0x5555555555555555;
      if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
LAB_10a469b28:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a469b2c);
        (*pcVar5)();
      }
      FUN_10a465e7c(*(long *)(lStack_70 + 0x50) + uVar7 * 0x18,(long)*(int *)(lStack_70 + 0x68));
      uVar10 = (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) * -0x5555555555555555;
      if (uVar10 < uVar7 || uVar10 - uVar7 == 0) goto LAB_10a469b28;
      plVar8 = (long *)(*(long *)(param_2 + 0x50) + uVar7 * 0x18);
      lVar9 = *plVar8;
      if (plVar8[1] != lVar9) {
        uVar12 = 0;
        do {
          puVar13 = (ulong *)(lVar9 + uVar12 * 0x28);
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            func_0x000107c3192c(&uStack_a0,*puVar13,puVar13[1]);
          }
          else {
            uStack_98 = puVar13[1];
            uStack_a0 = *puVar13;
            uStack_90 = puVar13[2];
          }
          plVar14 = (long *)puVar13[3];
          plVar8 = &lStack_88;
          if (((plVar14 != (long *)0x0) &&
              ((**(code **)(*plVar14 + 0x48))(&lStack_b0,plVar14,param_3,param_4), lStack_b0 != 0))
             && (lVar9 = lStack_b0,
                ___dynamic_cast(lStack_b0,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0), lVar9 != 0)) {
            plStack_80 = plStack_a8;
            plVar8 = &lStack_b0;
          }
          *plVar8 = 0;
          plVar8[1] = 0;
          uVar10 = (*(long *)(lStack_70 + 0x58) - *(long *)(lStack_70 + 0x50) >> 3) *
                   -0x5555555555555555;
          if ((uVar10 < uVar7 || uVar10 - uVar7 == 0) ||
             (plVar8 = (long *)(*(long *)(lStack_70 + 0x50) + uVar7 * 0x18), lVar9 = *plVar8,
             uVar10 = (plVar8[1] - lVar9 >> 3) * -0x3333333333333333,
             uVar10 < uVar12 || uVar10 - uVar12 == 0)) goto LAB_10a469b28;
          puVar13 = (ulong *)(lVar9 + uVar12 * 0x28);
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            __ZdlPv(*puVar13);
          }
          puVar13[2] = uStack_90;
          puVar13[1] = uStack_98;
          *puVar13 = uStack_a0;
          uStack_90 = uStack_90 & 0xffffffffffffff;
          uStack_a0 = uStack_a0 & 0xffffffffffffff00;
          func_0x00010a473a9c(puVar13 + 3,&lStack_88);
          plVar8 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar1 = plStack_80 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          plVar8 = plStack_a8;
          if ((long)uStack_90 < 0) {
            __ZdlPv(uStack_a0);
            plVar8 = plStack_a8;
          }
          plStack_a8 = plVar8;
          if ((plVar14 != (long *)0x0) && (plVar8 != (long *)0x0)) {
            plVar14 = plVar8 + 1;
            do {
              lVar9 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          uVar10 = (*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3) *
                   -0x5555555555555555;
          if (uVar10 < uVar7 || uVar10 - uVar7 == 0) goto LAB_10a469b28;
          uVar12 = uVar12 + 1;
          plVar8 = (long *)(*(long *)(param_2 + 0x50) + uVar7 * 0x18);
          lVar9 = *plVar8;
          uVar11 = (plVar8[1] - lVar9 >> 3) * -0x3333333333333333;
        } while (uVar12 <= uVar11 && uVar11 - uVar12 != 0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10);
  }
  *param_1 = lStack_70;
  param_1[1] = lStack_68;
  return;
}



/* Entry: 10a469b60; end: 10a469c0f;  */

undefined8 * FUN_10a469b60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bdbc08;
  FUN_10a474158(param_1 + 2);
  return param_1;
}



/* Entry: 10a469c10; end: 10a469d37;  */

void FUN_10a469c10(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong unaff_x24;
  long lVar18;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    lVar11 = param_2[1];
    lVar14 = *param_2;
    plVar8[1] = param_2[1];
    *plVar8 = lVar14;
    if (lVar11 != 0) {
      plVar10 = (long *)(lVar11 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8 = plVar8 + 2;
LAB_10a469d14:
    param_1[1] = (long)plVar8;
    return;
  }
  lVar11 = *param_1;
  lVar14 = (long)plVar8 - lVar11;
  lVar17 = lVar14 >> 4;
  uVar1 = lVar17 + 1;
  plVar8 = param_1;
  plVar10 = param_2;
  if (uVar1 >> 0x3c == 0) {
    uVar12 = param_1[2] - lVar11;
    unaff_x24 = (long)uVar12 >> 3;
    if (unaff_x24 <= uVar1) {
      unaff_x24 = uVar1;
    }
    if (0x7fffffffffffffef < uVar12) {
      unaff_x24 = 0xfffffffffffffff;
    }
    if (unaff_x24 >> 0x3c == 0) {
      lVar7 = unaff_x24 << 4;
      __Znwm();
      plVar10 = (long *)(lVar7 + lVar14);
      lVar13 = param_2[1];
      lVar18 = *param_2;
      plVar10[1] = param_2[1];
      *plVar10 = lVar18;
      if (lVar13 != 0) {
        plVar8 = (long *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar11 = *param_1;
        lVar14 = param_1[1] - lVar11;
        lVar17 = lVar14 >> 4;
      }
      plVar8 = plVar10 + 2;
      _memcpy(plVar10 + lVar17 * -2,lVar11,lVar14);
      *param_1 = (long)(plVar10 + lVar17 * -2);
      param_1[1] = (long)plVar8;
      param_1[2] = lVar7 + unaff_x24 * 0x10;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10a469d14;
    }
  }
  else {
    FUN_10a4741b4();
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10a469d38;
  plVar9 = plVar10;
  uStack_90 = unaff_x24;
  lStack_88 = lVar17;
  plStack_80 = param_2;
  lStack_78 = lVar14;
  lStack_70 = lVar11;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar10 + 0x200))(plVar10,&PTR_s_values_110bdbc40);
  if ((int)plVar9 != 0) {
    (**(code **)(*plVar10 + 0x210))(plVar10,&PTR_s_values_110bdbc40);
    if ((plVar8[5] != 0) && (*(long *)(plVar8[5] + 0xd20) != 0)) {
      puVar4 = (undefined8 *)plVar8[3];
      for (puVar16 = (undefined8 *)plVar8[2]; puVar16 != puVar4; puVar16 = puVar16 + 2) {
        uStack_a0 = *puVar16;
        plVar9 = (long *)puVar16[1];
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_98 = plVar9;
        (**(code **)(**(long **)(plVar8[5] + 0xd20) + 0x38))();
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 1;
          do {
            lVar11 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
    }
    lVar11 = plVar8[2];
    lVar14 = plVar8[3];
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      FUN_10a3b8e74();
    }
    plVar8[3] = lVar11;
    plVar9 = plVar10;
    (**(code **)(*plVar10 + 0x208))();
    if ((int)plVar9 != 0) {
      iVar15 = 0;
      do {
        (**(code **)(*plVar10 + 0x218))(plVar10,iVar15);
        FUN_10a46604c(&uStack_a0,plVar10);
        FUN_10a46614c(auStack_b0,uStack_a0);
        func_0x00010a469bc0(plVar8,auStack_b0);
        plVar2 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar3 = plStack_a8 + 1;
          do {
            lVar11 = *plVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        (**(code **)(*plVar10 + 0x220))(plVar10);
        plVar2 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar3 = plStack_98 + 1;
          do {
            lVar11 = *plVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar6) {
              *plVar3 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != (int)plVar9);
    }
    (**(code **)(*plVar10 + 0x220))(plVar10);
  }
  return;
}



/* Entry: 10a469d38; end: 10a469f63;  */

void FUN_10a469d38(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_values_110bdbc40);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_values_110bdbc40);
    if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0xd20) != 0)) {
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      for (puVar10 = *(undefined8 **)(param_1 + 0x10); puVar10 != puVar3; puVar10 = puVar10 + 2) {
        uStack_50 = *puVar10;
        plVar6 = (long *)puVar10[1];
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_48 = plVar6;
        (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0xd20) + 0x38))();
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar8 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    while (lVar7 != lVar8) {
      lVar7 = lVar7 + -0x10;
      FUN_10a3b8e74();
    }
    *(long *)(param_1 + 0x18) = lVar8;
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar6 != 0) {
      iVar9 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar9);
        FUN_10a46604c(&uStack_50,param_2);
        FUN_10a46614c(auStack_60,uStack_50);
        func_0x00010a469bc0(param_1,auStack_60);
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar2 = plStack_58 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        plVar1 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar2 = plStack_48 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != (int)plVar6);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a469f64; end: 10a469fd7;  */

void FUN_10a469f64(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_values_110bdbc40);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*param_2 + 0x128))(param_2,*puVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a469fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a469fd8; end: 10a46a20b;  */

undefined8 * FUN_10a469fd8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  *(undefined1 *)(puVar7 + 1) = 0;
  *puVar7 = &PTR_FUN_110bdbc08;
  puVar7[2] = 0;
  puVar7[3] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar7[4] = 0;
  puVar7[5] = uVar8;
  plVar2 = *(long **)(param_1 + 0x18);
  for (plVar10 = *(long **)(param_1 + 0x10); plVar10 != plVar2; plVar10 = plVar10 + 2) {
    (**(code **)(*(long *)*plVar10 + 0x48))(&uStack_60,(long *)*plVar10,0,param_2);
    plVar6 = plStack_58;
    plStack_48 = plStack_58;
    uStack_50 = uStack_60;
    uVar8 = uStack_70;
    uVar3 = uStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar3 = uStack_60;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar3 = uStack_60;
        if (lVar9 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          uVar8 = uStack_70;
          uVar3 = uStack_50;
          plVar6 = plStack_48;
        }
      }
    }
    uStack_70 = uVar3;
    uStack_50 = uStack_70;
    plStack_48 = plVar6;
    if (param_2 != 0) {
      uVar8 = *(undefined8 *)(*plVar10 + 0x40);
      uVar3 = *(undefined8 *)(*plVar10 + 0x48);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plStack_68 = plVar6;
      FUN_10a572464(param_2,uVar8,uVar3,&uStack_70);
      uVar8 = uStack_70;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          uVar8 = uStack_70;
        }
      }
    }
    uStack_70 = uVar8;
    plStack_78 = plStack_48;
    uStack_80 = uStack_50;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    func_0x00010a469bc0(puVar7,&uStack_80);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return puVar7;
}



/* Entry: 10a46a20c; end: 10a46a20f;  */

long FUN_10a46a20c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46a210; end: 10a46a223;  */

void FUN_10a46a210(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a224; end: 10a46a277;  */

undefined1  [16] FUN_10a46a224(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10e4b880f;
  return auVar1;
}



/* Entry: 10a46a278; end: 10a46a367;  */

void FUN_10a46a278(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar3 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar2 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar1 = &puStack_40;
    if (param_4 != 0) {
      puVar2 = (undefined8 *)(param_4 + 0x28);
      ppuVar1 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar2;
    lVar3 = (long)*ppuVar1;
  }
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bddc28;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xb] = lVar3;
  puVar2[0xc] = param_3;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puStack_40 = puVar2 + 3;
  *puStack_40 = &PTR_FUN_110bde308;
  puVar2[5] = &PTR_FUN_110bde390;
  puVar2[10] = &PTR_DAT_110bde3e8;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puStack_38 = puVar2;
  FUN_10a49422c(&puStack_40);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  param_1[1] = puStack_38;
  *param_1 = puStack_40;
  *(undefined4 *)(puStack_40 + 10) = uVar4;
  return;
}



/* Entry: 10a46a368; end: 10a46a3f7;  */

void FUN_10a46a368(long param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puStack_28 = (undefined8 *)(double)*(float *)(param_1 + 0x50);
  aiStack_30[0] = 3;
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46a3f8; end: 10a46a40f;  */

void FUN_10a46a3f8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  puStack_18 = (undefined8 *)(double)*(float *)(param_2 + 0x50);
  aiStack_20[0] = 3;
  func_0x0001098968d0(param_1 + 1,aiStack_20);
  if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
    (**(code **)*puStack_18)();
  }
  return;
}



/* Entry: 10a46a410; end: 10a46a45f;  */

void FUN_10a46a410(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbc90,0);
  return;
}



/* Entry: 10a46a460; end: 10a46a467;  */

undefined8 * FUN_10a46a460(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46a468; end: 10a46a47f;  */

void FUN_10a46a468(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a480; end: 10a46a49f;  */

bool FUN_10a46a480(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x10) && (*param_2 == 0x6c462e65756c6156 && param_2[1] == 0x65756c615674616f)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46a4a0; end: 10a46a4b7;  */

void FUN_10a46a4a0(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a4b8; end: 10a46a4f7;  */

bool FUN_10a46a4b8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46a4f8; end: 10a46a50b;  */

void FUN_10a46a4f8(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a50c; end: 10a46a563;  */

undefined1  [16] FUN_10a46a50c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b88b1;
  return auVar1;
}



/* Entry: 10a46a564; end: 10a46a653;  */

void FUN_10a46a564(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 == 0) {
    lVar4 = param_2;
    func_0x00010a0fda30();
  }
  else {
    puStack_38 = *(undefined8 **)(param_2 + 0x48);
    puStack_40 = *(undefined8 **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_40);
    puVar3 = (undefined8 *)((ulong)&puStack_40 | 8);
    ppuVar2 = &puStack_40;
    if (param_4 != 0) {
      puVar3 = (undefined8 *)(param_4 + 0x28);
      ppuVar2 = (undefined8 **)(param_4 + 0x20);
    }
    param_3 = *puVar3;
    lVar4 = (long)*ppuVar2;
  }
  puVar3 = (undefined8 *)0x70;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110bddc78;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[0xb] = lVar4;
  puVar3[0xc] = param_3;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puStack_40 = puVar3 + 3;
  *puStack_40 = &PTR_DAT_110bda168;
  puVar3[5] = &PTR_FUN_110bda1f0;
  puVar3[10] = &PTR_DAT_110bda248;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puStack_38 = puVar3;
  FUN_10a49431c(&puStack_40);
  uVar1 = *(undefined1 *)(param_2 + 0x50);
  param_1[1] = puStack_38;
  *param_1 = puStack_40;
  *(undefined1 *)(puStack_40 + 10) = uVar1;
  return;
}



/* Entry: 10a46a654; end: 10a46a6df;  */

void FUN_10a46a654(long param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  uStack_28 = *(undefined1 *)(param_1 + 0x50);
  aiStack_30[0] = 2;
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && ((undefined8 *)CONCAT71(uStack_27,uStack_28) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_27,uStack_28))();
  }
  return;
}



/* Entry: 10a46a6e0; end: 10a46a6f7;  */

void FUN_10a46a6e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_20 [2];
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  uStack_18 = *(undefined1 *)(param_2 + 0x50);
  aiStack_20[0] = 2;
  func_0x0001098968d0(param_1 + 1,aiStack_20);
  if ((3 < aiStack_20[0]) && ((undefined8 *)CONCAT71(uStack_17,uStack_18) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_17,uStack_18))();
  }
  return;
}



/* Entry: 10a46a6f8; end: 10a46a757;  */

uint FUN_10a46a6f8(long param_1,long param_2)

{
  uint extraout_w8;
  uint uVar1;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbcc0,0);
  uVar1 = extraout_w8;
  if (param_2 != 0) {
    uVar1 = (uint)(*(char *)(param_1 + 0x50) == *(char *)(param_2 + 0x50));
  }
  return param_2 != 0 & uVar1;
}



/* Entry: 10a46a758; end: 10a46a75f;  */

undefined8 * FUN_10a46a758(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46a760; end: 10a46a777;  */

void FUN_10a46a760(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a778; end: 10a46a797;  */

bool FUN_10a46a778(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x6f422e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c61566c6f6f)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46a798; end: 10a46a7af;  */

void FUN_10a46a798(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a7b0; end: 10a46a7b3;  */

long FUN_10a46a7b0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46a7b4; end: 10a46a7c7;  */

void FUN_10a46a7b4(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46a7c8; end: 10a46a81f;  */

undefined1  [16] FUN_10a46a7c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10e4b8820;
  return auVar1;
}



/* Entry: 10a46a820; end: 10a46a957;  */

void FUN_10a46a820(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x70;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bddcc8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bda268;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined4 *)(plVar4 + 0xd) = 0;
  plVar4[5] = (long)&PTR_FUN_110bda2f0;
  plVar4[10] = (long)&PTR_DAT_110bda348;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(param_2 + 0x50);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46a958; end: 10a46a9e7;  */

void FUN_10a46a958(long param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  aiStack_30[0] = 3;
  puStack_28 = (undefined8 *)(double)*(int *)(param_1 + 0x50);
  FUN_10a3b6bb0(param_3,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46a9e8; end: 10a46a9ff;  */

void FUN_10a46a9e8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  aiStack_20[0] = 3;
  puStack_18 = (undefined8 *)(double)*(int *)(param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_20);
  if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
    (**(code **)*puStack_18)();
  }
  return;
}



/* Entry: 10a46aa00; end: 10a46aa4f;  */

void FUN_10a46aa00(undefined8 param_1,undefined8 param_2)

{
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbcf0,0);
  return;
}



/* Entry: 10a46aa50; end: 10a46aa57;  */

undefined8 * FUN_10a46aa50(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46aa58; end: 10a46aa6f;  */

void FUN_10a46aa58(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46aa70; end: 10a46aa8f;  */

bool FUN_10a46aa70(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xe) &&
     (*param_2 == 0x6e492e65756c6156 && *(long *)((long)param_2 + 6) == 0x65756c6156746e49)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46aa90; end: 10a46aaa7;  */

void FUN_10a46aa90(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46aaa8; end: 10a46aaab;  */

long FUN_10a46aaa8(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46aaac; end: 10a46aabf;  */

void FUN_10a46aaac(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46aac0; end: 10a46ab17;  */

undefined1  [16] FUN_10a46aac0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10e4b882f;
  return auVar1;
}



/* Entry: 10a46ab18; end: 10a46ac4b;  */

void FUN_10a46ab18(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    lVar6 = param_2;
    func_0x00010a0fda30();
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    plVar4 = (long *)((ulong)&lStack_50 | 8);
    plVar5 = &lStack_50;
    if (param_4 != 0) {
      plVar4 = (long *)(param_4 + 0x28);
      plVar5 = (long *)(param_4 + 0x20);
    }
    param_3 = *plVar4;
    lVar6 = *plVar5;
  }
  plVar4 = (long *)0x70;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_DAT_110bddd18;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bda368;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xc] = param_3;
  plVar4[0xd] = 0;
  plVar4[5] = (long)&PTR_FUN_110bda3f0;
  plVar4[10] = (long)&PTR_DAT_110bda448;
  plVar4[0xb] = lVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  plVar4[0xd] = *(long *)(param_2 + 0x50);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a46ac4c; end: 10a46ad6f;  */

void FUN_10a46ac4c(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_50 = (long *)plVar2[4];
    if (plStack_50 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_50 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_50;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_110b9fae8;
    plStack_50[1] = *(long *)(param_1 + 0x50);
    plStack_48 = plVar2;
    FUN_10a07afac(aiStack_60,plVar3,&plStack_50);
    plVar2 = plStack_50;
    plStack_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_48);
    }
    FUN_10a3b6bb0(param_3,param_2,aiStack_60);
    if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
      (**(code **)*puStack_58)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a46ad40);
  (*pcVar1)();
}



/* Entry: 10a46ad70; end: 10a46ad87;  */

void FUN_10a46ad70(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10a07aef4(aiStack_30,*param_1,param_2 + 0x50);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a46ad88; end: 10a46ade7;  */

bool FUN_10a46ad88(long param_1,long param_2)

{
  bool bVar1;
  
  ___dynamic_cast(param_2,&PTR_DAT_110bde410,&PTR_DAT_110bdbd20,0);
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x54) == *(float *)(param_2 + 0x54)) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x50)) && !NAN(*(float *)(param_2 + 0x50)))) {
      bVar1 = *(float *)(param_1 + 0x50) == *(float *)(param_2 + 0x50);
    }
  }
  return bVar1;
}



/* Entry: 10a46ade8; end: 10a46adef;  */

undefined8 * FUN_10a46ade8(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a46adf0; end: 10a46ae07;  */

void FUN_10a46adf0(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46ae08; end: 10a46ae27;  */

bool FUN_10a46ae08(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0xf) &&
     (*param_2 == 0x65562e65756c6156 && *(long *)((long)param_2 + 7) == 0x65756c6156326365)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x756c6156 && *(char *)((long)param_2 + 4) == 'e')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a46ae28; end: 10a46ae3f;  */

void FUN_10a46ae28(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a46ae40; end: 10a46ae43;  */

long FUN_10a46ae40(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a46ae44; end: 10a46ae57;  */

void FUN_10a46ae44(void)

{
  FUN_10a572f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


