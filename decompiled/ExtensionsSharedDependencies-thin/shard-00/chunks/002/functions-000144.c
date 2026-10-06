/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003908fc; end: 003909d7;  */

void FUN_003908fc(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 uVar14;
  long *plStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  long *plStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  long lStack_e8;
  undefined1 auStack_b8 [32];
  long lStack_98;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *(long *)(param_1 + 0x20) + 0x180;
  plVar12 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = param_2[1];
  plStack_50 = (long *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  FUN_00390740(param_1,lVar11,"grpc-tags-bin",0xd,&plStack_50);
  iVar8 = (int)lVar11;
  plVar12 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar11 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_00999f88;
  if (iVar8 < 0x130) {
    if (iVar8 != 200) {
      if (iVar8 == 0xcc) {
        uVar9 = 9;
      }
      else {
        if (iVar8 != 0xce) goto LAB_00390a8c;
        uVar9 = 10;
      }
      goto LAB_00390b0c;
    }
    func_0x0038e884(plVar12,1);
    plVar6 = (long *)plVar12[2];
    *(long *)(plVar12[3] + 0x10) = *(long *)(plVar12[3] + 0x10) + 1;
    uVar9 = 1;
    func_0x003ed000();
    *(undefined1 *)plVar6 = 0x88;
LAB_00390ad0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar11) {
      return;
    }
  }
  else {
    if (iVar8 < 0x194) {
      if (iVar8 == 0x130) {
        uVar9 = 0xb;
      }
      else {
        if (iVar8 != 400) {
LAB_00390a8c:
          lStack_98 = 1;
          FUN_0034eb70(auStack_b8,iVar8);
          plVar6 = &lStack_98;
          FUN_0038eb08(plVar12,plVar6,auStack_b8);
          uVar9 = (uint)plVar6;
          FUN_0034b418(auStack_b8);
          plVar6 = &lStack_98;
          FUN_0034b418();
          goto LAB_00390ad0;
        }
        uVar9 = 0xc;
      }
    }
    else if (iVar8 == 0x194) {
      uVar9 = 0xd;
    }
    else {
      if (iVar8 != 500) goto LAB_00390a8c;
      uVar9 = 0xe;
    }
LAB_00390b0c:
    plVar6 = plVar12;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar11) {
      uVar3 = uVar9 - 0x7f;
      uVar13 = (ulong)uVar3;
      if (uVar9 < 0x7f) {
        uVar13 = 1;
      }
      else {
        FUN_0039d54c();
      }
      func_0x0038e884(plVar12,uVar13 & 0xffffffff);
      pbVar5 = (byte *)plVar12[2];
      *(ulong *)(plVar12[3] + 0x10) = *(long *)(plVar12[3] + 0x10) + (uVar13 & 0xffffffff);
      func_0x003ed000(pbVar5,uVar13 & 0xffffffff);
      if ((int)uVar13 != 1) {
        pbVar10 = pbVar5 + 1;
        *pbVar5 = 0xff;
        uVar9 = (int)uVar13 - 2;
        switch((ulong)uVar9) {
        case 4:
          pbVar5[5] = (byte)(uVar3 >> 0x1c) | 0x80;
        case 3:
          pbVar5[4] = (byte)(uVar3 >> 0x15) | 0x80;
        case 2:
          pbVar5[3] = (byte)(uVar3 >> 0xe) | 0x80;
        case 1:
          pbVar5[2] = (byte)(uVar3 >> 7) | 0x80;
        case 0:
          *pbVar10 = (byte)uVar3 | 0x80;
        default:
          pbVar10[uVar9] = pbVar10[uVar9] & 0x7f;
          return;
        }
      }
      *pbVar5 = (byte)uVar9 | 0x80;
      return;
    }
  }
  ___stack_chk_fail();
  FUN_0034b418(auStack_b8);
  FUN_0034b418(&lStack_98);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar14 = 0x83;
  switch(uVar9) {
  case 1:
    uVar14 = 0x82;
  case 0:
    func_0x0038e884(plVar6,1);
    puVar7 = (undefined1 *)plVar6[2];
    *(long *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + 1;
    func_0x003ed000(puVar7,1);
    *puVar7 = uVar14;
    break;
  case 2:
    plStack_108 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_100 = 7;
    pcStack_f8 = ":method";
    plStack_128 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_120 = 3;
    pcStack_118 = "PUT";
    FUN_0038f6a4(plVar6,&plStack_108,&plStack_128);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_128) {
      do {
        lVar11 = *plStack_128;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_128,0x10);
        if (bVar2) {
          *plStack_128 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_128[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_108) {
      do {
        lVar11 = *plStack_108;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_108,0x10);
        if (bVar2) {
          *plStack_108 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_108[1])();
      }
    }
    break;
  case 3:
    goto code_r0x00390c94;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
code_r0x00390c94:
  func_0x00773060();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x390c9c);
  (*pcVar4)();
}



/* Entry: 003909d8; end: 00390b5f;  */

void FUN_003909d8(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  undefined1 uVar12;
  long *plStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  long lStack_98;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar10 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 < 0x130) {
    if (param_2 != 200) {
      if (param_2 == 0xcc) {
        uVar8 = 9;
      }
      else {
        if (param_2 != 0xce) goto LAB_00390a8c;
        uVar8 = 10;
      }
      goto LAB_00390b0c;
    }
    func_0x0038e884(param_1,1);
    puVar6 = (undefined8 *)param_1[2];
    *(long *)(param_1[3] + 0x10) = *(long *)(param_1[3] + 0x10) + 1;
    uVar8 = 1;
    func_0x003ed000();
    *(undefined1 *)puVar6 = 0x88;
LAB_00390ad0:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar10) {
      return;
    }
  }
  else {
    if (param_2 < 0x194) {
      if (param_2 == 0x130) {
        uVar8 = 0xb;
      }
      else {
        if (param_2 != 400) {
LAB_00390a8c:
          uStack_48 = 1;
          FUN_0034eb70(auStack_68,param_2);
          puVar6 = &uStack_48;
          FUN_0038eb08(param_1,puVar6,auStack_68);
          uVar8 = (uint)puVar6;
          FUN_0034b418(auStack_68);
          puVar6 = &uStack_48;
          FUN_0034b418();
          goto LAB_00390ad0;
        }
        uVar8 = 0xc;
      }
    }
    else if (param_2 == 0x194) {
      uVar8 = 0xd;
    }
    else {
      if (param_2 != 500) goto LAB_00390a8c;
      uVar8 = 0xe;
    }
LAB_00390b0c:
    puVar6 = param_1;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar10) {
      uVar3 = uVar8 - 0x7f;
      uVar11 = (ulong)uVar3;
      if (uVar8 < 0x7f) {
        uVar11 = 1;
      }
      else {
        FUN_0039d54c();
      }
      func_0x0038e884(param_1,uVar11 & 0xffffffff);
      pbVar5 = (byte *)param_1[2];
      *(ulong *)(param_1[3] + 0x10) = *(long *)(param_1[3] + 0x10) + (uVar11 & 0xffffffff);
      func_0x003ed000(pbVar5,uVar11 & 0xffffffff);
      if ((int)uVar11 != 1) {
        pbVar9 = pbVar5 + 1;
        *pbVar5 = 0xff;
        uVar8 = (int)uVar11 - 2;
        switch((ulong)uVar8) {
        case 4:
          pbVar5[5] = (byte)(uVar3 >> 0x1c) | 0x80;
        case 3:
          pbVar5[4] = (byte)(uVar3 >> 0x15) | 0x80;
        case 2:
          pbVar5[3] = (byte)(uVar3 >> 0xe) | 0x80;
        case 1:
          pbVar5[2] = (byte)(uVar3 >> 7) | 0x80;
        case 0:
          *pbVar9 = (byte)uVar3 | 0x80;
        default:
          pbVar9[uVar8] = pbVar9[uVar8] & 0x7f;
          return;
        }
      }
      *pbVar5 = (byte)uVar8 | 0x80;
      return;
    }
  }
  ___stack_chk_fail();
  FUN_0034b418(auStack_68);
  FUN_0034b418(&uStack_48);
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = 0x83;
  switch(uVar8) {
  case 1:
    uVar12 = 0x82;
  case 0:
    func_0x0038e884(puVar6,1);
    puVar7 = (undefined1 *)puVar6[2];
    *(long *)(puVar6[3] + 0x10) = *(long *)(puVar6[3] + 0x10) + 1;
    func_0x003ed000(puVar7,1);
    *puVar7 = uVar12;
    break;
  case 2:
    plStack_b8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_b0 = 7;
    pcStack_a8 = ":method";
    plStack_d8 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_d0 = 3;
    pcStack_c8 = "PUT";
    FUN_0038f6a4(puVar6,&plStack_b8,&plStack_d8);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d8) {
      do {
        lVar10 = *plStack_d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
        if (bVar2) {
          *plStack_d8 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_d8[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b8) {
      do {
        lVar10 = *plStack_b8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
        if (bVar2) {
          *plStack_b8 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_b8[1])();
      }
    }
    break;
  case 3:
    goto code_r0x00390c94;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
code_r0x00390c94:
  func_0x00773060();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x390c9c);
  (*pcVar4)();
}



/* Entry: 00390b60; end: 00390cd3;  */

void FUN_00390b60(long param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long *plStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = 0x83;
  switch(param_2) {
  case 1:
    uVar6 = 0x82;
  case 0:
    func_0x0038e884(param_1,1);
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + 1;
    func_0x003ed000(puVar4,1);
    *puVar4 = uVar6;
    break;
  case 2:
    plStack_48 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_40 = 7;
    pcStack_38 = ":method";
    plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
    uStack_60 = 3;
    pcStack_58 = "PUT";
    FUN_0038f6a4(param_1,&plStack_48,&plStack_68);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
      do {
        lVar5 = *plStack_68;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
        if (bVar2) {
          *plStack_68 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plStack_68[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_48) {
      do {
        lVar5 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (*(code *)plStack_48[1])();
      }
    }
    break;
  case 3:
    goto code_r0x00390c94;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
code_r0x00390c94:
  func_0x00773060();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x390c9c);
  (*pcVar3)();
}



/* Entry: 00390cd4; end: 00391073;  */

void FUN_00390cd4(double param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  uint3 uStack_c4;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  long *plStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = param_2;
  func_0x003c1f6c();
  lVar7 = *plVar6;
  FUN_003c1e28();
  _uStack_c4 = -1;
  if ((((param_3 != (long *)0x7fffffffffffffff) && (lVar7 != -0x7fffffffffffffff)) &&
      (_uStack_c4 = 0, param_3 != (long *)0x8000000000000000)) && (lVar7 != -0x8000000000000000)) {
    if ((long)param_3 < 1) {
      if (-0x8000000000000000 - (long)param_3 <= -lVar7) goto LAB_00390d70;
    }
    else if ((long)((ulong)param_3 ^ 0x7fffffffffffffff) < -lVar7) {
      _uStack_c4 = -1;
    }
    else {
LAB_00390d70:
      _uStack_c4 = (int)param_3 - (int)lVar7;
    }
  }
  FUN_003ffd8c();
  puVar15 = *(uint **)(param_2[4] + 0x1d8);
  if (puVar15 != *(uint **)(param_2[4] + 0x1e0)) {
    do {
      param_3 = (long *)((ulong)param_3 & 0xffffffff00000000 | (ulong)*puVar15);
      FUN_003ffeac(&uStack_c4,param_3);
      lVar7 = param_2[4];
      if (((-3.0 < param_1) && (param_1 <= 0.0)) && (*(uint *)(lVar7 + 8) < puVar15[1])) {
        FUN_0038ea60(param_2,(*(uint *)(lVar7 + 8) - puVar15[1]) + *(int *)(lVar7 + 0x10) + 0x3e);
        puVar11 = *(undefined8 **)(param_2[4] + 0x1d8);
        uVar13 = *(undefined8 *)puVar15;
        *(undefined8 *)puVar15 = *puVar11;
        *puVar11 = uVar13;
        goto LAB_00390fe0;
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != *(uint **)(lVar7 + 0x1e0));
    if (puVar15 != *(uint **)(lVar7 + 0x1d8)) {
      do {
        if (*(uint *)(lVar7 + 8) < puVar15[-1]) break;
        puVar15 = puVar15 + -2;
        *(uint **)(lVar7 + 0x1e0) = puVar15;
      } while (puVar15 != *(uint **)(lVar7 + 0x1d8));
    }
  }
  FUN_003fffd8(&plStack_80,&uStack_c4);
  lVar7 = param_2[4] + 8;
  uVar19 = uStack_78 & 0xff;
  if (plStack_80 != (long *)0x0) {
    uVar19 = uStack_78;
  }
  FUN_00392064(lVar7,uVar19 + 0x2c);
  lVar16 = param_2[4];
  uVar19 = (ulong)uStack_c4;
  puVar14 = *(ulong **)(lVar16 + 0x1e0);
  if (puVar14 < *(ulong **)(lVar16 + 0x1e8)) {
    puVar18 = puVar14 + 1;
    *puVar14 = uVar19 | lVar7 << 0x20;
  }
  else {
    param_3 = (long *)(lVar16 + 0x1d8);
    lVar17 = (long)puVar14 - *param_3 >> 3;
    uVar1 = lVar17 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00391018;
    uVar10 = (long)*(ulong **)(lVar16 + 0x1e8) - *param_3;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar16 + 0x1e8;
      FUN_00392028();
    }
    puVar14 = (ulong *)(lVar8 + lVar17 * 8);
    puVar18 = puVar14 + 1;
    *puVar14 = uVar19 | lVar7 << 0x20;
    puVar2 = *(ulong **)(lVar16 + 0x1d8);
    puVar9 = *(ulong **)(lVar16 + 0x1e0);
    if (puVar9 != puVar2) {
      do {
        puVar9 = puVar9 + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar9;
      } while (puVar9 != puVar2);
      puVar9 = (ulong *)*param_3;
    }
    *(ulong **)(lVar16 + 0x1d8) = puVar14;
    *(ulong **)(lVar16 + 0x1e0) = puVar18;
    *(ulong *)(lVar16 + 0x1e8) = lVar8 + uVar12 * 8;
    if (puVar9 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar16 + 0x1e0) = puVar18;
  plStack_a0 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_98 = 0xc;
  pcStack_90 = "grpc-timeout";
  uStack_b8 = uStack_78;
  plStack_c0 = plStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_0038eb08(param_2,&plStack_a0,&plStack_c0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0) {
    do {
      lVar7 = *plStack_c0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar4) {
        *plStack_c0 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_a0) {
    do {
      lVar7 = *plStack_a0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar4) {
        *plStack_a0 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar7 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
LAB_00390fe0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_00391018:
  FUN_00392014(param_3);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x391024);
  (*pcVar5)();
}



/* Entry: 00391074; end: 003912ff;  */

void FUN_00391074(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint **ppuVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint **ppuVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ****ppppuVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined1 uStack_381;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint *puStack_360;
  undefined8 uStack_358;
  char *pcStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  uint *puStack_320;
  undefined8 uStack_318;
  char *pcStack_310;
  undefined8 uStack_308;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  uint *puStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  uint *puStack_2b0;
  undefined8 uStack_2a8;
  char *pcStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint *puStack_270;
  undefined8 uStack_268;
  char *pcStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  uint *puStack_230;
  undefined8 uStack_228;
  char *pcStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined8 *puStack_200;
  uint *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined8 *puStack_110;
  uint *puStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  uint *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar15 = (long *)*param_2;
  puVar20 = param_2 + 1;
  if ((plVar15 == (long *)0x0) || (*puVar20 < 0x10000)) {
    lVar16 = *(long *)(param_1 + 0x20);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_88 = *(undefined8 *)(lVar16 + 400);
    uStack_90 = *(undefined8 *)(lVar16 + 0x188);
    uStack_78 = *(undefined8 *)(lVar16 + 0x1a0);
    uStack_80 = *(undefined8 *)(lVar16 + 0x198);
    puVar7 = &uStack_70;
    FUN_003ec898(puVar7,&uStack_90);
    if ((int)puVar7 == 0) {
      plVar15 = (long *)*param_2;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = *plVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar15 = (long *)*param_2;
      }
      uVar17 = param_2[3];
      uVar23 = param_2[2];
      uVar19 = *puVar20;
      lVar16 = *(long *)(param_1 + 0x20);
      plVar8 = *(long **)(lVar16 + 0x188);
      uStack_60 = *(undefined8 *)(lVar16 + 0x1a0);
      uStack_68 = *(undefined8 *)(lVar16 + 0x198);
      uStack_70 = *(undefined8 *)(lVar16 + 400);
      *(long **)(lVar16 + 0x188) = plVar15;
      *(undefined8 *)(lVar16 + 0x198) = uVar23;
      *(ulong *)(lVar16 + 400) = uVar19;
      *(undefined8 *)(lVar16 + 0x1a0) = uVar17;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          lVar16 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plVar8[1])();
        }
      }
      lVar16 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(lVar16 + 0x128) = 0;
    }
    else {
      lVar16 = *(long *)(param_1 + 0x20);
    }
    ppuVar14 = (uint **)(lVar16 + 0x128);
    plVar15 = (long *)*param_2;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar15 = (long *)*param_2;
    }
    uStack_e8 = param_2[1];
    puStack_f0 = (uint *)*param_2;
    uStack_d8 = param_2[3];
    uStack_e0 = param_2[2];
    uVar12 = *(uint *)(param_2 + 1) & 0xff;
    if (plVar15 != (long *)0x0) {
      uVar12 = *(uint *)(param_2 + 1);
    }
    FUN_00390368(param_1,ppuVar14,"user-agent",10,&puStack_f0,uVar12 + 0x2a);
    puVar9 = puStack_f0;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_f0) {
      do {
        lVar16 = *(long *)puStack_f0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_f0,0x10);
        if (bVar2) {
          *(long *)puStack_f0 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_f0 + 2))();
      }
    }
  }
  else {
    puStack_b0 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_a8 = 10;
    pcStack_a0 = "user-agent";
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_c8 = param_2[1];
    plStack_d0 = (long *)*param_2;
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    ppuVar14 = &puStack_b0;
    FUN_0038f6a4(param_1,ppuVar14,&plStack_d0);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d0) {
      do {
        lVar16 = *plStack_d0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
        if (bVar2) {
          *plStack_d0 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_d0[1])();
      }
    }
    puVar9 = puStack_b0;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_b0) {
      do {
        lVar16 = *(long *)puStack_b0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_b0,0x10);
        if (bVar2) {
          *(long *)puStack_b0 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_b0 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&puStack_f0);
  }
  puVar10 = puVar9;
  __Unwind_Resume();
  pcStack_f8 = FUN_00391300;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = (uint *)((ulong)ppuVar14 & 0xffffffff);
  puStack_110 = param_2;
  puStack_108 = puVar9;
  pppuStack_100 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((uint)ppuVar14 < 0x10) {
    lVar18 = *(long *)(puVar10 + 8);
    lVar16 = lVar18 + ((ulong)ppuVar14 & 0xffffffff) * 4;
    uVar12 = *(uint *)(lVar16 + 300);
    if (uVar12 <= *(uint *)(lVar18 + 8)) {
      param_2 = (undefined8 *)(lVar16 + 300);
      goto LAB_0039138c;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      uVar12 = (*(uint *)(lVar18 + 8) - uVar12) + *(int *)(lVar18 + 0x10) + 0x3e;
      ppuVar5 = &puStack_f0;
      ppppuVar21 = (undefined8 ****)&stack0xfffffffffffffff0;
      pcVar22 = pcStack_f8;
      goto FUN_0038ea60;
    }
  }
  else {
    param_2 = (undefined8 *)0x0;
LAB_0039138c:
    puStack_140 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_138 = 0xb;
    pcStack_130 = "grpc-status";
    FUN_0034eb70(&plStack_160);
    if (param_2 == (undefined8 *)0x0) {
      uStack_1b8 = uStack_138;
      puStack_1c0 = puStack_140;
      uStack_1a8 = uStack_128;
      pcStack_1b0 = pcStack_130;
      uStack_138 = 0;
      puStack_140 = (uint *)0x0;
      uStack_128 = 0;
      pcStack_130 = (char *)0x0;
      uStack_1d8 = uStack_158;
      plStack_1e0 = plStack_160;
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      ppuVar14 = &puStack_1c0;
      FUN_0038f6a4(puVar10,ppuVar14,&plStack_1e0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1e0) {
        do {
          lVar16 = *plStack_1e0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
          if (bVar2) {
            *plStack_1e0 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_1e0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_1c0) {
        do {
          lVar16 = *(long *)puStack_1c0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_1c0,0x10);
          if (bVar2) {
            *(long *)puStack_1c0 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(puStack_1c0 + 2))();
        }
      }
    }
    else {
      bVar4 = (byte)uStack_158;
      uVar12 = (uint)bVar4;
      if (plStack_160 != (long *)0x0) {
        uVar12 = (uint)uStack_158;
      }
      lVar16 = *(long *)(puVar10 + 8) + 8;
      FUN_00392064(lVar16,uVar12 + 0x2b);
      *(int *)param_2 = (int)lVar16;
      uStack_178 = uStack_138;
      puStack_180 = puStack_140;
      uStack_168 = uStack_128;
      pcStack_170 = pcStack_130;
      uStack_138 = 0;
      puStack_140 = (uint *)0x0;
      uStack_128 = 0;
      pcStack_130 = (char *)0x0;
      uStack_198 = uStack_158;
      plStack_1a0 = plStack_160;
      uStack_188 = uStack_148;
      uStack_190 = uStack_150;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      ppuVar14 = &puStack_180;
      FUN_0038eb08(puVar10,ppuVar14,&plStack_1a0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1a0) {
        do {
          lVar16 = *plStack_1a0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
          if (bVar2) {
            *plStack_1a0 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_1a0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_180) {
        do {
          lVar16 = *(long *)puStack_180;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_180,0x10);
          if (bVar2) {
            *(long *)puStack_180 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(puStack_180 + 2))();
        }
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_160) {
      do {
        lVar16 = *plStack_160;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
        if (bVar2) {
          *plStack_160 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_160[1])();
      }
    }
    puVar11 = puStack_140;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_140) {
      do {
        lVar16 = *(long *)puStack_140;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_140,0x10);
        if (bVar2) {
          *(long *)puStack_140 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_140 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar9 = puVar11;
  if ((int)ppuVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1e0);
    FUN_0034b418(&puStack_1c0);
    FUN_0034b418(&plStack_160);
    FUN_0034b418(&puStack_140);
    puVar9 = puVar11;
  }
  puVar10 = puVar9;
  __Unwind_Resume();
  ppuVar5 = (uint **)&plStack_2d0;
  pcStack_1e8 = FUN_003915c4;
  ppppuVar21 = &pppuStack_1f0;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_200 = param_2;
  puStack_1f8 = puVar9;
  pppuStack_1f0 = &pppuStack_100;
  if ((int)ppuVar14 < 3) {
    lVar18 = *(long *)(puVar10 + 8);
    lVar16 = lVar18 + ((ulong)ppuVar14 & 0xffffffff) * 4;
    uVar12 = *(uint *)(lVar16 + 0x16c);
    if (uVar12 <= *(uint *)(lVar18 + 8)) {
      param_2 = (undefined8 *)(lVar16 + 0x16c);
      goto LAB_0039164c;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
      uVar12 = (*(uint *)(lVar18 + 8) - uVar12) + *(int *)(lVar18 + 0x10) + 0x3e;
      pcVar22 = FUN_003915c4;
      ppuVar5 = (uint **)&plStack_1e0;
      ppppuVar21 = &pppuStack_100;
      goto FUN_0038ea60;
    }
  }
  else {
    param_2 = (undefined8 *)0x0;
LAB_0039164c:
    puStack_230 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_228 = 0xd;
    pcStack_220 = "grpc-encoding";
    FUN_0034f290(&plStack_250,ppuVar14);
    if (param_2 == (undefined8 *)0x0) {
      uStack_2a8 = uStack_228;
      puStack_2b0 = puStack_230;
      uStack_298 = uStack_218;
      pcStack_2a0 = pcStack_220;
      uStack_228 = 0;
      puStack_230 = (uint *)0x0;
      uStack_218 = 0;
      pcStack_220 = (char *)0x0;
      uStack_2c8 = uStack_248;
      plStack_2d0 = plStack_250;
      uStack_2b8 = uStack_238;
      uStack_2c0 = uStack_240;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      ppuVar14 = &puStack_2b0;
      FUN_0038f6a4(puVar10,ppuVar14,&plStack_2d0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_2d0) {
        do {
          lVar16 = *plStack_2d0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_2d0,0x10);
          if (bVar2) {
            *plStack_2d0 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_2d0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_2b0) {
        do {
          lVar16 = *(long *)puStack_2b0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_2b0,0x10);
          if (bVar2) {
            *(long *)puStack_2b0 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(puStack_2b0 + 2))();
        }
      }
    }
    else {
      bVar4 = (byte)uStack_248;
      uVar12 = (uint)bVar4;
      if (plStack_250 != (long *)0x0) {
        uVar12 = (uint)uStack_248;
      }
      lVar16 = *(long *)(puVar10 + 8) + 8;
      FUN_00392064(lVar16,uVar12 + 0x2d);
      *(int *)param_2 = (int)lVar16;
      uStack_268 = uStack_228;
      puStack_270 = puStack_230;
      uStack_258 = uStack_218;
      pcStack_260 = pcStack_220;
      uStack_228 = 0;
      puStack_230 = (uint *)0x0;
      uStack_218 = 0;
      pcStack_220 = (char *)0x0;
      uStack_288 = uStack_248;
      plStack_290 = plStack_250;
      uStack_278 = uStack_238;
      uStack_280 = uStack_240;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      ppuVar14 = &puStack_270;
      FUN_0038eb08(puVar10,ppuVar14,&plStack_290);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_290) {
        do {
          lVar16 = *plStack_290;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_290,0x10);
          if (bVar2) {
            *plStack_290 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (*(code *)plStack_290[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_270) {
        do {
          lVar16 = *(long *)puStack_270;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
          if (bVar2) {
            *(long *)puStack_270 = lVar16 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(puStack_270 + 2))();
        }
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_250) {
      do {
        lVar16 = *plStack_250;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
        if (bVar2) {
          *plStack_250 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_250[1])();
      }
    }
    puVar10 = puStack_230;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_230) {
      do {
        lVar16 = *(long *)puStack_230;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_230,0x10);
        if (bVar2) {
          *(long *)puStack_230 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_230 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
      return;
    }
  }
  uVar12 = (uint)ppuVar14;
  ___stack_chk_fail();
  puVar9 = puVar10;
  if (uVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_2d0);
    FUN_0034b418(&puStack_2b0);
    FUN_0034b418(&plStack_250);
    FUN_0034b418(&puStack_230);
    puVar9 = puVar10;
  }
  puVar10 = puVar9;
  __Unwind_Resume();
  pcStack_2d8 = FUN_00391888;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar16 = *(long *)(puVar10 + 8);
  uVar3 = *(uint *)(lVar16 + 0x178);
  puStack_2f0 = param_2;
  puStack_2e8 = puVar9;
  pppuStack_2e0 = ppppuVar21;
  if (((uVar3 == 0) || ((uint)*(byte *)(lVar16 + 0x17c) != (uVar12 & 0xff))) ||
     (uVar3 <= *(uint *)(lVar16 + 8))) {
    puStack_320 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_318 = 0x14;
    pcStack_310 = "grpc-accept-encoding";
    uStack_381 = (char)uVar12;
    func_0x003b095c(&plStack_340,&uStack_381);
    uVar3 = (uint)uStack_338 & 0xff;
    if (plStack_340 != (long *)0x0) {
      uVar3 = (uint)uStack_338;
    }
    lVar16 = *(long *)(puVar10 + 8) + 8;
    FUN_00392064(lVar16,uVar3 + 0x34);
    lVar18 = *(long *)(puVar10 + 8);
    *(int *)(lVar18 + 0x178) = (int)lVar16;
    *(char *)(lVar18 + 0x17c) = (char)uVar12;
    uStack_358 = uStack_318;
    puStack_360 = puStack_320;
    uStack_348 = uStack_308;
    pcStack_350 = pcStack_310;
    uStack_318 = 0;
    puStack_320 = (uint *)0x0;
    uStack_308 = 0;
    pcStack_310 = (char *)0x0;
    uStack_378 = uStack_338;
    plStack_380 = plStack_340;
    uStack_368 = uStack_328;
    uStack_370 = uStack_330;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    ppuVar14 = &puStack_360;
    FUN_0038eb08(puVar10,ppuVar14,&plStack_380);
    uVar12 = (uint)ppuVar14;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_380) {
      do {
        lVar16 = *plStack_380;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
        if (bVar2) {
          *plStack_380 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_380[1])();
      }
    }
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_360) {
      do {
        lVar16 = *(long *)puStack_360;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_360,0x10);
        if (bVar2) {
          *(long *)puStack_360 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_360 + 2))();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_340) {
      do {
        lVar16 = *plStack_340;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_340,0x10);
        if (bVar2) {
          *plStack_340 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_340[1])();
      }
    }
    puVar10 = puStack_320;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_320) {
      do {
        lVar16 = *(long *)puStack_320;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_320,0x10);
        if (bVar2) {
          *(long *)puStack_320 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(puStack_320 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2f8) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2f8) {
    uVar12 = (*(uint *)(lVar16 + 8) - uVar3) + *(int *)(lVar16 + 0x10) + 0x3e;
    pcVar22 = FUN_00391888;
FUN_0038ea60:
    *(undefined8 *)((long)ppuVar5 + -0x40) = unaff_x24;
    *(undefined8 *)((long)ppuVar5 + -0x38) = unaff_x23;
    *(undefined8 *)((long)ppuVar5 + -0x30) = unaff_x22;
    *(ulong **)((long)ppuVar5 + -0x28) = puVar20;
    *(undefined8 **)((long)ppuVar5 + -0x20) = param_2;
    *(uint **)((long)ppuVar5 + -0x18) = puVar9;
    *(undefined8 *****)((long)ppuVar5 + -0x10) = ppppuVar21;
    *(code **)((long)ppuVar5 + -8) = pcVar22;
    uVar3 = uVar12 - 0x7f;
    uVar19 = (ulong)uVar3;
    if (uVar12 < 0x7f) {
      uVar19 = 1;
    }
    else {
      FUN_0039d54c();
    }
    func_0x0038e884(puVar10,uVar19 & 0xffffffff);
    pbVar6 = *(byte **)(puVar10 + 4);
    *(ulong *)(*(long *)(puVar10 + 6) + 0x10) =
         *(long *)(*(long *)(puVar10 + 6) + 0x10) + (uVar19 & 0xffffffff);
    func_0x003ed000(pbVar6,uVar19 & 0xffffffff);
    if ((int)uVar19 != 1) {
      pbVar13 = pbVar6 + 1;
      *pbVar6 = 0xff;
      uVar12 = (int)uVar19 - 2;
      switch((ulong)uVar12) {
      case 4:
        pbVar6[5] = (byte)(uVar3 >> 0x1c) | 0x80;
      case 3:
        pbVar6[4] = (byte)(uVar3 >> 0x15) | 0x80;
      case 2:
        pbVar6[3] = (byte)(uVar3 >> 0xe) | 0x80;
      case 1:
        pbVar6[2] = (byte)(uVar3 >> 7) | 0x80;
      case 0:
        *pbVar13 = (byte)uVar3 | 0x80;
      default:
        pbVar13[uVar12] = pbVar13[uVar12] & 0x7f;
        return;
      }
    }
    *pbVar6 = (byte)uVar12 | 0x80;
    return;
  }
  ___stack_chk_fail();
  if (uVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_380);
    FUN_0034b418(&puStack_360);
    FUN_0034b418(&plStack_340);
    FUN_0034b418(&puStack_320);
  }
  __Unwind_Resume();
  puVar9 = puVar10 + 2;
  *puVar10 = uVar12;
  uVar3 = puVar10[3];
  if (uVar12 <= puVar10[3]) {
    uVar3 = uVar12;
  }
  FUN_00392198(puVar9,uVar3);
  if ((int)puVar9 != 0) {
    *(undefined1 *)(puVar10 + 1) = 1;
  }
  return;
}



/* Entry: 00391300; end: 003915c3;  */

void FUN_00391300(uint *param_1,uint **param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  long **pplVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint **ppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *puVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ****unaff_x29;
  code *unaff_x30;
  undefined1 uStack_291;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint *puStack_270;
  undefined8 uStack_268;
  char *pcStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  uint *puStack_230;
  undefined8 uStack_228;
  char *pcStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined4 *puStack_200;
  uint *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined4 *puStack_110;
  uint *puStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar7 = (uint *)((ulong)param_2 & 0xffffffff);
  if ((uint)param_2 < 0x10) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar8 = *(uint *)(lVar11 + 300);
    if (uVar8 <= *(uint *)(lVar12 + 8)) {
      unaff_x20 = (undefined4 *)(lVar11 + 300);
      goto LAB_0039138c;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      uVar8 = (*(uint *)(lVar12 + 8) - uVar8) + *(int *)(lVar12 + 0x10) + 0x3e;
      pplVar5 = (long **)register0x00000008;
      goto FUN_0038ea60;
    }
  }
  else {
    unaff_x20 = (undefined4 *)0x0;
LAB_0039138c:
    puStack_50 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_48 = 0xb;
    pcStack_40 = "grpc-status";
    FUN_0034eb70(&plStack_70);
    if (unaff_x20 == (undefined4 *)0x0) {
      uStack_c8 = uStack_48;
      puStack_d0 = puStack_50;
      uStack_b8 = uStack_38;
      pcStack_c0 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_e8 = uStack_68;
      plStack_f0 = plStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_d0;
      FUN_0038f6a4(param_1,param_2,&plStack_f0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
        do {
          lVar11 = *plStack_f0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
          if (bVar2) {
            *plStack_f0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_f0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_d0) {
        do {
          lVar11 = *(long *)puStack_d0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
          if (bVar2) {
            *(long *)puStack_d0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_d0 + 2))();
        }
      }
    }
    else {
      bVar4 = (byte)uStack_68;
      uVar8 = (uint)bVar4;
      if (plStack_70 != (long *)0x0) {
        uVar8 = (uint)uStack_68;
      }
      lVar11 = *(long *)(param_1 + 8) + 8;
      FUN_00392064(lVar11,uVar8 + 0x2b);
      *unaff_x20 = (int)lVar11;
      uStack_88 = uStack_48;
      puStack_90 = puStack_50;
      uStack_78 = uStack_38;
      pcStack_80 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_a8 = uStack_68;
      plStack_b0 = plStack_70;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_90;
      FUN_0038eb08(param_1,param_2,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar11 = *plStack_b0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar2) {
            *plStack_b0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_90) {
        do {
          lVar11 = *(long *)puStack_90;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar2) {
            *(long *)puStack_90 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_90 + 2))();
        }
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
      do {
        lVar11 = *plStack_70;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar2) {
          *plStack_70 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    puVar7 = puStack_50;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
      do {
        lVar11 = *(long *)puStack_50;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
        if (bVar2) {
          *(long *)puStack_50 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_50 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return;
    }
  }
  ___stack_chk_fail();
  unaff_x19 = puVar7;
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_f0);
    FUN_0034b418(&puStack_d0);
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&puStack_50);
    unaff_x19 = puVar7;
  }
  param_1 = unaff_x19;
  __Unwind_Resume();
  pplVar5 = &plStack_1e0;
  pcStack_f8 = FUN_003915c4;
  unaff_x29 = &pppuStack_100;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_110 = unaff_x20;
  puStack_108 = unaff_x19;
  pppuStack_100 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((int)param_2 < 3) {
    lVar12 = *(long *)(param_1 + 8);
    lVar11 = lVar12 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar8 = *(uint *)(lVar11 + 0x16c);
    if (uVar8 <= *(uint *)(lVar12 + 8)) {
      puVar14 = (undefined4 *)(lVar11 + 0x16c);
      goto LAB_0039164c;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      uVar8 = (*(uint *)(lVar12 + 8) - uVar8) + *(int *)(lVar12 + 0x10) + 0x3e;
      unaff_x30 = FUN_003915c4;
      pplVar5 = &plStack_f0;
      unaff_x29 = (undefined8 ****)&stack0xfffffffffffffff0;
      goto FUN_0038ea60;
    }
  }
  else {
    puVar14 = (undefined4 *)0x0;
LAB_0039164c:
    puStack_140 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_138 = 0xd;
    pcStack_130 = "grpc-encoding";
    FUN_0034f290(&plStack_160,param_2);
    if (puVar14 == (undefined4 *)0x0) {
      uStack_1b8 = uStack_138;
      puStack_1c0 = puStack_140;
      uStack_1a8 = uStack_128;
      pcStack_1b0 = pcStack_130;
      uStack_138 = 0;
      puStack_140 = (uint *)0x0;
      uStack_128 = 0;
      pcStack_130 = (char *)0x0;
      uStack_1d8 = uStack_158;
      plStack_1e0 = plStack_160;
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      param_2 = &puStack_1c0;
      FUN_0038f6a4(param_1,param_2,&plStack_1e0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1e0) {
        do {
          lVar11 = *plStack_1e0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
          if (bVar2) {
            *plStack_1e0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_1e0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_1c0) {
        do {
          lVar11 = *(long *)puStack_1c0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_1c0,0x10);
          if (bVar2) {
            *(long *)puStack_1c0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_1c0 + 2))();
        }
      }
    }
    else {
      bVar4 = (byte)uStack_158;
      uVar8 = (uint)bVar4;
      if (plStack_160 != (long *)0x0) {
        uVar8 = (uint)uStack_158;
      }
      lVar11 = *(long *)(param_1 + 8) + 8;
      FUN_00392064(lVar11,uVar8 + 0x2d);
      *puVar14 = (int)lVar11;
      uStack_178 = uStack_138;
      puStack_180 = puStack_140;
      uStack_168 = uStack_128;
      pcStack_170 = pcStack_130;
      uStack_138 = 0;
      puStack_140 = (uint *)0x0;
      uStack_128 = 0;
      pcStack_130 = (char *)0x0;
      uStack_198 = uStack_158;
      plStack_1a0 = plStack_160;
      uStack_188 = uStack_148;
      uStack_190 = uStack_150;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      param_2 = &puStack_180;
      FUN_0038eb08(param_1,param_2,&plStack_1a0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1a0) {
        do {
          lVar11 = *plStack_1a0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
          if (bVar2) {
            *plStack_1a0 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_1a0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_180) {
        do {
          lVar11 = *(long *)puStack_180;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_180,0x10);
          if (bVar2) {
            *(long *)puStack_180 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(puStack_180 + 2))();
        }
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_160) {
      do {
        lVar11 = *plStack_160;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
        if (bVar2) {
          *plStack_160 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_160[1])();
      }
    }
    param_1 = puStack_140;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_140) {
      do {
        lVar11 = *(long *)puStack_140;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_140,0x10);
        if (bVar2) {
          *(long *)puStack_140 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_140 + 2))();
      }
    }
    unaff_x20 = puVar14;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return;
    }
  }
  uVar8 = (uint)param_2;
  ___stack_chk_fail();
  unaff_x19 = param_1;
  if (uVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1e0);
    FUN_0034b418(&puStack_1c0);
    FUN_0034b418(&plStack_160);
    FUN_0034b418(&puStack_140);
    unaff_x19 = param_1;
  }
  param_1 = unaff_x19;
  __Unwind_Resume();
  pcStack_1e8 = FUN_00391888;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(lVar11 + 0x178);
  puStack_200 = unaff_x20;
  puStack_1f8 = unaff_x19;
  pppuStack_1f0 = unaff_x29;
  if (((uVar3 == 0) || ((uint)*(byte *)(lVar11 + 0x17c) != (uVar8 & 0xff))) ||
     (uVar3 <= *(uint *)(lVar11 + 8))) {
    puStack_230 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_228 = 0x14;
    pcStack_220 = "grpc-accept-encoding";
    uStack_291 = (char)uVar8;
    func_0x003b095c(&plStack_250,&uStack_291);
    uVar3 = (uint)uStack_248 & 0xff;
    if (plStack_250 != (long *)0x0) {
      uVar3 = (uint)uStack_248;
    }
    lVar11 = *(long *)(param_1 + 8) + 8;
    FUN_00392064(lVar11,uVar3 + 0x34);
    lVar12 = *(long *)(param_1 + 8);
    *(int *)(lVar12 + 0x178) = (int)lVar11;
    *(char *)(lVar12 + 0x17c) = (char)uVar8;
    uStack_268 = uStack_228;
    puStack_270 = puStack_230;
    uStack_258 = uStack_218;
    pcStack_260 = pcStack_220;
    uStack_228 = 0;
    puStack_230 = (uint *)0x0;
    uStack_218 = 0;
    pcStack_220 = (char *)0x0;
    uStack_288 = uStack_248;
    plStack_290 = plStack_250;
    uStack_278 = uStack_238;
    uStack_280 = uStack_240;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    ppuVar10 = &puStack_270;
    FUN_0038eb08(param_1,ppuVar10,&plStack_290);
    uVar8 = (uint)ppuVar10;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_290) {
      do {
        lVar11 = *plStack_290;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_290,0x10);
        if (bVar2) {
          *plStack_290 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_290[1])();
      }
    }
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_270) {
      do {
        lVar11 = *(long *)puStack_270;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_270,0x10);
        if (bVar2) {
          *(long *)puStack_270 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_270 + 2))();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_250) {
      do {
        lVar11 = *plStack_250;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
        if (bVar2) {
          *plStack_250 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_250[1])();
      }
    }
    param_1 = puStack_230;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_230) {
      do {
        lVar11 = *(long *)puStack_230;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puStack_230,0x10);
        if (bVar2) {
          *(long *)puStack_230 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_230 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    uVar8 = (*(uint *)(lVar11 + 8) - uVar3) + *(int *)(lVar11 + 0x10) + 0x3e;
    unaff_x30 = FUN_00391888;
FUN_0038ea60:
    *(undefined8 *)((long)pplVar5 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pplVar5 + -0x38) = unaff_x23;
    *(undefined8 *)((long)pplVar5 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pplVar5 + -0x28) = unaff_x21;
    *(undefined4 **)((long)pplVar5 + -0x20) = unaff_x20;
    *(uint **)((long)pplVar5 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)pplVar5 + -0x10) = unaff_x29;
    *(code **)((long)pplVar5 + -8) = unaff_x30;
    uVar3 = uVar8 - 0x7f;
    uVar13 = (ulong)uVar3;
    if (uVar8 < 0x7f) {
      uVar13 = 1;
    }
    else {
      FUN_0039d54c();
    }
    func_0x0038e884(param_1,uVar13 & 0xffffffff);
    pbVar6 = *(byte **)(param_1 + 4);
    *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
         *(long *)(*(long *)(param_1 + 6) + 0x10) + (uVar13 & 0xffffffff);
    func_0x003ed000(pbVar6,uVar13 & 0xffffffff);
    if ((int)uVar13 != 1) {
      pbVar9 = pbVar6 + 1;
      *pbVar6 = 0xff;
      uVar8 = (int)uVar13 - 2;
      switch((ulong)uVar8) {
      case 4:
        pbVar6[5] = (byte)(uVar3 >> 0x1c) | 0x80;
      case 3:
        pbVar6[4] = (byte)(uVar3 >> 0x15) | 0x80;
      case 2:
        pbVar6[3] = (byte)(uVar3 >> 0xe) | 0x80;
      case 1:
        pbVar6[2] = (byte)(uVar3 >> 7) | 0x80;
      case 0:
        *pbVar9 = (byte)uVar3 | 0x80;
      default:
        pbVar9[uVar8] = pbVar9[uVar8] & 0x7f;
        return;
      }
    }
    *pbVar6 = (byte)uVar8 | 0x80;
    return;
  }
  ___stack_chk_fail();
  if (uVar8 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_290);
    FUN_0034b418(&puStack_270);
    FUN_0034b418(&plStack_250);
    FUN_0034b418(&puStack_230);
  }
  __Unwind_Resume();
  puVar7 = param_1 + 2;
  *param_1 = uVar8;
  uVar3 = param_1[3];
  if (uVar8 <= param_1[3]) {
    uVar3 = uVar8;
  }
  FUN_00392198(puVar7,uVar3);
  if ((int)puVar7 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 003915c4; end: 00391887;  */

void FUN_003915c4(uint *param_1,uint **param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  long **pplVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 uStack_1a1;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint *puStack_180;
  undefined8 uStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined4 *puStack_110;
  uint *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar6 = &plStack_f0;
  puVar15 = &stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((int)param_2 < 3) {
    lVar13 = *(long *)(param_1 + 8);
    lVar12 = lVar13 + ((ulong)param_2 & 0xffffffff) * 4;
    uVar9 = *(uint *)(lVar12 + 0x16c);
    if (uVar9 <= *(uint *)(lVar13 + 8)) {
      unaff_x20 = (undefined4 *)(lVar12 + 0x16c);
      goto LAB_0039164c;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      iVar1 = (*(uint *)(lVar13 + 8) - uVar9) + *(int *)(lVar13 + 0x10);
      puVar15 = unaff_x29;
      pplVar6 = (long **)register0x00000008;
      goto FUN_0038ea60;
    }
  }
  else {
    unaff_x20 = (undefined4 *)0x0;
LAB_0039164c:
    puStack_50 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_48 = 0xd;
    pcStack_40 = "grpc-encoding";
    FUN_0034f290(&plStack_70,param_2);
    if (unaff_x20 == (undefined4 *)0x0) {
      uStack_c8 = uStack_48;
      puStack_d0 = puStack_50;
      uStack_b8 = uStack_38;
      pcStack_c0 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_e8 = uStack_68;
      plStack_f0 = plStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_d0;
      FUN_0038f6a4(param_1,param_2,&plStack_f0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_f0) {
        do {
          lVar12 = *plStack_f0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
          if (bVar3) {
            *plStack_f0 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_f0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_d0) {
        do {
          lVar12 = *(long *)puStack_d0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_d0,0x10);
          if (bVar3) {
            *(long *)puStack_d0 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(puStack_d0 + 2))();
        }
      }
    }
    else {
      bVar5 = (byte)uStack_68;
      uVar9 = (uint)bVar5;
      if (plStack_70 != (long *)0x0) {
        uVar9 = (uint)uStack_68;
      }
      lVar12 = *(long *)(param_1 + 8) + 8;
      FUN_00392064(lVar12,uVar9 + 0x2d);
      *unaff_x20 = (int)lVar12;
      uStack_88 = uStack_48;
      puStack_90 = puStack_50;
      uStack_78 = uStack_38;
      pcStack_80 = pcStack_40;
      uStack_48 = 0;
      puStack_50 = (uint *)0x0;
      uStack_38 = 0;
      pcStack_40 = (char *)0x0;
      uStack_a8 = uStack_68;
      plStack_b0 = plStack_70;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_68 = 0;
      plStack_70 = (long *)0x0;
      uStack_58 = 0;
      uStack_60 = 0;
      param_2 = &puStack_90;
      FUN_0038eb08(param_1,param_2,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar12 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_90) {
        do {
          lVar12 = *(long *)puStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
          if (bVar3) {
            *(long *)puStack_90 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(puStack_90 + 2))();
        }
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
      do {
        lVar12 = *plStack_70;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar3) {
          *plStack_70 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    param_1 = puStack_50;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
      do {
        lVar12 = *(long *)puStack_50;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
        if (bVar3) {
          *(long *)puStack_50 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(puStack_50 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return;
    }
  }
  uVar9 = (uint)param_2;
  ___stack_chk_fail();
  unaff_x19 = param_1;
  if (uVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_f0);
    FUN_0034b418(&puStack_d0);
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&puStack_50);
    unaff_x19 = param_1;
  }
  param_1 = unaff_x19;
  __Unwind_Resume();
  pcStack_f8 = FUN_00391888;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = *(long *)(param_1 + 8);
  uVar4 = *(uint *)(lVar12 + 0x178);
  puStack_110 = unaff_x20;
  puStack_108 = unaff_x19;
  puStack_100 = puVar15;
  if (((uVar4 == 0) || ((uint)*(byte *)(lVar12 + 0x17c) != (uVar9 & 0xff))) ||
     (uVar4 <= *(uint *)(lVar12 + 8))) {
    puStack_140 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_138 = 0x14;
    pcStack_130 = "grpc-accept-encoding";
    uStack_1a1 = (char)uVar9;
    func_0x003b095c(&plStack_160,&uStack_1a1);
    uVar4 = (uint)uStack_158 & 0xff;
    if (plStack_160 != (long *)0x0) {
      uVar4 = (uint)uStack_158;
    }
    lVar12 = *(long *)(param_1 + 8) + 8;
    FUN_00392064(lVar12,uVar4 + 0x34);
    lVar13 = *(long *)(param_1 + 8);
    *(int *)(lVar13 + 0x178) = (int)lVar12;
    *(char *)(lVar13 + 0x17c) = (char)uVar9;
    uStack_178 = uStack_138;
    puStack_180 = puStack_140;
    uStack_168 = uStack_128;
    pcStack_170 = pcStack_130;
    uStack_138 = 0;
    puStack_140 = (uint *)0x0;
    uStack_128 = 0;
    pcStack_130 = (char *)0x0;
    uStack_198 = uStack_158;
    plStack_1a0 = plStack_160;
    uStack_188 = uStack_148;
    uStack_190 = uStack_150;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    ppuVar11 = &puStack_180;
    FUN_0038eb08(param_1,ppuVar11,&plStack_1a0);
    uVar9 = (uint)ppuVar11;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1a0) {
      do {
        lVar12 = *plStack_1a0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
        if (bVar3) {
          *plStack_1a0 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_1a0[1])();
      }
    }
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_180) {
      do {
        lVar12 = *(long *)puStack_180;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_180,0x10);
        if (bVar3) {
          *(long *)puStack_180 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(puStack_180 + 2))();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_160) {
      do {
        lVar12 = *plStack_160;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
        if (bVar3) {
          *plStack_160 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_160[1])();
      }
    }
    param_1 = puStack_140;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_140) {
      do {
        lVar12 = *(long *)puStack_140;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_140,0x10);
        if (bVar3) {
          *(long *)puStack_140 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(puStack_140 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    iVar1 = (*(uint *)(lVar12 + 8) - uVar4) + *(int *)(lVar12 + 0x10);
    unaff_x30 = FUN_00391888;
FUN_0038ea60:
    *(undefined8 *)((long)pplVar6 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pplVar6 + -0x38) = unaff_x23;
    *(undefined8 *)((long)pplVar6 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pplVar6 + -0x28) = unaff_x21;
    *(undefined4 **)((long)pplVar6 + -0x20) = unaff_x20;
    *(uint **)((long)pplVar6 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pplVar6 + -0x10) = puVar15;
    *(code **)((long)pplVar6 + -8) = unaff_x30;
    uVar9 = iVar1 - 0x41;
    uVar14 = (ulong)uVar9;
    if (iVar1 + 0x3eU < 0x7f) {
      uVar14 = 1;
    }
    else {
      FUN_0039d54c();
    }
    func_0x0038e884(param_1,uVar14 & 0xffffffff);
    pbVar7 = *(byte **)(param_1 + 4);
    *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
         *(long *)(*(long *)(param_1 + 6) + 0x10) + (uVar14 & 0xffffffff);
    func_0x003ed000(pbVar7,uVar14 & 0xffffffff);
    if ((int)uVar14 != 1) {
      pbVar10 = pbVar7 + 1;
      *pbVar7 = 0xff;
      uVar4 = (int)uVar14 - 2;
      switch((ulong)uVar4) {
      case 4:
        pbVar7[5] = (byte)(uVar9 >> 0x1c) | 0x80;
      case 3:
        pbVar7[4] = (byte)(uVar9 >> 0x15) | 0x80;
      case 2:
        pbVar7[3] = (byte)(uVar9 >> 0xe) | 0x80;
      case 1:
        pbVar7[2] = (byte)(uVar9 >> 7) | 0x80;
      case 0:
        *pbVar10 = (byte)uVar9 | 0x80;
      default:
        pbVar10[uVar4] = pbVar10[uVar4] & 0x7f;
        return;
      }
    }
    *pbVar7 = (byte)(iVar1 + 0x3eU) | 0x80;
    return;
  }
  ___stack_chk_fail();
  if (uVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_1a0);
    FUN_0034b418(&puStack_180);
    FUN_0034b418(&plStack_160);
    FUN_0034b418(&puStack_140);
  }
  __Unwind_Resume();
  puVar8 = param_1 + 2;
  *param_1 = uVar9;
  uVar4 = param_1[3];
  if (uVar9 <= param_1[3]) {
    uVar4 = uVar9;
  }
  FUN_00392198(puVar8,uVar4);
  if ((int)puVar8 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 00391888; end: 00391ab3;  */

void FUN_00391888(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  uint **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar11 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar11 + 0x178);
  if (((uVar2 == 0) || ((uint)*(byte *)(lVar11 + 0x17c) != (param_2 & 0xff))) ||
     (uVar2 <= *(uint *)(lVar11 + 8))) {
    puStack_50 = (uint *)((long)&MACH_HEADER.magic + 1);
    uStack_48 = 0x14;
    uStack_b1 = (char)param_2;
    func_0x003b095c(&plStack_70,&uStack_b1);
    uVar2 = (uint)uStack_68 & 0xff;
    if (plStack_70 != (long *)0x0) {
      uVar2 = (uint)uStack_68;
    }
    lVar11 = *(long *)(param_1 + 8) + 8;
    FUN_00392064(lVar11,uVar2 + 0x34);
    lVar12 = *(long *)(param_1 + 8);
    *(int *)(lVar12 + 0x178) = (int)lVar11;
    *(char *)(lVar12 + 0x17c) = (char)param_2;
    uStack_88 = uStack_48;
    puStack_90 = puStack_50;
    pcStack_80 = "grpc-accept-encoding";
    uStack_48 = 0;
    puStack_50 = (uint *)0x0;
    uStack_a8 = uStack_68;
    plStack_b0 = plStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_68 = 0;
    plStack_70 = (long *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
    ppuVar9 = &puStack_90;
    FUN_0038eb08(param_1,ppuVar9,&plStack_b0);
    param_2 = (uint)ppuVar9;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
      do {
        lVar11 = *plStack_b0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar4) {
          *plStack_b0 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_90) {
      do {
        lVar11 = *(long *)puStack_90;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puStack_90,0x10);
        if (bVar4) {
          *(long *)puStack_90 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_90 + 2))();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_70) {
      do {
        lVar11 = *plStack_70;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar4) {
          *plStack_70 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
    param_1 = puStack_50;
    if ((uint *)((long)&MACH_HEADER.magic + 1) < puStack_50) {
      do {
        lVar11 = *(long *)puStack_50;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puStack_50,0x10);
        if (bVar4) {
          *(long *)puStack_50 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(puStack_50 + 2))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar10) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_00999f88 == lVar10) {
    iVar1 = (*(uint *)(lVar11 + 8) - uVar2) + *(int *)(lVar11 + 0x10);
    uVar2 = iVar1 + 0x3e;
    uVar5 = iVar1 - 0x41;
    uVar13 = (ulong)uVar5;
    if (uVar2 < 0x7f) {
      uVar13 = 1;
    }
    else {
      FUN_0039d54c();
    }
    func_0x0038e884(param_1,uVar13 & 0xffffffff);
    pbVar6 = *(byte **)(param_1 + 4);
    *(ulong *)(*(long *)(param_1 + 6) + 0x10) =
         *(long *)(*(long *)(param_1 + 6) + 0x10) + (uVar13 & 0xffffffff);
    func_0x003ed000(pbVar6,uVar13 & 0xffffffff);
    if ((int)uVar13 != 1) {
      pbVar8 = pbVar6 + 1;
      *pbVar6 = 0xff;
      uVar2 = (int)uVar13 - 2;
      switch((ulong)uVar2) {
      case 4:
        pbVar6[5] = (byte)(uVar5 >> 0x1c) | 0x80;
      case 3:
        pbVar6[4] = (byte)(uVar5 >> 0x15) | 0x80;
      case 2:
        pbVar6[3] = (byte)(uVar5 >> 0xe) | 0x80;
      case 1:
        pbVar6[2] = (byte)(uVar5 >> 7) | 0x80;
      case 0:
        *pbVar8 = (byte)uVar5 | 0x80;
      default:
        pbVar8[uVar2] = pbVar8[uVar2] & 0x7f;
        return;
      }
    }
    *pbVar6 = (byte)uVar2 | 0x80;
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_b0);
    FUN_0034b418(&puStack_90);
    FUN_0034b418(&plStack_70);
    FUN_0034b418(&puStack_50);
  }
  __Unwind_Resume();
  puVar7 = param_1 + 2;
  *param_1 = param_2;
  uVar2 = param_1[3];
  if (param_2 <= param_1[3]) {
    uVar2 = param_2;
  }
  FUN_00392198(puVar7,uVar2);
  if ((int)puVar7 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 00391ab4; end: 00391beb;  */

void FUN_00391ab4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = param_1 + 2;
  *param_1 = param_2;
  uVar1 = param_1[3];
  if (param_2 <= param_1[3]) {
    uVar1 = param_2;
  }
  FUN_00392198(puVar2,uVar1);
  if ((int)puVar2 != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 00391bec; end: 00391bef;  */

undefined8 *
FUN_00391bec(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    *puVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined1 *)((long)puVar2 + 9) = *(undefined1 *)((long)param_2 + 5);
    *(undefined1 *)((long)puVar2 + 10) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)((long)puVar2 + 0xc) = *param_2;
    puVar2[2] = param_4;
    puVar2[3] = *(undefined8 *)(param_2 + 4);
    puVar2[4] = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x40) = 9;
    param_2 = (undefined4 *)((long)register0x00000008 + -0x48);
    puVar3 = param_4;
    FUN_003ecd90();
    uVar4 = *(undefined8 *)(puVar2[2] + 0x20);
    puVar2[5] = param_4;
    puVar2[6] = uVar4;
    cVar1 = *(char *)(puVar2[4] + 4);
    *(undefined1 *)(puVar2[4] + 4) = 0;
    if (cVar1 != '\0') {
      param_4 = puVar2;
      FUN_0038f9a8();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28))
    break;
    unaff_x30 = FUN_00391bec;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = param_4;
    param_4 = puVar3;
    unaff_x19 = puVar2;
  }
  return puVar2;
}



/* Entry: 00391bf0; end: 00391c97;  */

undefined1  [16] FUN_00391bf0(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = param_2[1];
  lVar13 = *param_2;
  lVar11 = param_2[3];
  lVar10 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[1] = lVar9;
  *param_1 = lVar13;
  param_1[3] = lVar11;
  param_1[2] = lVar10;
  if (*param_1 == 0) {
    uVar8 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar8 = (uint)param_1[1];
  }
  *(uint *)(param_1 + 4) = uVar8;
  plVar4 = (long *)(ulong)(uVar8 - 0x7f);
  if (uVar8 < 0x7f) {
    plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)param_1 + 0x24) = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = param_1;
    return auVar18;
  }
  ___stack_chk_fail();
  FUN_0034b418(param_1);
  plVar6 = plVar4;
  __Unwind_Resume();
  pcStack_58 = FUN_00391c98;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = param_2[1];
  lVar13 = *param_2;
  lVar11 = param_2[3];
  lVar10 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  plVar6[1] = lVar9;
  *plVar6 = lVar13;
  plVar6[3] = lVar11;
  plVar6[2] = lVar10;
  if (*plVar6 == 0) {
    uVar8 = (uint)*(byte *)(plVar6 + 1);
  }
  else {
    uVar8 = (uint)plVar6[1];
  }
  *(uint *)(plVar6 + 4) = uVar8;
  plVar5 = (long *)(ulong)(uVar8 - 0x7f);
  plStack_70 = plVar4;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar8 < 0x7f) {
    plVar5 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)plVar6 + 0x24) = (int)plVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = plVar6;
    return auVar19;
  }
  ___stack_chk_fail();
  FUN_0034b418(plVar6);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_00391d40;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = param_2[1];
  plVar12 = (long *)*param_2;
  lVar13 = param_2[3];
  lVar11 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  plStack_c0 = plVar5;
  plStack_b8 = plVar6;
  ppuStack_b0 = &puStack_60;
  if (param_3 == 0) {
    plStack_120 = plVar12;
    lStack_118 = lVar10;
    lStack_110 = lVar11;
    lStack_108 = lVar13;
    FUN_00382524(&lStack_100,&plStack_120);
    plVar4[2] = lStack_f0;
    plVar4[1] = lStack_f8;
    plVar4[3] = lStack_e8;
    *plVar4 = lStack_100;
    *(undefined2 *)(plVar4 + 4) = 0x80;
    uVar1 = plVar4[1] & 0xff;
    if (lStack_100 != 0) {
      uVar1 = plVar4[1];
    }
    plVar4[5] = uVar1;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_120) {
      do {
        lVar10 = *plStack_120;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar3) {
          *plStack_120 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
  }
  else {
    lStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_108 = 0;
    lStack_110 = 0;
    plVar4[2] = lVar11;
    plVar4[1] = lVar10;
    plVar4[3] = lVar13;
    *plVar4 = (long)plVar12;
    *(undefined2 *)(plVar4 + 4) = 0x100;
    uVar1 = plVar4[1] & 0xff;
    if (plVar12 != (long *)0x0) {
      uVar1 = plVar4[1];
    }
    plVar4[5] = uVar1 + 1;
  }
  uVar8 = *(uint *)(plVar4 + 5);
  *(uint *)(plVar4 + 6) = uVar8;
  plVar6 = (long *)(ulong)(uVar8 - 0x7f);
  if (uVar8 < 0x7f) {
    plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)plVar4 + 0x34) = (int)plVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = plVar4;
    return auVar20;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(plVar4);
  }
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = *plVar6;
  lVar13 = param_2[1];
  for (lVar11 = plVar6[1]; lVar11 != lVar10; lVar11 = lVar11 + -0x28) {
    uVar15 = *(undefined8 *)(lVar11 + -0x10);
    uVar14 = *(undefined8 *)(lVar11 + -0x18);
    uVar17 = *(undefined8 *)(lVar11 + -0x20);
    uVar16 = *(undefined8 *)(lVar11 + -0x28);
    *(undefined8 *)(lVar11 + -0x20) = 0;
    *(undefined8 *)(lVar11 + -0x28) = 0;
    *(undefined8 *)(lVar11 + -0x10) = 0;
    *(undefined8 *)(lVar11 + -0x18) = 0;
    *(undefined8 *)(lVar13 + -0x20) = uVar17;
    *(undefined8 *)(lVar13 + -0x28) = uVar16;
    *(undefined8 *)(lVar13 + -0x10) = uVar15;
    *(undefined8 *)(lVar13 + -0x18) = uVar14;
    *(undefined4 *)(lVar13 + -8) = *(undefined4 *)(lVar11 + -8);
    lVar13 = lVar13 + -0x28;
  }
  param_2[1] = lVar13;
  lVar10 = *plVar6;
  *plVar6 = lVar13;
  param_2[1] = lVar10;
  lVar10 = plVar6[1];
  plVar6[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = plVar6[2];
  plVar6[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar9) {
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = plVar6;
    return auVar21;
  }
  ___stack_chk_fail();
  pcVar7 = "vector";
  FUN_0033b32c();
  if (param_2 < (long *)0x666666666666667) {
    lVar10 = (long)param_2 * 0x28;
    __Znwm(lVar10);
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar10;
    return auVar22;
  }
  FUN_00349558();
  lVar10 = *(long *)((long)pcVar7 + 8);
  lVar11 = *(long *)((long)pcVar7 + 0x10);
  while (lVar11 != lVar10) {
    *(long *)((long)pcVar7 + 0x10) = lVar11 + -0x28;
    FUN_0034b418();
    lVar11 = *(long *)((long)pcVar7 + 0x10);
  }
  if (*(long *)pcVar7 != 0) {
    __ZdlPv();
  }
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = pcVar7;
  return auVar23;
}



/* Entry: 00391c98; end: 00391d3f;  */

undefined1  [16] FUN_00391c98(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar8 = param_2[1];
  lVar12 = *param_2;
  lVar10 = param_2[3];
  lVar9 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[1] = lVar8;
  *param_1 = lVar12;
  param_1[3] = lVar10;
  param_1[2] = lVar9;
  if (*param_1 == 0) {
    uVar7 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar7 = (uint)param_1[1];
  }
  *(uint *)(param_1 + 4) = uVar7;
  plVar4 = (long *)(ulong)(uVar7 - 0x7f);
  if (uVar7 < 0x7f) {
    plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)param_1 + 0x24) = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  ___stack_chk_fail();
  FUN_0034b418(param_1);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_58 = FUN_00391d40;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = param_2[1];
  plVar11 = (long *)*param_2;
  lVar12 = param_2[3];
  lVar10 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  plStack_70 = plVar4;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    plStack_d0 = plVar11;
    lStack_c8 = lVar9;
    lStack_c0 = lVar10;
    lStack_b8 = lVar12;
    FUN_00382524(&lStack_b0,&plStack_d0);
    plVar5[2] = lStack_a0;
    plVar5[1] = lStack_a8;
    plVar5[3] = lStack_98;
    *plVar5 = lStack_b0;
    *(undefined2 *)(plVar5 + 4) = 0x80;
    uVar1 = plVar5[1] & 0xff;
    if (lStack_b0 != 0) {
      uVar1 = plVar5[1];
    }
    plVar5[5] = uVar1;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d0) {
      do {
        lVar9 = *plStack_d0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
        if (bVar3) {
          *plStack_d0 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (*(code *)plStack_d0[1])();
      }
    }
  }
  else {
    lStack_c8 = 0;
    plStack_d0 = (long *)0x0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    plVar5[2] = lVar10;
    plVar5[1] = lVar9;
    plVar5[3] = lVar12;
    *plVar5 = (long)plVar11;
    *(undefined2 *)(plVar5 + 4) = 0x100;
    uVar1 = plVar5[1] & 0xff;
    if (plVar11 != (long *)0x0) {
      uVar1 = plVar5[1];
    }
    plVar5[5] = uVar1 + 1;
  }
  uVar7 = *(uint *)(plVar5 + 5);
  *(uint *)(plVar5 + 6) = uVar7;
  plVar4 = (long *)(ulong)(uVar7 - 0x7f);
  if (uVar7 < 0x7f) {
    plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)plVar5 + 0x34) = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = plVar5;
    return auVar18;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(plVar5);
  }
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = *plVar4;
  lVar12 = param_2[1];
  for (lVar10 = plVar4[1]; lVar10 != lVar9; lVar10 = lVar10 + -0x28) {
    uVar14 = *(undefined8 *)(lVar10 + -0x10);
    uVar13 = *(undefined8 *)(lVar10 + -0x18);
    uVar16 = *(undefined8 *)(lVar10 + -0x20);
    uVar15 = *(undefined8 *)(lVar10 + -0x28);
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x28) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    *(undefined8 *)(lVar12 + -0x20) = uVar16;
    *(undefined8 *)(lVar12 + -0x28) = uVar15;
    *(undefined8 *)(lVar12 + -0x10) = uVar14;
    *(undefined8 *)(lVar12 + -0x18) = uVar13;
    *(undefined4 *)(lVar12 + -8) = *(undefined4 *)(lVar10 + -8);
    lVar12 = lVar12 + -0x28;
  }
  param_2[1] = lVar12;
  lVar9 = *plVar4;
  *plVar4 = lVar12;
  param_2[1] = lVar9;
  lVar9 = plVar4[1];
  plVar4[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = plVar4[2];
  plVar4[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = plVar4;
    return auVar19;
  }
  ___stack_chk_fail();
  pcVar6 = "vector";
  FUN_0033b32c();
  if (param_2 < (long *)0x666666666666667) {
    lVar9 = (long)param_2 * 0x28;
    __Znwm(lVar9);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar9;
    return auVar20;
  }
  FUN_00349558();
  lVar9 = *(long *)((long)pcVar6 + 8);
  lVar10 = *(long *)((long)pcVar6 + 0x10);
  while (lVar10 != lVar9) {
    *(long *)((long)pcVar6 + 0x10) = lVar10 + -0x28;
    FUN_0034b418();
    lVar10 = *(long *)((long)pcVar6 + 0x10);
  }
  if (*(long *)pcVar6 != 0) {
    __ZdlPv();
  }
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = pcVar6;
  return auVar21;
}



/* Entry: 00391d40; end: 00391e9f;  */

undefined1  [16] FUN_00391d40(long *param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar8 = param_2[1];
  plVar5 = (long *)*param_2;
  lVar11 = param_2[3];
  lVar9 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  if (param_3 == 0) {
    plStack_80 = plVar5;
    lStack_78 = lVar8;
    lStack_70 = lVar9;
    lStack_68 = lVar11;
    FUN_00382524(&lStack_60,&plStack_80);
    param_1[2] = lStack_50;
    param_1[1] = lStack_58;
    param_1[3] = lStack_48;
    *param_1 = lStack_60;
    *(undefined2 *)(param_1 + 4) = 0x80;
    uVar1 = param_1[1] & 0xff;
    if (lStack_60 != 0) {
      uVar1 = param_1[1];
    }
    param_1[5] = uVar1;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
      do {
        lVar8 = *plStack_80;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
        if (bVar4) {
          *plStack_80 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_80[1])();
      }
    }
  }
  else {
    lStack_78 = 0;
    plStack_80 = (long *)0x0;
    lStack_68 = 0;
    lStack_70 = 0;
    param_1[2] = lVar9;
    param_1[1] = lVar8;
    param_1[3] = lVar11;
    *param_1 = (long)plVar5;
    *(undefined2 *)(param_1 + 4) = 0x100;
    uVar1 = param_1[1] & 0xff;
    if (plVar5 != (long *)0x0) {
      uVar1 = param_1[1];
    }
    param_1[5] = uVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 6) = uVar2;
  plVar5 = (long *)(ulong)(uVar2 - 0x7f);
  if (uVar2 < 0x7f) {
    plVar5 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    FUN_0039d54c();
  }
  *(int *)((long)param_1 + 0x34) = (int)plVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(param_1);
  }
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar8 = *plVar5;
  lVar11 = param_2[1];
  for (lVar9 = plVar5[1]; lVar9 != lVar8; lVar9 = lVar9 + -0x28) {
    uVar12 = *(undefined8 *)(lVar9 + -0x10);
    uVar10 = *(undefined8 *)(lVar9 + -0x18);
    uVar14 = *(undefined8 *)(lVar9 + -0x20);
    uVar13 = *(undefined8 *)(lVar9 + -0x28);
    *(undefined8 *)(lVar9 + -0x20) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 *)(lVar11 + -0x20) = uVar14;
    *(undefined8 *)(lVar11 + -0x28) = uVar13;
    *(undefined8 *)(lVar11 + -0x10) = uVar12;
    *(undefined8 *)(lVar11 + -0x18) = uVar10;
    *(undefined4 *)(lVar11 + -8) = *(undefined4 *)(lVar9 + -8);
    lVar11 = lVar11 + -0x28;
  }
  param_2[1] = lVar11;
  lVar8 = *plVar5;
  *plVar5 = lVar11;
  param_2[1] = lVar8;
  lVar8 = plVar5[1];
  plVar5[1] = param_2[2];
  param_2[2] = lVar8;
  lVar8 = plVar5[2];
  plVar5[2] = param_2[3];
  param_2[3] = lVar8;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar7) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = plVar5;
    return auVar16;
  }
  ___stack_chk_fail();
  pcVar6 = "vector";
  FUN_0033b32c();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar8 = (long)param_2 * 0x28;
    __Znwm(lVar8);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar8;
    return auVar17;
  }
  FUN_00349558();
  lVar8 = *(long *)((long)pcVar6 + 8);
  lVar9 = *(long *)((long)pcVar6 + 0x10);
  while (lVar9 != lVar8) {
    *(long *)((long)pcVar6 + 0x10) = lVar9 + -0x28;
    FUN_0034b418();
    lVar9 = *(long *)((long)pcVar6 + 0x10);
  }
  if (*(long *)pcVar6 != 0) {
    __ZdlPv();
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = pcVar6;
  return auVar18;
}



/* Entry: 00391ea0; end: 00391f83;  */

undefined1  [16] FUN_00391ea0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar4 = *param_1;
  lVar1 = param_2[1];
  for (lVar5 = param_1[1]; lVar5 != lVar4; lVar5 = lVar5 + -0x28) {
    uVar7 = *(undefined8 *)(lVar5 + -0x10);
    uVar6 = *(undefined8 *)(lVar5 + -0x18);
    uVar9 = *(undefined8 *)(lVar5 + -0x20);
    uVar8 = *(undefined8 *)(lVar5 + -0x28);
    *(undefined8 *)(lVar5 + -0x20) = 0;
    *(undefined8 *)(lVar5 + -0x28) = 0;
    *(undefined8 *)(lVar5 + -0x10) = 0;
    *(undefined8 *)(lVar5 + -0x18) = 0;
    *(undefined8 *)(lVar1 + -0x20) = uVar9;
    *(undefined8 *)(lVar1 + -0x28) = uVar8;
    *(undefined8 *)(lVar1 + -0x10) = uVar7;
    *(undefined8 *)(lVar1 + -0x18) = uVar6;
    *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar5 + -8);
    lVar1 = lVar1 + -0x28;
  }
  param_2[1] = lVar1;
  lVar4 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  ___stack_chk_fail();
  pcVar2 = "vector";
  FUN_0033b32c();
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar4 = (long)param_2 * 0x28;
    __Znwm(lVar4);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  FUN_00349558();
  lVar4 = *(long *)((long)pcVar2 + 8);
  lVar5 = *(long *)((long)pcVar2 + 0x10);
  while (lVar5 != lVar4) {
    *(long *)((long)pcVar2 + 0x10) = lVar5 + -0x28;
    FUN_0034b418();
    lVar5 = *(long *)((long)pcVar2 + 0x10);
  }
  if (*(long *)pcVar2 != 0) {
    __ZdlPv();
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = pcVar2;
  return auVar12;
}



/* Entry: 00391f84; end: 00392013;  */

undefined1  [16] FUN_00391f84(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    FUN_0034b418();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 00392014; end: 00392027;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined1  [16] FUN_00392014(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *apbStack_208 [2];
  char cStack_1f1;
  undefined1 auStack_1f0 [56];
  undefined8 uStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  ulong auStack_168 [2];
  undefined7 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  char *pcStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  long alStack_b8 [8];
  long lStack_78;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  pcVar9 = "vector";
  FUN_0033b32c();
  pcStack_18 = FUN_00392028;
  if (param_2 >> 0x3d == 0) {
    lVar10 = param_2 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar10);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar10;
    return auVar19;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00349558();
  pcStack_38 = FUN_0039205c;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  uVar14 = param_2;
  ppuStack_40 = &puStack_20;
  FUN_00338e58();
  if ((int)plVar1 != 0) {
    puStack_c0 = &stack0xffffffffffffffd0;
    plVar1 = alStack_b8;
    _vsnprintf(plVar1,0x40,param_4,&stack0xffffffffffffffd0);
    if ((int)(uint)plVar1 < 0) {
      unaff_x23 = (long *)0x0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x24 = plVar1;
      if ((uint)plVar1 < 0x40) {
        param_4 = (long *)0x0;
        unaff_x23 = alStack_b8;
      }
      else {
        param_4 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_c0 = &stack0xffffffffffffffd0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar14 = param_2;
    FUN_00338e80(pcVar9,param_2,2,unaff_x23);
    plVar1 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    auVar16._8_8_ = uVar14;
    auVar16._0_8_ = plVar1;
    return auVar16;
  }
  ___stack_chk_fail();
  uStack_d8 = 2;
  pcStack_c8 = FUN_00339178;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  plStack_100 = unaff_x24;
  plStack_f8 = unaff_x23;
  plStack_f0 = param_4;
  pcStack_e8 = pcVar9;
  uStack_e0 = param_2;
  pppuStack_d0 = &ppuStack_40;
  FUN_0033a598();
  lVar10 = *plVar1;
  lVar3 = lVar10;
  uStack_1b8 = uVar2;
  _strrchr(lVar10,0x2f);
  if (lVar3 != 0) {
    lVar10 = lVar3 + 1;
  }
  puVar4 = &uStack_1b8;
  _localtime_r(puVar4,auStack_1f0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_1a8 = 0x656d69746c6163;
    uStack_1a1 = 0;
    uStack_1b0 = 0x6c3a726f727265;
    uStack_1a9 = 0x6f;
  }
  else {
    puVar5 = &uStack_1b0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1f0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1b0 = 0x733a726f727265;
      uStack_1a9 = 0x74;
      uStack_1a8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)plVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_168[1] = 0x560e98;
  puStack_158 = &uStack_1b0;
  uStack_150 = 0x560e98;
  uStack_148 = uVar14 & 0xffffffff;
  uStack_140 = 0x5606ac;
  pcStack_130 = FUN_00560738;
  uStack_120 = 0x560e98;
  uStack_118 = (ulong)*(uint *)(plVar1 + 1);
  uStack_110 = 0x5606ac;
  puVar12 = auStack_168;
  auStack_168[0] = uVar6;
  uStack_138 = uVar7;
  lStack_128 = lVar10;
  FUN_0056189c(apbStack_208,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)((long)plVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_168[0] = auStack_168[0] & 0xffffffffffffff00;
    uStack_150 = uStack_150 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_168);
    if ((char)uStack_150 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1f1 < '\0') {
    pbVar8 = apbStack_208[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    auVar17._8_8_ = pcVar9;
    auVar17._0_8_ = pbVar8;
    return auVar17;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(apbStack_208[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar14 = (ulong)pcVar9 >> 2;
    pbVar15 = pbVar8;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar14 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar9 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar8[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar8[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar8) * 0x16a88000 | (uVar13 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = uVar11 ^ uVar11 >> 0x10;
  auVar18._8_8_ = pcVar9;
  return auVar18;
}



/* Entry: 00392028; end: 0039205b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

undefined1  [16] FUN_00392028(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *apbStack_1f8 [2];
  char cStack_1e1;
  undefined1 auStack_1e0 [56];
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  ulong auStack_158 [2];
  undefined7 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  code *pcStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  long alStack_a8 [8];
  long lStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 >> 0x3d == 0) {
    lVar9 = param_2 << 3;
    __Znwm(lVar9);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar9;
    return auVar19;
  }
  FUN_00349558();
  pcStack_28 = FUN_0039205c;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  uVar14 = param_2;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)plVar1 != 0) {
    puStack_b0 = &stack0xffffffffffffffe0;
    plVar1 = alStack_a8;
    _vsnprintf(plVar1,0x40,param_4,&stack0xffffffffffffffe0);
    if ((int)(uint)plVar1 < 0) {
      unaff_x23 = (long *)0x0;
      param_4 = (long *)0x0;
    }
    else {
      unaff_x24 = plVar1;
      if ((uint)plVar1 < 0x40) {
        param_4 = (long *)0x0;
        unaff_x23 = alStack_a8;
      }
      else {
        param_4 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_b0 = &stack0xffffffffffffffe0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar14 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    plVar1 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    auVar16._8_8_ = uVar14;
    auVar16._0_8_ = plVar1;
    return auVar16;
  }
  ___stack_chk_fail();
  uStack_c8 = 2;
  pcStack_b8 = FUN_00339178;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  plStack_f0 = unaff_x24;
  plStack_e8 = unaff_x23;
  plStack_e0 = param_4;
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  ppuStack_c0 = &puStack_30;
  FUN_0033a598();
  lVar9 = *plVar1;
  lVar3 = lVar9;
  uStack_1a8 = uVar2;
  _strrchr(lVar9,0x2f);
  if (lVar3 != 0) {
    lVar9 = lVar3 + 1;
  }
  puVar4 = &uStack_1a8;
  _localtime_r(puVar4,auStack_1e0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_198 = 0x656d69746c6163;
    uStack_191 = 0;
    uStack_1a0 = 0x6c3a726f727265;
    uStack_199 = 0x6f;
  }
  else {
    puVar5 = &uStack_1a0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1e0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1a0 = 0x733a726f727265;
      uStack_199 = 0x74;
      uStack_198 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)((long)plVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_158[1] = 0x560e98;
  puStack_148 = &uStack_1a0;
  uStack_140 = 0x560e98;
  uStack_138 = uVar14 & 0xffffffff;
  uStack_130 = 0x5606ac;
  pcStack_120 = FUN_00560738;
  uStack_110 = 0x560e98;
  uStack_108 = (ulong)*(uint *)(plVar1 + 1);
  uStack_100 = 0x5606ac;
  puVar12 = auStack_158;
  auStack_158[0] = uVar6;
  uStack_128 = uVar7;
  lStack_118 = lVar9;
  FUN_0056189c(apbStack_1f8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)((long)plVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_158[0] = auStack_158[0] & 0xffffffffffffff00;
    uStack_140 = uStack_140 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_158);
    if ((char)uStack_140 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1e1 < '\0') {
    pbVar8 = apbStack_1f8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
    auVar17._8_8_ = pcVar10;
    auVar17._0_8_ = pbVar8;
    return auVar17;
  }
  ___stack_chk_fail();
  if (cStack_1e1 < '\0') {
    __ZdlPv(apbStack_1f8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar14 = (ulong)pcVar10 >> 2;
    pbVar15 = pbVar8;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar14 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar10 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar8[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar8[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar8) * 0x16a88000 | (uVar13 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = uVar11 ^ uVar11 >> 0x10;
  auVar18._8_8_ = pcVar10;
  return auVar18;
}



/* Entry: 0039205c; end: 00392063;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0039205c(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00392064; end: 0039212f;  */

uint * FUN_00392064(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  
  uVar6 = param_1[3];
  if (param_1[1] < param_2) {
    while (uVar6 != 0) {
      FUN_00392130(param_1);
      uVar6 = param_1[3];
    }
    return (uint *)0x0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[2];
  puVar4 = param_1;
  uVar8 = param_2;
  uVar3 = uVar2;
  if ((ulong)param_1[1] < uVar6 + param_2) {
    do {
      puVar4 = param_1;
      FUN_00392130();
      uVar6 = param_1[3];
    } while ((ulong)param_1[1] < uVar6 + param_2);
    uVar3 = param_1[2];
  }
  uVar5 = (uint)uVar8;
  uVar8 = *(ulong *)(param_1 + 4) >> 1;
  if (uVar3 < uVar8) {
    puVar4 = (uint *)(ulong)(uVar1 + uVar2 + 1);
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = (ulong)puVar4 / uVar8;
    }
    puVar9 = param_1 + 6;
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      puVar9 = *(uint **)puVar9;
    }
    *(short *)((long)puVar9 + ((long)puVar4 - uVar7 * uVar8) * 2) = (short)param_2;
    param_1[2] = uVar3 + 1;
    param_1[3] = uVar6 + (int)param_2;
    return puVar4;
  }
  func_0x00773094();
  uVar1 = *puVar4;
  uVar6 = uVar1 + 1;
  *puVar4 = uVar6;
  if (uVar1 < 0xffffffff) {
    if (puVar4[2] != 0) {
      uVar7 = *(ulong *)(puVar4 + 4) >> 1;
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar6 / uVar7;
      }
      puVar9 = puVar4 + 6;
      if ((*(ulong *)(puVar4 + 4) & 1) != 0) {
        puVar9 = *(uint **)puVar9;
      }
      uVar6 = (uint)*(ushort *)((long)puVar9 + ((ulong)uVar6 - uVar8 * uVar7) * 2);
      if (uVar6 <= puVar4[3]) {
        puVar4[2] = puVar4[2] - 1;
        puVar4[3] = puVar4[3] - uVar6;
        return puVar4;
      }
      goto LAB_00392194;
    }
  }
  else {
    func_0x007730c8();
  }
  func_0x007730fc();
LAB_00392194:
  func_0x00773130();
  uVar6 = puVar4[1];
  if (uVar6 != uVar5) {
    while (uVar5 < puVar4[3]) {
      FUN_00392130(puVar4);
    }
    puVar4[1] = uVar5;
    uVar8 = (ulong)(uVar5 + 0x1f >> 5);
    if (*(ulong *)(puVar4 + 4) >> 1 < uVar8) {
      uVar7 = *(ulong *)(puVar4 + 4) & 0xfffffffffffffffe;
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      FUN_00392218(puVar4,uVar7);
    }
  }
  return (uint *)(ulong)(uVar6 != uVar5);
}



/* Entry: 00392130; end: 00392197;  */

uint * FUN_00392130(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 + 1;
  *param_1 = uVar3;
  if (uVar1 < 0xffffffff) {
    if (param_1[2] != 0) {
      uVar4 = *(ulong *)(param_1 + 4) >> 1;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar3 / uVar4;
      }
      puVar5 = param_1 + 6;
      if ((*(ulong *)(param_1 + 4) & 1) != 0) {
        puVar5 = *(uint **)puVar5;
      }
      uVar3 = (uint)*(ushort *)((long)puVar5 + ((ulong)uVar3 - uVar2 * uVar4) * 2);
      if (uVar3 <= param_1[3]) {
        param_1[2] = param_1[2] - 1;
        param_1[3] = param_1[3] - uVar3;
        return param_1;
      }
      goto LAB_00392194;
    }
  }
  else {
    func_0x007730c8();
  }
  func_0x007730fc();
LAB_00392194:
  func_0x00773130();
  uVar3 = param_1[1];
  if (uVar3 != param_2) {
    while (param_2 < param_1[3]) {
      FUN_00392130(param_1);
    }
    param_1[1] = param_2;
    uVar2 = (ulong)(param_2 + 0x1f >> 5);
    if (*(ulong *)(param_1 + 4) >> 1 < uVar2) {
      uVar4 = *(ulong *)(param_1 + 4) & 0xfffffffffffffffe;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      FUN_00392218(param_1,uVar4);
    }
  }
  return (uint *)(ulong)(uVar3 != param_2);
}



/* Entry: 00392198; end: 00392217;  */

bool FUN_00392198(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    while (param_2 < *(uint *)(param_1 + 0xc)) {
      FUN_00392130(param_1);
    }
    *(uint *)(param_1 + 4) = param_2;
    uVar2 = (ulong)(param_2 + 0x1f >> 5);
    if (*(ulong *)(param_1 + 0x10) >> 1 < uVar2) {
      uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      FUN_00392218(param_1,uVar3);
    }
  }
  return uVar1 != param_2;
}



/* Entry: 00392218; end: 0039236f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

ulong **** FUN_00392218(uint *param_1,uint param_2,undefined8 param_3,ulong ****param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong ****ppppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong ****ppppuVar7;
  ulong ****ppppuVar8;
  char *pcVar9;
  ulong ****ppppuVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong ***pppuVar15;
  uint uVar16;
  ulong ****ppppuVar17;
  uint uVar18;
  uint *puVar19;
  ulong ****unaff_x23;
  ulong ***unaff_x24;
  ulong ***pppuVar20;
  ulong ***pppuVar21;
  ulong ***pppuVar22;
  ulong ***pppuVar23;
  ulong ***pppuVar24;
  ulong ***pppuVar25;
  ulong ***apppuStack_468 [2];
  char cStack_451;
  undefined1 auStack_450 [56];
  undefined8 uStack_418;
  undefined7 uStack_410;
  undefined1 uStack_409;
  undefined7 uStack_408;
  undefined1 uStack_401;
  ulong auStack_3c8 [2];
  undefined7 *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  code *pcStack_390;
  ulong **ppuStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  ulong **ppuStack_360;
  ulong ***pppuStack_358;
  ulong ***pppuStack_350;
  ulong ***pppuStack_348;
  ulong ***pppuStack_340;
  undefined8 uStack_338;
  undefined1 ***pppuStack_330;
  code *pcStack_328;
  undefined1 *puStack_320;
  ulong **appuStack_318 [8];
  long lStack_2d8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined1 auStack_290 [16];
  ulong **ppuStack_280;
  ulong **ppuStack_278;
  ulong **ppuStack_270;
  ulong **ppuStack_268;
  ulong **ppuStack_260;
  ulong **ppuStack_258;
  ulong **ppuStack_250;
  ulong **ppuStack_248;
  ulong **ppuStack_240;
  ulong **ppuStack_238;
  ulong **ppuStack_230;
  ulong **ppuStack_228;
  ulong **ppuStack_220;
  ulong **ppuStack_218;
  ulong **ppuStack_210;
  ulong **ppuStack_208;
  ulong **ppuStack_200;
  ulong **ppuStack_1f8;
  ulong **ppuStack_1f0;
  ulong **ppuStack_1e8;
  ulong **ppuStack_1e0;
  ulong **ppuStack_1d8;
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  ulong **ppuStack_1c0;
  ulong **ppuStack_1b8;
  ulong **ppuStack_1b0;
  ulong **ppuStack_1a8;
  ulong **ppuStack_1a0;
  ulong **ppuStack_198;
  ulong **ppuStack_190;
  ulong **ppuStack_188;
  long lStack_178;
  undefined1 *puStack_160;
  code *pcStack_158;
  char *pcStack_150;
  undefined1 uStack_141;
  ulong **ppuStack_140;
  ulong ***apppuStack_138 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuVar10 = (ulong ****)(ulong)param_2;
  FUN_00388b04(&ppuStack_140,ppppuVar10,&uStack_141);
  uVar18 = param_1[2];
  uVar12 = (ulong)uVar18;
  if (param_2 < uVar18) {
    pcStack_150 = "table_elems_ <= capacity";
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_encoder_table.cc"
                 ,0x51,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x392348);
    (*pcVar2)();
  }
  if (uVar18 != 0) {
    uVar18 = *param_1;
    uVar13 = *(ulong *)(param_1 + 4);
    uVar14 = uVar13 >> 1;
    do {
      uVar18 = uVar18 + 1;
      puVar19 = param_1 + 6;
      if ((uVar13 & 1) != 0) {
        puVar19 = *(uint **)(param_1 + 6);
      }
      uVar1 = 0;
      if (uVar14 != 0) {
        uVar1 = uVar18 / uVar14;
      }
      uVar16 = 0;
      if (param_2 != 0) {
        uVar16 = uVar18 / param_2;
      }
      ppppuVar7 = apppuStack_138;
      if (((byte)ppuStack_140 & 1) != 0) {
        ppppuVar7 = (ulong ****)apppuStack_138[0];
      }
      *(undefined2 *)((long)ppppuVar7 + (ulong)(uVar18 - uVar16 * param_2) * 2) =
           *(undefined2 *)((long)puVar19 + ((ulong)uVar18 - uVar1 * uVar14) * 2);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  ppppuVar7 = (ulong ****)(param_1 + 4);
  if (ppppuVar7 != (ulong ****)&ppuStack_140) {
    ppppuVar10 = (ulong ****)&ppuStack_140;
    FUN_00392370();
  }
  if (((byte)ppuStack_140 & 1) != 0) {
    __ZdlPv();
    ppppuVar7 = (ulong ****)apppuStack_138[0];
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return ppppuVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_158 = FUN_00392370;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar15 = *ppppuVar10;
  if (((ulong)*ppppuVar7 & 1) == 0) {
    uVar12 = (ulong)pppuVar15 & 1;
    ppppuVar3 = ppppuVar7;
    ppppuVar8 = ppppuVar10;
    pppuVar15 = *ppppuVar7;
    if (uVar12 == 0) {
      ppuStack_1b8 = (ulong **)ppppuVar7[0x1a];
      ppuStack_1c0 = (ulong **)ppppuVar7[0x19];
      ppuStack_1a8 = (ulong **)ppppuVar7[0x1c];
      ppuStack_1b0 = (ulong **)ppppuVar7[0x1b];
      ppuStack_198 = (ulong **)ppppuVar7[0x1e];
      ppuStack_1a0 = (ulong **)ppppuVar7[0x1d];
      ppuStack_188 = (ulong **)ppppuVar7[0x20];
      ppuStack_190 = (ulong **)ppppuVar7[0x1f];
      ppuStack_1f8 = (ulong **)ppppuVar7[0x12];
      ppuStack_200 = (ulong **)ppppuVar7[0x11];
      ppuStack_1e8 = (ulong **)ppppuVar7[0x14];
      ppuStack_1f0 = (ulong **)ppppuVar7[0x13];
      ppuStack_1d8 = (ulong **)ppppuVar7[0x16];
      ppuStack_1e0 = (ulong **)ppppuVar7[0x15];
      ppuStack_1c8 = (ulong **)ppppuVar7[0x18];
      ppuStack_1d0 = (ulong **)ppppuVar7[0x17];
      ppuStack_238 = (ulong **)ppppuVar7[10];
      ppuStack_240 = (ulong **)ppppuVar7[9];
      ppuStack_228 = (ulong **)ppppuVar7[0xc];
      ppuStack_230 = (ulong **)ppppuVar7[0xb];
      ppuStack_218 = (ulong **)ppppuVar7[0xe];
      ppuStack_220 = (ulong **)ppppuVar7[0xd];
      ppuStack_208 = (ulong **)ppppuVar7[0x10];
      ppuStack_210 = (ulong **)ppppuVar7[0xf];
      ppuStack_278 = (ulong **)ppppuVar7[2];
      ppuStack_280 = (ulong **)ppppuVar7[1];
      ppuStack_268 = (ulong **)ppppuVar7[4];
      ppuStack_270 = (ulong **)ppppuVar7[3];
      ppuStack_258 = (ulong **)ppppuVar7[6];
      ppuStack_260 = (ulong **)ppppuVar7[5];
      ppuStack_248 = (ulong **)ppppuVar7[8];
      ppuStack_250 = (ulong **)ppppuVar7[7];
      pppuVar20 = ppppuVar10[2];
      pppuVar15 = ppppuVar10[1];
      pppuVar22 = ppppuVar10[4];
      pppuVar21 = ppppuVar10[3];
      pppuVar24 = ppppuVar10[6];
      pppuVar23 = ppppuVar10[5];
      pppuVar25 = ppppuVar10[7];
      ppppuVar7[8] = ppppuVar10[8];
      ppppuVar7[7] = pppuVar25;
      ppppuVar7[6] = pppuVar24;
      ppppuVar7[5] = pppuVar23;
      ppppuVar7[4] = pppuVar22;
      ppppuVar7[3] = pppuVar21;
      ppppuVar7[2] = pppuVar20;
      ppppuVar7[1] = pppuVar15;
      pppuVar20 = ppppuVar10[10];
      pppuVar15 = ppppuVar10[9];
      pppuVar22 = ppppuVar10[0xc];
      pppuVar21 = ppppuVar10[0xb];
      pppuVar24 = ppppuVar10[0xe];
      pppuVar23 = ppppuVar10[0xd];
      pppuVar25 = ppppuVar10[0xf];
      ppppuVar7[0x10] = ppppuVar10[0x10];
      ppppuVar7[0xf] = pppuVar25;
      ppppuVar7[0xe] = pppuVar24;
      ppppuVar7[0xd] = pppuVar23;
      ppppuVar7[0xc] = pppuVar22;
      ppppuVar7[0xb] = pppuVar21;
      ppppuVar7[10] = pppuVar20;
      ppppuVar7[9] = pppuVar15;
      pppuVar20 = ppppuVar10[0x12];
      pppuVar15 = ppppuVar10[0x11];
      pppuVar22 = ppppuVar10[0x14];
      pppuVar21 = ppppuVar10[0x13];
      pppuVar24 = ppppuVar10[0x16];
      pppuVar23 = ppppuVar10[0x15];
      pppuVar25 = ppppuVar10[0x17];
      ppppuVar7[0x18] = ppppuVar10[0x18];
      ppppuVar7[0x17] = pppuVar25;
      ppppuVar7[0x16] = pppuVar24;
      ppppuVar7[0x15] = pppuVar23;
      ppppuVar7[0x14] = pppuVar22;
      ppppuVar7[0x13] = pppuVar21;
      ppppuVar7[0x12] = pppuVar20;
      ppppuVar7[0x11] = pppuVar15;
      pppuVar20 = ppppuVar10[0x1a];
      pppuVar15 = ppppuVar10[0x19];
      pppuVar22 = ppppuVar10[0x1c];
      pppuVar21 = ppppuVar10[0x1b];
      pppuVar24 = ppppuVar10[0x1e];
      pppuVar23 = ppppuVar10[0x1d];
      pppuVar25 = ppppuVar10[0x1f];
      ppppuVar7[0x20] = ppppuVar10[0x20];
      ppppuVar7[0x1f] = pppuVar25;
      ppppuVar7[0x1e] = pppuVar24;
      ppppuVar7[0x1d] = pppuVar23;
      ppppuVar7[0x1c] = pppuVar22;
      ppppuVar7[0x1b] = pppuVar21;
      ppppuVar7[0x1a] = pppuVar20;
      ppppuVar7[0x19] = pppuVar15;
      ppppuVar10[0x1a] = (ulong ***)ppuStack_1b8;
      ppppuVar10[0x19] = (ulong ***)ppuStack_1c0;
      ppppuVar10[0x1c] = (ulong ***)ppuStack_1a8;
      ppppuVar10[0x1b] = (ulong ***)ppuStack_1b0;
      ppppuVar10[0x1e] = (ulong ***)ppuStack_198;
      ppppuVar10[0x1d] = (ulong ***)ppuStack_1a0;
      ppppuVar10[0x20] = (ulong ***)ppuStack_188;
      ppppuVar10[0x1f] = (ulong ***)ppuStack_190;
      ppppuVar10[0x12] = (ulong ***)ppuStack_1f8;
      ppppuVar10[0x11] = (ulong ***)ppuStack_200;
      ppppuVar10[0x14] = (ulong ***)ppuStack_1e8;
      ppppuVar10[0x13] = (ulong ***)ppuStack_1f0;
      ppppuVar10[0x16] = (ulong ***)ppuStack_1d8;
      ppppuVar10[0x15] = (ulong ***)ppuStack_1e0;
      ppppuVar10[0x18] = (ulong ***)ppuStack_1c8;
      ppppuVar10[0x17] = (ulong ***)ppuStack_1d0;
      ppppuVar10[10] = (ulong ***)ppuStack_238;
      ppppuVar10[9] = (ulong ***)ppuStack_240;
      ppppuVar10[0xc] = (ulong ***)ppuStack_228;
      ppppuVar10[0xb] = (ulong ***)ppuStack_230;
      ppppuVar10[0xe] = (ulong ***)ppuStack_218;
      ppppuVar10[0xd] = (ulong ***)ppuStack_220;
      ppppuVar10[0x10] = (ulong ***)ppuStack_208;
      ppppuVar10[0xf] = (ulong ***)ppuStack_210;
      ppppuVar10[2] = (ulong ***)ppuStack_278;
      ppppuVar10[1] = (ulong ***)ppuStack_280;
      ppppuVar10[4] = (ulong ***)ppuStack_268;
      ppppuVar10[3] = (ulong ***)ppuStack_270;
      ppppuVar10[6] = (ulong ***)ppuStack_258;
      ppppuVar10[5] = (ulong ***)ppuStack_260;
      ppppuVar10[8] = (ulong ***)ppuStack_248;
      ppppuVar10[7] = (ulong ***)ppuStack_250;
    }
    else {
LAB_00392500:
      pppuVar20 = ppppuVar8[1];
      pppuVar21 = ppppuVar8[2];
      if ((ulong ***)0x1 < pppuVar15) {
        uVar12 = (ulong)pppuVar15 >> 1;
        ppppuVar8 = ppppuVar8 + 1;
        ppppuVar17 = ppppuVar3 + 1;
        do {
          *(undefined2 *)ppppuVar8 = *(undefined2 *)ppppuVar17;
          uVar12 = uVar12 - 1;
          ppppuVar8 = (ulong ****)((long)ppppuVar8 + 2);
          ppppuVar17 = (ulong ****)((long)ppppuVar17 + 2);
        } while (uVar12 != 0);
      }
      ppppuVar3[1] = pppuVar20;
      ppppuVar3[2] = pppuVar21;
    }
  }
  else {
    ppppuVar3 = ppppuVar10;
    ppppuVar8 = ppppuVar7;
    if (((ulong)pppuVar15 & 1) == 0) goto LAB_00392500;
    pppuVar20 = ppppuVar7[2];
    pppuVar15 = ppppuVar7[1];
    pppuVar21 = ppppuVar10[1];
    ppppuVar7[2] = ppppuVar10[2];
    ppppuVar7[1] = pppuVar21;
    ppppuVar10[2] = pppuVar20;
    ppppuVar10[1] = pppuVar15;
  }
  pppuVar15 = *ppppuVar7;
  *ppppuVar7 = *ppppuVar10;
  *ppppuVar10 = pppuVar15;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return ppppuVar7;
  }
  puStack_160 = &stack0xfffffffffffffff0;
  ___stack_chk_fail();
  pcStack_298 = FUN_00392578;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuVar3 = (ulong ****)((long)&MACH_HEADER.magic + 2);
  ppppuVar8 = ppppuVar10;
  ppuStack_2a0 = &puStack_160;
  FUN_00338e58();
  if ((int)ppppuVar3 != 0) {
    puStack_320 = auStack_290;
    pppuVar15 = appuStack_318;
    _vsnprintf(pppuVar15,0x40,param_4,auStack_290);
    if ((int)(uint)pppuVar15 < 0) {
      unaff_x23 = (ulong ****)0x0;
      param_4 = (ulong ****)0x0;
    }
    else {
      unaff_x24 = pppuVar15;
      if ((uint)pppuVar15 < 0x40) {
        param_4 = (ulong ****)0x0;
        unaff_x23 = (ulong ****)appuStack_318;
      }
      else {
        param_4 = (ulong ****)(((ulong)pppuVar15 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_320 = auStack_290;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    ppppuVar8 = ppppuVar10;
    FUN_00338e80(ppppuVar7,ppppuVar10,2,unaff_x23);
    ppppuVar3 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_2d8) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  uStack_338 = 2;
  pcStack_328 = FUN_00339178;
  lStack_368 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  ppuStack_360 = (ulong **)unaff_x24;
  pppuStack_358 = (ulong ***)unaff_x23;
  pppuStack_350 = (ulong ***)param_4;
  pppuStack_348 = (ulong ***)ppppuVar7;
  pppuStack_340 = (ulong ***)ppppuVar10;
  pppuStack_330 = &ppuStack_2a0;
  FUN_0033a598();
  pppuVar15 = *ppppuVar3;
  pppuVar20 = pppuVar15;
  uStack_418 = uVar4;
  _strrchr(pppuVar15,0x2f);
  if (pppuVar20 != (ulong ***)0x0) {
    pppuVar15 = (ulong ***)((long)pppuVar20 + 1);
  }
  puVar5 = &uStack_418;
  _localtime_r(puVar5,auStack_450);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_408 = 0x656d69746c6163;
    uStack_401 = 0;
    uStack_410 = 0x6c3a726f727265;
    uStack_409 = 0x6f;
  }
  else {
    puVar6 = &uStack_410;
    _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_450);
    if (puVar6 == (undefined7 *)0x0) {
      uStack_410 = 0x733a726f727265;
      uStack_409 = 0x74;
      uStack_408 = 0x656d69746672;
    }
  }
  uVar13 = (ulong)*(uint *)((long)ppppuVar3 + 0xc);
  func_0x00338e1c();
  uVar12 = uVar13;
  _pthread_self();
  auStack_3c8[1] = 0x560e98;
  puStack_3b8 = &uStack_410;
  uStack_3b0 = 0x560e98;
  uStack_3a8 = (ulong)ppppuVar8 & 0xffffffff;
  uStack_3a0 = 0x5606ac;
  pcStack_390 = FUN_00560738;
  uStack_380 = 0x560e98;
  uStack_378 = (ulong)*(uint *)(ppppuVar3 + 1);
  uStack_370 = 0x5606ac;
  puVar11 = auStack_3c8;
  auStack_3c8[0] = uVar13;
  uStack_398 = uVar12;
  ppuStack_388 = (ulong **)pppuVar15;
  FUN_0056189c(apppuStack_468,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar18 = *(uint *)((long)ppppuVar3 + 0xc);
  func_0x00338e6c();
  if (uVar18 == 0) {
    auStack_3c8[0] = auStack_3c8[0] & 0xffffffffffffff00;
    uStack_3b0 = uStack_3b0 & 0xffffffffffffff00;
LAB_00339300:
    ppppuVar10 = *(ulong *****)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_3c8);
    if ((char)uStack_3b0 == '\0') goto LAB_00339300;
    ppppuVar10 = *(ulong *****)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_451 < '\0') {
    ppppuVar10 = (ulong ****)apppuStack_468[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_368) {
    return ppppuVar10;
  }
  ___stack_chk_fail();
  if (cStack_451 < '\0') {
    __ZdlPv(apppuStack_468[0]);
  }
  __Unwind_Resume();
  uVar18 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar12 = (ulong)pcVar9 >> 2;
    ppppuVar7 = ppppuVar10;
    do {
      uVar18 = (*(int *)ppppuVar7 * 0x16a88000 | (uint)(*(int *)ppppuVar7 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar18 = (uVar18 >> 0x13 | uVar18 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar18;
      uVar12 = uVar12 - 1;
      ppppuVar7 = (ulong ****)((long)ppppuVar7 + 4);
    } while (uVar12 != 0);
    ppppuVar10 = (ulong ****)((long)ppppuVar10 + ((ulong)pcVar9 & 0xfffffffffffffffc));
  }
  uVar16 = 0;
  uVar12 = (ulong)pcVar9 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar16 = (uint)*(byte *)((long)ppppuVar10 + 2) << 0x10;
    }
    uVar16 = uVar16 | (uint)*(byte *)((long)ppppuVar10 + 1) << 8;
  }
  uVar18 = ((uVar16 ^ *(byte *)ppppuVar10) * 0x16a88000 |
           (uVar16 ^ *(byte *)ppppuVar10) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar18;
LAB_00339464:
  uVar18 = uVar18 ^ (uint)pcVar9;
  uVar18 = (uVar18 ^ uVar18 >> 0x10) * -0x7a143595;
  uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
  return (ulong ****)(ulong)(uVar18 ^ uVar18 >> 0x10);
}



/* Entry: 00392370; end: 00392577;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

ulong * FUN_00392370(ulong *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined7 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  char *pcVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *apuStack_318 [2];
  char cStack_301;
  undefined1 auStack_300 [56];
  undefined8 uStack_2c8;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  ulong auStack_278 [2];
  undefined7 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  code *pcStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined1 *puStack_1d0;
  ulong auStack_1c8 [8];
  long lStack_188;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [16];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = *param_2;
  if ((*param_1 & 1) == 0) {
    uVar12 = uVar9 & 1;
    puVar5 = param_1;
    puVar8 = param_2;
    uVar9 = *param_1;
    if (uVar12 == 0) {
      uStack_68 = param_1[0x1a];
      uStack_70 = param_1[0x19];
      uStack_58 = param_1[0x1c];
      uStack_60 = param_1[0x1b];
      uStack_48 = param_1[0x1e];
      uStack_50 = param_1[0x1d];
      uStack_38 = param_1[0x20];
      uStack_40 = param_1[0x1f];
      uStack_a8 = param_1[0x12];
      uStack_b0 = param_1[0x11];
      uStack_98 = param_1[0x14];
      uStack_a0 = param_1[0x13];
      uStack_88 = param_1[0x16];
      uStack_90 = param_1[0x15];
      uStack_78 = param_1[0x18];
      uStack_80 = param_1[0x17];
      uStack_e8 = param_1[10];
      uStack_f0 = param_1[9];
      uStack_d8 = param_1[0xc];
      uStack_e0 = param_1[0xb];
      uStack_c8 = param_1[0xe];
      uStack_d0 = param_1[0xd];
      uStack_b8 = param_1[0x10];
      uStack_c0 = param_1[0xf];
      uStack_128 = param_1[2];
      uStack_130 = param_1[1];
      uStack_118 = param_1[4];
      uStack_120 = param_1[3];
      uStack_108 = param_1[6];
      uStack_110 = param_1[5];
      uStack_f8 = param_1[8];
      uStack_100 = param_1[7];
      uVar12 = param_2[2];
      uVar9 = param_2[1];
      uVar13 = param_2[4];
      uVar4 = param_2[3];
      uVar15 = param_2[6];
      uVar14 = param_2[5];
      uVar16 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar16;
      param_1[6] = uVar15;
      param_1[5] = uVar14;
      param_1[4] = uVar13;
      param_1[3] = uVar4;
      param_1[2] = uVar12;
      param_1[1] = uVar9;
      uVar12 = param_2[10];
      uVar9 = param_2[9];
      uVar13 = param_2[0xc];
      uVar4 = param_2[0xb];
      uVar15 = param_2[0xe];
      uVar14 = param_2[0xd];
      uVar16 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar16;
      param_1[0xe] = uVar15;
      param_1[0xd] = uVar14;
      param_1[0xc] = uVar13;
      param_1[0xb] = uVar4;
      param_1[10] = uVar12;
      param_1[9] = uVar9;
      uVar12 = param_2[0x12];
      uVar9 = param_2[0x11];
      uVar13 = param_2[0x14];
      uVar4 = param_2[0x13];
      uVar15 = param_2[0x16];
      uVar14 = param_2[0x15];
      uVar16 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar16;
      param_1[0x16] = uVar15;
      param_1[0x15] = uVar14;
      param_1[0x14] = uVar13;
      param_1[0x13] = uVar4;
      param_1[0x12] = uVar12;
      param_1[0x11] = uVar9;
      uVar12 = param_2[0x1a];
      uVar9 = param_2[0x19];
      uVar13 = param_2[0x1c];
      uVar4 = param_2[0x1b];
      uVar15 = param_2[0x1e];
      uVar14 = param_2[0x1d];
      uVar16 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar16;
      param_1[0x1e] = uVar15;
      param_1[0x1d] = uVar14;
      param_1[0x1c] = uVar13;
      param_1[0x1b] = uVar4;
      param_1[0x1a] = uVar12;
      param_1[0x19] = uVar9;
      param_2[0x1a] = uStack_68;
      param_2[0x19] = uStack_70;
      param_2[0x1c] = uStack_58;
      param_2[0x1b] = uStack_60;
      param_2[0x1e] = uStack_48;
      param_2[0x1d] = uStack_50;
      param_2[0x20] = uStack_38;
      param_2[0x1f] = uStack_40;
      param_2[0x12] = uStack_a8;
      param_2[0x11] = uStack_b0;
      param_2[0x14] = uStack_98;
      param_2[0x13] = uStack_a0;
      param_2[0x16] = uStack_88;
      param_2[0x15] = uStack_90;
      param_2[0x18] = uStack_78;
      param_2[0x17] = uStack_80;
      param_2[10] = uStack_e8;
      param_2[9] = uStack_f0;
      param_2[0xc] = uStack_d8;
      param_2[0xb] = uStack_e0;
      param_2[0xe] = uStack_c8;
      param_2[0xd] = uStack_d0;
      param_2[0x10] = uStack_b8;
      param_2[0xf] = uStack_c0;
      param_2[2] = uStack_128;
      param_2[1] = uStack_130;
      param_2[4] = uStack_118;
      param_2[3] = uStack_120;
      param_2[6] = uStack_108;
      param_2[5] = uStack_110;
      param_2[8] = uStack_f8;
      param_2[7] = uStack_100;
    }
    else {
LAB_00392500:
      uVar12 = puVar8[1];
      uVar4 = puVar8[2];
      if (1 < uVar9) {
        uVar9 = uVar9 >> 1;
        puVar8 = puVar8 + 1;
        puVar11 = puVar5 + 1;
        do {
          *(short *)puVar8 = (short)*puVar11;
          uVar9 = uVar9 - 1;
          puVar8 = (ulong *)((long)puVar8 + 2);
          puVar11 = (ulong *)((long)puVar11 + 2);
        } while (uVar9 != 0);
      }
      puVar5[1] = uVar12;
      puVar5[2] = uVar4;
    }
  }
  else {
    puVar5 = param_2;
    puVar8 = param_1;
    if ((uVar9 & 1) == 0) goto LAB_00392500;
    uVar12 = param_1[2];
    uVar9 = param_1[1];
    uVar4 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    param_2[2] = uVar12;
    param_2[1] = uVar9;
  }
  uVar9 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar9;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_00392578;
  lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (ulong *)((long)&MACH_HEADER.magic + 2);
  puVar8 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)puVar5 != 0) {
    puStack_1d0 = auStack_140;
    puVar5 = auStack_1c8;
    _vsnprintf(puVar5,0x40,param_4,auStack_140);
    if ((int)(uint)puVar5 < 0) {
      unaff_x23 = (ulong *)0x0;
      param_4 = (ulong *)0x0;
    }
    else {
      unaff_x24 = puVar5;
      if ((uint)puVar5 < 0x40) {
        param_4 = (ulong *)0x0;
        unaff_x23 = auStack_1c8;
      }
      else {
        param_4 = (ulong *)(((ulong)puVar5 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_1d0 = auStack_140;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    puVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    puVar5 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_188) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_1e8 = 2;
  pcStack_1d8 = FUN_00339178;
  lStack_218 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  puStack_210 = unaff_x24;
  puStack_208 = unaff_x23;
  puStack_200 = param_4;
  puStack_1f8 = param_1;
  puStack_1f0 = param_2;
  ppuStack_1e0 = &puStack_150;
  FUN_0033a598();
  uVar9 = *puVar5;
  uVar12 = uVar9;
  uStack_2c8 = uVar1;
  _strrchr(uVar9,0x2f);
  if (uVar12 != 0) {
    uVar9 = uVar12 + 1;
  }
  puVar2 = &uStack_2c8;
  _localtime_r(puVar2,auStack_300);
  if (puVar2 == (undefined8 *)0x0) {
    uStack_2b8 = 0x656d69746c6163;
    uStack_2b1 = 0;
    uStack_2c0 = 0x6c3a726f727265;
    uStack_2b9 = 0x6f;
  }
  else {
    puVar3 = &uStack_2c0;
    _strftime(puVar3,0x40,"%m%d %H:%M:%S",auStack_300);
    if (puVar3 == (undefined7 *)0x0) {
      uStack_2c0 = 0x733a726f727265;
      uStack_2b9 = 0x74;
      uStack_2b8 = 0x656d69746672;
    }
  }
  uVar4 = (ulong)*(uint *)((long)puVar5 + 0xc);
  func_0x00338e1c();
  uVar12 = uVar4;
  _pthread_self();
  auStack_278[1] = 0x560e98;
  puStack_268 = &uStack_2c0;
  uStack_260 = 0x560e98;
  uStack_258 = (ulong)puVar8 & 0xffffffff;
  uStack_250 = 0x5606ac;
  pcStack_240 = FUN_00560738;
  uStack_230 = 0x560e98;
  uStack_228 = (ulong)(uint)puVar5[1];
  uStack_220 = 0x5606ac;
  puVar8 = auStack_278;
  auStack_278[0] = uVar4;
  uStack_248 = uVar12;
  uStack_238 = uVar9;
  FUN_0056189c(apuStack_318,"%s%s.%09d %7ld %s:%d]",0x15,puVar8,6);
  uVar7 = *(uint *)((long)puVar5 + 0xc);
  func_0x00338e6c();
  if (uVar7 == 0) {
    auStack_278[0] = auStack_278[0] & 0xffffffffffffff00;
    uStack_260 = uStack_260 & 0xffffffffffffff00;
LAB_00339300:
    puVar5 = *(ulong **)PTR____stderrp_00999f90;
    pcVar6 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_278);
    if ((char)uStack_260 == '\0') goto LAB_00339300;
    puVar5 = *(ulong **)PTR____stderrp_00999f90;
    pcVar6 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_301 < '\0') {
    puVar5 = apuStack_318[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_218) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (cStack_301 < '\0') {
    __ZdlPv(apuStack_318[0]);
  }
  __Unwind_Resume();
  uVar7 = (uint)puVar8;
  if ((char *)0x3 < pcVar6) {
    uVar9 = (ulong)pcVar6 >> 2;
    puVar11 = puVar5;
    do {
      uVar7 = ((int)*puVar11 * 0x16a88000 | (uint)((int)*puVar11 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar8;
      uVar7 = (uVar7 >> 0x13 | uVar7 << 0xd) * 5 + 0xe6546b64;
      puVar8 = (ulong *)(ulong)uVar7;
      uVar9 = uVar9 - 1;
      puVar11 = (ulong *)((long)puVar11 + 4);
    } while (uVar9 != 0);
    puVar5 = (ulong *)((long)puVar5 + ((ulong)pcVar6 & 0xfffffffffffffffc));
  }
  uVar10 = 0;
  uVar9 = (ulong)pcVar6 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar10 = (uint)*(byte *)((long)puVar5 + 2) << 0x10;
    }
    uVar10 = uVar10 | (uint)*(byte *)((long)puVar5 + 1) << 8;
  }
  uVar10 = uVar10 ^ (byte)*puVar5;
  uVar7 = (uVar10 * 0x16a88000 | uVar10 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar7;
LAB_00339464:
  uVar7 = uVar7 ^ (uint)pcVar6;
  uVar7 = (uVar7 ^ uVar7 >> 0x10) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  return (ulong *)(ulong)(uVar7 ^ uVar7 >> 0x10);
}



/* Entry: 00392578; end: 0039257f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00392578(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00392580; end: 00392653;  */

char * FUN_00392580(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pcVar2 = (char *)&uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_2 == (undefined8 *)0x0) {
LAB_00392634:
    pcVar2 = "return Slice()";
    func_0x00338df0("return Slice()",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                    ,0x4e8);
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 2) {
      pcVar2 = (char *)*param_2;
      func_0x003ec288(&uStack_48,pcVar2,param_2[1] - (long)pcVar2);
    }
    else if (iVar1 == 1) {
      pcVar2 = (char *)*param_2;
      func_0x003ec288(&uStack_48,pcVar2,param_2[1]);
    }
    else {
      if (iVar1 != 0) goto LAB_00392634;
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uStack_58 = param_2[3];
      uStack_60 = param_2[2];
      FUN_003ec030(&uStack_48);
    }
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return pcVar2;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  pcVar2[0x18] = '\0';
  pcVar2[0x19] = '\0';
  pcVar2[0x1a] = '\0';
  pcVar2[0x1b] = '\0';
  pcVar2[0x1c] = '\0';
  pcVar2[0x1d] = '\0';
  pcVar2[0x1e] = '\0';
  pcVar2[0x1f] = '\0';
  pcVar2[0x10] = '\0';
  pcVar2[0x11] = '\0';
  pcVar2[0x12] = '\0';
  pcVar2[0x13] = '\0';
  pcVar2[0x14] = '\0';
  pcVar2[0x15] = '\0';
  pcVar2[0x16] = '\0';
  pcVar2[0x17] = '\0';
  FUN_0039b2a0(pcVar2 + 0x38);
  return pcVar2;
}



/* Entry: 00392654; end: 0039269f;  */

undefined8 * FUN_00392654(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0039b2a0(param_1 + 7);
  return param_1;
}



/* Entry: 003926a0; end: 003926a3;  */

undefined8 * FUN_003926a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0039b2a0(param_1 + 7);
  return param_1;
}



/* Entry: 003926a4; end: 003926db;  */

long FUN_003926a4(long param_1)

{
  FUN_0039b2a4(param_1 + 0x38);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 003926dc; end: 003926ff;  */

long FUN_003926dc(long param_1)

{
  FUN_0039b2a4(param_1 + 0x38);
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00392700; end: 00392857;  */

void FUN_00392700(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = *(long *)(param_2 + 8);
  lStack_40 = *(long *)(param_2 + 0x10);
  if (lStack_48 == lStack_40) {
    lStack_a8 = *param_3;
    lStack_a0 = (long)param_3 + 9;
    if (lStack_a8 != 0) {
      lStack_a0 = param_3[2];
    }
    uVar2 = param_3[1] & 0xff;
    if (lStack_a8 != 0) {
      uVar2 = param_3[1];
    }
    lStack_98 = lStack_a0 + uVar2;
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_90 = lStack_a0;
    FUN_00392858(param_1,param_2,&lStack_a8,param_4);
    if ((uStack_88 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar1 = (long)param_3 + 9;
    if (*param_3 != 0) {
      lVar1 = param_3[2];
    }
    uVar2 = param_3[1] & 0xff;
    if (*param_3 != 0) {
      uVar2 = param_3[1];
    }
    FUN_0039aab4(&lStack_48,lStack_40,lVar1,lVar1 + uVar2);
    uStack_78 = 0;
    lStack_70 = lStack_48;
    lStack_68 = lStack_40;
    lStack_60 = lStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_00392858(param_1,param_2,&uStack_78,param_4);
    FUN_00392964(&uStack_78);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 00392858; end: 00392963;  */

void FUN_00392858(ulong *param_1,long param_2,long param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  lVar3 = param_2;
  FUN_00392994();
  if ((int)lVar3 == 0) {
    if (*(char *)(param_3 + 0x28) == '\0') {
      uVar4 = *(ulong *)(param_3 + 0x20);
      *param_1 = uVar4;
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
        uVar4 = *(ulong *)(param_3 + 0x20);
      }
      if ((uVar4 != 0) && (*(undefined8 *)(param_3 + 0x20) = 0, (uVar4 & 1) != 0)) {
        FUN_0055293c(uVar4);
      }
      return;
    }
    if ((param_4 != 0) && (*(char *)(param_2 + 0x20) != '\0')) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      FUN_003b646c(param_1,2,"Incomplete header at the end of a header/continuation sequence",0x3e,
                   &uStack_31,&uStack_50);
      puStack_70 = &uStack_50;
      FUN_0033d548(&puStack_70);
      return;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_70 = (undefined8 *)0x0;
    FUN_0039ac9c(&puStack_70,*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10),
                 *(long *)(param_3 + 0x10) - *(long *)(param_3 + 0x18));
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 != 0) {
      *(long *)(param_2 + 0x10) = lVar3;
      __ZdlPv();
      *(long *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = uStack_68;
    *(undefined8 **)(param_2 + 8) = puStack_70;
    *(undefined8 *)(param_2 + 0x18) = uStack_60;
  }
  *param_1 = 0;
  return;
}



/* Entry: 00392964; end: 00392993;  */

long FUN_00392964(long param_1)

{
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00392994; end: 00392a77;  */

void FUN_00392994(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    lVar2 = *(long *)(param_2 + 0x10);
    if ((ulong)(lVar2 - *(long *)(param_2 + 8)) < 5) {
      if (*(long *)(param_2 + 0x20) != 0) {
        return;
      }
      *(undefined1 *)(param_2 + 0x28) = 1;
      return;
    }
    lVar3 = *(long *)(param_2 + 8) + 5;
    *(long *)(param_2 + 8) = lVar3;
    *(long *)(param_2 + 0x18) = lVar3;
    *(undefined1 *)((long)param_1 + 0x21) = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  if (lVar3 != lVar2) {
    do {
      uStack_70 = *param_1;
      uStack_50 = *(undefined4 *)(param_1 + 5);
      uStack_4c = *(undefined8 *)((long)param_1 + 0x2c);
      iVar1 = (int)&lStack_78;
      lStack_78 = param_2;
      puStack_68 = param_1 + 7;
      lStack_60 = (long)param_1 + 0x22;
      lStack_58 = (long)param_1 + 0x24;
      FUN_00392af8();
      if (iVar1 == 0) {
        return;
      }
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 8);
    } while (*(long *)(param_2 + 8) != *(long *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 00392a78; end: 00392af7;  */

void FUN_00392a78(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x20);
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *(ulong *)(param_2 + 0x20);
  }
  if (uVar3 != 0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c(uVar3);
    }
  }
  return;
}



/* Entry: 00392af8; end: 00392fc7;  */

/* WARNING: Type propagation algorithm not settling */

char * FUN_00392af8(char *param_1,char *param_2,qword param_3,long *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  code *******pppppppcVar10;
  undefined8 *extraout_x8;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong auStack_230 [5];
  undefined1 uStack_201;
  char *pcStack_200;
  ulong *puStack_1f8;
  long lStack_1b0;
  char acStack_1a8 [40];
  char cStack_180;
  long lStack_178;
  char acStack_170 [40];
  char cStack_148;
  long lStack_140;
  char acStack_138 [40];
  char cStack_110;
  code *******pppppppcStack_108;
  char acStack_100 [40];
  char cStack_d8;
  code *******pppppppcStack_d0;
  char acStack_c8 [40];
  byte bStack_a0;
  long lStack_98;
  char acStack_90 [40];
  char cStack_68;
  ulong uStack_60;
  ulong auStack_58 [3];
  undefined8 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_38;
  ulong in_stack_ffffffffffffffd0;
  
  pcVar7 = (char *)&lStack_1b0;
  uVar9 = *(ulong *)PTR____stack_chk_guard_00999f88;
  pcVar5 = *(char **)param_1;
  pbVar1 = *(byte **)(pcVar5 + 8);
  if (pbVar1 == *(byte **)(pcVar5 + 0x10)) {
    pcVar7 = param_2;
    if (*(ulong *)(pcVar5 + 0x20) == 0) {
      pcVar5[0x28] = 1;
    }
LAB_00392b98:
    pcVar5 = param_1;
    FUN_0039326c(&uStack_60);
    if ((char)in_stack_ffffffffffffffd0 == '\0') goto LAB_00392e08;
    param_2 = (char *)&uStack_60;
    FUN_00393cbc();
    pppppppcVar10 = (code *******)(in_stack_ffffffffffffffd0 & 0xff);
    pcVar5 = param_1;
code_r0x00392bc0:
    pcVar7 = param_2;
    if ((int)pppppppcVar10 != 0) {
      pppppppcVar10 = *(code ********)(uStack_60 + 8);
      pcVar5 = (char *)auStack_58;
      param_2 = pcVar7;
      goto code_r0x00392bd4;
    }
    goto LAB_00392e0c;
  }
  *(byte **)(pcVar5 + 8) = pbVar1 + 1;
  bVar2 = *pbVar1;
  pppppppcVar10 = (code *******)(ulong)bVar2;
  uVar12 = (uint)bVar2;
  switch(bVar2 >> 4) {
  case 0:
  case 1:
    pcVar7 = (char *)(ulong)(uVar12 & 0xf);
    param_2 = pcVar7;
    if ((uVar12 & 0xf) != 0xf) goto code_r0x00392be8;
    pcVar5 = param_1;
    FUN_003934dc(&lStack_98);
    if (cStack_68 != '\0') {
      pcVar7 = (char *)&lStack_98;
      FUN_00393cbc();
      pcVar5 = param_1;
      if (cStack_68 != '\0') {
        pcVar5 = acStack_90;
        (**(code **)(lStack_98 + 8))();
      }
      break;
    }
    goto LAB_00392e08;
  case 2:
code_r0x00392c94:
    if (*(ulong *)PTR____stack_chk_guard_00999f88 == uVar9) {
      pcVar5 = (char *)0x100000000;
      goto code_r0x00392cb4;
    }
    goto LAB_00392e78;
  case 3:
    if (uVar12 != 0x3f) goto code_r0x00392c94;
    param_2 = (char *)((long)&MACH_HEADER.reserved + 3);
    FUN_00393838();
    if (*(ulong *)PTR____stack_chk_guard_00999f88 != uVar9) goto LAB_00392e78;
code_r0x00392cb4:
    if (((ulong)pcVar5 & 0xff00000000) == 0) {
      return (char *)0x0;
    }
    cVar3 = **(char **)(param_1 + 0x18);
    if (cVar3 != '\0') {
      **(char **)(param_1 + 0x18) = cVar3 + -1;
      FUN_0039b418(&stack0xffffffffffffffd8,*(ulong *)(param_1 + 0x10));
      if (uVar9 != 0) {
        uVar6 = *(ulong *)param_1;
        if ((uVar9 & 1) != 0) {
          piVar11 = (int *)(uVar9 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = *piVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_0039a72c(uVar6,&stack0xffffffffffffffd0);
        if ((uVar9 & 1) != 0) {
          FUN_0055293c();
        }
      }
      if ((uVar9 & 1) == 0) {
        return (char *)(ulong)(uVar9 == 0);
      }
      FUN_0055293c();
      return (char *)(ulong)(uVar9 == 0);
    }
    uVar9 = *(ulong *)param_1;
    if (*(long *)(uVar9 + 0x20) != 0) {
      return (char *)0x0;
    }
    if (*(char *)(uVar9 + 0x28) != '\0') {
      return (char *)0x0;
    }
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[0] = 0;
    FUN_003b646c(&uStack_60,2,"More than two max table size changes in a single frame",0x36,
                 &uStack_39,auStack_58);
    uStack_38 = auStack_58;
    FUN_0033d548(&uStack_38);
    uVar6 = *(ulong *)(uVar9 + 0x20);
    if (uStack_60 != uVar6) {
      *(ulong *)(uVar9 + 0x20) = uStack_60;
      uStack_60 = 0x36;
      if ((uVar6 & 1) == 0) goto LAB_0039a6e0;
      FUN_0055293c();
      uVar6 = uStack_60;
    }
    if ((uVar6 & 1) != 0) {
      FUN_0055293c();
    }
LAB_0039a6e0:
    *(undefined8 *)(uVar9 + 8) = *(undefined8 *)(uVar9 + 0x10);
    return (char *)0x0;
  case 4:
    if (uVar12 != 0x40) goto code_r0x00392d0c;
    pppppppcVar10 = (code *******)&pppppppcStack_108;
    pcVar5 = param_1;
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x72:
  case 0x80:
  case 0x82:
  case 0x9a:
    FUN_0039326c(pppppppcVar10,pcVar5);
    param_2 = (char *)&pppppppcStack_108;
code_r0x00392ce0:
    FUN_003939f0();
    pcVar5 = param_1;
code_r0x00392ce8:
    pcVar7 = param_2;
    param_2 = pcVar7;
    pppppppcVar10 = pppppppcStack_108;
    param_1 = pcVar5;
    if (cStack_d8 != '\0') {
code_r0x00392cf8:
      pcVar7 = param_2;
      pcVar5 = acStack_100;
      (*(code *)pppppppcVar10[1])();
    }
    break;
  case 5:
  case 6:
code_r0x00392d0c:
    param_2 = (char *)(ulong)(uVar12 & 0x3f);
  case 0x90:
  case 0x92:
  case 0xa2:
  case 0xec:
  case 0xee:
  case 0xf0:
  case 0xf2:
    FUN_0039352c(&lStack_140,param_1,param_2);
    param_2 = (char *)&lStack_140;
code_r0x00392d20:
    pcVar5 = param_1;
code_r0x00392d24:
    pcVar7 = param_2;
    FUN_003939f0();
    param_1 = pcVar5;
    if (cStack_110 != '\0') {
      pcVar5 = acStack_138;
      (**(code **)(lStack_140 + 8))();
    }
    break;
  case 7:
    if (uVar12 == 0x7f) {
      FUN_003934dc(&lStack_178,param_1,0x3f);
      pcVar7 = (char *)&lStack_178;
      FUN_003939f0();
      pcVar5 = param_1;
      if (cStack_148 != '\0') {
        pcVar5 = acStack_170;
        (**(code **)(lStack_178 + 8))();
      }
    }
    else {
      FUN_0039352c(&lStack_1b0,param_1,uVar12 & 0x3f);
      FUN_003939f0();
      pcVar5 = param_1;
      if (cStack_180 != '\0') {
        pcVar5 = acStack_1a8;
        (**(code **)(lStack_1b0 + 8))();
      }
    }
    break;
  case 8:
    if (uVar12 != 0x80) goto code_r0x00392b54;
    if (*(ulong *)PTR____stack_chk_guard_00999f88 == uVar9) {
      if (*(ulong *)(pcVar5 + 0x20) != 0) {
        return (char *)0x0;
      }
      if ((char)*(ulong *)(pcVar5 + 0x28) != '\0') {
        return (char *)0x0;
      }
      auStack_58[1] = 0;
      auStack_58[2] = 0;
      auStack_58[0] = 0;
      FUN_003b646c(&uStack_60,2,"Illegal hpack op code",0x15,&uStack_39,auStack_58);
      uStack_38 = auStack_58;
      FUN_0033d548(&uStack_38);
      uVar9 = *(ulong *)(pcVar5 + 0x20);
      if (uStack_60 != uVar9) {
        *(ulong *)(pcVar5 + 0x20) = uStack_60;
        uStack_60 = 0x36;
        if ((uVar9 & 1) == 0) goto LAB_00393bdc;
        FUN_0055293c();
        uVar9 = uStack_60;
      }
      if ((uVar9 & 1) != 0) {
        FUN_0055293c();
      }
LAB_00393bdc:
      *(ulong *)(pcVar5 + 8) = *(ulong *)(pcVar5 + 0x10);
      return (char *)0x0;
    }
    goto LAB_00392e78;
  default:
code_r0x00392b54:
    if (*(ulong *)PTR____stack_chk_guard_00999f88 == uVar9) {
      param_2 = (char *)0x100000000;
      goto code_r0x00392b70;
    }
    goto LAB_00392e78;
  case 0xf:
    if (uVar12 != 0xff) goto code_r0x00392b54;
    param_2 = section_00000068.segname + 7;
    FUN_00393838();
    if (*(ulong *)PTR____stack_chk_guard_00999f88 != uVar9) goto LAB_00392e78;
    goto code_r0x00392b74;
  case 0x11:
code_r0x00392c00:
    param_2 = (char *)&pppppppcStack_d0;
    FUN_00393cbc();
    pppppppcVar10 = (code *******)(ulong)bStack_a0;
    pcVar5 = param_1;
  case 0x34:
  case 0x36:
  case 0x38:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x54:
  case 0x56:
  case 0x58:
  case 0x5a:
  case 0x74:
  case 0x76:
  case 0x94:
    pcVar7 = param_2;
    param_2 = pcVar7;
    if ((int)pppppppcVar10 != 0) {
code_r0x00392c18:
      pppppppcVar10 = pppppppcStack_d0;
      goto code_r0x00392c1c;
    }
    break;
  case 0x12:
code_r0x00392b70:
    pcVar5 = (char *)((ulong)param_2 & 0xffffffffffffff80 | (ulong)pppppppcVar10 & 0x7f);
code_r0x00392b74:
    **(undefined1 **)(param_1 + 0x18) = 0;
    if (((ulong)pcVar5 & 0xff00000000) == 0) {
      return (char *)0x0;
    }
    uVar12 = (uint)pcVar5;
    if (uVar12 < 0x3e) {
      plVar8 = (long *)(*(long *)(*(ulong *)(param_1 + 0x10) + 0x38) + (ulong)(uVar12 - 1) * 0x30);
    }
    else {
      plVar8 = (long *)(*(ulong *)(param_1 + 0x10) + 0x10);
      FUN_0039afc0(plVar8,uVar12 - 0x3e);
    }
    if (plVar8 != (long *)0x0) {
      uVar9 = *(ulong *)(param_1 + 8);
      if (uVar9 == 0) {
LAB_00393d00:
        return (char *)((long)&MACH_HEADER.magic + 1);
      }
      uVar12 = **(uint **)(param_1 + 0x20) + (int)plVar8[5];
      **(uint **)(param_1 + 0x20) = uVar12;
      if (uVar12 <= (uint)*(ulong *)(param_1 + 0x28)) {
        (**(code **)(*plVar8 + 0x10))(plVar8 + 1,uVar9);
        goto LAB_00393d00;
      }
      uVar12 = **(uint **)(param_1 + 0x20);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                   ,0x4bf,0,
                   "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                  );
      uVar9 = *(ulong *)(param_1 + 8);
      if (uVar9 != 0) {
        FUN_00366e68(uVar9);
        FUN_00367130(uVar9 + 0x1f0);
      }
      uVar9 = *(ulong *)param_1;
      if (*(long *)(uVar9 + 0x20) != 0) {
        return (char *)0x0;
      }
      if (*(char *)(uVar9 + 0x28) != '\0') {
        return (char *)0x0;
      }
      auStack_58[2] = 0;
      uStack_40 = 0;
      auStack_58[1] = 0;
      FUN_003b646c(&stack0xffffffffffffffd0,2,"received initial metadata size exceeds limit",0x2c,
                   (long)&uStack_38 + 7,auStack_58 + 1);
      FUN_003be104(auStack_58,&stack0xffffffffffffffd0,3,8);
      if ((uVar12 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_0033d548(&stack0xffffffffffffffd8);
      uVar6 = *(ulong *)(uVar9 + 0x20);
      if (auStack_58[0] != uVar6) {
        *(ulong *)(uVar9 + 0x20) = auStack_58[0];
        auStack_58[0] = 0x36;
        if ((uVar6 & 1) == 0) goto LAB_00393e34;
        FUN_0055293c();
        uVar6 = auStack_58[0];
      }
      if ((uVar6 & 1) != 0) {
        FUN_0055293c();
      }
LAB_00393e34:
      *(undefined8 *)(uVar9 + 8) = *(undefined8 *)(uVar9 + 0x10);
      return (char *)0x0;
    }
    uVar9 = *(ulong *)param_1;
    if (*(long *)(uVar9 + 0x20) != 0) {
      return (char *)0x0;
    }
    if (*(char *)(uVar9 + 0x28) != '\0') {
      return (char *)0x0;
    }
    FUN_0039a9c0(&uStack_38,&stack0xffffffffffffffd0);
    uVar6 = *(ulong *)(uVar9 + 0x20);
    if (uStack_38 != (ulong *)uVar6) {
      *(ulong **)(uVar9 + 0x20) = uStack_38;
      uStack_38 = (ulong *)0x36;
      if ((uVar6 & 1) == 0) goto LAB_0039a98c;
      FUN_0055293c();
      uVar6 = (ulong)uStack_38;
    }
    if ((uVar6 & 1) != 0) {
      FUN_0055293c();
    }
LAB_0039a98c:
    *(undefined8 *)(uVar9 + 8) = *(undefined8 *)(uVar9 + 0x10);
    return (char *)0x0;
  case 0x13:
    goto code_r0x00392bc0;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
    goto LAB_00392fc0;
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x5c:
  case 0x5e:
  case 0x60:
  case 0x62:
  case 0x78:
  case 0x7a:
  case 0x96:
    goto code_r0x00392c18;
  case 100:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x7c:
  case 0x7e:
  case 0x98:
    goto code_r0x00392c1c;
  case 0x84:
  case 0x86:
  case 0x9c:
  case 0xd4:
  case 0xd6:
  case 0xd8:
  case 0xda:
    goto code_r0x00392ce0;
  case 0x88:
  case 0x8a:
  case 0x9e:
  case 0xdc:
  case 0xde:
  case 0xe0:
  case 0xe2:
    goto code_r0x00392ce8;
  case 0x8c:
  case 0x8e:
  case 0xa0:
  case 0xe4:
  case 0xe6:
  case 0xe8:
  case 0xea:
    goto code_r0x00392cf8;
  case 0xa4:
  case 0xf4:
  case 0xf6:
    goto code_r0x00392d20;
  case 0xa6:
  case 0xf8:
  case 0xfa:
    goto code_r0x00392d24;
  case 0xb4:
  case 0xb6:
  case 0xb8:
  case 0xba:
  case 0xbc:
  case 0xbe:
  case 0xc0:
  case 0xc2:
  case 0xfc:
code_r0x00392bd4:
    pcVar7 = param_2;
    (*(code *)pppppppcVar10)();
    break;
  case 0xc4:
  case 0xc6:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xce:
  case 0xd0:
  case 0xd2:
  case 0xfe:
code_r0x00392be8:
    pcVar7 = param_2;
    if ((int)pcVar7 == 0) goto LAB_00392b98;
    pcVar5 = param_1;
    FUN_0039352c(&pppppppcStack_d0);
    if (bStack_a0 != 0) goto code_r0x00392c00;
LAB_00392e08:
    param_1 = (char *)0x0;
  }
LAB_00392e0c:
  param_2 = pcVar7;
  if (*(ulong *)PTR____stack_chk_guard_00999f88 == uVar9) {
    return param_1;
  }
LAB_00392e78:
  ___stack_chk_fail();
  param_1 = pcVar5;
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    param_1 = pcVar5;
  }
LAB_00392fc0:
  __Unwind_Resume();
  if (param_3 != 0) {
    uVar9 = param_4[1] & 0xff;
    if (*param_4 != 0) {
      uVar9 = param_4[1];
    }
    *(ulong *)(param_3 + 0x148) = uVar9 + *(long *)(param_3 + 0x148);
  }
  FUN_00392700(&pcStack_200,param_1,param_4,param_5 != 0);
  if (pcStack_200 == (char *)0x0) {
    if (param_5 != 0) {
      if ((param_3 != 0) && ((char)*(ulong *)(param_1 + 0x20) != '\0')) {
        uVar9 = (ulong)*(byte *)(param_3 + 0x6e0);
        if (uVar9 == 2) {
          auStack_230[3] = 0;
          auStack_230[4] = 0;
          auStack_230[2] = 0;
          FUN_003b646c(extraout_x8,2,"Too many trailer frames",0x17,&uStack_201,auStack_230 + 2);
          puStack_1f8 = auStack_230 + 2;
          FUN_0033d548(&puStack_1f8);
          goto LAB_00393164;
        }
        *(undefined4 *)(param_3 + uVar9 * 4 + 0x180) = 2;
        (*(code *)(&PTR_FUN_009dede0)[uVar9])(param_2,param_3);
        *(char *)(param_3 + 0x6e0) = *(char *)(param_3 + 0x6e0) + '\x01';
        if ((char)*(ulong *)(param_1 + 0x20) == '\x02') {
          if ((param_2[0x628] != '\0') && (*(char *)(param_3 + 0x168) == '\0')) {
            FUN_00383e94(param_3);
            uVar13 = *(undefined8 *)(param_2 + 0x78);
            pcVar7 = segment_command_00000020.segname + 8;
            FUN_00338c74();
            *(code **)pcVar7 = FUN_003931d4;
            *(qword *)(pcVar7 + 8) = param_3;
            *(code **)(pcVar7 + 0x18) = FUN_0033df34;
            *(char **)(pcVar7 + 0x20) = pcVar7;
            *(undefined8 *)(pcVar7 + 0x28) = 0;
            auStack_230[1] = 0;
            FUN_003bcb64(uVar13,pcVar7 + 0x10,auStack_230 + 1);
            FUN_0033c494(auStack_230 + 1);
          }
          auStack_230[0] = 0;
          FUN_003870a0(param_2,param_3,1,0,auStack_230);
          if ((auStack_230[0] & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      *(ulong *)param_1 = 0;
    }
    *extraout_x8 = 0;
  }
  else {
    *extraout_x8 = pcStack_200;
    pcStack_200 = segment_command_00000020.segname + 0xe;
  }
LAB_00393164:
  if (((ulong)pcStack_200 & 1) != 0) {
    FUN_0055293c();
  }
  return pcStack_200;
code_r0x00392c1c:
  pcVar7 = param_2;
  pcVar5 = acStack_c8;
  (*(code *)pppppppcVar10[1])();
  goto LAB_00392e0c;
}



/* Entry: 00392fc8; end: 003931d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00392fc8(ulong *param_1,undefined8 *param_2,long param_3,qword param_4,long *param_5,
                 int param_6)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong auStack_80 [5];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  if (param_4 != 0) {
    uVar2 = param_5[1] & 0xff;
    if (*param_5 != 0) {
      uVar2 = param_5[1];
    }
    *(ulong *)(param_4 + 0x148) = uVar2 + *(long *)(param_4 + 0x148);
  }
  FUN_00392700(&uStack_50,param_2,param_5,param_6 != 0);
  if (uStack_50 == 0) {
    if (param_6 != 0) {
      if ((param_4 != 0) && (*(char *)(param_2 + 4) != '\0')) {
        uVar2 = (ulong)*(byte *)(param_4 + 0x6e0);
        if (uVar2 == 2) {
          auStack_80[3] = 0;
          auStack_80[4] = 0;
          auStack_80[2] = 0;
          FUN_003b646c(param_1,2,"Too many trailer frames",0x17,&uStack_51,auStack_80 + 2);
          puStack_48 = auStack_80 + 2;
          FUN_0033d548(&puStack_48);
          goto LAB_00393164;
        }
        *(undefined4 *)(param_4 + uVar2 * 4 + 0x180) = 2;
        (*(code *)(&PTR_FUN_009dede0)[uVar2])(param_3,param_4);
        *(char *)(param_4 + 0x6e0) = *(char *)(param_4 + 0x6e0) + '\x01';
        if (*(char *)(param_2 + 4) == '\x02') {
          if ((*(char *)(param_3 + 0x628) != '\0') && (*(char *)(param_4 + 0x168) == '\0')) {
            FUN_00383e94(param_4);
            uVar3 = *(undefined8 *)(param_3 + 0x78);
            pcVar1 = segment_command_00000020.segname + 8;
            FUN_00338c74();
            *(code **)pcVar1 = FUN_003931d4;
            *(qword *)(pcVar1 + 8) = param_4;
            *(code **)(pcVar1 + 0x18) = FUN_0033df34;
            *(char **)(pcVar1 + 0x20) = pcVar1;
            *(undefined8 *)(pcVar1 + 0x28) = 0;
            auStack_80[1] = 0;
            FUN_003bcb64(uVar3,pcVar1 + 0x10,auStack_80 + 1);
            FUN_0033c494(auStack_80 + 1);
          }
          auStack_80[0] = 0;
          FUN_003870a0(param_3,param_4,1,0,auStack_80);
          if ((auStack_80[0] & 1) != 0) {
            FUN_0055293c();
          }
        }
      }
      *param_2 = 0;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = uStack_50;
    uStack_50 = 0x36;
  }
LAB_00393164:
  if ((uStack_50 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003931d4; end: 0039326b;  */

void FUN_003931d4(long param_1)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_0038d784(uVar1,*(undefined4 *)(param_1 + 0x9c),0,param_1 + 0x150);
    FUN_00383c14(uVar1,0x15);
    uStack_28 = 0;
    FUN_003870a0(uVar1,param_1,1,1,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
  }
  func_0x00383eac(param_1);
  return;
}



/* Entry: 0039326c; end: 003934db;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_0039326c(undefined8 *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *****ppppplVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  undefined8 *extraout_x8;
  long ******pppppplVar14;
  int *piVar15;
  long *****ppppplStack_2a0;
  ulong auStack_298 [3];
  undefined1 uStack_279;
  ulong *puStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long ******pppppplStack_260;
  long *******ppppppplStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  long ******pppppplStack_238;
  long *******appppppplStack_230 [4];
  long ******pppppplStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  long ******apppppplStack_1e0 [5];
  char cStack_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  long ******apppppplStack_1a8 [5];
  char cStack_180;
  long lStack_178;
  undefined1 *puStack_140;
  code *pcStack_138;
  long ******pppppplStack_130;
  ulong uStack_128;
  long *******ppppppplStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long *******ppppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long ******apppppplStack_a8 [5];
  char cStack_80;
  long ******apppppplStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppplVar4 = (long *******)*param_2;
  FUN_00393e94(apppppplStack_78);
  if (cStack_50 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    pppppplVar13 = (long ******)apppppplStack_78;
    FUN_00393fe0();
    if (param_3 < 4) {
      ppppppplVar4 = (long *******)*param_2;
LAB_003932f0:
      FUN_00393e94(apppppplStack_a8);
    }
    else {
      ppppppplVar4 = (long *******)*param_2;
      if (*(int *)((long)pppppplVar13 + (param_3 - 4)) != 0x6e69622d) goto LAB_003932f0;
      FUN_003948d0(apppppplStack_a8);
    }
    if (cStack_80 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      pppppplVar13 = (long ******)apppppplStack_78;
      FUN_00393fe0();
      uVar11 = param_3;
      FUN_00392580(&ppppppplStack_d0,apppppplStack_a8);
      FUN_00393fe0(apppppplStack_78);
      uStack_118 = uStack_c8;
      ppppppplStack_120 = ppppppplStack_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      uStack_c8 = 0;
      ppppppplStack_d0 = (long *******)0x0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      pppppplStack_130 = pppppplVar13;
      uStack_128 = param_3;
      FUN_00394054(&puStack_100);
      *param_1 = puStack_100;
      param_1[2] = uStack_f0;
      param_1[1] = uStack_f8;
      param_1[4] = uStack_e0;
      param_1[3] = uStack_e8;
      *(undefined4 *)(param_1 + 5) = uStack_d8;
      puStack_100 = &UNK_009deea0;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x003ff2e4(&uStack_f8);
      if ((long *******)((long)&MACH_HEADER.magic + 1) < ppppppplStack_120) {
        do {
          pppppplVar13 = *ppppppplStack_120;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplStack_120,0x10);
          if (bVar3) {
            *ppppppplStack_120 = (long ******)((long)pppppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar13 + -1) == (long ******)0x0) {
          (*(code *)ppppppplStack_120[1])();
        }
      }
      ppppppplVar4 = ppppppplStack_d0;
      if ((long *******)((long)&MACH_HEADER.magic + 1) < ppppppplStack_d0) {
        do {
          pppppplVar13 = *ppppppplStack_d0;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplStack_d0,0x10);
          if (bVar3) {
            *ppppppplStack_d0 = (long ******)((long)pppppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar13 + -1) == (long ******)0x0) {
          (*(code *)ppppppplStack_d0[1])();
        }
      }
      param_3 = uVar11;
      if (cStack_80 != '\0') {
        ppppppplVar4 = apppppplStack_a8;
        FUN_003947fc();
        param_3 = uVar11;
      }
    }
    if (cStack_50 != '\0') {
      ppppppplVar4 = apppppplStack_78;
      FUN_003947fc();
    }
  }
  iVar9 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return ppppppplVar4;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&ppppppplStack_120);
    FUN_0034b418(&ppppppplStack_d0);
    if (cStack_80 != '\0') {
      FUN_003947fc(apppppplStack_a8);
    }
    if (cStack_50 != '\0') {
      FUN_003947fc(apppppplStack_78);
    }
  }
  __Unwind_Resume();
  pcStack_138 = FUN_003934dc;
  ppppppplVar5 = (long *******)*ppppppplVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_00393838();
  if (((ulong)ppppppplVar5 & 0xff00000000) == 0) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 6) = 0;
    return ppppppplVar5;
  }
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar10 = (uint)ppppppplVar5;
  if (uVar10 < 0x3e) {
    pppppplVar13 = (long ******)(ppppppplVar4[2][7] + (ulong)(uVar10 - 1) * 6);
    ppppppplVar12 = ppppppplVar5;
  }
  else {
    ppppppplVar12 = (long *******)(ulong)(uVar10 - 0x3e);
    pppppplVar13 = ppppppplVar4[2] + 2;
    FUN_0039afc0();
  }
  if (pppppplVar13 == (long ******)0x0) {
    uStack_1b0 = 0;
    cStack_180 = '\0';
    ppppppplVar6 = ppppppplVar4;
    ppppppplVar12 = ppppppplVar5;
    FUN_0039a208(extraout_x8,ppppppplVar4,ppppppplVar5,&uStack_1b0);
    if (cStack_180 != '\0') {
      ppppppplVar6 = apppppplStack_1a8;
      (**(code **)(CONCAT71(uStack_1af,uStack_1b0) + 8))();
    }
  }
  else {
    ppppppplVar6 = (long *******)*ppppppplVar4;
    if (*(char *)*pppppplVar13 == '\0') {
      FUN_00393e94(apppppplStack_1e0);
    }
    else {
      FUN_003948d0(apppppplStack_1e0);
    }
    if (cStack_1b8 == '\0') {
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 6) = 0;
    }
    else {
      FUN_00392580(appppppplStack_230,apppppplStack_1e0);
      ppppppplVar4 = &pppppplStack_210;
      ppppppplVar12 = (long *******)appppppplStack_230;
      pppppplStack_238 = pppppplVar13;
      FUN_0039a30c(&pppppplStack_210,pppppplVar13,ppppppplVar12,&pppppplStack_238,FUN_0039a5b8);
      *extraout_x8 = pppppplStack_210;
      extraout_x8[2] = uStack_200;
      extraout_x8[1] = lStack_208;
      extraout_x8[4] = uStack_1f0;
      extraout_x8[3] = uStack_1f8;
      *(undefined4 *)(extraout_x8 + 5) = uStack_1e8;
      pppppplStack_210 = (long ******)&UNK_009deea0;
      *(undefined1 *)(extraout_x8 + 6) = 1;
      func_0x003ff2e4(&lStack_208);
      if ((long *******)((long)&MACH_HEADER.magic + 1) < appppppplStack_230[0]) {
        do {
          pppppplVar14 = *appppppplStack_230[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(appppppplStack_230[0],0x10);
          if (bVar3) {
            *appppppplStack_230[0] = (long ******)((long)pppppplVar14 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ******)((long)pppppplVar14 + -1) == (long ******)0x0) {
          (*(code *)appppppplStack_230[0][1])();
        }
      }
      ppppppplVar6 = appppppplStack_230[0];
      if (cStack_1b8 != '\0') {
        ppppppplVar6 = apppppplStack_1e0;
        FUN_003947fc();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  if ((int)ppppppplVar12 != 0) {
    func_0x0040cf10();
    FUN_0034b418(appppppplStack_230);
    if (cStack_1b8 != '\0') {
      FUN_003947fc(apppppplStack_1e0);
    }
  }
  ppppppplVar7 = ppppppplVar6;
  __Unwind_Resume();
  pcStack_248 = FUN_00393754;
  if (((ulong)ppppppplVar12 & 0xff00000000) == 0) {
    return (long *******)0x0;
  }
  cVar1 = *(char *)ppppppplVar7[3];
  pppppplStack_260 = pppppplVar13;
  ppppppplStack_258 = ppppppplVar6;
  ppuStack_250 = &puStack_140;
  if (cVar1 != '\0') {
    *(char *)ppppppplVar7[3] = cVar1 + -1;
    FUN_0039b418(&ppppppplStack_268,ppppppplVar7[2]);
    bVar3 = ppppppplStack_268 == (long *******)0x0;
    if (ppppppplStack_268 != (long *******)0x0) {
      pppppplVar13 = *ppppppplVar7;
      ppppppplStack_270 = ppppppplStack_268;
      if (((ulong)ppppppplStack_268 & 1) != 0) {
        piVar15 = (int *)((long)ppppppplStack_268 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar2) {
            *piVar15 = *piVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0039a72c(pppppplVar13,&ppppppplStack_270);
      if (((ulong)ppppppplStack_270 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)ppppppplStack_268 & 1) == 0) {
      return (long *******)(ulong)bVar3;
    }
    FUN_0055293c();
    return (long *******)(ulong)bVar3;
  }
  pppppplVar13 = *ppppppplVar7;
  pcStack_248 = FUN_00393754;
  if (pppppplVar13[4] != (long *****)0x0) {
    return (long *******)0x0;
  }
  if (*(char *)(pppppplVar13 + 5) != '\0') {
    return (long *******)0x0;
  }
  auStack_298[1] = 0;
  auStack_298[2] = 0;
  auStack_298[0] = 0;
  ppppppplStack_270 = ppppppplVar5;
  ppppppplStack_268 = ppppppplVar4;
  FUN_003b646c(&ppppplStack_2a0,2,"More than two max table size changes in a single frame",0x36,
               &uStack_279,auStack_298);
  puStack_278 = auStack_298;
  FUN_0033d548(&puStack_278);
  ppppplVar8 = pppppplVar13[4];
  if (ppppplStack_2a0 != ppppplVar8) {
    pppppplVar13[4] = ppppplStack_2a0;
    ppppplStack_2a0 = (long *****)0x36;
    if (((ulong)ppppplVar8 & 1) == 0) goto LAB_0039a6e0;
    FUN_0055293c();
    ppppplVar8 = ppppplStack_2a0;
  }
  if (((ulong)ppppplVar8 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a6e0:
  pppppplVar13[1] = pppppplVar13[2];
  return (long *******)0x0;
}



/* Entry: 003934dc; end: 0039352b;  */

long ***** FUN_003934dc(undefined8 *param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  uint uVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  int *piVar12;
  long **pplStack_170;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  ulong *puStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ***ppplStack_130;
  long ****pppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long ***ppplStack_108;
  long ****apppplStack_100 [4];
  long ***ppplStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long ***appplStack_b0 [5];
  char cStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long ***appplStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  ppppplVar4 = (long *****)*param_2;
  FUN_00393838();
  if (((ulong)ppppplVar4 & 0xff00000000) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    return ppppplVar4;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar9 = (uint)ppppplVar4;
  if (uVar9 < 0x3e) {
    pppplVar7 = (long ****)(param_2[2][7] + (ulong)(uVar9 - 1) * 6);
    ppppplVar10 = ppppplVar4;
  }
  else {
    ppppplVar10 = (long *****)(ulong)(uVar9 - 0x3e);
    pppplVar7 = param_2[2] + 2;
    FUN_0039afc0();
  }
  if (pppplVar7 == (long ****)0x0) {
    uStack_80 = 0;
    cStack_50 = '\0';
    ppppplVar5 = param_2;
    ppppplVar10 = ppppplVar4;
    FUN_0039a208(param_1,param_2,ppppplVar4,&uStack_80);
    if (cStack_50 != '\0') {
      ppppplVar5 = (long *****)appplStack_78;
      (**(code **)(CONCAT71(uStack_7f,uStack_80) + 8))();
    }
  }
  else {
    ppppplVar5 = (long *****)*param_2;
    if (*(char *)*pppplVar7 == '\0') {
      FUN_00393e94(appplStack_b0);
    }
    else {
      FUN_003948d0(appplStack_b0);
    }
    if (cStack_88 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_00392580(apppplStack_100,appplStack_b0);
      param_2 = (long *****)&ppplStack_e0;
      ppppplVar10 = apppplStack_100;
      ppplStack_108 = (long ***)pppplVar7;
      FUN_0039a30c(&ppplStack_e0,pppplVar7,ppppplVar10,&ppplStack_108,FUN_0039a5b8);
      *param_1 = ppplStack_e0;
      param_1[2] = uStack_d0;
      param_1[1] = lStack_d8;
      param_1[4] = uStack_c0;
      param_1[3] = uStack_c8;
      *(undefined4 *)(param_1 + 5) = uStack_b8;
      ppplStack_e0 = (long ***)&UNK_009deea0;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x003ff2e4(&lStack_d8);
      if ((long *****)((long)&MACH_HEADER.magic + 1) < apppplStack_100[0]) {
        do {
          pppplVar11 = (long ****)*apppplStack_100[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(apppplStack_100[0],0x10);
          if (bVar3) {
            *apppplStack_100[0] = (long ***)((long)pppplVar11 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ****)((long)pppplVar11 + -1) == (long ****)0x0) {
          (*(code *)apppplStack_100[0][1])();
        }
      }
      ppppplVar5 = (long *****)apppplStack_100[0];
      if (cStack_88 != '\0') {
        ppppplVar5 = (long *****)appplStack_b0;
        FUN_003947fc();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return ppppplVar5;
  }
  ___stack_chk_fail();
  if ((int)ppppplVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418(apppplStack_100);
    if (cStack_88 != '\0') {
      FUN_003947fc(appplStack_b0);
    }
  }
  ppppplVar6 = ppppplVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_00393754;
  if (((ulong)ppppplVar10 & 0xff00000000) == 0) {
    return (long *****)0x0;
  }
  cVar1 = *(char *)ppppplVar6[3];
  ppplStack_130 = (long ***)pppplVar7;
  pppplStack_128 = (long ****)ppppplVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  if (cVar1 != '\0') {
    *(char *)ppppplVar6[3] = cVar1 + -1;
    FUN_0039b418(&pppplStack_138,ppppplVar6[2]);
    bVar3 = pppplStack_138 == (long ****)0x0;
    if (pppplStack_138 != (long ****)0x0) {
      pppplVar7 = *ppppplVar6;
      pppplStack_140 = pppplStack_138;
      if (((ulong)pppplStack_138 & 1) != 0) {
        piVar12 = (int *)((long)pppplStack_138 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0039a72c(pppplVar7,&pppplStack_140);
      if (((ulong)pppplStack_140 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)pppplStack_138 & 1) == 0) {
      return (long *****)(ulong)bVar3;
    }
    FUN_0055293c();
    return (long *****)(ulong)bVar3;
  }
  pppplVar7 = *ppppplVar6;
  pcStack_118 = FUN_00393754;
  if (pppplVar7[4] != (long ***)0x0) {
    return (long *****)0x0;
  }
  if (*(char *)(pppplVar7 + 5) != '\0') {
    return (long *****)0x0;
  }
  auStack_168[1] = 0;
  auStack_168[2] = 0;
  auStack_168[0] = 0;
  pppplStack_140 = (long ****)ppppplVar4;
  pppplStack_138 = (long ****)param_2;
  FUN_003b646c(&pplStack_170,2,"More than two max table size changes in a single frame",0x36,
               &uStack_149,auStack_168);
  puStack_148 = auStack_168;
  FUN_0033d548(&puStack_148);
  ppplVar8 = pppplVar7[4];
  if ((long ***)pplStack_170 != ppplVar8) {
    pppplVar7[4] = (long ***)pplStack_170;
    pplStack_170 = (long **)0x36;
    if (((ulong)ppplVar8 & 1) == 0) goto LAB_0039a6e0;
    FUN_0055293c();
    ppplVar8 = (long ***)pplStack_170;
  }
  if (((ulong)ppplVar8 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a6e0:
  pppplVar7[1] = pppplVar7[2];
  return (long *****)0x0;
}



/* Entry: 0039352c; end: 00393753;  */

/* WARNING: Type propagation algorithm not settling */

long *** FUN_0039352c(undefined8 *param_1,long ***param_2,undefined ****param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  long **pplVar6;
  long *plVar7;
  uint uVar8;
  undefined ****ppppuVar9;
  long **pplVar10;
  int *piVar11;
  long *plStack_170;
  ulong auStack_168 [3];
  undefined1 uStack_149;
  ulong *puStack_148;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  long **pplStack_130;
  long ***ppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long **pplStack_108;
  long ***appplStack_100 [4];
  long **pplStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long **applStack_b0 [5];
  char cStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long **applStack_78 [5];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = (uint)param_3;
  if (uVar8 < 0x3e) {
    pplVar6 = (long **)(param_2[2][7] + (ulong)(uVar8 - 1) * 6);
    ppppuVar9 = param_3;
  }
  else {
    ppppuVar9 = (undefined ****)(ulong)(uVar8 - 0x3e);
    pplVar6 = param_2[2] + 2;
    FUN_0039afc0();
  }
  if (pplVar6 == (long **)0x0) {
    uStack_80 = 0;
    cStack_50 = '\0';
    ppplVar4 = param_2;
    ppppuVar9 = param_3;
    FUN_0039a208(param_1,param_2,param_3,&uStack_80);
    if (cStack_50 != '\0') {
      ppplVar4 = applStack_78;
      (**(code **)(CONCAT71(uStack_7f,uStack_80) + 8))();
    }
  }
  else {
    ppplVar4 = (long ***)*param_2;
    if ((char)**pplVar6 == '\0') {
      FUN_00393e94(applStack_b0);
    }
    else {
      FUN_003948d0(applStack_b0);
    }
    if (cStack_88 == '\0') {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_00392580(appplStack_100,applStack_b0);
      param_2 = &pplStack_e0;
      ppppuVar9 = (undefined ****)appplStack_100;
      pplStack_108 = pplVar6;
      FUN_0039a30c(&pplStack_e0,pplVar6,ppppuVar9,&pplStack_108,FUN_0039a5b8);
      *param_1 = pplStack_e0;
      param_1[2] = uStack_d0;
      param_1[1] = lStack_d8;
      param_1[4] = uStack_c0;
      param_1[3] = uStack_c8;
      *(undefined4 *)(param_1 + 5) = uStack_b8;
      pplStack_e0 = (long **)&UNK_009deea0;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x003ff2e4(&lStack_d8);
      if ((long ***)((long)&MACH_HEADER.magic + 1) < appplStack_100[0]) {
        do {
          pplVar10 = *appplStack_100[0];
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(appplStack_100[0],0x10);
          if (bVar3) {
            *appplStack_100[0] = (long **)((long)pplVar10 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long **)((long)pplVar10 + -1) == (long **)0x0) {
          (*(code *)appplStack_100[0][1])();
        }
      }
      ppplVar4 = appplStack_100[0];
      if (cStack_88 != '\0') {
        ppplVar4 = applStack_b0;
        FUN_003947fc();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return ppplVar4;
  }
  ___stack_chk_fail();
  if ((int)ppppuVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(appplStack_100);
    if (cStack_88 != '\0') {
      FUN_003947fc(applStack_b0);
    }
  }
  ppplVar5 = ppplVar4;
  __Unwind_Resume();
  pcStack_118 = FUN_00393754;
  if (((ulong)ppppuVar9 & 0xff00000000) == 0) {
    return (long ***)(undefined ***)0x0;
  }
  cVar1 = *(char *)ppplVar5[3];
  pplStack_130 = pplVar6;
  ppplStack_128 = ppplVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  if (cVar1 != '\0') {
    *(char *)ppplVar5[3] = cVar1 + -1;
    FUN_0039b418(&ppppuStack_138,ppplVar5[2]);
    bVar3 = ppppuStack_138 == (undefined ****)0x0;
    if (ppppuStack_138 != (undefined ****)0x0) {
      pplVar6 = *ppplVar5;
      ppppuStack_140 = ppppuStack_138;
      if (((ulong)ppppuStack_138 & 1) != 0) {
        piVar11 = (int *)((long)ppppuStack_138 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0039a72c(pplVar6,&ppppuStack_140);
      if (((ulong)ppppuStack_140 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if (((ulong)ppppuStack_138 & 1) == 0) {
      return (long ***)(undefined ***)(ulong)bVar3;
    }
    FUN_0055293c();
    return (long ***)(undefined ***)(ulong)bVar3;
  }
  pplVar6 = *ppplVar5;
  pcStack_118 = FUN_00393754;
  if (pplVar6[4] != (long *)0x0) {
    return (long ***)(undefined ***)0x0;
  }
  if (*(char *)(pplVar6 + 5) != '\0') {
    return (long ***)(undefined ***)0x0;
  }
  auStack_168[1] = 0;
  auStack_168[2] = 0;
  auStack_168[0] = 0;
  ppppuStack_140 = param_3;
  ppppuStack_138 = (undefined ****)param_2;
  FUN_003b646c(&plStack_170,2,"More than two max table size changes in a single frame",0x36,
               &uStack_149,auStack_168);
  puStack_148 = auStack_168;
  FUN_0033d548(&puStack_148);
  plVar7 = pplVar6[4];
  if (plStack_170 != plVar7) {
    pplVar6[4] = plStack_170;
    plStack_170 = (long *)0x36;
    if (((ulong)plVar7 & 1) == 0) goto LAB_0039a6e0;
    FUN_0055293c();
    plVar7 = plStack_170;
  }
  if (((ulong)plVar7 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a6e0:
  pplVar6[1] = pplVar6[2];
  return (long ***)(undefined ***)0x0;
}



/* Entry: 00393754; end: 00393837;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_00393754(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  ulong in_stack_ffffffffffffffd8;
  
  if ((param_2 & 0xff00000000) == 0) {
    return false;
  }
  cVar1 = *(char *)param_1[3];
  if (cVar1 != '\0') {
    *(char *)param_1[3] = cVar1 + -1;
    FUN_0039b418(&stack0xffffffffffffffd8,param_1[2]);
    if (in_stack_ffffffffffffffd8 != 0) {
      lVar3 = *param_1;
      if ((in_stack_ffffffffffffffd8 & 1) != 0) {
        piVar5 = (int *)(in_stack_ffffffffffffffd8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0039a72c(lVar3,&stack0xffffffffffffffd0);
      if ((in_stack_ffffffffffffffd8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    if ((in_stack_ffffffffffffffd8 & 1) == 0) {
      return in_stack_ffffffffffffffd8 == 0;
    }
    FUN_0055293c();
    return in_stack_ffffffffffffffd8 == 0;
  }
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x20) != 0) {
    return false;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return false;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_003b646c(auStack_60,2,"More than two max table size changes in a single frame",0x36,&uStack_39
               ,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  FUN_0033d548(&puStack_38);
  uVar4 = *(ulong *)(lVar3 + 0x20);
  if (auStack_60[0] != uVar4) {
    *(ulong *)(lVar3 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_0039a6e0;
    FUN_0055293c();
    uVar4 = auStack_60[0];
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a6e0:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return false;
}



/* Entry: 00393838; end: 003939ef;  */

ulong FUN_00393838(ulong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar8 = *(byte **)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar8 == pbVar1) {
LAB_003939a4:
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar9 = 0;
      uVar6 = 0;
      uVar7 = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar9 = 0;
      uVar6 = 0;
      uVar7 = 0;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    uVar3 = (*pbVar8 & 0x7f) + param_2;
    uVar4 = (ulong)uVar3;
    if ((char)*pbVar8 < '\0') {
      if (pbVar8 + 1 == pbVar1) goto LAB_003939a4;
      *(byte **)(param_1 + 8) = pbVar8 + 2;
      uVar3 = uVar3 + ((int)(char)pbVar8[1] & 0x7fU) * 0x80;
      uVar4 = (ulong)uVar3;
      if (-1 < (char)pbVar8[1]) goto LAB_00393868;
      if (pbVar8 + 2 == pbVar1) goto LAB_003939a4;
      *(byte **)(param_1 + 8) = pbVar8 + 3;
      uVar3 = uVar3 + ((int)(char)pbVar8[2] & 0x7fU) * 0x4000;
      if (-1 < (char)pbVar8[2]) {
        uVar6 = 0;
        uVar5 = uVar3 & 0xffffff00;
        uVar7 = 0x100000000;
        uVar9 = (ulong)uVar3;
        goto LAB_003939d4;
      }
      if (pbVar8 + 3 == pbVar1) goto LAB_003939a4;
      *(byte **)(param_1 + 8) = pbVar8 + 4;
      uVar3 = uVar3 + ((int)(char)pbVar8[3] & 0x7fU) * 0x200000;
      uVar9 = (ulong)uVar3;
      if (-1 < (char)pbVar8[3]) {
LAB_003938ec:
        uVar6 = 0;
        uVar5 = (uint)uVar9 & 0xffffff00;
        uVar7 = 0x100000000;
        goto LAB_003939d4;
      }
      if (pbVar8 + 4 == pbVar1) goto LAB_003939a4;
      *(byte **)(param_1 + 8) = pbVar8 + 5;
      bVar2 = pbVar8[4];
      uVar5 = (uint)bVar2;
      if (0xf < (uVar5 & 0x7f)) {
        FUN_0039a774(param_1,(ulong)CONCAT14(bVar2,uVar3),0);
        uVar5 = (uint)param_1 & 0xffffff00;
        uVar7 = param_1 & 0xffffffff00000000;
        uVar6 = param_1 & 0xffffff0000000000;
        uVar9 = param_1;
        goto LAB_003939d4;
      }
      if (CARRY4(uVar3,uVar5 << 0x1c)) {
LAB_00393948:
        FUN_0039a774(param_1,uVar9 | (ulong)bVar2 << 0x20,0);
        uVar5 = (uint)param_1 & 0xffffff00;
        uVar7 = param_1 & 0xffffffff00000000;
        uVar6 = param_1 & 0xffffff0000000000;
        uVar9 = param_1;
        goto LAB_003939d4;
      }
      uVar3 = uVar5 * 0x10000000 + uVar3;
      uVar9 = (ulong)uVar3;
      pbVar8 = pbVar8 + 5;
      if (-1 < (char)bVar2) goto LAB_003938ec;
      do {
        if (pbVar8 == pbVar1) goto LAB_003939a4;
        *(byte **)(param_1 + 8) = pbVar8 + 1;
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 == 0x80);
      if (bVar2 != 0) goto LAB_00393948;
    }
    else {
LAB_00393868:
      uVar3 = (uint)uVar4;
    }
    uVar5 = uVar3 & 0xffffff00;
    uVar6 = 0;
    uVar7 = 0x100000000;
    uVar9 = uVar4;
  }
LAB_003939d4:
  return uVar7 & 0xff00000000 | uVar6 | (ulong)((uint)uVar9 & 0xff | uVar5);
}



/* Entry: 003939f0; end: 00393b47;  */

long ***** FUN_003939f0(long *****param_1,long *****param_2)

{
  char cVar1;
  bool bVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  int *piVar6;
  long *****ppppplVar7;
  long *****unaff_x20;
  long *****unaff_x21;
  long *****unaff_x22;
  long ***ppplStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  long **pplStack_b8;
  long ****pppplStack_b0;
  long ****pppplStack_a8;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long ****pppplStack_78;
  long ****pppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ***ppplStack_50;
  long ***ppplStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppplVar4 = param_1;
  ppppplVar5 = param_2;
  if (*(char *)(param_2 + 6) == '\0') {
LAB_00393ac0:
    param_2 = unaff_x22;
    param_1 = unaff_x20;
    ppppplVar7 = (long *****)0x0;
  }
  else {
    ppppplVar7 = param_1;
    FUN_00393cbc();
    pppplVar3 = param_1[2];
    ppplStack_68 = (long ***)*param_2;
    unaff_x21 = (long *****)&ppplStack_60;
    ppplStack_58 = (long ***)param_2[2];
    ppplStack_60 = (long ***)param_2[1];
    ppplStack_48 = (long ***)param_2[4];
    ppplStack_50 = (long ***)param_2[3];
    uStack_40 = *(undefined4 *)(param_2 + 5);
    *param_2 = (long ****)&UNK_009deea0;
    ppppplVar5 = (long *****)&ppplStack_68;
    FUN_0039b588(&pppplStack_70,pppplVar3);
    ppppplVar4 = unaff_x21;
    (*(code *)ppplStack_68[1])();
    if ((long *****)pppplStack_70 != (long *****)0x0) {
      pppplVar3 = *param_1;
      pppplStack_78 = pppplStack_70;
      if (((ulong)pppplStack_70 & 1) != 0) {
        piVar6 = (int *)((long)pppplStack_70 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppplVar5 = &pppplStack_78;
      FUN_0039a72c(pppplVar3);
      FUN_0033c494(&pppplStack_78);
      ppppplVar4 = (long *****)pppplStack_70;
      unaff_x20 = param_1;
      unaff_x22 = param_2;
      if (((ulong)pppplStack_70 & 1) != 0) {
        FUN_0055293c();
        ppppplVar4 = (long *****)pppplStack_70;
      }
      goto LAB_00393ac0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return ppppplVar7;
  }
  ___stack_chk_fail();
  if ((int)ppppplVar5 == 0) {
    __Unwind_Resume(ppppplVar4);
  }
  ppppplVar7 = ppppplVar4;
  func_0x0040cf10();
  pcStack_88 = FUN_00393b48;
  if (ppppplVar7[4] != (long ****)0x0) {
    return ppppplVar5;
  }
  if (*(char *)(ppppplVar7 + 5) != '\0') {
    return ppppplVar5;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_d8 = (long *)0x0;
  pppplStack_b0 = (long ****)param_2;
  pppplStack_a8 = (long ****)unaff_x21;
  pppplStack_a0 = (long ****)param_1;
  pppplStack_98 = (long ****)ppppplVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_003b646c(&ppplStack_e0,2,"Illegal hpack op code",0x15,&uStack_b9,&plStack_d8);
  pplStack_b8 = &plStack_d8;
  FUN_0033d548(&pplStack_b8);
  pppplVar3 = ppppplVar7[4];
  if ((long ****)ppplStack_e0 != pppplVar3) {
    ppppplVar7[4] = (long ****)ppplStack_e0;
    ppplStack_e0 = (long ***)0x36;
    if (((ulong)pppplVar3 & 1) == 0) goto LAB_00393bdc;
    FUN_0055293c();
    pppplVar3 = (long ****)ppplStack_e0;
  }
  if (((ulong)pppplVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00393bdc:
  ppppplVar7[1] = ppppplVar7[2];
  return ppppplVar5;
}



/* Entry: 00393b48; end: 00393c27;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00393b48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_003b646c(auStack_60,2,"Illegal hpack op code",0x15,&uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  FUN_0033d548(&puStack_38);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_00393bdc;
    FUN_0055293c();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00393bdc:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 00393c28; end: 00393cbb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00393c28(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong auStack_58 [4];
  ulong uStack_38;
  undefined1 uStack_31;
  long *plStack_30;
  ulong *puStack_28;
  
  *(undefined1 *)param_1[3] = 0;
  if ((param_2 & 0xff00000000) == 0) {
    return 0;
  }
  uVar4 = (uint)param_2;
  if (uVar4 < 0x3e) {
    plVar2 = (long *)(*(long *)(param_1[2] + 0x38) + (ulong)(uVar4 - 1) * 0x30);
  }
  else {
    plVar2 = (long *)(param_1[2] + 0x10);
    FUN_0039afc0(plVar2,uVar4 - 0x3e);
  }
  if (plVar2 != (long *)0x0) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return 1;
    }
    uVar4 = *(uint *)param_1[4] + (int)plVar2[5];
    *(uint *)param_1[4] = uVar4;
    if (uVar4 <= *(uint *)(param_1 + 5)) {
      (**(code **)(*plVar2 + 0x10))(plVar2 + 1,lVar3);
      return 1;
    }
    plStack_30 = (long *)(ulong)*(uint *)param_1[4];
    puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x4bf,0,
                 "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
                );
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      FUN_00366e68(lVar3);
      FUN_00367130(lVar3 + 0x1f0);
    }
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 0x20) != 0) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x28) != '\0') {
      return 0;
    }
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    auStack_58[1] = 0;
    FUN_003b646c(&plStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
                 auStack_58 + 1);
    FUN_003be104(auStack_58,&plStack_30,3,8);
    if (((ulong)plStack_30 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_28 = auStack_58 + 1;
    FUN_0033d548(&puStack_28);
    uVar1 = *(ulong *)(lVar3 + 0x20);
    if (auStack_58[0] != uVar1) {
      *(ulong *)(lVar3 + 0x20) = auStack_58[0];
      auStack_58[0] = 0x36;
      if ((uVar1 & 1) == 0) goto LAB_00393e34;
      FUN_0055293c();
      uVar1 = auStack_58[0];
    }
    if ((uVar1 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00393e34:
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
    return 0;
  }
  lVar3 = *param_1;
  puStack_28 = (ulong *)(param_2 & 0xffffffff);
  if (*(long *)(lVar3 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return 0;
  }
  plStack_30 = param_1;
  FUN_0039a9c0(&stack0xffffffffffffffc8,&plStack_30);
  uVar1 = *(ulong *)(lVar3 + 0x20);
  if (uStack_38 != uVar1) {
    *(ulong *)(lVar3 + 0x20) = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_0039a98c;
    FUN_0055293c();
    uVar1 = uStack_38;
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039a98c:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return 0;
}



/* Entry: 00393cbc; end: 00393d13;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00393cbc(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    return 1;
  }
  uVar1 = *(uint *)param_1[4] + (int)param_2[5];
  *(uint *)param_1[4] = uVar1;
  if (uVar1 <= *(uint *)(param_1 + 5)) {
    (**(code **)(*param_2 + 0x10))(param_2 + 1,lVar3);
    return 1;
  }
  uStack_30 = (ulong)*(uint *)param_1[4];
  puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x4bf,0,
               "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
              );
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    FUN_00366e68(lVar3);
    FUN_00367130(lVar3 + 0x1f0);
  }
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x28) != '\0') {
    return 0;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_003b646c(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
               auStack_58 + 1);
  FUN_003be104(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = auStack_58 + 1;
  FUN_0033d548(&puStack_28);
  uVar2 = *(ulong *)(lVar3 + 0x20);
  if (auStack_58[0] != uVar2) {
    *(ulong *)(lVar3 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar2 & 1) == 0) goto LAB_00393e34;
    FUN_0055293c();
    uVar2 = auStack_58[0];
  }
  if ((uVar2 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00393e34:
  *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 0x10);
  return 0;
}



/* Entry: 00393d14; end: 00393d83;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00393d14(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  uStack_30 = (ulong)*(uint *)param_1[4];
  puStack_28 = (ulong *)(ulong)*(uint *)(param_1 + 5);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x4bf,0,
               "received initial metadata size exceeds limit (%u vs. %u). GRPC_ARG_MAX_METADATA_SIZE can be set to increase this limit."
              );
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_00366e68(lVar2);
    FUN_00367130(lVar2 + 0x1f0);
  }
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x20) != 0) {
    return 0;
  }
  if (*(char *)(lVar2 + 0x28) != '\0') {
    return 0;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_003b646c(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
               auStack_58 + 1);
  FUN_003be104(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = auStack_58 + 1;
  FUN_0033d548(&puStack_28);
  uVar1 = *(ulong *)(lVar2 + 0x20);
  if (auStack_58[0] != uVar1) {
    *(ulong *)(lVar2 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_00393e34;
    FUN_0055293c();
    uVar1 = auStack_58[0];
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00393e34:
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
  return 0;
}



/* Entry: 00393d84; end: 00393e93;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00393d84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[1] = 0;
  FUN_003b646c(&uStack_30,2,"received initial metadata size exceeds limit",0x2c,&uStack_31,
               auStack_58 + 1);
  FUN_003be104(auStack_58,&uStack_30,3,8);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = auStack_58 + 1;
  FUN_0033d548(&puStack_28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_58[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_58[0];
    auStack_58[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_00393e34;
    FUN_0055293c();
    uVar1 = auStack_58[0];
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00393e34:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 00393e94; end: 00393fdf;  */

undefined1  [16]
FUN_00393e94(long **param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  long **pplVar11;
  long **pplVar12;
  undefined8 uVar13;
  undefined8 extraout_x8;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long *plStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  uint uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar17 = param_2;
  FUN_00394158();
  if (((ulong)param_3 & 0xff) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
LAB_00393f98:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      auVar18._8_8_ = param_3;
      auVar18._0_8_ = plVar17;
      return auVar18;
    }
  }
  else {
    if (((ulong)plVar17 & 0xff00000000) != 0) {
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_70 = (long *)0x0;
      FUN_003941ec(param_2,plVar17,&plStack_80);
      plVar7 = plStack_70;
      plVar6 = plStack_78;
      plVar15 = plStack_80;
      if (((ulong)param_2 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_3 = plVar17;
      }
      else {
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        plStack_80 = (long *)0x0;
        plStack_48 = plVar6;
        plStack_50 = plVar15;
        plStack_40 = plVar7;
        uStack_30 = 2;
        FUN_0039462c(param_1,&plStack_50);
        uStack_60 = 0;
        plStack_58 = (long *)0x0;
        param_3 = &uStack_60;
        FUN_003945e8(&plStack_50,param_3);
        *(undefined1 *)(param_1 + 5) = 1;
        FUN_003947fc(&plStack_50);
      }
      plVar17 = plStack_80;
      if (plStack_80 != (long *)0x0) {
        plStack_78 = plStack_80;
        __ZdlPv();
      }
      goto LAB_00393f98;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      pplVar11 = &plStack_90;
      pplVar12 = &plStack_90;
      lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
      plVar15 = (long *)param_2[1];
      if ((ulong)(param_2[2] - (long)plVar15) < ((ulong)plVar17 & 0xffffffff)) {
        plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
        uStack_30 = uStack_30 & 0xffffff00;
        if (param_2[4] == 0) {
          *(undefined1 *)(param_2 + 5) = 1;
        }
        pplVar12 = &plStack_58;
        FUN_00394854(param_1);
        if ((char)uStack_30 == '\0') goto LAB_003945a8;
        param_1 = &plStack_58;
      }
      else {
        plStack_78 = (long *)((ulong)plVar17 & 0xffffffff);
        plStack_80 = (long *)*param_2;
        param_2[1] = (long)plVar15 + (long)plStack_78;
        if (plStack_80 == (long *)0x0) {
          uStack_60 = CONCAT44(uStack_60._4_4_,1);
          plStack_80 = plVar15;
          FUN_0039462c(param_1,&plStack_80);
          plStack_90 = (long *)0x0;
          pcStack_88 = (code *)0x0;
          FUN_003945e8(&plStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
        }
        else {
          if (plStack_80 != (long *)((long)&MACH_HEADER.magic + 1)) {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
              if (bVar5) {
                *plStack_80 = *plStack_80 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_68 = 0;
          uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
          plStack_70 = plVar15;
          FUN_0039462c(param_1,&plStack_80);
          plStack_90 = (long *)0x0;
          pcStack_88 = (code *)0x0;
          FUN_003945e8(&plStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
          pplVar12 = pplVar11;
        }
        param_1 = &plStack_80;
      }
      FUN_003947fc(param_1);
LAB_003945a8:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
        auVar22._8_8_ = pplVar12;
        auVar22._0_8_ = param_1;
        return auVar22;
      }
      ___stack_chk_fail();
      pcVar8 = "vector";
      FUN_0033b32c();
      if (*(int *)(pcVar8 + 0x20) == 1) {
        plVar17 = *pplVar12;
        *(long **)(pcVar8 + 8) = pplVar12[1];
        *(long **)pcVar8 = plVar17;
      }
      else {
        FUN_00394790(pcVar8);
      }
      auVar23._8_8_ = pplVar12;
      auVar23._0_8_ = pcVar8;
      return auVar23;
    }
  }
  ___stack_chk_fail();
  if (plStack_80 != (long *)0x0) {
    plStack_78 = plStack_80;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_00393fe0;
  if (plVar17 != (long *)0x0) {
    iVar2 = (int)plVar17[4];
    if (iVar2 == 2) {
      lVar14 = *plVar17;
      uVar9 = plVar17[1] - lVar14;
LAB_00394030:
      auVar19._8_8_ = uVar9;
      auVar19._0_8_ = lVar14;
      return auVar19;
    }
    if (iVar2 == 1) {
      lVar14 = *plVar17;
      uVar9 = plVar17[1];
      goto LAB_00394030;
    }
    if (iVar2 == 0) {
      if (*plVar17 == 0) {
        lVar14 = (long)plVar17 + 9;
        uVar9 = (ulong)*(byte *)(plVar17 + 1);
      }
      else {
        uVar9 = plVar17[1];
        lVar14 = plVar17[2];
      }
      goto LAB_00394030;
    }
  }
  pcVar8 = "return absl::string_view()";
  pcVar10 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  uVar13 = 0x2b7;
  plStack_90 = (long *)&stack0xfffffffffffffff0;
  func_0x00338df0("return absl::string_view()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                  ,0x2b7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034b760(&plStack_130,uVar13);
  uStack_e0 = param_5 & 0xffffffff;
  uStack_108 = uStack_128;
  plStack_110 = plStack_130;
  uStack_f8 = uStack_118;
  uStack_100 = uStack_120;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_f0 = param_6;
  uStack_e8 = param_7;
  FUN_003954c8(extraout_x8,pcVar8,pcVar10,&plStack_110);
  plVar17 = plStack_110;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_110) {
    do {
      lVar14 = *plStack_110;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar5) {
        *plStack_110 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    auVar20._8_8_ = pcVar10;
    auVar20._0_8_ = plVar17;
    return auVar20;
  }
  ___stack_chk_fail();
  if ((int)pcVar10 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_110);
  }
  __Unwind_Resume();
  pbVar1 = (byte *)plVar17[1];
  if (pbVar1 == (byte *)plVar17[2]) {
    if (plVar17[4] == 0) {
      uVar13 = 0;
      uVar16 = 0;
      *(undefined1 *)(plVar17 + 5) = 1;
      uVar9 = 0;
      goto LAB_003941dc;
    }
  }
  else {
    plVar17[1] = (long)(pbVar1 + 1);
    bVar3 = *pbVar1;
    plVar15 = (long *)((ulong)bVar3 & 0x7f);
    if (((int)plVar15 != 0x7f) ||
       (FUN_00393838(), plVar15 = plVar17, ((ulong)plVar17 & 0xff00000000) != 0)) {
      uVar16 = (ulong)plVar15 & 0xffffff00 | (ulong)(bVar3 >> 7) << 0x20;
      uVar9 = (ulong)plVar15 & 0xff;
      uVar13 = 1;
      goto LAB_003941dc;
    }
  }
  uVar9 = 0;
  uVar13 = 0;
  uVar16 = 0;
LAB_003941dc:
  auVar21._0_8_ = uVar16 | uVar9;
  auVar21._8_8_ = uVar13;
  return auVar21;
}



/* Entry: 00393fe0; end: 00394053;  */

undefined1  [16]
FUN_00393fe0(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  if (param_1 != (long *)0x0) {
    iVar2 = (int)param_1[4];
    if (iVar2 == 2) {
      lVar11 = *param_1;
      uVar8 = param_1[1] - lVar11;
LAB_00394030:
      auVar14._8_8_ = uVar8;
      auVar14._0_8_ = lVar11;
      return auVar14;
    }
    if (iVar2 == 1) {
      lVar11 = *param_1;
      uVar8 = param_1[1];
      goto LAB_00394030;
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        lVar11 = (long)param_1 + 9;
        uVar8 = (ulong)*(byte *)(param_1 + 1);
      }
      else {
        uVar8 = param_1[1];
        lVar11 = param_1[2];
      }
      goto LAB_00394030;
    }
  }
  pcVar6 = "return absl::string_view()";
  pcVar9 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  uVar10 = 0x2b7;
  func_0x00338df0("return absl::string_view()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                  ,0x2b7);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034b760(&plStack_b0,uVar10);
  uStack_60 = param_4 & 0xffffffff;
  uStack_88 = uStack_a8;
  plStack_90 = plStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_70 = param_5;
  uStack_68 = param_6;
  FUN_003954c8(extraout_x8,pcVar6,pcVar9,&plStack_90);
  plVar7 = plStack_90;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar11 = *plStack_90;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar5) {
        *plStack_90 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    auVar15._8_8_ = pcVar9;
    auVar15._0_8_ = plVar7;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)pcVar9 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
  }
  __Unwind_Resume();
  pbVar1 = (byte *)plVar7[1];
  if (pbVar1 == (byte *)plVar7[2]) {
    if (plVar7[4] == 0) {
      uVar10 = 0;
      uVar13 = 0;
      *(undefined1 *)(plVar7 + 5) = 1;
      uVar8 = 0;
      goto LAB_003941dc;
    }
  }
  else {
    plVar7[1] = (long)(pbVar1 + 1);
    bVar3 = *pbVar1;
    plVar12 = (long *)((ulong)bVar3 & 0x7f);
    if (((int)plVar12 != 0x7f) ||
       (FUN_00393838(), plVar12 = plVar7, ((ulong)plVar7 & 0xff00000000) != 0)) {
      uVar13 = (ulong)plVar12 & 0xffffff00 | (ulong)(bVar3 >> 7) << 0x20;
      uVar8 = (ulong)plVar12 & 0xff;
      uVar10 = 1;
      goto LAB_003941dc;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
  uVar13 = 0;
LAB_003941dc:
  auVar16._0_8_ = uVar13 | uVar8;
  auVar16._8_8_ = uVar10;
  return auVar16;
}



/* Entry: 00394054; end: 00394157;  */

undefined1  [16]
FUN_00394054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034b760(&plStack_a0,param_4);
  uStack_50 = param_5 & 0xffffffff;
  uStack_78 = uStack_98;
  plStack_80 = plStack_a0;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_60 = param_6;
  uStack_58 = param_7;
  FUN_003954c8(param_1,param_2,param_3,&plStack_80);
  plVar5 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar7 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = plVar5;
    return auVar11;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_80);
  }
  __Unwind_Resume();
  pbVar1 = (byte *)plVar5[1];
  if (pbVar1 == (byte *)plVar5[2]) {
    if (plVar5[4] == 0) {
      uVar6 = 0;
      uVar10 = 0;
      *(undefined1 *)(plVar5 + 5) = 1;
      uVar9 = 0;
      goto LAB_003941dc;
    }
  }
  else {
    plVar5[1] = (long)(pbVar1 + 1);
    bVar2 = *pbVar1;
    plVar8 = (long *)((ulong)bVar2 & 0x7f);
    if (((int)plVar8 != 0x7f) ||
       (FUN_00393838(), plVar8 = plVar5, ((ulong)plVar5 & 0xff00000000) != 0)) {
      uVar10 = (ulong)plVar8 & 0xffffff00 | (ulong)(bVar2 >> 7) << 0x20;
      uVar9 = (ulong)plVar8 & 0xff;
      uVar6 = 1;
      goto LAB_003941dc;
    }
  }
  uVar9 = 0;
  uVar6 = 0;
  uVar10 = 0;
LAB_003941dc:
  auVar12._0_8_ = uVar10 | uVar9;
  auVar12._8_8_ = uVar6;
  return auVar12;
}



/* Entry: 00394158; end: 003941eb;  */

undefined1  [16] FUN_00394158(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  pbVar1 = *(byte **)(param_1 + 8);
  if (pbVar1 == *(byte **)(param_1 + 0x10)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
      uVar4 = 0;
      goto LAB_003941dc;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    bVar2 = *pbVar1;
    uVar4 = (ulong)bVar2 & 0x7f;
    if (((int)uVar4 != 0x7f) ||
       (FUN_00393838(param_1,0x7f), uVar4 = param_1, (param_1 & 0xff00000000) != 0)) {
      uVar5 = uVar4 & 0xffffff00 | (ulong)(bVar2 >> 7) << 0x20;
      uVar4 = uVar4 & 0xff;
      uVar3 = 1;
      goto LAB_003941dc;
    }
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
LAB_003941dc:
  auVar6._0_8_ = uVar5 | uVar4;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Entry: 003941ec; end: 003944ab;  */

long ** FUN_003941ec(long param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  long **pplVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long **extraout_x8;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [40];
  char cStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  
  lVar1 = *(long *)(param_1 + 8);
  uStack_68 = *(long *)(param_1 + 0x10) - lVar1;
  uVar18 = param_2 & 0xffffffff;
  if (uStack_68 < (param_2 & 0xffffffff)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  else {
    *(ulong *)(param_1 + 8) = lVar1 + uVar18;
    if ((int)param_2 != 0) {
      uVar19 = 0;
      sVar20 = 0;
      do {
        bVar2 = *(byte *)(lVar1 + uVar19);
        sVar3 = *(short *)(&UNK_007f84e0 +
                          (ulong)((uint)(bVar2 >> 4) | (uint)(byte)(&UNK_007f8ae0)[sVar20] << 4) * 2
                          );
        if (*(ushort *)
             (&UNK_007f63c0 +
             (ulong)((uint)(bVar2 >> 4) | (uint)*(ushort *)(&UNK_007f82e0 + (long)sVar20 * 2) << 4)
             * 2) < 0x100) {
          puVar17 = (undefined1 *)param_3[1];
          uVar4 = (undefined1)
                  *(ushort *)
                   (&UNK_007f63c0 +
                   (ulong)((uint)(bVar2 >> 4) |
                          (uint)*(ushort *)(&UNK_007f82e0 + (long)sVar20 * 2) << 4) * 2);
          if (puVar17 < (undefined1 *)param_3[2]) {
            puVar15 = puVar17 + 1;
            *puVar17 = uVar4;
LAB_00394358:
            param_3[1] = (ulong)puVar15;
            bVar2 = *(byte *)(lVar1 + uVar19);
            goto LAB_00394360;
          }
          puVar21 = (undefined1 *)*param_3;
          puVar15 = (undefined1 *)(((long)puVar17 - (long)puVar21) + 1);
          if (-1 < (long)puVar15) {
            uVar12 = (long)param_3[2] - (long)puVar21;
            puVar14 = (undefined1 *)(uVar12 * 2);
            if (puVar14 < puVar15 || (long)puVar14 - (long)puVar15 == 0) {
              puVar14 = puVar15;
            }
            if (0x3ffffffffffffffe < uVar12) {
              puVar14 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar14 == (undefined1 *)0x0) {
              puVar13 = (undefined1 *)0x0;
            }
            else {
              puVar13 = puVar14;
              __Znwm();
            }
            puVar16 = puVar13 + ((long)puVar17 - (long)puVar21);
            puVar15 = puVar16 + 1;
            *puVar16 = uVar4;
            if (puVar17 != puVar21) {
              puVar16 = puVar17 + ~(ulong)puVar21;
              do {
                puVar17 = puVar17 + -1;
                puVar13[(long)puVar16] = *puVar17;
                puVar16 = puVar16 + -1;
              } while (puVar17 != puVar21);
              puVar17 = (undefined1 *)*param_3;
              puVar16 = puVar13;
            }
            *param_3 = (ulong)puVar16;
            param_3[1] = (ulong)puVar15;
            param_3[2] = (ulong)(puVar13 + (long)puVar14);
            if (puVar17 != (undefined1 *)0x0) {
              __ZdlPv(puVar17);
            }
            goto LAB_00394358;
          }
LAB_003944a4:
          puVar7 = param_3;
          FUN_003945d4();
          puVar10 = &uStack_100;
          puVar11 = &uStack_100;
          pcStack_78 = FUN_003944ac;
          lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
          plVar22 = (long *)puVar7[1];
          puStack_90 = puVar17;
          puStack_88 = param_3;
          puStack_80 = &stack0xfffffffffffffff0;
          if (puVar7[2] - (long)plVar22 < (param_2 & 0xffffffff)) {
            auStack_c8[0] = 0;
            cStack_a0 = '\0';
            if (puVar7[4] == 0) {
              *(undefined1 *)(puVar7 + 5) = 1;
            }
            puVar11 = (undefined8 *)auStack_c8;
            pplVar8 = extraout_x8;
            FUN_00394854(extraout_x8);
            if (cStack_a0 == '\0') goto LAB_003945a8;
            pplVar8 = (long **)auStack_c8;
          }
          else {
            uStack_e8 = param_2 & 0xffffffff;
            plStack_f0 = (long *)*puVar7;
            puVar7[1] = (long)plVar22 + uStack_e8;
            if (plStack_f0 == (long *)0x0) {
              uStack_d0 = 1;
              plStack_f0 = plVar22;
              FUN_0039462c(extraout_x8,&plStack_f0);
              uStack_100 = 0;
              uStack_f8 = 0;
              FUN_003945e8(&plStack_f0);
              *(undefined1 *)(extraout_x8 + 5) = 1;
            }
            else {
              if (plStack_f0 != (long *)((long)&MACH_HEADER.magic + 1U)) {
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
                  if (bVar6) {
                    *plStack_f0 = *plStack_f0 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_d8 = 0;
              uStack_d0 = 0;
              plStack_e0 = plVar22;
              FUN_0039462c(extraout_x8,&plStack_f0);
              uStack_100 = 0;
              uStack_f8 = 0;
              FUN_003945e8(&plStack_f0);
              *(undefined1 *)(extraout_x8 + 5) = 1;
              puVar11 = puVar10;
            }
            pplVar8 = &plStack_f0;
          }
          FUN_003947fc(pplVar8);
LAB_003945a8:
          if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_98) {
            ___stack_chk_fail();
            pcVar9 = "vector";
            FUN_0033b32c();
            if (*(int *)((long)pcVar9 + 0x20) == 1) {
              plVar22 = (long *)*puVar11;
              *(long **)((long)pcVar9 + 8) = (long *)puVar11[1];
              *(long **)pcVar9 = plVar22;
            }
            else {
              FUN_00394790(pcVar9);
            }
            return (long **)pcVar9;
          }
          return pplVar8;
        }
LAB_00394360:
        sVar20 = *(short *)(&UNK_007f84e0 +
                           (ulong)(bVar2 & 0xf | (uint)(byte)(&UNK_007f8ae0)[sVar3] << 4) * 2);
        if (*(ushort *)
             (&UNK_007f63c0 +
             (ulong)(bVar2 & 0xf | (uint)*(ushort *)(&UNK_007f82e0 + (long)sVar3 * 2) << 4) * 2) <
            0x100) {
          puVar17 = (undefined1 *)param_3[1];
          uVar4 = (undefined1)
                  *(ushort *)
                   (&UNK_007f63c0 +
                   (ulong)(bVar2 & 0xf | (uint)*(ushort *)(&UNK_007f82e0 + (long)sVar3 * 2) << 4) *
                   2);
          if (puVar17 < (undefined1 *)param_3[2]) {
            puVar16 = puVar17 + 1;
            *puVar17 = uVar4;
          }
          else {
            puVar21 = (undefined1 *)*param_3;
            puVar15 = (undefined1 *)(((long)puVar17 - (long)puVar21) + 1);
            if ((long)puVar15 < 0) goto LAB_003944a4;
            uVar12 = (long)param_3[2] - (long)puVar21;
            puVar14 = (undefined1 *)(uVar12 * 2);
            if (puVar14 < puVar15 || (long)puVar14 - (long)puVar15 == 0) {
              puVar14 = puVar15;
            }
            if (0x3ffffffffffffffe < uVar12) {
              puVar14 = (undefined1 *)0x7fffffffffffffff;
            }
            if (puVar14 == (undefined1 *)0x0) {
              puVar15 = (undefined1 *)0x0;
            }
            else {
              puVar15 = puVar14;
              __Znwm();
            }
            puVar13 = puVar15 + ((long)puVar17 - (long)puVar21);
            puVar16 = puVar13 + 1;
            *puVar13 = uVar4;
            if (puVar17 != puVar21) {
              puVar13 = puVar17 + ~(ulong)puVar21;
              do {
                puVar17 = puVar17 + -1;
                puVar15[(long)puVar13] = *puVar17;
                puVar13 = puVar13 + -1;
              } while (puVar17 != puVar21);
              puVar17 = (undefined1 *)*param_3;
              puVar13 = puVar15;
            }
            *param_3 = (ulong)puVar13;
            param_3[1] = (ulong)puVar16;
            param_3[2] = (ulong)(puVar15 + (long)puVar14);
            if (puVar17 != (undefined1 *)0x0) {
              __ZdlPv(puVar17);
            }
          }
          param_3[1] = (ulong)puVar16;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar18);
    }
  }
  return (long **)(ulong)(uVar18 <= uStack_68);
}



/* Entry: 003944ac; end: 003945d3;  */

long ** FUN_003944ac(long **param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  char cStack_30;
  long lStack_28;
  
  puVar4 = &uStack_90;
  puVar5 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)param_2[1];
  if ((ulong)(param_2[2] - (long)plVar6) < (param_3 & 0xffffffff)) {
    auStack_58[0] = 0;
    cStack_30 = '\0';
    if (param_2[4] == 0) {
      *(undefined1 *)(param_2 + 5) = 1;
    }
    puVar5 = (undefined8 *)auStack_58;
    FUN_00394854(param_1);
    if (cStack_30 == '\0') goto LAB_003945a8;
    param_1 = (long **)auStack_58;
  }
  else {
    uStack_78 = param_3 & 0xffffffff;
    plStack_80 = (long *)*param_2;
    param_2[1] = (long)plVar6 + uStack_78;
    if (plStack_80 == (long *)0x0) {
      uStack_60 = 1;
      plStack_80 = plVar6;
      FUN_0039462c(param_1,&plStack_80);
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_003945e8(&plStack_80);
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      if (plStack_80 != (long *)((long)&MACH_HEADER.magic + 1)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
          if (bVar2) {
            *plStack_80 = *plStack_80 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_68 = 0;
      uStack_60 = 0;
      plStack_70 = plVar6;
      FUN_0039462c(param_1,&plStack_80);
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_003945e8(&plStack_80);
      *(undefined1 *)(param_1 + 5) = 1;
      puVar5 = puVar4;
    }
    param_1 = &plStack_80;
  }
  FUN_003947fc(param_1);
LAB_003945a8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcVar3 = "vector";
  FUN_0033b32c();
  if (*(int *)((long)pcVar3 + 0x20) == 1) {
    plVar6 = (long *)*puVar5;
    *(long **)((long)pcVar3 + 8) = (long *)puVar5[1];
    *(long **)pcVar3 = plVar6;
  }
  else {
    FUN_00394790(pcVar3);
  }
  return (long **)pcVar3;
}



/* Entry: 003945d4; end: 003945e7;  */

char * FUN_003945d4(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (*(int *)(pcVar1 + 0x20) == 1) {
    uVar2 = *param_2;
    *(undefined8 *)(pcVar1 + 8) = param_2[1];
    *(undefined8 *)pcVar1 = uVar2;
  }
  else {
    FUN_00394790(pcVar1);
  }
  return pcVar1;
}



/* Entry: 003945e8; end: 0039462b;  */

undefined8 * FUN_003945e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    FUN_00394790(param_1);
  }
  return param_1;
}



/* Entry: 0039462c; end: 0039465f;  */

undefined1 * FUN_0039462c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_00394660();
  return param_1;
}



/* Entry: 00394660; end: 003946eb;  */

void FUN_00394660(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dedf0)[*(uint *)(param_1 + 0x20)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dee08)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 003946ec; end: 0039470b;  */

undefined8 * FUN_003946ec(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_2;
}



/* Entry: 0039470c; end: 0039475f;  */

void FUN_0039470c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_2[1] = uVar5;
  *param_2 = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  return;
}



/* Entry: 00394760; end: 0039478f;  */

void FUN_00394760(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}



/* Entry: 00394790; end: 003947fb;  */

undefined8 * FUN_00394790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 4) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dedf0)[*(uint *)(param_1 + 4)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  return param_1;
}



/* Entry: 003947fc; end: 00394853;  */

long FUN_003947fc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009dedf0)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}



/* Entry: 00394854; end: 00394883;  */

undefined1 * FUN_00394854(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_00394884();
  return param_1;
}



/* Entry: 00394884; end: 003948cf;  */

void FUN_00394884(long param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x28) != '\0') {
    FUN_0039462c();
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_003945e8(param_2,&uStack_30);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 003948d0; end: 00394b7b;  */

long **** FUN_003948d0(long ****param_1,long ****param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long ***ppplVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char *pcVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  ulong uVar9;
  undefined8 unaff_x20;
  long ***ppplVar10;
  int iStack_e4;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  long **pplStack_90;
  long **pplStack_88;
  long **pplStack_80;
  ulong uStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long ***ppplStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_40;
  char cStack_38;
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar7 = param_2;
  FUN_00394158();
  pppplVar8 = pppplVar7;
  if ((param_3 & 0xff) == 0) {
LAB_003949f8:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
LAB_00394aa4:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return pppplVar8;
    }
  }
  else {
    if (((ulong)pppplVar7 & 0xff00000000) != 0) {
      ppplStack_e0 = (long ***)0x0;
      ppplStack_d8 = (long ***)0x0;
      puStack_d0 = (undefined1 *)0x0;
      iStack_e4 = 0;
      pppplVar8 = param_2;
      FUN_00394da4(param_2,pppplVar7,&iStack_e4,&ppplStack_e0);
      puVar4 = puStack_d0;
      ppplVar3 = ppplStack_d8;
      ppplVar10 = ppplStack_e0;
      if (((ulong)pppplVar8 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 5) = 0;
      }
      else {
        if (iStack_e4 == 2) {
          ppplStack_d8 = (long ***)0x0;
          puStack_d0 = (undefined1 *)0x0;
          ppplStack_e0 = (long ***)0x0;
          ppplStack_a8 = ppplVar3;
          ppplStack_b0 = ppplVar10;
          plStack_a0 = (long *)puVar4;
          pplStack_90 = (long **)CONCAT44(pplStack_90._4_4_,2);
          FUN_00394b7c(param_1,param_2,&ppplStack_b0);
          pppplVar8 = &ppplStack_b0;
        }
        else {
          if (iStack_e4 == 1) {
            ppplStack_d8 = (long ***)0x0;
            puStack_d0 = (undefined1 *)0x0;
            ppplStack_e0 = (long ***)0x0;
            ppplStack_58 = ppplVar3;
            uStack_60 = (long ****)ppplVar10;
            puStack_50 = puVar4;
            uStack_40 = 2;
            FUN_0039462c(param_1,&uStack_60);
            uStack_c0 = 0;
            ppplStack_b8 = (long ***)0x0;
            FUN_003945e8(&uStack_60,&uStack_c0);
            *(undefined1 *)(param_1 + 5) = 1;
          }
          else {
            if (iStack_e4 != 0) goto LAB_00394b0c;
            uStack_60 = (long ****)0x0;
            ppplStack_58 = (long ***)0x0;
            uStack_40 = 1;
            FUN_0039462c(param_1,&uStack_60);
            uStack_c0 = 0;
            ppplStack_b8 = (long ***)0x0;
            FUN_003945e8(&uStack_60,&uStack_c0);
            *(undefined1 *)(param_1 + 5) = 1;
          }
          pppplVar8 = (long ****)&uStack_60;
        }
        FUN_003947fc(pppplVar8);
      }
      pppplVar8 = (long ****)ppplStack_e0;
      if ((long ****)ppplStack_e0 != (long ****)0x0) {
        ppplStack_d8 = ppplStack_e0;
        __ZdlPv();
      }
      goto LAB_00394aa4;
    }
    if ((((int)pppplVar7 == 0) || (ppplVar10 = param_2[1], ppplVar10 == param_2[2])) ||
       (*(char *)ppplVar10 != '\0')) {
      pppplVar8 = param_2;
      FUN_003944ac(&uStack_60,param_2,pppplVar7);
      if (cStack_38 == '\0') goto LAB_003949f8;
      FUN_0039462c(&pplStack_88,&uStack_60);
      ppplStack_e0 = (long ***)0x0;
      ppplStack_d8 = (long ***)0x0;
      FUN_003945e8(&uStack_60,&ppplStack_e0);
      FUN_00394b7c(param_1,param_2,&pplStack_88);
      pppplVar8 = (long ****)&pplStack_88;
      FUN_003947fc(pppplVar8);
      if (cStack_38 != '\0') {
        pppplVar8 = (long ****)&uStack_60;
        FUN_003947fc(pppplVar8);
      }
      goto LAB_00394aa4;
    }
    param_2[1] = (long ***)((long)ppplVar10 + 1);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      uVar9 = (ulong)((int)pppplVar7 - 1);
      pppplVar7 = (long ****)&pplStack_90;
      pppplVar8 = (long ****)&pplStack_90;
      lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
      ppplVar10 = param_2[1];
      if ((ulong)((long)param_2[2] - (long)ppplVar10) < uVar9) {
        ppplStack_58 = (long ***)((ulong)ppplStack_58 & 0xffffffffffffff00);
        cStack_30 = '\0';
        if (param_2[4] == (long ***)0x0) {
          *(undefined1 *)(param_2 + 5) = 1;
        }
        pppplVar8 = &ppplStack_58;
        pppplVar7 = param_1;
        FUN_00394854(param_1);
        if (cStack_30 == '\0') goto LAB_003945a8;
        pppplVar7 = &ppplStack_58;
      }
      else {
        pplStack_80 = (long **)*param_2;
        param_2[1] = (long ***)((long)ppplVar10 + uVar9);
        uStack_78 = uVar9;
        if ((long ***)pplStack_80 == (long ***)0x0) {
          unaff_x20 = 1;
          uStack_60 = (long ****)CONCAT44(uStack_60._4_4_,1);
          pplStack_80 = (long **)ppplVar10;
          FUN_0039462c(param_1,&pplStack_80);
          pplStack_90 = (long **)0x0;
          pplStack_88 = (long **)0x0;
          FUN_003945e8(&pplStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
        }
        else {
          if ((long ***)pplStack_80 != (long ***)((long)&MACH_HEADER.magic + 1)) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pplStack_80,0x10);
              if (bVar2) {
                *pplStack_80 = (long *)((long)*pplStack_80 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          uStack_68 = 0;
          uStack_60 = (long ****)((ulong)uStack_60._4_4_ << 0x20);
          pplStack_70 = (long **)ppplVar10;
          FUN_0039462c(param_1,&pplStack_80);
          pplStack_90 = (long **)0x0;
          pplStack_88 = (long **)0x0;
          FUN_003945e8(&pplStack_80);
          *(undefined1 *)(param_1 + 5) = 1;
          pppplVar8 = pppplVar7;
        }
        pppplVar7 = (long ****)&pplStack_80;
      }
      FUN_003947fc(pppplVar7);
LAB_003945a8:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
        return pppplVar7;
      }
      ___stack_chk_fail();
      pcStack_98 = FUN_003945d4;
      pcVar6 = "vector";
      plStack_a0 = (long *)&stack0xfffffffffffffff0;
      FUN_0033b32c();
      ppplStack_a8 = (long ***)FUN_003945e8;
      if (*(int *)((long)pcVar6 + 0x20) == 1) {
        ppplVar10 = *pppplVar8;
        *(long ****)((long)pcVar6 + 8) = pppplVar8[1];
        *(long ****)pcVar6 = ppplVar10;
      }
      else {
        uStack_c0 = unaff_x20;
        ppplStack_b8 = (long ***)param_1;
        ppplStack_b0 = (long ***)&plStack_a0;
        FUN_00394790(pcVar6);
      }
      return (long ****)pcVar6;
    }
  }
  ___stack_chk_fail();
LAB_00394b0c:
  func_0x00338df0("abort();",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                  ,0x2fa);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x394b28);
  (*pcVar5)();
}



/* Entry: 00394b7c; end: 00394da3;  */

undefined8 *****
FUN_00394b7c(long param_1,undefined8 *****param_2,long *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined8 *puStack_118;
  undefined2 *puStack_110;
  undefined2 uStack_102;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  char cStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppuStack_c0 = (undefined8 ****)((ulong)ppppuStack_c0 & 0xffffffffffffff00);
  cStack_a8 = '\0';
  if (param_3 == (long *)0x0) {
LAB_00394cd8:
    auStack_68[0] = 0;
    cStack_40 = '\0';
    puVar4 = (undefined8 *)auStack_68;
    FUN_003950d8(param_1);
    if (cStack_40 == '\0') goto LAB_00394d00;
    param_2 = (undefined8 *****)auStack_68;
  }
  else {
    iVar5 = (int)param_3[4];
    if (iVar5 == 0) {
      if (*param_3 == 0) {
        lVar3 = (long)param_3 + 9;
        uVar6 = (ulong)*(byte *)(param_3 + 1);
      }
      else {
        uVar6 = param_3[1];
        lVar3 = param_3[2];
      }
      FUN_00394e48(&ppppuStack_90,lVar3,lVar3 + uVar6);
      FUN_003952d4(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
      iVar5 = (int)param_3[4];
    }
    if (iVar5 == 1) {
      FUN_00394e48(&ppppuStack_90,*param_3,*param_3 + param_3[1]);
      FUN_003952d4(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
      iVar5 = (int)param_3[4];
    }
    if (iVar5 == 2) {
      FUN_00394e48(&ppppuStack_90,*param_3,param_3[1]);
      FUN_003952d4(&ppppuStack_c0,&ppppuStack_90);
      if ((cStack_78 != '\0') && ((undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
    }
    uVar2 = uStack_b0;
    ppppuVar1 = ppppuStack_b8;
    ppppuVar8 = ppppuStack_c0;
    if (cStack_a8 == '\0') goto LAB_00394cd8;
    ppppuStack_b8 = (undefined8 *****)0x0;
    uStack_b0 = 0;
    ppppuStack_c0 = (undefined8 *****)0x0;
    ppppuStack_88 = ppppuVar1;
    ppppuStack_90 = ppppuVar8;
    uStack_80 = uVar2;
    uStack_70 = 2;
    FUN_0039462c(param_1,&ppppuStack_90);
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar4 = &uStack_a0;
    FUN_003945e8(&ppppuStack_90);
    *(undefined1 *)(param_1 + 0x28) = 1;
    param_2 = &ppppuStack_90;
  }
  FUN_003947fc();
LAB_00394d00:
  if ((cStack_a8 != '\0') &&
     (param_2 = (undefined8 *****)ppppuStack_c0,
     (undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0)) {
    ppppuStack_b8 = ppppuStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((((int)puVar4 != 0) && (func_0x0040cf10(), cStack_a8 != '\0')) &&
       ((undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0)) {
      ppppuStack_b8 = ppppuStack_c0;
      __ZdlPv();
    }
    __Unwind_Resume();
    uStack_102 = 0;
    puStack_118 = &uStack_100;
    puStack_110 = &uStack_102;
    ppppuVar8 = param_2[1];
    uVar6 = (long)param_2[2] - (long)ppppuVar8;
    uVar7 = (ulong)puVar4 & 0xffffffff;
    if (uVar6 < ((ulong)puVar4 & 0xffffffff)) {
      if (param_2[4] == (undefined8 ****)0x0) {
        *(undefined1 *)(param_2 + 5) = 1;
      }
    }
    else {
      param_2[1] = (undefined8 ****)((long)ppppuVar8 + uVar7);
      uVar9 = uVar7;
      uStack_100 = param_4;
      uStack_f8 = param_5;
      if ((int)puVar4 != 0) {
        do {
          FUN_00395358(&puStack_118,*(byte *)ppppuVar8 >> 4);
          FUN_00395358(&puStack_118,*(byte *)ppppuVar8 & 0xf);
          uVar9 = uVar9 - 1;
          ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + 1);
        } while (uVar9 != 0);
      }
    }
    return (undefined8 *****)(ulong)(uVar7 <= uVar6);
  }
  return param_2;
}



/* Entry: 00394da4; end: 00394e47;  */

bool FUN_00394da4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *puStack_58;
  undefined2 *puStack_50;
  undefined2 uStack_42;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_42 = 0;
  puStack_58 = &uStack_40;
  puStack_50 = &uStack_42;
  pbVar3 = *(byte **)(param_1 + 8);
  uVar1 = *(long *)(param_1 + 0x10) - (long)pbVar3;
  uVar2 = (ulong)param_2;
  if (uVar1 < param_2) {
    if (*(long *)(param_1 + 0x20) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  else {
    *(byte **)(param_1 + 8) = pbVar3 + uVar2;
    uVar4 = uVar2;
    uStack_40 = param_3;
    uStack_38 = param_4;
    if (param_2 != 0) {
      do {
        FUN_00395358(&puStack_58,*pbVar3 >> 4);
        FUN_00395358(&puStack_58,*pbVar3 & 0xf);
        uVar4 = uVar4 - 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
  }
  return uVar2 <= uVar1;
}



/* Entry: 00394e48; end: 003950d7;  */

void FUN_00394e48(long *param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  do {
    pbVar6 = param_3;
    pbVar7 = param_2;
    if (pbVar6 == param_2) break;
    param_3 = pbVar6 + -1;
    pbVar7 = pbVar6;
  } while (pbVar6[-1] == 0x3d);
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  lVar8 = (long)pbVar7 - (long)param_2;
  lVar4 = lVar8 * 3;
  lVar1 = lVar4 + 3;
  if (-1 < lVar4) {
    lVar1 = lVar4;
  }
  FUN_004babfc(&lStack_60,(lVar1 >> 2) + 3);
  if (3 < lVar8) {
    do {
      if ((((0x3f < (byte)(&UNK_007f8be0)[*param_2]) ||
           (bVar2 = (&UNK_007f8be0)[param_2[1]], 0x3f < bVar2)) ||
          (bVar3 = (&UNK_007f8be0)[param_2[2]], 0x3f < bVar3)) ||
         (0x3f < (byte)(&UNK_007f8be0)[param_2[3]])) goto LAB_00395024;
      bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                  (byte)(((uint)(byte)(&UNK_007f8be0)[*param_2] << 0x12) >> 0x10);
      bStack_62 = (byte)(((uint)bVar3 << 6) >> 8) | (byte)(((uint)bVar2 << 0xc) >> 8);
      bStack_61 = (&UNK_007f8be0)[param_2[3]] | bVar3 << 6;
      FUN_0039aab4(&lStack_60,lStack_58,&bStack_63,&lStack_60,3);
      param_2 = param_2 + 4;
      lVar8 = lVar8 + -4;
    } while (3 < lVar8);
  }
  switch(lVar8) {
  case 0:
    break;
  case 1:
LAB_00395024:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (lStack_60 == 0) {
      return;
    }
    lStack_58 = lStack_60;
    __ZdlPv();
    return;
  case 2:
    if ((0x3f < (byte)(&UNK_007f8be0)[*param_2]) ||
       (bVar2 = (&UNK_007f8be0)[param_2[1]], 0x3f < bVar2 || (bVar2 & 0xf) != 0)) goto LAB_00395024;
    bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                (byte)(((uint)(byte)(&UNK_007f8be0)[*param_2] << 0x12) >> 0x10);
    FUN_003951e0(&lStack_60,&bStack_63);
    break;
  case 3:
    if (((0x3f < (byte)(&UNK_007f8be0)[*param_2]) ||
        (bVar2 = (&UNK_007f8be0)[param_2[1]], 0x3f < bVar2)) ||
       ((bVar3 = (&UNK_007f8be0)[param_2[2]], 0x3f < bVar3 || ((bVar3 & 3) != 0))))
    goto LAB_00395024;
    bStack_63 = (byte)(((uint)bVar2 << 0xc) >> 0x10) |
                (byte)(((uint)(byte)(&UNK_007f8be0)[*param_2] << 0x12) >> 0x10);
    FUN_003951e0(&lStack_60,&bStack_63);
    bStack_63 = (byte)(((uint)bVar3 << 6) >> 8) | (byte)(((uint)bVar2 << 0xc) >> 8);
    FUN_003951e0(&lStack_60,&bStack_63);
    break;
  default:
    func_0x00338df0("return out;",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                    ,0x3a0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3950ac);
    (*pcVar5)();
  }
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 003950d8; end: 003951df;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003950d8(undefined1 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if ((*(long *)(param_2 + 0x20) != 0) || (*(char *)(param_2 + 0x28) != '\0')) {
    *param_1 = 0;
    param_1[0x28] = 0;
    FUN_00394884(param_1,param_3);
    return param_1;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_003b646c(auStack_60,2,"illegal base64 encoding",0x17,&uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  FUN_0033d548(&puStack_38);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_2 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_0039518c;
    FUN_0055293c();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0039518c:
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  FUN_00394854(param_1,param_3);
  return param_1;
}



/* Entry: 003951e0; end: 003952d3;  */

void FUN_003951e0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar7 = (undefined1 *)param_1[1];
  if (puVar7 < (undefined1 *)param_1[2]) {
    puVar6 = puVar7 + 1;
    *puVar7 = (char)*param_2;
  }
  else {
    puVar8 = (undefined1 *)*param_1;
    puVar2 = (undefined1 *)(((long)puVar7 - (long)puVar8) + 1);
    if ((long)puVar2 < 0) {
      FUN_003945d4();
      cVar1 = (char)param_1[3];
      if (cVar1 == (char)param_2[3]) {
        if (cVar1 != '\0') {
          func_0x004b80bc();
          uVar3 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar3;
          param_1[2] = param_2[2];
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          return;
        }
      }
      else if (cVar1 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar3;
        param_1[2] = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    uVar3 = (long)param_1[2] - (long)puVar8;
    puVar5 = (undefined1 *)(uVar3 * 2);
    if (puVar5 < puVar2 || (long)puVar5 - (long)puVar2 == 0) {
      puVar5 = puVar2;
    }
    if (0x3ffffffffffffffe < uVar3) {
      puVar5 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar5 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = puVar5;
      __Znwm();
    }
    puVar4 = puVar2 + ((long)puVar7 - (long)puVar8);
    puVar6 = puVar4 + 1;
    *puVar4 = (char)*param_2;
    if (puVar7 != puVar8) {
      puVar4 = puVar7 + ~(ulong)puVar8;
      do {
        puVar7 = puVar7 + -1;
        puVar2[(long)puVar4] = *puVar7;
        puVar4 = puVar4 + -1;
      } while (puVar7 != puVar8);
      puVar7 = (undefined1 *)*param_1;
      puVar4 = puVar2;
    }
    *param_1 = (ulong)puVar4;
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)(puVar2 + (long)puVar5);
    if (puVar7 != (undefined1 *)0x0) {
      __ZdlPv(puVar7);
    }
  }
  param_1[1] = (ulong)puVar6;
  return;
}



/* Entry: 003952d4; end: 00395357;  */

void FUN_003952d4(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (char)param_1[3];
  if (cVar1 == (char)param_2[3]) {
    if (cVar1 != '\0') {
      func_0x004b80bc();
      lVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar2;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 00395358; end: 003954c7;  */

segment_command * FUN_00395358(segment_command *param_1,long param_2,segment_command *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  short sVar9;
  char cVar10;
  bool bVar11;
  undefined1 *puVar12;
  int iVar13;
  segment_command *psVar14;
  segment_command *psVar15;
  long *plVar16;
  qword *pqVar17;
  qword *pqVar18;
  long *plVar19;
  uint uVar20;
  short *psVar21;
  ulong uVar22;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  long lVar23;
  qword qVar24;
  uint uVar25;
  undefined8 *puVar26;
  char *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int *piVar35;
  segment_command *psVar36;
  long lVar37;
  qword qVar38;
  segment_command *psVar39;
  segment_command *psVar40;
  undefined8 unaff_x22;
  segment_command *psVar41;
  undefined8 *****pppppuVar42;
  code *pcVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  qword qVar46;
  undefined8 uVar47;
  long lVar48;
  long lVar49;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  segment_command *psStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  
  pppppuVar42 = (undefined8 *****)&stack0xfffffffffffffff0;
  psVar21 = *(short **)param_1->segname;
  uVar8 = *(ushort *)
           (&UNK_007f63c0 +
           (ulong)((int)param_2 + (uint)*(ushort *)(&UNK_007f82e0 + (long)*psVar21 * 2) * 0x10) * 2)
  ;
  sVar9 = *(short *)(&UNK_007f84e0 +
                    (ulong)((int)param_2 + (uint)(byte)(&UNK_007f8ae0)[*psVar21] * 0x10) * 2);
  if (uVar8 < 0x100) {
    puVar26 = *(undefined8 **)param_1;
    piVar35 = (int *)*puVar26;
    if (*piVar35 == 0) {
      if ((uVar8 & 0xff) == 0) {
        *piVar35 = 1;
        goto LAB_00395498;
      }
      *piVar35 = 2;
    }
    psVar39 = (segment_command *)puVar26[1];
    psVar40 = *(segment_command **)psVar39->segname;
    if (psVar40 < *(segment_command **)(psVar39->segname + 8)) {
      puVar12 = (undefined1 *)((long)&psVar40->cmd + 1);
      *(char *)&psVar40->cmd = (char)uVar8;
      psVar15 = param_1;
    }
    else {
      psVar41 = *(segment_command **)psVar39;
      psVar14 = (segment_command *)(((long)psVar40 - (long)psVar41) + 1);
      if ((long)psVar14 < 0) {
        pcVar43 = FUN_003954c8;
        psVar14 = psVar39;
        FUN_003945d4();
        puVar12 = &stack0xffffffffffffffb0;
        puVar26 = extraout_x8;
        if ((param_2 == 5) &&
           (puVar12 = &stack0xffffffffffffffb0,
           psVar14->cmd == 0x7461703a && (char)psVar14->cmdsize == 'h')) {
          pcStack_58 = FUN_003954c8;
          lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
          psVar41 = param_3;
          psVar36 = param_3;
          psStack_70 = psVar39;
          psStack_68 = param_1;
          ppppuStack_60 = pppppuVar42;
          FUN_003955d0(&uStack_98);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00395680();
          *extraout_x8 = psVar41;
          *(int *)(extraout_x8 + 5) = (int)psVar39;
          extraout_x8[2] = uStack_90;
          extraout_x8[1] = uStack_98;
          extraout_x8[4] = uStack_80;
          extraout_x8[3] = uStack_88;
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
            return psVar41;
          }
          ___stack_chk_fail();
          FUN_0034b418(&uStack_98);
          pcVar43 = FUN_00395594;
          psVar14 = psVar41;
          __Unwind_Resume();
          puVar12 = auStack_a0;
          param_3 = psVar36;
          puVar26 = extraout_x8_00;
          param_1 = psVar41;
          pppppuVar42 = &ppppuStack_60;
        }
        if ((param_2 == 10) &&
           (lVar23._0_4_ = psVar14->cmd, lVar23._4_4_ = psVar14->cmdsize,
           lVar23 == 0x69726f687475613a && *(short *)psVar14->segname == 0x7974)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00395b54();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00395b1c;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_01;
        }
        if ((param_2 == 7) &&
           (psVar14->cmd == 0x74656d3a && *(int *)((long)&psVar14->cmd + 3) == 0x646f6874)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00395cac();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00395d68();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 7) &&
           (psVar14->cmd == 0x6174733a && *(int *)((long)&psVar14->cmd + 3) == 0x73757461)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396040();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_003960fc();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 7) &&
           (psVar14->cmd == 0x6863733a && *(int *)((long)&psVar14->cmd + 3) == 0x656d6568)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396410();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_003964ec();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 0xc) &&
           (lVar48._0_4_ = psVar14->cmd, lVar48._4_4_ = psVar14->cmdsize,
           lVar48 == 0x2d746e65746e6f63 && *(int *)psVar14->segname == 0x65707974)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_003967d8();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00396894();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 2) && ((short)psVar14->cmd == 0x6574)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396b7c();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00396c38();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(char *)(puVar26 + 1) = (char)psVar40;
          return psVar39;
        }
        if ((param_2 == 0xd) &&
           (lVar49._0_4_ = psVar14->cmd, lVar49._4_4_ = psVar14->cmdsize,
           lVar49 == 0x636e652d63707267 &&
           *(long *)((long)&psVar14->cmdsize + 1) == 0x676e69646f636e65)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396f4c();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00397008();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 0x1e) &&
           (lVar1._0_4_ = psVar14->cmd, lVar1._4_4_ = psVar14->cmdsize,
           ((lVar1 == 0x746e692d63707267 && *(long *)psVar14->segname == 0x6e652d6c616e7265) &&
           *(long *)(psVar14->segname + 8) == 0x722d676e69646f63) &&
           *(long *)(psVar14->segname + 0xe) == 0x747365757165722d)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396f4c();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00397320();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 0x14) &&
           (lVar2._0_4_ = psVar14->cmd, lVar2._4_4_ = psVar14->cmdsize,
           (lVar2 == 0x6363612d63707267 && *(long *)psVar14->segname == 0x6f636e652d747065) &&
           *(int *)(psVar14->segname + 8) == 0x676e6964)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00397484();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_0039755c();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          psVar39 = (segment_command *)((long)&MACH_HEADER.magic + 1);
          __Znwm();
          *(char *)&psVar39->cmd = (char)psVar40;
          puVar26[1] = psVar39;
          return psVar39;
        }
        if ((param_2 == 0xb) &&
           (lVar28._0_4_ = psVar14->cmd, lVar28._4_4_ = psVar14->cmdsize,
           lVar28 == 0x6174732d63707267 && *(long *)((long)&psVar14->cmd + 3) == 0x7375746174732d63)
           ) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_003978c8();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00397984();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 0xc) &&
           (lVar29._0_4_ = psVar14->cmd, lVar29._4_4_ = psVar14->cmdsize,
           lVar29 == 0x6d69742d63707267 && *(int *)psVar14->segname == 0x74756f65)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00397cbc();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00397d78();
          *(int *)(puVar26 + 5) = (int)qVar24;
          *puVar26 = psVar39;
          puVar26[1] = psVar40;
          return psVar39;
        }
        if ((param_2 == 0x1a) &&
           (lVar3._0_4_ = psVar14->cmd, lVar3._4_4_ = psVar14->cmdsize,
           ((lVar3 == 0x6572702d63707267 && *(long *)psVar14->segname == 0x70722d73756f6976) &&
           *(long *)(psVar14->segname + 8) == 0x706d657474612d63) &&
           (short)psVar14->vmaddr == 0x7374)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00396040();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_003980dc();
          *puVar26 = psVar39;
          *(int *)(puVar26 + 5) = (int)qVar24;
          *(int *)(puVar26 + 1) = (int)psVar40;
          return psVar39;
        }
        if ((param_2 == 0x16) &&
           (lVar4._0_4_ = psVar14->cmd, lVar4._4_4_ = psVar14->cmdsize,
           (lVar4 == 0x7465722d63707267 && *(long *)psVar14->segname == 0x62687375702d7972) &&
           *(long *)(psVar14->segname + 6) == 0x736d2d6b63616268)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00398224();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_003982e0();
          *(int *)(puVar26 + 5) = (int)qVar24;
          *puVar26 = psVar39;
          puVar26[1] = psVar40;
          return psVar39;
        }
        if ((param_2 == 10) &&
           (lVar30._0_4_ = psVar14->cmd, lVar30._4_4_ = psVar14->cmdsize,
           lVar30 == 0x6567612d72657375 && *(short *)psVar14->segname == 0x746e)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00398640();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00398600;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_02;
        }
        if ((param_2 == 0xc) &&
           (lVar31._0_4_ = psVar14->cmd, lVar31._4_4_ = psVar14->cmdsize,
           lVar31 == 0x73656d2d63707267 && *(int *)psVar14->segname == 0x65676173)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_003987dc();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_003987b4;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_03;
        }
        if ((param_2 == 4) && (psVar14->cmd == 0x74736f68)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_003989b8();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00398950;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_04;
        }
        if ((param_2 == 0x19) &&
           (lVar5._0_4_ = psVar14->cmd, lVar5._4_4_ = psVar14->cmdsize,
           ((lVar5 == 0x746e696f70646e65 && *(long *)psVar14->segname == 0x656d2d64616f6c2d) &&
           *(long *)(psVar14->segname + 8) == 0x69622d7363697274) && (char)psVar14->vmaddr == 'n'))
        {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00398b88();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00398b2c;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_05;
        }
        if ((param_2 == 0x15) &&
           (lVar6._0_4_ = psVar14->cmd, lVar6._4_4_ = psVar14->cmdsize,
           (lVar6 == 0x7265732d63707267 && *(long *)psVar14->segname == 0x746174732d726576) &&
           *(long *)(psVar14->segname + 5) == 0x6e69622d73746174)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00398d48();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00398d00;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_06;
        }
        if ((param_2 == 0xe) &&
           (lVar32._0_4_ = psVar14->cmd, lVar32._4_4_ = psVar14->cmdsize,
           lVar32 == 0x6172742d63707267 &&
           *(long *)((long)&psVar14->cmdsize + 2) == 0x6e69622d65636172)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_00398f08();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00398ec0;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_07;
        }
        if ((param_2 == 0xd) &&
           (lVar33._0_4_ = psVar14->cmd, lVar33._4_4_ = psVar14->cmdsize,
           lVar33 == 0x6761742d63707267 &&
           *(long *)((long)&psVar14->cmdsize + 1) == 0x6e69622d73676174)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          pppppuVar42 = (undefined8 *****)(puVar12 + -0x10);
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          param_1 = param_3;
          psVar41 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          psVar39 = (segment_command *)param_3->filesize;
          FUN_003990dc();
          *puVar26 = param_1;
          *(int *)(puVar26 + 5) = (int)psVar39;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          pcVar43 = FUN_00399080;
          psVar14 = param_1;
          __Unwind_Resume();
          puVar12 = puVar12 + -0x50;
          param_3 = psVar41;
          puVar26 = extraout_x8_08;
        }
        if ((param_2 == 0x13) &&
           (lVar7._0_4_ = psVar14->cmd, lVar7._4_4_ = psVar14->cmdsize,
           (lVar7 == 0x635f626c63707267 && *(long *)psVar14->segname == 0x74735f746e65696c) &&
           *(long *)(psVar14->segname + 3) == 0x73746174735f746e)) {
          *(undefined8 *)(puVar12 + -0x30) = unaff_x22;
          *(segment_command **)(puVar12 + -0x28) = psVar40;
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00399244();
          qVar24 = param_3->filesize;
          psVar39 = psVar40;
          FUN_00399290();
          *(int *)(puVar26 + 5) = (int)qVar24;
          *puVar26 = psVar39;
          puVar26[1] = psVar40;
          return psVar39;
        }
        if ((param_2 == 0xb) &&
           (lVar34._0_4_ = psVar14->cmd, lVar34._4_4_ = psVar14->cmdsize,
           lVar34 == 0x2d74736f632d626c && *(long *)((long)&psVar14->cmd + 3) == 0x6e69622d74736f63)
           ) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          psVar40 = param_3;
          FUN_00399554(puVar12 + -0x40);
          qVar24 = param_3->filesize;
          FUN_00399608();
          *puVar26 = psVar40;
          *(int *)(puVar26 + 5) = (int)qVar24;
          psVar40 = &segment_command_00000020;
          __Znwm();
          uVar44 = *(undefined8 *)(puVar12 + -0x40);
          psVar40->cmd = (int)uVar44;
          psVar40->cmdsize = (int)((ulong)uVar44 >> 0x20);
          uVar44 = *(undefined8 *)(puVar12 + -0x38);
          *(undefined8 *)(psVar40->segname + 8) = *(undefined8 *)(puVar12 + -0x30);
          *(undefined8 *)psVar40->segname = uVar44;
          psVar40->vmaddr = *(qword *)(puVar12 + -0x28);
          puVar26[1] = psVar40;
          return psVar40;
        }
        if ((param_2 == 8) &&
           (lVar37._0_4_ = psVar14->cmd, lVar37._4_4_ = psVar14->cmdsize,
           lVar37 == 0x6e656b6f742d626c)) {
          *(segment_command **)(puVar12 + -0x20) = psVar39;
          *(segment_command **)(puVar12 + -0x18) = param_1;
          *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
          *(code **)(puVar12 + -8) = pcVar43;
          *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
          psVar40 = param_3;
          FUN_003955d0(puVar12 + -0x48);
          qVar24 = param_3->filesize;
          FUN_00399b24();
          *puVar26 = psVar40;
          *(int *)(puVar26 + 5) = (int)qVar24;
          uVar44 = *(undefined8 *)(puVar12 + -0x48);
          uVar47 = *(undefined8 *)(puVar12 + -0x30);
          uVar45 = *(undefined8 *)(puVar12 + -0x38);
          puVar26[2] = *(undefined8 *)(puVar12 + -0x40);
          puVar26[1] = uVar44;
          puVar26[4] = uVar47;
          puVar26[3] = uVar45;
          if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
            return psVar40;
          }
          ___stack_chk_fail();
          FUN_0034b418(puVar12 + -0x48);
          __Unwind_Resume(psVar40);
          *(undefined1 **)(puVar12 + -0x60) = puVar12 + -0x10;
          *(code **)(puVar12 + -0x58) = FUN_00399b24;
          if ((bRam0000000000afac90 & 1) == 0) {
            iVar13 = 0xafac90;
            ___cxa_guard_acquire();
            if (iVar13 != 0) {
              uRam0000000000afac50 = 0;
              uRam0000000000afac58 = 0x3ff2b8;
              pcRam0000000000afac60 = FUN_00399bb4;
              pcRam0000000000afac68 = FUN_00395710;
              uRam0000000000afac70 = 0x399bdc;
              pcRam0000000000afac78 = "lb-token";
              uRam0000000000afac80 = 8;
              uRam0000000000afac88 = 0;
              ___cxa_guard_release(0xafac90);
            }
          }
          return (segment_command *)0xafac50;
        }
        plVar19 = (long *)(puVar12 + -0x70);
        *(segment_command **)(puVar12 + -0x20) = psVar39;
        *(segment_command **)(puVar12 + -0x18) = param_1;
        *(undefined8 ******)(puVar12 + -0x10) = pppppuVar42;
        *(code **)(puVar12 + -8) = pcVar43;
        *(undefined8 *)(puVar12 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
        func_0x003ec288(puVar12 + -0x48,psVar14,param_2);
        lVar23 = *(long *)param_3;
        qVar24 = param_3->vmaddr;
        uVar44 = *(undefined8 *)(param_3->segname + 8);
        *(undefined8 *)(puVar12 + -0x68) = *(undefined8 *)param_3->segname;
        *(long *)(puVar12 + -0x70) = lVar23;
        *(qword *)(puVar12 + -0x58) = qVar24;
        *(undefined8 *)(puVar12 + -0x60) = uVar44;
        param_3->segname[0] = '\0';
        param_3->segname[1] = '\0';
        param_3->segname[2] = '\0';
        param_3->segname[3] = '\0';
        param_3->segname[4] = '\0';
        param_3->segname[5] = '\0';
        param_3->segname[6] = '\0';
        param_3->segname[7] = '\0';
        param_3->cmd = 0;
        param_3->cmdsize = 0;
        param_3->vmaddr = 0;
        param_3->segname[8] = '\0';
        param_3->segname[9] = '\0';
        param_3->segname[10] = '\0';
        param_3->segname[0xb] = '\0';
        param_3->segname[0xc] = '\0';
        param_3->segname[0xd] = '\0';
        param_3->segname[0xe] = '\0';
        param_3->segname[0xf] = '\0';
        pqVar18 = (qword *)(puVar12 + -0x48);
        FUN_00399d0c(puVar26);
        plVar16 = *(long **)(puVar12 + -0x70);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar16) {
          do {
            lVar23 = *plVar16;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar11) {
              *plVar16 = lVar23 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar23 + -1 == 0) {
            (*(code *)plVar16[1])();
          }
        }
        psVar39 = *(segment_command **)(puVar12 + -0x48);
        if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar39) {
          do {
            lVar23 = *(long *)psVar39;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar39,0x10);
            if (bVar11) {
              *(long *)psVar39 = lVar23 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)psVar39->segname)();
          }
        }
        if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar12 + -0x28)) {
          return psVar39;
        }
        ___stack_chk_fail();
        if ((int)pqVar18 != 0) {
          func_0x0040cf10();
          FUN_0034b418(puVar12 + -0x70);
          FUN_0034b418(puVar12 + -0x48);
        }
        psVar14 = psVar39;
        __Unwind_Resume();
        *(undefined8 *)(puVar12 + -0xa0) = unaff_x22;
        *(segment_command **)(puVar12 + -0x98) = psVar40;
        *(segment_command **)(puVar12 + -0x90) = param_3;
        *(segment_command **)(puVar12 + -0x88) = psVar39;
        *(undefined1 **)(puVar12 + -0x80) = puVar12 + -0x10;
        *(code **)(puVar12 + -0x78) = FUN_00399d0c;
        qVar24 = *pqVar18;
        if (qVar24 == 0) {
          qVar46 = (long)pqVar18 + 9;
          qVar38 = (qword)(byte)pqVar18[1];
        }
        else {
          qVar38 = pqVar18[1];
          qVar46 = pqVar18[2];
        }
        if (qVar38 < 4) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ulong)(*(int *)(qVar38 + qVar46 + -4) == 0x6e69622d);
        }
        *(undefined **)psVar14 = &UNK_009dee20 + uVar22 * 0x40;
        if (qVar24 == 0) {
          uVar20 = (uint)(byte)pqVar18[1];
        }
        else {
          uVar20 = (uint)pqVar18[1];
        }
        if (*plVar19 == 0) {
          uVar25 = (uint)*(byte *)(plVar19 + 1);
        }
        else {
          uVar25 = (uint)plVar19[1];
        }
        *(uint *)&psVar14->fileoff = uVar25 + uVar20 + 0x20;
        pqVar17 = &segment_command_00000020.vmsize;
        __Znwm();
        qVar24 = *pqVar18;
        qVar38 = pqVar18[3];
        qVar46 = pqVar18[2];
        pqVar17[1] = pqVar18[1];
        *pqVar17 = qVar24;
        pqVar17[3] = qVar38;
        pqVar17[2] = qVar46;
        pqVar18[1] = 0;
        *pqVar18 = 0;
        pqVar18[3] = 0;
        pqVar18[2] = 0;
        lVar23 = *plVar19;
        lVar49 = plVar19[3];
        lVar48 = plVar19[2];
        pqVar17[5] = plVar19[1];
        pqVar17[4] = lVar23;
        pqVar17[7] = lVar49;
        pqVar17[6] = lVar48;
        plVar19[1] = 0;
        *plVar19 = 0;
        plVar19[3] = 0;
        plVar19[2] = 0;
        *(qword **)psVar14->segname = pqVar17;
        return psVar14;
      }
      uVar22 = (long)*(segment_command **)(psVar39->segname + 8) - (long)psVar41;
      psVar36 = (segment_command *)(uVar22 * 2);
      if (psVar36 < psVar14 || (long)psVar36 - (long)psVar14 == 0) {
        psVar36 = psVar14;
      }
      if (0x3ffffffffffffffe < uVar22) {
        psVar36 = (segment_command *)0x7fffffffffffffff;
      }
      if (psVar36 == (segment_command *)0x0) {
        psVar14 = (segment_command *)0x0;
      }
      else {
        psVar14 = psVar36;
        __Znwm();
      }
      psVar15 = (segment_command *)((long)psVar14 + ((long)psVar40 - (long)psVar41));
      puVar12 = (undefined1 *)((long)&psVar15->cmd + 1);
      *(char *)&psVar15->cmd = (char)uVar8;
      if (psVar40 != psVar41) {
        pcVar27 = psVar40->segname + (~(ulong)psVar41 - 8);
        do {
          psVar40 = (segment_command *)((long)&psVar40[-1].flags + 3);
          psVar14->segname[(long)(pcVar27 + -8)] = (char)psVar40->cmd;
          pcVar27 = pcVar27 + -1;
        } while (psVar40 != psVar41);
        psVar40 = *(segment_command **)psVar39;
        psVar15 = psVar14;
      }
      *(segment_command **)psVar39 = psVar15;
      *(undefined1 **)psVar39->segname = puVar12;
      *(char **)(psVar39->segname + 8) = psVar36->segname + (long)(psVar14->segname + -0x10);
      if (psVar40 != (segment_command *)0x0) {
        __ZdlPv(psVar40);
        psVar15 = psVar40;
      }
    }
    *(undefined1 **)psVar39->segname = puVar12;
    psVar21 = *(short **)param_1->segname;
    param_1 = psVar15;
  }
LAB_00395498:
  *psVar21 = sVar9;
  return param_1;
}



/* Entry: 003954c8; end: 003954fb;  */

segment_command *
FUN_003954c8(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  segment_command *psVar11;
  long *plVar12;
  segment_command *psVar13;
  qword *pqVar14;
  qword *pqVar15;
  long *plVar16;
  uint uVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long lVar18;
  qword qVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  qword qVar30;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar31;
  undefined8 uVar32;
  qword qVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 5) && (param_2->cmd == 0x7461703a && (char)param_2->cmdsize == 'h')) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00395680();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00395594;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar13;
    param_1 = extraout_x8;
  }
  if ((param_3 == 10) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x69726f687475613a && *(short *)param_2->segname == 0x7974)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00395b54();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00395b1c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x74656d3a && *(int *)((long)&param_2->cmd + 3) == 0x646f6874)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00395cac();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00395d68();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6174733a && *(int *)((long)&param_2->cmd + 3) == 0x73757461)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396040();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003960fc();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6863733a && *(int *)((long)&param_2->cmd + 3) == 0x656d6568)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396410();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003964ec();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     lVar35 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_003967d8();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396894();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396b7c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396c38();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(char *)(param_1 + 1) = (char)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xd) &&
     (lVar36._0_4_ = param_2->cmd, lVar36._4_4_ = param_2->cmdsize,
     lVar36 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396f4c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397008();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1e) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396f4c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397320();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x14) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00397484();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_0039755c();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    psVar11 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar11->cmd = (char)psVar13;
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_003978c8();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397984();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00397cbc();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1a) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396040();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003980dc();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x16) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00398224();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 10) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0xc) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0x19) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     ((lVar5 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0x15) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0xe) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_06;
  }
  if ((param_3 == 0xd) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_07;
  }
  if ((param_3 == 0x13) &&
     (lVar7._0_4_ = param_2->cmd, lVar7._4_4_ = param_2->cmdsize,
     (lVar7 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00399244();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize,
     lVar27 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar19 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar13;
    *(int *)(param_1 + 5) = (int)qVar19;
    psVar13 = &segment_command_00000020;
    __Znwm();
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar13->cmd = (int)uVar31;
    psVar13->cmdsize = (int)((ulong)uVar31 >> 0x20);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar13->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar13->segname = uVar31;
    psVar13->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar13;
    return psVar13;
  }
  if ((param_3 == 8) &&
     (lVar29._0_4_ = param_2->cmd, lVar29._4_4_ = param_2->cmdsize, lVar29 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar19 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar13;
    *(int *)(param_1 + 5) = (int)qVar19;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar13);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar10 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar10 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar16 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar18 = *(long *)param_4;
  qVar19 = param_4->vmaddr;
  uVar31 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar18;
  *(qword *)((long)register0x00000008 + -0x58) = qVar19;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar31;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar15 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar12 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
    do {
      lVar18 = *plVar12;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar18 + -1 == 0) {
      (*(code *)plVar12[1])();
    }
  }
  psVar13 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar13) {
    do {
      lVar18 = *(long *)psVar13;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar13,0x10);
      if (bVar9) {
        *(long *)psVar13 = lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)psVar13->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar13;
  }
  ___stack_chk_fail();
  if ((int)pqVar15 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar11 = psVar13;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar13;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar19 = *pqVar15;
  if (qVar19 == 0) {
    qVar33 = (long)pqVar15 + 9;
    qVar30 = (qword)(byte)pqVar15[1];
  }
  else {
    qVar30 = pqVar15[1];
    qVar33 = pqVar15[2];
  }
  if (qVar30 < 4) {
    uVar28 = 0;
  }
  else {
    uVar28 = (ulong)(*(int *)(qVar30 + qVar33 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar11 = &UNK_009dee20 + uVar28 * 0x40;
  if (qVar19 == 0) {
    uVar17 = (uint)(byte)pqVar15[1];
  }
  else {
    uVar17 = (uint)pqVar15[1];
  }
  if (*plVar16 == 0) {
    uVar20 = (uint)*(byte *)(plVar16 + 1);
  }
  else {
    uVar20 = (uint)plVar16[1];
  }
  *(uint *)&psVar11->fileoff = uVar20 + uVar17 + 0x20;
  pqVar14 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar19 = *pqVar15;
  qVar30 = pqVar15[3];
  qVar33 = pqVar15[2];
  pqVar14[1] = pqVar15[1];
  *pqVar14 = qVar19;
  pqVar14[3] = qVar30;
  pqVar14[2] = qVar33;
  pqVar15[1] = 0;
  *pqVar15 = 0;
  pqVar15[3] = 0;
  pqVar15[2] = 0;
  lVar18 = *plVar16;
  lVar36 = plVar16[3];
  lVar35 = plVar16[2];
  pqVar14[5] = plVar16[1];
  pqVar14[4] = lVar18;
  pqVar14[7] = lVar36;
  pqVar14[6] = lVar35;
  plVar16[1] = 0;
  *plVar16 = 0;
  plVar16[3] = 0;
  plVar16[2] = 0;
  *(qword **)psVar11->segname = pqVar14;
  return psVar11;
}



/* Entry: 003954fc; end: 00395593;  */

segment_command *
FUN_003954fc(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined1 *puVar10;
  int iVar11;
  segment_command *psVar12;
  segment_command *psVar13;
  long *plVar14;
  segment_command *psVar15;
  qword *pqVar16;
  qword *pqVar17;
  segment_command *psVar18;
  long *plVar19;
  uint uVar20;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  qword qVar33;
  qword qVar34;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  qword qVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  qword qStack_70;
  segment_command *psStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar35 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar15 = param_2;
  FUN_003955d0(&uStack_48);
  qVar34 = param_2->filesize;
  FUN_00395680();
  *param_1 = psVar15;
  *(int *)(param_1 + 5) = (int)qVar34;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar15;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar36 = FUN_00395594;
  psVar12 = psVar15;
  __Unwind_Resume();
  puVar10 = auStack_50;
  puVar21 = extraout_x8;
  if ((param_3 == 10) &&
     (lVar22._0_4_ = psVar12->cmd, lVar22._4_4_ = psVar12->cmdsize, puVar10 = auStack_50,
     lVar22 == 0x69726f687475613a && *(short *)psVar12->segname == 0x7974)) {
    pcStack_58 = FUN_00395594;
    lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar18 = param_4;
    qStack_70 = qVar34;
    psStack_68 = psVar15;
    ppppuStack_60 = pppppuVar35;
    FUN_003955d0(&uStack_98);
    qVar34 = param_4->filesize;
    FUN_00395b54();
    *extraout_x8 = psVar13;
    *(int *)(extraout_x8 + 5) = (int)qVar34;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = uStack_80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar36 = FUN_00395b1c;
    psVar12 = psVar13;
    __Unwind_Resume();
    puVar10 = auStack_a0;
    param_4 = psVar18;
    puVar21 = extraout_x8_00;
    psVar15 = psVar13;
    pppppuVar35 = &ppppuStack_60;
  }
  if ((param_3 == 7) &&
     (psVar12->cmd == 0x74656d3a && *(int *)((long)&psVar12->cmd + 3) == 0x646f6874)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00395cac();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00395d68();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 7) &&
     (psVar12->cmd == 0x6174733a && *(int *)((long)&psVar12->cmd + 3) == 0x73757461)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396040();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_003960fc();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 7) &&
     (psVar12->cmd == 0x6863733a && *(int *)((long)&psVar12->cmd + 3) == 0x656d6568)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396410();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_003964ec();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 0xc) &&
     (lVar41._0_4_ = psVar12->cmd, lVar41._4_4_ = psVar12->cmdsize,
     lVar41 == 0x2d746e65746e6f63 && *(int *)psVar12->segname == 0x65707974)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_003967d8();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00396894();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 2) && ((short)psVar12->cmd == 0x6574)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396b7c();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00396c38();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(char *)(puVar21 + 1) = (char)psVar15;
    return psVar12;
  }
  if ((param_3 == 0xd) &&
     (lVar42._0_4_ = psVar12->cmd, lVar42._4_4_ = psVar12->cmdsize,
     lVar42 == 0x636e652d63707267 && *(long *)((long)&psVar12->cmdsize + 1) == 0x676e69646f636e65))
  {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396f4c();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00397008();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 0x1e) &&
     (lVar1._0_4_ = psVar12->cmd, lVar1._4_4_ = psVar12->cmdsize,
     ((lVar1 == 0x746e692d63707267 && *(long *)psVar12->segname == 0x6e652d6c616e7265) &&
     *(long *)(psVar12->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(psVar12->segname + 0xe) == 0x747365757165722d)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396f4c();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00397320();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 0x14) &&
     (lVar2._0_4_ = psVar12->cmd, lVar2._4_4_ = psVar12->cmdsize,
     (lVar2 == 0x6363612d63707267 && *(long *)psVar12->segname == 0x6f636e652d747065) &&
     *(int *)(psVar12->segname + 8) == 0x676e6964)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00397484();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_0039755c();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    psVar12 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar12->cmd = (char)psVar15;
    puVar21[1] = psVar12;
    return psVar12;
  }
  if ((param_3 == 0xb) &&
     (lVar24._0_4_ = psVar12->cmd, lVar24._4_4_ = psVar12->cmdsize,
     lVar24 == 0x6174732d63707267 && *(long *)((long)&psVar12->cmd + 3) == 0x7375746174732d63)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_003978c8();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00397984();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 0xc) &&
     (lVar25._0_4_ = psVar12->cmd, lVar25._4_4_ = psVar12->cmdsize,
     lVar25 == 0x6d69742d63707267 && *(int *)psVar12->segname == 0x74756f65)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00397cbc();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00397d78();
    *(int *)(puVar21 + 5) = (int)qVar34;
    *puVar21 = psVar12;
    puVar21[1] = psVar15;
    return psVar12;
  }
  if ((param_3 == 0x1a) &&
     (lVar3._0_4_ = psVar12->cmd, lVar3._4_4_ = psVar12->cmdsize,
     ((lVar3 == 0x6572702d63707267 && *(long *)psVar12->segname == 0x70722d73756f6976) &&
     *(long *)(psVar12->segname + 8) == 0x706d657474612d63) && (short)psVar12->vmaddr == 0x7374)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00396040();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_003980dc();
    *puVar21 = psVar12;
    *(int *)(puVar21 + 5) = (int)qVar34;
    *(int *)(puVar21 + 1) = (int)psVar15;
    return psVar12;
  }
  if ((param_3 == 0x16) &&
     (lVar4._0_4_ = psVar12->cmd, lVar4._4_4_ = psVar12->cmdsize,
     (lVar4 == 0x7465722d63707267 && *(long *)psVar12->segname == 0x62687375702d7972) &&
     *(long *)(psVar12->segname + 6) == 0x736d2d6b63616268)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00398224();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_003982e0();
    *(int *)(puVar21 + 5) = (int)qVar34;
    *puVar21 = psVar12;
    puVar21[1] = psVar15;
    return psVar12;
  }
  if ((param_3 == 10) &&
     (lVar26._0_4_ = psVar12->cmd, lVar26._4_4_ = psVar12->cmdsize,
     lVar26 == 0x6567612d72657375 && *(short *)psVar12->segname == 0x746e)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_00398640();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00398600;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_01;
  }
  if ((param_3 == 0xc) &&
     (lVar27._0_4_ = psVar12->cmd, lVar27._4_4_ = psVar12->cmdsize,
     lVar27 == 0x73656d2d63707267 && *(int *)psVar12->segname == 0x65676173)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_003987dc();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_003987b4;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_02;
  }
  if ((param_3 == 4) && (psVar12->cmd == 0x74736f68)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_003989b8();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00398950;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_03;
  }
  if ((param_3 == 0x19) &&
     (lVar5._0_4_ = psVar12->cmd, lVar5._4_4_ = psVar12->cmdsize,
     ((lVar5 == 0x746e696f70646e65 && *(long *)psVar12->segname == 0x656d2d64616f6c2d) &&
     *(long *)(psVar12->segname + 8) == 0x69622d7363697274) && (char)psVar12->vmaddr == 'n')) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_00398b88();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00398b2c;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_04;
  }
  if ((param_3 == 0x15) &&
     (lVar6._0_4_ = psVar12->cmd, lVar6._4_4_ = psVar12->cmdsize,
     (lVar6 == 0x7265732d63707267 && *(long *)psVar12->segname == 0x746174732d726576) &&
     *(long *)(psVar12->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_00398d48();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00398d00;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_05;
  }
  if ((param_3 == 0xe) &&
     (lVar28._0_4_ = psVar12->cmd, lVar28._4_4_ = psVar12->cmdsize,
     lVar28 == 0x6172742d63707267 && *(long *)((long)&psVar12->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_00398f08();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00398ec0;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_06;
  }
  if ((param_3 == 0xd) &&
     (lVar29._0_4_ = psVar12->cmd, lVar29._4_4_ = psVar12->cmdsize,
     lVar29 == 0x6761742d63707267 && *(long *)((long)&psVar12->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    pppppuVar35 = (undefined8 *****)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    psVar13 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_003990dc();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    pcVar36 = FUN_00399080;
    psVar12 = psVar15;
    __Unwind_Resume();
    puVar10 = puVar10 + -0x50;
    param_4 = psVar13;
    puVar21 = extraout_x8_07;
  }
  if ((param_3 == 0x13) &&
     (lVar7._0_4_ = psVar12->cmd, lVar7._4_4_ = psVar12->cmdsize,
     (lVar7 == 0x635f626c63707267 && *(long *)psVar12->segname == 0x74735f746e65696c) &&
     *(long *)(psVar12->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00399244();
    qVar34 = param_4->filesize;
    psVar12 = psVar15;
    FUN_00399290();
    *(int *)(puVar21 + 5) = (int)qVar34;
    *puVar21 = psVar12;
    puVar21[1] = psVar15;
    return psVar12;
  }
  if ((param_3 == 0xb) &&
     (lVar30._0_4_ = psVar12->cmd, lVar30._4_4_ = psVar12->cmdsize,
     lVar30 == 0x2d74736f632d626c && *(long *)((long)&psVar12->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    psVar15 = param_4;
    FUN_00399554(puVar10 + -0x40);
    qVar34 = param_4->filesize;
    FUN_00399608();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    psVar15 = &segment_command_00000020;
    __Znwm();
    uVar37 = *(undefined8 *)(puVar10 + -0x40);
    psVar15->cmd = (int)uVar37;
    psVar15->cmdsize = (int)((ulong)uVar37 >> 0x20);
    uVar37 = *(undefined8 *)(puVar10 + -0x38);
    *(undefined8 *)(psVar15->segname + 8) = *(undefined8 *)(puVar10 + -0x30);
    *(undefined8 *)psVar15->segname = uVar37;
    psVar15->vmaddr = *(qword *)(puVar10 + -0x28);
    puVar21[1] = psVar15;
    return psVar15;
  }
  if ((param_3 == 8) &&
     (lVar32._0_4_ = psVar12->cmd, lVar32._4_4_ = psVar12->cmdsize, lVar32 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar10 + -0x20) = qVar34;
    *(segment_command **)(puVar10 + -0x18) = psVar15;
    *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
    *(code **)(puVar10 + -8) = pcVar36;
    *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar15 = param_4;
    FUN_003955d0(puVar10 + -0x48);
    qVar34 = param_4->filesize;
    FUN_00399b24();
    *puVar21 = psVar15;
    *(int *)(puVar21 + 5) = (int)qVar34;
    uVar37 = *(undefined8 *)(puVar10 + -0x48);
    uVar40 = *(undefined8 *)(puVar10 + -0x30);
    uVar38 = *(undefined8 *)(puVar10 + -0x38);
    puVar21[2] = *(undefined8 *)(puVar10 + -0x40);
    puVar21[1] = uVar37;
    puVar21[4] = uVar40;
    puVar21[3] = uVar38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
      return psVar15;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar10 + -0x48);
    __Unwind_Resume(psVar15);
    *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x10;
    *(code **)(puVar10 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar11 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar19 = (long *)(puVar10 + -0x70);
  *(qword *)(puVar10 + -0x20) = qVar34;
  *(segment_command **)(puVar10 + -0x18) = psVar15;
  *(undefined8 ******)(puVar10 + -0x10) = pppppuVar35;
  *(code **)(puVar10 + -8) = pcVar36;
  *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar10 + -0x48,psVar12,param_3);
  lVar22 = *(long *)param_4;
  qVar34 = param_4->vmaddr;
  uVar37 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar10 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar10 + -0x70) = lVar22;
  *(qword *)(puVar10 + -0x58) = qVar34;
  *(undefined8 *)(puVar10 + -0x60) = uVar37;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar17 = (qword *)(puVar10 + -0x48);
  FUN_00399d0c(puVar21);
  plVar14 = *(long **)(puVar10 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
    do {
      lVar22 = *plVar14;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 + -1 == 0) {
      (*(code *)plVar14[1])();
    }
  }
  psVar15 = *(segment_command **)(puVar10 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar15) {
    do {
      lVar22 = *(long *)psVar15;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
      if (bVar9) {
        *(long *)psVar15 = lVar22 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)psVar15->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar10 + -0x28)) {
    return psVar15;
  }
  ___stack_chk_fail();
  if ((int)pqVar17 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar10 + -0x70);
    FUN_0034b418(puVar10 + -0x48);
  }
  psVar12 = psVar15;
  __Unwind_Resume();
  *(undefined8 *)(puVar10 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar10 + -0x98) = unaff_x21;
  *(segment_command **)(puVar10 + -0x90) = param_4;
  *(segment_command **)(puVar10 + -0x88) = psVar15;
  *(undefined1 **)(puVar10 + -0x80) = puVar10 + -0x10;
  *(code **)(puVar10 + -0x78) = FUN_00399d0c;
  qVar34 = *pqVar17;
  if (qVar34 == 0) {
    qVar39 = (long)pqVar17 + 9;
    qVar33 = (qword)(byte)pqVar17[1];
  }
  else {
    qVar33 = pqVar17[1];
    qVar39 = pqVar17[2];
  }
  if (qVar33 < 4) {
    uVar31 = 0;
  }
  else {
    uVar31 = (ulong)(*(int *)(qVar33 + qVar39 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar12 = &UNK_009dee20 + uVar31 * 0x40;
  if (qVar34 == 0) {
    uVar20 = (uint)(byte)pqVar17[1];
  }
  else {
    uVar20 = (uint)pqVar17[1];
  }
  if (*plVar19 == 0) {
    uVar23 = (uint)*(byte *)(plVar19 + 1);
  }
  else {
    uVar23 = (uint)plVar19[1];
  }
  *(uint *)&psVar12->fileoff = uVar23 + uVar20 + 0x20;
  pqVar16 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar34 = *pqVar17;
  qVar33 = pqVar17[3];
  qVar39 = pqVar17[2];
  pqVar16[1] = pqVar17[1];
  *pqVar16 = qVar34;
  pqVar16[3] = qVar33;
  pqVar16[2] = qVar39;
  pqVar17[1] = 0;
  *pqVar17 = 0;
  pqVar17[3] = 0;
  pqVar17[2] = 0;
  lVar22 = *plVar19;
  lVar42 = plVar19[3];
  lVar41 = plVar19[2];
  pqVar16[5] = plVar19[1];
  pqVar16[4] = lVar22;
  pqVar16[7] = lVar42;
  pqVar16[6] = lVar41;
  plVar19[1] = 0;
  *plVar19 = 0;
  plVar19[3] = 0;
  plVar19[2] = 0;
  *(qword **)psVar12->segname = pqVar16;
  return psVar12;
}



/* Entry: 00395594; end: 003955cf;  */

segment_command *
FUN_00395594(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  segment_command *psVar11;
  long *plVar12;
  segment_command *psVar13;
  qword *pqVar14;
  qword *pqVar15;
  long *plVar16;
  uint uVar17;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  long lVar18;
  qword qVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  qword qVar30;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar31;
  undefined8 uVar32;
  qword qVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_3 == 10) &&
     (lVar18._0_4_ = param_2->cmd, lVar18._4_4_ = param_2->cmdsize,
     lVar18 == 0x69726f687475613a && *(short *)param_2->segname == 0x7974)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00395b54();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = uStack_30;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00395b1c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar13;
    param_1 = extraout_x8;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x74656d3a && *(int *)((long)&param_2->cmd + 3) == 0x646f6874)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00395cac();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00395d68();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6174733a && *(int *)((long)&param_2->cmd + 3) == 0x73757461)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396040();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003960fc();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6863733a && *(int *)((long)&param_2->cmd + 3) == 0x656d6568)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396410();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003964ec();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     lVar35 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_003967d8();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396894();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396b7c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396c38();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(char *)(param_1 + 1) = (char)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xd) &&
     (lVar36._0_4_ = param_2->cmd, lVar36._4_4_ = param_2->cmdsize,
     lVar36 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396f4c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397008();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1e) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     ((lVar1 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396f4c();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397320();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x14) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     (lVar2 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00397484();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_0039755c();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    psVar11 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar11->cmd = (char)psVar13;
    param_1[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_003978c8();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397984();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00397cbc();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1a) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     ((lVar3 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00396040();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003980dc();
    *param_1 = psVar11;
    *(int *)(param_1 + 5) = (int)qVar19;
    *(int *)(param_1 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x16) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     (lVar4 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00398224();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 10) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 0xc) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x19) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     ((lVar5 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0x15) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xe) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0xd) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar13;
    param_1 = extraout_x8_06;
  }
  if ((param_3 == 0x13) &&
     (lVar7._0_4_ = param_2->cmd, lVar7._4_4_ = param_2->cmdsize,
     (lVar7 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00399244();
    qVar19 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar19;
    *param_1 = psVar11;
    param_1[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar27._0_4_ = param_2->cmd, lVar27._4_4_ = param_2->cmdsize,
     lVar27 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar13 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar19 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar13;
    *(int *)(param_1 + 5) = (int)qVar19;
    psVar13 = &segment_command_00000020;
    __Znwm();
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar13->cmd = (int)uVar31;
    psVar13->cmdsize = (int)((ulong)uVar31 >> 0x20);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar13->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar13->segname = uVar31;
    psVar13->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar13;
    return psVar13;
  }
  if ((param_3 == 8) &&
     (lVar29._0_4_ = param_2->cmd, lVar29._4_4_ = param_2->cmdsize, lVar29 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar19 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar13;
    *(int *)(param_1 + 5) = (int)qVar19;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar31;
    param_1[4] = uVar34;
    param_1[3] = uVar32;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar13);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar10 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar10 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar16 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar18 = *(long *)param_4;
  qVar19 = param_4->vmaddr;
  uVar31 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar18;
  *(qword *)((long)register0x00000008 + -0x58) = qVar19;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar31;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar15 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar12 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
    do {
      lVar18 = *plVar12;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar18 + -1 == 0) {
      (*(code *)plVar12[1])();
    }
  }
  psVar13 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar13) {
    do {
      lVar18 = *(long *)psVar13;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar13,0x10);
      if (bVar9) {
        *(long *)psVar13 = lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)psVar13->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar13;
  }
  ___stack_chk_fail();
  if ((int)pqVar15 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar11 = psVar13;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar13;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar19 = *pqVar15;
  if (qVar19 == 0) {
    qVar33 = (long)pqVar15 + 9;
    qVar30 = (qword)(byte)pqVar15[1];
  }
  else {
    qVar30 = pqVar15[1];
    qVar33 = pqVar15[2];
  }
  if (qVar30 < 4) {
    uVar28 = 0;
  }
  else {
    uVar28 = (ulong)(*(int *)(qVar30 + qVar33 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar11 = &UNK_009dee20 + uVar28 * 0x40;
  if (qVar19 == 0) {
    uVar17 = (uint)(byte)pqVar15[1];
  }
  else {
    uVar17 = (uint)pqVar15[1];
  }
  if (*plVar16 == 0) {
    uVar20 = (uint)*(byte *)(plVar16 + 1);
  }
  else {
    uVar20 = (uint)plVar16[1];
  }
  *(uint *)&psVar11->fileoff = uVar20 + uVar17 + 0x20;
  pqVar14 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar19 = *pqVar15;
  qVar30 = pqVar15[3];
  qVar33 = pqVar15[2];
  pqVar14[1] = pqVar15[1];
  *pqVar14 = qVar19;
  pqVar14[3] = qVar30;
  pqVar14[2] = qVar33;
  pqVar15[1] = 0;
  *pqVar15 = 0;
  pqVar15[3] = 0;
  pqVar15[2] = 0;
  lVar18 = *plVar16;
  lVar36 = plVar16[3];
  lVar35 = plVar16[2];
  pqVar14[5] = plVar16[1];
  pqVar14[4] = lVar18;
  pqVar14[7] = lVar36;
  pqVar14[6] = lVar35;
  plVar16[1] = 0;
  *plVar16 = 0;
  plVar16[3] = 0;
  plVar16[2] = 0;
  *(qword **)psVar11->segname = pqVar14;
  return psVar11;
}



/* Entry: 003955d0; end: 0039567f;  */

long * FUN_003955d0(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034b760(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar5 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa618 & 1) == 0) {
    iVar3 = 0xafa618;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam0000000000afa5d8 = 0;
      uRam0000000000afa5e0 = 0x3ff2b8;
      pcRam0000000000afa5e8 = FUN_003957e0;
      pcRam0000000000afa5f0 = FUN_00395710;
      pcRam0000000000afa5f8 = FUN_00395908;
      pcRam0000000000afa600 = ":path";
      uRam0000000000afa608 = 5;
      uRam0000000000afa610 = 0;
      ___cxa_guard_release(0xafa618);
    }
  }
  return (long *)0xafa5d8;
}



/* Entry: 00395680; end: 0039570f;  */

undefined8 FUN_00395680(void)

{
  int iVar1;
  
  if ((bRam0000000000afa618 & 1) == 0) {
    iVar1 = 0xafa618;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa5d8 = 0;
      uRam0000000000afa5e0 = 0x3ff2b8;
      pcRam0000000000afa5e8 = FUN_003957e0;
      pcRam0000000000afa5f0 = FUN_00395710;
      pcRam0000000000afa5f8 = FUN_00395908;
      pcRam0000000000afa600 = ":path";
      uRam0000000000afa608 = 5;
      uRam0000000000afa610 = 0;
      ___cxa_guard_release(0xafa618);
    }
  }
  return 0xafa5d8;
}



/* Entry: 00395710; end: 003957df;  */

undefined1  [16] FUN_00395710(undefined8 *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 extraout_x8;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 *puStack_180;
  ulong uStack_178;
  byte bStack_169;
  long *aplStack_168 [4];
  long lStack_148;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_90;
  undefined8 uStack_88;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_88 = param_1[1];
  plStack_90 = (long *)*param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034b760(&uStack_70,&plStack_90);
  uVar9 = uStack_58;
  uVar8 = uStack_60;
  uVar7 = uStack_68;
  uVar14 = uStack_70;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  *(undefined8 *)(param_4 + 8) = uVar14;
  *(undefined8 *)(param_4 + 0x20) = uVar9;
  *(undefined8 *)(param_4 + 0x18) = uVar8;
  plVar10 = plStack_90;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar15 = *plStack_90;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar5) {
        *plStack_90 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = plVar10;
    return auVar16;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
  }
  __Unwind_Resume();
  puVar1 = param_2 + 0x74;
  uVar3 = *param_2;
  *param_2 = uVar3 | 1;
  if ((uVar3 & 1) == 0) {
    param_2[0x76] = 0;
    param_2[0x77] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x7a] = 0;
    param_2[0x7b] = 0;
    param_2[0x78] = 0;
    param_2[0x79] = 0;
  }
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_110,plVar10);
  uVar8 = uStack_f8;
  uVar7 = uStack_100;
  uVar14 = uStack_108;
  plVar12 = plStack_110;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  plVar11 = *(long **)puVar1;
  uStack_e8 = *(undefined8 *)(param_2 + 0x78);
  uStack_f0 = *(undefined8 *)(param_2 + 0x76);
  uStack_e0 = *(undefined8 *)(param_2 + 0x7a);
  *(long **)puVar1 = plVar12;
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  *(undefined8 *)(param_2 + 0x76) = uVar14;
  *(undefined8 *)(param_2 + 0x7a) = uVar8;
  uStack_d0 = uStack_f0;
  uStack_c8 = uStack_e8;
  uStack_c0 = uStack_e0;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      lVar15 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  plVar12 = plStack_110;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_110) {
    do {
      lVar15 = *plStack_110;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar5) {
        *plStack_110 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar17._8_8_ = plVar10;
    auVar17._0_8_ = plVar12;
    return auVar17;
  }
  ___stack_chk_fail();
  if ((int)plVar10 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar14 = 5;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_168,plVar12);
  pplVar13 = aplStack_168;
  FUN_00395a64(pplVar13);
  FUN_0035d0e4(&puStack_180,pplVar13,uVar14);
  ppuVar6 = (undefined1 **)puStack_180;
  if (-1 < (char)bStack_169) {
    uStack_178 = (ulong)bStack_169;
    ppuVar6 = &puStack_180;
  }
  uVar14 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_178);
  if ((char)bStack_169 < '\0') {
    __ZdlPv(puStack_180);
  }
  plVar10 = aplStack_168[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_168[0]) {
    do {
      lVar15 = *aplStack_168[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_168[0],0x10);
      if (bVar5) {
        *aplStack_168[0] = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)aplStack_168[0][1])();
      plVar10 = aplStack_168[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    auVar18._8_8_ = uVar14;
    auVar18._0_8_ = plVar10;
    return auVar18;
  }
  ___stack_chk_fail();
  if ((int)uVar14 != 0) {
    func_0x0040cf10();
    if ((char)bStack_169 < '\0') {
      __ZdlPv(puStack_180);
    }
    FUN_0034b418(aplStack_168);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar15 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar15 = plVar10[2];
  }
  auVar19._8_8_ = uVar2;
  auVar19._0_8_ = lVar15;
  return auVar19;
}



/* Entry: 003957e0; end: 00395807;  */

undefined1  [16] FUN_003957e0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x74;
  uVar3 = *param_2;
  *param_2 = uVar3 | 1;
  if ((uVar3 & 1) == 0) {
    param_2[0x76] = 0;
    param_2[0x77] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x7a] = 0;
    param_2[0x7b] = 0;
    param_2[0x78] = 0;
    param_2[0x79] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x78);
  uStack_60 = *(undefined8 *)(param_2 + 0x76);
  uStack_50 = *(undefined8 *)(param_2 + 0x7a);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  *(undefined8 *)(param_2 + 0x76) = uVar12;
  *(undefined8 *)(param_2 + 0x7a) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_00395a64(pplVar11);
  FUN_0035d0e4(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 00395808; end: 00395907;  */

undefined1  [16] FUN_00395808(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_2);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar10 = uStack_78;
  plVar8 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar7 = (long *)*param_1;
  uStack_58 = param_1[2];
  uStack_60 = param_1[1];
  uStack_50 = param_1[3];
  *param_1 = plVar8;
  param_1[2] = uVar5;
  param_1[1] = uVar10;
  param_1[3] = uVar6;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plVar7[1])();
    }
  }
  plVar8 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = plVar8;
    return auVar12;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar10 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar8);
  pplVar9 = aplStack_d8;
  FUN_00395a64(pplVar9);
  FUN_0035d0e4(&puStack_f0,pplVar9,uVar10);
  ppuVar4 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar4 = &puStack_f0;
  }
  uVar10 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar4,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar8 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar11 = *aplStack_d8[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar3) {
        *aplStack_d8[0] = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar8 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = plVar8;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)uVar10 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar8[1] & 0xff;
  lVar11 = (long)plVar8 + 9;
  if (*plVar8 != 0) {
    uVar1 = plVar8[1];
    lVar11 = plVar8[2];
  }
  auVar14._8_8_ = uVar1;
  auVar14._0_8_ = lVar11;
  return auVar14;
}



/* Entry: 00395908; end: 0039592b;  */

undefined1  [16] FUN_00395908(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  long *aplStack_58 [4];
  long lStack_38;
  
  uVar7 = 5;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_58,param_2);
  pplVar5 = aplStack_58;
  FUN_00395a64(pplVar5);
  FUN_0035d0e4(&puStack_70,pplVar5,uVar7);
  ppuVar4 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar4 = &puStack_70;
  }
  uVar7 = 5;
  FUN_003ff220(param_1,":path",5,ppuVar4,uStack_68);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  plVar6 = aplStack_58[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_58[0]) {
    do {
      lVar8 = *aplStack_58[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar3) {
        *aplStack_58[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
      plVar6 = aplStack_58[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((int)uVar7 != 0) {
      func_0x0040cf10();
      if ((char)bStack_59 < '\0') {
        __ZdlPv(puStack_70);
      }
      FUN_0034b418(aplStack_58);
    }
    __Unwind_Resume();
    uVar1 = plVar6[1] & 0xff;
    lVar8 = (long)plVar6 + 9;
    if (*plVar6 != 0) {
      uVar1 = plVar6[1];
      lVar8 = plVar6[2];
    }
    auVar10._8_8_ = uVar1;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 0039592c; end: 00395a63;  */

undefined1  [16]
FUN_0039592c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            code *param_5,code *param_6)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  long *aplStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar7 = param_3;
  (*param_5)(aplStack_58,param_4);
  pplVar5 = aplStack_58;
  (*param_6)(pplVar5);
  FUN_0035d0e4(&puStack_70,pplVar5,uVar7);
  ppuVar4 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar4 = &puStack_70;
  }
  FUN_003ff220(param_1,param_2,param_3,ppuVar4,uStack_68);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  plVar6 = aplStack_58[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_58[0]) {
    do {
      lVar8 = *aplStack_58[0];
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar3) {
        *aplStack_58[0] = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
      plVar6 = aplStack_58[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10();
      if ((char)bStack_59 < '\0') {
        __ZdlPv(puStack_70);
      }
      FUN_0034b418(aplStack_58);
    }
    __Unwind_Resume();
    uVar1 = plVar6[1] & 0xff;
    lVar8 = (long)plVar6 + 9;
    if (*plVar6 != 0) {
      uVar1 = plVar6[1];
      lVar8 = plVar6[2];
    }
    auVar10._8_8_ = uVar1;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
  auVar9._8_8_ = param_3;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 00395a64; end: 00395a83;  */

undefined1  [16] FUN_00395a64(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1] & 0xff;
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    lVar2 = param_1[2];
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 00395a84; end: 00395b1b;  */

segment_command *
FUN_00395a84(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined1 *puVar9;
  int iVar10;
  segment_command *psVar11;
  long *plVar12;
  segment_command *psVar13;
  qword *pqVar14;
  qword *pqVar15;
  segment_command *psVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  qword qVar31;
  qword qVar32;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  qword qVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pppppuVar33 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  psVar13 = param_2;
  FUN_003955d0(&uStack_48);
  qVar32 = param_2->filesize;
  FUN_00395b54();
  *param_1 = psVar13;
  *(int *)(param_1 + 5) = (int)qVar32;
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  param_1[4] = uStack_30;
  param_1[3] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return psVar13;
  }
  ___stack_chk_fail();
  FUN_0034b418(&uStack_48);
  pcVar34 = FUN_00395b1c;
  psVar11 = psVar13;
  __Unwind_Resume();
  if ((param_3 == 7) &&
     (psVar11->cmd == 0x74656d3a && *(int *)((long)&psVar11->cmd + 3) == 0x646f6874)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00395cac();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00395d68();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (psVar11->cmd == 0x6174733a && *(int *)((long)&psVar11->cmd + 3) == 0x73757461)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396040();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003960fc();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 7) &&
     (psVar11->cmd == 0x6863733a && *(int *)((long)&psVar11->cmd + 3) == 0x656d6568)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396410();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003964ec();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar20._0_4_ = psVar11->cmd, lVar20._4_4_ = psVar11->cmdsize,
     lVar20 == 0x2d746e65746e6f63 && *(int *)psVar11->segname == 0x65707974)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_003967d8();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396894();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 2) && ((short)psVar11->cmd == 0x6574)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396b7c();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00396c38();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(char *)(extraout_x8 + 1) = (char)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xd) &&
     (lVar39._0_4_ = psVar11->cmd, lVar39._4_4_ = psVar11->cmdsize,
     lVar39 == 0x636e652d63707267 && *(long *)((long)&psVar11->cmdsize + 1) == 0x676e69646f636e65))
  {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396f4c();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397008();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1e) &&
     (lVar40._0_4_ = psVar11->cmd, lVar40._4_4_ = psVar11->cmdsize,
     ((lVar40 == 0x746e692d63707267 && *(long *)psVar11->segname == 0x6e652d6c616e7265) &&
     *(long *)(psVar11->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(psVar11->segname + 0xe) == 0x747365757165722d)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396f4c();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397320();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x14) &&
     (lVar1._0_4_ = psVar11->cmd, lVar1._4_4_ = psVar11->cmdsize,
     (lVar1 == 0x6363612d63707267 && *(long *)psVar11->segname == 0x6f636e652d747065) &&
     *(int *)(psVar11->segname + 8) == 0x676e6964)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00397484();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_0039755c();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    psVar11 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar11->cmd = (char)psVar13;
    extraout_x8[1] = psVar11;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar22._0_4_ = psVar11->cmd, lVar22._4_4_ = psVar11->cmdsize,
     lVar22 == 0x6174732d63707267 && *(long *)((long)&psVar11->cmd + 3) == 0x7375746174732d63)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_003978c8();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397984();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0xc) &&
     (lVar23._0_4_ = psVar11->cmd, lVar23._4_4_ = psVar11->cmdsize,
     lVar23 == 0x6d69742d63707267 && *(int *)psVar11->segname == 0x74756f65)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00397cbc();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00397d78();
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *extraout_x8 = psVar11;
    extraout_x8[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0x1a) &&
     (lVar2._0_4_ = psVar11->cmd, lVar2._4_4_ = psVar11->cmdsize,
     ((lVar2 == 0x6572702d63707267 && *(long *)psVar11->segname == 0x70722d73756f6976) &&
     *(long *)(psVar11->segname + 8) == 0x706d657474612d63) && (short)psVar11->vmaddr == 0x7374)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00396040();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003980dc();
    *extraout_x8 = psVar11;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *(int *)(extraout_x8 + 1) = (int)psVar13;
    return psVar11;
  }
  if ((param_3 == 0x16) &&
     (lVar3._0_4_ = psVar11->cmd, lVar3._4_4_ = psVar11->cmdsize,
     (lVar3 == 0x7465722d63707267 && *(long *)psVar11->segname == 0x62687375702d7972) &&
     *(long *)(psVar11->segname + 6) == 0x736d2d6b63616268)) {
    pcStack_58 = FUN_00395b1c;
    psVar13 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_00398224();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_003982e0();
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    *extraout_x8 = psVar11;
    extraout_x8[1] = psVar13;
    return psVar11;
  }
  puVar9 = auStack_50;
  puVar19 = extraout_x8;
  if ((param_3 == 10) &&
     (lVar24._0_4_ = psVar11->cmd, lVar24._4_4_ = psVar11->cmdsize, puVar9 = auStack_50,
     lVar24 == 0x6567612d72657375 && *(short *)psVar11->segname == 0x746e)) {
    pcStack_58 = FUN_00395b1c;
    lVar20 = *(long *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    ppppuStack_60 = pppppuVar33;
    FUN_003955d0(&uStack_98);
    qVar32 = param_4->filesize;
    FUN_00398640();
    *extraout_x8 = psVar13;
    *(int *)(extraout_x8 + 5) = (int)qVar32;
    extraout_x8[2] = uStack_90;
    extraout_x8[1] = uStack_98;
    extraout_x8[4] = in_stack_ffffffffffffff80;
    extraout_x8[3] = uStack_88;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar20) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_98);
    pcVar34 = FUN_00398600;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = auStack_a0;
    param_4 = psVar16;
    puVar19 = extraout_x8_00;
    pppppuVar33 = &ppppuStack_60;
  }
  if ((param_3 == 0xc) &&
     (lVar25._0_4_ = psVar11->cmd, lVar25._4_4_ = psVar11->cmdsize,
     lVar25 == 0x73656d2d63707267 && *(int *)psVar11->segname == 0x65676173)) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_003987dc();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_003987b4;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_01;
  }
  if ((param_3 == 4) && (psVar11->cmd == 0x74736f68)) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_003989b8();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_00398950;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_02;
  }
  if ((param_3 == 0x19) &&
     (lVar4._0_4_ = psVar11->cmd, lVar4._4_4_ = psVar11->cmdsize,
     ((lVar4 == 0x746e696f70646e65 && *(long *)psVar11->segname == 0x656d2d64616f6c2d) &&
     *(long *)(psVar11->segname + 8) == 0x69622d7363697274) && (char)psVar11->vmaddr == 'n')) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_00398b88();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_00398b2c;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_03;
  }
  if ((param_3 == 0x15) &&
     (lVar5._0_4_ = psVar11->cmd, lVar5._4_4_ = psVar11->cmdsize,
     (lVar5 == 0x7265732d63707267 && *(long *)psVar11->segname == 0x746174732d726576) &&
     *(long *)(psVar11->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_00398d48();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_00398d00;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_04;
  }
  if ((param_3 == 0xe) &&
     (lVar26._0_4_ = psVar11->cmd, lVar26._4_4_ = psVar11->cmdsize,
     lVar26 == 0x6172742d63707267 && *(long *)((long)&psVar11->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_00398f08();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_00398ec0;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_05;
  }
  if ((param_3 == 0xd) &&
     (lVar27._0_4_ = psVar11->cmd, lVar27._4_4_ = psVar11->cmdsize,
     lVar27 == 0x6761742d63707267 && *(long *)((long)&psVar11->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    pppppuVar33 = (undefined8 *****)(puVar9 + -0x10);
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    psVar16 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_003990dc();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    pcVar34 = FUN_00399080;
    psVar11 = psVar13;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x50;
    param_4 = psVar16;
    puVar19 = extraout_x8_06;
  }
  if ((param_3 == 0x13) &&
     (lVar6._0_4_ = psVar11->cmd, lVar6._4_4_ = psVar11->cmdsize,
     (lVar6 == 0x635f626c63707267 && *(long *)psVar11->segname == 0x74735f746e65696c) &&
     *(long *)(psVar11->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)(puVar9 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar9 + -0x28) = unaff_x21;
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    psVar13 = param_4;
    FUN_00399244();
    qVar32 = param_4->filesize;
    psVar11 = psVar13;
    FUN_00399290();
    *(int *)(puVar19 + 5) = (int)qVar32;
    *puVar19 = psVar11;
    puVar19[1] = psVar13;
    return psVar11;
  }
  if ((param_3 == 0xb) &&
     (lVar28._0_4_ = psVar11->cmd, lVar28._4_4_ = psVar11->cmdsize,
     lVar28 == 0x2d74736f632d626c && *(long *)((long)&psVar11->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    psVar13 = param_4;
    FUN_00399554(puVar9 + -0x40);
    qVar32 = param_4->filesize;
    FUN_00399608();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    psVar13 = &segment_command_00000020;
    __Znwm();
    uVar35 = *(undefined8 *)(puVar9 + -0x40);
    psVar13->cmd = (int)uVar35;
    psVar13->cmdsize = (int)((ulong)uVar35 >> 0x20);
    uVar35 = *(undefined8 *)(puVar9 + -0x38);
    *(undefined8 *)(psVar13->segname + 8) = *(undefined8 *)(puVar9 + -0x30);
    *(undefined8 *)psVar13->segname = uVar35;
    psVar13->vmaddr = *(qword *)(puVar9 + -0x28);
    puVar19[1] = psVar13;
    return psVar13;
  }
  if ((param_3 == 8) &&
     (lVar30._0_4_ = psVar11->cmd, lVar30._4_4_ = psVar11->cmdsize, lVar30 == 0x6e656b6f742d626c)) {
    *(qword *)(puVar9 + -0x20) = qVar32;
    *(segment_command **)(puVar9 + -0x18) = psVar13;
    *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
    *(code **)(puVar9 + -8) = pcVar34;
    *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar13 = param_4;
    FUN_003955d0(puVar9 + -0x48);
    qVar32 = param_4->filesize;
    FUN_00399b24();
    *puVar19 = psVar13;
    *(int *)(puVar19 + 5) = (int)qVar32;
    uVar35 = *(undefined8 *)(puVar9 + -0x48);
    uVar38 = *(undefined8 *)(puVar9 + -0x30);
    uVar36 = *(undefined8 *)(puVar9 + -0x38);
    puVar19[2] = *(undefined8 *)(puVar9 + -0x40);
    puVar19[1] = uVar35;
    puVar19[4] = uVar38;
    puVar19[3] = uVar36;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
      return psVar13;
    }
    ___stack_chk_fail();
    FUN_0034b418(puVar9 + -0x48);
    __Unwind_Resume(psVar13);
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x10;
    *(code **)(puVar9 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar10 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar10 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar17 = (long *)(puVar9 + -0x70);
  *(qword *)(puVar9 + -0x20) = qVar32;
  *(segment_command **)(puVar9 + -0x18) = psVar13;
  *(undefined8 ******)(puVar9 + -0x10) = pppppuVar33;
  *(code **)(puVar9 + -8) = pcVar34;
  *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x003ec288(puVar9 + -0x48,psVar11,param_3);
  lVar20 = *(long *)param_4;
  qVar32 = param_4->vmaddr;
  uVar35 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)(puVar9 + -0x70) = lVar20;
  *(qword *)(puVar9 + -0x58) = qVar32;
  *(undefined8 *)(puVar9 + -0x60) = uVar35;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar15 = (qword *)(puVar9 + -0x48);
  FUN_00399d0c(puVar19);
  plVar12 = *(long **)(puVar9 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
    do {
      lVar20 = *plVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (*(code *)plVar12[1])();
    }
  }
  psVar13 = *(segment_command **)(puVar9 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar13) {
    do {
      lVar20 = *(long *)psVar13;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar13,0x10);
      if (bVar8) {
        *(long *)psVar13 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)psVar13->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar9 + -0x28)) {
    return psVar13;
  }
  ___stack_chk_fail();
  if ((int)pqVar15 != 0) {
    func_0x0040cf10();
    FUN_0034b418(puVar9 + -0x70);
    FUN_0034b418(puVar9 + -0x48);
  }
  psVar11 = psVar13;
  __Unwind_Resume();
  *(undefined8 *)(puVar9 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar9 + -0x98) = unaff_x21;
  *(segment_command **)(puVar9 + -0x90) = param_4;
  *(segment_command **)(puVar9 + -0x88) = psVar13;
  *(undefined1 **)(puVar9 + -0x80) = puVar9 + -0x10;
  *(code **)(puVar9 + -0x78) = FUN_00399d0c;
  qVar32 = *pqVar15;
  if (qVar32 == 0) {
    qVar37 = (long)pqVar15 + 9;
    qVar31 = (qword)(byte)pqVar15[1];
  }
  else {
    qVar31 = pqVar15[1];
    qVar37 = pqVar15[2];
  }
  if (qVar31 < 4) {
    uVar29 = 0;
  }
  else {
    uVar29 = (ulong)(*(int *)(qVar31 + qVar37 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar11 = &UNK_009dee20 + uVar29 * 0x40;
  if (qVar32 == 0) {
    uVar18 = (uint)(byte)pqVar15[1];
  }
  else {
    uVar18 = (uint)pqVar15[1];
  }
  if (*plVar17 == 0) {
    uVar21 = (uint)*(byte *)(plVar17 + 1);
  }
  else {
    uVar21 = (uint)plVar17[1];
  }
  *(uint *)&psVar11->fileoff = uVar21 + uVar18 + 0x20;
  pqVar14 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar32 = *pqVar15;
  qVar31 = pqVar15[3];
  qVar37 = pqVar15[2];
  pqVar14[1] = pqVar15[1];
  *pqVar14 = qVar32;
  pqVar14[3] = qVar31;
  pqVar14[2] = qVar37;
  pqVar15[1] = 0;
  *pqVar15 = 0;
  pqVar15[3] = 0;
  pqVar15[2] = 0;
  lVar20 = *plVar17;
  lVar40 = plVar17[3];
  lVar39 = plVar17[2];
  pqVar14[5] = plVar17[1];
  pqVar14[4] = lVar20;
  pqVar14[7] = lVar40;
  pqVar14[6] = lVar39;
  plVar17[1] = 0;
  *plVar17 = 0;
  plVar17[3] = 0;
  plVar17[2] = 0;
  *(qword **)psVar11->segname = pqVar14;
  return psVar11;
}



/* Entry: 00395b1c; end: 00395b53;  */

segment_command *
FUN_00395b1c(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  segment_command *psVar10;
  long *plVar11;
  segment_command *psVar12;
  qword *pqVar13;
  qword *pqVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar17;
  qword qVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  qword qVar29;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  qword qVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 7) &&
     (param_2->cmd == 0x74656d3a && *(int *)((long)&param_2->cmd + 3) == 0x646f6874)) {
    psVar12 = param_4;
    FUN_00395cac();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00395d68();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6174733a && *(int *)((long)&param_2->cmd + 3) == 0x73757461)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003960fc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6863733a && *(int *)((long)&param_2->cmd + 3) == 0x656d6568)) {
    psVar12 = param_4;
    FUN_00396410();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003964ec();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    psVar12 = param_4;
    FUN_003967d8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396894();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    psVar12 = param_4;
    FUN_00396b7c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396c38();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(char *)(param_1 + 1) = (char)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xd) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     lVar34 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397008();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1e) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     ((lVar35 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397320();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x14) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar12 = param_4;
    FUN_00397484();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_0039755c();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar10 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar10->cmd = (char)psVar12;
    param_1[1] = psVar10;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar12 = param_4;
    FUN_003978c8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397984();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar12 = param_4;
    FUN_00397cbc();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1a) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     ((lVar2 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003980dc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x16) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar12 = param_4;
    FUN_00398224();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 10) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar17 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar17) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar12;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     ((lVar4 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399244();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar18 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar12 = &segment_command_00000020;
    __Znwm();
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar12->cmd = (int)uVar30;
    psVar12->cmdsize = (int)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar12->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar12->segname = uVar30;
    psVar12->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar12;
    return psVar12;
  }
  if ((param_3 == 8) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize, lVar28 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar18 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar12;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar12);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar9 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar15 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar17 = *(long *)param_4;
  qVar18 = param_4->vmaddr;
  uVar30 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar17;
  *(qword *)((long)register0x00000008 + -0x58) = qVar18;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar30;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar14 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar11 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      lVar17 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  psVar12 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar12) {
    do {
      lVar17 = *(long *)psVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar12,0x10);
      if (bVar8) {
        *(long *)psVar12 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)psVar12->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar12;
  }
  ___stack_chk_fail();
  if ((int)pqVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar10 = psVar12;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar12;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar18 = *pqVar14;
  if (qVar18 == 0) {
    qVar32 = (long)pqVar14 + 9;
    qVar29 = (qword)(byte)pqVar14[1];
  }
  else {
    qVar29 = pqVar14[1];
    qVar32 = pqVar14[2];
  }
  if (qVar29 < 4) {
    uVar27 = 0;
  }
  else {
    uVar27 = (ulong)(*(int *)(qVar29 + qVar32 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar10 = &UNK_009dee20 + uVar27 * 0x40;
  if (qVar18 == 0) {
    uVar16 = (uint)(byte)pqVar14[1];
  }
  else {
    uVar16 = (uint)pqVar14[1];
  }
  if (*plVar15 == 0) {
    uVar19 = (uint)*(byte *)(plVar15 + 1);
  }
  else {
    uVar19 = (uint)plVar15[1];
  }
  *(uint *)&psVar10->fileoff = uVar19 + uVar16 + 0x20;
  pqVar13 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar18 = *pqVar14;
  qVar29 = pqVar14[3];
  qVar32 = pqVar14[2];
  pqVar13[1] = pqVar14[1];
  *pqVar13 = qVar18;
  pqVar13[3] = qVar29;
  pqVar13[2] = qVar32;
  pqVar14[1] = 0;
  *pqVar14 = 0;
  pqVar14[3] = 0;
  pqVar14[2] = 0;
  lVar17 = *plVar15;
  lVar35 = plVar15[3];
  lVar34 = plVar15[2];
  pqVar13[5] = plVar15[1];
  pqVar13[4] = lVar17;
  pqVar13[7] = lVar35;
  pqVar13[6] = lVar34;
  plVar15[1] = 0;
  *plVar15 = 0;
  plVar15[3] = 0;
  plVar15[2] = 0;
  *(qword **)psVar10->segname = pqVar13;
  return psVar10;
}



/* Entry: 00395b54; end: 00395be3;  */

undefined8 FUN_00395b54(void)

{
  int iVar1;
  
  if ((bRam0000000000afa660 & 1) == 0) {
    iVar1 = 0xafa660;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa620 = 0;
      uRam0000000000afa628 = 0x3ff2b8;
      pcRam0000000000afa630 = FUN_00395be4;
      pcRam0000000000afa638 = FUN_00395710;
      uRam0000000000afa640 = 0x395c0c;
      pcRam0000000000afa648 = ":authority";
      uRam0000000000afa650 = 10;
      uRam0000000000afa658 = 0;
      ___cxa_guard_release(0xafa660);
    }
  }
  return 0xafa620;
}



/* Entry: 00395be4; end: 00395c2f;  */

undefined1  [16] FUN_00395be4(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x6c;
  uVar3 = *param_2;
  *param_2 = uVar3 | 2;
  if ((uVar3 >> 1 & 1) == 0) {
    param_2[0x6e] = 0;
    param_2[0x6f] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x72] = 0;
    param_2[0x73] = 0;
    param_2[0x70] = 0;
    param_2[0x71] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x70);
  uStack_60 = *(undefined8 *)(param_2 + 0x6e);
  uStack_50 = *(undefined8 *)(param_2 + 0x72);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x70) = uVar7;
  *(undefined8 *)(param_2 + 0x6e) = uVar12;
  *(undefined8 *)(param_2 + 0x72) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ff290(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_00395a64(pplVar11);
  FUN_0035d0e4(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_003ff220(extraout_x8,":path",5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)((long)&MACH_HEADER.magic + 1) < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    func_0x0040cf10();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    FUN_0034b418(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 00395c30; end: 00395c73;  */

void FUN_00395c30(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00395cac();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_00395d68();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 00395c74; end: 00395cab;  */

segment_command *
FUN_00395c74(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  segment_command *psVar10;
  long *plVar11;
  segment_command *psVar12;
  qword *pqVar13;
  qword *pqVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar17;
  qword qVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  qword qVar29;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  qword qVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6174733a && *(int *)((long)&param_2->cmd + 3) == 0x73757461)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003960fc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6863733a && *(int *)((long)&param_2->cmd + 3) == 0x656d6568)) {
    psVar12 = param_4;
    FUN_00396410();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003964ec();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    psVar12 = param_4;
    FUN_003967d8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396894();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    psVar12 = param_4;
    FUN_00396b7c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396c38();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(char *)(param_1 + 1) = (char)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xd) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     lVar34 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397008();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1e) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     ((lVar35 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397320();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x14) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar12 = param_4;
    FUN_00397484();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_0039755c();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar10 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar10->cmd = (char)psVar12;
    param_1[1] = psVar10;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar12 = param_4;
    FUN_003978c8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397984();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar12 = param_4;
    FUN_00397cbc();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1a) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     ((lVar2 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003980dc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x16) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar12 = param_4;
    FUN_00398224();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 10) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar17 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar17) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar12;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     ((lVar4 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399244();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar18 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar12 = &segment_command_00000020;
    __Znwm();
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar12->cmd = (int)uVar30;
    psVar12->cmdsize = (int)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar12->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar12->segname = uVar30;
    psVar12->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar12;
    return psVar12;
  }
  if ((param_3 == 8) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize, lVar28 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar18 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar12;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar12);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar9 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar15 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar17 = *(long *)param_4;
  qVar18 = param_4->vmaddr;
  uVar30 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar17;
  *(qword *)((long)register0x00000008 + -0x58) = qVar18;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar30;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar14 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar11 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      lVar17 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  psVar12 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar12) {
    do {
      lVar17 = *(long *)psVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar12,0x10);
      if (bVar8) {
        *(long *)psVar12 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)psVar12->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar12;
  }
  ___stack_chk_fail();
  if ((int)pqVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar10 = psVar12;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar12;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar18 = *pqVar14;
  if (qVar18 == 0) {
    qVar32 = (long)pqVar14 + 9;
    qVar29 = (qword)(byte)pqVar14[1];
  }
  else {
    qVar29 = pqVar14[1];
    qVar32 = pqVar14[2];
  }
  if (qVar29 < 4) {
    uVar27 = 0;
  }
  else {
    uVar27 = (ulong)(*(int *)(qVar29 + qVar32 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar10 = &UNK_009dee20 + uVar27 * 0x40;
  if (qVar18 == 0) {
    uVar16 = (uint)(byte)pqVar14[1];
  }
  else {
    uVar16 = (uint)pqVar14[1];
  }
  if (*plVar15 == 0) {
    uVar19 = (uint)*(byte *)(plVar15 + 1);
  }
  else {
    uVar19 = (uint)plVar15[1];
  }
  *(uint *)&psVar10->fileoff = uVar19 + uVar16 + 0x20;
  pqVar13 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar18 = *pqVar14;
  qVar29 = pqVar14[3];
  qVar32 = pqVar14[2];
  pqVar13[1] = pqVar14[1];
  *pqVar13 = qVar18;
  pqVar13[3] = qVar29;
  pqVar13[2] = qVar32;
  pqVar14[1] = 0;
  *pqVar14 = 0;
  pqVar14[3] = 0;
  pqVar14[2] = 0;
  lVar17 = *plVar15;
  lVar35 = plVar15[3];
  lVar34 = plVar15[2];
  pqVar13[5] = plVar15[1];
  pqVar13[4] = lVar17;
  pqVar13[7] = lVar35;
  pqVar13[6] = lVar34;
  plVar15[1] = 0;
  *plVar15 = 0;
  plVar15[3] = 0;
  plVar15[2] = 0;
  *(qword **)psVar10->segname = pqVar13;
  return psVar10;
}



/* Entry: 00395cac; end: 00395d67;  */

undefined1 * FUN_00395cac(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_003fec68(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa6a8 & 1) == 0) {
    iVar5 = 0xafa6a8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa668 = 0;
      uRam0000000000afa670 = 0x3ff2e4;
      pcRam0000000000afa678 = FUN_00395eb4;
      pcRam0000000000afa680 = FUN_00395df8;
      uRam0000000000afa688 = 0x395ed4;
      pcRam0000000000afa690 = ":method";
      uRam0000000000afa698 = 7;
      uRam0000000000afa6a0 = 0;
      ___cxa_guard_release(0xafa6a8);
    }
  }
  return (undefined1 *)0xafa668;
}



/* Entry: 00395d68; end: 00395df7;  */

undefined8 FUN_00395d68(void)

{
  int iVar1;
  
  if ((bRam0000000000afa6a8 & 1) == 0) {
    iVar1 = 0xafa6a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa668 = 0;
      uRam0000000000afa670 = 0x3ff2e4;
      pcRam0000000000afa678 = FUN_00395eb4;
      pcRam0000000000afa680 = FUN_00395df8;
      uRam0000000000afa688 = 0x395ed4;
      pcRam0000000000afa690 = ":method";
      uRam0000000000afa698 = 7;
      uRam0000000000afa6a0 = 0;
      ___cxa_guard_release(0xafa6a8);
    }
  }
  return 0xafa668;
}



/* Entry: 00395df8; end: 00395eb3;  */

void FUN_00395df8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_003fec68();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 4;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x1a8) = (int)lVar7;
  return;
}



/* Entry: 00395eb4; end: 00395ef7;  */

void FUN_00395eb4(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 4;
  param_2[0x6a] = uVar1;
  return;
}



/* Entry: 00395ef8; end: 00395fc3;  */

void FUN_00395ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  FUN_0035d0e4(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_003ff220(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 00395fc4; end: 00396007;  */

void FUN_00395fc4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_00396040();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_003960fc();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 00396008; end: 0039603f;  */

segment_command *
FUN_00396008(undefined8 *param_1,segment_command *param_2,long param_3,segment_command *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  segment_command *psVar10;
  long *plVar11;
  segment_command *psVar12;
  qword *pqVar13;
  qword *pqVar14;
  long *plVar15;
  uint uVar16;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long lVar17;
  qword qVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  qword qVar29;
  segment_command *unaff_x19;
  qword unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  qword qVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  
  if ((param_3 == 7) &&
     (param_2->cmd == 0x6863733a && *(int *)((long)&param_2->cmd + 3) == 0x656d6568)) {
    psVar12 = param_4;
    FUN_00396410();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003964ec();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar17._0_4_ = param_2->cmd, lVar17._4_4_ = param_2->cmdsize,
     lVar17 == 0x2d746e65746e6f63 && *(int *)param_2->segname == 0x65707974)) {
    psVar12 = param_4;
    FUN_003967d8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396894();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 2) && ((short)param_2->cmd == 0x6574)) {
    psVar12 = param_4;
    FUN_00396b7c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00396c38();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(char *)(param_1 + 1) = (char)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xd) &&
     (lVar34._0_4_ = param_2->cmd, lVar34._4_4_ = param_2->cmdsize,
     lVar34 == 0x636e652d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x676e69646f636e65))
  {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397008();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1e) &&
     (lVar35._0_4_ = param_2->cmd, lVar35._4_4_ = param_2->cmdsize,
     ((lVar35 == 0x746e692d63707267 && *(long *)param_2->segname == 0x6e652d6c616e7265) &&
     *(long *)(param_2->segname + 8) == 0x722d676e69646f63) &&
     *(long *)(param_2->segname + 0xe) == 0x747365757165722d)) {
    psVar12 = param_4;
    FUN_00396f4c();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397320();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x14) &&
     (lVar1._0_4_ = param_2->cmd, lVar1._4_4_ = param_2->cmdsize,
     (lVar1 == 0x6363612d63707267 && *(long *)param_2->segname == 0x6f636e652d747065) &&
     *(int *)(param_2->segname + 8) == 0x676e6964)) {
    psVar12 = param_4;
    FUN_00397484();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_0039755c();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar10 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    __Znwm();
    *(char *)&psVar10->cmd = (char)psVar12;
    param_1[1] = psVar10;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar20._0_4_ = param_2->cmd, lVar20._4_4_ = param_2->cmdsize,
     lVar20 == 0x6174732d63707267 && *(long *)((long)&param_2->cmd + 3) == 0x7375746174732d63)) {
    psVar12 = param_4;
    FUN_003978c8();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397984();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0xc) &&
     (lVar21._0_4_ = param_2->cmd, lVar21._4_4_ = param_2->cmdsize,
     lVar21 == 0x6d69742d63707267 && *(int *)param_2->segname == 0x74756f65)) {
    psVar12 = param_4;
    FUN_00397cbc();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00397d78();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0x1a) &&
     (lVar2._0_4_ = param_2->cmd, lVar2._4_4_ = param_2->cmdsize,
     ((lVar2 == 0x6572702d63707267 && *(long *)param_2->segname == 0x70722d73756f6976) &&
     *(long *)(param_2->segname + 8) == 0x706d657474612d63) && (short)param_2->vmaddr == 0x7374)) {
    psVar12 = param_4;
    FUN_00396040();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003980dc();
    *param_1 = psVar10;
    *(int *)(param_1 + 5) = (int)qVar18;
    *(int *)(param_1 + 1) = (int)psVar12;
    return psVar10;
  }
  if ((param_3 == 0x16) &&
     (lVar3._0_4_ = param_2->cmd, lVar3._4_4_ = param_2->cmdsize,
     (lVar3 == 0x7465722d63707267 && *(long *)param_2->segname == 0x62687375702d7972) &&
     *(long *)(param_2->segname + 6) == 0x736d2d6b63616268)) {
    psVar12 = param_4;
    FUN_00398224();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_003982e0();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 10) &&
     (lVar22._0_4_ = param_2->cmd, lVar22._4_4_ = param_2->cmdsize,
     lVar22 == 0x6567612d72657375 && *(short *)param_2->segname == 0x746e)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar17 = *(long *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0(&uStack_48);
    unaff_x20 = param_4->filesize;
    FUN_00398640();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    param_1[2] = uStack_40;
    param_1[1] = uStack_48;
    param_1[4] = in_stack_ffffffffffffffd0;
    param_1[3] = uStack_38;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar17) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418(&uStack_48);
    unaff_x30 = FUN_00398600;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_4 = psVar12;
    param_1 = extraout_x8;
  }
  if ((param_3 == 0xc) &&
     (lVar23._0_4_ = param_2->cmd, lVar23._4_4_ = param_2->cmdsize,
     lVar23 == 0x73656d2d63707267 && *(int *)param_2->segname == 0x65676173)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003987dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_003987b4;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_00;
  }
  if ((param_3 == 4) && (param_2->cmd == 0x74736f68)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003989b8();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398950;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_01;
  }
  if ((param_3 == 0x19) &&
     (lVar4._0_4_ = param_2->cmd, lVar4._4_4_ = param_2->cmdsize,
     ((lVar4 == 0x746e696f70646e65 && *(long *)param_2->segname == 0x656d2d64616f6c2d) &&
     *(long *)(param_2->segname + 8) == 0x69622d7363697274) && (char)param_2->vmaddr == 'n')) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398b88();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398b2c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_02;
  }
  if ((param_3 == 0x15) &&
     (lVar5._0_4_ = param_2->cmd, lVar5._4_4_ = param_2->cmdsize,
     (lVar5 == 0x7265732d63707267 && *(long *)param_2->segname == 0x746174732d726576) &&
     *(long *)(param_2->segname + 5) == 0x6e69622d73746174)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398d48();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398d00;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_03;
  }
  if ((param_3 == 0xe) &&
     (lVar24._0_4_ = param_2->cmd, lVar24._4_4_ = param_2->cmdsize,
     lVar24 == 0x6172742d63707267 && *(long *)((long)&param_2->cmdsize + 2) == 0x6e69622d65636172))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_00398f08();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00398ec0;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_04;
  }
  if ((param_3 == 0xd) &&
     (lVar25._0_4_ = param_2->cmd, lVar25._4_4_ = param_2->cmdsize,
     lVar25 == 0x6761742d63707267 && *(long *)((long)&param_2->cmdsize + 1) == 0x6e69622d73676174))
  {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    unaff_x19 = param_4;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x20 = param_4->filesize;
    FUN_003990dc();
    *param_1 = unaff_x19;
    *(int *)(param_1 + 5) = (int)unaff_x20;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    unaff_x30 = FUN_00399080;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_4 = psVar12;
    param_1 = extraout_x8_05;
  }
  if ((param_3 == 0x13) &&
     (lVar6._0_4_ = param_2->cmd, lVar6._4_4_ = param_2->cmdsize,
     (lVar6 == 0x635f626c63707267 && *(long *)param_2->segname == 0x74735f746e65696c) &&
     *(long *)(param_2->segname + 3) == 0x73746174735f746e)) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399244();
    qVar18 = param_4->filesize;
    psVar10 = psVar12;
    FUN_00399290();
    *(int *)(param_1 + 5) = (int)qVar18;
    *param_1 = psVar10;
    param_1[1] = psVar12;
    return psVar10;
  }
  if ((param_3 == 0xb) &&
     (lVar26._0_4_ = param_2->cmd, lVar26._4_4_ = param_2->cmdsize,
     lVar26 == 0x2d74736f632d626c && *(long *)((long)&param_2->cmd + 3) == 0x6e69622d74736f63)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    psVar12 = param_4;
    FUN_00399554((undefined1 *)((long)register0x00000008 + -0x40));
    qVar18 = param_4->filesize;
    FUN_00399608();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    psVar12 = &segment_command_00000020;
    __Znwm();
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x40);
    psVar12->cmd = (int)uVar30;
    psVar12->cmdsize = (int)((ulong)uVar30 >> 0x20);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(psVar12->segname + 8) = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)psVar12->segname = uVar30;
    psVar12->vmaddr = *(qword *)((long)register0x00000008 + -0x28);
    param_1[1] = psVar12;
    return psVar12;
  }
  if ((param_3 == 8) &&
     (lVar28._0_4_ = param_2->cmd, lVar28._4_4_ = param_2->cmdsize, lVar28 == 0x6e656b6f742d626c)) {
    *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    psVar12 = param_4;
    FUN_003955d0((undefined1 *)((long)register0x00000008 + -0x48));
    qVar18 = param_4->filesize;
    FUN_00399b24();
    *param_1 = psVar12;
    *(int *)(param_1 + 5) = (int)qVar18;
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar33 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
    param_1[2] = *(undefined8 *)((long)register0x00000008 + -0x40);
    param_1[1] = uVar30;
    param_1[4] = uVar33;
    param_1[3] = uVar31;
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
      return psVar12;
    }
    ___stack_chk_fail();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
    __Unwind_Resume(psVar12);
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_00399b24;
    if ((bRam0000000000afac90 & 1) == 0) {
      iVar9 = 0xafac90;
      ___cxa_guard_acquire();
      if (iVar9 != 0) {
        uRam0000000000afac50 = 0;
        uRam0000000000afac58 = 0x3ff2b8;
        pcRam0000000000afac60 = FUN_00399bb4;
        pcRam0000000000afac68 = FUN_00395710;
        uRam0000000000afac70 = 0x399bdc;
        pcRam0000000000afac78 = "lb-token";
        uRam0000000000afac80 = 8;
        uRam0000000000afac88 = 0;
        ___cxa_guard_release(0xafac90);
      }
    }
    return (segment_command *)0xafac50;
  }
  plVar15 = (long *)((long)register0x00000008 + -0x70);
  *(qword *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(segment_command **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  func_0x003ec288((undefined1 *)((long)register0x00000008 + -0x48),param_2,param_3);
  lVar17 = *(long *)param_4;
  qVar18 = param_4->vmaddr;
  uVar30 = *(undefined8 *)(param_4->segname + 8);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)param_4->segname;
  *(long *)((long)register0x00000008 + -0x70) = lVar17;
  *(qword *)((long)register0x00000008 + -0x58) = qVar18;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar30;
  param_4->segname[0] = '\0';
  param_4->segname[1] = '\0';
  param_4->segname[2] = '\0';
  param_4->segname[3] = '\0';
  param_4->segname[4] = '\0';
  param_4->segname[5] = '\0';
  param_4->segname[6] = '\0';
  param_4->segname[7] = '\0';
  param_4->cmd = 0;
  param_4->cmdsize = 0;
  param_4->vmaddr = 0;
  param_4->segname[8] = '\0';
  param_4->segname[9] = '\0';
  param_4->segname[10] = '\0';
  param_4->segname[0xb] = '\0';
  param_4->segname[0xc] = '\0';
  param_4->segname[0xd] = '\0';
  param_4->segname[0xe] = '\0';
  param_4->segname[0xf] = '\0';
  pqVar14 = (qword *)((long)register0x00000008 + -0x48);
  FUN_00399d0c(param_1);
  plVar11 = *(long **)((long)register0x00000008 + -0x70);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar11) {
    do {
      lVar17 = *plVar11;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plVar11[1])();
    }
  }
  psVar12 = *(segment_command **)((long)register0x00000008 + -0x48);
  if ((segment_command *)((long)&MACH_HEADER.magic + 1) < psVar12) {
    do {
      lVar17 = *(long *)psVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar12,0x10);
      if (bVar8) {
        *(long *)psVar12 = lVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)psVar12->segname)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28)) {
    return psVar12;
  }
  ___stack_chk_fail();
  if ((int)pqVar14 != 0) {
    func_0x0040cf10();
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x70));
    FUN_0034b418((undefined1 *)((long)register0x00000008 + -0x48));
  }
  psVar10 = psVar12;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
  *(segment_command **)((long)register0x00000008 + -0x90) = param_4;
  *(segment_command **)((long)register0x00000008 + -0x88) = psVar12;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x78) = FUN_00399d0c;
  qVar18 = *pqVar14;
  if (qVar18 == 0) {
    qVar32 = (long)pqVar14 + 9;
    qVar29 = (qword)(byte)pqVar14[1];
  }
  else {
    qVar29 = pqVar14[1];
    qVar32 = pqVar14[2];
  }
  if (qVar29 < 4) {
    uVar27 = 0;
  }
  else {
    uVar27 = (ulong)(*(int *)(qVar29 + qVar32 + -4) == 0x6e69622d);
  }
  *(undefined **)psVar10 = &UNK_009dee20 + uVar27 * 0x40;
  if (qVar18 == 0) {
    uVar16 = (uint)(byte)pqVar14[1];
  }
  else {
    uVar16 = (uint)pqVar14[1];
  }
  if (*plVar15 == 0) {
    uVar19 = (uint)*(byte *)(plVar15 + 1);
  }
  else {
    uVar19 = (uint)plVar15[1];
  }
  *(uint *)&psVar10->fileoff = uVar19 + uVar16 + 0x20;
  pqVar13 = &segment_command_00000020.vmsize;
  __Znwm();
  qVar18 = *pqVar14;
  qVar29 = pqVar14[3];
  qVar32 = pqVar14[2];
  pqVar13[1] = pqVar14[1];
  *pqVar13 = qVar18;
  pqVar13[3] = qVar29;
  pqVar13[2] = qVar32;
  pqVar14[1] = 0;
  *pqVar14 = 0;
  pqVar14[3] = 0;
  pqVar14[2] = 0;
  lVar17 = *plVar15;
  lVar35 = plVar15[3];
  lVar34 = plVar15[2];
  pqVar13[5] = plVar15[1];
  pqVar13[4] = lVar17;
  pqVar13[7] = lVar35;
  pqVar13[6] = lVar34;
  plVar15[1] = 0;
  *plVar15 = 0;
  plVar15[3] = 0;
  plVar15[2] = 0;
  *(qword **)psVar10->segname = pqVar13;
  return psVar10;
}



/* Entry: 00396040; end: 003960fb;  */

undefined1 * FUN_00396040(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_0034bf24(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10(plVar4);
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam0000000000afa6f0 & 1) == 0) {
    iVar5 = 0xafa6f0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam0000000000afa6b0 = 0;
      uRam0000000000afa6b8 = 0x3ff2e4;
      pcRam0000000000afa6c0 = FUN_00396248;
      pcRam0000000000afa6c8 = FUN_0039618c;
      uRam0000000000afa6d0 = 0x396268;
      pcRam0000000000afa6d8 = ":status";
      uRam0000000000afa6e0 = 7;
      uRam0000000000afa6e8 = 0;
      ___cxa_guard_release(0xafa6f0);
    }
  }
  return (undefined1 *)0xafa6b0;
}



/* Entry: 003960fc; end: 0039618b;  */

undefined8 FUN_003960fc(void)

{
  int iVar1;
  
  if ((bRam0000000000afa6f0 & 1) == 0) {
    iVar1 = 0xafa6f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000afa6b0 = 0;
      uRam0000000000afa6b8 = 0x3ff2e4;
      pcRam0000000000afa6c0 = FUN_00396248;
      pcRam0000000000afa6c8 = FUN_0039618c;
      uRam0000000000afa6d0 = 0x396268;
      pcRam0000000000afa6d8 = ":status";
      uRam0000000000afa6e0 = 7;
      uRam0000000000afa6e8 = 0;
      ___cxa_guard_release(0xafa6f0);
    }
  }
  return 0xafa6b0;
}



/* Entry: 0039618c; end: 00396247;  */

void FUN_0039618c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0034bf24();
  plVar4 = plStack_50;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 8;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x1a4) = (int)lVar7;
  return;
}


