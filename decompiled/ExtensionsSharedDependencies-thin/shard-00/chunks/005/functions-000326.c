/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006538b4; end: 006538fb;  */

undefined1 FUN_006538b4(long param_1)

{
  long lStack_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    pcStack_28 = FUN_006652c8;
    lStack_30 = param_1;
    FUN_006538fc(*(long *)(param_1 + 0x18),&pcStack_28,&lStack_30);
  }
  return *(undefined1 *)(param_1 + 2);
}



/* Entry: 006538fc; end: 0065391b;  */

void FUN_006538fc(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iStack_34;
  
  if (*param_1 == 0xdd) {
    return;
  }
  iStack_34 = 0;
  piVar3 = param_1;
  FUN_006539c8(param_1,&iStack_34,0x65c2937b,0);
  if ((((ulong)piVar3 & 1) != 0) ||
     (piVar3 = param_1, FUN_00576e04(param_1,3,&UNK_00823670,1), (int)piVar3 == 0)) {
    (*(code *)*param_2)(*param_3);
    do {
      iStack_34 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 0xdd;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iStack_34 == 0x5a308d2) {
      FUN_00576e00(param_1,1);
    }
  }
  return;
}



/* Entry: 0065391c; end: 006539c7;  */

void FUN_0065391c(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iStack_34;
  
  iStack_34 = 0;
  piVar3 = param_1;
  FUN_006539c8(param_1,&iStack_34,0x65c2937b,0);
  if ((((ulong)piVar3 & 1) != 0) ||
     (piVar3 = param_1, FUN_00576e04(param_1,3,&UNK_00823670,param_2), (int)piVar3 == 0)) {
    (*(code *)*param_3)(*param_4);
    do {
      iStack_34 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 0xdd;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iStack_34 == 0x5a308d2) {
      FUN_00576e00(param_1,1);
    }
  }
  return;
}



/* Entry: 006539c8; end: 00653c43;  */

undefined8 FUN_006539c8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar3 = 0;
  if (param_4 != 3) {
    iVar3 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 3:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 4:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 5:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  default:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (iVar3 != 5) {
        iVar1 = *param_2;
        do {
          iVar3 = *param_1;
          if (iVar3 != iVar1) {
            bVar4 = false;
            ClearExclusiveLocal();
            goto LAB_00653c00;
          }
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *param_1 = param_3;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar4 = true;
        goto LAB_00653c00;
      }
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_00653bf8;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  bVar4 = true;
LAB_00653c00:
  if (!bVar4) {
    *param_2 = iVar3;
    return 0;
  }
  return 1;
LAB_00653bf8:
  bVar4 = false;
  ClearExclusiveLocal();
  goto LAB_00653c00;
}



/* Entry: 00653c44; end: 00653c6f;  */

long FUN_00653c44(long param_1)

{
  FUN_00652538(param_1 + 8);
  return param_1;
}



/* Entry: 00653c70; end: 00653c73;  */

long FUN_00653c70(long param_1)

{
  FUN_00652538(param_1 + 8);
  return param_1;
}



/* Entry: 00653c74; end: 00653c87;  */

void FUN_00653c74(void)

{
  FUN_00653c44();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00653c88; end: 00653d0f;  */

void FUN_00653c88(void)

{
  Hint_Prefetch(0xb257f8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b257f8,0,0,0);
  return;
}



/* Entry: 00653d10; end: 00653dbb;  */

long * FUN_00653d10(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar3 = param_3;
    func_0x00487c24(param_3);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x18);
    uVar4 = 8;
    func_0x00487cbc(8,plVar3);
    func_0x00487cbc(param_2,uVar4);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar3 = param_3;
    func_0x00487c24(param_3);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
    uVar4 = 0x10;
    func_0x00487cbc(0x10,plVar3);
    func_0x00487ce8(param_2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar3 = (long *)(uVar9 + 8);
  lVar12 = 0;
  plVar5 = plVar3;
  do {
    lVar10 = *plVar3;
    if ((int)((ulong)(*(long *)(uVar9 + 0x10) - lVar10) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(lVar10 + lVar12 * 0x10);
    func_0x006aad90();
    plVar7 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar6);
      func_0x00487cf0(plVar7,uVar6);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)plVar5 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar5 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,plVar5);
      param_2 = plVar7;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar6);
      uVar4 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar4,uVar6,param_3);
      func_0x006aad84();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar7,uVar4);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar5 = plVar7;
  } while( true );
}



/* Entry: 00653dbc; end: 00653e1f;  */

long FUN_00653dbc(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = ((ulong)uVar2 & 1) * 2;
    if ((uVar2 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + lVar3 + 1;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar3;
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + lVar3);
  return param_1 + lVar3;
}



/* Entry: 00653e20; end: 00653e67;  */

void FUN_00653e20(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_00a0d908;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 00653e68; end: 0065430b;  */

void FUN_00653e68(undefined8 *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long *plVar7;
  long unaff_x19;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long alStack_210 [2];
  byte bStack_1f9;
  undefined4 auStack_1f8 [8];
  undefined4 uStack_1d8;
  undefined4 uStack_1b8;
  undefined4 uStack_198;
  undefined4 uStack_178;
  undefined4 uStack_158;
  undefined4 uStack_138;
  undefined4 uStack_118;
  undefined4 uStack_f8;
  undefined4 uStack_d8;
  undefined4 uStack_b8;
  undefined4 uStack_98;
  undefined4 uStack_78;
  undefined4 uStack_58;
  undefined4 uStack_38;
  long alStack_30 [3];
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  func_0x00674e30();
  func_0x00674238();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_10 = extraout_x8;
  func_0x00674868();
  param_1[3] = extraout_x8_00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[7] = extraout_x8_00;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[0xb] = extraout_x8_00;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  puVar9 = param_1 + 0xf;
  *puVar9 = extraout_x8_00;
  plVar7 = param_1 + 0x10;
  param_1[0x11] = 0;
  *plVar7 = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = extraout_x8_00;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = extraout_x8_00;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = &PTR_LOOP_00a0da78;
  param_1[0x22] = &PTR_LOOP_00a0da78;
  param_1[0x23] = 0;
  param_1[0x24] = extraout_x8_00;
  param_1[0x33] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  FUN_00425cb4(alStack_210,"google.protobuf.DoubleValue");
  auStack_1f8[0] = 1;
  func_0x00674f24();
  uStack_1d8 = 2;
  func_0x00674f24();
  uStack_1b8 = 3;
  func_0x00674f24();
  uStack_198 = 4;
  func_0x00674f24();
  uStack_178 = 5;
  func_0x00674f24();
  uStack_158 = 6;
  func_0x00674f24();
  uStack_138 = 7;
  func_0x00674f24();
  uStack_118 = 8;
  func_0x00674f24();
  uStack_f8 = 9;
  func_0x00674f24();
  uStack_d8 = 10;
  func_0x00674f24();
  uStack_b8 = 0xb;
  func_0x00674f24();
  uStack_98 = 0xc;
  func_0x00674f24();
  uStack_78 = 0xd;
  func_0x00674f24();
  uStack_58 = 0xe;
  func_0x00674f24();
  uStack_38 = 0xf;
  plVar12 = alStack_30;
  func_0x00674f24();
  lVar8 = 0;
  uStack_18 = 0x10;
  do {
    if (lVar8 == 0x200) {
      lVar8 = 0x1e0;
      do {
        lVar11 = (long)alStack_210 + lVar8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar11);
        lVar8 = lVar8 + -0x20;
        bVar2 = lVar8 == -0x20;
      } while (!bVar2);
      func_0x00674120(uStack_10);
      if (bVar2) {
        return;
      }
      ___stack_chk_fail();
      do {
        plVar12 = plVar12 + -4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar12);
      } while (plVar12 != alStack_210);
      func_0x00665a58(unaff_x19 + 0x188);
      func_0x00665a7c(unaff_x19 + 0x170);
      func_0x00665aa0(unaff_x19 + 0x158);
      func_0x00665ac4(unaff_x19 + 0x140);
      FUN_00665ae8(param_1 + 0x24);
      func_0x00665b50(param_1 + 0x21);
      FUN_0065430c(param_1 + 0x1d);
      func_0x00654330(param_1 + 0x19);
      func_0x00654354(unaff_x19 + 0xb0);
      func_0x00665f44(unaff_x19 + 0x98);
      FUN_00665fd0(puVar9);
      FUN_00666014(param_1 + 0xb);
      FUN_00666038(param_1 + 7);
      FUN_00666038(param_1 + 3);
      func_0x00459128();
      __Unwind_Resume(lVar11);
      func_0x00674f38();
      if (extraout_x8_04 != 0) {
        func_0x006744e8();
      }
      return;
    }
    plVar12 = (long *)((long)alStack_210 + lVar8);
    Hint_Prefetch(*puVar9,0,2,0);
    bVar1 = *(byte *)((long)auStack_1f8 + lVar8 + -1);
    uVar6 = *(ulong *)((long)alStack_210 + lVar8 + 8);
    plVar4 = (long *)*plVar12;
    if (-1 < (char)bVar1) {
      uVar6 = (ulong)bVar1;
      plVar4 = plVar12;
    }
    puVar3 = puVar9;
    FUN_0066696c(puVar9,plVar4,uVar6);
    lVar11 = 0;
    uVar10 = *(ulong *)(unaff_x19 + 0x88);
    uVar6 = *(ulong *)(unaff_x19 + 0x78) >> 0xc ^ (ulong)puVar3 >> 7;
    while( true ) {
      uVar6 = uVar6 & uVar10;
      func_0x006753d4();
      while ((extraout_x8_01 & 0x8080808080808080) != 0) {
        func_0x006763d4();
        plVar4 = plVar12;
        FUN_0066c218(plVar12,*plVar7 + (uVar6 + (extraout_x8_02 >> 3) & uVar10) * 0x20);
        if (((ulong)plVar4 & 1) != 0) goto LAB_006541c8;
        func_0x006763c8();
      }
      func_0x00674774();
      if ((extraout_x8_03 & 1) != 0) break;
      lVar11 = lVar11 + 8;
      uVar6 = lVar11 + uVar6;
    }
    puVar5 = puVar9;
    FUN_0066c1a8(puVar9,puVar3);
    lVar11 = *plVar7 + (long)puVar5 * 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar11,plVar12);
    *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)((long)auStack_1f8 + lVar8);
LAB_006541c8:
    lVar8 = lVar8 + 0x20;
  } while( true );
}



/* Entry: 0065430c; end: 00654383;  */

void FUN_0065430c(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 00654384; end: 006543cf;  */

void FUN_00654384(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00674868();
  *param_1 = extraout_x8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = extraout_x8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = extraout_x8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = extraout_x8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = extraout_x8;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  return;
}



/* Entry: 006543d0; end: 006543f3;  */

void FUN_006543d0(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 006543f4; end: 0065449b;  */

long FUN_006543f4(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x006660a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x006660a4();
  }
  __ZdlPv();
  FUN_00567000(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    pcVar1 = *(char **)(param_1 + 0xa0);
    while (lVar2 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00674c10();
    }
    func_0x00674d30(*(undefined8 *)(param_1 + 0xa0));
  }
  FUN_006543d0(param_1 + 0x78);
  FUN_006543d0(param_1 + 0x58);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00674d30(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x006744e8();
  }
  return param_1;
}



/* Entry: 0065449c; end: 00654613;  */

undefined8 **** FUN_0065449c(long param_1,undefined8 ****param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar6;
  ulong extraout_x14;
  undefined8 ****unaff_x23;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ***apppuStack_130 [14];
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_58;
  
  ppppuVar4 = param_2;
  func_0x006743c8();
  ppppuVar4 = (undefined8 ****)*ppppuVar4;
  uStack_58 = extraout_x8;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    apppuStack_130[0] = ppppuVar4;
    FUN_00567614();
    if ((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x30) == 0)) {
      func_0x00674b10();
      FUN_00654614();
      func_0x00675c54();
      in_ZR = extraout_w8_01 == 0;
      bVar3 = (bool)in_ZR;
    }
    else {
      bVar3 = true;
    }
    func_0x00675f98();
    if (!bVar3) goto LAB_00654554;
  }
  ppppuVar4 = apppuStack_130;
  FUN_0066664c(ppppuVar4,param_2);
  func_0x00675b2c();
  if (param_2[1] != (undefined8 ***)0x0) {
    FUN_006546c4(param_1 + 0x38);
    ppppuVar4 = (undefined8 ****)(param_1 + 0x18);
    FUN_006546c4();
  }
  func_0x00674b10();
  FUN_00654614();
  func_0x00675c54();
  if (extraout_w8 == 0) {
    if (param_2[3] != (undefined8 ***)0x0) {
      ppppuVar4 = (undefined8 ****)param_2[3][5];
      func_0x00676338();
      FUN_0065449c();
      func_0x00675c54();
      if (extraout_w8_00 != 0) goto LAB_00654538;
    }
    func_0x006750f0();
    FUN_00654708();
    ppppuVar4 = param_2;
    if ((int)param_2 != 0) {
      func_0x00674b10();
      FUN_00654614();
      ppppuVar4 = param_2;
      unaff_x23 = param_2;
    }
  }
LAB_00654538:
  func_0x00675210();
  func_0x00675f90();
  in_ZR = (int)ppppuVar4 == 0;
  if ((bool)in_ZR) {
    unaff_x23 = (undefined8 ****)&UNK_0082398c;
  }
  func_0x00675428();
LAB_00654554:
  func_0x00674120(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x23;
  }
  ___stack_chk_fail();
  func_0x00674ce4();
  func_0x00675428();
  func_0x00674bc8();
  pcVar5 = FUN_00654614;
  func_0x006755c0();
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = pcVar5;
  func_0x00674ad8();
  Hint_Prefetch(ppppuVar4[0x19],0,2,0);
  func_0x00675f20(ppppuVar4[0x19]);
  lVar8 = 0;
  lVar1 = *(long *)(param_4 + 0xd0);
  uVar2 = *(ulong *)(param_4 + 0xd8);
  func_0x006745f4(*(ulong *)(param_4 + 200) >> 0xc);
  func_0x00676bcc();
  uVar9 = extraout_x8_00;
  while( true ) {
    uVar9 = uVar9 & uVar2;
    func_0x00674f7c();
    uVar6 = extraout_x8_01 & 0x8080808080808080;
    while (uVar6 != 0) {
      func_0x00675f14();
      uVar7 = uVar9 + (extraout_x8_02 >> 3) & uVar2;
      ppppuVar4 = *(undefined8 *****)(lVar1 + uVar7 * 8);
      FUN_00666540();
      func_0x00465a14();
      if (((ulong)ppppuVar4 & 1) != 0) {
        return *(undefined8 *****)(*(long *)(param_4 + 0xd0) + uVar7 * 8);
      }
      func_0x00676bcc(uVar6 - 1);
      uVar6 = extraout_x14;
    }
    func_0x006745a8();
    if ((extraout_x8_03 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar9 = lVar8 + uVar9;
  }
  return ppppuVar4;
}



/* Entry: 00654614; end: 006546c3;  */

void FUN_00654614(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  ulong extraout_x14;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  
  func_0x006755c0();
  func_0x00674ad8();
  Hint_Prefetch(*(undefined8 *)(param_1 + 200),0,2,0);
  func_0x00675f20(*(undefined8 *)(param_1 + 200));
  lVar5 = 0;
  lVar1 = *(long *)(unaff_x19 + 0xd0);
  uVar2 = *(ulong *)(unaff_x19 + 0xd8);
  func_0x006745f4(*(ulong *)(unaff_x19 + 200) >> 0xc);
  func_0x00676bcc();
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    func_0x00674f7c();
    uVar4 = extraout_x8_00 & 0x8080808080808080;
    while (uVar4 != 0) {
      func_0x00675f14();
      uVar3 = *(ulong *)(lVar1 + (uVar6 + (extraout_x8_01 >> 3) & uVar2) * 8);
      FUN_00666540();
      func_0x00465a14();
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x00676bcc(uVar4 - 1);
      uVar4 = extraout_x14;
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar6 = lVar5 + uVar6;
  }
  return;
}



/* Entry: 006546c4; end: 00654707;  */

void FUN_006546c4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[2];
  if (uVar2 == 0) {
    return;
  }
  FUN_00666068();
  param_1[3] = 0;
  if (uVar2 < 0x80) {
    lVar3 = param_1[2];
    lVar1 = *param_1;
    _memset(lVar1,0x80,lVar3 + 8);
    *(undefined1 *)(lVar1 + lVar3) = 0xff;
    uVar2 = param_1[2];
    lVar1 = 6;
    if (uVar2 != 7) {
      lVar1 = uVar2 - (uVar2 >> 3);
    }
    *(long *)(*param_1 + -8) = lVar1 - param_1[3];
    return;
  }
  (*(code *)(undefined *)0x537dcc)(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&UNK_00811030;
  return;
}



/* Entry: 00654708; end: 00654803;  */

undefined8 FUN_00654708(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x28) + 0x38;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_006557a8(uVar1,&uStack_40);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  FUN_00456d78(auStack_58,&uStack_40);
  FUN_0065677c();
  uVar1 = param_1;
  FUN_00656930(param_1,uStack_40,uStack_38);
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x18))();
    if ((int)plVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00675bf8(*(undefined8 *)(param_4 + 0xb0));
      FUN_006557c4();
      if (lVar3 == 0) {
        func_0x00674f10();
        FUN_00656814();
        if (lVar3 != 0) {
          uVar4 = 1;
          goto LAB_006547c4;
        }
      }
    }
  }
  FUN_0066c088(auStack_70,*(long *)(param_1 + 0x28) + 0x38,auStack_58);
  uVar4 = 0;
LAB_006547c4:
  func_0x00674d80();
  return uVar4;
}



/* Entry: 00654804; end: 00654a57;  */

uint FUN_00654804(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000058;
  long in_stack_00000060;
  long *in_stack_00000070;
  long *in_stack_00000078;
  
  func_0x006761f4();
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar6 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    FUN_00655c4c(uVar5,"google.protobuf.FeatureSet",0x1a);
    in_stack_00000048 = *(long **)(param_1 + 0xa8);
    in_stack_00000040 = *(long **)(param_1 + 0xa0);
    FUN_006666dc(&stack0x00000040);
    uVar6 = 0;
    plVar2 = in_stack_00000048;
    plVar3 = in_stack_00000040;
    while (in_stack_00000078 = plVar2, plVar3 != (long *)0x0) {
      lVar1 = *plVar2;
      puVar13 = (undefined8 *)plVar2[2];
      for (puVar12 = (undefined8 *)plVar2[1]; puVar12 != puVar13; puVar12 = puVar12 + 6) {
        FUN_00688d08(&stack0x00000040,*(undefined4 *)(lVar1 + 0x20),*puVar12,uVar5);
        plVar4 = in_stack_00000048;
        for (plVar10 = in_stack_00000040; lVar7 = in_stack_00000060, lVar11 = in_stack_00000058,
            plVar10 != plVar4; plVar10 = plVar10 + 3) {
          if (*(long *)(param_1 + 0x98) == 0) {
            func_0x007766a0(&stack0x00000030,&UNK_00910450,0x55d);
            func_0x00554c74(&stack0x00000030,puVar12[4],puVar12[5]);
            func_0x00676638();
            func_0x00554c74();
            func_0x00676610();
            FUN_00555478();
            func_0x00676630();
          }
          else {
            lVar7 = (long)*(char *)((long)plVar10 + 0x17);
            if (lVar7 < 0) {
              lVar7 = plVar10[1];
            }
            func_0x00676b38(lVar7);
            func_0x00676644();
          }
          uVar6 = 1;
        }
        for (; lVar11 != lVar7; lVar11 = lVar11 + 0x18) {
          if (*(long *)(param_1 + 0x98) == 0) {
            func_0x00776698(&stack0x00000030,&UNK_00910450,0x567);
            func_0x00554c74(&stack0x00000030,puVar12[4],puVar12[5]);
            func_0x00676638();
            func_0x00554c74();
            func_0x00676610();
            FUN_00555478();
            func_0x00676630();
          }
          else {
            lVar8 = (long)*(char *)(lVar11 + 0x17);
            if (lVar8 < 0) {
              lVar8 = *(long *)(lVar11 + 8);
            }
            func_0x00676b38(lVar8);
            func_0x00676644();
          }
        }
        FUN_00666718(&stack0x00000040);
      }
      in_stack_00000070 = (long *)((long)plVar3 + 1);
      in_stack_00000078 = plVar2 + 4;
      FUN_006666dc(&stack0x00000070);
      plVar2 = in_stack_00000078;
      plVar3 = in_stack_00000070;
    }
    uVar9 = *(ulong *)(param_1 + 0xb0);
    if (uVar9 != 0) {
      func_0x00666740(param_1 + 0xa0);
      FUN_00554104(param_1 + 0xa0,&UNK_00a0da88,uVar9 < 0x80);
    }
    uVar6 = uVar6 ^ 1;
  }
  return uVar6;
}



/* Entry: 00654a58; end: 00654a9b;  */

undefined8 * FUN_00654a58(long param_1)

{
  ulong ******ppppppuVar1;
  undefined8 *puVar2;
  ulong ****ppppuVar3;
  ulong ****ppppuVar4;
  undefined1 *puVar5;
  ulong *****pppppuVar6;
  code *pcVar7;
  ulong *****extraout_x8;
  ulong ******ppppppuVar8;
  ulong ****ppppuVar9;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong ****ppppuVar10;
  ulong ******ppppppuVar11;
  ulong uVar12;
  ulong *****pppppuVar13;
  long lVar14;
  ulong *****pppppuVar15;
  ulong *****in_stack_00000010;
  ulong *****in_stack_00000018;
  undefined1 *in_stack_00000090;
  code *in_stack_00000098;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong *****pppppuStack_20;
  ulong ****ppppuStack_18;
  
  if ((*(byte *)(param_1 + 1) >> 3 & 1) != 0) {
    return *(undefined8 **)(param_1 + 0x28);
  }
  func_0x00674d08(param_1,&UNK_00911ae0);
  ppppppuVar1 = &pppppuStack_20;
  FUN_00776794(ppppppuVar1,&UNK_00911a43,0xa70,uStack_30,uStack_28);
  func_0x00674d28();
  pcVar7 = FUN_00654a9c;
  func_0x00676db8();
  ppppppuVar11 = ppppppuVar1;
  in_stack_00000090 = &stack0xfffffffffffffff0;
  in_stack_00000098 = pcVar7;
  func_0x0067570c();
  func_0x00674868();
  *ppppppuVar11 = extraout_x8;
  ppppppuVar8 = ppppppuVar11 + 1;
  *ppppppuVar8 = (ulong *****)0x0;
  pppppuStack_20 = (ulong *****)ppppppuVar11;
  ppppppuVar11[2] = (ulong *****)0x0;
  ppppppuVar11[3] = (ulong *****)0x0;
  pppppuVar15 = ppppppuVar1[1];
  pppppuVar13 = *ppppppuVar1;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
  FUN_0066cc84(puVar2);
  pppppuVar6 = (ulong *****)ppppuStack_18;
  do {
    ppppuStack_18 = (ulong ****)pppppuVar13;
    if ((ulong *****)ppppuStack_18 == (ulong *****)0x0) {
      ppppppuVar1[5] = pppppuStack_20;
      return puVar2;
    }
    ppppuVar10 = *pppppuVar15;
    pppppuVar13 = (ulong *****)ppppuStack_18;
    if (*(char *)ppppuVar10 == '\x02') {
      in_stack_00000018 = pppppuVar15;
      if ((*(byte *)((long)ppppuVar10 + 1) >> 3 & 1) == 0) {
        ppppuVar3 = (ulong ****)ppppuVar10[4];
      }
      else {
        ppppuVar3 = ppppuVar10;
        FUN_00654a58();
        if (ppppuVar3 == (ulong ****)0x0) {
          ppppuVar3 = (ulong ****)ppppuVar10[2];
        }
        else {
          ppppuVar3 = ppppuVar10;
          FUN_00654a58();
        }
      }
      ppppuVar9 = (ulong ****)(ppppuVar10[1] + ((ulong)*(byte *)((long)ppppuVar10 + 3) & 3) * 3);
      if (*(char *)((long)ppppuVar9 + 0x17) < '\0') {
        ppppuVar9 = (ulong ****)*ppppuVar9;
      }
      ppppuVar4 = ppppuVar9;
      _strlen();
      pppppuVar6 = pppppuStack_20;
      Hint_Prefetch(*pppppuStack_20,0,2,0);
      puVar5 = &stack0xfffffffffffffff0;
      func_0x00666fe4(*pppppuStack_20,puVar5);
      lVar14 = 0;
      pppppuVar13 = (ulong *****)pppppuVar6[2];
      func_0x00676cbc((ulong)*pppppuVar6 >> 0xc);
      uVar12 = extraout_x8_00;
      while( true ) {
        uVar12 = uVar12 & (ulong)pppppuVar13;
        func_0x006753d4();
        while ((extraout_x8_01 & 0x8080808080808080) != 0) {
          func_0x00676ae4();
          ppppppuVar11 = (ulong ******)(uVar12 + (extraout_x8_02 >> 3) & (ulong)pppppuVar13);
          pppppuVar6 = *ppppppuVar8 + (long)ppppppuVar11 * 4;
          func_0x00666fbc(pppppuVar6,&stack0xfffffffffffffff0);
          if (((ulong)pppppuVar6 & 1) != 0) goto LAB_00654c1c;
          func_0x00676acc();
        }
        func_0x00674774();
        pppppuVar6 = pppppuStack_20;
        if ((extraout_x8_03 & 1) != 0) break;
        lVar14 = lVar14 + 8;
        uVar12 = lVar14 + uVar12;
      }
      ppppppuVar11 = (ulong ******)pppppuStack_20;
      FUN_0066ccc0(pppppuStack_20,puVar5);
      pppppuVar6 = (ulong *****)(pppppuVar6[1] + (long)ppppppuVar11 * 4);
      pppppuVar6[1] = ppppuVar9;
      *pppppuVar6 = ppppuVar3;
      pppppuVar6[2] = ppppuVar4;
      pppppuVar6[3] = (ulong ****)0x0;
LAB_00654c1c:
      (*ppppppuVar8)[(long)ppppppuVar11 * 4 + 3] = ppppuVar10;
      pppppuVar13 = (ulong *****)ppppuStack_18;
      pppppuVar6 = (ulong *****)ppppuStack_18;
    }
    ppppuStack_18 = (ulong ****)pppppuVar6;
    in_stack_00000010 = (ulong *****)((long)pppppuVar13 + 1);
    in_stack_00000018 = pppppuVar15 + 1;
    puVar2 = &stack0x00000010;
    FUN_0066cc84(puVar2);
    pppppuVar13 = in_stack_00000010;
    pppppuVar15 = in_stack_00000018;
    pppppuVar6 = (ulong *****)ppppuStack_18;
  } while( true );
}



/* Entry: 00654a9c; end: 00654d9b;  */

void FUN_00654a9c(ulong *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  char *pcVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  char *in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  func_0x00676db8();
  puVar3 = param_1;
  func_0x0067570c();
  func_0x00674868();
  *puVar3 = extraout_x8;
  puVar7 = puVar3 + 1;
  *puVar7 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  in_stack_00000028 = (undefined8 *)param_1[1];
  in_stack_00000020 = (char *)*param_1;
  FUN_0066cc84(&stack0x00000020);
  puVar1 = in_stack_00000028;
  pcVar2 = in_stack_00000020;
  do {
    if (pcVar2 == (char *)0x0) {
      param_1[5] = (ulong)puVar3;
      return;
    }
    pcVar9 = (char *)*puVar1;
    if (*pcVar9 == '\x02') {
      in_stack_00000048 = puVar1;
      if (((byte)pcVar9[1] >> 3 & 1) == 0) {
        pcVar4 = *(char **)(pcVar9 + 0x20);
      }
      else {
        pcVar4 = pcVar9;
        FUN_00654a58();
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(pcVar9 + 0x10);
        }
        else {
          pcVar4 = pcVar9;
          FUN_00654a58();
        }
      }
      puVar8 = (undefined8 *)(*(long *)(pcVar9 + 8) + ((ulong)(byte)pcVar9[3] & 3) * 0x18);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      in_stack_00000020 = pcVar4;
      in_stack_00000028 = puVar8;
      _strlen();
      Hint_Prefetch(*puVar3,0,2,0);
      puVar5 = &stack0x00000020;
      in_stack_00000030 = puVar8;
      func_0x00666fe4(*puVar3,puVar5);
      lVar13 = 0;
      uVar12 = puVar3[2];
      func_0x00676cbc(*puVar3 >> 0xc);
      uVar11 = extraout_x8_00;
      while( true ) {
        uVar11 = uVar11 & uVar12;
        func_0x006753d4();
        while ((extraout_x8_01 & 0x8080808080808080) != 0) {
          func_0x00676ae4();
          puVar10 = (ulong *)(uVar11 + (extraout_x8_02 >> 3) & uVar12);
          uVar6 = *puVar7 + (long)puVar10 * 0x20;
          func_0x00666fbc(uVar6,&stack0x00000020);
          if ((uVar6 & 1) != 0) goto LAB_00654c1c;
          func_0x00676acc();
        }
        func_0x00674774();
        if ((extraout_x8_03 & 1) != 0) break;
        lVar13 = lVar13 + 8;
        uVar11 = lVar13 + uVar11;
      }
      puVar10 = puVar3;
      FUN_0066ccc0(puVar3,puVar5);
      puVar8 = (undefined8 *)(puVar3[1] + (long)puVar10 * 0x20);
      puVar8[1] = in_stack_00000028;
      *puVar8 = in_stack_00000020;
      puVar8[2] = in_stack_00000030;
      puVar8[3] = 0;
LAB_00654c1c:
      *(char **)(*puVar7 + (long)puVar10 * 0x20 + 0x18) = pcVar9;
    }
    in_stack_00000040 = pcVar2 + 1;
    in_stack_00000048 = puVar1 + 1;
    FUN_0066cc84(&stack0x00000040);
    puVar1 = in_stack_00000048;
    pcVar2 = in_stack_00000040;
  } while( true );
}



/* Entry: 00654d9c; end: 00654e93;  */

bool FUN_00654d9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 unaff_x19;
  ulong *unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  
  func_0x00674c64();
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = &uStack_a8;
  uStack_a8 = param_2;
  FUN_0066d480(*param_1);
  lVar2 = 0;
  uVar3 = unaff_x20[2];
  func_0x00674f64(*unaff_x20 >> 0xc ^ (ulong)puVar1 >> 7);
  uVar4 = extraout_x8;
  while( true ) {
    uVar4 = uVar4 & uVar3;
    func_0x00674f7c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x006763d4();
      FUN_00667014(auStack_88,unaff_x20[1] + (uVar4 + (extraout_x8_01 >> 3) & uVar3) * 8);
      puVar1 = auStack_a0;
      FUN_00667014(puVar1,&uStack_a8);
      func_0x0067650c();
      if (((ulong)puVar1 & 1) != 0) goto LAB_00654e68;
      func_0x006763c8();
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar4 = lVar2 + uVar4;
  }
  func_0x00675e8c();
  FUN_0066d4ac();
  *(undefined8 *)(unaff_x20[1] + (long)puVar1 * 8) = unaff_x19;
LAB_00654e68:
  return (extraout_x8_00 & 0x8080808080808080) == 0;
}



/* Entry: 00654e94; end: 00655067;  */

bool FUN_00654e94(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  ulong uVar5;
  ulong extraout_x12_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  
  func_0x00674c64();
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 4);
  if ((lVar4 == 0 || (int)uVar1 < 1) || (*(ushort *)(lVar4 + 2) < uVar1)) {
    puVar6 = (undefined8 *)(unaff_x20 + 0x38);
    Hint_Prefetch(*puVar6,0,2,0);
    func_0x00675ae4();
    func_0x00674e58(0);
    do {
      func_0x0067623c();
      for (uVar5 = extraout_x12; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
        uVar2 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x40) +
                         (extraout_x11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                         extraout_x10) * 8);
        if (*(long *)(lVar4 + 0x20) == *(long *)(unaff_x19 + 0x20) &&
            *(int *)(lVar4 + 4) == *(int *)(unaff_x19 + 4)) goto LAB_00654f7c;
      }
      func_0x00675648();
    } while ((extraout_x12_00 & 1) == 0);
    FUN_0066d68c();
    *(long *)(*(long *)(unaff_x20 + 0x40) + (long)puVar6 * 8) = unaff_x19;
    bVar3 = true;
  }
  else if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
    bVar3 = *(long *)(lVar4 + 0x38) + (ulong)uVar1 * 0x58 + -0x58 == unaff_x19;
  }
  else {
LAB_00654f7c:
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 00655068; end: 00655343;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00655068(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ******ppppppuVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  byte bVar11;
  undefined8 ******unaff_x20;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  undefined8 ******ppppppuStack_88;
  uint uStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *puStack_68;
  
  func_0x00674c58();
  ppppppuVar15 = *(undefined8 *******)(param_2 + 0x20);
  uStack_80 = *(uint *)(param_2 + 4);
  ppppppuVar16 = (undefined8 ******)(ulong)uStack_80;
  ppppppuStack_88 = ppppppuVar15;
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar2 = 1;
    FUN_0066d7a4();
    *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  }
  pppppppuVar3 = (undefined8 *******)(unaff_x19 + 0x108);
  ppppppuVar14 = &ppppppuStack_88;
  FUN_00666bec();
  pppppppuVar4 = pppppppuVar3;
  ppppppuVar6 = ppppppuVar14;
  FUN_00666c7c();
  if (pppppppuVar4 != (undefined8 *******)0x0) {
    if (ppppppuStack_88 == pppppppuVar4[(long)(int)ppppppuVar6 * 3 + 2]) {
      if (*(int *)(pppppppuVar4 + (long)(int)ppppppuVar6 * 3 + 3) <= (int)uStack_80) {
        return 0;
      }
    }
    else if (pppppppuVar4[(long)(int)ppppppuVar6 * 3 + 2] <= ppppppuStack_88) {
      return 0;
    }
  }
  bVar11 = *(byte *)((long)pppppppuVar3 + 0xb);
  pppppppuStack_78 = pppppppuVar3;
  ppppppuStack_70 = ppppppuVar14;
  if (bVar11 == 0) {
    pppppppuVar4 = &pppppppuStack_78;
    func_0x0066c47c();
    ppppppuVar14 = (undefined8 ******)(ulong)((int)ppppppuStack_70 + 1U);
    ppppppuStack_70 = (undefined8 ******)CONCAT44(ppppppuStack_70._4_4_,(int)ppppppuStack_70 + 1U);
    bVar11 = *(byte *)((long)pppppppuStack_78 + 0xb);
  }
  pppppppuVar3 = pppppppuStack_78;
  uVar13 = (uint)ppppppuVar14;
  uVar8 = 10;
  if (bVar11 != 0) {
    uVar8 = (uint)bVar11;
  }
  pppppppuVar5 = pppppppuStack_78;
  if (*(byte *)((long)pppppppuStack_78 + 10) == uVar8) {
    if (uVar8 < 10) {
      uVar8 = (uVar8 & 0x7f) << 1;
      if (9 < uVar8) {
        uVar8 = 10;
      }
      pppppppuVar5 = (undefined8 *******)(ulong)uVar8;
      FUN_0066d7a4();
      bVar11 = *(byte *)((long)pppppppuVar3 + 10);
      for (lVar9 = 0x10; (ulong)bVar11 * -0x18 + lVar9 != 0x10; lVar9 = lVar9 + 0x18) {
        puVar12 = (undefined8 *)((long)pppppppuVar3 + lVar9);
        puVar1 = (undefined8 *)((long)pppppppuVar5 + lVar9);
        uVar17 = puVar12[1];
        uVar2 = *puVar12;
        puVar1[2] = puVar12[2];
        puVar1[1] = uVar17;
        *puVar1 = uVar2;
      }
      *(undefined1 *)((long)pppppppuVar5 + 10) = *(undefined1 *)((long)pppppppuVar3 + 10);
      *(undefined1 *)((long)pppppppuVar3 + 10) = 0;
      pppppppuStack_78 = pppppppuVar5;
      FUN_00665b84();
      *(undefined8 ********)(unaff_x19 + 0x108) = pppppppuVar5;
      *(undefined8 ********)(unaff_x19 + 0x110) = pppppppuVar5;
      pppppppuVar4 = pppppppuVar3;
    }
    else {
      pppppppuVar4 = (undefined8 *******)(unaff_x19 + 0x108);
      FUN_0066d7fc(pppppppuVar4,&pppppppuStack_78);
      uVar13 = (uint)(byte)ppppppuStack_70;
      pppppppuVar5 = pppppppuStack_78;
    }
  }
  uVar7 = (ulong)(uVar13 & 0xff);
  bVar11 = *(byte *)((long)pppppppuVar5 + 10);
  if ((uVar13 & 0xff) < (uint)bVar11) {
    uVar10 = (ulong)(bVar11 - uVar13) & 0xff;
    pppppppuVar3 = pppppppuVar5 + uVar7 * 3 + uVar10 * 3 + -1;
    for (lVar9 = uVar10 * -0x18; lVar9 != 0; lVar9 = lVar9 + 0x18) {
      pppppppuVar3[4] = pppppppuVar3[1];
      pppppppuVar3[3] = *pppppppuVar3;
      pppppppuVar3[5] = pppppppuVar3[2];
      pppppppuVar3 = pppppppuVar3 + -3;
    }
    bVar11 = *(byte *)((long)pppppppuVar5 + 10);
  }
  pppppppuVar5[uVar7 * 3 + 2] = ppppppuVar15;
  pppppppuVar5[uVar7 * 3 + 3] = ppppppuVar16;
  pppppppuVar5[uVar7 * 3 + 4] = unaff_x20;
  bVar11 = bVar11 + 1;
  *(byte *)((long)pppppppuVar5 + 10) = bVar11;
  if ((*(char *)((long)pppppppuVar5 + 0xb) == '\0') && (uVar8 = (uVar13 & 0xff) + 1, uVar8 < bVar11)
     ) {
    while (uVar8 < bVar11) {
      func_0x00675b34();
      ppppppuVar15 = pppppppuVar4[(byte)(bVar11 - 1)];
      pppppppuVar4 = pppppppuVar5;
      FUN_0066c844();
      pppppppuVar4[bVar11] = ppppppuVar15;
      *(byte *)(ppppppuVar15 + 1) = bVar11;
      bVar11 = bVar11 - 1;
    }
  }
  pppppppuVar3 = pppppppuStack_78;
  *(long *)(unaff_x19 + 0x118) = *(long *)(unaff_x19 + 0x118) + 1;
  uVar7 = (ulong)ppppppuStack_70 & 0xff;
  puVar12 = *(undefined8 **)(unaff_x19 + 400);
  if (puVar12 < *(undefined8 **)(unaff_x19 + 0x198)) {
    ppppppuVar15 = pppppppuStack_78[uVar7 * 3 + 2];
    puVar12[1] = pppppppuStack_78[uVar7 * 3 + 3];
    *puVar12 = ppppppuVar15;
    puVar12 = puVar12 + 2;
  }
  else {
    lVar9 = unaff_x19 + 0x188;
    FUN_00666290(lVar9,((long)puVar12 - *(long *)(unaff_x19 + 0x188) >> 4) + 1);
    FUN_006662fc(&pppppppuStack_78,lVar9,
                 *(long *)(unaff_x19 + 400) - *(long *)(unaff_x19 + 0x188) >> 4,unaff_x19 + 0x198);
    ppppppuVar15 = pppppppuVar3[uVar7 * 3 + 2];
    puStack_68[1] = pppppppuVar3[uVar7 * 3 + 3];
    *puStack_68 = ppppppuVar15;
    puStack_68 = puStack_68 + 2;
    FUN_006662d0(unaff_x19 + 0x188,&pppppppuStack_78);
    puVar12 = *(undefined8 **)(unaff_x19 + 400);
    FUN_00666350(&pppppppuStack_78);
  }
  *(undefined8 **)(unaff_x19 + 400) = puVar12;
  return 1;
}



/* Entry: 00655344; end: 006554ab;  */

void FUN_00655344(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  char in_NG;
  char in_OV;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  undefined8 *extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  long extraout_x11_00;
  long unaff_x20;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  func_0x00676e00();
  func_0x00674c64();
  FUN_0054a274(&stack0x00000008,param_2);
  Hint_Prefetch(*(undefined8 *)(unaff_x20 + 0x120),0,2,0);
  func_0x00674ed8(*(undefined8 *)(unaff_x20 + 0x120));
  uVar1 = extraout_x11;
  puVar4 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar4 = &stack0x00000008;
  }
  uVar5 = unaff_x20 + 0x120;
  FUN_0066696c(uVar5,puVar4,uVar1);
  lVar9 = 0;
  uVar10 = *(ulong *)(unaff_x20 + 0x130);
  func_0x00674f64(*(ulong *)(unaff_x20 + 0x120) >> 0xc ^ uVar5 >> 7);
  uVar11 = extraout_x8_00;
  while( true ) {
    uVar11 = uVar11 & uVar10;
    func_0x00674f7c();
    while ((extraout_x8_01 & 0x8080808080808080) != 0) {
      func_0x00676ae4();
      uVar8 = uVar11 + (extraout_x8_02 >> 3) & uVar10;
      func_0x00676d28(*(long *)(unaff_x20 + 0x128) + uVar8 * 0x20);
      uVar2 = in_stack_00000010;
      puVar4 = in_stack_00000008;
      if (-1 < (long)in_stack_00000018) {
        uVar2 = in_stack_00000018 >> 0x38;
        puVar4 = &stack0x00000008;
      }
      uVar6 = extraout_x10_00;
      if (-1 < extraout_x9) {
        uVar6 = extraout_x8_03;
      }
      lVar3 = extraout_x11_00;
      if (-1 < (int)extraout_x9) {
        lVar3 = extraout_x9;
      }
      func_0x00465a14(uVar6,lVar3,puVar4,uVar2);
      if ((uVar6 & 1) != 0) goto LAB_00655450;
      func_0x00676acc();
    }
    func_0x006745a8();
    if ((extraout_x8_04 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar11 = lVar9 + uVar11;
  }
  uVar8 = unaff_x20 + 0x120;
  FUN_0066dc0c(uVar8,uVar5);
  func_0x00676428(*(long *)(unaff_x20 + 0x128) + uVar8 * 0x20,in_stack_00000008);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = (undefined8 *)0x0;
  *(undefined8 *)(extraout_x8_05 + 0x18) = 0;
LAB_00655450:
  lVar9 = *(long *)(unaff_x20 + 0x128);
  func_0x00674d6c();
  plVar7 = (long *)(lVar9 + uVar8 * 0x20 + 0x18);
  lVar9 = *plVar7;
  if (lVar9 == 0) {
    __Znwm(0x48);
    FUN_006696a4();
    in_stack_00000008 = (undefined8 *)0x0;
    func_0x00675e8c();
    FUN_0066dd54();
    FUN_0066dd30(&stack0x00000008);
    lVar9 = *plVar7;
  }
  func_0x00676ddc(lVar9);
  return;
}



/* Entry: 006554ac; end: 0065556b;  */

int * FUN_006554ac(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_78 [16];
  long *plStack_68;
  undefined8 *puStack_58;
  
  func_0x00676464();
  if (param_2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((long)param_2 + 8);
    __Znwm();
    puStack_58 = (undefined8 *)(param_1 + 0xa8);
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 < (long *)*puStack_58) {
      plVar6 = plVar5 + 1;
      *plVar5 = (long)piVar3;
    }
    else {
      piVar4 = piVar3;
      func_0x00676cec(*(undefined8 *)(param_1 + 0x98));
      func_0x0066647c();
      lVar1 = *(long *)(param_1 + 0x98);
      lVar2 = *(long *)(param_1 + 0xa0);
      if (piVar4 != (int *)0x0) {
        FUN_006664d0();
      }
      func_0x00676a2c(lVar2 - lVar1);
      plStack_68 = extraout_x8 + 1;
      *extraout_x8 = (long)piVar3;
      FUN_006664a4(param_1 + 0x98,auStack_78);
      plVar6 = *(long **)(param_1 + 0xa0);
      func_0x006664f8(auStack_78);
    }
    *(long **)(param_1 + 0xa0) = plVar6;
    piVar4 = piVar3 + 2;
    *piVar3 = param_2;
  }
  return piVar4;
}



/* Entry: 0065556c; end: 0065571b;  */

void FUN_0065556c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x00675db8();
  uVar17 = 0;
  uVar10 = (ulong)(*(uint *)(param_1[1] + 0x18) &
                  ((int)*(uint *)(param_1[1] + 0x18) >> 0x1f ^ 0xffffffffU));
  do {
    cVar5 = SBORROW8(uVar17,uVar10);
    cVar6 = (long)(uVar17 - uVar10) < 0;
    bVar7 = uVar17 == uVar10;
    if (bVar7) {
      return;
    }
    lVar3 = *param_1;
    func_0x006753e0();
    plVar1 = extraout_x8;
    if (!bVar7) {
      plVar1 = extraout_x10;
    }
    lVar12 = *plVar1;
    iVar4 = *(int *)(lVar12 + 0x18);
    puVar13 = *(undefined4 **)(lVar12 + 0x20);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    func_0x006759a0();
    for (lVar14 = (long)iVar4 << 2; lVar14 != 0; lVar14 = lVar14 + -4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&stack0x00000018)
      ;
      FUN_0066dd7c(&stack0x00000018,*puVar13);
      puVar13 = puVar13 + 1;
    }
    Hint_Prefetch(*(undefined8 *)(lVar3 + 0xa0),0,2,0);
    func_0x00674ec4(*(undefined8 *)(lVar3 + 0xa0));
    uVar2 = extraout_x11;
    puVar9 = extraout_x10_00;
    if (cVar6 == cVar5) {
      uVar2 = extraout_x8_00;
      puVar9 = &stack0x00000018;
    }
    uVar8 = lVar3 + 0xa0;
    FUN_0066696c(uVar8,puVar9,uVar2);
    lVar14 = 0;
    uVar16 = *(ulong *)(lVar3 + 0xb0);
    uVar11 = *(ulong *)(lVar3 + 0xa0) >> 0xc ^ uVar8 >> 7;
    while( true ) {
      uVar11 = uVar11 & uVar16;
      func_0x006753d4();
      while ((extraout_x8_01 & 0x8080808080808080) != 0) {
        func_0x006763d4();
        uVar15 = uVar11 + (extraout_x8_02 >> 3) & uVar16;
        puVar9 = &stack0x00000018;
        FUN_0066de28(puVar9,*(long *)(lVar3 + 0xa8) + uVar15 * 0x20);
        if (((ulong)puVar9 & 1) != 0) goto LAB_006556d0;
        func_0x006763c8();
      }
      func_0x00674774();
      if ((extraout_x8_03 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar11 = lVar14 + uVar11;
    }
    uVar15 = lVar3 + 0xa0;
    func_0x0066ddb8(uVar15,uVar8);
    func_0x00676428(*(long *)(lVar3 + 0xa8) + uVar15 * 0x20,in_stack_00000018);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    *(undefined8 *)(extraout_x8_04 + 0x18) = 0;
LAB_006556d0:
    *(long *)(*(long *)(lVar3 + 0xa8) + uVar15 * 0x20 + 0x18) = lVar12;
    func_0x00674d80();
    uVar17 = uVar17 + 1;
  } while( true );
}



/* Entry: 0065571c; end: 006557a7;  */

void FUN_0065571c(void)

{
  dword *pdVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00674ad8();
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined8 *)pdVar1 = 0;
  *unaff_x19 = pdVar1;
  unaff_x19[1] = unaff_x21;
  unaff_x19[3] = 0;
  unaff_x19[4] = 0;
  unaff_x19[2] = unaff_x20;
  uVar2 = 0x1a0;
  __Znwm();
  FUN_00653e68();
  unaff_x19[5] = uVar2;
  *(undefined1 *)(unaff_x19 + 6) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x31) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x34) = 0;
  func_0x00674868();
  unaff_x19[7] = extraout_x8;
  unaff_x19[9] = 0;
  unaff_x19[8] = 0;
  unaff_x19[0xb] = 0;
  unaff_x19[10] = 0;
  return;
}



/* Entry: 006557a8; end: 006557c3;  */

bool FUN_006557a8(long param_1)

{
  func_0x0066df38();
  return param_1 != 0;
}



/* Entry: 006557c4; end: 00655877;  */

undefined8 FUN_006557c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x006755c0();
  func_0x00674ad8();
  Hint_Prefetch(*(undefined8 *)(param_1 + 0xe8),0,2,0);
  func_0x00675f20(*(undefined8 *)(param_1 + 0xe8));
  lVar3 = 0;
  uVar1 = *(ulong *)(unaff_x19 + 0xf8);
  func_0x006745f4(*(ulong *)(unaff_x19 + 0xe8) >> 0xc);
  uVar4 = extraout_x8;
  while( true ) {
    uVar4 = uVar4 & uVar1;
    func_0x00674f7c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      uVar2 = (extraout_x8_00 & 0x8080808080808080) >> 7;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      func_0x006753c8();
      func_0x00465a14();
      if ((param_1 & 1) != 0) {
        return *(undefined8 *)
                (*(long *)(unaff_x19 + 0xf0) +
                (uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar1) * 8);
      }
      func_0x00675f08();
    }
    func_0x006745a8();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  return 0;
}



/* Entry: 00655878; end: 006558fb;  */

undefined8 FUN_00655878(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000000b6c800 & 1) == 0) {
    uVar1 = 0xb6c800;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x00676800();
      FUN_006826c8();
      FUN_00666acc();
      uRam0000000000b6c7f8 = uVar1;
      ___cxa_guard_release(0xb6c800);
    }
  }
  return uRam0000000000b6c7f8;
}



/* Entry: 006558fc; end: 00655997;  */

long FUN_006558fc(void)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000000b6c7f0 & 1) == 0) {
    lVar1 = 0xb6c7f0;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x006767ec();
      lVar2 = lVar1;
      FUN_00655878();
      FUN_0065571c(lVar1,lVar2,0);
      *(undefined2 *)(lVar1 + 0x30) = 0x100;
      FUN_00655998();
      lRam0000000000b6c7e8 = lVar1;
      ___cxa_guard_release(0xb6c7f0);
    }
  }
  return lRam0000000000b6c7e8;
}



/* Entry: 00655998; end: 006559e7;  */

undefined8 FUN_00655998(undefined8 param_1)

{
  func_0x006768e4(FUN_0066e008);
  return param_1;
}



/* Entry: 006559e8; end: 00655a67;  */

undefined1 * FUN_006559e8(undefined8 *param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  undefined1 *puVar8;
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined auStack_160 [216];
  undefined8 uStack_88;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  FUN_006558fc();
  puVar2 = auStack_28;
  func_0x00666688(puVar2,*param_1);
  FUN_00655878();
  FUN_00680a18();
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = auStack_28;
    FUN_006666b4(puVar2);
    return puVar2;
  }
  func_0x00674bbc();
  puVar4 = &UNK_00910485;
  uVar7 = 0x8b6;
  FUN_00776794(auStack_38);
  func_0x00676738();
  func_0x00675498();
  FUN_006666b4();
  func_0x00674bc8();
  func_0x00674b00();
  func_0x006743c8();
  uStack_88 = extraout_x8;
  func_0x006757e0();
  uVar6 = *unaff_x21;
  func_0x00675b2c();
  if (unaff_x21[1] != 0) {
    func_0x00675ec0(unaff_x21[5]);
    func_0x00675fb8(unaff_x21[5]);
  }
  puVar2 = (undefined1 *)unaff_x21[5];
  func_0x006750f0();
  FUN_006557c4();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)unaff_x21[3];
    if (puVar2 != (undefined1 *)0x0) {
      func_0x006750f0();
      FUN_00655a68();
      if (puVar2 != (undefined1 *)0x0) goto LAB_00655ac4;
    }
    puVar4 = auStack_160;
    func_0x00674b10();
    FUN_00655b64();
    if ((int)puVar2 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar2 = (undefined1 *)unaff_x21[5];
      func_0x006750f0();
      FUN_006557c4();
      puVar8 = puVar2;
    }
    bVar1 = true;
  }
  else {
LAB_00655ac4:
    bVar1 = false;
    puVar8 = puVar2;
  }
  func_0x00675210();
  if (bVar1) {
    func_0x00675f90();
    in_ZR = (int)puVar2 == 0;
    if ((bool)in_ZR) {
      puVar8 = (undefined1 *)0x0;
    }
  }
  func_0x00675428();
  func_0x00674120(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00675428();
    func_0x00674bc8();
    if (*(long *)(puVar2 + 8) != 0) {
      uVar3 = *(long *)(puVar2 + 0x28) + 0x18;
      uStack_1b0 = uVar6;
      uStack_1a8 = uVar7;
      puStack_1a0 = puVar8;
      FUN_006557a8(uVar3,&uStack_1b0);
      if ((uVar3 & 1) == 0) {
        FUN_0065677c(puVar4);
        lVar5 = *(long *)(puVar2 + 8);
        FUN_006567b4(lVar5,uStack_1b0,uStack_1a8,puVar4);
        if ((int)lVar5 != 0) {
          func_0x00674f10();
          FUN_00656814();
          if (lVar5 != 0) {
            return (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        FUN_00656910(auStack_1c8,*(long *)(puVar2 + 0x28) + 0x18,&uStack_1b0);
      }
    }
    return (undefined1 *)0x0;
  }
  return puVar8;
}



/* Entry: 00655a68; end: 00655b63;  */

long FUN_00655a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_120 [216];
  undefined8 uStack_48;
  
  func_0x00674b00();
  func_0x006743c8();
  uStack_48 = extraout_x8;
  func_0x006757e0();
  uVar5 = *unaff_x21;
  func_0x00675b2c();
  if (unaff_x21[1] != 0) {
    func_0x00675ec0(unaff_x21[5]);
    func_0x00675fb8(unaff_x21[5]);
  }
  lVar2 = unaff_x21[5];
  func_0x006750f0();
  FUN_006557c4();
  if (lVar2 == 0) {
    lVar2 = unaff_x21[3];
    if (lVar2 != 0) {
      func_0x006750f0();
      FUN_00655a68();
      if (lVar2 != 0) goto LAB_00655ac4;
    }
    param_4 = auStack_120;
    func_0x00674b10();
    FUN_00655b64();
    if ((int)lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = unaff_x21[5];
      func_0x006750f0();
      FUN_006557c4();
      lVar4 = lVar2;
    }
    bVar1 = true;
  }
  else {
LAB_00655ac4:
    bVar1 = false;
    lVar4 = lVar2;
  }
  func_0x00675210();
  if (bVar1) {
    func_0x00675f90();
    in_ZR = (int)lVar2 == 0;
    if ((bool)in_ZR) {
      lVar4 = 0;
    }
  }
  func_0x00675428();
  func_0x00674120(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00675428();
    func_0x00674bc8();
    if (*(long *)(lVar2 + 8) != 0) {
      uVar3 = *(long *)(lVar2 + 0x28) + 0x18;
      uStack_170 = uVar5;
      uStack_168 = param_3;
      lStack_160 = lVar4;
      FUN_006557a8(uVar3,&uStack_170);
      if ((uVar3 & 1) == 0) {
        FUN_0065677c(param_4);
        lVar4 = *(long *)(lVar2 + 8);
        FUN_006567b4(lVar4,uStack_170,uStack_168,param_4);
        if ((int)lVar4 != 0) {
          func_0x00674f10();
          FUN_00656814();
          if (lVar4 != 0) {
            return 1;
          }
        }
        FUN_00656910(auStack_188,*(long *)(lVar2 + 0x28) + 0x18,&uStack_170);
      }
    }
    return 0;
  }
  return lVar4;
}



/* Entry: 00655b64; end: 00655c03;  */

undefined8 FUN_00655b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(long *)(param_1 + 0x28) + 0x18;
    uStack_40 = param_2;
    uStack_38 = param_3;
    FUN_006557a8(uVar1,&uStack_40);
    if ((uVar1 & 1) == 0) {
      FUN_0065677c(param_4);
      lVar2 = *(long *)(param_1 + 8);
      FUN_006567b4(lVar2,uStack_40,uStack_38,param_4);
      if ((int)lVar2 != 0) {
        func_0x00674f10();
        FUN_00656814();
        if (lVar2 != 0) {
          return 1;
        }
      }
      FUN_00656910(auStack_58,*(long *)(param_1 + 0x28) + 0x18,&uStack_40);
    }
  }
  return 0;
}



/* Entry: 00655c04; end: 00655c4b;  */

undefined1 * FUN_00655c04(undefined1 *param_1)

{
  switch(*param_1) {
  case 1:
  case 2:
  case 4:
  case 7:
    goto code_r0x00655c38;
  case 3:
  case 5:
  case 8:
    param_1 = *(undefined1 **)(param_1 + 0x10);
code_r0x00655c38:
    return *(undefined1 **)(param_1 + 0x10);
  default:
    return (undefined1 *)0x0;
  case 9:
    return param_1;
  case 10:
    return *(undefined1 **)(param_1 + 8);
  }
}



/* Entry: 00655c4c; end: 00655c9f;  */

undefined8 FUN_00655c4c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00675224();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_0065449c(uVar1);
  func_0x00675120();
  if (!(bool)in_ZR) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 00655ca0; end: 00655deb;  */

long * FUN_00655ca0(long *param_1,long param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  func_0x006743c8();
  uStack_48 = extraout_x8;
  uVar3 = param_3;
  if (*(int *)(param_2 + 0x88) == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    func_0x00675410();
    if (*param_1 != 0) {
      lStack_120 = *param_1;
      FUN_00567614();
      plVar1 = (long *)unaff_x21[5];
      func_0x00675854();
      param_1 = plVar1;
      func_0x00675f98();
      if (plVar1 != (long *)0x0) goto LAB_00655da4;
    }
    func_0x006757e0();
    param_2 = *unaff_x21;
    func_0x00675b2c();
    if (unaff_x21[1] != 0) {
      func_0x00675ec0(unaff_x21[5]);
      func_0x00675fb8(unaff_x21[5]);
    }
    param_1 = (long *)unaff_x21[5];
    func_0x00675854();
    if ((param_1 == (long *)0x0) &&
       ((param_1 = (long *)unaff_x21[3], param_1 == (long *)0x0 ||
        (uVar3 = param_3, FUN_00655ca0(), param_2 = unaff_x20, param_1 == (long *)0x0)))) {
      func_0x006753c8();
      uVar3 = param_3;
      FUN_00655e48();
      if ((int)param_1 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        param_1 = (long *)unaff_x21[5];
        func_0x00675854();
        plVar4 = param_1;
      }
      plVar1 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar4 = param_1;
      plVar1 = param_1;
    }
    func_0x00675210();
    if ((int)unaff_x20 != 0) {
      func_0x00675f90();
      in_ZR = (int)param_1 == 0;
      plVar1 = plVar4;
      if ((bool)in_ZR) {
        plVar1 = (long *)0x0;
      }
    }
    func_0x00675428();
  }
LAB_00655da4:
  func_0x00674120(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar4 = param_1;
  func_0x00675428();
  func_0x00674bc8();
  plVar2 = &lStack_160;
  pcStack_138 = FUN_00655dec;
  plVar1 = plVar4 + 0x21;
  lStack_160 = param_2;
  uStack_158 = uVar3;
  lStack_150 = unaff_x20;
  plStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_00666b20();
  if ((long *)plVar4[0x22] == plVar1 && (uint)plVar2 == (uint)*(byte *)(plVar4[0x22] + 10)) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)plVar1[((ulong)plVar2 & 0xff) * 3 + 4];
  }
  return plVar1;
}



/* Entry: 00655dec; end: 00655e47;  */

undefined8 FUN_00655dec(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar3 = &uStack_30;
  lVar1 = param_1 + 0x108;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_00666b20();
  if (*(long *)(param_1 + 0x110) == lVar1 &&
      (uint)puVar3 == (uint)*(byte *)(*(long *)(param_1 + 0x110) + 10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + ((ulong)puVar3 & 0xff) * 0x18 + 0x20);
  }
  return uVar2;
}



/* Entry: 00655e48; end: 00655ef3;  */

long * FUN_00655e48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0065677c();
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))();
    if ((int)plVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00675bf8(*(undefined8 *)(param_4 + 0xb0));
      FUN_006557c4();
      if (lVar2 == 0) {
        func_0x00675e8c();
        FUN_00656814();
        plVar1 = (long *)(ulong)(lVar2 != 0);
      }
      else {
        plVar1 = (long *)0x0;
      }
    }
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 00655ef4; end: 00655f47;  */

long FUN_00655ef4(long param_1,long param_2)

{
  long lVar1;
  long unaff_x21;
  
  if (*(int *)(param_2 + 0x88) != 0) {
    func_0x00675410();
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_00655dec();
    if ((lVar1 == 0) &&
       ((lVar1 = *(long *)(unaff_x21 + 0x18), lVar1 == 0 || (FUN_00655ef4(), lVar1 == 0)))) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 00655f48; end: 00656023;  */

long FUN_00655f48(long param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x88) == 0) {
    return 0;
  }
  func_0x00676350();
  func_0x00655c70();
  if ((param_1 == 0) || (in_ZR = *(long *)(param_1 + 0x20) == param_2, !(bool)in_ZR)) {
    func_0x00676344(*(undefined8 *)(param_2 + 0x20));
    if ((bool)in_ZR) {
      func_0x00675f74();
      func_0x00655c4c();
      if (param_1 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0x8c);
      lVar3 = param_1;
      for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar4 != 0;
          lVar4 = lVar4 + 0x58) {
        lVar5 = *(long *)(param_1 + 0x60);
        if (*(long *)(lVar5 + lVar4 + 0x20) == param_2) {
          func_0x00675444();
          bVar2 = (int)lVar3 == 0xb;
          if (((bVar2) && (func_0x00675c1c(*(undefined1 *)(lVar5 + lVar4 + 1)), bVar2)) &&
             (func_0x0067528c(), lVar3 == param_1)) {
            return lVar5 + lVar4;
          }
        }
      }
    }
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00656024; end: 00656067;  */

undefined8 FUN_00656024(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00674c84();
  }
  if ((*(byte *)(param_1 + 2) & 0xfe) == 10) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 00656068; end: 0065609b;  */

void FUN_00656068(long param_1,undefined8 param_2)

{
  FUN_0065609c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98),param_1,param_2);
  return;
}



/* Entry: 0065609c; end: 00656183;  */

long FUN_0065609c(ulong param_1,long param_2,uint param_3)

{
  long extraout_x8;
  ulong uVar1;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong uVar2;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x11;
  byte bVar3;
  int extraout_w12;
  ulong uVar4;
  long extraout_x13;
  ulong extraout_x14;
  ulong extraout_x15;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  
  func_0x00674c64();
  if (((param_2 == 0) || ((int)param_3 < 1)) || (*(ushort *)(unaff_x19 + 2) < param_3)) {
    func_0x0067689c(*(undefined8 *)(unaff_x20 + 0x38));
    uVar2 = *(ulong *)(unaff_x20 + 0x48);
    uVar1 = *(ulong *)(unaff_x20 + 0x38);
    uVar4 = uVar1 >> 0xc ^ param_1 >> 7;
    bVar3 = (byte)param_1 & 0x7f;
    bVar6 = bVar3;
    bVar7 = bVar3;
    bVar8 = bVar3;
    bVar9 = bVar3;
    bVar10 = bVar3;
    bVar11 = bVar3;
    bVar12 = bVar3;
    while( true ) {
      uVar14 = *(undefined8 *)(uVar1 + (uVar4 & uVar2));
      uVar4 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar12),
                       CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar11),
                                CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar10),
                                         CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar9),
                                                  CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar8)
                                                           ,CONCAT12(-((byte)((ulong)uVar14 >> 0x10)
                                                                      == bVar7),
                                                                     CONCAT11(-((byte)((ulong)uVar14
                                                                                      >> 8) == bVar6
                                                                               ),-((byte)uVar14 ==
                                                                                  bVar3)))))))) &
              0x8080808080808080;
      while (uVar4 != 0) {
        func_0x00676128();
        lVar5 = *(long *)(extraout_x11 + (extraout_x15 & extraout_x10) * 8);
        if (*(long *)(lVar5 + 0x20) == unaff_x19 && *(int *)(lVar5 + 4) == extraout_w12) {
          if (extraout_x9 == 0) {
            return 0;
          }
          return lVar5;
        }
        uVar4 = extraout_x14 - 1 & extraout_x14;
      }
      uVar13 = (uint)uVar14;
      func_0x006761e8();
      if ((uVar13 & 1) != 0) break;
      uVar4 = extraout_x8 + 8 + extraout_x13;
      uVar1 = extraout_x9_00;
      uVar2 = extraout_x10_00;
    }
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x38) + (ulong)param_3 * 0x58 + -0x58;
  }
  return lVar5;
}



/* Entry: 00656184; end: 006561b3;  */

void FUN_00656184(void)

{
  func_0x00675224();
  FUN_006561b4();
  return;
}



/* Entry: 006561b4; end: 00656227;  */

void FUN_006561b4(long param_1)

{
  long lStack_38;
  
  func_0x006753bc();
  lStack_38 = param_1;
  FUN_00666e98(param_1 + 0x20,&stack0xffffffffffffffb0,&lStack_38);
  FUN_00666eb8();
  return;
}



/* Entry: 00656228; end: 0065625b;  */

long FUN_00656228(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00675224();
  func_0x006767c4();
  func_0x00676be4();
  if ((bool)in_ZR) {
    if ((*(byte *)(param_1 + 1) & 8) != 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0065625c; end: 0065635f;  */

void FUN_0065625c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  ulong extraout_x14;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  Hint_Prefetch(*param_1,0,2,0);
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x006670f8(*param_1,&uStack_98);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  func_0x006745f4(*param_1 >> 0xc);
  func_0x00676bcc();
  uVar5 = extraout_x8;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    func_0x00674f7c();
    uVar4 = extraout_x8_00 & 0x8080808080808080;
    while (uVar4 != 0) {
      func_0x00675f14();
      puVar3 = &uStack_98;
      FUN_00667014(puVar3,uVar1 + (uVar5 + (extraout_x8_01 >> 3) & uVar2) * 8);
      func_0x0067650c();
      if (((ulong)puVar3 & 1) != 0) {
        return;
      }
      func_0x00676bcc(uVar4 - 1);
      uVar4 = extraout_x14;
    }
    func_0x006745a8();
    if ((extraout_x8_02 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return;
}



/* Entry: 00656360; end: 0065638f;  */

char * FUN_00656360(char *param_1)

{
  char *pcVar1;
  
  func_0x00675224();
  func_0x006767c4();
  pcVar1 = (char *)0x0;
  if (*param_1 == '\x06') {
    pcVar1 = param_1 + -1;
  }
  if (*param_1 != '\x05') {
    param_1 = pcVar1;
  }
  return param_1;
}



/* Entry: 00656390; end: 006563a3;  */

void FUN_00656390(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 4);
  if ((param_2 < iVar1) || ((long)*(short *)(param_1 + 2) + (long)iVar1 < (long)param_2)) {
    func_0x0067689c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x98) + 0x58));
    func_0x00675218();
    func_0x006670fc();
  }
  return;
}



/* Entry: 006563a4; end: 00656413;  */

void FUN_006563a4(long param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x38) + 4);
  if ((param_3 < iVar1) || ((long)*(short *)(param_2 + 2) + (long)iVar1 < (long)param_3)) {
    func_0x0067689c(*(undefined8 *)(param_1 + 0x58));
    func_0x00675218();
    func_0x006670fc();
  }
  return;
}



/* Entry: 00656414; end: 00656427;  */

long ** FUN_00656414(undefined8 *param_1,uint param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *plStack_218;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_58;
  
  pplVar1 = *(long ***)(param_1[2] + 0x98);
  func_0x0067409c();
  uStack_58 = extraout_x8;
  FUN_006563a4();
  pplVar5 = pplVar1;
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    plStack_138 = plVar3;
    FUN_00567614();
    func_0x0067676c();
    if (plVar2 == (long *)0x0) {
      pplVar5 = (long **)0x0;
    }
    else {
      pplVar5 = (long **)*param_1;
    }
    pplVar1 = &plStack_138;
    FUN_00666628();
    if (plVar2 == (long *)0x0) {
      plStack_218 = plVar3;
      FUN_00567528();
      func_0x0067676c();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        uStack_130 = 0x560e98;
        uStack_128 = (ulong)param_2;
        uStack_120 = 0x5606ac;
        puVar4 = (undefined8 *)&UNK_00911aee;
        FUN_0056189c(auStack_230,&UNK_00911aee,0x18,&plStack_138,2);
        func_0x006559c0();
        uVar6 = puVar4[5];
        func_0x00675de8(&plStack_138);
        func_0x0065bc54(&plStack_138,1);
        func_0x006754e8(&plStack_138);
        func_0x00666688(auStack_168,*puVar4);
        FUN_0065c5b4(&plStack_138,uVar6);
        FUN_006666b4(auStack_168);
        pplVar5 = &plStack_138;
        uVar6 = 1;
        FUN_0065bee4();
        pplVar1 = pplVar5;
        func_0x00673f90(unaff_x20[1]);
        func_0x00674500();
        pplStack_198 = pplVar1;
        uStack_190 = uVar6;
        func_0x00674e80();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        FUN_00575ddc(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar1 = &plStack_138;
        func_0x00675a18();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        FUN_004575b8(pplVar1,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00676bc0();
        FUN_004575b8(pplVar1 + 3,&uStack_200);
        func_0x00675adc();
        func_0x00675db0();
        pplVar5[1] = (long *)pplVar1;
        func_0x00674d6c();
        *(uint *)((long)pplVar5 + 4) = param_2;
        pplVar5[2] = unaff_x20;
        pplVar5[3] = (long *)&PTR_PTR_00b25f08;
        func_0x00654fac(auStack_168,unaff_x19 + 0x78,pplVar5);
        func_0x00674d88();
      }
      else {
        pplVar5 = (long **)*param_1;
      }
      pplVar1 = &plStack_218;
      FUN_0066723c();
    }
  }
  func_0x00674120(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00674d88();
    pplVar5 = &plStack_218;
    FUN_0066723c();
    func_0x00674bc8();
    func_0x006758b4();
    *(uint *)(pplVar5 + 2) = extraout_w8 | 1;
    pplVar5 = (long **)pplVar5[3];
    if (pplVar5 == (long **)0x0) {
      pplVar5 = (long **)pplVar1[1];
      if (((ulong)pplVar5 & 1) != 0) {
        func_0x00675018();
      }
      FUN_00667260();
      pplVar1[3] = (long *)pplVar5;
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 00656428; end: 006566ab;  */

long ** FUN_00656428(long **param_1,undefined8 *param_2,uint param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long **pplVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *plStack_218;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_58;
  
  func_0x0067409c();
  uStack_58 = extraout_x8;
  FUN_006563a4();
  pplVar5 = param_1;
  if (param_1 == (long **)0x0) {
    plVar2 = (long *)(unaff_x19 + 0xc0);
    plVar1 = plVar2;
    plStack_138 = plVar2;
    FUN_00567614();
    func_0x0067676c();
    if (plVar1 == (long *)0x0) {
      pplVar5 = (long **)0x0;
    }
    else {
      pplVar5 = (long **)*param_2;
    }
    param_1 = &plStack_138;
    FUN_00666628();
    if (plVar1 == (long *)0x0) {
      plStack_218 = plVar2;
      FUN_00567528();
      func_0x0067676c();
      if (plVar2 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        uStack_130 = 0x560e98;
        uStack_128 = (ulong)param_3;
        uStack_120 = 0x5606ac;
        puVar3 = (undefined8 *)&UNK_00911aee;
        FUN_0056189c(auStack_230,&UNK_00911aee,0x18,&plStack_138,2);
        func_0x006559c0();
        uVar6 = puVar3[5];
        func_0x00675de8(&plStack_138);
        func_0x0065bc54(&plStack_138,1);
        func_0x006754e8(&plStack_138);
        func_0x00666688(auStack_168,*puVar3);
        FUN_0065c5b4(&plStack_138,uVar6);
        FUN_006666b4(auStack_168);
        pplVar5 = &plStack_138;
        uVar6 = 1;
        FUN_0065bee4();
        pplVar4 = pplVar5;
        func_0x00673f90(unaff_x20[1]);
        func_0x00674500();
        pplStack_198 = pplVar4;
        uStack_190 = uVar6;
        func_0x00674e80();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        FUN_00575ddc(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar4 = &plStack_138;
        func_0x00675a18();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        FUN_004575b8(pplVar4,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00676bc0();
        FUN_004575b8(pplVar4 + 3,&uStack_200);
        func_0x00675adc();
        func_0x00675db0();
        pplVar5[1] = (long *)pplVar4;
        func_0x00674d6c();
        *(uint *)((long)pplVar5 + 4) = param_3;
        pplVar5[2] = unaff_x20;
        pplVar5[3] = (long *)&PTR_PTR_00b25f08;
        func_0x00654fac(auStack_168,unaff_x19 + 0x78,pplVar5);
        func_0x00674d88();
      }
      else {
        pplVar5 = (long **)*param_2;
      }
      param_1 = &plStack_218;
      FUN_0066723c();
    }
  }
  func_0x00674120(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00674d88();
    pplVar5 = &plStack_218;
    FUN_0066723c();
    func_0x00674bc8();
    func_0x006758b4();
    *(uint *)(pplVar5 + 2) = extraout_w8 | 1;
    pplVar5 = (long **)pplVar5[3];
    if (pplVar5 == (long **)0x0) {
      pplVar5 = (long **)param_1[1];
      if (((ulong)pplVar5 & 1) != 0) {
        func_0x00675018();
      }
      FUN_00667260();
      param_1[3] = (long *)pplVar5;
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 006566ac; end: 006566e7;  */

void FUN_006566ac(long param_1)

{
  ulong uVar1;
  uint extraout_w8;
  long unaff_x19;
  
  func_0x006758b4();
  *(uint *)(param_1 + 0x10) = extraout_w8 | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00675018();
    }
    FUN_00667260();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 006566e8; end: 0065677b;  */

long FUN_006566e8(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    if ((ulong)(*(uint *)(param_1 + 0x88) & ((int)*(uint *)(param_1 + 0x88) >> 0x1f ^ 0xffffffffU))
        * 0x28 - lVar2 == 0) {
      return 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x58) + lVar2) <= param_2) &&
       (lVar1 = *(long *)(param_1 + 0x58) + lVar2, param_2 < *(int *)(lVar1 + 4))) break;
    lVar2 = lVar2 + 0x28;
  }
  return lVar1;
}



/* Entry: 0065677c; end: 006567b3;  */

undefined8 FUN_0065677c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x006673e0();
  lStack_28 = lVar1;
  func_0x00667290(param_1 + 0xc0,&lStack_28);
  return *(undefined8 *)(*(long *)(param_1 + 200) + -8);
}



/* Entry: 006567b4; end: 00656813;  */

long * FUN_006567b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_00456d78(auStack_48,&uStack_30);
  (**(code **)(*param_1 + 0x10))(param_1,auStack_48,param_4);
  func_0x00674d6c();
  return param_1;
}



/* Entry: 00656814; end: 0065690f;  */

long FUN_00656814(undefined8 *param_1)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong extraout_x10;
  undefined8 extraout_x11;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plStack_78;
  long lStack_58;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  
  func_0x006749c4();
  FUN_005685a0(*param_1);
  *(undefined1 *)(unaff_x20 + 0x37) = 1;
  uVar7 = *(ulong *)(unaff_x19 + 0xb0) & 0xfffffffffffffffc;
  puVar6 = (undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x18);
  Hint_Prefetch(*puVar6,0,2,0);
  func_0x006769f8(*puVar6);
  uVar4 = extraout_x10;
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar4 = uVar7;
    uVar1 = extraout_x8;
  }
  puVar2 = puVar6;
  FUN_0066696c(puVar6,uVar4,uVar1);
  FUN_0066a50c(puVar6,uVar7,puVar2);
  if (puVar6 == (undefined8 *)0x0) {
    plStack_78 = &lStack_58;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 == 0) {
      FUN_00659c38(&plStack_78);
    }
    else {
      ppuStack_50 = &plStack_78;
      pcStack_48 = FUN_0066e878;
      (**(code **)(lVar3 + 0x18))(lVar3,&ppuStack_50);
    }
    if (lStack_58 == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x28);
      uVar7 = *(ulong *)(unaff_x19 + 0xb0);
      lVar3 = lVar5 + 0x18;
      uVar4 = 0;
      FUN_0066c0ec(lVar3);
      if ((uVar4 & 1) != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (*(long *)(lVar5 + 0x20) + lVar3 * 0x18,uVar7 & 0xfffffffffffffffc);
      }
    }
  }
  else {
    lStack_58 = 0;
  }
  return lStack_58;
}



/* Entry: 00656910; end: 0065692f;  */

void FUN_00656910(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_0066e3d8(&uStack_18);
  return;
}



/* Entry: 00656930; end: 006569d7;  */

void FUN_00656930(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar3 = 0;
  lStack_30 = param_2;
  uStack_28 = param_3;
  while (lVar1 = lStack_30, FUN_005bb780(lStack_30,uStack_28,0x2e,lVar3), lVar1 != -1) {
    FUN_00485b24(&lStack_30,0,lVar1);
    pbVar2 = *(byte **)(param_1 + 0x28);
    func_0x00676350();
    FUN_00654614();
    if (*pbVar2 == 0) break;
    if (1 < *pbVar2 - 9) {
      return;
    }
    lVar3 = lVar1 + 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00656930(*(long *)(param_1 + 0x18),lStack_30,uStack_28);
  }
  return;
}



/* Entry: 006569d8; end: 00656c5f;  */

char ** FUN_006569d8(undefined8 param_1,char *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  dword *pdVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  bool bVar10;
  char **ppcVar11;
  char **ppcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char **ppcVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  byte *pbVar19;
  byte *extraout_x9;
  ulong uVar21;
  undefined1 *extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar22;
  char **unaff_x19;
  long *plVar23;
  long unaff_x20;
  float fVar24;
  float fVar25;
  char *pcVar26;
  undefined1 auStack_e0 [24];
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined1 *apuStack_98 [5];
  undefined4 uStack_6c;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_50;
  code *pcStack_48;
  byte *pbVar20;
  
  func_0x006743c8();
  if ((param_2[1] & 1U) == 0) {
    func_0x00674bbc();
    FUN_00776714(&pcStack_68);
    func_0x00537a5c();
    goto LAB_00656c50;
  }
  func_0x00674c58();
  pcVar26 = param_2;
  FUN_00656c60();
  iVar5 = (int)param_2 + -1;
  cVar7 = SBORROW4(iVar5,8);
  cVar8 = (int)param_2 + -9 < 0;
  uVar9 = iVar5 == 8;
  switch(iVar5) {
  case 0:
    ppcVar12 = &pcStack_68;
    func_0x0066741c(ppcVar12,*(undefined4 *)(unaff_x20 + 0x50));
    func_0x00675d44();
    goto code_r0x00656b88;
  case 1:
    ppcVar12 = &pcStack_68;
    func_0x0066743c(ppcVar12,*(undefined8 *)(unaff_x20 + 0x50));
    func_0x00675d44();
    goto code_r0x00656b88;
  case 2:
    ppcVar12 = &pcStack_68;
    func_0x00667464(ppcVar12,*(undefined4 *)(unaff_x20 + 0x50));
    func_0x00675d44();
    goto code_r0x00656b88;
  case 3:
    ppcVar12 = &pcStack_68;
    func_0x00667484(ppcVar12,*(undefined8 *)(unaff_x20 + 0x50));
    func_0x00675d44();
code_r0x00656b88:
    func_0x0067406c();
    if ((bool)uVar9) {
      return ppcVar12;
    }
    break;
  case 4:
    pcVar26 = *(char **)(unaff_x20 + 0x50);
    func_0x0067406c();
    if ((bool)uVar9) {
      func_0x006ab6ec();
      pcStack_50 = pcVar26;
      if ((double)pcVar26 == INFINITY) {
        pcStack_60 = "inf";
        uVar9 = 1;
      }
      else {
        if ((double)pcVar26 != -INFINITY) {
          uVar9 = !NAN((double)pcVar26);
          if (NAN((double)pcVar26)) goto LAB_006ab3d8;
          pcStack_60 = "%.*g";
          pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,0xf);
          func_0x006ab730(&pcStack_48);
          FUN_006ab238(&pcStack_48,0);
          uVar9 = (double)pcVar26 == (double)pcStack_50;
          pcStack_68 = pcVar26;
          if (!(bool)uVar9) {
            pcStack_60 = "%.*g";
            uStack_6c = 0x11;
            func_0x006ab730(&pcStack_48);
          }
          FUN_006ab56c(&pcStack_48);
          goto LAB_006ab330;
        }
        pcStack_60 = "-inf";
        uVar9 = 1;
      }
      while( true ) {
        FUN_006ab518(&pcStack_48,0x20,&pcStack_60);
LAB_006ab330:
        ppcVar12 = unaff_x19;
        FUN_00425cb4();
        func_0x006ab6bc(extraout_x8_02);
        if ((bool)uVar9) break;
        ___stack_chk_fail();
LAB_006ab3d8:
        pcStack_60 = "nan";
      }
      return ppcVar12;
    }
    break;
  case 5:
    fVar24 = *(float *)(unaff_x20 + 0x50);
    func_0x0067406c();
    if ((bool)uVar9) {
      func_0x006ab6ec();
      if (fVar24 == INFINITY) {
        pcStack_68 = "inf";
        uVar9 = 1;
        goto LAB_006ab420;
      }
      if (fVar24 != -INFINITY) {
        uVar9 = !NAN(fVar24) && !NAN(fVar24);
        if (NAN(fVar24)) goto LAB_006ab50c;
        pcStack_68 = "%.*g";
        pcStack_60 = "\f";
        fVar25 = fVar24;
        func_0x006ab6d0(6);
        ___error();
        param_2[0] = '\0';
        param_2[1] = '\0';
        param_2[2] = '\0';
        param_2[3] = '\0';
        ppcVar12 = &pcStack_50;
        _strtof(ppcVar12,&pcStack_68);
        if (((((char)pcStack_50 == '\0') || (*pcStack_68 != '\0')) ||
            (___error(), *(int *)ppcVar12 != 0)) || (uVar9 = fVar25 == fVar24, !(bool)uVar9)) {
          pcStack_68 = "%.*g";
          pcStack_60 = "\f";
          func_0x006ab6d0(9);
        }
        FUN_006ab56c(&pcStack_50);
        while( true ) {
          ppcVar12 = unaff_x19;
          FUN_00425cb4();
          func_0x006ab6bc(extraout_x8_03);
          if ((bool)uVar9) break;
          ___stack_chk_fail();
LAB_006ab50c:
          pcStack_68 = "nan";
LAB_006ab420:
          pcStack_60 = (char *)0x3;
LAB_006ab444:
          FUN_006ab518(&pcStack_50,0x18,&pcStack_68);
        }
        return ppcVar12;
      }
      pcStack_68 = "-inf";
      pcStack_60 = "\f";
      uVar9 = 1;
      goto LAB_006ab444;
    }
    break;
  case 6:
    bVar10 = *(char *)(unaff_x20 + 0x50) == '\0';
    ppcVar12 = (char **)"true";
    if (bVar10) {
      ppcVar12 = (char **)"false";
    }
    func_0x0067406c();
    if (bVar10) {
      ppcVar11 = ppcVar12;
      _strlen();
      if ((char **)0x7ffffffffffffff6 < ppcVar11) {
        FUN_0040d740();
        pcStack_48 = FUN_00425d5c;
        plVar23 = (long *)ppcVar11[1];
        if (plVar23 != (long *)0x0) {
          plVar1 = plVar23 + 1;
          do {
            lVar16 = *plVar1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar16 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar16 == 0) {
            pcStack_50 = &stack0xfffffffffffffff0;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
          }
        }
        return ppcVar11;
      }
      if ((char **)((long)&MACH_HEADER.sizeofcmds + 2) < ppcVar11) {
        pdVar6 = &MACH_HEADER.flags;
        if ((dword *)((ulong)ppcVar11 | 7) != (dword *)0x17) {
          pdVar6 = (dword *)((ulong)ppcVar11 | 7);
        }
        ppcVar18 = (char **)((long)pdVar6 + 1);
        __Znwm();
        unaff_x19[1] = (char *)ppcVar11;
        unaff_x19[2] = (char *)((ulong)((long)pdVar6 + 1) | 0x8000000000000000);
        *unaff_x19 = (char *)ppcVar18;
      }
      else {
        *(byte *)((long)unaff_x19 + 0x17) = (byte)ppcVar11;
        ppcVar18 = unaff_x19;
        if (ppcVar11 == (char **)0x0) goto LAB_00425d3c;
      }
      _memmove(ppcVar18,ppcVar12,ppcVar11);
LAB_00425d3c:
      *(byte *)((long)ppcVar18 + (long)ppcVar11) = 0;
      return unaff_x19;
    }
    break;
  case 7:
    func_0x00656c80();
    func_0x0067406c();
    if ((bool)uVar9) {
code_r0x00656aa8:
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)();
      return unaff_x19;
    }
    break;
  case 8:
    if (param_3 != 0) {
      func_0x006744f4();
      puVar13 = *(undefined8 **)(unaff_x20 + 0x50);
      lVar16 = (long)*(char *)((long)puVar13 + 0x17);
      puVar14 = puVar13;
      if (lVar16 < 0) {
        puVar14 = (undefined8 *)*puVar13;
        lVar16 = puVar13[1];
      }
      pcStack_68 = param_2;
      pcStack_60 = pcVar26;
      FUN_005728bc(auStack_e0);
      func_0x006746b0();
      apuStack_98[0] = extraout_x10;
      if (cVar8 == cVar7) {
        apuStack_98[0] = auStack_e0;
      }
      func_0x006744f4();
      ppcVar12 = &pcStack_68;
      puStack_c8 = puVar14;
      lStack_c0 = lVar16;
      FUN_00575ddc(ppcVar12,apuStack_98,&puStack_c8);
      func_0x00674d64();
      goto code_r0x00656b88;
    }
    func_0x00675ea8();
    if ((int)param_2 == 0xc) {
      uVar17 = (ulong)*(char *)(*(long *)(unaff_x20 + 0x50) + 0x17);
      if ((long)uVar17 < 0) {
        uVar17 = *(ulong *)(*(long *)(unaff_x20 + 0x50) + 8);
      }
      func_0x006760c8(extraout_x8);
      if (extraout_x10_00 == extraout_x8_00) {
        *unaff_x19 = (char *)0x0;
        unaff_x19[1] = (char *)0x0;
        unaff_x19[2] = (char *)0x0;
        uVar15 = 0;
        if (uVar17 != 0) {
          if (uVar17 == 1) {
            uVar15 = 0;
            pbVar20 = extraout_x9;
          }
          else {
            lVar16 = 0;
            lVar22 = 0;
            uVar21 = uVar17 & 0xfffffffffffffffe;
            pbVar20 = extraout_x9 + uVar21;
            pbVar19 = extraout_x9 + 1;
            uVar15 = uVar21;
            do {
              lVar16 = lVar16 + (ulong)(byte)(&UNK_008140ce)[pbVar19[-1]];
              lVar22 = lVar22 + (ulong)(byte)(&UNK_008140ce)[*pbVar19];
              uVar15 = uVar15 - 2;
              pbVar19 = pbVar19 + 2;
            } while (uVar15 != 0);
            uVar15 = lVar22 + lVar16;
            if (uVar17 == uVar21) goto LAB_0057295c;
          }
          do {
            pbVar19 = pbVar20 + 1;
            uVar15 = uVar15 + (byte)(&UNK_008140ce)[*pbVar20];
            pbVar20 = pbVar19;
          } while (pbVar19 != extraout_x9 + uVar17);
        }
LAB_0057295c:
        if (uVar15 == uVar17) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
          ppcVar12 = unaff_x19;
        }
        else {
          ppcVar12 = unaff_x19;
          FUN_0053316c();
          if (uVar17 != 0) {
            ppcVar11 = (char **)*unaff_x19;
            pbVar20 = extraout_x9;
            if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
              ppcVar11 = unaff_x19;
            }
            do {
              bVar3 = *pbVar20;
              bVar4 = (&UNK_008140ce)[bVar3];
              ppcVar12 = (char **)(ulong)bVar4;
              if (bVar4 == 2) {
                ppcVar18 = ppcVar11;
                if (bVar3 < 0x22) {
                  if (bVar3 == 9) {
                    *(undefined2 *)ppcVar11 = 0x745c;
                    ppcVar18 = (char **)((long)ppcVar11 + 2);
                  }
                  else if (bVar3 == 10) {
                    *(undefined2 *)ppcVar11 = 0x6e5c;
                    ppcVar18 = (char **)((long)ppcVar11 + 2);
                  }
                  else if (bVar3 == 0xd) {
                    *(undefined2 *)ppcVar11 = 0x725c;
                    ppcVar18 = (char **)((long)ppcVar11 + 2);
                  }
                }
                else if (bVar3 == 0x22) {
                  ppcVar18 = (char **)((long)ppcVar11 + 2);
                  *(undefined2 *)ppcVar11 = 0x225c;
                }
                else if (bVar3 == 0x27) {
                  ppcVar18 = (char **)((long)ppcVar11 + 2);
                  *(undefined2 *)ppcVar11 = 0x275c;
                }
                else if (bVar3 == 0x5c) {
                  ppcVar18 = (char **)((long)ppcVar11 + 2);
                  *(undefined2 *)ppcVar11 = 0x5c5c;
                }
              }
              else if (bVar4 == 1) {
                *(byte *)ppcVar11 = bVar3;
                ppcVar18 = (char **)((long)ppcVar11 + 1);
              }
              else {
                *(byte *)ppcVar11 = 0x5c;
                *(byte *)((long)ppcVar11 + 1) = bVar3 >> 6 | 0x30;
                *(byte *)((long)ppcVar11 + 2) = bVar3 >> 3 & 7 | 0x30;
                uVar2 = bVar3 & 7 | 0x30;
                ppcVar12 = (char **)(ulong)uVar2;
                *(byte *)((long)ppcVar11 + 3) = (byte)uVar2;
                ppcVar18 = (char **)((long)ppcVar11 + 4);
              }
              pbVar20 = pbVar20 + 1;
              uVar17 = uVar17 - 1;
              ppcVar11 = ppcVar18;
            } while (uVar17 != 0);
          }
        }
        return ppcVar12;
      }
    }
    else {
      func_0x006760c8(extraout_x8);
      if (extraout_x10_01 == extraout_x8_01) goto code_r0x00656aa8;
    }
    break;
  default:
    goto LAB_00656c2c;
  }
  ___stack_chk_fail();
LAB_00656c2c:
  func_0x00674bbc();
  FUN_0077670c(&pcStack_68);
  func_0x00656cac();
  FUN_005558a0();
LAB_00656c50:
  ppcVar12 = &pcStack_68;
  FUN_005558a0();
  func_0x00674bc8();
  FUN_006538b4();
  return (char **)(ulong)*(uint *)(&UNK_00823b54 + ((ulong)ppcVar12 & 0xffffffff) * 4);
}



/* Entry: 00656c60; end: 00656c7f;  */

undefined4 FUN_00656c60(ulong param_1)

{
  FUN_006538b4();
  return *(undefined4 *)(&UNK_00823b54 + (param_1 & 0xffffffff) * 4);
}



/* Entry: 00656c80; end: 00656cd7;  */

undefined8 FUN_00656c80(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00674c84();
  }
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 00656cd8; end: 0065719f;  */

void FUN_00656cd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long unaff_x20;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong unaff_x30;
  
  func_0x00676464();
  func_0x006769a0(*(uint *)(param_2 + 0x10) | 1);
  if ((unaff_x30 & 1) != 0) {
    func_0x00674fb0();
  }
  func_0x00532e08(param_2 + 0xb0);
  lVar4 = (long)*(char *)(*(long *)(param_1 + 0x10) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (lVar4 != 0) {
    func_0x006769a0(*(uint *)(param_2 + 0x10) | 2);
    if ((unaff_x30 & 1) != 0) {
      func_0x00674fb0();
    }
    func_0x00532e08(param_2 + 0xb8);
  }
  if (*(int *)(param_1 + 0x20) == 999) {
    func_0x006769a0(*(uint *)(param_2 + 0x10) | 4);
    if ((unaff_x30 & 1) != 0) {
      func_0x00674fb0();
    }
    FUN_0066e51c(param_2 + 0xc0,&UNK_00910518);
  }
  else if (999 < *(int *)(param_1 + 0x20)) {
    func_0x006769a0(*(uint *)(param_2 + 0x10) | 4);
    if ((unaff_x30 & 1) != 0) {
      func_0x00674fb0();
    }
    FUN_0066e51c(param_2 + 0xc0,&UNK_0091051f);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
  }
  if (*(undefined ***)(param_1 + 0x80) != &PTR_PTR_00b25d18) {
    FUN_00657940(param_2);
    FUN_0067aefc();
  }
  lVar4 = *(long *)(param_1 + 0x88);
  func_0x00674eec();
  if (lVar4 != extraout_x8) {
    FUN_00657940(param_2);
    FUN_0066e554();
    func_0x0067d70c();
  }
  iVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x30) <= iVar6) break;
    FUN_006571a0(param_1,iVar6);
    func_0x0054d0b8(param_2 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    iVar6 = iVar6 + 1;
  }
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 0x34); lVar4 = lVar4 + 1) {
    FUN_00533cb4(param_2 + 0x90,*(undefined4 *)(*(long *)(param_1 + 0x50) + lVar4 * 4));
  }
  for (lVar4 = 0; lVar4 < *(int *)(param_1 + 0x38); lVar4 = lVar4 + 1) {
    FUN_00533cb4(param_2 + 0xa0,*(undefined4 *)(*(long *)(param_1 + 0x58) + lVar4 * 4));
  }
  func_0x00674f58();
  for (; unaff_x20 < *(int *)(param_1 + 0x3c); unaff_x20 = unaff_x20 + 1) {
    lVar7 = *(long *)(param_1 + 0x60);
    lVar5 = param_2 + 0x30;
    FUN_006674ac(lVar5);
    FUN_006571ec(lVar7 + lVar4,lVar5);
    lVar4 = lVar4 + 0x98;
  }
  func_0x00674f58();
  for (; unaff_x20 < *(int *)(param_1 + 0x40); unaff_x20 = unaff_x20 + 1) {
    lVar7 = *(long *)(param_1 + 0x68);
    lVar5 = param_2 + 0x48;
    FUN_006674f4(lVar5);
    func_0x006574b8(lVar7 + lVar4,lVar5);
    lVar4 = lVar4 + 0x58;
  }
  for (lVar5 = 0; lVar5 < *(int *)(param_1 + 0x44); lVar5 = lVar5 + 1) {
    unaff_x20 = *(long *)(param_1 + 0x70) + lVar5 * 0x40;
    lVar7 = param_2 + 0x60;
    func_0x0054d014(lVar7,0x667530);
    func_0x00674e6c();
    if ((unaff_x30 & 1) != 0) {
      func_0x00674fb0();
    }
    func_0x00532e08(lVar7 + 0x30);
    lVar10 = 0;
    for (lVar4 = 0; lVar4 < *(int *)(unaff_x20 + 0x38); lVar4 = lVar4 + 1) {
      lVar8 = *(long *)(unaff_x20 + 0x30);
      lVar9 = lVar8 + lVar10;
      lVar1 = lVar7 + 0x18;
      func_0x0054d014(lVar1,0x6678c0);
      func_0x00674e6c();
      if ((unaff_x30 & 1) != 0) {
        func_0x00674fb0();
      }
      func_0x00532e08(lVar1 + 0x18);
      lVar2 = lVar9;
      FUN_00657afc();
      if ((*(byte *)(lVar2 + 1) >> 1 & 1) == 0) {
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 2;
        unaff_x30 = *(ulong *)(lVar1 + 8);
        if ((unaff_x30 & 1) != 0) {
          func_0x00674fb0();
        }
        FUN_0066e51c(lVar1 + 0x20,".");
      }
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 2;
      uVar3 = *(ulong *)(lVar1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00532f00(lVar1 + 0x20,uVar3);
      FUN_00657afc(lVar9);
      func_0x00675ec8();
      lVar2 = lVar9;
      func_0x00657b08();
      if ((*(byte *)(lVar2 + 1) >> 1 & 1) == 0) {
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 4;
        unaff_x30 = *(ulong *)(lVar1 + 8);
        if ((unaff_x30 & 1) != 0) {
          func_0x00674fb0();
        }
        FUN_0066e51c(lVar1 + 0x28,".");
      }
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 4;
      uVar3 = *(ulong *)(lVar1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00532f00(lVar1 + 0x28,uVar3);
      func_0x00657b08(lVar9);
      func_0x00675ec8();
      if (*(undefined ***)(lVar8 + lVar10 + 0x38) != &PTR_PTR_00b25c68) {
        FUN_00657b14(lVar1);
        FUN_0067ce04();
      }
      if (*(char *)(lVar8 + lVar10 + 1) == '\x01') {
        *(undefined1 *)(lVar1 + 0x38) = 1;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0x10;
      }
      if (*(char *)(lVar8 + lVar10 + 2) == '\x01') {
        *(undefined1 *)(lVar1 + 0x39) = 1;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0x20;
      }
      lVar9 = *(long *)(lVar8 + lVar10 + 0x40);
      func_0x00674eec();
      if (lVar9 != extraout_x8_00) {
        FUN_00657b14(lVar1);
        func_0x0066e6b8();
        func_0x0067d70c();
      }
      lVar10 = lVar10 + 0x50;
    }
    if (*(undefined ***)(unaff_x20 + 0x18) != &PTR_PTR_00b25bc0) {
      func_0x00657ac8(lVar7);
      FUN_0067caf8();
    }
    lVar10 = *(long *)(unaff_x20 + 0x20);
    func_0x00674eec();
    if (lVar10 != extraout_x8_01) {
      func_0x00657ac8(lVar7);
      func_0x0066e688();
      func_0x0067d70c();
    }
  }
  func_0x00674f58();
  for (; unaff_x20 < *(int *)(param_1 + 4); unaff_x20 = unaff_x20 + 1) {
    lVar7 = *(long *)(param_1 + 0x78);
    lVar5 = param_2 + 0x78;
    FUN_0066757c(lVar5);
    FUN_0065764c(lVar7 + lVar4,lVar5);
    lVar4 = lVar4 + 0x58;
  }
  return;
}



/* Entry: 006571a0; end: 006571eb;  */

undefined8 FUN_006571a0(long param_1,int param_2)

{
  int *piVar1;
  long lStack_28;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0xdd) {
      lStack_28 = param_1;
      FUN_00673db0(piVar1,&lStack_28);
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)param_2 * 8);
}



/* Entry: 006571ec; end: 0065764b;  */

void FUN_006571ec(void)

{
  undefined4 *puVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long unaff_x23;
  long lVar5;
  long lVar6;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x30;
  
  func_0x00675c80();
  func_0x00674bd0();
  if ((unaff_x30 & 1) != 0) {
    func_0x00674fb0();
  }
  func_0x00532e08(unaff_x19 + 0xd8);
  func_0x0067546c();
  while (unaff_x23 < *(int *)(unaff_x20 + 0x90)) {
    func_0x00675ab8(unaff_x19 + 0xa8);
    func_0x00676410(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x00675c34();
  }
  for (lVar4 = 0; lVar4 < *(int *)(unaff_x20 + 0x94); lVar4 = lVar4 + 1) {
    func_0x0054d0b8(unaff_x19 + 0xc0);
    func_0x00676680();
  }
  if (*(undefined ***)(unaff_x20 + 0x20) != &PTR_PTR_00b25cc0) {
    func_0x0065797c();
    FUN_0067b2b4();
  }
  if (*(undefined ***)(unaff_x20 + 0x28) != &PTR_PTR_00b25a18) {
    func_0x0065797c();
    func_0x0066e594();
    func_0x0067d70c();
  }
  func_0x00675480();
  for (; lVar4 < *(int *)(unaff_x20 + 4); lVar4 = lVar4 + 1) {
    FUN_0066757c(unaff_x19 + 0x18);
    func_0x006764e8();
  }
  func_0x006762c0();
  lVar3 = 0x667638;
  for (; unaff_x26 < *(int *)(unaff_x20 + 0x78); unaff_x26 = unaff_x26 + 1) {
    lVar5 = *(long *)(unaff_x20 + 0x40);
    lVar4 = unaff_x19 + 0x90;
    func_0x00675ab8();
    func_0x00674e6c();
    if ((unaff_x30 & 1) != 0) {
      func_0x00674fb0();
    }
    func_0x00532e08(lVar4 + 0x18);
    lVar5 = lVar5 + unaff_x25;
    if (*(undefined ***)(lVar5 + 0x18) != &PTR_PTR_00b25c18) {
      func_0x00657a2c(lVar4);
      FUN_0067c17c();
    }
    if (*(undefined ***)(lVar5 + 0x20) != &PTR_PTR_00b25a18) {
      func_0x00657a2c(lVar4);
      func_0x0066e5f8();
      func_0x00675a90();
    }
    unaff_x25 = unaff_x25 + 0x38;
  }
  func_0x00675480();
  for (; lVar4 < *(int *)(unaff_x20 + 0x80); lVar4 = lVar4 + 1) {
    lVar6 = *(long *)(unaff_x20 + 0x48);
    lVar5 = unaff_x19 + 0x30;
    FUN_006674ac(lVar5);
    FUN_006571ec(lVar6 + lVar3,lVar5);
    lVar3 = lVar3 + 0x98;
  }
  func_0x00675480();
  for (; lVar4 < *(int *)(unaff_x20 + 0x84); lVar4 = lVar4 + 1) {
    lVar6 = *(long *)(unaff_x20 + 0x50);
    lVar5 = unaff_x19 + 0x48;
    FUN_006674f4(lVar5);
    func_0x006574b8(lVar6 + lVar3,lVar5);
    lVar3 = lVar3 + 0x58;
  }
  func_0x006762c0();
  for (; unaff_x26 < *(int *)(unaff_x20 + 0x88); unaff_x26 = unaff_x26 + 1) {
    puVar1 = (undefined4 *)(*(long *)(unaff_x20 + 0x58) + unaff_x25);
    lVar4 = unaff_x19 + 0x60;
    func_0x00675ab8();
    *(undefined4 *)(lVar4 + 0x20) = *puVar1;
    uVar2 = *(uint *)(lVar4 + 0x10);
    *(uint *)(lVar4 + 0x10) = uVar2 | 2;
    *(undefined4 *)(lVar4 + 0x24) = puVar1[1];
    *(uint *)(lVar4 + 0x10) = uVar2 | 6;
    if (*(undefined ***)(puVar1 + 2) != &PTR_PTR_00b25e98) {
      FUN_006566ac(lVar4);
      FUN_00678d20();
    }
    if (*(undefined ***)(puVar1 + 6) != &PTR_PTR_00b25a18) {
      FUN_006566ac(lVar4);
      FUN_0066e360();
      func_0x00675a90();
    }
    unaff_x25 = unaff_x25 + 0x28;
  }
  func_0x00675480();
  for (; lVar4 < *(int *)(unaff_x20 + 0x8c); lVar4 = lVar4 + 1) {
    FUN_0066757c(unaff_x19 + 0x78);
    func_0x006764e8();
  }
  return;
}



/* Entry: 0065764c; end: 0065793f;  */

void FUN_0065764c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00674bd0();
  if ((param_3 & 1) != 0) {
    func_0x00674fb0();
  }
  iVar2 = (int)unaff_x19 + 0x18;
  func_0x00532e08();
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 4);
  uVar4 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar4 | 0x40;
  bVar1 = *(byte *)(unaff_x20 + 1);
  if ((bVar1 >> 2 & 1) != 0) {
    func_0x006759b8(uVar4 | 0x50);
    if ((param_3 & 1) != 0) {
      func_0x00674fb0();
    }
    iVar2 = (int)unaff_x19 + 0x38;
    func_0x00532e08();
    bVar1 = *(byte *)(unaff_x20 + 1);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
    *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x100;
  }
  func_0x00676dac(*(undefined8 *)(unaff_x20 + 0x48));
  if (((bool)in_ZR) && (999 < *(int *)(*(long *)(unaff_x20 + 0x10) + 0x20))) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)(*(byte *)(unaff_x20 + 1) >> 6);
  }
  *(uint *)(unaff_x19 + 0x54) = uVar4;
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x200;
  func_0x00675ea8();
  if ((iVar2 == 10) && (999 < *(int *)(*(long *)(unaff_x20 + 0x10) + 0x20))) {
    iVar2 = 0xb;
  }
  else {
    func_0x00675ea8();
  }
  *(int *)(unaff_x19 + 0x58) = iVar2;
  uVar4 = *(uint *)(unaff_x19 + 0x10);
  uVar5 = uVar4 | 0x400;
  *(uint *)(unaff_x19 + 0x10) = uVar5;
  if ((*(byte *)(unaff_x20 + 1) >> 3 & 1) != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 1) >> 1 & 1) == 0) {
      func_0x006759b8(uVar4 | 0x402);
      if ((param_3 & 1) != 0) {
        func_0x00674fb0();
      }
      FUN_0066e51c(unaff_x19 + 0x20,".");
      uVar5 = *(uint *)(unaff_x19 + 0x10);
    }
    *(uint *)(unaff_x19 + 0x10) = uVar5 | 2;
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    FUN_00532f00(unaff_x19 + 0x20,uVar3);
    FUN_004bab3c();
  }
  lVar6 = unaff_x20;
  FUN_00656c60();
  if ((int)lVar6 == 10) {
    func_0x00675784();
    if ((*(byte *)(lVar6 + 1) & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x58) = 1;
      *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) & 0xfffffbff;
    }
    func_0x00675784();
    if ((*(byte *)(lVar6 + 1) >> 1 & 1) == 0) {
      func_0x006759b8(*(uint *)(unaff_x19 + 0x10) | 4);
      if ((param_3 & 1) != 0) {
        func_0x00674fb0();
      }
      func_0x00675fd8();
    }
    FUN_00667724();
    func_0x00675784();
  }
  else {
    lVar6 = unaff_x20;
    FUN_00656c60();
    if ((int)lVar6 != 8) goto LAB_00657874;
    func_0x006766c8();
    if ((*(byte *)(lVar6 + 1) >> 1 & 1) == 0) {
      func_0x006759b8(*(uint *)(unaff_x19 + 0x10) | 4);
      if ((param_3 & 1) != 0) {
        func_0x00674fb0();
      }
      func_0x00675fd8();
    }
    FUN_00667724();
    func_0x006766c8();
  }
  func_0x006767d0();
LAB_00657874:
  bVar1 = *(byte *)(unaff_x20 + 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = 0;
    FUN_006569d8(auStack_48);
    func_0x006759b8(*(uint *)(unaff_x19 + 0x10) | 8);
    if ((uVar3 & 1) != 0) {
      func_0x00674fb0();
    }
    FUN_00532e74(unaff_x19 + 0x30,auStack_48);
    func_0x00674d6c();
    bVar1 = *(byte *)(unaff_x20 + 1);
  }
  if ((((bVar1 >> 4 & 1) != 0) && ((bVar1 >> 3 & 1) == 0)) &&
     (lVar6 = *(long *)(unaff_x20 + 0x28), lVar6 != 0)) {
    *(int *)(unaff_x19 + 0x4c) = (int)((lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40)) / 0x38);
    *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 0x80;
  }
  if (*(undefined ***)(unaff_x20 + 0x38) != &PTR_PTR_00b25dc8) {
    func_0x006579f0();
    FUN_0067bec8();
  }
  lVar6 = *(long *)(unaff_x20 + 0x40);
  func_0x00674eec();
  if (lVar6 != extraout_x8) {
    func_0x006579f0();
    func_0x0066e5c4();
    func_0x0067d70c();
  }
  return;
}



/* Entry: 00657940; end: 00657afb;  */

void FUN_00657940(long param_1)

{
  ulong uVar1;
  uint extraout_w8;
  long unaff_x19;
  
  func_0x006758b4();
  *(uint *)(param_1 + 0x10) = extraout_w8 | 8;
  if (*(long *)(param_1 + 200) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00675018();
    }
    func_0x006675b8();
    *(ulong *)(unaff_x19 + 200) = uVar1;
  }
  return;
}



/* Entry: 00657afc; end: 00657b13;  */

undefined8 FUN_00657afc(long param_1)

{
  int *piVar1;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    puStack_38 = &uStack_28;
    if (*piVar1 != 0xdd) {
      puStack_30 = (undefined8 *)(param_1 + 0x18);
      FUN_00673e04(piVar1,&puStack_38);
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00657b14; end: 00657b4f;  */

void FUN_00657b14(long param_1)

{
  ulong uVar1;
  uint extraout_w8;
  long unaff_x19;
  
  func_0x006758b4();
  *(uint *)(param_1 + 0x10) = extraout_w8 | 8;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00675018();
    }
    func_0x00667944();
    *(ulong *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 00657b50; end: 00657c63;  */

char ** FUN_00657b50(char **param_1,char ***param_2)

{
  char *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar2;
  char *pcVar3;
  char **ppcVar4;
  char ***pppcVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  char **extraout_x10;
  char **extraout_x10_00;
  undefined1 *extraout_x10_01;
  char **unaff_x19;
  long unaff_x20;
  char *pcVar6;
  char *apcStack_160 [3];
  undefined1 *puStack_148;
  char *apcStack_c0 [3];
  char *pcStack_a8;
  char ***pppcStack_a0;
  char **appcStack_78 [6];
  undefined8 uStack_48;
  
  func_0x006743c8();
  uStack_48 = extraout_x8;
  func_0x00675120();
  uVar2 = 0;
  if ((bool)in_ZR) {
    func_0x00674c64();
    pcVar6 = param_1[9];
    pcVar1 = param_1[10];
    while( true ) {
      in_OV = SBORROW8((long)pcVar6,(long)pcVar1);
      in_NG = (long)pcVar6 - (long)pcVar1 < 0;
      uVar2 = pcVar6 == pcVar1;
      if ((bool)uVar2) break;
      func_0x006763bc(apcStack_c0);
      FUN_006679b4();
      func_0x006746b0();
      appcStack_78[0] = extraout_x10;
      if (in_NG == in_OV) {
        appcStack_78[0] = apcStack_c0;
      }
      pcVar3 = "\n";
      FUN_00532c74();
      pppcVar5 = appcStack_78;
      param_1 = unaff_x19;
      pcStack_a8 = pcVar3;
      pppcStack_a0 = param_2;
      FUN_005761b0();
      func_0x00674d64();
      pcVar6 = pcVar6 + 0x18;
      param_2 = pppcVar5;
    }
    if (*(char *)(unaff_x20 + 0x2f) < '\0') {
      if (*(long *)(unaff_x20 + 0x20) != 0) goto LAB_00657bf0;
    }
    else if (*(char *)(unaff_x20 + 0x2f) != '\0') {
LAB_00657bf0:
      param_1 = &pcStack_a8;
      FUN_006679b4();
      func_0x00674ec4();
      appcStack_78[0] = extraout_x10_00;
      if (in_NG == in_OV) {
        appcStack_78[0] = &pcStack_a8;
      }
      func_0x00676834();
      func_0x00674d80();
    }
  }
  func_0x00674120(uStack_48);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00675498();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00674bc8();
  func_0x006743c8();
  FUN_00576604();
  func_0x00674120(extraout_x8_00);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  ppcVar4 = apcStack_160;
  func_0x0067414c();
  func_0x00675120();
  if ((bool)uVar2) {
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      if (param_1[7] == (char *)0x0) goto LAB_00657d08;
    }
    else if (*(char *)((long)param_1 + 0x47) == '\0') goto LAB_00657d08;
    FUN_006679b4(apcStack_160,param_1,param_1 + 6);
    func_0x006746b0();
    puStack_148 = extraout_x10_01;
    if (in_NG == in_OV) {
      puStack_148 = (undefined1 *)apcStack_160;
    }
    func_0x00676834();
    func_0x00674d64();
    param_1 = ppcVar4;
  }
LAB_00657d08:
  func_0x00673f78();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00674928();
  func_0x00674bc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  func_0x00667980(param_1 + 1);
  return param_1;
}



/* Entry: 00657c64; end: 00657c9f;  */

undefined1 * FUN_00657c64(undefined1 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined1 auStack_a0 [24];
  undefined1 *puStack_88;
  
  func_0x006743c8();
  FUN_00576604();
  func_0x00674120(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = auStack_a0;
  func_0x0067414c();
  func_0x00675120();
  if ((bool)in_ZR) {
    if ((char)param_1[0x47] < '\0') {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_00657d08;
    }
    else if (param_1[0x47] == '\0') goto LAB_00657d08;
    FUN_006679b4(auStack_a0,param_1,param_1 + 0x30);
    func_0x006746b0();
    puStack_88 = extraout_x10;
    if (in_NG == in_OV) {
      puStack_88 = auStack_a0;
    }
    func_0x00676834();
    func_0x00674d64();
    param_1 = puVar1;
  }
LAB_00657d08:
  func_0x00673f78();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00674928();
  func_0x00674bc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  func_0x00667980(param_1 + 8);
  return param_1;
}



/* Entry: 00657ca0; end: 00657d2f;  */

undefined1 * FUN_00657ca0(undefined1 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar1;
  undefined1 *extraout_x10;
  undefined1 auStack_70 [24];
  undefined1 *puStack_58;
  
  puVar1 = auStack_70;
  func_0x0067414c();
  func_0x00675120();
  if ((bool)in_ZR) {
    if ((char)param_1[0x47] < '\0') {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_00657d08;
    }
    else if (param_1[0x47] == '\0') goto LAB_00657d08;
    FUN_006679b4(auStack_70,param_1,param_1 + 0x30);
    func_0x006746b0();
    puStack_58 = extraout_x10;
    if (in_NG == in_OV) {
      puStack_58 = auStack_70;
    }
    func_0x00676834();
    func_0x00674d64();
    param_1 = puVar1;
  }
LAB_00657d08:
  func_0x00673f78();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00674928();
  func_0x00674bc8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  func_0x00667980(param_1 + 8);
  return param_1;
}



/* Entry: 00657d30; end: 00657d5b;  */

long FUN_00657d30(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  func_0x00667980(param_1 + 8);
  return param_1;
}



/* Entry: 00657d5c; end: 00657e27;  */

void FUN_00657d5c(int param_1)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x006753bc();
  func_0x006757ec(auStack_58,(long)(param_1 << 1));
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  FUN_00667ed4();
  lVar1 = lStack_68;
  lVar2 = lStack_70;
  if (param_1 != 0) {
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x00674ec4();
      func_0x00676c1c();
      func_0x00674cfc();
      FUN_00659414();
    }
  }
  func_0x00459128(&lStack_70);
  func_0x00674d80();
  return;
}



/* Entry: 00657e28; end: 00657e53;  */

bool FUN_00657e28(int param_1,undefined8 param_2)

{
  if (param_1 < 1000) {
    FUN_006538b4(param_2);
    return (int)param_2 == 10;
  }
  return false;
}



/* Entry: 00657e54; end: 00658e4f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_00657e54(undefined1 *param_1,int param_2,undefined8 *param_3,byte *param_4,int param_5)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  char *pcVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  char **ppcVar24;
  char **ppcVar25;
  code *pcVar26;
  uint uVar27;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  char **extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  long extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long lVar28;
  undefined8 extraout_x10;
  byte *extraout_x10_00;
  undefined8 extraout_x10_01;
  byte *extraout_x10_02;
  undefined **extraout_x10_03;
  undefined **extraout_x10_04;
  char **extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x12;
  long lVar29;
  long unaff_x21;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 in_stack_00000050;
  undefined1 uStack_520;
  undefined7 uStack_51f;
  ulong uStack_518;
  byte bStack_509;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined *puStack_4d8;
  undefined **ppuStack_4d0;
  undefined1 *puStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  char *pcStack_408;
  undefined **appuStack_400 [10];
  undefined8 uStack_3b0;
  undefined2 uStack_3a8;
  byte bStack_3a6;
  undefined1 auStack_3a0 [24];
  undefined8 uStack_388;
  undefined8 uStack_370;
  long lStack_360;
  int iStack_354;
  long lStack_350;
  undefined1 *puStack_348;
  long lStack_340;
  byte *pbStack_338;
  int iStack_32c;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [88];
  undefined1 auStack_2a8 [88];
  undefined8 uStack_250;
  undefined2 uStack_248;
  byte bStack_246;
  undefined1 auStack_240 [24];
  byte abStack_228 [24];
  undefined1 auStack_210 [24];
  undefined8 *******pppppppuStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  char **ppcStack_1c0;
  char *pcStack_170;
  char **ppcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  byte bStack_10e;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_90;
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
  undefined2 uStack_30;
  byte bStack_2e;
  undefined1 auStack_28 [24];
  undefined8 uStack_10;
  
  func_0x00675c80();
  puStack_328 = param_3;
  func_0x006743c8();
  puStack_348 = param_1;
  uStack_10 = extraout_x8;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x53) & 1) == 0) {
    func_0x006757ec(abStack_228,(long)(param_2 << 1));
    puVar22 = auStack_2a8;
    uStack_250 = 0;
    func_0x00676434(auStack_2a8);
    uStack_248 = *(undefined2 *)param_4;
    bStack_246 = param_4[2];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_240,abStack_228);
    puVar17 = puStack_348;
    if (*param_4 == 1) {
      pcStack_90 = (char *)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_006599ec(puStack_348,&pcStack_90);
      uVar12 = *(undefined8 *)(puVar17 + 0x10);
      func_0x00676710(uVar12,&pcStack_90);
      func_0x00675f40();
      auStack_2a8[0] = (char)uVar12;
    }
    else {
      auStack_2a8[0] = 0;
    }
    FUN_00657b50(auStack_2a8,puStack_328);
    if (param_5 != 0) {
      func_0x00674424();
      func_0x00674174(*(undefined8 *)(puStack_348 + 8));
      func_0x006766fc(puStack_328,&UNK_00910536);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puStack_328," {\n");
    puVar17 = puStack_348;
    param_3 = *(undefined8 **)(puStack_348 + 0x20);
    FUN_0067af2c(auStack_300,0);
    lVar30 = *(long *)(puVar17 + 0x28);
    func_0x00674eec();
    if (lVar30 != extraout_x8_00) {
      func_0x0066e594(auStack_300);
      func_0x00675a90();
    }
    iStack_354 = param_2 + 1;
    func_0x00676c54(puStack_348);
    FUN_00657d5c();
    func_0x00675154();
    func_0x00674868();
    puVar17 = puStack_348;
    pcStack_318 = (code *)0x0;
    uStack_310 = 0;
    uStack_308 = 0;
    for (; unaff_x21 < *(int *)(puVar17 + 4); unaff_x21 = unaff_x21 + 1) {
      iVar23 = *(int *)(*(long *)(puVar17 + 0x10) + 0x20);
      FUN_00657e28(iVar23,puVar22 + *(long *)(puVar17 + 0x38));
      if (iVar23 != 0) {
        pcVar20 = puVar22 + *(long *)(puVar17 + 0x38);
        FUN_00656024();
        pcStack_170 = pcVar20;
        func_0x00675f28();
      }
      puVar22 = puVar22 + 0x58;
    }
    func_0x00675154();
    for (; unaff_x21 < *(int *)(puVar17 + 0x8c); unaff_x21 = unaff_x21 + 1) {
      iVar23 = *(int *)(*(long *)(puVar17 + 0x10) + 0x20);
      FUN_00657e28(iVar23,puVar22 + *(long *)(puVar17 + 0x60));
      if (iVar23 != 0) {
        pcVar20 = puVar22 + *(long *)(puVar17 + 0x60);
        FUN_00656024();
        pcStack_170 = pcVar20;
        func_0x00675f28();
      }
      puVar22 = puVar22 + 0x58;
    }
    func_0x00675154();
    for (; unaff_x21 < *(int *)(puVar17 + 0x80); unaff_x21 = unaff_x21 + 1) {
      pcStack_90 = puVar22 + *(long *)(puVar17 + 0x48);
      ppuVar13 = &puStack_320;
      FUN_0066e114(ppuVar13,&pcStack_90);
      if (ppuVar13 == (undefined8 **)0x0) {
        param_3 = puStack_328;
        FUN_00657e54(puVar22 + *(long *)(puVar17 + 0x48),iStack_354,puStack_328,param_4,1);
      }
      puVar22 = puVar22 + 0x98;
    }
    lStack_360 = (long)(iStack_354 << 1);
    iStack_32c = param_2 + 2;
    lStack_340 = (long)(iStack_32c * 2);
    puVar16 = puStack_328;
    pbStack_338 = param_4;
    for (lVar30 = 0; lVar30 < *(int *)(puVar17 + 0x84); lVar30 = lVar30 + 1) {
      lVar29 = *(long *)(puVar17 + 0x50);
      func_0x006757ec(auStack_210,lStack_360);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_110 = *(undefined2 *)param_4;
      bStack_10e = param_4[2];
      ppcVar25 = &pcStack_170;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_108,auStack_210);
      lVar29 = lVar29 + lVar30 * 0x58;
      if (*param_4 == 1) {
        pcStack_90 = (char *)0x0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00659afc(lVar29,&pcStack_90);
        uVar12 = *(undefined8 *)(lVar29 + 0x10);
        func_0x00676710(uVar12,&pcStack_90);
        uVar11 = (undefined1)uVar12;
        func_0x00675f40();
      }
      else {
        uVar11 = 0;
      }
      pcStack_170 = (char *)CONCAT71(pcStack_170._1_7_,uVar11);
      FUN_00657b50(&pcStack_170,puVar16);
      func_0x00674a84();
      func_0x00674174(*(undefined8 *)(lVar29 + 8));
      func_0x006766fc(puVar16,&UNK_00910609);
      FUN_0067c1ac(&pcStack_1c8,0,*(undefined8 *)(lVar29 + 0x20));
      lVar32 = *(long *)(lVar29 + 0x28);
      func_0x00674eec();
      if (lVar32 != extraout_x8_01) {
        func_0x0066e628(&pcStack_1c8);
        func_0x00676000();
      }
      param_3 = *(undefined8 **)(*(long *)(lVar29 + 0x10) + 0x18);
      FUN_00657d5c(iStack_32c,&pcStack_1c8,param_3,puVar16);
      lVar31 = 0;
      lStack_350 = lVar30;
      for (lVar32 = 0; puVar17 = puStack_348, lVar30 = lStack_350, lVar32 < *(int *)(lVar29 + 4);
          lVar32 = lVar32 + 1) {
        unaff_x21 = *(long *)(lVar29 + 0x38);
        func_0x006757ec(&uStack_1e0,lStack_340);
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_30 = *(undefined2 *)param_4;
        bStack_2e = param_4[2];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_28,&uStack_1e0);
        uVar27 = (uint)*param_4;
        cVar9 = SBORROW4(uVar27,1);
        cVar10 = (int)(uVar27 - 1) < 0;
        if (uVar27 == 1) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_e0 = 0;
          func_0x00659b9c(unaff_x21 + lVar31,&uStack_f0);
          uVar12 = *(undefined8 *)(*(long *)(unaff_x21 + lVar31 + 0x10) + 0x10);
          FUN_006597b8(uVar12,&uStack_f0,&uStack_88);
          uVar11 = (undefined1)uVar12;
          func_0x0053b048(&uStack_f0);
        }
        else {
          uVar11 = 0;
        }
        pcStack_90 = (char *)CONCAT71(pcStack_90._1_7_,uVar11);
        FUN_00657b50(&pcStack_90,puVar16);
        func_0x00676308();
        ppcVar25 = extraout_x11;
        uVar12 = extraout_x10;
        if (cVar10 == cVar9) {
          ppcVar25 = extraout_x8_02;
          uVar12 = extraout_x9;
        }
        func_0x00674174(*(undefined8 *)(unaff_x21 + lVar31 + 8));
        uVar2 = extraout_x12;
        uVar5 = extraout_x11_00;
        if (cVar10 == cVar9) {
          uVar2 = extraout_x9_00;
          uVar5 = extraout_x8_03;
        }
        func_0x00676650();
        uStack_370 = uStack_e8;
        FUN_00659614(puVar16,&UNK_00910616,9,uVar12,ppcVar25,uVar5,uVar2,uStack_f0);
        param_3 = *(undefined8 **)(unaff_x21 + lVar31 + 0x18);
        FUN_0067c4e4(&uStack_f0,0);
        lVar30 = *(long *)(unaff_x21 + lVar31 + 0x20);
        func_0x00674eec();
        if (lVar30 != extraout_x8_04) {
          func_0x0066e658(&uStack_f0);
          func_0x00676000();
        }
        pppppppuStack_1f8 = (undefined8 *******)0x0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        func_0x00676c54(*(undefined8 *)(unaff_x21 + lVar31 + 0x10));
        iVar23 = iStack_32c;
        FUN_0065948c(iStack_32c,&uStack_f0);
        puVar16 = puStack_328;
        param_4 = pbStack_338;
        if (iVar23 != 0) {
          uVar3 = uStack_1f0;
          pppppppuVar6 = pppppppuStack_1f8;
          if (-1 < (long)uStack_1e8) {
            uVar3 = uStack_1e8 >> 0x38;
            pppppppuVar6 = &pppppppuStack_1f8;
          }
          param_3 = (undefined8 *)((long)&MACH_HEADER.cputype + 1);
          FUN_00657c64(puStack_328,&UNK_00910620,5,pppppppuVar6,uVar3);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (puVar16,&UNK_0091055c);
        FUN_00657ca0(&pcStack_90,puVar16);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_1f8);
        FUN_0067c568(&uStack_f0);
        func_0x00675f38();
        func_0x0067665c();
        lVar31 = lVar31 + 0x30;
      }
      if (0 < *(int *)(lVar29 + 0x40)) {
        func_0x00674a84();
        func_0x00675b00();
        func_0x00675154();
        for (; unaff_x21 < *(int *)(lVar29 + 0x40); unaff_x21 = unaff_x21 + 1) {
          piVar1 = (int *)(*(long *)(lVar29 + 0x48) + (long)ppcVar25);
          iVar23 = piVar1[1];
          if (iVar23 == *piVar1) {
            func_0x0066853c(&pcStack_90,iVar23);
            func_0x00675a74(puVar16,&UNK_00910586);
          }
          else if (iVar23 == 0x7fffffff) {
            func_0x0066853c(&pcStack_90);
            param_3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 3);
            FUN_00657c64(puVar16,&UNK_0091058b,0xb,pcStack_90,uStack_88);
          }
          else {
            func_0x0066853c(&pcStack_90);
            func_0x00676650();
            param_3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 2);
            FUN_00659414(puVar16,&UNK_00910597,10,pcStack_90,uStack_88);
          }
          ppcVar25 = ppcVar25 + 1;
        }
        func_0x00675aec();
      }
      if (0 < *(int *)(lVar29 + 0x44)) {
        func_0x00674a84();
        func_0x00675b00();
        for (lVar32 = 0; lVar32 < *(int *)(lVar29 + 0x44); lVar32 = lVar32 + 1) {
          puVar14 = *(undefined8 **)(*(long *)(lVar29 + 0x50) + lVar32 * 8);
          lVar31 = (long)*(char *)((long)puVar14 + 0x17);
          puVar15 = puVar14;
          if (lVar31 < 0) {
            puVar15 = (undefined8 *)*puVar14;
            lVar31 = puVar14[1];
          }
          FUN_005728bc(&pcStack_90,puVar15,lVar31);
          func_0x00676af0();
          func_0x00675a58(puVar16,&UNK_009105a2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_90);
        }
        func_0x00675aec();
      }
      func_0x00674a84();
      func_0x00675a74(puVar16,&UNK_009105a9);
      FUN_00657ca0(&pcStack_170,puVar16);
      FUN_0067c21c(&pcStack_1c8);
      FUN_00657d30(&pcStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
    }
    for (lVar30 = 0; lVar30 < *(int *)(puVar17 + 4); lVar30 = lVar30 + 1) {
      lVar29 = *(long *)(puVar17 + 0x38) + lVar30 * 0x58;
      FUN_00659454();
      lVar32 = *(long *)(puVar17 + 0x38) + lVar30 * 0x58;
      if (lVar29 == 0) {
        func_0x006766e8(lVar32,iStack_354);
      }
      else if ((*(byte *)(lVar32 + 1) >> 4 & 1) == 0) {
        if (lVar32 == 0) {
          lVar29 = 0;
LAB_00658600:
          func_0x006757ec(&uStack_f0,lStack_360);
          pbVar7 = pbStack_338;
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_30 = *(undefined2 *)pbStack_338;
          bStack_2e = pbStack_338[2];
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_28,&uStack_f0);
          if (*pbVar7 == 1) {
            ppcStack_168 = (char **)0x0;
            pcStack_170 = (char *)0x0;
            uStack_160 = 0;
            func_0x00659ab8(lVar29,&pcStack_170);
            uVar12 = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 0x10);
            func_0x00676710(uVar12,&pcStack_170);
            uVar11 = (undefined1)uVar12;
            func_0x0053b048(&pcStack_170);
          }
          else {
            uVar11 = 0;
          }
          pcStack_90 = (char *)CONCAT71(pcStack_90._1_7_,uVar11);
          FUN_00657b50(&pcStack_90,puStack_328);
          func_0x00675df8();
          func_0x00674174(*(undefined8 *)(lVar29 + 8));
          func_0x00674f10();
          func_0x006766fc();
          param_3 = *(undefined8 **)(lVar29 + 0x18);
          FUN_0067bef8(&pcStack_170,0);
          lVar32 = *(long *)(lVar29 + 0x20);
          func_0x00674eec();
          if (lVar32 != extraout_x8_05) {
            func_0x0066e5f8(&pcStack_170);
            func_0x00676000();
          }
          func_0x00676c54(*(undefined8 *)(lVar29 + 0x10));
          FUN_00657d5c(iStack_32c,&pcStack_170);
          if (pbStack_338[2] == 1) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (puStack_328,&UNK_00910601);
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (puStack_328,"\n");
            lVar31 = 0;
            for (lVar32 = 0; lVar32 < *(int *)(lVar29 + 4); lVar32 = lVar32 + 1) {
              func_0x006766e8(*(long *)(lVar29 + 0x30) + lVar31,iStack_32c);
              lVar31 = lVar31 + 0x58;
            }
            func_0x00675df8();
            func_0x00675a74(puStack_328,&UNK_009105a9);
          }
          FUN_00657ca0(&pcStack_90,puStack_328);
          FUN_0067bf90(&pcStack_170);
          func_0x00675f38();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
        }
      }
      else {
        lVar29 = *(long *)(lVar32 + 0x28);
        if (*(long *)(lVar29 + 0x30) == lVar32) goto LAB_00658600;
      }
    }
    func_0x006759ac();
    while( true ) {
      pbVar7 = pbStack_338;
      puVar22 = puStack_348;
      lVar29 = (long)*(int *)(puStack_348 + 0x88);
      cVar9 = SBORROW8(lVar30,lVar29);
      cVar10 = lVar30 - lVar29 < 0;
      if (lVar29 <= lVar30) break;
      func_0x00674424();
      uVar12 = extraout_x11_01;
      pbVar7 = extraout_x10_00;
      if (cVar10 == cVar9) {
        uVar12 = extraout_x8_06;
        pbVar7 = abStack_228;
      }
      func_0x0066853c(&pcStack_90,*(undefined4 *)(puVar17 + *(long *)(puVar22 + 0x58)));
      FUN_00659414(puStack_328,&UNK_00910543,0x11,pbVar7,uVar12);
      lVar29 = *(long *)(puVar22 + 0x58);
      iVar23 = *(int *)((long)(puVar17 + lVar29) + 4);
      if (*(int *)(puVar17 + lVar29) + 1 < iVar23) {
        func_0x0066853c(&pcStack_90,iVar23 + -1);
        func_0x00675a58(puStack_328,&UNK_00910555);
        lVar29 = *(long *)(puStack_348 + 0x58);
      }
      param_3 = *(undefined8 **)(puVar17 + lVar29 + 8);
      FUN_00678918(&pcStack_90,0);
      lVar29 = *(long *)(puVar17 + *(long *)(puStack_348 + 0x58) + 0x18);
      func_0x00674eec();
      cVar9 = SBORROW8(lVar29,extraout_x8_07);
      cVar10 = lVar29 - extraout_x8_07 < 0;
      if (lVar29 != extraout_x8_07) {
        FUN_0066e360();
        func_0x00676000();
      }
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00676c54(puStack_348);
      ppcVar24 = &pcStack_90;
      iVar23 = iStack_354;
      FUN_0065948c();
      ppcVar25 = ppcVar24;
      if (iVar23 != 0) {
        pcVar20 = " [";
        FUN_00532c74();
        pcStack_170 = pcVar20;
        ppcStack_168 = ppcVar24;
        func_0x00676308();
        uStack_e8 = extraout_x11_02;
        uStack_f0 = extraout_x10_01;
        if (cVar10 == cVar9) {
          uStack_e8 = extraout_x8_08;
          uStack_f0 = extraout_x9_01;
        }
        func_0x0067690c();
        ppcVar25 = &pcStack_170;
        param_3 = &uStack_f0;
        pcStack_1c8 = pcVar20;
        ppcStack_1c0 = ppcVar24;
        FUN_005762ac(puStack_328,ppcVar25,param_3,&pcStack_1c8);
      }
      pcVar20 = ";\n";
      FUN_00532c74();
      pcStack_170 = pcVar20;
      ppcStack_168 = ppcVar25;
      FUN_005760f0(puStack_328,&pcStack_170);
      func_0x0067665c();
      FUN_006789b4(&pcStack_90);
      lVar30 = lVar30 + 1;
      puVar17 = puVar17 + 0x28;
    }
    lVar32 = 0;
    lVar29 = 0x20;
    for (lVar30 = 0; puVar16 = puStack_328, lVar30 < *(int *)(puStack_348 + 0x8c);
        lVar30 = lVar30 + 1) {
      lVar31 = *(long *)(puStack_348 + 0x60);
      lVar28 = *(long *)(lVar31 + lVar29);
      if (lVar28 != lVar32) {
        if (lVar29 != 0x20) {
          func_0x00674424();
          func_0x00675a58(puStack_328,&UNK_0091055f);
          lVar28 = *(long *)(*(long *)(puStack_348 + 0x60) + lVar29);
        }
        func_0x00674424();
        func_0x00674084(*(undefined8 *)(lVar28 + 8));
        FUN_00659414(puStack_328,&UNK_00910566,0x11);
        lVar31 = *(long *)(puStack_348 + 0x60);
        lVar32 = lVar28;
      }
      param_3 = puStack_328;
      FUN_00658e50(lVar31 + lVar29 + -0x20,iStack_32c,puStack_328,pbVar7);
      lVar29 = lVar29 + 0x58;
    }
    if (0 < *(int *)(puStack_348 + 0x8c)) {
      func_0x00674424();
      func_0x00675a58(puVar16,&UNK_0091055f);
    }
    puVar22 = puStack_348;
    if (0 < *(int *)(puStack_348 + 0x90)) {
      func_0x00674424();
      func_0x00675a7c();
      lVar29 = 0;
      for (lVar30 = 0; puVar16 = puStack_328, puVar22 = puStack_348,
          lVar30 < *(int *)(puStack_348 + 0x90); lVar30 = lVar30 + 1) {
        piVar1 = (int *)(*(long *)(puStack_348 + 0x68) + lVar29);
        if (piVar1[1] == *piVar1 + 1) {
          func_0x0066853c(&pcStack_90);
          func_0x00675a74(puStack_328,&UNK_00910586);
        }
        else if (piVar1[1] < 0x20000000) {
          func_0x0066853c(&pcStack_90);
          func_0x0066853c(&pcStack_170,piVar1[1] + -1);
          param_3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 2);
          FUN_00659414(puStack_328,&UNK_00910597,10,pcStack_90,uStack_88);
        }
        else {
          func_0x0066853c(&pcStack_90);
          param_3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 3);
          FUN_00657c64(puStack_328,&UNK_0091058b,0xb,pcStack_90,uStack_88);
        }
        lVar29 = lVar29 + 8;
      }
      func_0x00675a60();
    }
    iVar23 = *(int *)(puVar22 + 0x94);
    in_OV = SBORROW4(iVar23,1);
    in_NG = iVar23 + -1 < 0;
    in_ZR = iVar23 == 1;
    if (0 < iVar23) {
      func_0x00674424();
      func_0x00675a7c();
      lVar30 = 0;
      while( true ) {
        puVar16 = puStack_328;
        lVar29 = (long)*(int *)(puVar22 + 0x94);
        in_OV = SBORROW8(lVar30,lVar29);
        in_NG = lVar30 - lVar29 < 0;
        in_ZR = lVar30 == lVar29;
        if (lVar29 <= lVar30) break;
        puVar15 = *(undefined8 **)(*(long *)(puVar22 + 0x70) + lVar30 * 8);
        lVar29 = (long)*(char *)((long)puVar15 + 0x17);
        puVar16 = puVar15;
        if (lVar29 < 0) {
          puVar16 = (undefined8 *)*puVar15;
          lVar29 = puVar15[1];
        }
        FUN_005728bc(&pcStack_90,puVar16,lVar29);
        func_0x00676af0();
        func_0x00675a58(puStack_328,&UNK_009105a2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_90);
        lVar30 = lVar30 + 1;
      }
      func_0x00675a60();
    }
    func_0x00674424();
    param_4 = extraout_x10_02;
    if (in_NG == in_OV) {
      param_4 = abStack_228;
    }
    func_0x00675a74(puVar16,&UNK_009105a9);
    FUN_00657ca0(auStack_2a8);
    param_2 = (int)puVar16;
    FUN_00666014(&puStack_320);
    FUN_0067af9c(auStack_300);
    param_1 = auStack_2a8;
    FUN_00657d30(param_1);
    func_0x00675540();
  }
  func_0x00674120(uStack_10);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar22 = auStack_2a8;
  FUN_00657d30();
  func_0x00675540();
  func_0x00674bc8();
  pcVar26 = FUN_00658e50;
  func_0x00675c80();
  iVar23 = param_2;
  puStack_320 = &stack0x00000050;
  pcStack_318 = pcVar26;
  func_0x006743c8();
  uStack_388 = extraout_x8_09;
  func_0x006757ec(auStack_4f0,(long)(iVar23 << 1));
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  puVar17 = puVar22;
  func_0x006595dc();
  if ((int)puVar17 == 0) {
    func_0x00659518(&puStack_4d8,puVar22);
    ppuVar18 = &puStack_4d8;
    FUN_004575b8(&uStack_508);
  }
  else {
    func_0x00675f6c();
    ppuVar18 = &puStack_4d8;
    func_0x00659518(ppuVar18,*(undefined8 *)(puVar17 + 0x38));
    func_0x006769e4();
    uVar12 = extraout_x11_03;
    ppuVar8 = extraout_x10_03;
    if (in_NG == in_OV) {
      uVar12 = extraout_x8_10;
      ppuVar8 = &puStack_4d8;
    }
    func_0x00675f6c();
    func_0x00659518(&pcStack_408,ppuVar18[7] + 0x58);
    ppuVar18 = (undefined **)&UNK_009105b1;
    FUN_00659414(&uStack_508,&UNK_009105b1,0xb,ppuVar8,uVar12);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_408);
  }
  func_0x00675d64();
  puVar19 = (&PTR_DAT_00a0da08)[(byte)puVar22[1] >> 6];
  FUN_00532c74();
  pcVar20 = " ";
  puStack_4d8 = puVar19;
  ppuStack_4d0 = ppuVar18;
  FUN_00532c74();
  pcStack_408 = pcVar20;
  appuStack_400[0] = ppuVar18;
  FUN_00575d30(&uStack_520,&puStack_4d8,&pcStack_408);
  puVar17 = puVar22;
  func_0x006595dc();
  if (((((ulong)puVar17 & 1) != 0) ||
      (puVar17 = puVar22, FUN_00659454(), puVar17 != (undefined1 *)0x0)) ||
     (((puVar22[1] & 0xc2) == 0x40 &&
      ((*(int *)(*(long *)(puVar22 + 0x10) + 0x20) != 0x3e6 ||
       ((((byte)puVar22[1] >> 4 & 1) != 0 && (*(long *)(puVar22 + 0x28) != 0)))))))) {
    if ((char)bStack_509 < '\0') {
      *(undefined1 *)CONCAT71(uStack_51f,uStack_520) = 0;
      uStack_518 = 0;
    }
    else {
      uStack_520 = 0;
      bStack_509 = 0;
    }
  }
  if ((((puVar22[1] & 0xc0) == 0x40) || (*(int *)(*(long *)(puVar22 + 0x48) + 0x30) == 3)) &&
     (999 < *(int *)(*(long *)(puVar22 + 0x10) + 0x20))) {
    if ((char)bStack_509 < '\0') {
      *(undefined1 *)CONCAT71(uStack_51f,uStack_520) = 0;
      uStack_518 = 0;
    }
    else {
      uStack_520 = 0;
      bStack_509 = 0;
    }
  }
  uStack_3b0 = 0;
  func_0x00676434(&pcStack_408);
  uStack_3a8 = *(undefined2 *)param_4;
  bStack_3a6 = param_4[2];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3a0,auStack_4f0);
  if (*param_4 == 1) {
    func_0x006769b8();
    func_0x00659a54(puVar22,&puStack_4d8);
    uVar12 = *(undefined8 *)(puVar22 + 0x10);
    FUN_006597b8(uVar12,&puStack_4d8,appuStack_400);
    uVar11 = (undefined1)uVar12;
    func_0x00675670();
  }
  else {
    uVar11 = 0;
  }
  pcStack_408 = (char *)CONCAT71(pcStack_408._1_7_,uVar11);
  FUN_00657b50(&pcStack_408,param_3);
  func_0x00676224();
  cVar10 = (char)bStack_509 < '\0';
  cVar9 = '\0';
  uVar3 = uStack_518;
  puVar17 = (undefined1 *)CONCAT71(uStack_51f,uStack_520);
  if (!(bool)cVar10) {
    uVar3 = (ulong)bStack_509;
    puVar17 = &uStack_520;
  }
  func_0x006749e4();
  iVar23 = *(int *)(*(long *)(puVar22 + 0x10) + 0x20);
  FUN_00657e28(iVar23,puVar22);
  puVar21 = puVar22;
  if (iVar23 != 0) {
    func_0x00675f6c();
  }
  func_0x00674174(*(undefined8 *)(puVar21 + 8));
  func_0x0066853c(&uStack_440,*(undefined4 *)(puVar22 + 4));
  uStack_490 = uStack_438;
  uStack_498 = uStack_440;
  puStack_4c8 = puVar17;
  uStack_4c0 = uVar3;
  FUN_00576604(param_3,&UNK_009105bd,0xe,&puStack_4d8);
  if ((puVar22[1] & 1) == 0) {
    if (((byte)puVar22[1] >> 2 & 1) != 0) goto LAB_006591d4;
    bVar4 = false;
  }
  else {
    FUN_006569d8(&puStack_4d8,puVar22,1);
    func_0x006769e4();
    ppuVar18 = extraout_x10_04;
    if (cVar10 == cVar9) {
      ppuVar18 = &puStack_4d8;
    }
    FUN_00657c64(param_3,&UNK_009105cc,0xe,ppuVar18);
    func_0x00675d64();
    if (((byte)puVar22[1] >> 2 & 1) != 0) {
LAB_006591d4:
      func_0x0067581c();
      func_0x0067581c();
      func_0x00676978(*(undefined8 *)(puVar22 + 8));
      FUN_005728bc(&puStack_4d8);
      func_0x006767d0();
      func_0x00675d64();
      func_0x0067581c();
    }
    bVar4 = true;
  }
  FUN_0067b778(&puStack_4d8,0,*(undefined8 *)(puVar22 + 0x38));
  lVar30 = *(long *)(puVar22 + 0x40);
  func_0x00674eec();
  uVar11 = lVar30 == extraout_x8_11;
  if (!(bool)uVar11) {
    func_0x0066e5c4(&puStack_4d8);
    func_0x00675a90();
  }
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  FUN_0065948c(param_2,&puStack_4d8,*(undefined8 *)(*(long *)(puVar22 + 0x10) + 0x18));
  if (param_2 == 0) {
    if (!bVar4) goto LAB_006592a4;
  }
  else {
    uVar11 = !bVar4;
    func_0x0067581c();
    func_0x006767d0();
  }
  func_0x0067581c();
LAB_006592a4:
  iVar23 = *(int *)(*(long *)(puVar22 + 0x10) + 0x20);
  FUN_00657e28(iVar23,puVar22);
  if ((iVar23 == 0) || ((param_4[1] & 1) != 0)) {
    func_0x0067581c();
  }
  else {
    func_0x00675f6c();
    FUN_00657e54();
  }
  FUN_00657ca0(&pcStack_408,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_440);
  FUN_0067b860(&puStack_4d8);
  FUN_00657d30(&pcStack_408);
  puVar22 = &uStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar22);
  func_0x006754bc();
  func_0x00676048();
  func_0x00674120(uStack_388);
  if ((bool)uVar11) {
    return puVar22;
  }
  ___stack_chk_fail();
  func_0x00675d64();
  FUN_00657d30(&pcStack_408);
  puVar22 = &uStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006754bc();
  func_0x00676048();
  func_0x00674bc8();
  func_0x006743c8();
  FUN_00576604();
  func_0x00674120(extraout_x8_12);
  if ((bool)uVar11) {
    return puVar22;
  }
  ___stack_chk_fail();
  if (((byte)puVar22[1] >> 4 & 1) == 0) {
    puVar22 = (undefined1 *)0x0;
  }
  else {
    puVar22 = *(undefined1 **)(puVar22 + 0x28);
    if ((puVar22 != (undefined1 *)0x0) && (*(int *)(puVar22 + 4) == 1)) {
      if ((*(byte *)(*(long *)(puVar22 + 0x30) + 1) & 2) != 0) {
        puVar22 = (undefined1 *)0x0;
      }
      return puVar22;
    }
  }
  return puVar22;
}



/* Entry: 00658e50; end: 00659413;  */

undefined1 * FUN_00658e50(ulong param_1,int param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  char in_NG;
  char in_OV;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined **extraout_x10;
  undefined **extraout_x10_00;
  undefined8 extraout_x11;
  long lVar14;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  ulong uStack_1a8;
  byte bStack_199;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char *pcStack_98;
  undefined **appuStack_90 [10];
  undefined8 uStack_40;
  undefined2 uStack_38;
  char cStack_36;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x00675c80();
  iVar13 = param_2;
  func_0x006743c8();
  uStack_18 = extraout_x8;
  func_0x006757ec(auStack_180,(long)(iVar13 << 1));
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uVar6 = param_1;
  func_0x006595dc();
  if ((int)uVar6 == 0) {
    func_0x00659518(&puStack_168,param_1);
    ppuVar7 = &puStack_168;
    FUN_004575b8(&uStack_198);
  }
  else {
    func_0x00675f6c();
    ppuVar7 = &puStack_168;
    func_0x00659518(ppuVar7,*(undefined8 *)(uVar6 + 0x38));
    func_0x006769e4();
    uVar10 = extraout_x11;
    ppuVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar10 = extraout_x8_00;
      ppuVar2 = &puStack_168;
    }
    func_0x00675f6c();
    func_0x00659518(&pcStack_98,ppuVar7[7] + 0x58);
    ppuVar7 = (undefined **)&UNK_009105b1;
    FUN_00659414(&uStack_198,&UNK_009105b1,0xb,ppuVar2,uVar10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
  }
  func_0x00675d64();
  puVar8 = (&PTR_DAT_00a0da08)[*(byte *)(param_1 + 1) >> 6];
  FUN_00532c74();
  pcVar9 = " ";
  puStack_168 = puVar8;
  ppuStack_160 = ppuVar7;
  FUN_00532c74();
  pcStack_98 = pcVar9;
  appuStack_90[0] = ppuVar7;
  FUN_00575d30(&uStack_1b0,&puStack_168,&pcStack_98);
  uVar6 = param_1;
  func_0x006595dc();
  if ((((uVar6 & 1) != 0) || (uVar6 = param_1, FUN_00659454(), uVar6 != 0)) ||
     (((*(byte *)(param_1 + 1) & 0xc2) == 0x40 &&
      ((*(int *)(*(long *)(param_1 + 0x10) + 0x20) != 0x3e6 ||
       (((*(byte *)(param_1 + 1) >> 4 & 1) != 0 && (*(long *)(param_1 + 0x28) != 0)))))))) {
    if ((char)bStack_199 < '\0') {
      *(undefined1 *)CONCAT71(uStack_1af,uStack_1b0) = 0;
      uStack_1a8 = 0;
    }
    else {
      uStack_1b0 = 0;
      bStack_199 = 0;
    }
  }
  if ((((*(byte *)(param_1 + 1) & 0xc0) == 0x40) ||
      (*(int *)(*(long *)(param_1 + 0x48) + 0x30) == 3)) &&
     (999 < *(int *)(*(long *)(param_1 + 0x10) + 0x20))) {
    if ((char)bStack_199 < '\0') {
      *(undefined1 *)CONCAT71(uStack_1af,uStack_1b0) = 0;
      uStack_1a8 = 0;
    }
    else {
      uStack_1b0 = 0;
      bStack_199 = 0;
    }
  }
  uStack_40 = 0;
  func_0x00676434(&pcStack_98);
  uStack_38 = *(undefined2 *)param_4;
  cStack_36 = param_4[2];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_30,auStack_180);
  if (*param_4 == '\x01') {
    func_0x006769b8();
    func_0x00659a54(param_1,&puStack_168);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    FUN_006597b8(uVar10,&puStack_168,appuStack_90);
    uVar5 = (undefined1)uVar10;
    func_0x00675670();
  }
  else {
    uVar5 = 0;
  }
  pcStack_98 = (char *)CONCAT71(pcStack_98._1_7_,uVar5);
  FUN_00657b50(&pcStack_98,param_3);
  func_0x00676224();
  cVar4 = (char)bStack_199 < '\0';
  cVar3 = '\0';
  uVar6 = uStack_1a8;
  puVar12 = (undefined1 *)CONCAT71(uStack_1af,uStack_1b0);
  if (!(bool)cVar4) {
    uVar6 = (ulong)bStack_199;
    puVar12 = &uStack_1b0;
  }
  func_0x006749e4();
  iVar13 = *(int *)(*(long *)(param_1 + 0x10) + 0x20);
  FUN_00657e28(iVar13,param_1);
  uVar11 = param_1;
  if (iVar13 != 0) {
    func_0x00675f6c();
  }
  func_0x00674174(*(undefined8 *)(uVar11 + 8));
  func_0x0066853c(&uStack_d0,*(undefined4 *)(param_1 + 4));
  uStack_120 = uStack_c8;
  uStack_128 = uStack_d0;
  puStack_158 = puVar12;
  uStack_150 = uVar6;
  FUN_00576604(param_3,&UNK_009105bd,0xe,&puStack_168);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) goto LAB_006591d4;
    bVar1 = false;
  }
  else {
    FUN_006569d8(&puStack_168,param_1,1);
    func_0x006769e4();
    ppuVar7 = extraout_x10_00;
    if (cVar4 == cVar3) {
      ppuVar7 = &puStack_168;
    }
    FUN_00657c64(param_3,&UNK_009105cc,0xe,ppuVar7);
    func_0x00675d64();
    if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
LAB_006591d4:
      func_0x0067581c();
      func_0x0067581c();
      func_0x00676978(*(undefined8 *)(param_1 + 8));
      FUN_005728bc(&puStack_168);
      func_0x006767d0();
      func_0x00675d64();
      func_0x0067581c();
    }
    bVar1 = true;
  }
  FUN_0067b778(&puStack_168,0,*(undefined8 *)(param_1 + 0x38));
  lVar14 = *(long *)(param_1 + 0x40);
  func_0x00674eec();
  uVar5 = lVar14 == extraout_x8_01;
  if (!(bool)uVar5) {
    func_0x0066e5c4(&puStack_168);
    func_0x00675a90();
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  FUN_0065948c(param_2,&puStack_168,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  if (param_2 == 0) {
    if (!bVar1) goto LAB_006592a4;
  }
  else {
    uVar5 = !bVar1;
    func_0x0067581c();
    func_0x006767d0();
  }
  func_0x0067581c();
LAB_006592a4:
  iVar13 = *(int *)(*(long *)(param_1 + 0x10) + 0x20);
  FUN_00657e28(iVar13,param_1);
  if ((iVar13 == 0) || ((param_4[1] & 1U) != 0)) {
    func_0x0067581c();
  }
  else {
    func_0x00675f6c();
    FUN_00657e54();
  }
  FUN_00657ca0(&pcStack_98,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
  FUN_0067b860(&puStack_168);
  FUN_00657d30(&pcStack_98);
  puVar12 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
  func_0x006754bc();
  func_0x00676048();
  func_0x00674120(uStack_18);
  if ((bool)uVar5) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00675d64();
  FUN_00657d30(&pcStack_98);
  puVar12 = &uStack_1b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006754bc();
  func_0x00676048();
  func_0x00674bc8();
  func_0x006743c8();
  FUN_00576604();
  func_0x00674120(extraout_x8_02);
  if ((bool)uVar5) {
    return puVar12;
  }
  ___stack_chk_fail();
  if (((byte)puVar12[1] >> 4 & 1) == 0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    puVar12 = *(undefined1 **)(puVar12 + 0x28);
    if ((puVar12 != (undefined1 *)0x0) && (*(int *)(puVar12 + 4) == 1)) {
      if ((*(byte *)(*(long *)(puVar12 + 0x30) + 1) & 2) != 0) {
        puVar12 = (undefined1 *)0x0;
      }
      return puVar12;
    }
  }
  return puVar12;
}



/* Entry: 00659414; end: 00659453;  */

long FUN_00659414(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  
  func_0x006743c8();
  FUN_00576604();
  func_0x00674120(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 4) == 1)) {
      if ((*(byte *)(*(long *)(lVar1 + 0x30) + 1) & 2) != 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return lVar1;
}



/* Entry: 00659454; end: 0065948b;  */

long FUN_00659454(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 4) == 1)) {
      if ((*(byte *)(*(long *)(lVar1 + 0x30) + 1) & 2) != 0) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return lVar1;
}



/* Entry: 0065948c; end: 00659517;  */

bool FUN_0065948c(int param_1)

{
  bool bVar1;
  undefined1 auStack_50 [24];
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_00667ed4();
  if (param_1 != 0) {
    FUN_0066855c(auStack_50,&lStack_38,", ",2);
    func_0x00675218();
    FUN_004bab3c();
    func_0x00674d64();
  }
  bVar1 = lStack_38 != lStack_30;
  func_0x00459128(&lStack_38);
  return bVar1;
}



/* Entry: 00659518; end: 00659613;  */

ulong * FUN_00659518(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  undefined1 uVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  long lVar11;
  ulong *unaff_x19;
  long *plVar12;
  long unaff_x20;
  undefined1 auStack_88 [48];
  
  func_0x0067409c();
  FUN_006538b4();
  uVar10 = (int)param_2 - 10;
  uVar5 = uVar10 == 2;
  if (uVar10 < 2) {
    param_2 = (ulong *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x20);
    FUN_00657e28();
    if ((int)param_2 != 0) {
LAB_006595ac:
      func_0x00675ea8();
      puVar9 = (ulong *)(&PTR_DAT_00a0d970)[(ulong)param_2 & 0xffffffff];
      func_0x00673f78();
      if ((bool)uVar5) {
        puVar7 = puVar9;
        _strlen();
        if ((ulong *)0x7ffffffffffffff6 < puVar7) {
          FUN_0040d740();
          plVar12 = (long *)puVar7[1];
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar11 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          return puVar7;
        }
        if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar7) {
          pdVar4 = &MACH_HEADER.flags;
          if ((dword *)((ulong)puVar7 | 7) != (dword *)0x17) {
            pdVar4 = (dword *)((ulong)puVar7 | 7);
          }
          puVar8 = (ulong *)((long)pdVar4 + 1);
          __Znwm();
          unaff_x19[1] = (ulong)puVar7;
          unaff_x19[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
          *unaff_x19 = (ulong)puVar8;
        }
        else {
          *(char *)((long)unaff_x19 + 0x17) = (char)puVar7;
          puVar8 = unaff_x19;
          if (puVar7 == (ulong *)0x0) goto LAB_00425d3c;
        }
        _memmove(puVar8,puVar9,puVar7);
LAB_00425d3c:
        *(undefined1 *)((long)puVar8 + (long)puVar7) = 0;
        return unaff_x19;
      }
      goto LAB_006595d8;
    }
    func_0x00674500();
    func_0x00675784();
  }
  else {
    uVar5 = (int)param_2 == 0xe;
    if (!(bool)uVar5) goto LAB_006595ac;
    func_0x00674500();
    func_0x006766c8();
  }
  func_0x00673f90(param_2[1]);
  param_2 = (ulong *)&stack0xffffffffffffffa8;
  FUN_00575d30(param_2,auStack_88);
  func_0x00673f78();
  if ((bool)uVar5) {
    return param_2;
  }
LAB_006595d8:
  iVar6 = (int)param_2;
  ___stack_chk_fail();
  func_0x00676098();
  if (iVar6 == 0xb) {
    uVar10 = (uint)*(byte *)(*(long *)(unaff_x19[6] + 0x20) + 0x53);
  }
  else {
    uVar10 = 0;
  }
  return (ulong *)(ulong)(uVar10 & 1);
}



/* Entry: 00659614; end: 0065965f;  */

void FUN_00659614(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  undefined8 in_stack_00000000;
  
  func_0x00674388(in_stack_00000000);
  FUN_00576604();
  func_0x00674120(extraout_x9);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_00659690();
  return;
}



/* Entry: 00659660; end: 0065968f;  */

void FUN_00659660(void)

{
  FUN_00659690();
  return;
}



/* Entry: 00659690; end: 006596bb;  */

bool FUN_00659690(long param_1)

{
  if ((*(byte *)(param_1 + 1) >> 5 & 1) == 0) {
    return false;
  }
  FUN_006538b4();
  return (int)param_1 - 0xdU < 0xfffffffc;
}



/* Entry: 006596bc; end: 006597a3;  */

bool FUN_006596bc(int param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x00676098();
  if (param_1 == 9) {
    bVar1 = *(int *)(*(long *)(unaff_x19 + 0x48) + 0x3c) == 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 006597a4; end: 006597b7;  */

long * FUN_006597a4(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long *unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x0053ac90(puVar1,*param_2,*(undefined8 *)(param_2 + 2));
  func_0x005339b8();
  if ((puVar1 != (undefined8 *)0x0) &&
     (unaff_x19 = (long *)*puVar1, (*(byte *)((long)puVar1 + 10) >> 4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x005347a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x18))();
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 006597b8; end: 006599eb;  */

undefined8 FUN_006597b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  undefined4 *puVar10;
  undefined8 *extraout_x9;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  func_0x00675db8();
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  func_0x00675438();
  lVar12 = *(long *)(param_1 + 0x98);
  in_stack_00000008 = &stack0x00000020;
  in_stack_00000020 = lVar12;
  if (*(int *)(lVar12 + 0x98) != 0xdd) {
    FUN_0066dee4((int *)(lVar12 + 0x98),&stack0x00000008);
  }
  puVar10 = (undefined4 *)*unaff_x20;
  puVar11 = (undefined4 *)unaff_x20[1];
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  func_0x006759a0();
  in_stack_00000008 = (undefined8 *)0x0;
  while( true ) {
    cVar7 = SBORROW8((long)puVar10,(long)puVar11);
    cVar8 = (long)puVar10 - (long)puVar11 < 0;
    if (puVar10 == puVar11) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&stack0x00000008);
    FUN_0066dd7c(&stack0x00000008,*puVar10);
    puVar10 = puVar10 + 1;
  }
  Hint_Prefetch(*(undefined8 *)(lVar12 + 0xa0),0,2,0);
  func_0x00674ed8(*(undefined8 *)(lVar12 + 0xa0));
  uVar1 = extraout_x11;
  puVar13 = extraout_x10;
  if (cVar8 == cVar7) {
    uVar1 = extraout_x8;
    puVar13 = &stack0x00000008;
  }
  FUN_0066696c(lVar12 + 0xa0,puVar13,uVar1);
  lVar2 = *(long *)(lVar12 + 0xa8);
  uVar3 = *(ulong *)(lVar12 + 0xb0);
  func_0x006745f4(*(ulong *)(lVar12 + 0xa0) >> 0xc);
  do {
    func_0x0067644c();
    func_0x00674f7c();
    while ((extraout_x8_00 & 0x8080808080808080) != 0) {
      func_0x006763d4();
      unaff_x27 = unaff_x26 + (extraout_x8_01 >> 3) & uVar3;
      puVar13 = &stack0x00000008;
      FUN_0066de28(puVar13,lVar2 + unaff_x27 * 0x20);
      if ((int)puVar13 != 0) {
        unaff_x27 = *(long *)(lVar12 + 0xa8) + unaff_x27 * 0x20;
        goto LAB_006598c8;
      }
      func_0x006763c8();
    }
    func_0x006745a8();
  } while ((extraout_x8_02 & 1) == 0);
LAB_006598c8:
  func_0x00674d6c();
  if ((extraout_x8_00 & 0x8080808080808080) == 0) {
    return 0;
  }
  lVar12 = *(long *)(unaff_x27 + 0x18);
  if (lVar12 != 0) {
    uVar4 = *(uint *)(lVar12 + 0x30);
    if (1 < uVar4 - 3) {
      return 0;
    }
    puVar10 = *(undefined4 **)(lVar12 + 0x38);
    *unaff_x19 = *puVar10;
    unaff_x19[2] = puVar10[1];
    uVar6 = 2 < uVar4;
    uVar9 = uVar4 == 3;
    lVar2 = 0;
    if (!(bool)uVar9) {
      lVar2 = 8;
    }
    unaff_x19[1] = *(undefined4 *)((long)puVar10 + lVar2);
    unaff_x19[3] = puVar10[(ulong)uVar4 - 1];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 4,*(ulong *)(lVar12 + 0x60) & 0xfffffffffffffffc);
    puVar10 = unaff_x19 + 10;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (puVar10,*(ulong *)(lVar12 + 0x68) & 0xfffffffffffffffc);
    puVar11 = unaff_x19 + 0x10;
    puVar13 = (undefined8 *)(lVar12 + 0x48);
    func_0x00675590(*puVar13);
    if (!(bool)uVar9) {
      puVar13 = extraout_x9;
    }
    iVar5 = *(int *)(lVar12 + 0x50);
    func_0x00676d34(*(undefined8 *)(unaff_x19 + 0x14));
    if ((bool)uVar6) {
      func_0x00676d34(*(undefined8 *)(unaff_x19 + 0x12));
      if ((bool)uVar6) {
        func_0x00675f74();
        FUN_00668610();
        func_0x00459154(puVar11,puVar10);
        return 1;
      }
      FUN_00668610(puVar13,puVar13 + extraout_x8_03);
      func_0x0067513c();
    }
    else {
      FUN_00528ed8(puVar11);
      puVar10 = puVar11;
      FUN_0045a5ac(puVar11,(long)iVar5);
      FUN_004279b8(puVar11,puVar10);
      func_0x00676ba8();
    }
    FUN_00668570();
    return 1;
  }
  return 0;
}



/* Entry: 006599ec; end: 00659c37;  */

void FUN_006599ec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00674c64();
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 4;
  }
  else {
    func_0x00676040();
    uVar1 = 3;
  }
  func_0x00674680(uVar1);
  func_0x00674808();
  return;
}



/* Entry: 00659c38; end: 0065acf7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00659c38(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  section *psVar8;
  section *psVar9;
  qword *pqVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  qword *pqVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *******ppppppplVar21;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  qword qVar23;
  long *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar24;
  undefined8 *extraout_x8_07;
  long extraout_x8_08;
  long *******extraout_x8_09;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 *extraout_x9_03;
  undefined8 *extraout_x9_04;
  long extraout_x9_05;
  undefined8 *extraout_x9_06;
  undefined8 *extraout_x9_07;
  undefined8 extraout_x9_08;
  undefined8 extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined8 extraout_x9_11;
  undefined8 *extraout_x9_12;
  undefined8 *extraout_x9_13;
  int extraout_w10;
  undefined8 *extraout_x10;
  ulong extraout_x10_00;
  long *extraout_x10_01;
  long ******pppppplVar25;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  long extraout_x10_09;
  long extraout_x10_10;
  long extraout_x10_11;
  long extraout_x10_12;
  long extraout_x10_13;
  ulong extraout_x11;
  uint extraout_w12;
  int iVar26;
  ulong uVar28;
  dword *pdVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  uint uVar34;
  undefined8 uVar35;
  long *plVar36;
  long *******ppppppplVar37;
  dword *pdVar38;
  int iVar39;
  long unaff_x28;
  long ******pppppplVar40;
  qword *pqStack_f0;
  long lStack_e8;
  section *psStack_c8;
  qword *pqStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 *puStack_a8;
  long *plStack_98;
  long *******ppppppplStack_90;
  ulong uStack_88;
  long *******ppppppplVar27;
  
  lVar22 = param_1[1];
  uVar3 = param_1[2];
  uVar32 = *(undefined8 *)(lVar22 + 0x28);
  uVar35 = *(undefined8 *)(lVar22 + 0x10);
  psVar8 = &section_00000158;
  __Znwm();
  *(long *)psVar8->sectname = lVar22;
  *(undefined8 *)(psVar8->sectname + 8) = uVar32;
  *(undefined1 *)&psVar8->addr = 0;
  *(undefined8 *)psVar8->segname = uVar3;
  *(undefined8 *)(psVar8->segname + 8) = uVar35;
  psVar8[1].segname[8] = '\0';
  psVar8[1].addr = 0;
  pdVar29 = &psVar8[1].flags;
  psVar8[1].flags = 0;
  psVar8[1].reserved1 = 0;
  psVar8[1].reserved2 = 0;
  psVar8[1].reserved3 = 0;
  psVar8[2].sectname[0] = '\0';
  psVar8[2].sectname[1] = '\0';
  psVar8[2].sectname[2] = '\0';
  psVar8[2].sectname[3] = '\0';
  psVar8[2].sectname[4] = '\0';
  psVar8[2].sectname[5] = '\0';
  psVar8[2].sectname[6] = '\0';
  psVar8[2].sectname[7] = '\0';
  psVar9 = psVar8;
  func_0x00674868();
  *(undefined8 *)(psVar9[2].segname + 8) = extraout_x8;
  psVar9[1].size = 0;
  psVar9[1].offset = 0;
  psVar9[1].align = 0;
  *(undefined1 *)&psVar9[1].reloff = 0;
  psVar9[2].size = 0;
  psVar9[2].offset = 0;
  psVar9[2].align = 0;
  pdVar38 = &psVar9[2].reloff;
  psVar9[2].reloff = (int)extraout_x8;
  psVar9[2].nrelocs = (int)((ulong)extraout_x8 >> 0x20);
  psVar9[2].addr = 0;
  psVar9[2].flags = 0;
  psVar9[2].reserved1 = 0;
  psVar9[2].reserved2 = 0;
  psVar9[2].reserved3 = 0;
  *(undefined8 *)(psVar9[3].sectname + 8) = extraout_x8;
  psVar9[3].sectname[0] = '\0';
  psVar9[3].sectname[1] = '\0';
  psVar9[3].sectname[2] = '\0';
  psVar9[3].sectname[3] = '\0';
  psVar9[3].sectname[4] = '\0';
  psVar9[3].sectname[5] = '\0';
  psVar9[3].sectname[6] = '\0';
  psVar9[3].sectname[7] = '\0';
  psVar9[3].segname[8] = '\0';
  psVar9[3].segname[9] = '\0';
  psVar9[3].segname[10] = '\0';
  psVar9[3].segname[0xb] = '\0';
  psVar9[3].segname[0xc] = '\0';
  psVar9[3].segname[0xd] = '\0';
  psVar9[3].segname[0xe] = '\0';
  psVar9[3].segname[0xf] = '\0';
  psVar9[3].segname[0] = '\0';
  psVar9[3].segname[1] = '\0';
  psVar9[3].segname[2] = '\0';
  psVar9[3].segname[3] = '\0';
  psVar9[3].segname[4] = '\0';
  psVar9[3].segname[5] = '\0';
  psVar9[3].segname[6] = '\0';
  psVar9[3].segname[7] = '\0';
  psVar9[3].size = 0;
  psVar9[3].addr = 0;
  psVar9[3].reloff = 0;
  psVar9[3].nrelocs = 0;
  psVar9[3].offset = 0;
  psVar9[3].align = 0;
  psVar9[3].flags = 0;
  psVar9[3].reserved1 = 0;
  func_0x006759a0();
  FUN_00425cb4(&psVar9[3].reserved2);
  psVar8[4].segname[0] = ' ';
  psVar8[4].segname[1] = '\0';
  psVar8[4].segname[2] = '\0';
  psVar8[4].segname[3] = '\0';
  if ((bRam0000000000b63c88 & 1) == 0) {
    iVar26 = 0xb63c88;
    ___cxa_guard_acquire();
    if (iVar26 != 0) {
      FUN_00533800(&PTR_PTR_00b25a18,uRam0000000000b258d0,0xb,0,0,&PTR_PTR_00b25780,0,0);
      ___cxa_guard_release(0xb63c88);
    }
  }
  lVar33 = param_1[3];
  psStack_c8 = psVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pdVar29,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
  pqVar10 = *(qword **)(psVar8->sectname + 8);
  lVar22 = (long)psVar8[2].sectname[7];
  if (lVar22 < 0) {
    pdVar29 = *(dword **)&psVar8[1].flags;
    lVar22._0_4_ = psVar8[1].reserved2;
    lVar22._4_4_ = psVar8[1].reserved3;
  }
  FUN_006557c4(pqVar10,pdVar29,lVar22);
  if (pqVar10 != (qword *)0x0) {
    uVar11 = (ulong)*(uint *)(pqVar10 + 4);
    FUN_0065c4d4(uVar11,pqVar10,lVar33);
    if ((uVar11 & 1) != 0) goto LAB_0065aa88;
  }
  lVar22 = 0;
  uVar11 = 0;
  while( true ) {
    plVar30 = *(long **)(psVar8->sectname + 8);
    if ((ulong)((plVar30[1] - *plVar30) / 0x18) <= uVar11) break;
    lVar12 = *plVar30 + lVar22;
    FUN_00459c38(lVar12,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
    if ((int)lVar12 != 0) {
      func_0x00675824();
      FUN_0065c464();
      goto LAB_00659de0;
    }
    uVar11 = uVar11 + 1;
    lVar22 = lVar22 + 0x18;
  }
  uVar11 = *(ulong *)(lVar33 + 0xb8) & 0xfffffffffffffffc;
  if ((*(char *)(uVar11 + 0x17) < '\0') && (0x1ff < *(ulong *)(uVar11 + 8))) {
    func_0x00674d90(psVar8,uVar11,lVar33);
LAB_00659de0:
    pqVar10 = (qword *)0x0;
    goto LAB_0065aa88;
  }
  if (((*(byte *)(*(long *)psVar8->sectname + 0x31) & 1) == 0) &&
     (*(long *)(*(long *)psVar8->sectname + 8) != 0)) {
    FUN_00479520(plVar30,*(ulong *)(lVar33 + 0xb0) & 0xfffffffffffffffc);
    lVar22 = 0;
    puVar1 = (undefined8 *)(lVar33 + 0x18);
    while( true ) {
      lVar12 = *(long *)(psVar8->sectname + 8);
      uVar7 = lVar22 == *(int *)(lVar33 + 0x20);
      if (*(int *)(lVar33 + 0x20) <= lVar22) break;
      func_0x00675108(*puVar1);
      FUN_006557c4();
      if (lVar12 == 0) {
        lVar12 = *(long *)psVar8->sectname;
        if (*(long *)(lVar12 + 0x18) != 0) {
          func_0x00674d10();
          puVar18 = puVar1;
          if (!(bool)uVar7) {
            puVar18 = extraout_x10;
          }
          puVar18 = (undefined8 *)*puVar18;
          lVar12 = (long)*(char *)((long)puVar18 + 0x17);
          puVar19 = puVar18;
          if (lVar12 < 0) {
            puVar19 = (undefined8 *)*puVar18;
            lVar12 = puVar18[1];
          }
          lVar13 = extraout_x8_00;
          FUN_00655a68(extraout_x8_00,puVar19,lVar12);
          if (lVar13 != 0) goto LAB_00659eb4;
          lVar12 = *(long *)psVar8->sectname;
        }
        func_0x00675108(*puVar1,lVar12);
        FUN_00655b64();
      }
LAB_00659eb4:
      lVar22 = lVar22 + 1;
    }
    FUN_00643970();
    plVar30 = *(long **)(psVar8->sectname + 8);
  }
  uVar11 = plVar30[0x29];
  uVar7 = uVar11 == plVar30[0x2a];
  if (uVar11 < (ulong)plVar30[0x2a]) {
    plVar20 = plVar30;
    FUN_006660c8();
    lVar13 = uVar11 + 0x14;
  }
  else {
    plVar36 = (long *)plVar30[0x28];
    lVar22 = uVar11 - (long)plVar36;
    if (0xccccccccccccccc < lVar22 / 0x14 + 1U) {
      func_0x00666114();
LAB_0065ac54:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x65ac58);
      (*pcVar6)();
    }
    func_0x00676ca8();
    uVar7 = extraout_x9 == 0x666666666666666;
    uVar11 = extraout_x10_00;
    if (0x666666666666665 < extraout_x9) {
      uVar11 = extraout_x8_01;
    }
    if (uVar11 == 0) {
      lVar12 = 0;
    }
    else {
      uVar7 = uVar11 == extraout_x8_01;
      if (extraout_x8_01 <= uVar11 && !(bool)uVar7) {
        FUN_0040cee8();
        goto LAB_0065ac54;
      }
      lVar12 = uVar11 * 0x14;
      __Znwm();
    }
    lVar2 = lVar12 + lVar22;
    FUN_006660c8(lVar2,plVar30);
    lVar13 = lVar2 + 0x14;
    pdVar38 = (dword *)(lVar2 + (lVar22 / -0x14) * 0x14);
    plVar20 = plVar36;
    _memcpy(pdVar38,plVar36,lVar22);
    plVar30[0x28] = (long)pdVar38;
    plVar30[0x29] = lVar13;
    plVar30[0x2a] = lVar12 + uVar11 * 0x14;
    if (plVar36 != (long *)0x0) {
      __ZdlPv(plVar36);
    }
  }
  plVar30[0x29] = lVar13;
  pqVar14 = &section_000000b8.size;
  __Znwm();
  func_0x00675de8();
  pqStack_c0 = pqVar14;
  FUN_0065bbd0(pqVar14);
  if (*pqVar14 == 0) {
    *(int *)((long)pqVar14 + 0x7c) = *(int *)((long)pqVar14 + 0x7c) + 1;
    func_0x006754e8(pqVar14);
    qVar23 = *pqVar14;
    if ((*(uint *)(lVar33 + 0x10) >> 3 & 1) != 0) {
      if (qVar23 == 0) {
        *(int *)((long)pqVar14 + 0xa4) = *(int *)((long)pqVar14 + 0xa4) + 1;
        if ((*(byte *)(lVar33 + 0x10) >> 4 & 1) != 0) goto LAB_0065a008;
        goto LAB_0065a014;
      }
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    if ((*(uint *)(lVar33 + 0x10) >> 4 & 1) != 0) {
      if (qVar23 == 0) {
LAB_0065a008:
        *(int *)(pqVar14 + 0xf) = *(int *)(pqVar14 + 0xf) + 1;
        goto LAB_0065a014;
      }
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    if (qVar23 != 0) {
      func_0x006740c8();
      goto LAB_0065a70c;
    }
LAB_0065a014:
    *(int *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + *(int *)(lVar33 + 0x68) * 0x40;
    plVar20 = (long *)(ulong)(uint)(*(int *)(lVar33 + 0x68) << 1);
    func_0x0065bbfc(pqVar14);
    func_0x00675578();
    plVar36 = extraout_x8_02;
    if (!(bool)uVar7) {
      plVar36 = extraout_x10_01;
    }
    plVar30 = plVar36 + (int)extraout_x8_02[1];
    for (; plVar36 != plVar30; plVar36 = plVar36 + 1) {
      pdVar38 = (dword *)*plVar36;
      if (((byte)pdVar38[4] >> 1 & 1) == 0) {
        if (*pqVar14 != 0) {
          func_0x006740c8();
          goto LAB_0065a70c;
        }
      }
      else {
        if (*pqVar14 != 0) {
          func_0x006740c8();
          goto LAB_0065a70c;
        }
        *(int *)((long)pqVar14 + 0x9c) = *(int *)((long)pqVar14 + 0x9c) + 1;
      }
      *(dword *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + pdVar38[8] * 0x50;
      plVar20 = (long *)(ulong)(pdVar38[8] << 1);
      func_0x0065bbfc(pqVar14);
      pdVar29 = pdVar38 + 6;
      func_0x00675590(*(undefined8 *)pdVar29);
      uVar11 = (long)(int)pdVar38[8] & 0x1fffffffffffffff;
      while (pdVar38 = pdVar29, uVar11 != 0) {
        func_0x00676c9c();
        if ((extraout_w12 >> 3 & 1) != 0) {
          if (extraout_x9_00 != 0) {
            func_0x006740c8();
            goto LAB_0065a70c;
          }
          *(int *)(pqVar14 + 0x14) = extraout_w10 + 1;
        }
        func_0x006769ac();
        uVar11 = extraout_x11;
      }
    }
    FUN_006686dc(lVar33 + 0x30,pqVar14);
    FUN_00668870(lVar33 + 0x48,pqVar14);
    FUN_0066896c(lVar33 + 0x78,pqVar14);
    FUN_00668c54(pqVar14,*(undefined4 *)(lVar33 + 0xa0));
    plVar20 = (long *)(ulong)*(uint *)(lVar33 + 0x90);
    FUN_00668c54(pqVar14);
    if (*pqVar14 != 0) {
      func_0x006740c8();
      goto LAB_0065a70c;
    }
    *(int *)(pqVar14 + 0xe) = *(int *)(pqVar14 + 0xe) + *(int *)(lVar33 + 0x20) * 8;
    pqVar10 = pqVar14;
    FUN_0065c5b4(pqVar14,*(undefined8 *)(psVar8->sectname + 8));
    func_0x00675824();
    FUN_0065c654();
    pdVar38 = *(dword **)(psVar8->sectname + 8);
    if (pqVar10 == (qword *)0x0) {
      lStack_e8 = *(long *)(pdVar38 + 0x52);
      ppppppplVar15 = (long *******)0x0;
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -0xc);
          uVar11 < (ulong)(*(long *)(pdVar38 + 0x58) - *(long *)(pdVar38 + 0x56) >> 3);
          uVar11 = uVar11 + 1) {
        ppppppplVar16 = (long *******)(*(long *)(pdVar38 + 0x56) + uVar11 * 8);
        Hint_Prefetch(*(undefined8 *)(pdVar38 + 0x32),0,2,0);
        ppppppplVar15 = (long *******)*ppppppplVar16;
        FUN_0066c31c(*(undefined8 *)(pdVar38 + 0x32));
        lVar22 = *(long *)(pdVar38 + 0x34);
        func_0x00676198(*(ulong *)(pdVar38 + 0x32) >> 0xc);
        do {
          func_0x0067644c();
          func_0x006753d4();
          while ((extraout_x8_03 & 0x8080808080808080) != 0) {
            func_0x00674eb0();
            ppppppplVar15 = ppppppplVar16;
            FUN_0066c33c(ppppppplVar16,*(undefined8 *)(lVar22 + unaff_x28 * 8));
            if (((ulong)ppppppplVar15 & 1) != 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x32);
              func_0x00676740(*(undefined8 *)(pdVar38 + 0x32));
              goto LAB_0065a350;
            }
            func_0x00675f08();
          }
          func_0x00674774();
        } while ((extraout_x8_04 & 1) == 0);
LAB_0065a350:
      }
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -8); lVar22 = *(long *)(pdVar38 + 0x5c),
          uVar11 < (ulong)(*(long *)(pdVar38 + 0x5e) - lVar22 >> 3); uVar11 = uVar11 + 1) {
        Hint_Prefetch(*(undefined8 *)(pdVar38 + 0x3a),0,2,0);
        ppppppplVar15 = *(long ********)(*(long *)(lVar22 + uVar11 * 8) + 8);
        func_0x0066c3a4();
        lVar33 = *(long *)(pdVar38 + 0x3c);
        func_0x00676198(*(ulong *)(pdVar38 + 0x3a) >> 0xc);
        do {
          func_0x0067644c();
          func_0x006753d4();
          while ((extraout_x8_05 & 0x8080808080808080) != 0) {
            func_0x00674eb0();
            ppppppplVar15 = *(long ********)(lVar22 + uVar11 * 8);
            func_0x0066c384(ppppppplVar15,*(undefined8 *)(lVar33 + unaff_x28 * 8));
            if (((ulong)ppppppplVar15 & 1) != 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x3a);
              func_0x00676740(*(undefined8 *)(pdVar38 + 0x3a));
              goto LAB_0065a3e8;
            }
            func_0x00675f08();
          }
          func_0x00674774();
        } while ((extraout_x8_06 & 1) == 0);
LAB_0065a3e8:
      }
      for (uVar11 = (ulong)*(int *)(lStack_e8 + -4);
          uVar11 < (ulong)(*(long *)(pdVar38 + 100) - *(long *)(pdVar38 + 0x62) >> 4);
          uVar11 = uVar11 + 1) {
        ppppppplVar17 = (long *******)(*(long *)(pdVar38 + 0x62) + uVar11 * 0x10);
        ppppppplVar21 = ppppppplVar17;
        FUN_00666ce8(pdVar38 + 0x42);
        ppppppplVar16 = (long *******)(pdVar38 + 0x42);
        func_0x006766f4();
        uVar34 = (uint)ppppppplVar21;
        ppppppplVar15 = ppppppplVar16;
        if (*(long ********)(pdVar38 + 0x44) == ppppppplVar16 &&
            uVar34 == *(byte *)((long)*(long ********)(pdVar38 + 0x44) + 10)) {
LAB_0065a48c:
          ppppppplVar27 = (long *******)((ulong)ppppppplVar21 & 0xffffffff);
          ppppppplVar17 = ppppppplVar16;
          ppppppplVar37 = ppppppplVar27;
LAB_0065a49c:
          iVar39 = (int)ppppppplVar37;
          iVar26 = (int)ppppppplVar27;
          if (*(char *)((long)ppppppplVar17 + 0xb) != '\0') {
            lVar22 = (long)(int)(iVar26 - uVar34);
            bVar5 = true;
            goto joined_r0x0065a4b0;
          }
          if (ppppppplVar27 != (long *******)((ulong)ppppppplVar21 & 0xffffffff)) {
            bVar5 = true;
            goto LAB_0065a4c4;
          }
        }
        else {
          func_0x00666cb0(ppppppplVar17,ppppppplVar16 + (long)(int)uVar34 * 3 + 2);
          ppppppplVar15 = ppppppplVar17;
          if ((char)ppppppplVar17 < '\0') goto LAB_0065a48c;
          ppppppplVar15 = (long *******)&ppppppplStack_b8;
          ppppppplStack_b8 = ppppppplVar16;
          ppppppplStack_b0 = (long *******)((ulong)ppppppplVar21 & 0xffffffff);
          FUN_0066c3c8();
          ppppppplVar27 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffff);
          iVar26 = (int)ppppppplStack_b0;
          ppppppplVar17 = ppppppplStack_b8;
          ppppppplVar37 = ppppppplStack_b0;
          if (ppppppplStack_b8 == ppppppplVar16) goto LAB_0065a49c;
          bVar5 = false;
LAB_0065a4c4:
          iVar39 = (int)ppppppplVar37;
          if (*(char *)((long)ppppppplVar16 + 0xb) == '\0') {
            func_0x00675b34();
            ppppppplVar37 = (long *******)ppppppplVar15[(ulong)(uVar34 + 1) & 0xff];
            lVar22 = 1;
          }
          else {
            lVar22 = (long)(int)-uVar34;
            ppppppplVar37 = ppppppplVar16;
          }
          while (*(char *)((long)ppppppplVar37 + 0xb) == '\0') {
            func_0x00665c68();
          }
          uVar28 = (ulong)*(byte *)(ppppppplVar37 + 1);
          ppppppplVar37 = (long *******)*ppppppplVar37;
          uVar31 = (ulong)iVar26;
          while( true ) {
            ppppppplVar15 = ppppppplVar37;
            FUN_00665ccc();
            ppppppplVar15 = (long *******)ppppppplVar15[uVar28 & 0xff];
            cVar4 = '\0';
            if (*(char *)((long)ppppppplVar15 + 0xb) == '\0') {
              while (cVar4 == '\0') {
                func_0x00665c68();
                cVar4 = *(char *)((long)ppppppplVar15 + 0xb);
              }
              uVar28 = (ulong)*(byte *)(ppppppplVar15 + 1);
              ppppppplVar37 = (long *******)*ppppppplVar15;
            }
            uVar24 = uVar31;
            if ((ppppppplVar15 == ppppppplVar17) ||
               (uVar24 = (ulong)*(byte *)((long)ppppppplVar15 + 10),
               ppppppplVar37 == ppppppplVar17 && uVar28 == uVar31)) break;
            if (*(byte *)((long)ppppppplVar37 + 10) <= uVar28) {
              do {
                ppppppplVar27 = ppppppplVar37 + 1;
                uVar28 = (ulong)*(byte *)ppppppplVar27;
                ppppppplVar37 = (long *******)*ppppppplVar37;
                if (ppppppplVar37 == ppppppplVar17 && uVar31 == uVar28) goto LAB_0065a59c;
              } while (*(byte *)((long)ppppppplVar37 + 10) <= *(byte *)ppppppplVar27);
            }
            lVar22 = lVar22 + uVar24 + 1;
            uVar28 = uVar28 + 1;
          }
LAB_0065a59c:
          lVar22 = uVar24 + lVar22;
joined_r0x0065a4b0:
          if (lVar22 != 0) {
            uVar31 = *(ulong *)(pdVar38 + 0x46);
            uVar28 = uVar31 - lVar22;
            if (uVar28 == 0) {
              ppppppplVar15 = (long *******)(pdVar38 + 0x42);
              func_0x00665b50();
            }
            else if (bVar5) {
              FUN_0066c538(ppppppplVar16,uVar34 & 0xff,iVar39 - uVar34 & 0xff);
              func_0x00675ac8(*(long *)(pdVar38 + 0x46) - lVar22);
              ppppppplVar15 = ppppppplVar16;
            }
            else {
              while( true ) {
                uVar24 = uVar31 - uVar28;
                if (uVar31 < uVar28 || uVar24 == 0) break;
                uVar34 = (uint)ppppppplVar21;
                if (*(char *)((long)ppppppplVar16 + 0xb) == '\0') {
                  ppppppplStack_90 = ppppppplVar16;
                  uStack_88 = (ulong)ppppppplVar21 & 0xffffffff;
                  func_0x0066c47c(&ppppppplStack_90);
                  pppppplVar25 = ppppppplStack_90[(long)(int)uStack_88 * 3 + 4];
                  pppppplVar40 = ppppppplStack_90[(long)(int)uStack_88 * 3 + 2];
                  ppppppplVar16[(long)(int)uVar34 * 3 + 3] =
                       ppppppplStack_90[(long)(int)uStack_88 * 3 + 3];
                  ppppppplVar16[(long)(int)uVar34 * 3 + 2] = pppppplVar40;
                  ppppppplVar16[(long)(int)uVar34 * 3 + 4] = pppppplVar25;
                  *(char *)((long)ppppppplStack_90 + 10) =
                       *(char *)((long)ppppppplStack_90 + 10) + -1;
                  *(long *)(pdVar38 + 0x46) = *(long *)(pdVar38 + 0x46) + -1;
                  ppppppplVar15 = (long *******)(pdVar38 + 0x42);
                  ppppppplVar16 = ppppppplStack_90;
                  FUN_0066c614(ppppppplVar15,ppppppplStack_90,uStack_88);
                  ppppppplStack_b0 =
                       (long *******)CONCAT44(ppppppplStack_b0._4_4_,(int)ppppppplVar16);
                  ppppppplVar16 = (long *******)&ppppppplStack_b8;
                  ppppppplStack_b8 = ppppppplVar15;
                  FUN_0066c3c8();
                  ppppppplVar21 = ppppppplStack_b0;
                  ppppppplVar17 = ppppppplStack_b8;
                }
                else {
                  uVar31 = (ulong)(int)(*(byte *)((long)ppppppplVar16 + 10) - uVar34);
                  if (uVar24 <= uVar31) {
                    uVar31 = uVar24;
                  }
                  ppppppplVar21 = (long *******)(ulong)(uVar34 & 0xff);
                  FUN_0066c538(ppppppplVar16,ppppppplVar21,(uint)uVar31 & 0xff);
                  func_0x00675ac8(*(long *)(pdVar38 + 0x46) - (uVar31 & 0xff));
                  ppppppplVar17 = ppppppplVar16;
                }
                uVar31 = *(ulong *)(pdVar38 + 0x46);
                ppppppplVar15 = ppppppplVar16;
                ppppppplVar16 = ppppppplVar17;
              }
            }
          }
        }
      }
      plVar20 = (long *)(long)*(int *)(lStack_e8 + -0xc);
      lVar22 = *(long *)(pdVar38 + 0x56);
      puVar1 = *(undefined8 **)(pdVar38 + 0x58);
      plVar30 = (long *)((long)puVar1 - lVar22 >> 3);
      pqStack_f0 = pqVar10;
      if (plVar20 <= plVar30) goto LAB_0065a714;
      uVar11 = (long)plVar20 - (long)plVar30;
      if ((ulong)(*(long *)(pdVar38 + 0x5a) - (long)puVar1 >> 3) < uVar11) {
        lVar22 = (long)(pdVar38 + 0x56);
        func_0x00666120();
        plStack_98 = (long *)(pdVar38 + 0x5a);
        lVar33 = *(long *)(pdVar38 + 0x56);
        lVar12 = *(long *)(pdVar38 + 0x58);
        if (lVar22 != 0) {
          FUN_00666174();
        }
        func_0x00676a18(lVar12 - lVar33);
        puStack_a8 = extraout_x8_07 + uVar11;
        puVar1 = extraout_x8_07;
        for (lVar22 = (long)plVar20 * 8 + (long)plVar30 * -8; lVar22 != 0; lVar22 = lVar22 + -8) {
          *puVar1 = &UNK_0082398c;
          puVar1 = puVar1 + 1;
        }
        FUN_00666148(pdVar38 + 0x56,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        func_0x0066619c();
      }
      else {
        puVar18 = puVar1;
        for (lVar22 = (long)plVar20 * 8 + (long)plVar30 * -8; lVar22 != 0; lVar22 = lVar22 + -8) {
          *puVar18 = &UNK_0082398c;
          puVar18 = puVar18 + 1;
        }
        *(undefined8 **)(pdVar38 + 0x58) = puVar1 + uVar11;
      }
      goto LAB_0065a788;
    }
    lVar22 = *(long *)(pdVar38 + 0x52);
    *(long *)(pdVar38 + 0x52) = lVar22 + -0x14;
    if (*(long *)(pdVar38 + 0x50) == lVar22 + -0x14) {
      *(undefined8 *)(pdVar38 + 0x58) = *(undefined8 *)(pdVar38 + 0x56);
      *(undefined8 *)(pdVar38 + 0x5e) = *(undefined8 *)(pdVar38 + 0x5c);
      *(undefined8 *)(pdVar38 + 100) = *(undefined8 *)(pdVar38 + 0x62);
    }
    *(undefined1 *)((long)pqVar10 + 2) = 1;
    uVar11 = (ulong)*(uint *)(pqVar14 + 0xe);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x15);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x74);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xac);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0xf);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x16);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x7c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xb4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x10);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x17);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x84);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xbc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x11);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x18);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x8c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xc4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x12);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x19);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x94);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xcc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x13);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x1a);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0x9c);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xd4);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)(pqVar14 + 0x14);
    plVar20 = (long *)(ulong)*(uint *)(pqVar14 + 0x1b);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
    uVar11 = (ulong)*(uint *)((long)pqVar14 + 0xa4);
    plVar20 = (long *)(ulong)*(uint *)((long)pqVar14 + 0xdc);
    func_0x006745e8();
    if (uVar11 != 0) {
      func_0x00674160();
      goto LAB_0065a70c;
    }
  }
  else {
    func_0x006740c8();
LAB_0065a70c:
    ppppppplVar15 = (long *******)&ppppppplStack_b8;
    FUN_005558a0();
    lVar22 = extraout_x9_01;
LAB_0065a714:
    pqVar10 = pqStack_f0;
    if (plVar20 < plVar30) {
      *(long *)(pdVar38 + 0x58) = lVar22 + (long)plVar20 * 8;
    }
LAB_0065a788:
    uVar11 = (ulong)*(int *)(lStack_e8 + -8);
    lVar22 = *(long *)(pdVar38 + 0x5e);
    uVar28 = lVar22 - *(long *)(pdVar38 + 0x5c) >> 3;
    if (uVar28 < uVar11) {
      uVar31 = uVar11 - uVar28;
      if ((ulong)(*(long *)(pdVar38 + 0x60) - lVar22 >> 3) < uVar31) {
        lVar22 = (long)(pdVar38 + 0x5c);
        FUN_006661d8();
        plStack_98 = (long *)(pdVar38 + 0x60);
        lVar33 = *(long *)(pdVar38 + 0x5c);
        lVar12 = *(long *)(pdVar38 + 0x5e);
        if (lVar22 != 0) {
          FUN_0066622c();
        }
        func_0x00676a18(lVar12 - lVar33);
        puVar1 = (undefined8 *)(extraout_x8_08 + uVar31 * 8);
        lVar22 = uVar11 * 8 + uVar28 * -8;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_03;
          lVar22 = extraout_x10_03;
        }
        puStack_a8 = puVar1;
        FUN_00666200(pdVar38 + 0x5c,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        func_0x00666254();
      }
      else {
        lVar22 = lVar22 + uVar31 * 8;
        lVar33 = uVar11 * 8 + uVar28 * -8;
        while (lVar33 != 0) {
          func_0x00675e68();
          lVar22 = extraout_x9_02;
          lVar33 = extraout_x10_02;
        }
        *(long *)(pdVar38 + 0x5e) = lVar22;
      }
    }
    else if (uVar11 < uVar28) {
      *(ulong *)(pdVar38 + 0x5e) = *(long *)(pdVar38 + 0x5c) + uVar11 * 8;
    }
    uVar11 = (ulong)*(int *)(lStack_e8 + -4);
    lVar22 = *(long *)(pdVar38 + 100);
    uVar28 = lVar22 - *(long *)(pdVar38 + 0x62) >> 4;
    if (uVar28 < uVar11) {
      uVar31 = uVar11 - uVar28;
      if ((ulong)(*(long *)(pdVar38 + 0x66) - lVar22 >> 4) < uVar31) {
        lVar22 = (long)(pdVar38 + 0x62);
        FUN_00666290(lVar22);
        FUN_006662fc(&ppppppplStack_b8,lVar22,
                     *(long *)(pdVar38 + 100) - *(long *)(pdVar38 + 0x62) >> 4,pdVar38 + 0x66);
        puVar1 = puStack_a8 + uVar31 * 2;
        lVar22 = uVar11 * 0x10 + uVar28 * -0x10;
        while (lVar22 != 0) {
          func_0x00676b58();
          puVar1 = extraout_x9_04;
          lVar22 = extraout_x10_04;
        }
        puStack_a8 = puVar1;
        FUN_006662d0(pdVar38 + 0x62,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        FUN_00666350();
      }
      else {
        lVar22 = lVar22 + uVar31 * 0x10;
        lVar33 = uVar11 * 0x10 + uVar28 * -0x10;
        while (lVar33 != 0) {
          func_0x00676b58();
          lVar22 = extraout_x9_05;
          lVar33 = extraout_x10_05;
        }
        *(long *)(pdVar38 + 100) = lVar22;
      }
    }
    else if (uVar11 < uVar28) {
      *(ulong *)(pdVar38 + 100) = *(long *)(pdVar38 + 0x62) + uVar11 * 0x10;
    }
    uVar28 = (ulong)*(int *)(lStack_e8 + -0x14);
    ppppppplVar16 = (long *******)(pdVar38 + 0x2c);
    uVar11 = *(long *)(pdVar38 + 0x2e) - (long)*ppppppplVar16 >> 3;
    if (uVar11 < uVar28) {
      if ((ulong)(*(long *)(pdVar38 + 0x30) - *(long *)(pdVar38 + 0x2e) >> 3) < uVar28 - uVar11) {
        func_0x00675824();
        FUN_0066638c();
        FUN_006663b4(&ppppppplStack_b8,ppppppplVar15,
                     *(long *)(pdVar38 + 0x2e) - *(long *)(pdVar38 + 0x2c) >> 3,pdVar38 + 0x30);
        func_0x00675750(puStack_a8);
        puVar1 = extraout_x9_06;
        lVar22 = extraout_x10_06;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_07;
          lVar22 = extraout_x10_07;
        }
        puStack_a8 = puVar1;
        func_0x00666408(ppppppplVar16,&ppppppplStack_b8);
        ppppppplVar15 = (long *******)&ppppppplStack_b8;
        FUN_00666428();
      }
      else {
        func_0x00675750();
        uVar3 = extraout_x9_08;
        lVar22 = extraout_x10_08;
        while (lVar22 != 0) {
          func_0x00675e68();
          uVar3 = extraout_x9_09;
          lVar22 = extraout_x10_09;
        }
        *(undefined8 *)(pdVar38 + 0x2e) = uVar3;
      }
    }
    else if (uVar28 < uVar11) {
      FUN_00665d04(ppppppplVar16,*ppppppplVar16 + uVar28);
      ppppppplVar15 = ppppppplVar16;
    }
    uVar28 = (ulong)*(int *)(lStack_e8 + -0x10);
    plVar30 = (long *)(pdVar38 + 0x26);
    uVar11 = *(long *)(pdVar38 + 0x28) - *plVar30 >> 3;
    if (uVar11 < uVar28) {
      plVar36 = (long *)(pdVar38 + 0x2a);
      if ((ulong)(*plVar36 - *(long *)(pdVar38 + 0x28) >> 3) < uVar28 - uVar11) {
        func_0x00675824();
        func_0x0066647c();
        lVar22 = *(long *)(pdVar38 + 0x26);
        lVar33 = *(long *)(pdVar38 + 0x28);
        plStack_98 = plVar36;
        if (ppppppplVar15 != (long *******)0x0) {
          FUN_006664d0();
        }
        func_0x00676a2c(lVar33 - lVar22);
        ppppppplStack_b0 = extraout_x8_09;
        func_0x00675750();
        puVar1 = extraout_x9_12;
        lVar22 = extraout_x10_12;
        while (lVar22 != 0) {
          func_0x00675e68();
          puVar1 = extraout_x9_13;
          lVar22 = extraout_x10_13;
        }
        puStack_a8 = puVar1;
        FUN_006664a4(plVar30,&ppppppplStack_b8);
        func_0x006664f8(&ppppppplStack_b8);
      }
      else {
        func_0x00675750();
        uVar3 = extraout_x9_10;
        lVar22 = extraout_x10_10;
        while (lVar22 != 0) {
          func_0x00675e68();
          uVar3 = extraout_x9_11;
          lVar22 = extraout_x10_11;
        }
        *(undefined8 *)(pdVar38 + 0x28) = uVar3;
      }
    }
    else if (uVar28 < uVar11) {
      func_0x00665f74(plVar30,*plVar30 + uVar28 * 8);
    }
    *(long *)(pdVar38 + 0x52) = *(long *)(pdVar38 + 0x52) + -0x14;
  }
  func_0x0066f568(&pqStack_c0);
LAB_0065aa88:
  *(qword **)*param_1 = pqVar10;
  FUN_0066e80c(&psStack_c8);
  return;
}



/* Entry: 0065acf8; end: 0065ad27;  */

long * FUN_0065acf8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00661040(param_1);
    func_0x006767ac();
  }
  return param_1;
}



/* Entry: 0065ad28; end: 0065ae4b;  */

void FUN_0065ad28(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00674c58();
  func_0x00676540();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00674bbc();
      func_0x007766a0(auStack_58);
      FUN_0065ae4c(auStack_58,&UNK_00910626);
      FUN_00555478();
      func_0x0065ae70();
      func_0x00675ac0();
    }
    func_0x00674bbc();
    func_0x007766a0(auStack_58);
    func_0x0065ae70(auStack_58,&DAT_0091064a);
    FUN_00555478();
    func_0x006765f8();
    FUN_00555478();
    func_0x00675ac0();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x006746d8(plVar1,lVar2,lVar3);
    func_0x006749e4();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x006754bc();
  return;
}



/* Entry: 0065ae4c; end: 0065ae93;  */

void FUN_0065ae4c(void)

{
  func_0x00674a24();
  func_0x00674a58();
  FUN_00554ab4();
  return;
}



/* Entry: 0065ae94; end: 0065aebb;  */

void FUN_0065ae94(void)

{
  FUN_0065ad28();
  return;
}



/* Entry: 0065aebc; end: 0065af67;  */

void FUN_0065aebc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x006753bc();
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar2 = (ulong)*(char *)(param_1 + 0x14f);
    uVar1 = uVar2;
    if ((long)uVar2 < 0) {
      uVar1 = *(ulong *)(param_1 + 0x140);
    }
    if (uVar1 == 0) goto LAB_0065af4c;
  }
  else {
    func_0x006756f4();
    uVar2 = (ulong)*(byte *)(param_1 + 0x14f);
  }
  if (((uint)uVar2 >> 7 & 1) == 0) {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x140);
  }
  if (uVar2 == 0) {
    return;
  }
LAB_0065af4c:
  func_0x006756f4();
  return;
}



/* Entry: 0065af68; end: 0065b04b;  */

void FUN_0065af68(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [40];
  
  func_0x00676540();
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x00674bbc();
    FUN_00776698(auStack_58);
    FUN_00555478(auStack_58,param_1 + 0x90);
    FUN_00537a9c(auStack_58," ");
    FUN_00555478();
    func_0x006765f8();
    FUN_00555478();
    func_0x00675ac0();
  }
  else {
    lVar3 = (long)*(char *)(param_1 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(param_1 + 0x90);
      lVar3 = *(long *)(param_1 + 0x98);
    }
    else {
      lVar2 = param_1 + 0x90;
    }
    func_0x006748a8(plVar1,lVar2,lVar3);
    func_0x006749e4();
    (**(code **)(*plVar1 + 0x18))();
  }
  func_0x006754bc();
  return;
}


