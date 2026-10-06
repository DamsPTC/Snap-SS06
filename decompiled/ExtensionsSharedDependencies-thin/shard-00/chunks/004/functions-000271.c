/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00554984; end: 00554987;  */

long * FUN_00554984(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  __ZNSt3__18ios_base5clearEj(lVar4,0);
  uVar2 = param_1[0xd];
  if (uVar2 == 0) {
    *(undefined8 *)(&UNK_00003c58 + param_1[8]) = 0;
  }
  else {
    lVar4 = param_1[6] - param_1[5];
    if (lVar4 != 0) {
      puVar1 = (ulong *)(param_1 + 9);
      uVar5 = *puVar1 + lVar4;
      *puVar1 = uVar5;
      param_1[10] = param_1[10] - lVar4;
      if ((uVar2 <= uVar5) && (lVar4 = param_1[0xe], lVar4 != 0)) {
        uVar5 = uVar5 - (uVar2 + lVar4);
        if (lVar4 == 1) {
          lVar6 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar6 = lVar7 + 1;
            *(byte *)(uVar2 + lVar7) = (byte)uVar5 | 0x80;
            uVar5 = uVar5 >> 7;
            lVar7 = lVar6;
          } while (lVar4 + -1 != lVar6);
        }
        bVar3 = 0;
        if (lVar6 + 1 != lVar4) {
          bVar3 = 0x80;
        }
        *(byte *)(uVar2 + lVar6) = bVar3 | (byte)uVar5 & 0x7f;
      }
      uVar2 = param_1[0xb];
      if (((uVar2 != 0) && (uVar2 <= *puVar1)) && (lVar4 = param_1[0xc], lVar4 != 0)) {
        uVar5 = *puVar1 - (uVar2 + lVar4);
        if (lVar4 == 1) {
          lVar6 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar6 = lVar7 + 1;
            *(byte *)(uVar2 + lVar7) = (byte)uVar5 | 0x80;
            uVar5 = uVar5 >> 7;
            lVar7 = lVar6;
          } while (lVar4 + -1 != lVar6);
        }
        bVar3 = 0;
        if (lVar6 + 1 != lVar4) {
          bVar3 = 0x80;
        }
        *(byte *)(uVar2 + lVar6) = bVar3 | (byte)uVar5 & 0x7f;
      }
      lVar4 = param_1[8];
      uVar2 = *puVar1;
      *(long *)(&UNK_00003c58 + lVar4) = param_1[10];
      *(ulong *)(&UNK_00003c50 + lVar4) = uVar2;
    }
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00554988; end: 005549eb;  */

long FUN_00554988(long param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,*param_2);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 005549ec; end: 00554a4f;  */

long FUN_005549ec(long param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(lStack_58 + 0x118,*param_2);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 00554a50; end: 00554ab3;  */

long FUN_00554a50(long param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(lStack_58 + 0x118,*param_2);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 00554ab4; end: 00554e33;  */

void FUN_00554ab4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puStack_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(&UNK_00003c58 + *(long *)(param_1 + 8));
  puStack_40 = *(undefined1 **)(&UNK_00003c50 + *(long *)(param_1 + 8));
  uVar7 = uVar3;
  if (param_3 + 0x14U <= uVar3) {
    uVar7 = param_3 + 0x14U;
  }
  uVar1 = 1;
  if (0x7f < uVar7) {
    do {
      uVar8 = uVar7 >> 0xe;
      uVar7 = uVar7 >> 7;
      uVar1 = uVar1 + 1;
    } while (uVar8 != 0);
  }
  if (uVar3 < uVar1 + 1) {
    lStack_38 = 0;
    uVar7 = 0;
    func_0x00555b78();
    if ((uVar7 & 1) == 0) goto LAB_00554c00;
    goto LAB_00554c54;
  }
  puVar11 = puStack_40 + 1;
  *puStack_40 = 0x3a;
  uVar3 = uVar3 - 1;
  uVar7 = uVar1;
  if (uVar3 <= uVar1) {
    uVar7 = uVar3;
  }
  uVar8 = uVar1 - 1;
  if (uVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (uVar1 < 0x21) {
      uVar10 = 0;
    }
    else {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      *(undefined8 *)(puStack_40 + 9) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 1) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 0x19) = 0x8080808080808080;
      *(undefined8 *)(puStack_40 + 0x11) = 0x8080808080808080;
      if (uVar9 != 0x20) {
        *(undefined8 *)(puStack_40 + 0x29) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x21) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x39) = 0x8080808080808080;
        *(undefined8 *)(puStack_40 + 0x31) = 0x8080808080808080;
      }
      uVar10 = uVar9;
      if (uVar8 == uVar9) goto LAB_00554ba8;
    }
    do {
      uVar9 = uVar10 + 1;
      puVar11[uVar10] = 0x80;
      uVar10 = uVar9;
    } while (uVar8 != uVar9);
  }
LAB_00554ba8:
  uVar5 = 0;
  if (uVar9 + 1 != uVar1) {
    uVar5 = 0x80;
  }
  puVar11[uVar9] = uVar5;
  puStack_40 = puVar11 + uVar1;
  lStack_38 = uVar3 - uVar1;
  uVar3 = 0;
  func_0x00555b78();
  if ((uVar3 & 1) == 0) {
LAB_00554c00:
    *(undefined8 *)(&UNK_00003c58 + *(long *)(param_1 + 8)) = 0;
    return;
  }
  if ((puVar11 <= puStack_40) && (uVar7 != 0)) {
    uVar3 = (long)puStack_40 - (long)(puVar11 + uVar7);
    if (uVar7 == 1) {
      lVar4 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2 + 1;
        puVar11[lVar2] = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        lVar2 = lVar4;
      } while (uVar7 - 1 != lVar4);
    }
    bVar6 = 0;
    if (lVar4 + 1U != uVar7) {
      bVar6 = 0x80;
    }
    puVar11[lVar4] = bVar6 | (byte)uVar3 & 0x7f;
  }
LAB_00554c54:
  lVar2 = *(long *)(param_1 + 8);
  *(long *)(&UNK_00003c58 + lVar2) = lStack_38;
  *(undefined1 **)(&UNK_00003c50 + lVar2) = puStack_40;
  return;
}



/* Entry: 00554e34; end: 0055505f;  */

long * FUN_00554e34(long *param_1,long param_2,undefined4 param_3,uint param_4,long param_5,
                   undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  long lVar9;
  long lVar10;
  undefined4 auStack_58 [2];
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x2a] = 0;
  puVar1 = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_00998de0 + 0x40;
  param_1[0x23] = (long)(PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_00998de0 + 0x18);
  param_1[0x24] = (long)puVar1;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x24,0);
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x78a] = (long)(param_1 + 0x37);
  param_1[0x78b] = (long)&UNK_00003a98;
  *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) =
       *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) | 0x201;
  lVar5 = param_2;
  _strlen();
  *param_1 = param_2;
  param_1[1] = lVar5;
  lVar5 = param_2;
  _strlen();
  if (lVar5 != 0) {
    lVar2 = -1;
    lVar9 = param_2;
    do {
      lVar10 = lVar2;
      lVar9 = lVar9 + -1;
      if (lVar10 - lVar5 == -1) goto LAB_00554f4c;
      lVar2 = lVar10 + 1;
    } while (*(char *)(lVar9 + lVar5) != '/');
    lVar9 = lVar5 + param_2;
    if (lVar2 != lVar5) {
      lVar5 = lVar10 + 1;
      param_2 = lVar9 - lVar2;
    }
  }
LAB_00554f4c:
  param_1[2] = param_2;
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  uVar3 = 2;
  if (param_4 < 4) {
    uVar3 = param_4;
  }
  uVar4 = 0;
  if (-1 < (int)param_4) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 5) = uVar4;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = param_5;
  *(undefined4 *)(param_1 + 7) = param_6;
  puVar1 = PTR___tlv_bootstrap_00b2c528;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c528;
  ppuVar6 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_00b2c528)();
  if (*(char *)ppuVar6 == '\x01') {
    ppuVar7 = &PTR___tlv_bootstrap_00b2c510;
    (*(code *)PTR___tlv_bootstrap_00b2c510)();
    uVar8 = *(undefined4 *)ppuVar7;
  }
  else {
    _pthread_threadid_np(0,auStack_58);
    ppuVar6 = &PTR___tlv_bootstrap_00b2c510;
    (*(code *)PTR___tlv_bootstrap_00b2c510)(auStack_58[0]);
    *(undefined4 *)ppuVar6 = extraout_w8;
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar7 = 1;
    uVar8 = extraout_w8_00;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
  return param_1;
}



/* Entry: 00555060; end: 005550bb;  */

long * FUN_00555060(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(lVar1 + 0x118);
    if ((*(byte *)(lVar1 + 0x88) & 1) != 0) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x90));
    }
    if (*(char *)(lVar1 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x68));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 005550bc; end: 005550eb;  */

undefined4 * FUN_005550bc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = param_1;
  ___error();
  *puVar2 = uVar1;
  return param_1;
}



/* Entry: 005550ec; end: 00555467;  */

undefined4 * FUN_005550ec(undefined4 *param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined4 *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(param_1 + 2);
  iVar7 = *(int *)(lVar11 + 0x28);
  puVar10 = param_1;
  if (-1 < iVar7) {
    if (*(char *)(lVar11 + 0x82) == '\x01') {
      FUN_00554ab4(param_1,": ",2);
      FUN_00555f3c(&ppppuStack_78,*param_1);
      uVar3 = uStack_70;
      pppppuVar9 = (undefined8 *****)ppppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar3 = (ulong)bStack_61;
        pppppuVar9 = &ppppuStack_78;
      }
      func_0x00554c74(param_1,pppppuVar9,uVar3);
      FUN_00554ab4(param_1," [",2);
      uStack_c0 = *param_1;
      FUN_00554988(param_1,&uStack_c0);
      FUN_00554ab4();
      if ((char)bStack_61 < '\0') {
        __ZdlPv(ppppuStack_78);
      }
      lVar11 = *(long *)(param_1 + 2);
      iVar7 = *(int *)(lVar11 + 0x28);
    }
    if (iVar7 == 3) {
      do {
        if (cRam0000000000b62680 != '\0') {
          ClearExclusiveLocal();
          goto LAB_005551e8;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0xb62680,0x10);
        if (bVar6) {
          cRam0000000000b62680 = '\x01';
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 *)(lVar11 + 0x80) = 1;
    }
LAB_005551e8:
    lStack_88 = lVar11 + 0x1b8;
    lStack_80 = *(long *)(&UNK_00003c50 + lVar11) - lStack_88;
    puVar2 = (undefined2 *)(&UNK_00003c60 + lVar11);
    puStack_90 = &UNK_00003a96;
    puStack_98 = puVar2;
    if (*(char *)(lVar11 + 0x24) == '\x01') {
      (*(code *)PTR___tlv_bootstrap_00b2c4f8)
                (&PTR___tlv_bootstrap_00b2c4f8,*(undefined8 *)(lVar11 + 0x30),
                 *(undefined4 *)(lVar11 + 0x38),*(undefined4 *)(lVar11 + 0x3c),
                 *(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),
                 *(undefined4 *)(lVar11 + 0x20));
      uVar8 = extraout_x8;
      FUN_005558ac();
      *(undefined8 *)(lVar11 + 0x50) = uVar8;
      uStack_a8 = 0;
      uStack_a0 = 0;
      puVar10 = &uStack_c0;
      FUN_00555cf4(puVar10,&lStack_88);
      iVar7 = (int)puVar10;
    }
    else {
      *(undefined8 *)(lVar11 + 0x50) = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      puVar10 = &uStack_c0;
      FUN_00555cf4(puVar10,&lStack_88);
      iVar7 = (int)puVar10;
    }
    if ((iVar7 != 0) && (CONCAT44(uStack_bc,uStack_c0) == 7)) {
      do {
        if (lStack_b8 == 2) {
          uStack_48 = uStack_a0;
          uStack_50 = uStack_a8;
          if (puStack_90 < (undefined *)0x2) break;
          uStack_60 = 0;
          puStack_58 = (undefined *)0x0;
          pppppuVar9 = &ppppuStack_78;
          FUN_00555cf4(pppppuVar9,&uStack_50);
          if ((int)pppppuVar9 != 0) {
            do {
              if (((undefined8 *****)ppppuStack_78 ==
                   (undefined8 *****)((long)&MACH_HEADER.cputype + 2) ||
                   (undefined8 *****)ppppuStack_78 ==
                   (undefined8 *****)((long)&MACH_HEADER.magic + 1)) && (uStack_70 == 2)) {
                puVar1 = puStack_58;
                if (puStack_90 <= puStack_58) {
                  puVar1 = puStack_90;
                }
                _memcpy(puStack_98,uStack_60,puVar1);
                puStack_98 = (undefined2 *)((long)puStack_98 + (long)puVar1);
                puStack_90 = puStack_90 + -(long)puVar1;
                if (puVar1 < puStack_58) goto LAB_00555344;
              }
              pppppuVar9 = &ppppuStack_78;
              FUN_00555cf4(pppppuVar9,&uStack_50);
            } while (((ulong)pppppuVar9 & 1) != 0);
          }
        }
        puVar10 = &uStack_c0;
        FUN_00555cf4(puVar10,&lStack_88);
        if (((int)puVar10 == 0) || (CONCAT44(uStack_bc,uStack_c0) != 7)) break;
      } while( true );
    }
LAB_00555344:
    *puStack_98 = 10;
    puVar1 = (undefined *)((long)puStack_98 + (2 - (long)puVar2));
    if (&UNK_00003a97 < puVar1) {
      puVar1 = &UNK_00003a98;
    }
    *(undefined2 **)(lVar11 + 0x40) = puVar2;
    *(undefined **)(lVar11 + 0x48) = puVar1;
    puVar10 = *(undefined4 **)(param_1 + 2);
    *(undefined4 **)(puVar10 + 0x16) = puVar10 + 0x6e;
    *(long *)(puVar10 + 0x18) = *(long *)(puVar10 + 0xf14) - (long)(puVar10 + 0x6e);
    if ((puVar10[10] == 3) && ((*(byte *)((long)puVar10 + 0x81) & 1) == 0)) {
      puVar4 = (undefined8 *)(puVar10 + 0x24);
      if ((*(ulong *)(puVar10 + 0x22) & 1) != 0) {
        puVar4 = *(undefined8 **)(puVar10 + 0x24);
      }
      FUN_005563b4(puVar10,puVar4,*(ulong *)(puVar10 + 0x22) >> 1,*(undefined1 *)(puVar10 + 0x44));
      FUN_00460cc0(*(long *)(param_1 + 2) + 0x68,"*** Check failure stack trace: ***\n");
      FUN_005561c8(0,0x40,1,FUN_0055585c,*(long *)(param_1 + 2) + 0x68);
      puVar10 = *(undefined4 **)(param_1 + 2);
    }
    puVar4 = (undefined8 *)(puVar10 + 0x24);
    if ((*(ulong *)(puVar10 + 0x22) & 1) != 0) {
      puVar4 = *(undefined8 **)(puVar10 + 0x24);
    }
    FUN_005563b4(puVar10,puVar4,*(ulong *)(puVar10 + 0x22) >> 1,*(undefined1 *)(puVar10 + 0x44));
    if (*(int *)(*(long *)(param_1 + 2) + 0x28) == 3) {
      FUN_00556914();
      if (*(char *)(*(long *)(param_1 + 2) + 0x81) == '\x01') {
        FUN_00555468();
      }
      FUN_007766e8();
      if ((char)bStack_61 < '\0') {
        __ZdlPv(ppppuStack_78);
      }
      __Unwind_Resume(puVar10);
      puVar10 = (undefined4 *)((long)&MACH_HEADER.magic + 1);
      __exit(1);
      func_0x00554c74();
      return puVar10;
    }
  }
  return puVar10;
}



/* Entry: 00555468; end: 00555477;  */

undefined8 FUN_00555468(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  __exit(1);
  func_0x00554c74();
  return uVar1;
}



/* Entry: 00555478; end: 005554b3;  */

undefined8 FUN_00555478(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x00554c74(param_1,puVar2,uVar1);
  return param_1;
}



/* Entry: 005554b4; end: 005556df;  */

long * FUN_005554b4(long *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_FUN_00a013a0;
  puVar1 = *(undefined1 **)(&UNK_00003c50 + param_2);
  uVar6 = *(ulong *)(&UNK_00003c58 + param_2);
  param_1[8] = param_2;
  param_1[9] = (long)puVar1;
  param_1[10] = uVar6;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  uVar2 = 1;
  uVar3 = uVar6;
  if (0x7f < uVar6) {
    do {
      uVar9 = uVar3 >> 0xe;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 >> 7;
    } while (uVar9 != 0);
  }
  if (uVar6 < uVar2 + 1) {
    uVar2 = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar3 = 1;
    param_1[0xc] = 0;
  }
  else {
    *puVar1 = 0x3a;
    lVar5 = param_1[9] + 1;
    uVar6 = param_1[10] - 1;
    param_1[9] = lVar5;
    param_1[10] = uVar6;
    uVar3 = uVar2;
    if (uVar6 <= uVar2) {
      uVar3 = uVar6;
    }
    lVar4 = 0;
    lVar7 = lVar5;
    if (uVar2 != 1) {
      do {
        *(undefined1 *)(param_1[9] + lVar4) = 0x80;
        lVar4 = lVar4 + 1;
      } while (uVar2 - 1 != lVar4);
      lVar7 = param_1[9];
    }
    uVar8 = 0;
    if (lVar4 + 1U != uVar2) {
      uVar8 = 0x80;
    }
    *(undefined1 *)(lVar7 + lVar4) = uVar8;
    puVar1 = (undefined1 *)(param_1[9] + uVar2);
    uVar2 = param_1[10] - uVar2;
    param_1[9] = (long)puVar1;
    param_1[10] = uVar2;
    param_1[0xb] = lVar5;
    param_1[0xc] = uVar3;
    uVar3 = 1;
    uVar6 = uVar2;
    if (0x7f < uVar2) {
      do {
        uVar9 = uVar6 >> 0xe;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 >> 7;
      } while (uVar9 != 0);
    }
  }
  if (uVar2 < uVar3 + 1) {
    lVar4 = 0;
    uVar2 = 0;
    lVar5 = 0;
  }
  else {
    *puVar1 = 10;
    lVar5 = param_1[9] + 1;
    uVar6 = param_1[10] - 1;
    param_1[9] = lVar5;
    param_1[10] = uVar6;
    uVar2 = uVar3;
    if (uVar6 <= uVar3) {
      uVar2 = uVar6;
    }
    lVar4 = 0;
    lVar7 = lVar5;
    if (uVar3 != 1) {
      do {
        *(undefined1 *)(param_1[9] + lVar4) = 0x80;
        lVar4 = lVar4 + 1;
      } while (uVar3 - 1 != lVar4);
      lVar7 = param_1[9];
    }
    uVar8 = 0;
    if (lVar4 + 1U != uVar3) {
      uVar8 = 0x80;
    }
    *(undefined1 *)(lVar7 + lVar4) = uVar8;
    puVar1 = (undefined1 *)(param_1[9] + uVar3);
    param_1[9] = (long)puVar1;
    lVar4 = param_1[10] - uVar3;
  }
  param_1[10] = lVar4;
  param_1[0xd] = lVar5;
  param_1[0xe] = uVar2;
  param_1[5] = (long)puVar1;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)(puVar1 + lVar4);
  lVar5 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(long **)(lVar5 + 0x28) = param_1;
  __ZNSt3__18ios_base5clearEj(lVar5,0);
  return param_1;
}



/* Entry: 005556e0; end: 00555847;  */

long * FUN_005556e0(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  __ZNSt3__18ios_base5clearEj(lVar4,0);
  uVar2 = param_1[0xd];
  if (uVar2 == 0) {
    *(undefined8 *)(&UNK_00003c58 + param_1[8]) = 0;
  }
  else {
    lVar4 = param_1[6] - param_1[5];
    if (lVar4 != 0) {
      puVar1 = (ulong *)(param_1 + 9);
      uVar5 = *puVar1 + lVar4;
      *puVar1 = uVar5;
      param_1[10] = param_1[10] - lVar4;
      if ((uVar2 <= uVar5) && (lVar4 = param_1[0xe], lVar4 != 0)) {
        uVar5 = uVar5 - (uVar2 + lVar4);
        if (lVar4 == 1) {
          lVar6 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar6 = lVar7 + 1;
            *(byte *)(uVar2 + lVar7) = (byte)uVar5 | 0x80;
            uVar5 = uVar5 >> 7;
            lVar7 = lVar6;
          } while (lVar4 + -1 != lVar6);
        }
        bVar3 = 0;
        if (lVar6 + 1 != lVar4) {
          bVar3 = 0x80;
        }
        *(byte *)(uVar2 + lVar6) = bVar3 | (byte)uVar5 & 0x7f;
      }
      uVar2 = param_1[0xb];
      if (((uVar2 != 0) && (uVar2 <= *puVar1)) && (lVar4 = param_1[0xc], lVar4 != 0)) {
        uVar5 = *puVar1 - (uVar2 + lVar4);
        if (lVar4 == 1) {
          lVar6 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar6 = lVar7 + 1;
            *(byte *)(uVar2 + lVar7) = (byte)uVar5 | 0x80;
            uVar5 = uVar5 >> 7;
            lVar7 = lVar6;
          } while (lVar4 + -1 != lVar6);
        }
        bVar3 = 0;
        if (lVar6 + 1 != lVar4) {
          bVar3 = 0x80;
        }
        *(byte *)(uVar2 + lVar6) = bVar3 | (byte)uVar5 & 0x7f;
      }
      lVar4 = param_1[8];
      uVar2 = *puVar1;
      *(long *)(&UNK_00003c58 + lVar4) = param_1[10];
      *(ulong *)(&UNK_00003c50 + lVar4) = uVar2;
    }
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00555848; end: 0055585b;  */

void FUN_00555848(void)

{
  FUN_005556e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0055585c; end: 0055588b;  */

void FUN_0055585c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _strlen();
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (param_2,param_1,uVar1);
  return;
}



/* Entry: 0055588c; end: 0055589f;  */

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffff0 : 0x00555938 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0055588c(uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6,undefined2 *param_7,int param_8)

{
  undefined2 *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong in_stack_fffffffffffffff0;
  ulong in_stack_fffffffffffffff8;
  
  FUN_005550ec();
  FUN_007766e8();
  func_0x0040cf10();
  FUN_0055588c();
  if (in_stack_fffffffffffffff8 < 0x22) {
    uVar8 = 0;
    in_stack_fffffffffffffff8 = 0;
  }
  else {
    uVar3 = 999999999;
    uVar4 = 0x7fffffffffffffff;
    if (param_2 != 0) {
      uVar3 = ~(uint)((long)param_2 >> 0x3f) & 999999999;
      uVar4 = (long)param_2 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar2 = (ulong)uVar3;
    if ((param_3 & 0xffffffff) != 0xffffffff) {
      uVar2 = (param_3 & 0xffffffff) >> 2;
      uVar4 = param_2;
    }
    if (param_1 < 3) {
      pcVar6 = (&PTR_s_INFO_00a01428)[param_1];
    }
    else {
      pcVar6 = "FATAL";
      if (param_1 != 3) {
        pcVar6 = "UNKNOWN";
      }
    }
    uVar8 = in_stack_fffffffffffffff0;
    FUN_00555a98(in_stack_fffffffffffffff0,in_stack_fffffffffffffff8,"%c0000 00:00:%02d.%06d %7d ",
                 0x1b,*pcVar6,uVar4,uVar2 / 1000,param_4);
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar8 & 0xffffffff;
      in_stack_fffffffffffffff0 = in_stack_fffffffffffffff0 + uVar8;
      in_stack_fffffffffffffff8 = in_stack_fffffffffffffff8 - uVar8;
    }
  }
  if (in_stack_fffffffffffffff8 <= param_6) {
    param_6 = in_stack_fffffffffffffff8;
  }
  _memcpy(in_stack_fffffffffffffff0,param_5,param_6);
  puVar1 = (undefined2 *)(in_stack_fffffffffffffff0 + param_6);
  lVar7 = param_6 + uVar8;
  if (in_stack_fffffffffffffff8 - param_6 < 0xe) {
    uVar8 = 0;
    puVar5 = puVar1;
  }
  else {
    puVar5 = (undefined2 *)((long)puVar1 + 1);
    *(undefined1 *)puVar1 = 0x3a;
    if ((int)param_7 < 0) {
      puVar5 = puVar1 + 1;
      *(undefined1 *)((long)puVar1 + 1) = 0x2d;
      param_7 = (undefined2 *)(ulong)(uint)-(int)param_7;
    }
    func_0x005748b4(param_7,puVar5);
    puVar5 = param_7 + 1;
    *param_7 = 0x205d;
    uVar8 = (in_stack_fffffffffffffff8 - param_6) - ((long)puVar5 - (long)puVar1);
    lVar7 = lVar7 + ((long)puVar5 - (long)puVar1);
  }
  if (param_8 == 1) {
    if (4 < uVar8) {
      uVar8 = 5;
    }
    _memcpy(puVar5,"RAW: ",uVar8);
    lVar7 = lVar7 + uVar8;
  }
  return lVar7;
}



/* Entry: 005558a0; end: 005558ab;  */

long FUN_005558a0(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6,undefined2 *param_7,int param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong *unaff_x29;
  
  FUN_0055588c();
  if (unaff_x29[1] < 0x22) {
    uVar7 = 0;
    uVar4 = 0;
    unaff_x29[1] = 0;
    uVar5 = *unaff_x29;
  }
  else {
    uVar1 = 999999999;
    uVar5 = 0x7fffffffffffffff;
    if (param_2 != 0) {
      uVar1 = ~(uint)((long)param_2 >> 0x3f) & 999999999;
      uVar5 = (long)param_2 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar7 = (ulong)uVar1;
    if ((param_3 & 0xffffffff) != 0xffffffff) {
      uVar7 = (param_3 & 0xffffffff) >> 2;
      uVar5 = param_2;
    }
    uVar4 = *unaff_x29;
    if ((uint)param_1 < 3) {
      pcVar6 = (&PTR_s_INFO_00a01428)[param_1 & 0xffffffff];
    }
    else {
      pcVar6 = "FATAL";
      if ((uint)param_1 != 3) {
        pcVar6 = "UNKNOWN";
      }
    }
    FUN_00555a98(uVar4,unaff_x29[1],"%c0000 00:00:%02d.%06d %7d ",0x1b,*pcVar6,uVar5,uVar7 / 1000,
                 param_4);
    uVar5 = *unaff_x29;
    uVar7 = unaff_x29[1];
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = uVar5 + uVar4;
      uVar7 = uVar7 - uVar4;
      *unaff_x29 = uVar5;
      unaff_x29[1] = uVar7;
    }
  }
  if (uVar7 <= param_6) {
    param_6 = uVar7;
  }
  _memcpy(uVar5,param_5,param_6);
  uVar5 = unaff_x29[1];
  puVar2 = (undefined2 *)(*unaff_x29 + param_6);
  *unaff_x29 = (ulong)puVar2;
  unaff_x29[1] = uVar5 - param_6;
  lVar8 = param_6 + uVar4;
  if (uVar5 - param_6 < 0xe) {
    uVar5 = 0;
    unaff_x29[1] = 0;
  }
  else {
    puVar3 = (undefined2 *)((long)puVar2 + 1);
    *(undefined1 *)puVar2 = 0x3a;
    if ((int)param_7 < 0) {
      puVar3 = puVar2 + 1;
      *(undefined1 *)((long)puVar2 + 1) = 0x2d;
      param_7 = (undefined2 *)(ulong)(uint)-(int)param_7;
    }
    func_0x005748b4(param_7,puVar3);
    puVar2 = param_7 + 1;
    *param_7 = 0x205d;
    uVar7 = *unaff_x29;
    uVar5 = unaff_x29[1] - ((long)puVar2 - uVar7);
    *unaff_x29 = (ulong)puVar2;
    unaff_x29[1] = uVar5;
    lVar8 = lVar8 + ((long)puVar2 - uVar7);
  }
  if (param_8 == 1) {
    if (4 < uVar5) {
      uVar5 = 5;
    }
    _memcpy(puVar2,"RAW: ",uVar5);
    *unaff_x29 = *unaff_x29 + uVar5;
    unaff_x29[1] = unaff_x29[1] - uVar5;
    lVar8 = lVar8 + uVar5;
  }
  return lVar8;
}



/* Entry: 005558ac; end: 00555a97;  */

long FUN_005558ac(uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 ulong param_6,undefined2 *param_7,int param_8,ulong *param_9)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_9[1] < 0x22) {
    uVar7 = 0;
    uVar4 = 0;
    param_9[1] = 0;
    uVar5 = *param_9;
  }
  else {
    uVar1 = 999999999;
    uVar5 = 0x7fffffffffffffff;
    if (param_2 != 0) {
      uVar1 = ~(uint)((long)param_2 >> 0x3f) & 999999999;
      uVar5 = (long)param_2 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar7 = (ulong)uVar1;
    if ((param_3 & 0xffffffff) != 0xffffffff) {
      uVar7 = (param_3 & 0xffffffff) >> 2;
      uVar5 = param_2;
    }
    uVar4 = *param_9;
    if (param_1 < 3) {
      pcVar6 = (&PTR_s_INFO_00a01428)[param_1];
    }
    else {
      pcVar6 = "FATAL";
      if (param_1 != 3) {
        pcVar6 = "UNKNOWN";
      }
    }
    FUN_00555a98(uVar4,param_9[1],"%c0000 00:00:%02d.%06d %7d ",0x1b,*pcVar6,uVar5,uVar7 / 1000,
                 param_4);
    uVar5 = *param_9;
    uVar7 = param_9[1];
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = uVar5 + uVar4;
      uVar7 = uVar7 - uVar4;
      *param_9 = uVar5;
      param_9[1] = uVar7;
    }
  }
  if (uVar7 <= param_6) {
    param_6 = uVar7;
  }
  _memcpy(uVar5,param_5,param_6);
  uVar5 = param_9[1];
  puVar2 = (undefined2 *)(*param_9 + param_6);
  *param_9 = (ulong)puVar2;
  param_9[1] = uVar5 - param_6;
  lVar8 = param_6 + uVar4;
  if (uVar5 - param_6 < 0xe) {
    uVar5 = 0;
    param_9[1] = 0;
  }
  else {
    puVar3 = (undefined2 *)((long)puVar2 + 1);
    *(undefined1 *)puVar2 = 0x3a;
    if ((int)param_7 < 0) {
      puVar3 = puVar2 + 1;
      *(undefined1 *)((long)puVar2 + 1) = 0x2d;
      param_7 = (undefined2 *)(ulong)(uint)-(int)param_7;
    }
    func_0x005748b4(param_7,puVar3);
    puVar2 = param_7 + 1;
    *param_7 = 0x205d;
    uVar7 = *param_9;
    uVar5 = param_9[1] - ((long)puVar2 - uVar7);
    *param_9 = (ulong)puVar2;
    param_9[1] = uVar5;
    lVar8 = lVar8 + ((long)puVar2 - uVar7);
  }
  if (param_8 == 1) {
    if (4 < uVar5) {
      uVar5 = 5;
    }
    _memcpy(puVar2,"RAW: ",uVar5);
    *param_9 = *param_9 + uVar5;
    param_9[1] = param_9[1] - uVar5;
    lVar8 = lVar8 + uVar5;
  }
  return lVar8;
}



/* Entry: 00555a98; end: 00555cf3;  */

ulong FUN_00555a98(long param_1,long param_2,ulong param_3,long *param_4,ulong param_5,ulong param_6
                  ,uint param_7,uint param_8)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  code *pcStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = &lStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_5 & 0xff;
  pcStack_70 = FUN_0056061c;
  uStack_68 = param_6 & 0xffffffff;
  uStack_60 = 0x5606ac;
  uStack_58 = (ulong)param_7;
  uStack_50 = 0x5606ac;
  uStack_48 = (ulong)param_8;
  uStack_40 = 0x5606ac;
  uVar4 = param_2 - 1;
  uStack_88 = 0;
  if (param_2 != 0) {
    uStack_88 = uVar4;
  }
  uStack_80 = 0;
  lStack_90 = param_1;
  FUN_0056138c(&lStack_90,FUN_00561b44,param_3,param_4,&uStack_78,4);
  if (((ulong)plVar2 & 1) == 0) {
    ___error();
    *(undefined4 *)plVar2 = 0x16;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = uStack_80;
    if (param_2 != 0) {
      if (uStack_80 <= uVar4) {
        uVar4 = uStack_80;
      }
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar4 = uVar6 << 3 | 2;
  lVar5 = 1;
  uVar10 = uVar4;
  if (0x7f < uVar6 << 3) {
    do {
      uVar6 = uVar10 >> 0xe;
      lVar5 = lVar5 + 1;
      uVar10 = uVar10 >> 7;
    } while (uVar6 != 0);
  }
  uVar10 = param_4[1];
  uVar6 = uVar10;
  if (param_3 <= uVar10) {
    uVar6 = param_3;
  }
  lVar3 = 1;
  if (0x7f < uVar6) {
    do {
      uVar7 = uVar6 >> 0xe;
      uVar6 = uVar6 >> 7;
      lVar3 = lVar3 + 1;
    } while (uVar7 != 0);
  }
  uVar6 = lVar3 + lVar5;
  uVar7 = uVar10 - uVar6;
  if (uVar6 + param_3 <= uVar10 || uVar10 < uVar6) {
    uVar7 = param_3;
  }
  if (uVar10 < uVar7 + uVar6) {
    lVar5 = 0;
  }
  else {
    if (lVar5 == 1) {
      lVar8 = 0;
    }
    else {
      lVar9 = 0;
      do {
        lVar8 = lVar9 + 1;
        *(byte *)(*param_4 + lVar9) = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        lVar9 = lVar8;
      } while (lVar5 + -1 != lVar8);
    }
    bVar1 = 0;
    if (lVar8 + 1 != lVar5) {
      bVar1 = 0x80;
    }
    *(byte *)(*param_4 + lVar8) = bVar1 | (byte)uVar4 & 0x7f;
    lVar9 = *param_4 + lVar5;
    *param_4 = lVar9;
    param_4[1] = param_4[1] - lVar5;
    lVar5 = 0;
    uVar4 = uVar7;
    if (lVar3 != 1) {
      do {
        *(byte *)(*param_4 + lVar5) = (byte)uVar4 | 0x80;
        lVar5 = lVar5 + 1;
        uVar4 = uVar4 >> 7;
      } while (lVar3 + -1 != lVar5);
      lVar9 = *param_4;
    }
    bVar1 = 0;
    if (lVar5 + 1 != lVar3) {
      bVar1 = 0x80;
    }
    *(byte *)(lVar9 + lVar5) = bVar1 | (byte)uVar4 & 0x7f;
    *param_4 = *param_4 + lVar3;
    param_4[1] = param_4[1] - lVar3;
    _memcpy();
    *param_4 = *param_4 + uVar7;
    lVar5 = param_4[1] - uVar7;
  }
  param_4[1] = lVar5;
  return (ulong)(uVar7 + uVar6 <= uVar10);
}



/* Entry: 00555cf4; end: 00555f3b;  */

bool FUN_00555cf4(ulong *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    uVar16 = 0;
    uVar12 = 0;
    lVar10 = 0;
    do {
      lVar11 = lVar9;
      if (lVar9 == lVar10) break;
      bVar3 = *(byte *)(*param_2 + lVar10);
      uVar12 = ((ulong)bVar3 & 0x7f) << (uVar16 & 0x3f) | uVar12;
      lVar11 = lVar10 + 1;
      uVar16 = uVar16 + 7;
      lVar10 = lVar11;
    } while ((char)bVar3 < '\0');
    pbVar2 = (byte *)(*param_2 + lVar11);
    uVar16 = lVar9 - lVar11;
    *param_2 = (long)pbVar2;
    param_2[1] = uVar16;
    uVar13 = uVar12 & 7;
    *param_1 = uVar12 >> 3;
    param_1[1] = uVar13;
    if (uVar13 < 2) {
      if (uVar13 == 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        do {
          uVar17 = uVar16;
          if (uVar16 == uVar14) break;
          pbVar1 = pbVar2 + uVar14;
          uVar13 = ((ulong)*pbVar1 & 0x7f) << (uVar12 & 0x3f) | uVar13;
          uVar17 = uVar14 + 1;
          uVar12 = uVar12 + 7;
          uVar14 = uVar17;
        } while ((char)*pbVar1 < '\0');
      }
      else {
        if (uVar13 != 1) goto LAB_00555ee4;
        uVar17 = uVar16;
        if (6 < uVar16) {
          uVar17 = 7;
        }
        if (uVar16 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (ulong)*pbVar2;
          if (uVar16 != 1) {
            uVar4 = CONCAT11(pbVar2[1],*pbVar2);
            uVar13 = (ulong)uVar4;
            if (uVar16 != 2) {
              uVar5 = CONCAT12(pbVar2[2],uVar4);
              uVar13 = (ulong)uVar5;
              if (uVar16 != 3) {
                uVar15 = CONCAT13(pbVar2[3],uVar5);
                uVar13 = (ulong)uVar15;
                if (uVar16 != 4) {
                  uVar6 = CONCAT14(pbVar2[4],uVar15);
                  uVar13 = (ulong)uVar6;
                  if (uVar16 != 5) {
                    uVar7 = CONCAT15(pbVar2[5],uVar6);
                    uVar13 = (ulong)uVar7;
                    if (uVar16 != 6) {
                      uVar8 = CONCAT16(pbVar2[6],uVar7);
                      uVar13 = (ulong)uVar8;
                      if (uVar16 != 7) {
                        uVar13 = CONCAT17(pbVar2[7],uVar8);
                        uVar17 = 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *param_2 = (long)(pbVar2 + uVar17);
      param_2[1] = uVar16 - uVar17;
      param_1[2] = uVar13;
      return lVar9 != 0;
    }
    if (uVar13 == 5) {
      uVar12 = uVar16;
      if (2 < uVar16) {
        uVar12 = 3;
      }
      if (uVar16 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)*pbVar2;
        if (uVar16 != 1) {
          uVar4 = CONCAT11(pbVar2[1],*pbVar2);
          uVar15 = (uint)uVar4;
          if (uVar16 != 2) {
            uVar5 = CONCAT12(pbVar2[2],uVar4);
            uVar15 = (uint)uVar5;
            if (uVar16 != 3) {
              uVar15 = CONCAT13(pbVar2[3],uVar5);
              uVar12 = 4;
            }
          }
        }
      }
      *param_2 = (long)(pbVar2 + uVar12);
      param_2[1] = uVar16 - uVar12;
      param_1[2] = (ulong)uVar15;
      return lVar9 != 0;
    }
    if (uVar13 == 2) {
      uVar12 = 0;
      uVar14 = 0;
      uVar13 = 0;
      do {
        uVar17 = uVar16;
        if (uVar16 == uVar13) break;
        pbVar1 = pbVar2 + uVar13;
        uVar14 = ((ulong)*pbVar1 & 0x7f) << (uVar12 & 0x3f) | uVar14;
        uVar17 = uVar13 + 1;
        uVar12 = uVar12 + 7;
        uVar13 = uVar17;
      } while ((char)*pbVar1 < '\0');
      uVar16 = uVar16 - uVar17;
      *param_2 = (long)(pbVar2 + uVar17);
      param_2[1] = uVar16;
      if (uVar14 <= uVar16) {
        uVar16 = uVar14;
      }
      param_1[2] = uVar14;
      param_1[3] = (ulong)(pbVar2 + uVar17);
      param_1[4] = uVar16;
      *param_2 = *param_2 + uVar16;
      param_2[1] = param_2[1] - uVar16;
    }
  }
LAB_00555ee4:
  return lVar9 != 0;
}



/* Entry: 00555f3c; end: 0055602f;  */

void FUN_00555f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  ___error();
  uVar1 = *(undefined4 *)puVar2;
  if ((bRam0000000000b69458 & 1) == 0) {
    puVar3 = (undefined8 *)0xb69458;
    ___cxa_guard_acquire();
    puVar2 = puVar3;
    if ((int)puVar3 != 0) {
      FUN_00556030();
      puVar2 = (undefined8 *)0xb69458;
      puRam0000000000b69450 = puVar3;
      ___cxa_guard_release();
    }
  }
  if ((uint)param_2 < 0x87) {
    puVar3 = puRam0000000000b69450 + ((ulong)param_2 & 0xffffffff) * 3;
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      FUN_002971d4(param_1,*puVar3,puVar3[1]);
      param_2 = param_1;
    }
    else {
      uVar5 = puVar3[1];
      uVar4 = *puVar3;
      param_1[2] = puVar3[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
      param_2 = puVar2;
    }
  }
  else {
    FUN_005560bc(param_1);
  }
  ___error();
  *(undefined4 *)param_2 = uVar1;
  return;
}



/* Entry: 00556030; end: 005560bb;  */

dword * FUN_00556030(void)

{
  dword *pdVar1;
  long lVar2;
  dword *pdVar3;
  undefined8 uStack_48;
  qword qStack_40;
  qword qStack_38;
  
  pdVar1 = (dword *)(section_00000c90.segname + 8);
  __Znwm();
  _bzero();
  lVar2 = 0;
  pdVar3 = pdVar1;
  do {
    FUN_005560bc(&uStack_48,lVar2);
    if (*(char *)((long)pdVar3 + 0x17) < '\0') {
      __ZdlPv(*(undefined8 *)pdVar3);
    }
    *(qword *)(pdVar3 + 2) = qStack_40;
    *(undefined8 *)pdVar3 = uStack_48;
    *(qword *)(pdVar3 + 4) = qStack_38;
    lVar2 = lVar2 + 1;
    pdVar3 = pdVar3 + 6;
  } while (lVar2 != 0x87);
  return pdVar1;
}



/* Entry: 005560bc; end: 005561c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005560bc(ulong *param_1,int param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  dword *pdVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined **ppuVar13;
  segment_command *psVar14;
  dword *pdVar15;
  dword *pdVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puStack_b28;
  long alStack_b20 [64];
  long alStack_920 [128];
  long alStack_520 [128];
  long lStack_120;
  char acStack_9c [100];
  long lStack_38;
  undefined8 *puVar21;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar15 = (dword *)acStack_9c;
  pdVar16 = (dword *)0x0;
  _strerror_r();
  if (param_2 == 0) {
    if (acStack_9c[0] == '\0') goto LAB_005560fc;
  }
  else {
    acStack_9c[0] = '\0';
LAB_005560fc:
    pdVar16 = (dword *)0x0;
    pdVar15 = &segment_command_00000020.flags;
    _snprintf(acStack_9c);
  }
  pdVar6 = (dword *)acStack_9c;
  _strlen();
  if ((dword *)0x7ffffffffffffff6 < pdVar6) {
    FUN_0040d740();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x5561c0);
    (*pcVar4)();
  }
  if ((dword *)((long)&MACH_HEADER.sizeofcmds + 2) < pdVar6) {
    pdVar15 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pdVar6 | 7) != (dword *)0x17) {
      pdVar15 = (dword *)((ulong)pdVar6 | 7);
    }
    puVar7 = (ulong *)((long)pdVar15 + 1);
    __Znwm();
    param_1[1] = (ulong)pdVar6;
    param_1[2] = (ulong)((long)pdVar15 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar7;
LAB_00556178:
    pdVar15 = (dword *)acStack_9c;
    puVar8 = puVar7;
    pdVar16 = pdVar6;
    _memcpy();
    iVar5 = (int)puVar8;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pdVar6;
    puVar7 = param_1;
    if (pdVar6 != (dword *)0x0) goto LAB_00556178;
    iVar5 = 0;
  }
  *(undefined1 *)((long)puVar7 + (long)pdVar6) = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_120 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar12 = alStack_b20;
  if ((int)pdVar15 < 0x41) {
    puStack_b28 = (undefined8 *)0x0;
    pcVar17 = (char *)(ulong)(iVar5 + 1);
    plVar10 = plVar12;
    pcVar4 = param_5;
    FUN_00568b10(plVar12,pdVar15);
    iVar5 = (int)plVar10;
  }
  else {
    puVar20 = (undefined8 *)(((ulong)pdVar15 & 0xffffffff) << 3);
    plVar9 = (long *)0x0;
    pcVar4 = (code *)0x0;
    _mmap(0,puVar20,3,0x1002,0xffffffff,0);
    plVar10 = (long *)0x0;
    if (plVar9 != (long *)0xffffffffffffffff) {
      plVar10 = plVar9;
    }
    puStack_b28 = (undefined8 *)0x0;
    if (plVar10 != (long *)0x0) {
      puStack_b28 = puVar20;
    }
    iVar3 = 0x40;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10;
      iVar3 = (int)pdVar15;
    }
    pcVar17 = (char *)(ulong)(iVar5 + 1);
    plVar10 = plVar12;
    FUN_00568b10(plVar12,iVar3);
    iVar5 = (int)plVar10;
  }
  if (0 < iVar5) {
    uVar18 = (ulong)plVar10 & 0xffffffff;
    if (((ulong)pdVar16 & 1) == 0) {
      do {
        pcVar17 = "%s@ %*p\n";
        _snprintf(alStack_520,100);
        plVar10 = alStack_520;
        (*param_5)(plVar10,param_6);
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    else {
      plVar9 = plVar12;
      do {
        lVar22 = *plVar9;
        uVar11 = lVar22 - 1;
        FUN_00568c54(uVar11,alStack_520,0x400);
        if ((uVar11 & 1) == 0) {
          FUN_00568c54(lVar22,alStack_520,0x400);
        }
        pcVar17 = "%s@ %*p  %s\n";
        _snprintf(alStack_920,0x400);
        plVar10 = alStack_920;
        (*param_5)(plVar10,param_6);
        uVar18 = uVar18 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar18 != 0);
    }
  }
  if (puStack_b28 != (undefined8 *)0x0) {
    _munmap();
    plVar10 = plVar12;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  if ((bRam0000000000b69468 & 1) == 0) {
    iVar5 = 0xb69468;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      psVar14 = &segment_command_00000020;
      __Znwm();
      FUN_00556b3c();
      psRam0000000000b69460 = psVar14;
      ___cxa_guard_release(0xb69468);
    }
  }
  psVar14 = psRam0000000000b69460;
  if (pcVar17 != (char *)0x0) {
    lVar22 = (long)pcVar17 << 3;
    do {
      (**(code **)(*(long *)*puStack_b28 + 0x10))((long *)*puStack_b28,plVar10);
      lVar22 = lVar22 + -8;
      puStack_b28 = puStack_b28 + 1;
    } while (lVar22 != 0);
  }
  if (((ulong)pcVar4 & 1) != 0) {
    return;
  }
  ppuVar13 = &PTR___tlv_bootstrap_00b2c4f8;
  (*(code *)PTR___tlv_bootstrap_00b2c4f8)();
  if (*(char *)ppuVar13 == '\x01') {
    if (plVar10[9] + -1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fwrite_0099a2a0)
              (plVar10[8],plVar10[9] + -1,1,*(undefined8 *)PTR____stderrp_00999f90);
    return;
  }
  uVar18._0_4_ = psVar14->cmd;
  uVar18._4_4_ = psVar14->cmdsize;
  if ((uVar18 & 0x1c) == 0) {
    do {
      uVar11._0_4_ = psVar14->cmd;
      uVar11._4_4_ = psVar14->cmdsize;
      if (uVar11 != uVar18) {
        ClearExclusiveLocal();
        goto LAB_0055652c;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar14,0x10);
      if (bVar2) {
        *(ulong *)psVar14 = (uVar18 | 1) + 0x100;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined1 *)ppuVar13 = 1;
    puVar23 = *(undefined8 **)(psVar14->segname + 8);
    puVar20 = *(undefined8 **)psVar14->segname;
    if (puVar23 == *(undefined8 **)psVar14->segname) goto LAB_005564c4;
  }
  else {
LAB_0055652c:
    FUN_00776798(psVar14,&UNK_00811370,0,0);
    *(undefined1 *)ppuVar13 = 1;
    puVar20 = *(undefined8 **)psVar14->segname;
    puVar23 = *(undefined8 **)(psVar14->segname + 8);
    if (puVar23 == puVar20) goto LAB_005564c4;
  }
  do {
    puVar21 = puVar20 + 1;
    (**(code **)(*(long *)*puVar20 + 0x10))((long *)*puVar20,plVar10);
    puVar20 = puVar21;
  } while (puVar21 != puVar23);
LAB_005564c4:
  *(undefined1 *)ppuVar13 = 0;
  uVar18 = *(ulong *)psVar14;
  if ((uVar18 & 0x15) == 1) {
    lVar22 = -0x101;
    if (0x1ff < uVar18) {
      lVar22 = -0x100;
    }
    do {
      uVar19._0_4_ = psVar14->cmd;
      uVar19._4_4_ = psVar14->cmdsize;
      if (uVar19 != uVar18) {
        ClearExclusiveLocal();
        goto LAB_00556508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar14,0x10);
      if (bVar2) {
        *(ulong *)psVar14 = lVar22 + uVar18;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
LAB_00556508:
    FUN_007767f4(psVar14,0);
  }
  return;
}



/* Entry: 005561c8; end: 005563b3;  */

void FUN_005561c8(int param_1,ulong param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined **ppuVar8;
  segment_command *psVar9;
  char *pcVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puStack_a78;
  long alStack_a70 [64];
  long alStack_870 [128];
  long alStack_470 [128];
  long lStack_70;
  undefined8 *puVar15;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = alStack_a70;
  if ((int)param_2 < 0x41) {
    puStack_a78 = (undefined8 *)0x0;
    pcVar10 = (char *)(ulong)(param_1 + 1);
    plVar5 = plVar7;
    pcVar11 = param_4;
    FUN_00568b10(plVar7,param_2);
    iVar3 = (int)plVar5;
  }
  else {
    puVar14 = (undefined8 *)((param_2 & 0xffffffff) << 3);
    plVar4 = (long *)0x0;
    pcVar11 = (code *)0x0;
    _mmap(0,puVar14,3,0x1002,0xffffffff,0);
    plVar5 = (long *)0x0;
    if (plVar4 != (long *)0xffffffffffffffff) {
      plVar5 = plVar4;
    }
    puStack_a78 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      puStack_a78 = puVar14;
    }
    iVar3 = 0x40;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5;
      iVar3 = (int)param_2;
    }
    pcVar10 = (char *)(ulong)(param_1 + 1);
    plVar5 = plVar7;
    FUN_00568b10(plVar7,iVar3);
    iVar3 = (int)plVar5;
  }
  if (0 < iVar3) {
    uVar12 = (ulong)plVar5 & 0xffffffff;
    if ((param_3 & 1) == 0) {
      do {
        pcVar10 = "%s@ %*p\n";
        _snprintf(alStack_470,100);
        plVar5 = alStack_470;
        (*param_4)(plVar5,param_5);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    else {
      plVar4 = plVar7;
      do {
        lVar16 = *plVar4;
        uVar6 = lVar16 - 1;
        FUN_00568c54(uVar6,alStack_470,0x400);
        if ((uVar6 & 1) == 0) {
          FUN_00568c54(lVar16,alStack_470,0x400);
        }
        pcVar10 = "%s@ %*p  %s\n";
        _snprintf(alStack_870,0x400);
        plVar5 = alStack_870;
        (*param_4)(plVar5,param_5);
        uVar12 = uVar12 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar12 != 0);
    }
  }
  if (puStack_a78 != (undefined8 *)0x0) {
    _munmap();
    plVar5 = plVar7;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((bRam0000000000b69468 & 1) == 0) {
    iVar3 = 0xb69468;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      psVar9 = &segment_command_00000020;
      __Znwm();
      FUN_00556b3c();
      psRam0000000000b69460 = psVar9;
      ___cxa_guard_release(0xb69468);
    }
  }
  psVar9 = psRam0000000000b69460;
  if (pcVar10 != (char *)0x0) {
    lVar16 = (long)pcVar10 << 3;
    do {
      (**(code **)(*(long *)*puStack_a78 + 0x10))((long *)*puStack_a78,plVar5);
      lVar16 = lVar16 + -8;
      puStack_a78 = puStack_a78 + 1;
    } while (lVar16 != 0);
  }
  if (((ulong)pcVar11 & 1) != 0) {
    return;
  }
  ppuVar8 = &PTR___tlv_bootstrap_00b2c4f8;
  (*(code *)PTR___tlv_bootstrap_00b2c4f8)();
  if (*(char *)ppuVar8 == '\x01') {
    if (plVar5[9] + -1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fwrite_0099a2a0)
              (plVar5[8],plVar5[9] + -1,1,*(undefined8 *)PTR____stderrp_00999f90);
    return;
  }
  uVar12._0_4_ = psVar9->cmd;
  uVar12._4_4_ = psVar9->cmdsize;
  if ((uVar12 & 0x1c) == 0) {
    do {
      uVar6._0_4_ = psVar9->cmd;
      uVar6._4_4_ = psVar9->cmdsize;
      if (uVar6 != uVar12) {
        ClearExclusiveLocal();
        goto LAB_0055652c;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar2) {
        *(ulong *)psVar9 = (uVar12 | 1) + 0x100;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined1 *)ppuVar8 = 1;
    puVar17 = *(undefined8 **)(psVar9->segname + 8);
    puVar14 = *(undefined8 **)psVar9->segname;
    if (puVar17 == *(undefined8 **)psVar9->segname) goto LAB_005564c4;
  }
  else {
LAB_0055652c:
    FUN_00776798(psVar9,&UNK_00811370,0,0);
    *(undefined1 *)ppuVar8 = 1;
    puVar14 = *(undefined8 **)psVar9->segname;
    puVar17 = *(undefined8 **)(psVar9->segname + 8);
    if (puVar17 == puVar14) goto LAB_005564c4;
  }
  do {
    puVar15 = puVar14 + 1;
    (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,plVar5);
    puVar14 = puVar15;
  } while (puVar15 != puVar17);
LAB_005564c4:
  *(undefined1 *)ppuVar8 = 0;
  uVar12 = *(ulong *)psVar9;
  if ((uVar12 & 0x15) == 1) {
    lVar16 = -0x101;
    if (0x1ff < uVar12) {
      lVar16 = -0x100;
    }
    do {
      uVar13._0_4_ = psVar9->cmd;
      uVar13._4_4_ = psVar9->cmdsize;
      if (uVar13 != uVar12) {
        ClearExclusiveLocal();
        goto LAB_00556508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar9,0x10);
      if (bVar2) {
        *(ulong *)psVar9 = lVar16 + uVar12;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
LAB_00556508:
    FUN_007767f4(psVar9,0);
  }
  return;
}



/* Entry: 005563b4; end: 005565d7;  */

void FUN_005563b4(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined **ppuVar5;
  segment_command *psVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  
  if ((bRam0000000000b69468 & 1) == 0) {
    iVar4 = 0xb69468;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      psVar6 = &segment_command_00000020;
      __Znwm();
      FUN_00556b3c();
      psRam0000000000b69460 = psVar6;
      ___cxa_guard_release(0xb69468);
    }
  }
  psVar6 = psRam0000000000b69460;
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_1);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  if ((param_4 & 1) != 0) {
    return;
  }
  ppuVar5 = &PTR___tlv_bootstrap_00b2c4f8;
  (*(code *)PTR___tlv_bootstrap_00b2c4f8)();
  if (*(char *)ppuVar5 == '\x01') {
    lVar3 = *(long *)(param_1 + 0x48) + -1;
    if (lVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fwrite_0099a2a0)
              (*(undefined8 *)(param_1 + 0x40),lVar3,1,*(undefined8 *)PTR____stderrp_00999f90);
    return;
  }
  uVar7._0_4_ = psVar6->cmd;
  uVar7._4_4_ = psVar6->cmdsize;
  if ((uVar7 & 0x1c) == 0) {
    do {
      uVar8._0_4_ = psVar6->cmd;
      uVar8._4_4_ = psVar6->cmdsize;
      if (uVar8 != uVar7) {
        ClearExclusiveLocal();
        goto LAB_0055652c;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar6,0x10);
      if (bVar2) {
        *(ulong *)psVar6 = (uVar7 | 1) + 0x100;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined1 *)ppuVar5 = 1;
    puVar12 = *(undefined8 **)(psVar6->segname + 8);
    puVar10 = *(undefined8 **)psVar6->segname;
    if (puVar12 == *(undefined8 **)psVar6->segname) goto LAB_005564c4;
  }
  else {
LAB_0055652c:
    FUN_00776798(psVar6,&UNK_00811370,0,0);
    *(undefined1 *)ppuVar5 = 1;
    puVar10 = *(undefined8 **)psVar6->segname;
    puVar12 = *(undefined8 **)(psVar6->segname + 8);
    if (puVar12 == puVar10) goto LAB_005564c4;
  }
  do {
    puVar11 = puVar10 + 1;
    (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,param_1);
    puVar10 = puVar11;
  } while (puVar11 != puVar12);
LAB_005564c4:
  *(undefined1 *)ppuVar5 = 0;
  uVar7 = *(ulong *)psVar6;
  if ((uVar7 & 0x15) == 1) {
    lVar3 = -0x101;
    if (0x1ff < uVar7) {
      lVar3 = -0x100;
    }
    do {
      uVar9._0_4_ = psVar6->cmd;
      uVar9._4_4_ = psVar6->cmdsize;
      if (uVar9 != uVar7) {
        ClearExclusiveLocal();
        goto LAB_00556508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(psVar6,0x10);
      if (bVar2) {
        *(ulong *)psVar6 = lVar3 + uVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
LAB_00556508:
    FUN_007767f4(psVar6,0);
  }
  return;
}



/* Entry: 005565d8; end: 00556913;  */

void FUN_005565d8(ulong *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  
  uVar10 = *param_1;
  if ((uVar10 & 0x19) == 0) {
    do {
      if (*param_1 != uVar10) {
        ClearExclusiveLocal();
        goto joined_r0x00556730;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = uVar10 | 8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
joined_r0x00556730:
    iVar9 = iRam0000000000b694c4;
    if (iRam0000000000b694c0 != 0xdd) {
      FUN_00568724(0xb694c0);
      iVar9 = iRam0000000000b694c4;
    }
    do {
      uVar10 = *param_1;
      if ((uVar10 & 0x11) != 0) break;
      if (((uint)uVar10 >> 3 & 1) == 0) {
        while (*param_1 == uVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar5) {
            *param_1 = uVar10 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00556660;
        }
        ClearExclusiveLocal();
      }
      iVar6 = iVar9 + -1;
      bVar5 = 0 < iVar9;
      iVar9 = iVar6;
    } while (iVar6 != 0 && bVar5);
    FUN_00776798(param_1,&UNK_00811348,0,0);
  }
LAB_00556660:
  plVar1 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  plVar11 = plVar1;
  if (plVar1 == plVar2) {
joined_r0x00556764:
    if (plVar11 == plVar2) goto LAB_00556794;
LAB_00556768:
    bVar5 = true;
    uVar10 = *param_1;
    if (((uVar10 ^ 0xc) & 0x18) < ((uVar10 ^ 0xc) & 6)) goto LAB_00556844;
  }
  else {
    uVar10 = (long)plVar2 + (-8 - (long)plVar1);
    uVar13 = (uint)uVar10;
    if ((~uVar13 & 0x18) != 0) {
      uVar14 = (ulong)((uVar13 >> 3) + 1) & 3;
      do {
        if (*plVar11 == param_2) goto joined_r0x00556764;
        plVar11 = plVar11 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (0x17 < uVar10) {
      plVar11 = plVar11 + 2;
      do {
        if (plVar11[-2] == param_2) {
          if (plVar11 + -2 != plVar2) goto LAB_00556768;
          break;
        }
        if (plVar11[-1] == param_2) {
          plVar11 = plVar11 + -1;
          goto joined_r0x00556764;
        }
        if (*plVar11 == param_2) goto joined_r0x00556764;
        if (plVar11[1] == param_2) {
          plVar11 = plVar11 + 1;
          goto joined_r0x00556764;
        }
        plVar16 = plVar11 + 2;
        plVar11 = plVar11 + 4;
      } while (plVar16 != plVar2);
    }
LAB_00556794:
    if (plVar2 < (long *)param_1[3]) {
      plVar16 = plVar2 + 1;
      *plVar2 = param_2;
    }
    else {
      lVar15 = (long)plVar2 - (long)plVar1;
      uVar10 = (lVar15 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) {
        FUN_00556f20();
LAB_005568c8:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x5568cc);
        (*pcVar7)();
      }
      uVar12 = (long)param_1[3] - (long)plVar1;
      uVar14 = (long)uVar12 >> 2;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar14 = 0x1fffffffffffffff;
      }
      if (uVar14 >> 0x3d != 0) {
        FUN_0040cee8();
        goto LAB_005568c8;
      }
      lVar8 = uVar14 << 3;
      __Znwm();
      plVar11 = (long *)(lVar8 + lVar15);
      plVar16 = plVar11 + 1;
      *plVar11 = param_2;
      _memcpy(plVar11 + -(lVar15 >> 3),plVar1,lVar15);
      param_1[1] = (ulong)(plVar11 + -(lVar15 >> 3));
      param_1[2] = (ulong)plVar16;
      param_1[3] = lVar8 + uVar14 * 8;
      if (plVar1 != (long *)0x0) {
        __ZdlPv(plVar1);
      }
    }
    bVar5 = false;
    param_1[2] = (ulong)plVar16;
    uVar10 = *param_1;
    if (((uVar10 ^ 0xc) & 0x18) < ((uVar10 ^ 0xc) & 6)) {
LAB_00556844:
      do {
        if (*param_1 != uVar10) {
          ClearExclusiveLocal();
          goto LAB_00556868;
        }
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = uVar10 & 0xffffffffffffffd7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00556874;
    }
  }
LAB_00556868:
  FUN_007767f4(param_1,0);
LAB_00556874:
  if (!bVar5) {
    return;
  }
  pcStack_58 = "external/abseil-cpp+/absl/log/internal/log_sink_set.cc";
  uStack_60 = 0xd7;
  uStack_5c = 3;
  FUN_00556e58(&uStack_5c,&pcStack_58,&uStack_60);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x5568f8);
  (*pcVar7)();
}



/* Entry: 00556914; end: 00556b3b;  */

void FUN_00556914(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  segment_command *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  
  if ((bRam0000000000b69468 & 1) == 0) {
    iVar5 = 0xb69468;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      psVar7 = &segment_command_00000020;
      __Znwm();
      FUN_00556b3c();
      psRam0000000000b69460 = psVar7;
      ___cxa_guard_release(0xb69468);
    }
  }
  psVar7 = psRam0000000000b69460;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c4f8;
  (*(code *)PTR___tlv_bootstrap_00b2c4f8)();
  uVar8._0_4_ = psVar7->cmd;
  uVar8._4_4_ = psVar7->cmdsize;
  if (*(char *)ppuVar6 == '\x01') {
    if ((uVar8 & 9) != 0) {
      puVar13 = *(undefined8 **)(psVar7->segname + 8);
      for (puVar11 = *(undefined8 **)psVar7->segname; puVar11 != puVar13; puVar11 = puVar11 + 1) {
        (**(code **)(*(long *)*puVar11 + 0x18))();
      }
      return;
    }
    FUN_005685fc();
    FUN_00584c60(3,"mutex.cc",0x9b0,"thread should hold at least a read lock on Mutex %p %s");
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x556af4);
    (*pcVar4)();
  }
  if ((uVar8 & 0x1c) == 0) {
    do {
      uVar9._0_4_ = psVar7->cmd;
      uVar9._4_4_ = psVar7->cmdsize;
      if (uVar9 != uVar8) {
        ClearExclusiveLocal();
        goto LAB_00556a50;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(ulong *)psVar7 = (uVar8 | 1) + 0x100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)ppuVar6 = 1;
    puVar13 = *(undefined8 **)(psVar7->segname + 8);
    puVar11 = *(undefined8 **)psVar7->segname;
    if (*(undefined8 **)psVar7->segname == puVar13) goto LAB_005569e8;
  }
  else {
LAB_00556a50:
    FUN_00776798(psVar7,&UNK_00811370,0,0);
    *(undefined1 *)ppuVar6 = 1;
    puVar11 = *(undefined8 **)psVar7->segname;
    puVar13 = *(undefined8 **)(psVar7->segname + 8);
    if (puVar11 == puVar13) goto LAB_005569e8;
  }
  do {
    puVar12 = puVar11 + 1;
    (**(code **)(*(long *)*puVar11 + 0x18))();
    puVar11 = puVar12;
  } while (puVar12 != puVar13);
LAB_005569e8:
  *(undefined1 *)ppuVar6 = 0;
  uVar8 = *(ulong *)psVar7;
  if ((uVar8 & 0x15) == 1) {
    lVar1 = -0x101;
    if (0x1ff < uVar8) {
      lVar1 = -0x100;
    }
    do {
      uVar10._0_4_ = psVar7->cmd;
      uVar10._4_4_ = psVar7->cmdsize;
      if (uVar10 != uVar8) {
        ClearExclusiveLocal();
        goto LAB_00556a2c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar7,0x10);
      if (bVar3) {
        *(ulong *)psVar7 = lVar1 + uVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
LAB_00556a2c:
    FUN_007767f4(psVar7,0);
  }
  return;
}



/* Entry: 00556b3c; end: 00556bf3;  */

undefined8 * FUN_00556b3c(undefined8 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((bRam0000000000b69478 & 1) == 0) {
    iVar1 = 0xb69478;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pdVar2 = &MACH_HEADER.cpusubtype;
      __Znwm();
      *(undefined ***)pdVar2 = &PTR_FUN_00a01450;
      pdRam0000000000b69470 = pdVar2;
      ___cxa_guard_release(0xb69478);
    }
  }
  FUN_005565d8(param_1,pdRam0000000000b69470);
  return param_1;
}



/* Entry: 00556bf4; end: 00556bfb;  */

void FUN_00556bf4(void)

{
  return;
}



/* Entry: 00556bfc; end: 00556c8b;  */

void FUN_00556bfc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (iRam0000000000b62684 == 0xdd) {
    lVar2 = (long)*(char *)(param_2 + 0x7f);
    if (lVar2 < 0) goto LAB_00556c44;
LAB_00556c2c:
    lVar1 = param_2 + 0x68;
    if ((int)lVar2 != 0) goto LAB_00556c64;
  }
  else {
    FUN_00556c90();
    lVar2 = (long)*(char *)(param_2 + 0x7f);
    if (-1 < lVar2) goto LAB_00556c2c;
LAB_00556c44:
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_2 + 0x68);
      goto LAB_00556c64;
    }
  }
  lVar2 = *(long *)(param_2 + 0x48) + -1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x40);
LAB_00556c64:
                    /* WARNING: Could not recover jumptable at 0x0077a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_0099a2a0)(lVar1,lVar2,1,*(undefined8 *)PTR____stderrp_00999f90);
  return;
}



/* Entry: 00556c8c; end: 00556c8f;  */

void FUN_00556c8c(void)

{
  return;
}



/* Entry: 00556c90; end: 00556e57;  */

/* WARNING: Removing unreachable block (ram,0x00556d4c) */
/* WARNING: Removing unreachable block (ram,0x00556d34) */

void FUN_00556c90(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  char *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_a0 [88];
  long lStack_48;
  
  pcVar6 = acStack_a0;
  pcVar7 = acStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    if (uRam0000000000b62684 != 0) {
      unaff_x20 = (undefined4 *)0x0;
      ClearExclusiveLocal();
      unaff_x21 = 0xc;
      unaff_x22 = 0x65c2937b;
      goto LAB_00556d08;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb62684,0x10);
    if (bVar4) {
      uRam0000000000b62684 = 0x65c2937b;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_00556da0;
LAB_00556d08:
  do {
    uVar5 = uRam0000000000b62684;
    param_2 = (undefined8 *)(ulong)uRam0000000000b62684;
    if (uRam0000000000b62684 == 0) {
      puVar8 = &UNK_008110e4;
      uVar9 = 0x65c2937b;
LAB_00556d64:
      do {
        if (uRam0000000000b62684 != uVar5) {
          ClearExclusiveLocal();
          goto LAB_00556d08;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0xb62684,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          uRam0000000000b62684 = uVar9;
        }
      } while (cVar3 != '\0');
    }
    else {
      if (uRam0000000000b62684 != 0xdd) {
        if (uRam0000000000b62684 == 0x65c2937b) {
          puVar8 = &UNK_008110f0;
          uVar9 = 0x5a308d2;
          goto LAB_00556d64;
        }
        unaff_x20 = (undefined4 *)(ulong)((int)unaff_x20 + 1);
        param_1 = (undefined4 *)0xb62684;
        param_3 = unaff_x20;
        FUN_00576d44();
        goto LAB_00556d08;
      }
      puVar8 = &UNK_008110fc;
    }
  } while (puVar8[8] != '\x01');
  if (uVar5 != 0) goto LAB_00556e20;
LAB_00556da0:
  builtin_strncpy(acStack_a0,
                  "WARNING: All log messages before absl::InitializeLog() is called are written to STDERR\n"
                  ,0x58);
  _strlen();
  param_1 = (undefined4 *)0x0;
  if (pcVar6 != (char *)0x0) {
    param_3 = (undefined4 *)((long)&MACH_HEADER.magic + 1);
    _fwrite();
    param_2 = (undefined8 *)pcVar6;
    param_1 = (undefined4 *)pcVar7;
  }
  do {
    uVar5 = uRam0000000000b62684;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0xb62684,0x10);
    if (bVar4) {
      uRam0000000000b62684 = 0xdd;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (uVar5 == 0x5a308d2) {
    param_1 = (undefined4 *)0xb62684;
    param_2 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    FUN_00576e00();
  }
LAB_00556e20:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar8 = PTR_FUN_00b1e660;
  uStack_b8 = 0xb62684;
  pcStack_a8 = FUN_00556e58;
  uVar1 = *param_1;
  uVar10 = *param_2;
  uVar2 = *param_3;
  pcVar6 = segment_command_00000020.segname;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  puStack_c0 = unaff_x20;
  puStack_b0 = &stack0xfffffffffffffff0;
  __Znwm();
  lStack_d8 = -0x7fffffffffffffd8;
  uStack_e0 = 0x25;
  pcVar6[8] = 'e';
  pcVar6[9] = ' ';
  pcVar6[10] = 'l';
  pcVar6[0xb] = 'o';
  pcVar6[0xc] = 'g';
  pcVar6[0xd] = ' ';
  pcVar6[0xe] = 's';
  pcVar6[0xf] = 'i';
  pcVar6[0] = 'D';
  pcVar6[1] = 'u';
  pcVar6[2] = 'p';
  pcVar6[3] = 'l';
  pcVar6[4] = 'i';
  pcVar6[5] = 'c';
  pcVar6[6] = 'a';
  pcVar6[7] = 't';
  *(undefined8 *)(pcVar6 + 0x18) = 0x7070757320746f6e;
  *(undefined8 *)(pcVar6 + 0x10) = 0x2065726120736b6e;
  pcVar6[0x1d] = 'u';
  pcVar6[0x1e] = 'p';
  pcVar6[0x1f] = 'p';
  pcVar6[0x20] = 'o';
  pcVar6[0x21] = 'r';
  pcVar6[0x22] = 't';
  pcVar6[0x23] = 'e';
  pcVar6[0x24] = 'd';
  pcVar6[0x25] = '\0';
  pcStack_e8 = pcVar6;
  (*(code *)puVar8)(uVar1,uVar10,uVar2,&pcStack_e8);
  if (-1 < lStack_d8) {
    return;
  }
  __ZdlPv(pcStack_e8);
  return;
}



/* Entry: 00556e58; end: 00556f1f;  */

void FUN_00556e58(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = PTR_FUN_00b1e660;
  uVar1 = *param_1;
  uVar5 = *param_2;
  uVar2 = *param_3;
  pcVar4 = segment_command_00000020.segname;
  __Znwm();
  lStack_38 = -0x7fffffffffffffd8;
  uStack_40 = 0x25;
  pcVar4[8] = 'e';
  pcVar4[9] = ' ';
  pcVar4[10] = 'l';
  pcVar4[0xb] = 'o';
  pcVar4[0xc] = 'g';
  pcVar4[0xd] = ' ';
  pcVar4[0xe] = 's';
  pcVar4[0xf] = 'i';
  pcVar4[0] = 'D';
  pcVar4[1] = 'u';
  pcVar4[2] = 'p';
  pcVar4[3] = 'l';
  pcVar4[4] = 'i';
  pcVar4[5] = 'c';
  pcVar4[6] = 'a';
  pcVar4[7] = 't';
  *(undefined8 *)(pcVar4 + 0x18) = 0x7070757320746f6e;
  *(undefined8 *)(pcVar4 + 0x10) = 0x2065726120736b6e;
  pcVar4[0x1d] = 'u';
  pcVar4[0x1e] = 'p';
  pcVar4[0x1f] = 'p';
  pcVar4[0x20] = 'o';
  pcVar4[0x21] = 'r';
  pcVar4[0x22] = 't';
  pcVar4[0x23] = 'e';
  pcVar4[0x24] = 'd';
  pcVar4[0x25] = '\0';
  pcStack_48 = pcVar4;
  (*(code *)puVar3)(uVar1,uVar5,uVar2,&pcStack_48);
  if (-1 < lStack_38) {
    return;
  }
  __ZdlPv(pcStack_48);
  return;
}



/* Entry: 00556f20; end: 00556f33;  */

char * FUN_00556f20(undefined8 param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong *puVar5;
  ulong uVar6;
  char *pcVar7;
  
  pcVar7 = "vector";
  FUN_0040d774("vector");
  for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
    puVar5 = param_2;
    FUN_005570b4(param_2,0x400,&PTR_LOOP_00a01490,&UNK_00811108);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (char *)((long)puVar5 + (long)pcVar7);
    pcVar7 = (char *)(SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
                     ((long)puVar5 + (long)pcVar7) * -0x622015f714c7d297);
    param_2 = param_2 + 0x80;
  }
  if (param_3 < 0x11) {
    if (8 < param_3) {
      pcVar7 = pcVar7 + -0x622015f714c7d297;
      uVar6 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ (ulong)pcVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = pcVar7 + (*param_2 >> 0x35 | *param_2 << 0xb);
      return (char *)(SUB168(auVar3 * auVar4,8) ^
                     uVar6 * (long)(pcVar7 + (*param_2 >> 0x35 | *param_2 << 0xb)));
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return pcVar7;
      }
      param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                 (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) | (uint)(byte)*param_2
                                | (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                  (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                          (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
    }
  }
  else {
    FUN_005570b4(param_2,param_3,&PTR_LOOP_00a01490,&UNK_00811108);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (char *)((long)param_2 + (long)pcVar7);
  return (char *)(SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 ((long)param_2 + (long)pcVar7) * -0x622015f714c7d297);
}



/* Entry: 00556f34; end: 0055709f;  */

ulong FUN_00556f34(ulong param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong uVar7;
  
  for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
    puVar6 = param_2;
    FUN_005570b4(param_2,0x400,&PTR_LOOP_00a01490,&UNK_00811108);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)puVar6 + param_1;
    param_1 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)puVar6 + param_1) * -0x622015f714c7d297;
    param_2 = param_2 + 0x80;
  }
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar1 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar7 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar1;
      return SUB168(auVar4 * auVar5,8) ^ uVar7 * uVar1;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                 (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) | (uint)(byte)*param_2
                                | (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                  (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                          (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
    }
  }
  else {
    FUN_005570b4(param_2,param_3,&PTR_LOOP_00a01490,&UNK_00811108);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)param_2 + param_1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)param_2 + param_1) * -0x622015f714c7d297;
}



/* Entry: 005570a0; end: 005570b3;  */

ulong FUN_005570a0(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  Hint_Prefetch(param_1,0,0,0);
  uVar22 = 0x243f6a8885031c43;
  uVar23 = param_2;
  uVar25 = uVar22;
  if (0x40 < param_2) {
    do {
      Hint_Prefetch(param_1 + 8,0,0,0);
      uVar24 = *param_1;
      puVar4 = param_1 + 1;
      puVar1 = param_1 + 2;
      puVar5 = param_1 + 3;
      puVar2 = param_1 + 4;
      puVar6 = param_1 + 5;
      puVar3 = param_1 + 6;
      puVar7 = param_1 + 7;
      param_1 = param_1 + 8;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar4 ^ uVar25;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24 ^ 0x13198a2e03707344;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puVar5 ^ uVar25;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *puVar1 ^ 0xa4093822299f31d0;
      uVar25 = (*puVar4 ^ uVar25) * (uVar24 ^ 0x13198a2e03707344) ^
               (*puVar5 ^ uVar25) * (*puVar1 ^ 0xa4093822299f31d0) ^
               SUB168(auVar9 * auVar16,8) ^ SUB168(auVar8 * auVar15,8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar6 ^ uVar22;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *puVar2 ^ 0x82efa98ec4e6c89;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *puVar7 ^ uVar22;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar3 ^ 0x452821e638d01377;
      uVar22 = (*puVar6 ^ uVar22) * (*puVar2 ^ 0x82efa98ec4e6c89) ^
               (*puVar7 ^ uVar22) * (*puVar3 ^ 0x452821e638d01377) ^
               SUB168(auVar11 * auVar18,8) ^ SUB168(auVar10 * auVar17,8);
      uVar23 = uVar23 - 0x40;
    } while (0x40 < uVar23);
    uVar22 = uVar22 ^ uVar25;
  }
  for (; 0x10 < uVar23; uVar23 = uVar23 - 0x10) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_1[1] ^ uVar22;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *param_1 ^ 0x13198a2e03707344;
    uVar22 = SUB168(auVar12 * auVar19,8) ^ (param_1[1] ^ uVar22) * (*param_1 ^ 0x13198a2e03707344);
    param_1 = param_1 + 2;
  }
  if (uVar23 < 9) {
    if (uVar23 < 4) {
      if (uVar23 == 0) {
        uVar24 = 0;
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        uVar24 = (ulong)(byte)*param_1 << 0x10 |
                 (ulong)*(byte *)((long)param_1 + (uVar23 >> 1)) << 8 |
                 (ulong)*(byte *)((long)param_1 + (uVar23 - 1));
      }
    }
    else {
      uVar24 = (ulong)(uint)*param_1;
      uVar25 = (ulong)*(uint *)((long)param_1 + (uVar23 - 4));
    }
  }
  else {
    uVar24 = *param_1;
    uVar25 = *(ulong *)((long)param_1 + (uVar23 - 8));
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar24 ^ 0x13198a2e03707344;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar25 ^ uVar22;
  uVar22 = SUB168(auVar13 * auVar20,8) ^ (uVar24 ^ 0x13198a2e03707344) * (uVar25 ^ uVar22);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar22;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2 ^ 0x13198a2e03707344;
  return SUB168(auVar14 * auVar21,8) ^ uVar22 * (param_2 ^ 0x13198a2e03707344);
}



/* Entry: 005570b4; end: 0055722f;  */

ulong FUN_005570b4(ulong *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  Hint_Prefetch(param_1,0,0,0);
  param_3 = *param_4 ^ param_3;
  uVar22 = param_2;
  if (0x40 < param_2) {
    uVar24 = param_3;
    do {
      Hint_Prefetch(param_1 + 8,0,0,0);
      uVar23 = *param_1;
      puVar3 = param_1 + 1;
      puVar21 = param_1 + 2;
      puVar4 = param_1 + 3;
      puVar1 = param_1 + 4;
      puVar5 = param_1 + 5;
      puVar2 = param_1 + 6;
      puVar6 = param_1 + 7;
      param_1 = param_1 + 8;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *puVar3 ^ uVar24;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar23 ^ param_4[1];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puVar4 ^ uVar24;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *puVar21 ^ param_4[2];
      uVar24 = (*puVar3 ^ uVar24) * (uVar23 ^ param_4[1]) ^
               (*puVar4 ^ uVar24) * (*puVar21 ^ param_4[2]) ^
               SUB168(auVar8 * auVar15,8) ^ SUB168(auVar7 * auVar14,8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puVar5 ^ param_3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *puVar1 ^ param_4[3];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar6 ^ param_3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *puVar2 ^ param_4[4];
      param_3 = (*puVar5 ^ param_3) * (*puVar1 ^ param_4[3]) ^
                (*puVar6 ^ param_3) * (*puVar2 ^ param_4[4]) ^
                SUB168(auVar10 * auVar17,8) ^ SUB168(auVar9 * auVar16,8);
      uVar22 = uVar22 - 0x40;
    } while (0x40 < uVar22);
    param_3 = param_3 ^ uVar24;
  }
  if (0x10 < uVar22) {
    puVar21 = param_1;
    do {
      param_1 = puVar21 + 2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = puVar21[1] ^ param_3;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar21 ^ param_4[1];
      param_3 = SUB168(auVar11 * auVar18,8) ^ (puVar21[1] ^ param_3) * (*puVar21 ^ param_4[1]);
      uVar22 = uVar22 - 0x10;
      puVar21 = param_1;
    } while (0x10 < uVar22);
  }
  if (uVar22 < 9) {
    if (uVar22 < 4) {
      if (uVar22 == 0) {
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        uVar23 = (ulong)(byte)*param_1 << 0x10 |
                 (ulong)*(byte *)((long)param_1 + (uVar22 >> 1)) << 8 |
                 (ulong)*(byte *)((long)param_1 + (uVar22 - 1));
      }
    }
    else {
      uVar23 = (ulong)(uint)*param_1;
      uVar24 = (ulong)*(uint *)((long)param_1 + (uVar22 - 4));
    }
  }
  else {
    uVar23 = *param_1;
    uVar24 = *(ulong *)((long)param_1 + (uVar22 - 8));
  }
  uVar23 = param_4[1] ^ uVar23;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar23;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar24 ^ param_3;
  param_2 = param_4[1] ^ param_2;
  uVar22 = SUB168(auVar12 * auVar19,8) ^ uVar23 * (uVar24 ^ param_3);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar22;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2;
  return SUB168(auVar13 * auVar20,8) ^ uVar22 * param_2;
}



/* Entry: 00557230; end: 00557233;  */

void FUN_00557230(void)

{
  return;
}



/* Entry: 00557234; end: 00557457;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00557234(char *param_1,qword *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  qword qVar4;
  undefined8 uVar5;
  qword *extraout_x8;
  long lVar6;
  long lVar7;
  qword *extraout_x9;
  qword *pqVar8;
  qword qVar9;
  qword qVar10;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar3 = *(byte *)((long)param_2 + 0x17);
  qVar4 = (qword)(char)bVar3;
  if ((long)qVar4 < 0) {
    pqVar8 = param_2 + 1;
    qVar4 = *pqVar8;
    if (0xf < qVar4) {
      if ((0x1ff < qVar4) && ((param_2[2] & 0x7fffffffffffffff) - 1 >> 1 <= qVar4))
      goto LAB_005573d8;
      param_2 = (qword *)*param_2;
      qVar9 = qVar4;
      goto LAB_00557348;
    }
    param_2 = (qword *)*param_2;
    *param_1 = (char)((int)qVar4 << 1);
  }
  else {
    qVar9 = qVar4;
    if (0xf < bVar3) {
LAB_00557348:
      FUN_00557a00();
      goto LAB_0055735c;
    }
    *param_1 = bVar3 << 1;
  }
  if (qVar4 < 8) {
    if (qVar4 < 4) {
      if (qVar4 != 0) {
        param_1[1] = (char)*param_2;
        param_1[(qVar4 >> 1) + 1] = *(char *)((long)param_2 + (qVar4 >> 1));
        param_1[qVar4] = *(char *)((long)param_2 + (qVar4 - 1));
      }
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      pcVar1 = param_1 + qVar4 + 1;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
    }
    else {
      qVar9 = *param_2;
      uVar2 = *(undefined4 *)((long)param_2 + (qVar4 - 4));
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *(int *)(param_1 + 1) = (int)qVar9;
      *(undefined4 *)(param_1 + (qVar4 - 3)) = uVar2;
      lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
    }
  }
  else {
    qVar9 = *param_2;
    uVar5 = *(undefined8 *)((long)param_2 + (qVar4 - 8));
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *(qword *)(param_1 + 1) = qVar9;
    *(undefined8 *)(param_1 + (qVar4 - 7)) = uVar5;
    lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  }
  while (lVar7 != lVar6) {
    ___stack_chk_fail();
    param_2 = extraout_x8;
    pqVar8 = extraout_x9;
LAB_005573d8:
    qVar10 = *param_2;
    uStack_48 = (undefined7)*pqVar8;
    uVar5 = *(undefined8 *)((long)pqVar8 + 7);
    uStack_41 = (undefined1)uVar5;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_2 = &segment_command_00000020.vmaddr;
    qVar9 = qVar4;
    __Znwm();
    *(undefined4 *)(param_2 + 1) = 4;
    param_2[4] = qVar10;
    param_2[5] = CONCAT17(uStack_41,uStack_48);
    *(undefined8 *)((long)param_2 + 0x2f) = uVar5;
    *(byte *)((long)param_2 + 0x37) = bVar3;
    *param_2 = qVar4;
    *(char *)((long)param_2 + 0xc) = '\x05';
    param_2[2] = qVar10;
    param_2[3] = (qword)FUN_0055a600;
LAB_0055735c:
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(qword **)(param_1 + 8) = param_2;
    qVar4 = qVar9;
    lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  }
  return;
}



/* Entry: 00557458; end: 00557467;  */

void FUN_00557458(byte *param_1,qword *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  qword *pqVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  qword *pqVar10;
  qword **ppqStack_50;
  qword *pqStack_48;
  
  if ((*param_1 & 1) != 0) {
    lVar8 = *(long *)param_1;
    lVar3 = lVar8 + -1;
    if (lVar3 != 0) {
      FUN_0055b3ec(lVar3,param_3);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    FUN_005576a4();
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x0055db74();
    }
    else {
      FUN_0055bb34();
    }
    *(undefined8 *)(param_1 + 8) = uVar7;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar8 + 0x3f) = uVar7;
      FUN_0055b518(lVar3);
    }
    return;
  }
  bVar4 = *param_1;
  pqVar6 = param_2;
  if ((long)(char)bVar4 != 0) {
    uVar9 = (ulong)(long)(char)bVar4 >> 1;
    uVar1 = uVar9;
    if (0xff2 < uVar9) {
      uVar1 = 0xff3;
    }
    uVar2 = 0x20;
    if (0x27 < bVar4) {
      uVar2 = uVar1 + 0xd;
    }
    uVar1 = 0xfffffffffffffff8;
    if (0x200 < uVar2) {
      uVar1 = 0xffffffffffffffc0;
    }
    lVar3 = 8;
    if (0x200 < uVar2) {
      lVar3 = 0x40;
    }
    pqVar10 = (qword *)((uVar2 + lVar3) - 1 & uVar1);
    pqVar6 = pqVar10;
    __Znwm();
    *(undefined4 *)(pqVar6 + 1) = 4;
    bVar5 = section_000001f8.sectname + 8 < pqVar10;
    lVar3 = 3;
    if (bVar5) {
      lVar3 = 6;
    }
    lVar8 = 2;
    if (bVar5) {
      lVar8 = 0x3a;
    }
    uVar1 = ((ulong)pqVar10 >> lVar3) + lVar8;
    *(char *)((long)pqVar6 + 0xc) = (char)uVar1;
    *pqVar6 = uVar9;
    *(undefined8 *)((long)pqVar6 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)pqVar6 + 0x14) = *(undefined8 *)(param_1 + 8);
    if (uVar1 < 5) {
      if (uVar1 != 3) {
        ppqStack_50 = &pqStack_48;
        pqStack_48 = (qword *)0x0;
        func_0x0055e3b0(&ppqStack_50,pqVar6,0,uVar9);
        pqVar6 = pqStack_48;
      }
    }
    else {
      pqVar10 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar10 + 1) = 4;
      *pqVar10 = uVar9;
      *(undefined4 *)((long)pqVar10 + 0xc) = 0x1000003;
      pqVar10[2] = (qword)pqVar6;
      pqVar6 = pqVar10;
    }
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x0055db74(pqVar6,param_2);
    }
    else {
      FUN_0055bb34(pqVar6,param_2);
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(qword **)(param_1 + 8) = pqVar6;
  return;
}



/* Entry: 00557468; end: 005575e3;  */

void FUN_00557468(byte *param_1,qword *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  qword *pqVar7;
  ulong uVar8;
  qword *pqVar9;
  qword **ppqStack_50;
  qword *pqStack_48;
  
  bVar5 = *param_1;
  pqVar7 = param_2;
  if ((long)(char)bVar5 != 0) {
    uVar8 = (ulong)(long)(char)bVar5 >> 1;
    uVar1 = uVar8;
    if (0xff2 < uVar8) {
      uVar1 = 0xff3;
    }
    uVar2 = 0x20;
    if (0x27 < bVar5) {
      uVar2 = uVar1 + 0xd;
    }
    uVar1 = 0xfffffffffffffff8;
    if (0x200 < uVar2) {
      uVar1 = 0xffffffffffffffc0;
    }
    lVar3 = 8;
    if (0x200 < uVar2) {
      lVar3 = 0x40;
    }
    pqVar9 = (qword *)((uVar2 + lVar3) - 1 & uVar1);
    pqVar7 = pqVar9;
    __Znwm();
    *(undefined4 *)(pqVar7 + 1) = 4;
    bVar6 = section_000001f8.sectname + 8 < pqVar9;
    lVar3 = 3;
    if (bVar6) {
      lVar3 = 6;
    }
    lVar4 = 2;
    if (bVar6) {
      lVar4 = 0x3a;
    }
    uVar1 = ((ulong)pqVar9 >> lVar3) + lVar4;
    *(char *)((long)pqVar7 + 0xc) = (char)uVar1;
    *pqVar7 = uVar8;
    *(undefined8 *)((long)pqVar7 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)pqVar7 + 0x14) = *(undefined8 *)(param_1 + 8);
    if (uVar1 < 5) {
      if (uVar1 != 3) {
        ppqStack_50 = &pqStack_48;
        pqStack_48 = (qword *)0x0;
        func_0x0055e3b0(&ppqStack_50,pqVar7,0,uVar8);
        pqVar7 = pqStack_48;
      }
    }
    else {
      pqVar9 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar9 + 1) = 4;
      *pqVar9 = uVar8;
      *(undefined4 *)((long)pqVar9 + 0xc) = 0x1000003;
      pqVar9[2] = (qword)pqVar7;
      pqVar7 = pqVar9;
    }
    if ((*(byte *)((long)param_2 + 0xc) < 5) &&
       ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
      func_0x0055db74(pqVar7,param_2);
    }
    else {
      FUN_0055bb34(pqVar7,param_2);
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(qword **)(param_1 + 8) = pqVar7;
  return;
}



/* Entry: 005575e4; end: 005576a3;  */

void FUN_005575e4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + -1;
  if (lVar1 != 0) {
    FUN_0055b3ec(lVar1,param_3);
  }
  lVar2 = param_1[1];
  FUN_005576a4();
  if ((*(byte *)(param_2 + 0xc) < 5) &&
     ((*(byte *)(param_2 + 0xc) != 1 || (*(byte *)(*(long *)(param_2 + 0x18) + 0xc) < 5)))) {
    func_0x0055db74();
  }
  else {
    FUN_0055bb34();
  }
  param_1[1] = lVar2;
  if (lVar1 != 0) {
    *(long *)(lVar3 + 0x3f) = lVar2;
    FUN_0055b518(lVar1);
  }
  return;
}



/* Entry: 005576a4; end: 0055784f;  */

void FUN_005576a4(qword *param_1)

{
  qword *pqVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  qword qVar5;
  qword qVar6;
  qword qVar7;
  qword *pqVar8;
  qword *pqVar9;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_1 + 0xc) == '\x03') {
    return;
  }
  if (*(char *)((long)param_1 + 0xc) == '\x02') {
    pqVar8 = (qword *)param_1[2];
    pqVar9 = param_1 + 1;
    if ((*pqVar9 & 0xfffffffd) == 4) {
      FUN_0055ee1c(param_1 + 3);
      __ZdlPv(param_1);
      param_1 = pqVar8;
    }
    else {
      pqVar1 = pqVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
        if (bVar4) {
          *(int *)pqVar1 = (int)*pqVar1 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        qVar6 = *pqVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pqVar9,0x10);
        if (bVar4) {
          *(uint *)pqVar9 = (uint)qVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_1 = pqVar8;
      if (((uint)qVar6 & 0xfffffff9) == 0) {
        func_0x0055b598();
      }
    }
  }
  bVar2 = *(byte *)((long)param_1 + 0xc);
  if (bVar2 < 5) {
    if (bVar2 == 3) {
      return;
    }
    if (bVar2 == 1) {
      pqVar9 = (qword *)param_1[3];
      if (4 < *(byte *)((long)pqVar9 + 0xc)) goto LAB_005576dc;
      puStack_40 = &uStack_38;
      uStack_38 = 0;
      qVar7 = *param_1;
      qVar6 = param_1[2];
      pqVar8 = param_1 + 1;
      if ((*pqVar8 & 0xfffffffd) == 4) {
        __ZdlPv(param_1);
      }
      else {
        pqVar1 = pqVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
          if (bVar4) {
            *(int *)pqVar1 = (int)*pqVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          qVar5 = *pqVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pqVar8,0x10);
          if (bVar4) {
            *(uint *)pqVar8 = (uint)qVar5 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)qVar5 & 0xfffffff9) == 0) {
          func_0x0055b598(param_1);
        }
      }
    }
    else {
      qVar6 = 0;
      puStack_40 = &uStack_38;
      uStack_38 = 0;
      qVar7 = *param_1;
      pqVar9 = param_1;
    }
    func_0x0055e3b0(&puStack_40,pqVar9,qVar6,qVar7);
  }
  else {
LAB_005576dc:
    pqVar9 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar9 + 1) = 4;
    *pqVar9 = *param_1;
    *(undefined4 *)((long)pqVar9 + 0xc) = 0x1000003;
    pqVar9[2] = (qword)param_1;
  }
  return;
}



/* Entry: 00557850; end: 00557883;  */

long * FUN_00557850(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0055b518();
  }
  return param_1;
}



/* Entry: 00557884; end: 005579ff;  */

/* WARNING: Possible PIC construction at 0x0055b6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0055b6c8) */

void FUN_00557884(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong unaff_x19;
  int *piVar16;
  undefined8 unaff_x20;
  long *plVar17;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *plVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((*param_1 & 1) == 0) {
    uVar12 = param_2[1];
    piVar16 = (int *)(uVar12 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar9) {
        *piVar16 = *piVar16 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *param_1 = 1;
    param_1[1] = uVar12;
    if (*param_2 < 2) {
      return;
    }
    if (*param_2 == 1) {
      if (*param_1 - 1 != 0) {
        FUN_0055abd0(*param_1 - 1);
        *param_1 = 1;
      }
      return;
    }
    if (*param_1 - 1 != 0) {
      FUN_0055abd0(*param_1 - 1);
    }
    uVar12 = 0x538;
    __Znwm();
    FUN_0055aea0();
    *param_1 = uVar12 | 1;
    puVar10 = *(uint **)(uVar12 + 0x20);
    uVar5 = *puVar10;
    if ((uVar5 & 1) == 0) {
      do {
        uVar3 = *puVar10;
        if (uVar3 != uVar5) {
          ClearExclusiveLocal();
          break;
        }
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar9) {
          *puVar10 = uVar5 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar3 & 1) == 0) {
        lVar13 = *(long *)(*(long *)(uVar12 + 0x20) + 8);
        goto joined_r0x0055abb0;
      }
    }
    FUN_00777048();
    lVar13 = *(long *)(*(long *)(uVar12 + 0x20) + 8);
joined_r0x0055abb0:
    if (lVar13 != 0) {
      *(ulong *)(lVar13 + 0x28) = uVar12;
    }
    *(long *)(uVar12 + 0x30) = lVar13;
    *(ulong *)(*(long *)(uVar12 + 0x20) + 8) = uVar12;
    uVar5 = *puVar10;
    do {
      uVar3 = *puVar10;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar9) {
        *puVar10 = uVar5 & 2;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (7 < uVar3) {
      FUN_007771d4();
    }
    return;
  }
  uVar12 = param_1[1];
  if (((*param_2 & 1) == 0) || (uVar15 = param_2[1], uVar15 == 0)) {
    if (*param_1 - 1 != 0) {
      FUN_0055abd0(*param_1 - 1);
    }
    uVar15 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar15;
  }
  else {
    piVar16 = (int *)(uVar15 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar9) {
        *piVar16 = *piVar16 + 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    param_1[1] = uVar15;
    if ((*param_2 | *param_1) != 1) {
      FUN_0055ae58(param_1,param_2,5);
    }
  }
  puVar10 = (uint *)(uVar12 + 8);
  do {
    uVar5 = *puVar10;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
    if (bVar9) {
      *puVar10 = uVar5 - 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar5 & 0xfffffff9) != 0) {
    return;
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = uVar12;
    while (bVar6 = *(byte *)(unaff_x19 + 0xc), bVar6 == 1) {
      unaff_x19 = *(ulong *)(unaff_x19 + 0x18);
      __ZdlPv();
      puVar10 = (uint *)(unaff_x19 + 8);
      if (*puVar10 != 4) {
        do {
          uVar5 = *puVar10;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar9) {
            *puVar10 = uVar5 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar5 & 0xfffffff9) != 0) {
          return;
        }
      }
    }
    if (3 < bVar6) {
      if (bVar6 == 4) {
        FUN_0055e720(unaff_x19,*(undefined4 *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x14));
      }
      else if (bVar6 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0055b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x19 + 0x18))();
        return;
      }
      goto code_r0x0077a058;
    }
    if (bVar6 != 2) {
      if (bVar6 != 3) goto code_r0x0077a058;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar13 = unaff_x19 + 0x10;
      bVar6 = *(byte *)(unaff_x19 + 0xe);
      uVar12 = (ulong)bVar6;
      bVar7 = *(byte *)(unaff_x19 + 0xf);
      plVar2 = (long *)(lVar13 + (ulong)bVar7 * 8);
      if (*(char *)(unaff_x19 + 0xd) == '\x01') {
        if (bVar6 == bVar7) goto code_r0x0077a058;
        plVar17 = (long *)(lVar13 + uVar12 * 8);
        goto LAB_0055ce34;
      }
      if (*(char *)(unaff_x19 + 0xd) == '\0') {
        if (bVar6 == bVar7) goto code_r0x0077a058;
        plVar17 = (long *)(lVar13 + uVar12 * 8);
        goto LAB_0055d000;
      }
      if (bVar6 == bVar7) goto code_r0x0077a058;
      plVar17 = (long *)(lVar13 + uVar12 * 8);
      goto LAB_0055cf54;
    }
    uVar12 = *(ulong *)(unaff_x19 + 0x10);
    if (uVar12 == 0) break;
    puVar10 = (uint *)(uVar12 + 8);
    do {
      uVar5 = *puVar10;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
      if (bVar9) {
        *puVar10 = uVar5 - 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar5 & 0xfffffff9) != 0) break;
    unaff_x30 = 0x55b6c8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  piVar16 = *(int **)(unaff_x19 + 0x18);
  do {
    iVar4 = *piVar16;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar16,0x10);
    if (bVar9) {
      *piVar16 = iVar4 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((piVar16 != (int *)0x0) && (iVar4 == 1)) {
    FUN_0055a640(piVar16 + 6);
    __ZdlPv(piVar16);
  }
  goto code_r0x0077a058;
LAB_0055ce34:
  do {
    lVar13 = *plVar17;
    puVar10 = (uint *)(lVar13 + 8);
    if (*puVar10 == 4) {
LAB_0055ce60:
      bVar6 = *(byte *)(lVar13 + 0xf);
      if ((uint)*(byte *)(lVar13 + 0xe) != (uint)bVar6) {
        plVar18 = (long *)(lVar13 + 0x10 + (ulong)*(byte *)(lVar13 + 0xe) * 8);
        do {
          lVar11 = *plVar18;
          puVar10 = (uint *)(lVar11 + 8);
          if (*puVar10 == 4) {
LAB_0055cecc:
            if (*(byte *)(lVar11 + 0xc) < 6) {
              pcVar14 = *(code **)(lVar11 + 0x18);
              if (*(byte *)(lVar11 + 0xc) == 5) {
                (*pcVar14)();
                goto LAB_0055ce94;
              }
              pcVar1 = pcVar14 + 8;
              if (*(uint *)pcVar1 != 4) {
                do {
                  uVar5 = *(uint *)pcVar1;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar9) {
                    *(uint *)pcVar1 = uVar5 - 4;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((uVar5 & 0xfffffff9) != 0) goto LAB_0055ce90;
              }
              if ((byte)pcVar14[0xc] < 6) {
                (**(code **)(pcVar14 + 0x18))(pcVar14);
              }
              else {
                __ZdlPv(pcVar14);
              }
            }
LAB_0055ce90:
            __ZdlPv(lVar11);
          }
          else {
            do {
              uVar5 = *puVar10;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar9) {
                *puVar10 = uVar5 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar5 & 0xfffffff9) == 0) goto LAB_0055cecc;
          }
LAB_0055ce94:
          plVar18 = plVar18 + 1;
        } while (plVar18 != (long *)(lVar13 + 0x10 + (ulong)(uint)bVar6 * 8));
        if (lVar13 == 0) goto LAB_0055ce28;
      }
      __ZdlPv(lVar13);
    }
    else {
      do {
        uVar5 = *puVar10;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar9) {
          *puVar10 = uVar5 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar5 & 0xfffffff9) == 0) goto LAB_0055ce60;
    }
LAB_0055ce28:
    plVar17 = plVar17 + 1;
  } while (plVar17 != plVar2);
  goto LAB_0055d090;
LAB_0055cf54:
  do {
    lVar13 = *plVar17;
    puVar10 = (uint *)(lVar13 + 8);
    if (*puVar10 == 4) {
LAB_0055cf80:
      bVar6 = *(byte *)(lVar13 + 0xf);
      if ((uint)*(byte *)(lVar13 + 0xe) != (uint)bVar6) {
        plVar18 = (long *)(lVar13 + 0x10 + (ulong)*(byte *)(lVar13 + 0xe) * 8);
        do {
          puVar10 = (uint *)(*plVar18 + 8);
          if (*puVar10 == 4) {
LAB_0055cfa0:
            FUN_0055cdc0();
          }
          else {
            do {
              uVar5 = *puVar10;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar9) {
                *puVar10 = uVar5 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar5 & 0xfffffff9) == 0) goto LAB_0055cfa0;
          }
          plVar18 = plVar18 + 1;
        } while (plVar18 != (long *)(lVar13 + 0x10 + (ulong)(uint)bVar6 * 8));
        if (lVar13 == 0) goto LAB_0055cf48;
      }
      __ZdlPv(lVar13);
    }
    else {
      do {
        uVar5 = *puVar10;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar9) {
          *puVar10 = uVar5 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar5 & 0xfffffff9) == 0) goto LAB_0055cf80;
    }
LAB_0055cf48:
    plVar17 = plVar17 + 1;
  } while (plVar17 != plVar2);
  goto LAB_0055d090;
LAB_0055d000:
  do {
    lVar13 = *plVar17;
    puVar10 = (uint *)(lVar13 + 8);
    if (*puVar10 == 4) {
LAB_0055d02c:
      if (*(byte *)(lVar13 + 0xc) < 6) {
        pcVar14 = *(code **)(lVar13 + 0x18);
        if (*(byte *)(lVar13 + 0xc) == 5) {
          (*pcVar14)();
          goto LAB_0055cff4;
        }
        pcVar1 = pcVar14 + 8;
        if (*(uint *)pcVar1 != 4) {
          do {
            uVar5 = *(uint *)pcVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar9) {
              *(uint *)pcVar1 = uVar5 - 4;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((uVar5 & 0xfffffff9) != 0) goto LAB_0055cff0;
        }
        if ((byte)pcVar14[0xc] < 6) {
          (**(code **)(pcVar14 + 0x18))(pcVar14);
        }
        else {
          __ZdlPv(pcVar14);
        }
      }
LAB_0055cff0:
      __ZdlPv(lVar13);
    }
    else {
      do {
        uVar5 = *puVar10;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar9) {
          *puVar10 = uVar5 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar5 & 0xfffffff9) == 0) goto LAB_0055d02c;
    }
LAB_0055cff4:
    plVar17 = plVar17 + 1;
  } while (plVar17 != plVar2);
LAB_0055d090:
  if (unaff_x19 == 0) {
    return;
  }
code_r0x0077a058:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x19);
  return;
}



/* Entry: 00557a00; end: 00557b33;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_00557a00(long param_1,ulong param_2)

{
  int *piVar1;
  uint *puVar2;
  qword *pqVar3;
  code *pcVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  char *pcVar10;
  ulong *puVar11;
  qword *pqVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  qword qVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  qword *pqVar25;
  qword *pqVar26;
  ulong uVar27;
  qword *pqVar28;
  long lVar29;
  qword *pqVar30;
  ulong *puVar31;
  undefined1 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong uStack_e0;
  qword *pqStack_d8;
  qword aqStack_d0 [14];
  
  if (param_2 == 0) {
    return (qword *)0x0;
  }
  uVar19 = param_2 - 0xff3;
  if (param_2 < 0xff3 || uVar19 == 0) {
    uVar19 = param_2;
    if (param_2 < 0x14) {
      uVar19 = 0x13;
    }
    uVar27 = 0xfffffffffffffff8;
    if (499 < param_2) {
      uVar27 = 0xffffffffffffffc0;
    }
    lVar15 = 8;
    if (499 < param_2) {
      lVar15 = 0x40;
    }
    pqVar25 = (qword *)(uVar19 + lVar15 + 0xc & uVar27);
    pqVar28 = pqVar25;
    __Znwm();
    *pqVar28 = param_2;
    pqVar28[1] = 4;
    bVar9 = section_000001f8.sectname + 8 < pqVar25;
    lVar15 = 3;
    if (bVar9) {
      lVar15 = 6;
    }
    cVar20 = '\x02';
    if (bVar9) {
      cVar20 = ':';
    }
    *(char *)((long)pqVar28 + 0xc) = (char)((ulong)pqVar25 >> lVar15) + cVar20;
    _memcpy((undefined1 *)((long)pqVar28 + 0xd),param_1,param_2);
    return pqVar28;
  }
  pcVar10 = section_00000ff8.sectname + 8;
  __Znwm();
  pcVar10[8] = '\x04';
  pcVar10[9] = '\0';
  pcVar10[10] = '\0';
  pcVar10[0xb] = '\0';
  pcVar10[0xc] = 'z';
  pcVar10[0xd] = '\0';
  pcVar10[0xe] = '\0';
  pcVar10[0xf] = '\0';
  pcVar10[0] = -0xd;
  pcVar10[1] = '\x0f';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  _memcpy(pcVar10 + 0xd,param_1,0xff3);
  pqStack_d8 = &segment_command_00000020.vmsize;
  __Znwm();
  *(undefined4 *)(pqStack_d8 + 1) = 4;
  *pqStack_d8 = 0xff3;
  *(undefined4 *)((long)pqStack_d8 + 0xc) = 0x1000003;
  pqStack_d8[2] = (qword)pcVar10;
  param_1 = param_1 + 0xff3;
  if (uVar19 == 0) {
    return pqStack_d8;
  }
  bVar6 = *(byte *)((long)pqStack_d8 + 0xd);
  uStack_e0 = (ulong)bVar6;
  pqVar28 = pqStack_d8;
  if (bVar6 == 0) {
    uVar27 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar27 = uVar14;
      if ((pqVar28[1] & 0xfffffffd) != 4) break;
      aqStack_d0[uVar14 + 1] = (qword)pqVar28;
      uVar14 = uVar14 + 1;
      pqVar28 = (qword *)pqVar28[(ulong)*(byte *)((long)pqVar28 + 0xf) + 1];
      uVar27 = uStack_e0;
    } while (uStack_e0 != uVar14);
  }
  iVar13 = (int)uVar27;
  aqStack_d0[0]._0_4_ = iVar13;
  if ((pqVar28[1] & 0xfffffffd) == 4) {
    aqStack_d0[0]._0_4_ = iVar13 + 1;
  }
  if (iVar13 < (int)(uint)bVar6) {
    pqVar25 = aqStack_d0 + (uVar27 & 0xffffffff);
    lVar15 = uStack_e0 - (uVar27 & 0xffffffff);
    do {
      pqVar25 = pqVar25 + 1;
      *pqVar25 = (qword)pqVar28;
      pqVar28 = (qword *)pqVar28[(ulong)*(byte *)((long)pqVar28 + 0xf) + 1];
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  uVar27 = uVar19;
  if (5 < (ulong)*(byte *)((long)pqVar28 + 0xf) - (ulong)*(byte *)((long)pqVar28 + 0xe))
  goto LAB_0055c6ec;
  if ((int)(uint)bVar6 < (int)aqStack_d0[0]) {
    iVar13 = 0;
    pqVar25 = pqVar28;
  }
  else {
    qVar16 = *pqVar28;
    pqVar25 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar25 + 1) = 4;
    *pqVar25 = qVar16;
    uVar34 = *(undefined8 *)((long)pqVar28 + 0x14);
    uVar33 = *(undefined8 *)((long)pqVar28 + 0xc);
    uVar36 = *(undefined8 *)((long)pqVar28 + 0x24);
    uVar35 = *(undefined8 *)((long)pqVar28 + 0x1c);
    uVar38 = *(undefined8 *)((long)pqVar28 + 0x34);
    uVar37 = *(undefined8 *)((long)pqVar28 + 0x2c);
    *(undefined4 *)((long)pqVar25 + 0x3c) = *(undefined4 *)((long)pqVar28 + 0x3c);
    *(undefined8 *)((long)pqVar25 + 0x34) = uVar38;
    *(undefined8 *)((long)pqVar25 + 0x2c) = uVar37;
    *(undefined8 *)((long)pqVar25 + 0x24) = uVar36;
    *(undefined8 *)((long)pqVar25 + 0x1c) = uVar35;
    *(undefined8 *)((long)pqVar25 + 0x14) = uVar34;
    *(undefined8 *)((long)pqVar25 + 0xc) = uVar33;
    bVar7 = *(byte *)((long)pqVar28 + 0xf);
    if ((uint)*(byte *)((long)pqVar28 + 0xe) != (uint)bVar7) {
      pqVar30 = pqVar28 + (ulong)*(byte *)((long)pqVar28 + 0xe) + 2;
      do {
        piVar1 = (int *)(*pqVar30 + 8);
        do {
          cVar20 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        pqVar30 = pqVar30 + 1;
      } while (pqVar30 != pqVar28 + (ulong)(uint)bVar7 + 2);
    }
    iVar13 = 1;
  }
  bVar7 = *(byte *)((long)pqVar25 + 0xe);
  uVar14 = (ulong)bVar7;
  if (bVar7 != 0) {
    bVar8 = *(byte *)((long)pqVar25 + 0xf);
    uVar23 = bVar8 - uVar14;
    *(undefined1 *)((long)pqVar25 + 0xe) = 0;
    *(char *)((long)pqVar25 + 0xf) = (char)uVar23;
    if (bVar8 != bVar7) {
      if (uVar23 < 2) {
        uVar24 = 0;
      }
      else {
        uVar24 = uVar23 & 6;
        uVar18 = uVar24;
        pqVar28 = pqVar25;
        do {
          pqVar30 = pqVar28 + 2;
          qVar16 = pqVar30[uVar14];
          pqVar28[3] = (pqVar30 + uVar14)[1];
          *pqVar30 = qVar16;
          uVar18 = uVar18 - 2;
          pqVar28 = pqVar30;
        } while (uVar18 != 0);
        if (uVar23 == uVar24) goto LAB_0055c400;
      }
      lVar15 = (uVar24 + uVar14) - (ulong)bVar8;
      pqVar28 = pqVar25 + uVar24 + 2;
      pqVar30 = pqVar25 + uVar24 + uVar14 + 2;
      do {
        *pqVar28 = *pqVar30;
        bVar9 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        pqVar28 = pqVar28 + 1;
        pqVar30 = pqVar30 + 1;
      } while (bVar9);
    }
  }
LAB_0055c400:
  do {
    uVar14 = uVar27;
    if (0xff2 < uVar27) {
      uVar14 = 0xff3;
    }
    uVar23 = 0x20;
    if (0x13 < uVar27) {
      uVar23 = uVar14 + 0xd;
    }
    uVar14 = 0xfffffffffffffff8;
    if (0x200 < uVar23) {
      uVar14 = 0xffffffffffffffc0;
    }
    lVar15 = 8;
    if (0x200 < uVar23) {
      lVar15 = 0x40;
    }
    puVar31 = (ulong *)((uVar23 + lVar15) - 1 & uVar14);
    puVar11 = puVar31;
    __Znwm();
    bVar9 = section_000001f8.sectname + 8 < puVar31;
    lVar15 = 3;
    if (bVar9) {
      lVar15 = 6;
    }
    lVar29 = 2;
    if (bVar9) {
      lVar29 = 0x3a;
    }
    uVar14 = ((ulong)puVar31 >> lVar15) + lVar29;
    uVar22 = 3;
    if (0x42 < uVar14) {
      uVar22 = 6;
    }
    iVar21 = -0x1d;
    if (0x42 < uVar14) {
      iVar21 = -0xe8d;
    }
    uVar18 = (ulong)(((int)uVar14 << (ulong)uVar22) + iVar21);
    uVar23 = uVar27;
    if (uVar18 <= uVar27) {
      uVar23 = uVar18;
    }
    *puVar11 = uVar23;
    puVar11[1] = 4;
    *(char *)((long)puVar11 + 0xc) = (char)uVar14;
    bVar7 = *(byte *)((long)pqVar25 + 0xf);
    cVar20 = bVar7 + 1;
    *(char *)((long)pqVar25 + 0xf) = cVar20;
    pqVar25[(ulong)bVar7 + 2] = (qword)puVar11;
    _memcpy((long)puVar11 + 0xd,param_1,uVar23);
    param_1 = param_1 + uVar23;
    uVar27 = uVar27 - uVar23;
  } while ((cVar20 != '\x06') && (uVar27 != 0));
  if (uVar27 == 0) {
    *pqVar25 = *pqVar25 + uVar19;
LAB_0055cd14:
    pqVar28 = aqStack_d0;
    FUN_0055bdcc(pqVar28,pqStack_d8,uStack_e0,uVar19,pqVar25,iVar13);
    return pqVar28;
  }
  lVar15 = uVar19 - uVar27;
  *pqVar25 = *pqVar25 + lVar15;
  if (bVar6 != 0) {
    uVar19 = (ulong)(bVar6 - 1);
    lVar29 = uVar19 + 1;
    pqVar28 = aqStack_d0 + uVar19;
    uVar19 = uStack_e0;
    pqVar30 = pqVar25;
    do {
      pqVar25 = (qword *)aqStack_d0[uVar19];
      if (iVar13 == 0) {
        *pqVar25 = *pqVar25 + lVar15;
        if (1 < uVar19) {
          do {
            pqVar25 = (qword *)*pqVar28;
            *pqVar25 = *pqVar25 + lVar15;
            lVar29 = lVar29 + -1;
            pqVar28 = pqVar28 + -1;
          } while (1 < lVar29);
        }
        goto LAB_0055c6dc;
      }
      uVar14 = (ulong)*(byte *)((long)pqVar25 + 0xf);
      if ((long)(int)aqStack_d0[0] < (long)uVar19) {
        qVar16 = *pqVar25;
        pqVar12 = &segment_command_00000020.vmsize;
        __Znwm();
        *(undefined4 *)(pqVar12 + 1) = 4;
        *pqVar12 = qVar16;
        uVar34 = *(undefined8 *)((long)pqVar25 + 0x14);
        uVar33 = *(undefined8 *)((long)pqVar25 + 0xc);
        uVar36 = *(undefined8 *)((long)pqVar25 + 0x24);
        uVar35 = *(undefined8 *)((long)pqVar25 + 0x1c);
        uVar38 = *(undefined8 *)((long)pqVar25 + 0x34);
        uVar37 = *(undefined8 *)((long)pqVar25 + 0x2c);
        *(undefined4 *)((long)pqVar12 + 0x3c) = *(undefined4 *)((long)pqVar25 + 0x3c);
        *(undefined8 *)((long)pqVar12 + 0x34) = uVar38;
        *(undefined8 *)((long)pqVar12 + 0x2c) = uVar37;
        *(undefined8 *)((long)pqVar12 + 0x24) = uVar36;
        *(undefined8 *)((long)pqVar12 + 0x1c) = uVar35;
        *(undefined8 *)((long)pqVar12 + 0x14) = uVar34;
        *(undefined8 *)((long)pqVar12 + 0xc) = uVar33;
        if (uVar14 - 1 != (ulong)*(byte *)((long)pqVar25 + 0xe)) {
          pqVar26 = pqVar25 + (ulong)*(byte *)((long)pqVar25 + 0xe) + 2;
          do {
            piVar1 = (int *)(*pqVar26 + 8);
            do {
              cVar20 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = *piVar1 + 4;
                cVar20 = ExclusiveMonitorsStatus();
              }
            } while (cVar20 != '\0');
            pqVar26 = pqVar26 + 1;
          } while (pqVar26 != pqVar25 + uVar14 + 1);
        }
        iVar13 = 1;
        pqVar25 = pqVar12;
      }
      else {
        puVar2 = (uint *)(pqVar25[uVar14 + 1] + 8);
        do {
          uVar22 = *puVar2;
          cVar20 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar22 - 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if ((uVar22 & 0xfffffff9) == 0) {
          func_0x0055b598();
        }
        iVar13 = 0;
      }
      qVar16 = *pqVar25;
      aqStack_d0[uVar19] = (qword)pqVar25;
      lVar29 = lVar29 + -1;
      pqVar25[uVar14 + 1] = (qword)pqVar30;
      *pqVar25 = qVar16 + lVar15;
      pqVar28 = pqVar28 + -1;
      bVar9 = 1 < uVar19;
      uVar19 = uVar19 - 1;
      pqVar30 = pqVar25;
    } while (bVar9);
  }
  if (iVar13 != 0) {
    pqStack_d8 = pqStack_d8 + 1;
    do {
      qVar16 = *pqStack_d8;
      cVar20 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pqStack_d8,0x10);
      if (bVar9) {
        *(uint *)pqStack_d8 = (uint)qVar16 - 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (((uint)qVar16 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
LAB_0055c6dc:
  aqStack_d0[0]._0_4_ = bVar6 + 1;
  pqStack_d8 = pqVar25;
LAB_0055c6ec:
  pqVar25 = &segment_command_00000020.vmsize;
  __Znwm();
  *(undefined4 *)(pqVar25 + 1) = 4;
  *(undefined2 *)((long)pqVar25 + 0xc) = 3;
  *(undefined1 *)((long)pqVar25 + 0xe) = 0;
  uVar19 = uVar27;
  do {
    uVar27 = uVar19;
    if (0xff2 < uVar19) {
      uVar27 = 0xff3;
    }
    uVar14 = 0x20;
    if (0x13 < uVar19) {
      uVar14 = uVar27 + 0xd;
    }
    uVar27 = 0xfffffffffffffff8;
    if (0x200 < uVar14) {
      uVar27 = 0xffffffffffffffc0;
    }
    lVar15 = 8;
    if (0x200 < uVar14) {
      lVar15 = 0x40;
    }
    pqVar30 = (qword *)((uVar14 + lVar15) - 1 & uVar27);
    pqVar28 = pqVar30;
    __Znwm();
    bVar9 = section_000001f8.sectname + 8 < pqVar30;
    lVar15 = 3;
    if (bVar9) {
      lVar15 = 6;
    }
    lVar29 = 2;
    if (bVar9) {
      lVar29 = 0x3a;
    }
    uVar27 = ((ulong)pqVar30 >> lVar15) + lVar29;
    uVar22 = 3;
    if (0x42 < uVar27) {
      uVar22 = 6;
    }
    iVar13 = -0x1d;
    if (0x42 < uVar27) {
      iVar13 = -0xe8d;
    }
    uVar14 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
    qVar16 = uVar19;
    if (uVar14 <= uVar19) {
      qVar16 = uVar14;
    }
    *pqVar28 = qVar16;
    pqVar28[1] = 4;
    *(char *)((long)pqVar28 + 0xc) = (char)uVar27;
    pqVar25[2] = (qword)pqVar28;
    _memcpy((long)pqVar28 + 0xd,param_1,qVar16);
    if (uVar14 < uVar19) {
      uVar14 = uVar19 - qVar16;
      lVar15 = param_1 + qVar16;
      uVar27 = uVar14;
      if (0xff2 < uVar14) {
        uVar27 = 0xff3;
      }
      uVar23 = 0x20;
      if (0x13 < uVar14) {
        uVar23 = uVar27 + 0xd;
      }
      uVar27 = 0xfffffffffffffff8;
      if (0x200 < uVar23) {
        uVar27 = 0xffffffffffffffc0;
      }
      lVar29 = 8;
      if (0x200 < uVar23) {
        lVar29 = 0x40;
      }
      puVar31 = (ulong *)((uVar23 + lVar29) - 1 & uVar27);
      puVar11 = puVar31;
      __Znwm();
      bVar9 = section_000001f8.sectname + 8 < puVar31;
      lVar29 = 3;
      if (bVar9) {
        lVar29 = 6;
      }
      lVar5 = 2;
      if (bVar9) {
        lVar5 = 0x3a;
      }
      uVar27 = ((ulong)puVar31 >> lVar29) + lVar5;
      uVar22 = 3;
      if (0x42 < uVar27) {
        uVar22 = 6;
      }
      iVar13 = -0x1d;
      if (0x42 < uVar27) {
        iVar13 = -0xe8d;
      }
      uVar18 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
      uVar23 = uVar14;
      if (uVar18 <= uVar14) {
        uVar23 = uVar18;
      }
      *puVar11 = uVar23;
      puVar11[1] = 4;
      *(char *)((long)puVar11 + 0xc) = (char)uVar27;
      pqVar25[3] = (qword)puVar11;
      _memcpy((long)puVar11 + 0xd,lVar15,uVar23);
      qVar16 = uVar23 + qVar16;
      if (uVar18 < uVar14) {
        uVar14 = uVar14 - uVar23;
        lVar15 = lVar15 + uVar23;
        uVar27 = uVar14;
        if (0xff2 < uVar14) {
          uVar27 = 0xff3;
        }
        uVar23 = 0x20;
        if (0x13 < uVar14) {
          uVar23 = uVar27 + 0xd;
        }
        uVar27 = 0xfffffffffffffff8;
        if (0x200 < uVar23) {
          uVar27 = 0xffffffffffffffc0;
        }
        lVar29 = 8;
        if (0x200 < uVar23) {
          lVar29 = 0x40;
        }
        puVar31 = (ulong *)((uVar23 + lVar29) - 1 & uVar27);
        puVar11 = puVar31;
        __Znwm();
        bVar9 = section_000001f8.sectname + 8 < puVar31;
        uVar32 = 3;
        lVar29 = 3;
        if (bVar9) {
          lVar29 = 6;
        }
        lVar5 = 2;
        if (bVar9) {
          lVar5 = 0x3a;
        }
        uVar27 = ((ulong)puVar31 >> lVar29) + lVar5;
        uVar22 = 3;
        if (0x42 < uVar27) {
          uVar22 = 6;
        }
        iVar13 = -0x1d;
        if (0x42 < uVar27) {
          iVar13 = -0xe8d;
        }
        uVar18 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
        uVar23 = uVar14;
        if (uVar18 <= uVar14) {
          uVar23 = uVar18;
        }
        *puVar11 = uVar23;
        puVar11[1] = 4;
        *(char *)((long)puVar11 + 0xc) = (char)uVar27;
        pqVar25[4] = (qword)puVar11;
        _memcpy((long)puVar11 + 0xd,lVar15,uVar23);
        qVar16 = uVar23 + qVar16;
        if (uVar18 < uVar14) {
          uVar14 = uVar14 - uVar23;
          lVar15 = lVar15 + uVar23;
          uVar27 = uVar14;
          if (0xff2 < uVar14) {
            uVar27 = 0xff3;
          }
          uVar23 = 0x20;
          if (0x13 < uVar14) {
            uVar23 = uVar27 + 0xd;
          }
          uVar27 = 0xfffffffffffffff8;
          if (0x200 < uVar23) {
            uVar27 = 0xffffffffffffffc0;
          }
          lVar29 = 8;
          if (0x200 < uVar23) {
            lVar29 = 0x40;
          }
          puVar31 = (ulong *)((uVar23 + lVar29) - 1 & uVar27);
          puVar11 = puVar31;
          __Znwm();
          uVar32 = 4;
          bVar9 = section_000001f8.sectname + 8 < puVar31;
          lVar29 = 3;
          if (bVar9) {
            lVar29 = 6;
          }
          lVar5 = 2;
          if (bVar9) {
            lVar5 = 0x3a;
          }
          uVar27 = ((ulong)puVar31 >> lVar29) + lVar5;
          uVar22 = 3;
          if (0x42 < uVar27) {
            uVar22 = 6;
          }
          iVar13 = -0x1d;
          if (0x42 < uVar27) {
            iVar13 = -0xe8d;
          }
          uVar18 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
          uVar23 = uVar14;
          if (uVar18 <= uVar14) {
            uVar23 = uVar18;
          }
          *puVar11 = uVar23;
          puVar11[1] = 4;
          *(char *)((long)puVar11 + 0xc) = (char)uVar27;
          pqVar25[5] = (qword)puVar11;
          _memcpy((long)puVar11 + 0xd,lVar15,uVar23);
          qVar16 = uVar23 + qVar16;
          if (uVar18 < uVar14) {
            uVar14 = uVar14 - uVar23;
            lVar15 = lVar15 + uVar23;
            uVar27 = uVar14;
            if (0xff2 < uVar14) {
              uVar27 = 0xff3;
            }
            uVar23 = 0x20;
            if (0x13 < uVar14) {
              uVar23 = uVar27 + 0xd;
            }
            uVar27 = 0xfffffffffffffff8;
            if (0x200 < uVar23) {
              uVar27 = 0xffffffffffffffc0;
            }
            lVar29 = 8;
            if (0x200 < uVar23) {
              lVar29 = 0x40;
            }
            puVar31 = (ulong *)((uVar23 + lVar29) - 1 & uVar27);
            puVar11 = puVar31;
            __Znwm();
            bVar9 = section_000001f8.sectname + 8 < puVar31;
            lVar29 = 3;
            if (bVar9) {
              lVar29 = 6;
            }
            lVar5 = 2;
            if (bVar9) {
              lVar5 = 0x3a;
            }
            uVar27 = ((ulong)puVar31 >> lVar29) + lVar5;
            uVar22 = 3;
            if (0x42 < uVar27) {
              uVar22 = 6;
            }
            iVar13 = -0x1d;
            if (0x42 < uVar27) {
              iVar13 = -0xe8d;
            }
            uVar18 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
            uVar23 = uVar14;
            if (uVar18 <= uVar14) {
              uVar23 = uVar18;
            }
            *puVar11 = uVar23;
            puVar11[1] = 4;
            *(char *)((long)puVar11 + 0xc) = (char)uVar27;
            pqVar25[6] = (qword)puVar11;
            _memcpy((long)puVar11 + 0xd,lVar15,uVar23);
            qVar16 = uVar23 + qVar16;
            if (uVar18 < uVar14) {
              uVar14 = uVar14 - uVar23;
              uVar27 = uVar14;
              if (0xff2 < uVar14) {
                uVar27 = 0xff3;
              }
              uVar18 = 0x20;
              if (0x13 < uVar14) {
                uVar18 = uVar27 + 0xd;
              }
              uVar27 = 0xfffffffffffffff8;
              if (0x200 < uVar18) {
                uVar27 = 0xffffffffffffffc0;
              }
              lVar29 = 8;
              if (0x200 < uVar18) {
                lVar29 = 0x40;
              }
              puVar31 = (ulong *)((uVar18 + lVar29) - 1 & uVar27);
              puVar11 = puVar31;
              __Znwm();
              bVar9 = section_000001f8.sectname + 8 < puVar31;
              lVar29 = 3;
              if (bVar9) {
                lVar29 = 6;
              }
              lVar5 = 2;
              if (bVar9) {
                lVar5 = 0x3a;
              }
              uVar27 = ((ulong)puVar31 >> lVar29) + lVar5;
              uVar22 = 3;
              if (0x42 < uVar27) {
                uVar22 = 6;
              }
              iVar13 = -0x1d;
              if (0x42 < uVar27) {
                iVar13 = -0xe8d;
              }
              uVar18 = (ulong)(((int)uVar27 << (ulong)uVar22) + iVar13);
              if (uVar18 <= uVar14) {
                uVar14 = uVar18;
              }
              *puVar11 = uVar14;
              puVar11[1] = 4;
              *(char *)((long)puVar11 + 0xc) = (char)uVar27;
              qVar16 = uVar14 + qVar16;
              pqVar25[7] = (qword)puVar11;
              _memcpy((long)puVar11 + 0xd,lVar15 + uVar23);
              *pqVar25 = qVar16;
              *(undefined1 *)((long)pqVar25 + 0xf) = 6;
              goto joined_r0x0055cc80;
            }
            uVar32 = 5;
          }
        }
        *pqVar25 = qVar16;
        *(undefined1 *)((long)pqVar25 + 0xf) = uVar32;
      }
      else {
        *pqVar25 = qVar16;
        *(undefined1 *)((long)pqVar25 + 0xf) = 2;
      }
    }
    else {
      *pqVar25 = qVar16;
      *(undefined1 *)((long)pqVar25 + 0xf) = 1;
    }
joined_r0x0055cc80:
    if (uVar19 - qVar16 == 0) {
      iVar13 = 2;
      goto LAB_0055cd14;
    }
    if (uVar19 < qVar16) break;
    pqVar28 = aqStack_d0;
    FUN_0055bdcc(pqVar28,pqStack_d8,uStack_e0,qVar16,pqVar25,2);
    bVar6 = *(byte *)((long)pqVar28 + 0xd);
    uStack_e0 = (ulong)bVar6;
    uVar27 = uStack_e0;
    pqVar30 = pqVar28;
    pqVar25 = aqStack_d0;
    if (bVar6 == 0) {
      aqStack_d0[0]._0_4_ = 1;
    }
    else {
      do {
        pqVar25[1] = (qword)pqVar30;
        uVar27 = uVar27 - 1;
        pqVar30 = (qword *)pqVar30[(ulong)*(byte *)((long)pqVar30 + 0xf) + 1];
        pqVar25 = pqVar25 + 1;
      } while (uVar27 != 0);
      aqStack_d0[0]._0_4_ = bVar6 + 1;
    }
    param_1 = qVar16 + param_1;
    pqVar25 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar25 + 1) = 4;
    *(undefined2 *)((long)pqVar25 + 0xc) = 3;
    *(undefined1 *)((long)pqVar25 + 0xe) = 0;
    uVar19 = uVar19 - qVar16;
    pqStack_d8 = pqVar28;
  } while( true );
  pcVar10 = "string_view::substr";
  FUN_00435534("string_view::substr",pqStack_d8);
  bVar6 = *(byte *)((long)pcVar10 + 0xe);
  bVar7 = *(byte *)((long)pcVar10 + 0xf);
  pqVar28 = (qword *)((long)pcVar10 + ((ulong)bVar7 + 2) * 8);
  pqVar25 = (qword *)pcVar10;
  if (*(char *)((long)pcVar10 + 0xd) == '\x01') {
    if (bVar6 == bVar7) goto LAB_0055d094;
    pqVar30 = (qword *)((long)pcVar10 + ((ulong)bVar6 + 2) * 8);
    do {
      pqVar26 = (qword *)*pqVar30;
      pqVar12 = pqVar26 + 1;
      if ((uint)*pqVar12 == 4) {
LAB_0055ce60:
        bVar6 = *(byte *)((long)pqVar26 + 0xf);
        if ((uint)*(byte *)((long)pqVar26 + 0xe) != (uint)bVar6) {
          pqVar12 = pqVar26 + (ulong)*(byte *)((long)pqVar26 + 0xe) + 2;
          do {
            pqVar25 = (qword *)*pqVar12;
            pqVar3 = pqVar25 + 1;
            if ((uint)*pqVar3 == 4) {
LAB_0055cecc:
              if (*(byte *)((long)pqVar25 + 0xc) < 6) {
                pcVar17 = (code *)pqVar25[3];
                if (*(byte *)((long)pqVar25 + 0xc) == 5) {
                  (*pcVar17)();
                  goto LAB_0055ce94;
                }
                pcVar4 = pcVar17 + 8;
                if (*(uint *)pcVar4 != 4) {
                  do {
                    uVar22 = *(uint *)pcVar4;
                    cVar20 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
                    if (bVar9) {
                      *(uint *)pcVar4 = uVar22 - 4;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if ((uVar22 & 0xfffffff9) != 0) goto LAB_0055ce90;
                }
                if ((byte)pcVar17[0xc] < 6) {
                  (**(code **)(pcVar17 + 0x18))(pcVar17);
                }
                else {
                  __ZdlPv(pcVar17);
                }
              }
LAB_0055ce90:
              __ZdlPv(pqVar25);
            }
            else {
              do {
                qVar16 = *pqVar3;
                cVar20 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pqVar3,0x10);
                if (bVar9) {
                  *(uint *)pqVar3 = (uint)qVar16 - 4;
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              if (((uint)qVar16 & 0xfffffff9) == 0) goto LAB_0055cecc;
            }
LAB_0055ce94:
            pqVar12 = pqVar12 + 1;
          } while (pqVar12 != pqVar26 + (ulong)(uint)bVar6 + 2);
          if (pqVar26 == (qword *)0x0) goto LAB_0055ce28;
        }
        __ZdlPv(pqVar26);
        pqVar25 = pqVar26;
      }
      else {
        do {
          qVar16 = *pqVar12;
          cVar20 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
          if (bVar9) {
            *(uint *)pqVar12 = (uint)qVar16 - 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if (((uint)qVar16 & 0xfffffff9) == 0) goto LAB_0055ce60;
      }
LAB_0055ce28:
      pqVar30 = pqVar30 + 1;
    } while (pqVar30 != pqVar28);
  }
  else if (*(char *)((long)pcVar10 + 0xd) == '\0') {
    if (bVar6 == bVar7) goto LAB_0055d094;
    pqVar30 = (qword *)((long)pcVar10 + ((ulong)bVar6 + 2) * 8);
    do {
      pqVar25 = (qword *)*pqVar30;
      pqVar12 = pqVar25 + 1;
      if ((uint)*pqVar12 == 4) {
LAB_0055d02c:
        if (*(byte *)((long)pqVar25 + 0xc) < 6) {
          pcVar17 = (code *)pqVar25[3];
          if (*(byte *)((long)pqVar25 + 0xc) == 5) {
            (*pcVar17)();
            goto LAB_0055cff4;
          }
          pcVar4 = pcVar17 + 8;
          if (*(uint *)pcVar4 != 4) {
            do {
              uVar22 = *(uint *)pcVar4;
              cVar20 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
              if (bVar9) {
                *(uint *)pcVar4 = uVar22 - 4;
                cVar20 = ExclusiveMonitorsStatus();
              }
            } while (cVar20 != '\0');
            if ((uVar22 & 0xfffffff9) != 0) goto LAB_0055cff0;
          }
          if ((byte)pcVar17[0xc] < 6) {
            (**(code **)(pcVar17 + 0x18))(pcVar17);
          }
          else {
            __ZdlPv(pcVar17);
          }
        }
LAB_0055cff0:
        __ZdlPv(pqVar25);
      }
      else {
        do {
          qVar16 = *pqVar12;
          cVar20 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
          if (bVar9) {
            *(uint *)pqVar12 = (uint)qVar16 - 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if (((uint)qVar16 & 0xfffffff9) == 0) goto LAB_0055d02c;
      }
LAB_0055cff4:
      pqVar30 = pqVar30 + 1;
    } while (pqVar30 != pqVar28);
  }
  else {
    if (bVar6 == bVar7) goto LAB_0055d094;
    pqVar30 = (qword *)((long)pcVar10 + ((ulong)bVar6 + 2) * 8);
    do {
      pqVar26 = (qword *)*pqVar30;
      pqVar12 = pqVar26 + 1;
      if ((uint)*pqVar12 == 4) {
LAB_0055cf80:
        bVar6 = *(byte *)((long)pqVar26 + 0xf);
        if ((uint)*(byte *)((long)pqVar26 + 0xe) != (uint)bVar6) {
          pqVar12 = pqVar26 + (ulong)*(byte *)((long)pqVar26 + 0xe) + 2;
          do {
            pqVar25 = (qword *)*pqVar12;
            pqVar3 = pqVar25 + 1;
            if ((uint)*pqVar3 == 4) {
LAB_0055cfa0:
              FUN_0055cdc0();
            }
            else {
              do {
                qVar16 = *pqVar3;
                cVar20 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pqVar3,0x10);
                if (bVar9) {
                  *(uint *)pqVar3 = (uint)qVar16 - 4;
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              if (((uint)qVar16 & 0xfffffff9) == 0) goto LAB_0055cfa0;
            }
            pqVar12 = pqVar12 + 1;
          } while (pqVar12 != pqVar26 + (ulong)(uint)bVar6 + 2);
          if (pqVar26 == (qword *)0x0) goto LAB_0055cf48;
        }
        __ZdlPv(pqVar26);
        pqVar25 = pqVar26;
      }
      else {
        do {
          qVar16 = *pqVar12;
          cVar20 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
          if (bVar9) {
            *(uint *)pqVar12 = (uint)qVar16 - 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if (((uint)qVar16 & 0xfffffff9) == 0) goto LAB_0055cf80;
      }
LAB_0055cf48:
      pqVar30 = pqVar30 + 1;
    } while (pqVar30 != pqVar28);
  }
  if ((qword *)pcVar10 == (qword *)0x0) {
    return pqVar25;
  }
LAB_0055d094:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(pcVar10);
  return (qword *)pcVar10;
}



/* Entry: 00557b34; end: 00557c67;  */

undefined8 * FUN_00557b34(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0xf < param_3) {
    FUN_00557a00(param_2,param_3);
    *param_1 = 1;
    param_1[1] = param_2;
    return param_1;
  }
  *(char *)param_1 = (char)((int)param_3 << 1);
  if (7 < param_3) {
    uVar3 = *param_2;
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    param_1[1] = 0;
    *(undefined8 *)((long)param_1 + 1) = uVar3;
    *(undefined8 *)((long)param_1 + (param_3 - 7)) = uVar4;
    return param_1;
  }
  if (3 < param_3) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)((long)param_1 + 5) = 0;
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + (param_3 - 3)) = uVar2;
    return param_1;
  }
  if (param_3 != 0) {
    *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)param_2;
    *(undefined1 *)((long)param_1 + (param_3 >> 1) + 1) =
         *(undefined1 *)((long)param_2 + (param_3 >> 1));
    *(undefined1 *)((long)param_1 + param_3) = *(undefined1 *)((long)param_2 + (param_3 - 1));
  }
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + param_3 + 1) = 0;
  return param_1;
}



/* Entry: 00557c68; end: 00557cfb;  */

/* WARNING: Possible PIC construction at 0x0055b6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0055b6c8) */

void FUN_00557c68(byte *param_1)

{
  uint *puVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long unaff_x19;
  int *piVar14;
  undefined8 unaff_x20;
  long *plVar15;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *plVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  bVar6 = *param_1;
  if ((bVar6 & 1) == 0) {
joined_r0x00557ce4:
    if ((bVar6 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      return;
    }
  }
  else if (*(long *)param_1 + -1 != 0) {
    FUN_0055abd0(*(long *)param_1 + -1);
    bVar6 = *param_1;
    goto joined_r0x00557ce4;
  }
  lVar11 = *(long *)(param_1 + 8);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (lVar11 == 0) {
    return;
  }
  puVar1 = (uint *)(lVar11 + 8);
  do {
    uVar4 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar4 - 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar4 & 0xfffffff9) != 0) {
    return;
  }
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = lVar11;
    while (bVar6 = *(byte *)(unaff_x19 + 0xc), bVar6 == 1) {
      unaff_x19 = *(long *)(unaff_x19 + 0x18);
      __ZdlPv();
      puVar1 = (uint *)(unaff_x19 + 8);
      if (*puVar1 != 4) {
        do {
          uVar4 = *puVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar9) {
            *puVar1 = uVar4 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar4 & 0xfffffff9) != 0) {
          return;
        }
      }
    }
    if (3 < bVar6) {
      if (bVar6 == 4) {
        FUN_0055e720(unaff_x19,*(undefined4 *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x14));
      }
      else if (bVar6 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0055b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x19 + 0x18))();
        return;
      }
      goto code_r0x0077a058;
    }
    if (bVar6 != 2) {
      if (bVar6 != 3) goto code_r0x0077a058;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar11 = unaff_x19 + 0x10;
      bVar6 = *(byte *)(unaff_x19 + 0xe);
      uVar13 = (ulong)bVar6;
      bVar7 = *(byte *)(unaff_x19 + 0xf);
      plVar3 = (long *)(lVar11 + (ulong)bVar7 * 8);
      if (*(char *)(unaff_x19 + 0xd) == '\x01') {
        if (bVar6 == bVar7) goto code_r0x0077a058;
        plVar15 = (long *)(lVar11 + uVar13 * 8);
        goto LAB_0055ce34;
      }
      if (*(char *)(unaff_x19 + 0xd) == '\0') {
        if (bVar6 == bVar7) goto code_r0x0077a058;
        plVar15 = (long *)(lVar11 + uVar13 * 8);
        goto LAB_0055d000;
      }
      if (bVar6 == bVar7) goto code_r0x0077a058;
      plVar15 = (long *)(lVar11 + uVar13 * 8);
      goto LAB_0055cf54;
    }
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if (lVar11 == 0) break;
    puVar1 = (uint *)(lVar11 + 8);
    do {
      uVar4 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar4 - 4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar4 & 0xfffffff9) != 0) break;
    unaff_x30 = 0x55b6c8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  piVar14 = *(int **)(unaff_x19 + 0x18);
  do {
    iVar5 = *piVar14;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
    if (bVar9) {
      *piVar14 = iVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((piVar14 != (int *)0x0) && (iVar5 == 1)) {
    FUN_0055a640(piVar14 + 6);
    __ZdlPv(piVar14);
  }
  goto code_r0x0077a058;
LAB_0055ce34:
  do {
    lVar11 = *plVar15;
    puVar1 = (uint *)(lVar11 + 8);
    if (*puVar1 == 4) {
LAB_0055ce60:
      bVar6 = *(byte *)(lVar11 + 0xf);
      if ((uint)*(byte *)(lVar11 + 0xe) != (uint)bVar6) {
        plVar16 = (long *)(lVar11 + 0x10 + (ulong)*(byte *)(lVar11 + 0xe) * 8);
        do {
          lVar10 = *plVar16;
          puVar1 = (uint *)(lVar10 + 8);
          if (*puVar1 == 4) {
LAB_0055cecc:
            if (*(byte *)(lVar10 + 0xc) < 6) {
              pcVar12 = *(code **)(lVar10 + 0x18);
              if (*(byte *)(lVar10 + 0xc) == 5) {
                (*pcVar12)();
                goto LAB_0055ce94;
              }
              pcVar2 = pcVar12 + 8;
              if (*(uint *)pcVar2 != 4) {
                do {
                  uVar4 = *(uint *)pcVar2;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar9) {
                    *(uint *)pcVar2 = uVar4 - 4;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055ce90;
              }
              if ((byte)pcVar12[0xc] < 6) {
                (**(code **)(pcVar12 + 0x18))(pcVar12);
              }
              else {
                __ZdlPv(pcVar12);
              }
            }
LAB_0055ce90:
            __ZdlPv(lVar10);
          }
          else {
            do {
              uVar4 = *puVar1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = uVar4 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cecc;
          }
LAB_0055ce94:
          plVar16 = plVar16 + 1;
        } while (plVar16 != (long *)(lVar11 + 0x10 + (ulong)(uint)bVar6 * 8));
        if (lVar11 == 0) goto LAB_0055ce28;
      }
      __ZdlPv(lVar11);
    }
    else {
      do {
        uVar4 = *puVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar4 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055ce60;
    }
LAB_0055ce28:
    plVar15 = plVar15 + 1;
  } while (plVar15 != plVar3);
  goto LAB_0055d090;
LAB_0055cf54:
  do {
    lVar11 = *plVar15;
    puVar1 = (uint *)(lVar11 + 8);
    if (*puVar1 == 4) {
LAB_0055cf80:
      bVar6 = *(byte *)(lVar11 + 0xf);
      if ((uint)*(byte *)(lVar11 + 0xe) != (uint)bVar6) {
        plVar16 = (long *)(lVar11 + 0x10 + (ulong)*(byte *)(lVar11 + 0xe) * 8);
        do {
          puVar1 = (uint *)(*plVar16 + 8);
          if (*puVar1 == 4) {
LAB_0055cfa0:
            FUN_0055cdc0();
          }
          else {
            do {
              uVar4 = *puVar1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = uVar4 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cfa0;
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != (long *)(lVar11 + 0x10 + (ulong)(uint)bVar6 * 8));
        if (lVar11 == 0) goto LAB_0055cf48;
      }
      __ZdlPv(lVar11);
    }
    else {
      do {
        uVar4 = *puVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar4 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cf80;
    }
LAB_0055cf48:
    plVar15 = plVar15 + 1;
  } while (plVar15 != plVar3);
  goto LAB_0055d090;
LAB_0055d000:
  do {
    lVar11 = *plVar15;
    puVar1 = (uint *)(lVar11 + 8);
    if (*puVar1 == 4) {
LAB_0055d02c:
      if (*(byte *)(lVar11 + 0xc) < 6) {
        pcVar12 = *(code **)(lVar11 + 0x18);
        if (*(byte *)(lVar11 + 0xc) == 5) {
          (*pcVar12)();
          goto LAB_0055cff4;
        }
        pcVar2 = pcVar12 + 8;
        if (*(uint *)pcVar2 != 4) {
          do {
            uVar4 = *(uint *)pcVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar9) {
              *(uint *)pcVar2 = uVar4 - 4;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055cff0;
        }
        if ((byte)pcVar12[0xc] < 6) {
          (**(code **)(pcVar12 + 0x18))(pcVar12);
        }
        else {
          __ZdlPv(pcVar12);
        }
      }
LAB_0055cff0:
      __ZdlPv(lVar11);
    }
    else {
      do {
        uVar4 = *puVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = uVar4 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055d02c;
    }
LAB_0055cff4:
    plVar15 = plVar15 + 1;
  } while (plVar15 != plVar3);
LAB_0055d090:
  if (unaff_x19 == 0) {
    return;
  }
code_r0x0077a058:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(unaff_x19);
  return;
}



/* Entry: 00557cfc; end: 0055805b;  */

byte * FUN_00557cfc(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  
  iVar12 = (int)param_3;
  if ((*param_1 & 1) == 0) {
    if (0xf < param_3) goto LAB_00557e58;
  }
  else {
    puVar18 = *(ulong **)(param_1 + 8);
    if (0xf < param_3) {
      if (puVar18 != (ulong *)0x0) {
        lVar14 = *(long *)param_1;
        lVar10 = lVar14 + -1;
        if (lVar10 == 0) {
          bVar7 = *(byte *)((long)puVar18 + 0xc);
        }
        else {
          FUN_0055b3ec(lVar10,6);
          bVar7 = *(byte *)((long)puVar18 + 0xc);
        }
        if (5 < bVar7) {
          uVar13 = (uint)bVar7;
          uVar15 = 6;
          if (0xba < uVar13) {
            uVar15 = 0xc;
          }
          iVar12 = -0xe8d;
          if (0xba < uVar13) {
            iVar12 = -0xb800d;
          }
          uVar3 = 3;
          if (0x42 < uVar13) {
            uVar3 = uVar15;
          }
          iVar4 = -0x1d;
          if (0x42 < uVar13) {
            iVar4 = iVar12;
          }
          if ((param_3 <= (ulong)(long)(int)((uVar13 << (ulong)uVar3) + iVar4)) &&
             ((puVar18[1] & 0xfffffffd) == 4)) {
            _memmove((long)puVar18 + 0xd);
            *puVar18 = param_3;
            if (lVar10 != 0) {
              func_0x0055b518();
              return param_1;
            }
            return param_1;
          }
        }
        FUN_00557a00(param_2,param_3);
        *(byte **)(param_1 + 8) = param_2;
        if (lVar10 != 0) {
          *(byte **)(lVar14 + 0x3f) = param_2;
        }
        puVar2 = puVar18 + 1;
        do {
          uVar11 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *(uint *)puVar2 = (uint)uVar11 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (((uint)uVar11 & 0xfffffff9) == 0) {
          func_0x0055b598(puVar18);
        }
        if (lVar10 != 0) {
          func_0x0055b518();
          return param_1;
        }
        return param_1;
      }
LAB_00557e58:
      FUN_00557a00(param_2,param_3);
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(byte **)(param_1 + 8) = param_2;
      return param_1;
    }
    if (puVar18 != (ulong *)0x0) {
      if (*(long *)param_1 + -1 == 0) {
        *param_1 = (byte)(iVar12 << 1);
      }
      else {
        FUN_0055abd0(*(long *)param_1 + -1);
        *param_1 = (byte)(iVar12 << 1);
      }
      if (param_3 < 8) {
        if (param_3 < 4) {
          if (param_3 != 0) {
            param_1[1] = *param_2;
            param_1[(param_3 >> 1) + 1] = param_2[param_3 >> 1];
            param_1[param_3] = param_2[param_3 - 1];
          }
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          pbVar1 = param_1 + param_3 + 1;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        else {
          uVar5 = *(undefined4 *)param_2;
          uVar6 = *(undefined4 *)(param_2 + (param_3 - 4));
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          *(undefined4 *)(param_1 + 1) = uVar5;
          *(undefined4 *)(param_1 + (param_3 - 3)) = uVar6;
        }
      }
      else {
        uVar16 = *(undefined8 *)param_2;
        uVar17 = *(undefined8 *)(param_2 + (param_3 - 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined8 *)(param_1 + 1) = uVar16;
        *(undefined8 *)(param_1 + (param_3 - 7)) = uVar17;
      }
      puVar2 = puVar18 + 1;
      do {
        uVar11 = *puVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *(uint *)puVar2 = (uint)uVar11 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (((uint)uVar11 & 0xfffffff9) == 0) {
        func_0x0055b598(puVar18);
        return param_1;
      }
      return param_1;
    }
  }
  *param_1 = (byte)(iVar12 << 1);
  if (7 < param_3) {
    uVar16 = *(undefined8 *)param_2;
    uVar17 = *(undefined8 *)(param_2 + (param_3 - 8));
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined8 *)(param_1 + 1) = uVar16;
    *(undefined8 *)(param_1 + (param_3 - 7)) = uVar17;
    return param_1;
  }
  if (3 < param_3) {
    uVar5 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + (param_3 - 4));
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)(param_1 + (param_3 - 3)) = uVar6;
    return param_1;
  }
  if (param_3 != 0) {
    param_1[1] = *param_2;
    param_1[(param_3 >> 1) + 1] = param_2[param_3 >> 1];
    param_1[param_3] = param_2[param_3 - 1];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pbVar1 = param_1 + param_3 + 1;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  return param_1;
}



/* Entry: 0055805c; end: 0055870f;  */

void FUN_0055805c(byte *param_1,long param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong *unaff_x22;
  ulong *puVar19;
  ulong uVar20;
  long lStack_c0;
  undefined8 auStack_b8 [12];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar8 = *param_1;
  if ((((bVar8 & 1) != 0) && (unaff_x22 = *(ulong **)(param_1 + 8), unaff_x22 != (ulong *)0x0)) &&
     (*unaff_x22 == 0)) {
    if (*(long *)param_1 != 1) goto LAB_005586b4;
    goto LAB_00558600;
  }
  do {
    if (param_3 == 0) goto LAB_00558534;
    if (((bVar8 & 1) == 0) || (puVar19 = *(ulong **)(param_1 + 8), puVar19 == (ulong *)0x0)) {
      lStack_c0 = 0;
      uVar12 = (ulong)(long)(char)bVar8 >> 1;
      uVar10 = uVar12 + param_3;
      if (0xf - uVar12 < param_3) {
        uVar20 = uVar10;
        if (0xff2 < uVar10) {
          uVar20 = 0xff3;
        }
        uVar3 = 0x20;
        if (0x13 < uVar10) {
          uVar3 = uVar20 + 0xd;
        }
        uVar10 = 0xfffffffffffffff8;
        if (0x200 < uVar3) {
          uVar10 = 0xffffffffffffffc0;
        }
        lVar16 = 8;
        if (0x200 < uVar3) {
          lVar16 = 0x40;
        }
        puVar19 = (ulong *)((uVar3 + lVar16) - 1 & uVar10);
        unaff_x22 = puVar19;
        __Znwm();
        unaff_x22[1] = 4;
        bVar6 = section_000001f8.sectname + 8 < puVar19;
        lVar16 = 3;
        if (bVar6) {
          lVar16 = 6;
        }
        lVar7 = 2;
        if (bVar6) {
          lVar7 = 0x3a;
        }
        uVar10 = ((ulong)puVar19 >> lVar16) + lVar7;
        *(char *)((long)unaff_x22 + 0xc) = (char)uVar10;
        uVar9 = 3;
        if (0x42 < uVar10) {
          uVar9 = 6;
        }
        iVar11 = -0x1d;
        if (0x42 < uVar10) {
          iVar11 = -0xe8d;
        }
        uVar20 = (long)(((int)uVar10 << (ulong)uVar9) + iVar11) - uVar12;
        uVar10 = uVar20;
        if (param_3 <= uVar20) {
          uVar10 = param_3;
        }
        _memcpy((long)unaff_x22 + 0xd,param_1 + 1,uVar12);
        _memcpy((long)unaff_x22 + 0xd + uVar12,param_2,uVar10);
        *unaff_x22 = uVar10 + uVar12;
        if (uVar20 < param_3) {
          param_2 = param_2 + uVar10;
          param_3 = param_3 - uVar10;
          bVar6 = true;
          goto LAB_005584ac;
        }
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *(ulong **)(param_1 + 8) = unaff_x22;
      }
      else {
        *param_1 = (byte)((int)uVar10 << 1);
        _memcpy(param_1 + uVar12 + 1,param_2,param_3);
      }
    }
    else {
      lStack_c0 = *(long *)param_1 + -1;
      if (lStack_c0 == 0) {
        cVar4 = *(char *)((long)puVar19 + 0xc);
      }
      else {
        FUN_0055b3ec(lStack_c0,param_4);
        cVar4 = *(char *)((long)puVar19 + 0xc);
      }
      unaff_x22 = puVar19;
      if (cVar4 == '\x02') {
        unaff_x22 = (ulong *)puVar19[2];
        puVar15 = puVar19 + 1;
        if ((*puVar15 & 0xfffffffd) == 4) {
          FUN_0055ee1c(puVar19 + 3);
          __ZdlPv(puVar19);
        }
        else {
          puVar17 = unaff_x22 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar17,0x10);
            if (bVar6) {
              *(int *)puVar17 = (int)*puVar17 + 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            uVar10 = *puVar15;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar6) {
              *(uint *)puVar15 = (uint)uVar10 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (((uint)uVar10 & 0xfffffff9) == 0) {
            func_0x0055b598(puVar19);
          }
        }
      }
      bVar8 = *(byte *)((long)unaff_x22 + 0xc);
      if (bVar8 == 3) {
        if ((unaff_x22[1] & 0xfffffffd) != 4) {
LAB_00558438:
          bVar8 = *(byte *)((long)unaff_x22 + 0xc);
          goto LAB_0055843c;
        }
        bVar8 = *(byte *)((long)unaff_x22 + 0xd);
        uVar10 = (ulong)bVar8;
        puVar19 = unaff_x22;
        if (1 < bVar8) {
          if (bVar8 != 2) {
            if (bVar8 != 3) goto LAB_00558378;
            puVar19 = (ulong *)unaff_x22[(ulong)*(byte *)((long)unaff_x22 + 0xf) + 1];
            if ((puVar19[1] & 0xfffffffd) != 4) goto LAB_00558438;
          }
          puVar15 = (ulong *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
          if ((puVar15[1] & 0xfffffffd) == 4) {
LAB_005582b8:
            puVar17 = (ulong *)puVar15[(ulong)*(byte *)((long)puVar15 + 0xf) + 1];
            if ((puVar17[1] & 0xfffffffd) == 4) goto LAB_005582d8;
          }
          goto LAB_00558438;
        }
        puVar15 = unaff_x22;
        puVar17 = unaff_x22;
        if (bVar8 == 0) {
LAB_005582d8:
          plVar13 = (long *)puVar17[(ulong)*(byte *)((long)puVar17 + 0xf) + 1];
          if (((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4) &&
             (bVar5 = *(byte *)((long)plVar13 + 0xc), 5 < bVar5)) {
            uVar9 = 6;
            if (0xba < bVar5) {
              uVar9 = 0xc;
            }
            iVar11 = -0xe8d;
            if (0xba < bVar5) {
              iVar11 = -0xb800d;
            }
            uVar14 = (uint)bVar5;
            uVar1 = 3;
            if (0x42 < uVar14) {
              uVar1 = uVar9;
            }
            iVar2 = -0x1d;
            if (0x42 < uVar14) {
              iVar2 = iVar11;
            }
            lVar16 = *plVar13;
            uVar12 = (int)((uVar14 << (ulong)uVar1) + iVar2) - lVar16;
            if (uVar12 != 0) {
              if (param_3 <= uVar12) {
                uVar12 = param_3;
              }
              lVar7 = (long)plVar13 + lVar16 + 0xd;
              *plVar13 = uVar12 + lVar16;
              if (bVar8 < 2) {
                if (bVar8 != 0) goto LAB_00558594;
              }
              else {
                if (bVar8 != 2) {
                  *unaff_x22 = *unaff_x22 + uVar12;
                }
                *puVar19 = *puVar19 + uVar12;
LAB_00558594:
                *puVar15 = *puVar15 + uVar12;
              }
              *puVar17 = *puVar17 + uVar12;
              goto LAB_00558434;
            }
          }
          goto LAB_00558438;
        }
        if (bVar8 == 1) goto LAB_005582b8;
LAB_00558378:
        uVar12 = 0;
        do {
          puVar19 = (ulong *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
          if ((puVar19[1] & 0xfffffffd) != 4) goto LAB_0055842c;
          auStack_b8[uVar12] = puVar19;
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
        plVar13 = (long *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
        if (((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4) &&
           (bVar8 = *(byte *)((long)plVar13 + 0xc), 5 < bVar8)) {
          uVar9 = 6;
          if (0xba < bVar8) {
            uVar9 = 0xc;
          }
          iVar11 = -0xe8d;
          if (0xba < bVar8) {
            iVar11 = -0xb800d;
          }
          uVar14 = (uint)bVar8;
          uVar1 = 3;
          if (0x42 < uVar14) {
            uVar1 = uVar9;
          }
          iVar2 = -0x1d;
          if (0x42 < uVar14) {
            iVar2 = iVar11;
          }
          lVar16 = *plVar13;
          uVar12 = (int)((uVar14 << (ulong)uVar1) + iVar2) - lVar16;
          if (uVar12 != 0) {
            if (param_3 <= uVar12) {
              uVar12 = param_3;
            }
            *plVar13 = uVar12 + lVar16;
            *unaff_x22 = *unaff_x22 + uVar12;
            puVar18 = auStack_b8;
            do {
              *(long *)*puVar18 = *(long *)*puVar18 + uVar12;
              uVar10 = uVar10 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar10 != 0);
            lVar7 = (long)plVar13 + lVar16 + 0xd;
            goto LAB_00558434;
          }
        }
LAB_0055842c:
        uVar12 = 0;
        lVar7 = 0;
LAB_00558434:
        if (uVar12 == 0) goto LAB_00558438;
LAB_00558514:
        _memcpy(lVar7,param_2,uVar12);
        param_3 = param_3 - uVar12;
        if (param_3 != 0) {
          bVar6 = false;
          param_2 = param_2 + uVar12;
          goto LAB_005584ac;
        }
        *(ulong **)(param_1 + 8) = unaff_x22;
LAB_0055852c:
        if (lStack_c0 == 0) goto LAB_00558534;
        *(ulong **)(lStack_c0 + 0x40) = unaff_x22;
      }
      else {
LAB_0055843c:
        if ((5 < bVar8) && ((unaff_x22[1] & 0xfffffffd) == 4)) {
          uVar10 = *unaff_x22;
          bVar8 = *(byte *)((long)unaff_x22 + 0xc);
          uVar9 = 6;
          if (0xba < bVar8) {
            uVar9 = 0xc;
          }
          iVar11 = -0xe8d;
          if (0xba < bVar8) {
            iVar11 = -0xb800d;
          }
          uVar1 = 3;
          if (0x42 < bVar8) {
            uVar1 = uVar9;
          }
          iVar2 = -0x1d;
          if (0x42 < bVar8) {
            iVar2 = iVar11;
          }
          uVar20 = (long)(int)(((uint)bVar8 << (ulong)uVar1) + iVar2) - uVar10;
          if (uVar20 != 0) {
            uVar12 = param_3;
            if (uVar20 <= param_3) {
              uVar12 = uVar20;
            }
            *unaff_x22 = uVar12 + uVar10;
            lVar7 = (long)unaff_x22 + uVar10 + 0xd;
            goto LAB_00558514;
          }
        }
        bVar6 = false;
LAB_005584ac:
        FUN_005576a4();
        param_4 = (ulong *)0x0;
        if (param_3 <= *unaff_x22 / 10) {
          param_4 = (ulong *)(*unaff_x22 / 10 - param_3);
        }
        func_0x0055c258();
        *(ulong **)(param_1 + 8) = unaff_x22;
        if (!bVar6) goto LAB_0055852c;
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        if (lStack_c0 == 0) goto LAB_00558534;
      }
      FUN_0055b518();
    }
LAB_00558534:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
LAB_005586b4:
    FUN_0055abd0();
LAB_00558600:
    puVar19 = unaff_x22 + 1;
    do {
      uVar10 = *puVar19;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar19,0x10);
      if (bVar6) {
        *(uint *)puVar19 = (uint)uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)uVar10 & 0xfffffff9) == 0) {
      func_0x0055b598(unaff_x22);
      bVar8 = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      unaff_x22 = param_4;
    }
    else {
      bVar8 = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  } while( true );
}



/* Entry: 00558710; end: 00558cb3;  */

void FUN_00558710(ulong *param_1,byte *param_2,ulong param_3,ulong param_4,long *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  byte bVar11;
  long lVar12;
  bool bVar13;
  long *plVar14;
  undefined8 *puVar15;
  char cVar16;
  byte bVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  byte *pbVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  
  bVar17 = *param_2;
  uVar24 = (ulong)(char)bVar17;
  if (((uVar24 & 1) == 0) || (plVar14 = *(long **)(param_2 + 8), plVar14 == (long *)0x0)) {
    uVar25 = uVar24 >> 1;
    uVar2 = param_4 + uVar25;
    if (CARRY8(param_4,uVar25)) {
      uVar2 = 0xffffffffffffffff;
    }
    if (param_3 == 0) {
      if (uVar2 < 0x10) {
        *(byte *)param_1 = 1;
        pbVar1 = (byte *)((long)param_1 + 1);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        param_1[1] = 0;
        pbVar1 = (byte *)((long)param_1 + 1);
        goto joined_r0x00558884;
      }
      uVar7 = uVar2;
      if (0xff2 < uVar2) {
        uVar7 = 0xff3;
      }
      uVar8 = 0x20;
      if (0x13 < uVar2) {
        uVar8 = uVar7 + 0xd;
      }
      uVar2 = 0xfffffffffffffff8;
      if (0x200 < uVar8) {
        uVar2 = 0xffffffffffffffc0;
      }
      lVar12 = 8;
      if (0x200 < uVar8) {
        lVar12 = 0x40;
      }
      puVar23 = (undefined8 *)((uVar8 + lVar12) - 1 & uVar2);
      puVar15 = puVar23;
      __Znwm();
      bVar13 = section_000001f8.sectname + 8 < puVar23;
      lVar12 = 3;
      if (bVar13) {
        lVar12 = 6;
      }
      cVar16 = (char)((ulong)puVar23 >> lVar12);
      cVar19 = ':';
    }
    else {
      uVar7 = uVar2;
      if (0xffff < uVar2) {
        uVar7 = 0x10000;
      }
      if (0xffff < param_3) {
        param_3 = 0x10000;
      }
      if ((((uVar7 + 0xd < param_3) && (param_3 = uVar7 + 0xd, 0xff3 < uVar2)) &&
          (param_3 = uVar2, (uVar7 & uVar7 - 1) != 0)) &&
         (param_3 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU), 0x80 < (param_3 - uVar7) - 0xd)) {
        param_3 = 1L << ((LZCOUNT(uVar7) ^ 0x3fU) & 0x3f);
      }
      param_3 = param_3 - 0xd;
      uVar2 = param_3;
      if (0x3fff2 < param_3) {
        uVar2 = 0x3fff3;
      }
      uVar7 = 0x20;
      if (0x13 < param_3) {
        uVar7 = uVar2 + 0xd;
      }
      lVar12 = 0x40;
      if (0x2000 < uVar7) {
        lVar12 = 0x1000;
      }
      lVar18 = 8;
      if (0x200 < uVar7) {
        lVar18 = lVar12;
      }
      puVar23 = (undefined8 *)((uVar7 + lVar18) - 1 & -lVar18);
      puVar15 = puVar23;
      __Znwm();
      lVar12 = 6;
      if (&dylib_command_00001ff0.dylib.current_version < puVar23) {
        lVar12 = 0xc;
      }
      cVar19 = ':';
      if (&dylib_command_00001ff0.dylib.current_version < puVar23) {
        cVar19 = -0x48;
      }
      bVar13 = section_000001f8.sectname + 8 < puVar23;
      lVar18 = 3;
      if (bVar13) {
        lVar18 = lVar12;
      }
      cVar16 = (char)((ulong)puVar23 >> lVar18);
    }
    cVar3 = '\x02';
    if (bVar13) {
      cVar3 = cVar19;
    }
    puVar15[1] = 4;
    *puVar15 = 0;
    *(char *)((long)puVar15 + 0xc) = cVar16 + cVar3;
    *param_1 = (ulong)puVar15;
    pbVar1 = (byte *)((long)puVar15 + 0xd);
    if (((ulong)puVar15 & 1) != 0) {
      pbVar1 = (byte *)((long)param_1 + 1);
    }
joined_r0x00558884:
    if (bVar17 < 0x10) {
      pbVar21 = param_2 + 1;
      if (bVar17 < 8) {
        if (1 < bVar17) {
          *pbVar1 = param_2[1];
          pbVar1[uVar24 >> 2] = pbVar21[uVar24 >> 2];
          pbVar1[uVar25 - 1] = param_2[uVar25];
        }
        bVar11 = (byte)*param_1;
      }
      else {
        uVar10 = *(undefined4 *)(pbVar21 + (uVar25 - 4));
        *(undefined4 *)pbVar1 = *(undefined4 *)pbVar21;
        *(undefined4 *)(pbVar1 + (uVar25 - 4)) = uVar10;
        bVar11 = (byte)*param_1;
      }
    }
    else {
      uVar22 = *(undefined8 *)(param_2 + 1 + (uVar25 - 8));
      *(undefined8 *)pbVar1 = *(undefined8 *)(param_2 + 1);
      *(undefined8 *)(pbVar1 + (uVar25 - 8)) = uVar22;
      bVar11 = (byte)*param_1;
    }
    if ((bVar11 & 1) == 0) {
      *(ulong *)*param_1 = uVar25;
    }
    else {
      *(byte *)param_1 = bVar17 | 1;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    return;
  }
  lVar18 = *(long *)param_2;
  lVar12 = lVar18 + -1;
  if (lVar12 == 0) {
    bVar17 = *(byte *)((long)plVar14 + 0xc);
    if (bVar17 == 3) goto LAB_00558764;
LAB_00558a20:
    if ((bVar17 < 6) || ((*(uint *)(plVar14 + 1) & 0xfffffffd) != 4)) {
LAB_00558a90:
      param_5 = (long *)0x0;
    }
    else {
      bVar17 = *(byte *)((long)plVar14 + 0xc);
      uVar20 = 6;
      if (0xba < bVar17) {
        uVar20 = 0xc;
      }
      iVar4 = -0xe8d;
      if (0xba < bVar17) {
        iVar4 = -0xb800d;
      }
      uVar5 = 3;
      if (0x42 < bVar17) {
        uVar5 = uVar20;
      }
      iVar6 = -0x1d;
      if (0x42 < bVar17) {
        iVar6 = iVar4;
      }
      if ((long *)((long)(int)(((uint)bVar17 << (ulong)uVar5) + iVar6) - *plVar14) < param_5)
      goto LAB_00558a90;
      param_5 = plVar14;
      plVar14 = (long *)0x0;
    }
  }
  else {
    FUN_0055b3ec(lVar12,0xc);
    bVar17 = *(byte *)((long)plVar14 + 0xc);
    if (bVar17 != 3) goto LAB_00558a20;
LAB_00558764:
    FUN_0055e184();
  }
  if (param_5 == (long *)0x0) {
    if (param_3 == 0) {
      if (param_4 < 0x10) {
        *(byte *)param_1 = 1;
        pbVar1 = (byte *)((long)param_1 + 1);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        param_1[1] = 0;
        goto joined_r0x00558c90;
      }
      uVar24 = param_4;
      if (0xff2 < param_4) {
        uVar24 = 0xff3;
      }
      uVar2 = 0x20;
      if (0x13 < param_4) {
        uVar2 = uVar24 + 0xd;
      }
      uVar24 = 0xfffffffffffffff8;
      if (0x200 < uVar2) {
        uVar24 = 0xffffffffffffffc0;
      }
      lVar18 = 8;
      if (0x200 < uVar2) {
        lVar18 = 0x40;
      }
      puVar23 = (undefined8 *)((uVar2 + lVar18) - 1 & uVar24);
      puVar15 = puVar23;
      __Znwm();
      bVar13 = section_000001f8.sectname + 8 < puVar23;
      lVar18 = 3;
      if (bVar13) {
        lVar18 = 6;
      }
      cVar16 = (char)((ulong)puVar23 >> lVar18);
      cVar19 = ':';
    }
    else {
      uVar24 = param_4;
      if (0xffff < param_4) {
        uVar24 = 0x10000;
      }
      if (0xffff < param_3) {
        param_3 = 0x10000;
      }
      if (((uVar24 + 0xd < param_3) && (param_3 = uVar24 + 0xd, 0xff3 < param_4)) &&
         (param_3 = param_4, (uVar24 & uVar24 - 1) != 0)) {
        param_3 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
        if (0x80 < (param_3 - uVar24) - 0xd) {
          param_3 = 1L << ((LZCOUNT(uVar24) ^ 0x3fU) & 0x3f);
        }
      }
      param_3 = param_3 - 0xd;
      uVar24 = param_3;
      if (0x3fff2 < param_3) {
        uVar24 = 0x3fff3;
      }
      uVar2 = 0x20;
      if (0x13 < param_3) {
        uVar2 = uVar24 + 0xd;
      }
      lVar18 = 0x40;
      if (0x2000 < uVar2) {
        lVar18 = 0x1000;
      }
      lVar9 = 8;
      if (0x200 < uVar2) {
        lVar9 = lVar18;
      }
      puVar23 = (undefined8 *)((uVar2 + lVar9) - 1 & -lVar9);
      puVar15 = puVar23;
      __Znwm();
      lVar18 = 6;
      if (&dylib_command_00001ff0.dylib.current_version < puVar23) {
        lVar18 = 0xc;
      }
      cVar19 = ':';
      if (&dylib_command_00001ff0.dylib.current_version < puVar23) {
        cVar19 = -0x48;
      }
      bVar13 = section_000001f8.sectname + 8 < puVar23;
      lVar9 = 3;
      if (bVar13) {
        lVar9 = lVar18;
      }
      cVar16 = (char)((ulong)puVar23 >> lVar9);
    }
    cVar3 = '\x02';
    if (bVar13) {
      cVar3 = cVar19;
    }
    puVar15[1] = 4;
    *puVar15 = 0;
    *(char *)((long)puVar15 + 0xc) = cVar16 + cVar3;
    *param_1 = (ulong)puVar15;
  }
  else {
    if (plVar14 == (long *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    else {
      *(long **)(param_2 + 8) = plVar14;
    }
    if (lVar12 != 0) {
      *(long **)(lVar18 + 0x3f) = plVar14;
    }
    *param_1 = (ulong)param_5;
  }
joined_r0x00558c90:
  if (lVar12 != 0) {
    FUN_0055b518();
  }
  return;
}



/* Entry: 00558cb4; end: 00559313;  */

void FUN_00558cb4(qword *param_1,qword *param_2)

{
  qword *pqVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  segment_command *psVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  qword qVar10;
  byte *pbVar11;
  ulong *puVar12;
  byte bVar13;
  uint uVar14;
  qword qVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  qword qVar22;
  uint uVar23;
  ulong *puVar24;
  long lVar25;
  ulong *puVar26;
  long *plVar27;
  ulong uVar28;
  qword *unaff_x20;
  ulong *unaff_x22;
  ulong *puVar29;
  qword *pqVar30;
  qword *pqVar31;
  qword qStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  qword *pqStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte abStack_c4 [4];
  long alStack_c0 [13];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar13 = (byte)*param_1;
  if ((((bVar13 & 1) != 0) && (unaff_x20 = (qword *)param_1[1], unaff_x20 != (qword *)0x0)) &&
     (*unaff_x20 == 0)) {
    if (*param_1 != 1) goto LAB_005592b4;
    goto LAB_00558d1c;
  }
  uVar16 = (ulong)(char)(byte)*param_2;
  if ((uVar16 & 1) != 0) goto LAB_00558d48;
LAB_00558d04:
  if (uVar16 >> 1 != 0) goto LAB_00558d54;
LAB_00558e38:
  do {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
LAB_005592b0:
    while( true ) {
      ___stack_chk_fail();
LAB_005592b4:
      FUN_0055abd0();
LAB_00558d1c:
      pqVar30 = unaff_x20 + 1;
      do {
        qVar15 = *pqVar30;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pqVar30,0x10);
        if (bVar9) {
          *(uint *)pqVar30 = (uint)qVar15 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (((uint)qVar15 & 0xfffffff9) == 0) {
        func_0x0055b598(unaff_x20);
        *param_1 = 0;
        param_1[1] = 0;
        bVar13 = (byte)*param_2;
        unaff_x20 = param_2;
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        bVar13 = (byte)*param_2;
      }
      uVar16 = (ulong)(char)bVar13;
      bVar13 = 0;
      if ((uVar16 & 1) == 0) goto LAB_00558d04;
LAB_00558d48:
      if (*(long *)param_2[1] == 0) goto LAB_00558e38;
LAB_00558d54:
      if ((bVar13 & 1) == 0) {
        uVar21 = (ulong)(long)(char)bVar13 >> 1;
      }
      else {
        uVar21 = *(ulong *)param_1[1];
      }
      if (uVar21 == 0) {
        if ((uVar16 & 1) == 0) {
          qVar15 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = qVar15;
        }
        else {
          unaff_x20 = (qword *)param_2[1];
          if (*param_2 - 1 == 0) {
            *param_2 = 0;
            param_2[1] = 0;
            bVar13 = *(byte *)((long)unaff_x20 + 0xc);
          }
          else {
            pqVar30 = param_2;
            FUN_0055abd0(*param_2 - 1);
            *param_2 = 0;
            param_2[1] = 0;
            bVar13 = *(byte *)((long)unaff_x20 + 0xc);
            param_2 = pqVar30;
          }
          pqVar30 = unaff_x20;
          if (bVar13 == 2) {
            pqVar30 = (qword *)unaff_x20[2];
            pqVar31 = unaff_x20 + 1;
            if ((*pqVar31 & 0xfffffffd) == 4) {
              FUN_0055ee1c(unaff_x20 + 3);
              __ZdlPv(unaff_x20);
            }
            else {
              pqVar1 = pqVar30 + 1;
              do {
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
                if (bVar9) {
                  *(int *)pqVar1 = (int)*pqVar1 + 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              do {
                qVar15 = *pqVar31;
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(pqVar31,0x10);
                if (bVar9) {
                  *(uint *)pqVar31 = (uint)qVar15 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (((uint)qVar15 & 0xfffffff9) == 0) {
                func_0x0055b598(unaff_x20);
              }
            }
          }
          *param_1 = 1;
          param_1[1] = (qword)pqVar30;
        }
        goto LAB_00558e38;
      }
      if ((uVar16 & 1) != 0) break;
      if ((int)(uint)uVar16 < 0) {
        pqVar30 = (qword *)0x0;
LAB_00558e94:
        *param_2 = 0;
        param_2[1] = 0;
        if (*(byte *)((long)pqVar30 + 0xc) == 2) {
          param_2 = (qword *)pqVar30[2];
          pqVar31 = pqVar30 + 1;
          if ((*pqVar31 & 0xfffffffd) == 4) {
            FUN_0055ee1c(pqVar30 + 3);
            __ZdlPv(pqVar30);
            bVar13 = (byte)*param_1;
            unaff_x20 = pqVar30;
          }
          else {
            pqVar1 = param_2 + 1;
            do {
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
              if (bVar9) {
                *(int *)pqVar1 = (int)*pqVar1 + 4;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              qVar15 = *pqVar31;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pqVar31,0x10);
              if (bVar9) {
                *(uint *)pqVar31 = (uint)qVar15 - 4;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (((uint)qVar15 & 0xfffffff9) == 0) {
              func_0x0055b598(pqVar30);
              bVar13 = (byte)*param_1;
            }
            else {
              bVar13 = (byte)*param_1;
            }
          }
        }
        else {
          bVar13 = (byte)*param_1;
          param_2 = pqVar30;
        }
        if ((bVar13 & 1) == 0) {
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
            bVar13 = (byte)*param_1;
            pqVar30 = param_2;
            if ((long)(char)bVar13 != 0) {
              uVar21 = (ulong)(long)(char)bVar13 >> 1;
              uVar16 = uVar21;
              if (0xff2 < uVar21) {
                uVar16 = 0xff3;
              }
              uVar28 = 0x20;
              if (0x27 < bVar13) {
                uVar28 = uVar16 + 0xd;
              }
              uVar16 = 0xfffffffffffffff8;
              if (0x200 < uVar28) {
                uVar16 = 0xffffffffffffffc0;
              }
              lVar25 = 8;
              if (0x200 < uVar28) {
                lVar25 = 0x40;
              }
              pqVar31 = (qword *)((uVar28 + lVar25) - 1 & uVar16);
              pqVar30 = pqVar31;
              __Znwm();
              *(undefined4 *)(pqVar30 + 1) = 4;
              bVar9 = section_000001f8.sectname + 8 < pqVar31;
              lVar25 = 3;
              if (bVar9) {
                lVar25 = 6;
              }
              lVar18 = 2;
              if (bVar9) {
                lVar18 = 0x3a;
              }
              uVar16 = ((ulong)pqVar31 >> lVar25) + lVar18;
              *(byte *)((long)pqVar30 + 0xc) = (byte)uVar16;
              *pqVar30 = uVar21;
              *(undefined8 *)((long)pqVar30 + 0xd) = *(undefined8 *)((long)param_1 + 1);
              *(qword *)((long)pqVar30 + 0x14) = param_1[1];
              if (uVar16 < 5) {
                if (uVar16 != 3) {
                  func_0x0055e3b0(&stack0xffffffffffffffb0,pqVar30,0,uVar21);
                  pqVar30 = (qword *)0x0;
                }
              }
              else {
                pqVar31 = &segment_command_00000020.vmsize;
                __Znwm();
                *(undefined4 *)(pqVar31 + 1) = 4;
                *pqVar31 = uVar21;
                pbVar17 = (byte *)((long)pqVar31 + 0xc);
                pbVar17[0] = 3;
                pbVar17[1] = 0;
                pbVar17[2] = 0;
                pbVar17[3] = 1;
                pqVar31[2] = (qword)pqVar30;
                pqVar30 = pqVar31;
              }
              if ((*(byte *)((long)param_2 + 0xc) < 5) &&
                 ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
                func_0x0055db74(pqVar30,param_2);
              }
              else {
                FUN_0055bb34(pqVar30,param_2);
              }
            }
            *param_1 = 1;
            param_1[1] = (qword)pqVar30;
            return;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
          qVar15 = *param_1;
          lVar25 = qVar15 - 1;
          if (lVar25 != 0) {
            FUN_0055b3ec(lVar25,1);
          }
          qVar10 = param_1[1];
          FUN_005576a4();
          if ((*(byte *)((long)param_2 + 0xc) < 5) &&
             ((*(byte *)((long)param_2 + 0xc) != 1 || (*(byte *)(param_2[3] + 0xc) < 5)))) {
            func_0x0055db74();
          }
          else {
            FUN_0055bb34();
          }
          param_1[1] = qVar10;
          if (lVar25 != 0) {
            *(qword *)(qVar15 + 0x3f) = qVar10;
            FUN_0055b518(lVar25);
          }
          return;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
        unaff_x20 = (qword *)(ulong)((uint)uVar16 >> 1 & 0x7f);
        pbVar17 = (byte *)((long)param_2 + 1);
        goto LAB_00558df0;
      }
    }
    pqVar30 = (qword *)param_2[1];
    unaff_x20 = (qword *)*pqVar30;
    if (section_000001f8.sectname + 7 < unaff_x20) {
      if (*param_2 - 1 != 0) {
        FUN_0055abd0(*param_2 - 1);
        unaff_x20 = pqVar30;
      }
      goto LAB_00558e94;
    }
    bVar13 = *(byte *)((long)pqVar30 + 0xc);
    if (5 < bVar13) goto code_r0x00558dcc;
    if (param_2 == param_1) {
      FUN_00559dfc(&qStack_f0);
      param_2 = &qStack_f0;
      FUN_00558cb4(param_1);
      FUN_00559454(&qStack_f0);
      goto LAB_00558e38;
    }
    uStack_e8 = 0;
    qStack_f0 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0xffffffff;
    lStack_d0 = 0;
    pqStack_d8 = unaff_x20;
  } while (unaff_x20 == (qword *)0x0);
  if (bVar13 == 2) {
    pqVar30 = (qword *)pqVar30[2];
    bVar13 = *(byte *)((long)pqVar30 + 0xc);
    if (bVar13 != 3) goto LAB_00559120;
LAB_00558f18:
    uVar16 = (ulong)*(byte *)((long)pqVar30 + 0xd);
    uStack_c8 = (uint)*(byte *)((long)pqVar30 + 0xd);
    bVar13 = *(byte *)((long)pqVar30 + 0xe);
    uVar21 = (ulong)bVar13;
    alStack_c0[uVar16 + 1] = (long)pqVar30;
    abStack_c4[uVar16] = bVar13;
    pqVar31 = pqVar30;
    if (uVar16 != 0) {
      do {
        pqVar31 = (qword *)pqVar31[uVar21 + 2];
        alStack_c0[uVar16] = (long)pqVar31;
        uVar21 = (ulong)*(byte *)((long)pqVar31 + 0xe);
        abStack_c4[uVar16 - 1] = *(byte *)((long)pqVar31 + 0xe);
        bVar9 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar9 && uVar16 != 0);
    }
    pqVar31 = *(qword **)(alStack_c0[1] + uVar21 * 8 + 0x10);
    qVar10 = *pqVar31;
    lStack_d0 = *pqVar30 - qVar10;
    bVar13 = *(byte *)((long)pqVar31 + 0xc);
    if (bVar13 == 1) {
      qVar15 = pqVar31[2];
      pqVar31 = (qword *)pqVar31[3];
      bVar13 = *(byte *)((long)pqVar31 + 0xc);
    }
    else {
      qVar15 = 0;
    }
    if (bVar13 < 6) {
      qVar22 = pqVar31[2];
    }
    else {
      qVar22 = (long)pqVar31 + 0xd;
    }
    if (unaff_x20 == (qword *)0x0) goto LAB_00558e38;
    param_2 = (qword *)(qVar22 + qVar15);
    lVar25 = lStack_d0;
  }
  else {
    if (bVar13 == 3) goto LAB_00558f18;
LAB_00559120:
    if (bVar13 == 1) {
      qVar15 = pqVar30[2];
      bVar13 = *(byte *)((long)pqVar30[3] + 0xc);
      pqVar31 = (qword *)pqVar30[3];
    }
    else {
      qVar15 = 0;
      pqVar31 = pqVar30;
    }
    qVar10 = *pqVar30;
    if (bVar13 < 6) {
      pbVar17 = (byte *)pqVar31[2];
    }
    else {
      pbVar17 = (byte *)((long)pqVar31 + 0xd);
    }
    param_2 = (qword *)(pbVar17 + qVar15);
    lVar25 = lStack_d0;
  }
  do {
    while( true ) {
      pqVar30 = pqStack_d8;
      FUN_0055805c(param_1,param_2,qVar10,4);
      unaff_x20 = (qword *)((long)pqVar30 - qVar10);
      pqStack_d8 = unaff_x20;
      if (unaff_x20 == (qword *)0x0) goto LAB_00558e38;
      if (((-1 < (int)uStack_c8) && (alStack_c0[(ulong)uStack_c8 + 1] != 0)) && (lVar25 != 0))
      break;
      qVar10 = 0;
      param_2 = (qword *)0x0;
joined_r0x005592a8:
      if (unaff_x20 == (qword *)0x0) goto LAB_00558e38;
    }
    if ((ulong)*(byte *)(alStack_c0[1] + 0xf) - 1 == (ulong)abStack_c4[0]) {
      uVar21 = 0;
      do {
        uVar28 = uVar21;
        if (uStack_c8 == uVar28) {
          param_2 = (qword *)0x0;
          qVar10._0_4_ = 0xfeedfacf;
          qVar10._4_4_ = 0x100000c;
          lStack_d0 = lVar25 + -0x100000cfeedfacf;
          bVar13 = 6;
          goto LAB_00559290;
        }
        lVar18 = alStack_c0[uVar28 + 2];
        uVar16 = (ulong)abStack_c4[uVar28 + 1] + 1;
        uVar21 = uVar28 + 1;
      } while (uVar16 == *(byte *)(lVar18 + 0xf));
      abStack_c4[uVar28 + 1] = (byte)uVar16;
      lVar25 = (long)(int)(uVar28 + 1);
      do {
        lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x10);
        lVar8 = lVar25 + -1;
        alStack_c0[lVar25] = lVar18;
        uVar16 = (ulong)*(byte *)(lVar18 + 0xe);
        abStack_c4[lVar25 + -1] = *(byte *)(lVar18 + 0xe);
        bVar9 = 0 < lVar25;
        lVar25 = lVar8;
      } while (lVar8 != 0 && bVar9);
    }
    else {
      abStack_c4[0] = abStack_c4[0] + 1;
      uVar16 = (ulong)abStack_c4[0];
      lVar18 = alStack_c0[1];
      lStack_d0 = lVar25;
    }
    param_2 = *(qword **)(lVar18 + uVar16 * 8 + 0x10);
    qVar10 = *param_2;
    lStack_d0 = lStack_d0 - qVar10;
    bVar13 = *(byte *)((long)param_2 + 0xc);
    if (bVar13 == 1) {
      qVar15 = param_2[2];
      param_2 = (qword *)param_2[3];
      bVar13 = *(byte *)((long)param_2 + 0xc);
    }
    else {
LAB_00559290:
      qVar15 = 0;
    }
    lVar25 = lStack_d0;
    if (5 < bVar13) {
      param_2 = (qword *)((long)param_2 + qVar15 + 0xd);
      goto joined_r0x005592a8;
    }
    param_2 = (qword *)(param_2[2] + qVar15);
  } while (unaff_x20 != (qword *)0x0);
  goto LAB_00558e38;
code_r0x00558dcc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    pbVar17 = (byte *)((long)pqVar30 + 0xd);
LAB_00558df0:
    puVar12 = (ulong *)((long)&MACH_HEADER.magic + 1);
    lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
    bVar13 = (byte)*param_1;
    if ((((bVar13 & 1) != 0) && (unaff_x22 = (ulong *)param_1[1], unaff_x22 != (ulong *)0x0)) &&
       (*unaff_x22 == 0)) {
      if (*param_1 != 1) goto LAB_005586b4;
      goto LAB_00558600;
    }
    goto joined_r0x005580ac;
  }
  goto LAB_005592b0;
joined_r0x005580ac:
  if (unaff_x20 == (qword *)0x0) goto LAB_00558534;
  if (((bVar13 & 1) == 0) || (puVar29 = (ulong *)param_1[1], puVar29 == (ulong *)0x0)) {
    alStack_c0[0] = 0;
    uVar16 = (ulong)(long)(char)bVar13 >> 1;
    pbVar11 = (byte *)(uVar16 + (long)unaff_x20);
    if ((byte *)(0xf - uVar16) < unaff_x20) {
      pbVar4 = pbVar11;
      if ((byte *)((long)&section_00000fa8.reserved2 + 2) < pbVar11) {
        pbVar4 = (byte *)((long)&section_00000fa8.reserved2 + 3);
      }
      psVar5 = &segment_command_00000020;
      if ((byte *)((long)&MACH_HEADER.ncmds + 3) < pbVar11) {
        psVar5 = (segment_command *)(pbVar4 + 0xd);
      }
      bVar9 = (segment_command *)(section_000001f8.sectname + 8) < psVar5;
      uVar21 = 0xfffffffffffffff8;
      if (bVar9) {
        uVar21 = 0xffffffffffffffc0;
      }
      lVar25 = 8;
      if (bVar9) {
        lVar25 = 0x40;
      }
      puVar29 = (ulong *)((ulong)(psVar5->segname + lVar25 + -9) & uVar21);
      unaff_x22 = puVar29;
      __Znwm();
      unaff_x22[1] = 4;
      bVar9 = section_000001f8.sectname + 8 < puVar29;
      lVar25 = 3;
      if (bVar9) {
        lVar25 = 6;
      }
      lVar18 = 2;
      if (bVar9) {
        lVar18 = 0x3a;
      }
      uVar21 = ((ulong)puVar29 >> lVar25) + lVar18;
      *(byte *)((long)unaff_x22 + 0xc) = (byte)uVar21;
      uVar14 = 3;
      if (0x42 < uVar21) {
        uVar14 = 6;
      }
      iVar19 = -0x1d;
      if (0x42 < uVar21) {
        iVar19 = -0xe8d;
      }
      pqVar31 = (qword *)((long)(((int)uVar21 << (ulong)uVar14) + iVar19) - uVar16);
      pqVar30 = pqVar31;
      if (unaff_x20 <= pqVar31) {
        pqVar30 = unaff_x20;
      }
      _memcpy((byte *)((long)unaff_x22 + 0xd),(byte *)((long)param_1 + 1),uVar16);
      _memcpy((byte *)((long)unaff_x22 + 0xd) + uVar16,pbVar17,pqVar30);
      *unaff_x22 = (ulong)((long)pqVar30 + uVar16);
      if (pqVar31 < unaff_x20) {
        pbVar17 = pbVar17 + (long)pqVar30;
        unaff_x20 = (qword *)((long)unaff_x20 - (long)pqVar30);
        bVar9 = true;
        goto LAB_005584ac;
      }
      *param_1 = 1;
      param_1[1] = (qword)unaff_x22;
    }
    else {
      *(byte *)param_1 = (byte)((int)pbVar11 << 1);
      _memcpy((byte *)((long)param_1 + uVar16 + 1),pbVar17,unaff_x20);
    }
  }
  else {
    alStack_c0[0] = *param_1 - 1;
    if (alStack_c0[0] == 0) {
      bVar13 = *(byte *)((long)puVar29 + 0xc);
    }
    else {
      FUN_0055b3ec(alStack_c0[0],puVar12);
      bVar13 = *(byte *)((long)puVar29 + 0xc);
    }
    unaff_x22 = puVar29;
    if (bVar13 == 2) {
      unaff_x22 = (ulong *)puVar29[2];
      puVar24 = puVar29 + 1;
      if ((*puVar24 & 0xfffffffd) == 4) {
        FUN_0055ee1c(puVar29 + 3);
        __ZdlPv(puVar29);
      }
      else {
        puVar26 = unaff_x22 + 1;
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar26,0x10);
          if (bVar9) {
            *(int *)puVar26 = (int)*puVar26 + 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          uVar16 = *puVar24;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar24,0x10);
          if (bVar9) {
            *(uint *)puVar24 = (uint)uVar16 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (((uint)uVar16 & 0xfffffff9) == 0) {
          func_0x0055b598(puVar29);
        }
      }
    }
    bVar13 = *(byte *)((long)unaff_x22 + 0xc);
    if (bVar13 == 3) {
      if ((unaff_x22[1] & 0xfffffffd) != 4) {
LAB_00558438:
        bVar13 = *(byte *)((long)unaff_x22 + 0xc);
        goto LAB_0055843c;
      }
      bVar13 = *(byte *)((long)unaff_x22 + 0xd);
      uVar16 = (ulong)bVar13;
      puVar29 = unaff_x22;
      if (1 < bVar13) {
        if (bVar13 != 2) {
          if (bVar13 != 3) goto LAB_00558378;
          puVar29 = (ulong *)unaff_x22[(ulong)*(byte *)((long)unaff_x22 + 0xf) + 1];
          if ((puVar29[1] & 0xfffffffd) != 4) goto LAB_00558438;
        }
        puVar24 = (ulong *)puVar29[(ulong)*(byte *)((long)puVar29 + 0xf) + 1];
        if ((puVar24[1] & 0xfffffffd) == 4) {
LAB_005582b8:
          puVar26 = (ulong *)puVar24[(ulong)*(byte *)((long)puVar24 + 0xf) + 1];
          if ((puVar26[1] & 0xfffffffd) == 4) goto LAB_005582d8;
        }
        goto LAB_00558438;
      }
      puVar24 = unaff_x22;
      puVar26 = unaff_x22;
      if (bVar13 == 0) {
LAB_005582d8:
        plVar20 = (long *)puVar26[(ulong)*(byte *)((long)puVar26 + 0xf) + 1];
        if (((*(uint *)(plVar20 + 1) & 0xfffffffd) == 4) &&
           (bVar6 = *(byte *)((long)plVar20 + 0xc), 5 < bVar6)) {
          uVar14 = 6;
          if (0xba < bVar6) {
            uVar14 = 0xc;
          }
          iVar19 = -0xe8d;
          if (0xba < bVar6) {
            iVar19 = -0xb800d;
          }
          uVar23 = (uint)bVar6;
          uVar2 = 3;
          if (0x42 < uVar23) {
            uVar2 = uVar14;
          }
          iVar3 = -0x1d;
          if (0x42 < uVar23) {
            iVar3 = iVar19;
          }
          lVar25 = *plVar20;
          pqVar30 = (qword *)((int)((uVar23 << (ulong)uVar2) + iVar3) - lVar25);
          if (pqVar30 != (qword *)0x0) {
            if (unaff_x20 <= pqVar30) {
              pqVar30 = unaff_x20;
            }
            pbVar11 = (byte *)((long)plVar20 + lVar25 + 0xd);
            *plVar20 = (long)((long)pqVar30 + lVar25);
            if (bVar13 < 2) {
              if (bVar13 != 0) goto LAB_00558594;
            }
            else {
              if (bVar13 != 2) {
                *unaff_x22 = (ulong)(*unaff_x22 + (long)pqVar30);
              }
              *puVar29 = (ulong)(*puVar29 + (long)pqVar30);
LAB_00558594:
              *puVar24 = (ulong)(*puVar24 + (long)pqVar30);
            }
            *puVar26 = (ulong)(*puVar26 + (long)pqVar30);
            goto LAB_00558434;
          }
        }
        goto LAB_00558438;
      }
      if (bVar13 == 1) goto LAB_005582b8;
LAB_00558378:
      uVar21 = 0;
      do {
        puVar29 = (ulong *)puVar29[(ulong)*(byte *)((long)puVar29 + 0xf) + 1];
        if ((puVar29[1] & 0xfffffffd) != 4) goto LAB_0055842c;
        alStack_c0[uVar21 + 1] = (long)puVar29;
        uVar21 = uVar21 + 1;
      } while (uVar16 != uVar21);
      plVar20 = (long *)puVar29[(ulong)*(byte *)((long)puVar29 + 0xf) + 1];
      if (((*(uint *)(plVar20 + 1) & 0xfffffffd) == 4) &&
         (bVar13 = *(byte *)((long)plVar20 + 0xc), 5 < bVar13)) {
        uVar14 = 6;
        if (0xba < bVar13) {
          uVar14 = 0xc;
        }
        iVar19 = -0xe8d;
        if (0xba < bVar13) {
          iVar19 = -0xb800d;
        }
        uVar23 = (uint)bVar13;
        uVar2 = 3;
        if (0x42 < uVar23) {
          uVar2 = uVar14;
        }
        iVar3 = -0x1d;
        if (0x42 < uVar23) {
          iVar3 = iVar19;
        }
        lVar25 = *plVar20;
        pqVar30 = (qword *)((int)((uVar23 << (ulong)uVar2) + iVar3) - lVar25);
        if (pqVar30 != (qword *)0x0) {
          if (unaff_x20 <= pqVar30) {
            pqVar30 = unaff_x20;
          }
          *plVar20 = (long)((long)pqVar30 + lVar25);
          *unaff_x22 = (ulong)(*unaff_x22 + (long)pqVar30);
          plVar27 = alStack_c0;
          do {
            plVar27 = plVar27 + 1;
            *(long *)*plVar27 = (long)(*(long *)*plVar27 + (long)pqVar30);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          pbVar11 = (byte *)((long)plVar20 + lVar25 + 0xd);
          goto LAB_00558434;
        }
      }
LAB_0055842c:
      pqVar30 = (qword *)0x0;
      pbVar11 = (byte *)0x0;
LAB_00558434:
      if (pqVar30 == (qword *)0x0) goto LAB_00558438;
LAB_00558514:
      _memcpy(pbVar11,pbVar17,pqVar30);
      unaff_x20 = (qword *)((long)unaff_x20 - (long)pqVar30);
      if (unaff_x20 != (qword *)0x0) {
        bVar9 = false;
        pbVar17 = pbVar17 + (long)pqVar30;
        goto LAB_005584ac;
      }
      param_1[1] = (qword)unaff_x22;
LAB_0055852c:
      if (alStack_c0[0] == 0) goto LAB_00558534;
      *(ulong **)(alStack_c0[0] + 0x40) = unaff_x22;
    }
    else {
LAB_0055843c:
      if ((5 < bVar13) && ((unaff_x22[1] & 0xfffffffd) == 4)) {
        uVar16 = *unaff_x22;
        bVar13 = *(byte *)((long)unaff_x22 + 0xc);
        uVar14 = 6;
        if (0xba < bVar13) {
          uVar14 = 0xc;
        }
        iVar19 = -0xe8d;
        if (0xba < bVar13) {
          iVar19 = -0xb800d;
        }
        uVar2 = 3;
        if (0x42 < bVar13) {
          uVar2 = uVar14;
        }
        iVar3 = -0x1d;
        if (0x42 < bVar13) {
          iVar3 = iVar19;
        }
        pqVar31 = (qword *)((long)(int)(((uint)bVar13 << (ulong)uVar2) + iVar3) - uVar16);
        if (pqVar31 != (qword *)0x0) {
          pqVar30 = unaff_x20;
          if (pqVar31 <= unaff_x20) {
            pqVar30 = pqVar31;
          }
          *unaff_x22 = (ulong)((long)pqVar30 + uVar16);
          pbVar11 = (byte *)((long)unaff_x22 + uVar16 + 0xd);
          goto LAB_00558514;
        }
      }
      bVar9 = false;
LAB_005584ac:
      FUN_005576a4();
      puVar12 = (ulong *)0x0;
      if (unaff_x20 <= (byte *)(*unaff_x22 / 10)) {
        puVar12 = (ulong *)((byte *)(*unaff_x22 / 10) + -(long)unaff_x20);
      }
      func_0x0055c258();
      param_1[1] = (qword)unaff_x22;
      if (!bVar9) goto LAB_0055852c;
      *param_1 = 1;
      if (alStack_c0[0] == 0) goto LAB_00558534;
    }
    FUN_0055b518();
  }
LAB_00558534:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_005586b4:
  FUN_0055abd0();
LAB_00558600:
  puVar29 = unaff_x22 + 1;
  do {
    uVar16 = *puVar29;
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar29,0x10);
    if (bVar9) {
      *(uint *)puVar29 = (uint)uVar16 - 4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (((uint)uVar16 & 0xfffffff9) == 0) {
    func_0x0055b598(unaff_x22);
    bVar13 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    unaff_x22 = puVar12;
  }
  else {
    bVar13 = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  goto joined_r0x005580ac;
}



/* Entry: 00559314; end: 00559453;  */

void FUN_00559314(byte *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  qword *pqVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  ulong uVar10;
  qword *pqVar11;
  qword *pqVar12;
  qword **ppqStack_50;
  qword *pqStack_48;
  
  uVar8 = (ulong)(long)(char)*param_1 >> 1;
  uVar10 = 0xf - uVar8;
  if (((long)(char)*param_1 & 1U) != 0) {
    uVar10 = 0;
  }
  if (param_3 <= uVar10) {
    *param_1 = ((char)uVar8 + (char)param_3) * '\x02';
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_1 + uVar8 + 1);
    return;
  }
  uVar10 = param_3;
  if (0xff2 < param_3) {
    uVar10 = 0xff3;
  }
  uVar8 = 0x20;
  if (0x13 < param_3) {
    uVar8 = uVar10 + 0xd;
  }
  uVar10 = 0xfffffffffffffff8;
  if (0x200 < uVar8) {
    uVar10 = 0xffffffffffffffc0;
  }
  lVar2 = 8;
  if (0x200 < uVar8) {
    lVar2 = 0x40;
  }
  pqVar11 = (qword *)((uVar8 + lVar2) - 1 & uVar10);
  pqVar6 = pqVar11;
  __Znwm();
  pqVar6[1] = 4;
  bVar4 = section_000001f8.sectname + 8 < pqVar11;
  lVar2 = 3;
  if (bVar4) {
    lVar2 = 6;
  }
  cVar9 = '\x02';
  if (bVar4) {
    cVar9 = ':';
  }
  *(char *)((long)pqVar6 + 0xc) = (char)((ulong)pqVar11 >> lVar2) + cVar9;
  _memcpy((undefined1 *)((long)pqVar6 + 0xd),param_2,param_3);
  *pqVar6 = param_3;
  if ((*param_1 & 1) != 0) {
    lVar7 = *(long *)param_1;
    lVar2 = lVar7 + -1;
    if (lVar2 != 0) {
      FUN_0055b3ec(lVar2,param_4);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_005576a4();
    if ((*(byte *)((long)pqVar6 + 0xc) < 5) &&
       ((*(byte *)((long)pqVar6 + 0xc) != 1 || (*(byte *)(pqVar6[3] + 0xc) < 5)))) {
      func_0x0055db74();
    }
    else {
      FUN_0055bb34();
    }
    *(undefined8 *)(param_1 + 8) = uVar5;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar7 + 0x3f) = uVar5;
      FUN_0055b518(lVar2);
    }
    return;
  }
  bVar3 = *param_1;
  pqVar11 = pqVar6;
  if ((long)(char)bVar3 != 0) {
    uVar8 = (ulong)(long)(char)bVar3 >> 1;
    uVar10 = uVar8;
    if (0xff2 < uVar8) {
      uVar10 = 0xff3;
    }
    uVar1 = 0x20;
    if (0x27 < bVar3) {
      uVar1 = uVar10 + 0xd;
    }
    uVar10 = 0xfffffffffffffff8;
    if (0x200 < uVar1) {
      uVar10 = 0xffffffffffffffc0;
    }
    lVar2 = 8;
    if (0x200 < uVar1) {
      lVar2 = 0x40;
    }
    pqVar12 = (qword *)((uVar1 + lVar2) - 1 & uVar10);
    pqVar11 = pqVar12;
    __Znwm();
    *(undefined4 *)(pqVar11 + 1) = 4;
    bVar4 = section_000001f8.sectname + 8 < pqVar12;
    lVar2 = 3;
    if (bVar4) {
      lVar2 = 6;
    }
    lVar7 = 2;
    if (bVar4) {
      lVar7 = 0x3a;
    }
    uVar10 = ((ulong)pqVar12 >> lVar2) + lVar7;
    *(char *)((long)pqVar11 + 0xc) = (char)uVar10;
    *pqVar11 = uVar8;
    *(undefined8 *)((long)pqVar11 + 0xd) = *(undefined8 *)(param_1 + 1);
    *(undefined8 *)((long)pqVar11 + 0x14) = *(undefined8 *)(param_1 + 8);
    if (uVar10 < 5) {
      if (uVar10 != 3) {
        ppqStack_50 = &pqStack_48;
        pqStack_48 = (qword *)0x0;
        func_0x0055e3b0(&ppqStack_50,pqVar11,0,uVar8);
        pqVar11 = pqStack_48;
      }
    }
    else {
      pqVar12 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar12 + 1) = 4;
      *pqVar12 = uVar8;
      *(undefined4 *)((long)pqVar12 + 0xc) = 0x1000003;
      pqVar12[2] = (qword)pqVar11;
      pqVar11 = pqVar12;
    }
    if ((*(byte *)((long)pqVar6 + 0xc) < 5) &&
       ((*(byte *)((long)pqVar6 + 0xc) != 1 || (*(byte *)(pqVar6[3] + 0xc) < 5)))) {
      func_0x0055db74(pqVar11,pqVar6);
    }
    else {
      FUN_0055bb34(pqVar11,pqVar6);
    }
  }
  param_1[0] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(qword **)(param_1 + 8) = pqVar11;
  return;
}



/* Entry: 00559454; end: 005594bb;  */

byte * FUN_00559454(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  if ((*param_1 & 1) != 0) {
    if (*(long *)param_1 + -1 != 0) {
      FUN_0055abd0(*(long *)param_1 + -1);
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + 8);
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
  return param_1;
}



/* Entry: 005594bc; end: 00559dfb;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_005594bc(byte *param_1,char *param_2,long param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  byte *pbVar23;
  ulong uVar24;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_190;
  undefined4 uStack_188;
  byte abStack_184 [12];
  long alStack_178 [13];
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  byte abStack_e4 [12];
  long alStack_d8 [13];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar4 = *param_1;
  uVar24 = (ulong)(char)bVar4;
  if ((uVar24 & 1) == 0) {
    pbVar14 = (byte *)0x0;
    if (bVar4 != 0) {
      pbVar14 = param_1 + 1;
    }
    uVar17 = 0;
    if (bVar4 != 0) {
      uVar17 = uVar24 >> 1;
    }
    cVar5 = *param_2;
joined_r0x00559680:
    uVar18 = (ulong)cVar5;
    if ((uVar18 & 1) != 0) goto LAB_00559568;
LAB_00559518:
    bVar7 = (int)uVar18 != 0;
    puVar9 = (ulong *)0x0;
    if (bVar7) {
      puVar9 = (ulong *)(param_2 + 1);
    }
    uVar15 = 0;
    if (bVar7) {
      uVar15 = uVar18 >> 1;
    }
  }
  else {
    puVar9 = *(ulong **)(param_1 + 8);
    if (*puVar9 == 0) {
      pbVar14 = (byte *)0x0;
      cVar5 = *param_2;
      uVar17 = 0;
      goto joined_r0x00559680;
    }
    bVar3 = *(byte *)((long)puVar9 + 0xc);
    if (bVar3 == 2) {
      puVar9 = (ulong *)puVar9[2];
      bVar3 = *(byte *)((long)puVar9 + 0xc);
      if (bVar3 < 6) goto LAB_005595a8;
LAB_0055954c:
      pbVar14 = (byte *)((long)puVar9 + 0xd);
      uVar17 = *puVar9;
      cVar5 = *param_2;
    }
    else {
      if (5 < bVar3) goto LAB_0055954c;
LAB_005595a8:
      if (bVar3 == 3) {
        if (*(byte *)((long)puVar9 + 0xd) != 0) {
          uVar10 = *(byte *)((long)puVar9 + 0xd) + 1;
          do {
            puVar9 = (ulong *)puVar9[(ulong)*(byte *)((long)puVar9 + 0xe) + 2];
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
        }
        puVar9 = (ulong *)puVar9[(ulong)*(byte *)((long)puVar9 + 0xe) + 2];
        bVar3 = *(byte *)((long)puVar9 + 0xc);
        if (bVar3 == 1) {
          uVar18 = puVar9[2];
          puVar11 = (ulong *)puVar9[3];
          bVar3 = *(byte *)((long)puVar11 + 0xc);
          uVar17 = *puVar9;
        }
        else {
          uVar18 = 0;
          uVar17 = *puVar9;
          puVar11 = puVar9;
        }
        if (bVar3 < 6) {
          pbVar14 = (byte *)(puVar11[2] + uVar18);
          cVar5 = *param_2;
        }
        else {
          pbVar14 = (byte *)((long)puVar11 + uVar18 + 0xd);
          cVar5 = *param_2;
        }
        goto joined_r0x00559680;
      }
      if (bVar3 == 5) {
        uVar17 = *puVar9;
        pbVar14 = (byte *)puVar9[2];
        cVar5 = *param_2;
      }
      else {
        uVar17 = *puVar9;
        if (bVar3 == 1) {
          uVar18 = puVar9[2];
          puVar9 = (ulong *)puVar9[3];
          if (5 < *(byte *)((long)puVar9 + 0xc)) {
            pbVar14 = (byte *)((long)puVar9 + uVar18 + 0xd);
            cVar5 = *param_2;
            goto joined_r0x00559658;
          }
        }
        else {
          uVar18 = 0;
        }
        pbVar14 = (byte *)(puVar9[2] + uVar18);
        cVar5 = *param_2;
      }
    }
joined_r0x00559658:
    uVar18 = (ulong)cVar5;
    if ((uVar18 & 1) == 0) goto LAB_00559518;
LAB_00559568:
    puVar11 = *(ulong **)(param_2 + 8);
    if (*puVar11 == 0) {
      puVar9 = (ulong *)0x0;
      uVar15 = 0;
    }
    else {
      bVar3 = *(byte *)((long)puVar11 + 0xc);
      if (bVar3 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar3 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar3 < 6) {
        if (bVar3 == 3) {
          if (*(byte *)((long)puVar11 + 0xd) != 0) {
            uVar10 = *(byte *)((long)puVar11 + 0xd) + 1;
            do {
              puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          puVar11 = (ulong *)puVar11[(ulong)*(byte *)((long)puVar11 + 0xe) + 2];
          bVar3 = *(byte *)((long)puVar11 + 0xc);
          if (bVar3 == 1) {
            uVar21 = puVar11[2];
            puVar9 = (ulong *)puVar11[3];
            bVar3 = *(byte *)((long)puVar9 + 0xc);
            uVar15 = *puVar11;
          }
          else {
            uVar21 = 0;
            uVar15 = *puVar11;
            puVar9 = puVar11;
          }
          if (bVar3 < 6) {
            puVar9 = (ulong *)(puVar9[2] + uVar21);
          }
          else {
            puVar9 = (ulong *)((long)puVar9 + uVar21 + 0xd);
          }
        }
        else if (bVar3 == 5) {
          puVar9 = (ulong *)puVar11[2];
          uVar15 = *puVar11;
        }
        else {
          uVar15 = *puVar11;
          if (bVar3 == 1) {
            uVar21 = puVar11[2];
            puVar11 = (ulong *)puVar11[3];
            if (5 < *(byte *)((long)puVar11 + 0xc)) {
              puVar9 = (ulong *)((long)puVar11 + uVar21 + 0xd);
              goto LAB_0055977c;
            }
          }
          else {
            uVar21 = 0;
          }
          puVar9 = (ulong *)(puVar11[2] + uVar21);
        }
      }
      else {
        puVar9 = (ulong *)((long)puVar11 + 0xd);
        uVar15 = *puVar11;
      }
    }
  }
LAB_0055977c:
  if (uVar17 <= uVar15) {
    uVar15 = uVar17;
  }
  _memcmp(pbVar14,puVar9,uVar15);
  iVar8 = (int)pbVar14;
  param_3 = param_3 - uVar15;
  if ((param_3 == 0) || (iVar8 != 0)) goto LAB_00559ca8;
  lStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_100 = (ulong *)0x0;
  uStack_e8 = 0xffffffff;
  if (((uVar24 & 1) == 0) || (puVar11 = *(ulong **)(param_1 + 8), puVar11 == (ulong *)0x0)) {
    uVar24 = uVar24 >> 1;
    uStack_f8 = uVar24;
    pbVar14 = (byte *)0x0;
    if ((bVar4 & 1) == 0) {
      pbVar14 = param_1 + 1;
    }
  }
  else {
    uStack_f8 = *puVar11;
    if (*puVar11 == 0) {
      uVar24 = 0;
      pbVar14 = (byte *)0x0;
      uStack_110 = 0;
      uStack_108 = 0;
    }
    else {
      bVar4 = *(byte *)((long)puVar11 + 0xc);
      if (bVar4 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar4 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar4 == 3) {
        uVar24 = (ulong)*(byte *)((long)puVar11 + 0xd);
        uStack_e8 = (uint)*(byte *)((long)puVar11 + 0xd);
        bVar4 = *(byte *)((long)puVar11 + 0xe);
        uVar17 = (ulong)bVar4;
        alStack_d8[uVar24] = (long)puVar11;
        abStack_e4[uVar24] = bVar4;
        puVar22 = puVar11;
        if (uVar24 != 0) {
          do {
            puVar22 = (ulong *)puVar22[uVar17 + 2];
            *(ulong **)(abStack_e4 + uVar24 * 8 + 4) = puVar22;
            uVar17 = (ulong)*(byte *)((long)puVar22 + 0xe);
            abStack_e4[uVar24 - 1] = *(byte *)((long)puVar22 + 0xe);
            bVar7 = uVar24 != 0;
            uVar24 = uVar24 - 1;
          } while (bVar7 && uVar24 != 0);
        }
        puVar22 = *(ulong **)(alStack_d8[0] + uVar17 * 8 + 0x10);
        uVar24 = *puVar22;
        lStack_f0 = *puVar11 - uVar24;
        bVar4 = *(byte *)((long)puVar22 + 0xc);
        if (bVar4 == 1) {
          uVar17 = puVar22[2];
          puVar22 = (ulong *)puVar22[3];
          bVar4 = *(byte *)((long)puVar22 + 0xc);
        }
        else {
          uVar17 = 0;
        }
        if (bVar4 < 6) {
          pbVar14 = (byte *)(puVar22[2] + uVar17);
        }
        else {
          pbVar14 = (byte *)((long)puVar22 + uVar17 + 0xd);
        }
      }
      else {
        puStack_100 = puVar11;
        if (bVar4 == 1) {
          uVar17 = puVar11[2];
          puVar22 = (ulong *)puVar11[3];
          uVar24 = *puVar11;
          puVar11 = puVar22;
          if (*(byte *)((long)puVar22 + 0xc) < 6) goto LAB_00559d74;
LAB_00559d90:
          uVar21 = (long)puVar11 + 0xd;
        }
        else {
          uVar17 = 0;
          uVar24 = *puVar11;
          if (5 < bVar4) goto LAB_00559d90;
LAB_00559d74:
          uVar21 = puVar11[2];
        }
        pbVar14 = (byte *)(uVar21 + uVar17);
      }
    }
  }
  lStack_1b8 = lStack_f0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_190 = 0;
  uStack_188 = 0xffffffff;
  if (((uVar18 & 1) == 0) || (puVar11 = *(ulong **)(param_2 + 8), puVar11 == (ulong *)0x0)) {
    uVar21 = uVar18 >> 1;
    pcVar16 = (char *)0x0;
    uVar17 = uVar21;
    if ((uVar18 & 1) == 0) {
      pcVar16 = param_2 + 1;
    }
  }
  else {
    uVar17 = *puVar11;
    if (uVar17 == 0) {
      uVar21 = 0;
      pcVar16 = (char *)0x0;
    }
    else {
      bVar4 = *(byte *)((long)puVar11 + 0xc);
      if (bVar4 == 2) {
        puVar11 = (ulong *)puVar11[2];
        bVar4 = *(byte *)((long)puVar11 + 0xc);
      }
      if (bVar4 == 3) {
        uVar18 = (ulong)*(byte *)((long)puVar11 + 0xd);
        uStack_188 = (uint)*(byte *)((long)puVar11 + 0xd);
        bVar4 = *(byte *)((long)puVar11 + 0xe);
        uVar21 = (ulong)bVar4;
        alStack_178[uVar18] = (long)puVar11;
        abStack_184[uVar18] = bVar4;
        puVar22 = puVar11;
        if (uVar18 != 0) {
          do {
            puVar22 = (ulong *)puVar22[uVar21 + 2];
            *(ulong **)(abStack_184 + uVar18 * 8 + 4) = puVar22;
            uVar21 = (ulong)*(byte *)((long)puVar22 + 0xe);
            abStack_184[uVar18 - 1] = *(byte *)((long)puVar22 + 0xe);
            bVar7 = uVar18 != 0;
            uVar18 = uVar18 - 1;
          } while (bVar7 && uVar18 != 0);
        }
        puVar22 = *(ulong **)(alStack_178[0] + uVar21 * 8 + 0x10);
        uVar21 = *puVar22;
        lStack_190 = *puVar11 - uVar21;
        if (*(byte *)((long)puVar22 + 0xc) == 1) {
          uVar18 = puVar22[2];
          puVar22 = (ulong *)puVar22[3];
          if (*(byte *)((long)puVar22 + 0xc) < 6) goto LAB_00559944;
LAB_00559d0c:
          uVar19 = (long)puVar22 + 0xd;
        }
        else {
          uVar18 = 0;
          if (5 < *(byte *)((long)puVar22 + 0xc)) goto LAB_00559d0c;
LAB_00559944:
          uVar19 = puVar22[2];
        }
        pcVar16 = (char *)(uVar19 + uVar18);
      }
      else {
        if (bVar4 == 1) {
          uVar18 = puVar11[2];
          puVar22 = (ulong *)puVar11[3];
          uVar21 = *puVar11;
          puVar11 = puVar22;
          if (*(byte *)((long)puVar22 + 0xc) < 6) goto LAB_00559dcc;
LAB_00559de8:
          uVar19 = (long)puVar11 + 0xd;
        }
        else {
          uVar18 = 0;
          uVar21 = *puVar11;
          if (5 < bVar4) goto LAB_00559de8;
LAB_00559dcc:
          uVar19 = puVar11[2];
        }
        pcVar16 = (char *)(uVar19 + uVar18);
      }
    }
  }
  pbVar23 = (byte *)0x0;
  if (uStack_f8 != 0) {
    pbVar23 = pbVar14;
  }
  uVar18 = 0;
  if (uStack_f8 != 0) {
    uVar18 = uVar24;
  }
  pcVar2 = (char *)0x0;
  if (uVar17 != 0) {
    pcVar2 = pcVar16;
  }
  uVar19 = 0;
  if (uVar17 != 0) {
    uVar19 = uVar21;
  }
  pbVar23 = pbVar23 + uVar15;
  uVar18 = uVar18 - uVar15;
  puVar11 = (ulong *)(pcVar2 + uVar15);
  uVar19 = uVar19 - uVar15;
  uVar15 = uStack_f8;
  lStack_1c0 = lStack_190;
  do {
    if (uVar18 == 0) {
      uVar15 = uVar15 - uVar24;
      uStack_f8 = uVar15;
      if (uVar15 != 0) {
        if ((-1 < (int)uStack_e8) && (alStack_d8[uStack_e8] != 0)) {
          if (lStack_1b8 != 0) {
            if ((ulong)*(byte *)(alStack_d8[0] + 0xf) - 1 == (ulong)abStack_e4[0]) {
              uVar18 = 0;
              do {
                uVar13 = uVar18;
                if (uStack_e8 == uVar13) {
                  puVar22 = (ulong *)0x0;
                  uVar18._0_4_ = 0xfeedfacf;
                  uVar18._4_4_ = 0x100000c;
                  lStack_f0 = lStack_1b8 + -0x100000cfeedfacf;
                  bVar4 = 6;
                  goto LAB_00559ae0;
                }
                lVar12 = alStack_d8[uVar13 + 1];
                uVar24 = (ulong)abStack_e4[uVar13 + 1] + 1;
                uVar18 = uVar13 + 1;
              } while (uVar24 == *(byte *)(lVar12 + 0xf));
              abStack_e4[uVar13 + 1] = (byte)uVar24;
              lVar20 = (long)(int)(uVar13 + 1);
              do {
                lVar12 = *(long *)(lVar12 + uVar24 * 8 + 0x10);
                lVar6 = lVar20 + -1;
                alStack_d8[lVar6] = lVar12;
                uVar24 = (ulong)*(byte *)(lVar12 + 0xe);
                abStack_e4[lVar20 + -1] = *(byte *)(lVar12 + 0xe);
                bVar7 = 0 < lVar20;
                lVar20 = lVar6;
                lStack_1b8 = lStack_f0;
              } while (lVar6 != 0 && bVar7);
            }
            else {
              abStack_e4[0] = abStack_e4[0] + 1;
              uVar24 = (ulong)abStack_e4[0];
              lVar12 = alStack_d8[0];
            }
            puVar22 = *(ulong **)(lVar12 + uVar24 * 8 + 0x10);
            uVar18 = *puVar22;
            lStack_f0 = lStack_1b8 - uVar18;
            bVar4 = *(byte *)((long)puVar22 + 0xc);
            if (bVar4 == 1) {
              uVar24 = puVar22[2];
              puVar22 = (ulong *)puVar22[3];
              if (5 < *(byte *)((long)puVar22 + 0xc)) goto LAB_00559abc;
LAB_00559aec:
              uVar13 = puVar22[2];
            }
            else {
LAB_00559ae0:
              uVar24 = 0;
              if (bVar4 < 6) goto LAB_00559aec;
LAB_00559abc:
              uVar13 = (long)puVar22 + 0xd;
            }
            if (uVar15 != 0) {
              pbVar23 = (byte *)(uVar13 + uVar24);
              uVar24 = uVar18;
              uVar15 = uStack_f8;
              lStack_1b8 = lStack_f0;
              goto joined_r0x00559b04;
            }
            goto LAB_00559c88;
          }
          lStack_1b8 = 0;
        }
        uVar18 = 0;
        pbVar23 = (byte *)0x0;
        uVar24 = uVar18;
        goto joined_r0x00559b04;
      }
LAB_00559c88:
      uVar18 = 0;
LAB_00559c94:
      iVar8 = (uint)(uVar19 == 0) - (uint)(uVar18 == 0);
      goto LAB_00559ca8;
    }
joined_r0x00559b04:
    if (uVar19 == 0) {
      uVar17 = uVar17 - uVar21;
      if (uVar17 == 0) {
LAB_00559c90:
        uVar19 = 0;
        goto LAB_00559c94;
      }
      if ((-1 < (int)uStack_188) && (alStack_178[uStack_188] != 0)) {
        if (lStack_1c0 != 0) {
          if ((ulong)*(byte *)(alStack_178[0] + 0xf) - 1 == (ulong)abStack_184[0]) {
            uVar19 = 0;
            do {
              uVar13 = uVar19;
              if (uStack_188 == uVar13) {
                puVar11 = (ulong *)0x0;
                uVar19._0_4_ = 0xfeedfacf;
                uVar19._4_4_ = 0x100000c;
                lStack_190 = lStack_1c0 + -0x100000cfeedfacf;
                bVar4 = 6;
                goto LAB_00559c28;
              }
              lVar12 = alStack_178[uVar13 + 1];
              uVar21 = (ulong)abStack_184[uVar13 + 1] + 1;
              uVar19 = uVar13 + 1;
            } while (uVar21 == *(byte *)(lVar12 + 0xf));
            abStack_184[uVar13 + 1] = (byte)uVar21;
            lVar20 = (long)(int)(uVar13 + 1);
            do {
              lVar12 = *(long *)(lVar12 + uVar21 * 8 + 0x10);
              lVar6 = lVar20 + -1;
              alStack_178[lVar6] = lVar12;
              uVar21 = (ulong)*(byte *)(lVar12 + 0xe);
              abStack_184[lVar20 + -1] = *(byte *)(lVar12 + 0xe);
              bVar7 = 0 < lVar20;
              lVar20 = lVar6;
              lStack_1c0 = lStack_190;
            } while (lVar6 != 0 && bVar7);
          }
          else {
            abStack_184[0] = abStack_184[0] + 1;
            uVar21 = (ulong)abStack_184[0];
            lVar12 = alStack_178[0];
          }
          puVar11 = *(ulong **)(lVar12 + uVar21 * 8 + 0x10);
          uVar19 = *puVar11;
          lStack_190 = lStack_1c0 - uVar19;
          bVar4 = *(byte *)((long)puVar11 + 0xc);
          if (bVar4 == 1) {
            uVar21 = puVar11[2];
            puVar11 = (ulong *)puVar11[3];
            if (*(byte *)((long)puVar11 + 0xc) < 6) goto LAB_00559c04;
LAB_00559c34:
            uVar13 = (long)puVar11 + 0xd;
          }
          else {
LAB_00559c28:
            uVar21 = 0;
            if (5 < bVar4) goto LAB_00559c34;
LAB_00559c04:
            uVar13 = puVar11[2];
          }
          if (uVar17 != 0) {
            puVar11 = (ulong *)(uVar13 + uVar21);
            uVar21 = uVar19;
            lStack_1c0 = lStack_190;
            goto LAB_00559c4c;
          }
          goto LAB_00559c90;
        }
        lStack_1c0 = 0;
      }
      uVar21 = 0;
      puVar11 = (ulong *)0x0;
      uVar19 = 0;
    }
LAB_00559c4c:
    uVar13 = uVar19;
    if (uVar18 <= uVar19) {
      uVar13 = uVar18;
    }
    pbVar14 = pbVar23;
    puVar9 = puVar11;
    _memcmp(pbVar23,puVar11,uVar13);
    iVar8 = (int)pbVar14;
    if (iVar8 != 0) goto LAB_00559ca8;
    pbVar23 = pbVar23 + uVar13;
    uVar18 = uVar18 - uVar13;
    puVar11 = (ulong *)((long)puVar11 + uVar13);
    uVar19 = uVar19 - uVar13;
    param_3 = param_3 - uVar13;
  } while (param_3 != 0);
  iVar8 = 0;
LAB_00559ca8:
  puVar11 = (ulong *)(ulong)(iVar8 == 0);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (((*puVar9 & 1) != 0) && (uVar24 = puVar9[1], uVar24 != 0)) {
    piVar1 = (int *)(uVar24 + 8);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *puVar11 = 1;
    puVar11[1] = uVar24;
    if (*puVar9 < 2) {
      return puVar11;
    }
    FUN_0055ae58();
    return puVar11;
  }
  uVar24 = *puVar9;
  puVar11[1] = puVar9[1];
  *puVar11 = uVar24;
  return puVar11;
}



/* Entry: 00559dfc; end: 00559e73;  */

ulong * FUN_00559dfc(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((*param_2 & 1) == 0) || (uVar4 = param_2[1], uVar4 == 0)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    return param_1;
  }
  piVar1 = (int *)(uVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = 1;
  param_1[1] = uVar4;
  if (*param_2 < 2) {
    return param_1;
  }
  FUN_0055ae58(param_1,param_2,8);
  return param_1;
}



/* Entry: 00559e74; end: 00559ebb;  */

void FUN_00559e74(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00559ebc(param_2,param_1);
  return;
}



/* Entry: 00559ebc; end: 00559fa7;  */

qword * FUN_00559ebc(qword *param_1,qword *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  qword *pqVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulong *puVar13;
  qword *pqVar14;
  int iVar15;
  qword *pqVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  char cVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  qword *pqVar27;
  long lVar28;
  ulong *puVar29;
  ulong uVar30;
  ulong uVar31;
  qword *pqVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  qword *unaff_x19;
  qword *unaff_x20;
  undefined8 unaff_x21;
  qword qVar36;
  long unaff_x22;
  int iVar37;
  undefined1 *unaff_x23;
  qword qVar38;
  undefined1 *unaff_x24;
  qword *unaff_x25;
  undefined8 unaff_x26;
  qword *pqVar39;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  qword qVar43;
  undefined8 uVar44;
  qword qVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  byte abStack_e4 [196];
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((*param_1 & 1) == 0) {
    pqVar10 = (qword *)((long)&MACH_HEADER.filetype + 3);
    pqVar39 = param_2;
    FUN_0053316c();
    pqVar16 = param_2;
    if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
      pqVar16 = (qword *)*param_2;
    }
    uVar23 = *(ulong *)((long)param_1 + 1);
    *(qword *)((long)pqVar16 + 7) = param_1[1];
    *pqVar16 = uVar23;
    uVar23 = (ulong)(long)(char)(byte)*param_1 >> 1;
    if ((long)(char)*(byte *)((long)param_2 + 0x17) < 0) {
      if (uVar23 <= param_2[1]) {
        param_2[1] = uVar23;
        *(undefined1 *)(*param_2 + uVar23) = 0;
        return pqVar39;
      }
    }
    else if (uVar23 <= (ulong)(long)(char)*(byte *)((long)param_2 + 0x17)) {
      *(byte *)((long)param_2 + 0x17) = (byte)((uint)(int)(char)(byte)*param_1 >> 1);
      *(byte *)((long)param_2 + uVar23) = 0;
      return pqVar39;
    }
    unaff_x30 = FUN_00559fa8;
    FUN_00461b78();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar2;
  }
  else {
    FUN_0053316c(param_2,*(undefined8 *)param_1[1]);
    pqVar39 = param_1;
    pqVar10 = param_2;
    if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
      pqVar10 = (qword *)*param_2;
    }
  }
  puVar13 = (ulong *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(qword **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(qword **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(qword **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  pqVar16 = (qword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
  if ((*pqVar39 & 1) != 0) {
    pqVar16 = (qword *)pqVar39[1];
  }
  FUN_0055a308();
  if ((int)pqVar16 == 0) {
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined4 *)((long)register0x00000008 + -200) = 0xffffffff;
    bVar4 = (byte)*pqVar39;
    if ((((long)(char)bVar4 & 1U) == 0) || (plVar20 = (long *)pqVar39[1], plVar20 == (long *)0x0)) {
      unaff_x22 = 0;
      unaff_x20 = (qword *)((ulong)(long)(char)bVar4 >> 1);
      puVar13 = (ulong *)0x0;
      if ((bVar4 & 1) == 0) {
        puVar13 = (ulong *)((long)pqVar39 + 1);
      }
      unaff_x25 = (qword *)0x0;
      pqVar14 = unaff_x20;
      if (unaff_x20 == (qword *)0x0) goto LAB_0055a0f4;
    }
    else {
      pqVar14 = (qword *)*plVar20;
      *(qword **)((long)register0x00000008 + -0xd8) = pqVar14;
      unaff_x25 = (qword *)0x0;
      if (pqVar14 == (qword *)0x0) goto LAB_0055a0f4;
      bVar4 = *(byte *)((long)plVar20 + 0xc);
      if (bVar4 == 2) {
        plVar20 = (long *)plVar20[2];
        bVar4 = *(byte *)((long)plVar20 + 0xc);
      }
      if (bVar4 != 3) {
        if (bVar4 == 1) {
          lVar19 = plVar20[2];
          plVar33 = (long *)plVar20[3];
          unaff_x20 = (qword *)*plVar20;
          plVar20 = plVar33;
          if (5 < *(byte *)((long)plVar33 + 0xc)) goto LAB_0055a190;
LAB_0055a174:
          lVar28 = plVar20[2];
        }
        else {
          lVar19 = 0;
          unaff_x20 = (qword *)*plVar20;
          if (bVar4 < 6) goto LAB_0055a174;
LAB_0055a190:
          lVar28 = (long)plVar20 + 0xd;
        }
        unaff_x22 = 0;
        puVar13 = (ulong *)(lVar28 + lVar19);
        goto LAB_0055a19c;
      }
      uVar23 = (ulong)*(byte *)((long)plVar20 + 0xd);
      *(uint *)((long)register0x00000008 + -200) = (uint)*(byte *)((long)plVar20 + 0xd);
      bVar4 = *(byte *)((long)plVar20 + 0xe);
      uVar25 = (ulong)bVar4;
      *(long **)((long)register0x00000008 + uVar23 * 8 + -0xb8) = plVar20;
      *(byte *)((long)register0x00000008 + (uVar23 - 0xc4)) = bVar4;
      plVar33 = plVar20;
      if (uVar23 != 0) {
        do {
          plVar33 = (long *)plVar33[uVar25 + 2];
          *(long **)((long)register0x00000008 + uVar23 * 8 + -0xc0) = plVar33;
          uVar25 = (ulong)*(byte *)((long)plVar33 + 0xe);
          *(byte *)((long)register0x00000008 + (uVar23 - 0xc5)) = *(byte *)((long)plVar33 + 0xe);
          bVar9 = uVar23 != 0;
          uVar23 = uVar23 - 1;
        } while (bVar9 && uVar23 != 0);
      }
      puVar17 = *(undefined8 **)(*(long *)((long)register0x00000008 + -0xb8) + uVar25 * 8 + 0x10);
      unaff_x20 = (qword *)*puVar17;
      unaff_x22 = *plVar20 - (long)unaff_x20;
      *(long *)((long)register0x00000008 + -0xd0) = unaff_x22;
      if (*(byte *)((long)puVar17 + 0xc) == 1) {
        lVar19 = puVar17[2];
        puVar17 = (undefined8 *)puVar17[3];
        if (5 < *(byte *)((long)puVar17 + 0xc)) goto LAB_0055a134;
LAB_0055a0d4:
        lVar28 = puVar17[2];
      }
      else {
        lVar19 = 0;
        if (*(byte *)((long)puVar17 + 0xc) < 6) goto LAB_0055a0d4;
LAB_0055a134:
        lVar28 = (long)puVar17 + 0xd;
      }
      puVar13 = (ulong *)(lVar28 + lVar19);
      pqVar14 = *(qword **)((long)register0x00000008 + -0xd8);
      if (*(qword **)((long)register0x00000008 + -0xd8) == (qword *)0x0) {
        unaff_x25 = (qword *)0x0;
        goto LAB_0055a0f4;
      }
    }
LAB_0055a19c:
    unaff_x25 = pqVar14;
    pqVar39 = (qword *)((long)register0x00000008 + -0xf0);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xb8);
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xc4);
    pqVar14 = unaff_x20;
LAB_0055a1c0:
    do {
      while( true ) {
        pqVar16 = pqVar10;
        _memcpy(pqVar10,puVar13,pqVar14);
        unaff_x25 = (qword *)((long)unaff_x25 - (long)pqVar14);
        *(qword **)((long)register0x00000008 + -0xd8) = unaff_x25;
        unaff_x20 = pqVar14;
        if (unaff_x25 == (qword *)0x0) goto LAB_0055a0f4;
        uVar22 = *(uint *)((long)register0x00000008 + -200);
        if (((-1 < (int)uVar22) && (*(long *)(unaff_x23 + (ulong)uVar22 * 8) != 0)) &&
           (unaff_x22 != 0)) break;
        unaff_x20 = (qword *)0x0;
        puVar13 = (ulong *)0x0;
        pqVar10 = (qword *)((long)pqVar10 + (long)pqVar14);
        pqVar14 = unaff_x20;
        if (unaff_x25 == (qword *)0x0) goto LAB_0055a0f4;
      }
      uVar23 = *(ulong *)((long)register0x00000008 + -0xb8);
      if ((ulong)*(byte *)(uVar23 + 0xf) - 1 == (ulong)*(byte *)((long)register0x00000008 + -0xc4))
      {
        uVar18 = 0;
        do {
          uVar26 = uVar18;
          if (uVar22 == uVar26) {
            puVar17 = (undefined8 *)0x0;
            unaff_x20 = (qword *)0x100000cfeedfacf;
            unaff_x22 = unaff_x22 + -0x100000cfeedfacf;
            *(long *)((long)register0x00000008 + -0xd0) = unaff_x22;
            bVar4 = 6;
            goto LAB_0055a2dc;
          }
          uVar23 = pqVar39[uVar26 + 8];
          uVar25 = (ulong)*(byte *)((long)pqVar39 + uVar26 + 0x2d) + 1;
          uVar18 = uVar26 + 1;
        } while (uVar25 == *(byte *)(uVar23 + 0xf));
        *(byte *)((long)pqVar39 + uVar26 + 0x2d) = (byte)uVar25;
        lVar19 = (long)(int)(uVar26 + 1);
        do {
          uVar23 = *(ulong *)(uVar23 + uVar25 * 8 + 0x10);
          lVar28 = lVar19 + -1;
          *(ulong *)(unaff_x23 + lVar28 * 8) = uVar23;
          uVar25 = (ulong)*(byte *)(uVar23 + 0xe);
          unaff_x24[lVar28] = *(byte *)(uVar23 + 0xe);
          bVar9 = 0 < lVar19;
          lVar19 = lVar28;
        } while (lVar28 != 0 && bVar9);
        unaff_x22 = *(long *)((long)register0x00000008 + -0xd0);
      }
      else {
        bVar4 = *(byte *)((long)register0x00000008 + -0xc4) + 1;
        *(byte *)((long)register0x00000008 + -0xc4) = bVar4;
        uVar25 = (ulong)bVar4;
      }
      puVar17 = *(undefined8 **)(uVar23 + uVar25 * 8 + 0x10);
      unaff_x20 = (qword *)*puVar17;
      unaff_x22 = unaff_x22 - (long)unaff_x20;
      *(long *)((long)register0x00000008 + -0xd0) = unaff_x22;
      bVar4 = *(byte *)((long)puVar17 + 0xc);
      if (bVar4 == 1) {
        lVar19 = puVar17[2];
        puVar17 = (undefined8 *)puVar17[3];
        bVar4 = *(byte *)((long)puVar17 + 0xc);
      }
      else {
LAB_0055a2dc:
        lVar19 = 0;
      }
      if (bVar4 < 6) {
        puVar13 = (ulong *)(puVar17[2] + lVar19);
        unaff_x25 = *(qword **)((long)register0x00000008 + -0xd8);
        pqVar10 = (qword *)((long)pqVar10 + (long)pqVar14);
        pqVar14 = unaff_x20;
        if (unaff_x25 == (qword *)0x0) {
          unaff_x25 = (qword *)0x0;
          goto LAB_0055a0f4;
        }
        goto LAB_0055a1c0;
      }
      puVar13 = (ulong *)((long)puVar17 + lVar19 + 0xd);
      unaff_x25 = *(qword **)((long)register0x00000008 + -0xd8);
      pqVar10 = (qword *)((long)pqVar10 + (long)pqVar14);
      pqVar14 = unaff_x20;
    } while (unaff_x25 != (qword *)0x0);
    unaff_x25 = (qword *)0x0;
  }
  else {
    puVar13 = *(ulong **)((long)register0x00000008 + -0x100);
    pqVar16 = pqVar10;
    _memcpy(pqVar10,puVar13,*(undefined8 *)((long)register0x00000008 + -0xf8));
  }
LAB_0055a0f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x58)) {
    return pqVar16;
  }
  ___stack_chk_fail();
  if (*pqVar16 == 0) {
    *puVar13 = 0;
    puVar13[1] = 0;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  bVar4 = *(byte *)((long)pqVar16 + 0xc);
  if (bVar4 == 2) {
    pqVar16 = (qword *)pqVar16[2];
    bVar4 = *(byte *)((long)pqVar16 + 0xc);
  }
  if (5 < bVar4) {
    uVar23 = *pqVar16;
    *puVar13 = (ulong)((long)pqVar16 + 0xd);
    puVar13[1] = uVar23;
LAB_0055a330:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      if ((*(byte *)((long)pqVar16 + 0xd) == 0) &&
         ((ulong)*(byte *)((long)pqVar16 + 0xf) - (ulong)*(byte *)((long)pqVar16 + 0xe) == 1)) {
        if (puVar13 != (ulong *)0x0) {
          puVar24 = (ulong *)pqVar16[(ulong)*(byte *)((long)pqVar16 + 0xe) + 2];
          bVar4 = *(byte *)((long)puVar24 + 0xc);
          if (bVar4 == 1) {
            uVar23 = puVar24[2];
            bVar4 = *(byte *)((long)puVar24[3] + 0xc);
            puVar29 = (ulong *)puVar24[3];
          }
          else {
            uVar23 = 0;
            puVar29 = puVar24;
          }
          uVar25 = *puVar24;
          if (bVar4 < 6) {
            *puVar13 = puVar29[2] + uVar23;
            puVar13[1] = uVar25;
            return (qword *)((long)&MACH_HEADER.magic + 1);
          }
          *puVar13 = (long)puVar29 + uVar23 + 0xd;
          puVar13[1] = uVar25;
          return (qword *)((long)&MACH_HEADER.magic + 1);
        }
        goto LAB_0055a330;
      }
    }
    else if (bVar4 == 5) {
      uVar23 = *pqVar16;
      *puVar13 = pqVar16[2];
      puVar13[1] = uVar23;
      return (qword *)((long)&MACH_HEADER.magic + 1);
    }
    return (qword *)0x0;
  }
  puVar17 = (undefined8 *)pqVar16[3];
  bVar4 = *(byte *)((long)puVar17 + 0xc);
  if (5 < bVar4) {
    uVar23 = *pqVar16;
    *puVar13 = (long)puVar17 + pqVar16[2] + 0xd;
    puVar13[1] = uVar23;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar4 != 3) {
    if (bVar4 != 5) {
      return (qword *)0x0;
    }
    uVar23 = *pqVar16;
    *puVar13 = puVar17[2] + pqVar16[2];
    puVar13[1] = uVar23;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pqVar14 = (qword *)pqVar16[2];
  uVar23 = *pqVar16;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x108) = FUN_0055a308;
  if (uVar23 == 0) {
    return (qword *)0x0;
  }
  uVar22 = (uint)*(byte *)((long)puVar17 + 0xd);
  do {
    puVar11 = (undefined8 *)puVar17[(ulong)*(byte *)((long)puVar17 + 0xe) + 2];
    plVar20 = (long *)*puVar11;
    if (plVar20 <= pqVar14) {
      puVar17 = puVar17 + (ulong)*(byte *)((long)puVar17 + 0xe) + 3;
      do {
        pqVar14 = (qword *)((long)pqVar14 - (long)plVar20);
        puVar11 = (undefined8 *)*puVar17;
        plVar20 = (long *)*puVar11;
        puVar17 = puVar17 + 1;
      } while (plVar20 <= pqVar14);
    }
    if (plVar20 < (long *)((long)pqVar14 + uVar23)) {
      return (qword *)0x0;
    }
    bVar9 = 0 < (int)uVar22;
    puVar17 = puVar11;
    uVar22 = uVar22 - 1;
  } while (bVar9);
  if (puVar13 == (ulong *)0x0) goto LAB_0055db5c;
  if (*(byte *)((long)puVar11 + 0xc) == 1) {
    lVar19 = puVar11[2];
    puVar11 = (undefined8 *)puVar11[3];
    if (5 < *(byte *)((long)puVar11 + 0xc)) goto LAB_0055db3c;
LAB_0055db1c:
    lVar28 = puVar11[2];
  }
  else {
    lVar19 = 0;
    if (*(byte *)((long)puVar11 + 0xc) < 6) goto LAB_0055db1c;
LAB_0055db3c:
    lVar28 = (long)puVar11 + 0xd;
  }
  if (pqVar14 <= plVar20) {
    uVar25 = (long)plVar20 - (long)pqVar14;
    if (uVar23 <= (ulong)((long)plVar20 - (long)pqVar14)) {
      uVar25 = uVar23;
    }
    *puVar13 = (ulong)(lVar28 + lVar19 + (long)pqVar14);
    puVar13[1] = uVar25;
LAB_0055db5c:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pcVar12 = "string_view::substr";
  FUN_00435534();
  *(undefined1 **)((long)register0x00000008 + -0x120) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x55db74;
  *(char **)((long)register0x00000008 + -0x128) = pcVar12;
  if (*(char *)((long)pqVar14 + 0xc) != '\x03') {
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x128);
    func_0x0055e638(pqVar14,(undefined1 *)((long)register0x00000008 + -0x130),0x55e534);
    return *(qword **)((long)register0x00000008 + -0x128);
  }
  if (*(byte *)((long)pcVar12 + 0xd) < *(byte *)((long)pqVar14 + 0xd)) {
    *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x168) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x160) = unaff_x26;
    *(qword **)((long)register0x00000008 + -0x158) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x148) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x140) = unaff_x22;
    *(qword **)((long)register0x00000008 + -0x138) = pqVar39;
    *(qword **)((long)register0x00000008 + -0x130) = unaff_x20;
    *(qword **)((long)register0x00000008 + -0x128) = pqVar10;
    *(undefined8 *)((long)register0x00000008 + -0x120) =
         *(undefined8 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)((long)register0x00000008 + -0x118) =
         *(undefined8 *)((long)register0x00000008 + -0x118);
    qVar36 = *(qword *)pcVar12;
    bVar4 = *(byte *)((long)pqVar14 + 0xd);
    bVar5 = *(byte *)((long)pcVar12 + 0xd);
    uVar22 = (uint)bVar4 - (uint)bVar5;
    uVar23 = (ulong)uVar22;
    pqVar39 = pqVar14;
    if ((int)uVar22 < 1) {
      uVar25 = 0;
    }
    else {
      uVar18 = 0;
      do {
        uVar25 = uVar18;
        if ((pqVar39[1] & 0xfffffffd) != 4) break;
        *(qword **)((long)register0x00000008 + uVar18 * 8 + -0x1d0) = pqVar39;
        uVar18 = uVar18 + 1;
        pqVar39 = (qword *)pqVar39[(ulong)*(byte *)((long)pqVar39 + 0xe) + 2];
        uVar25 = uVar23;
      } while (uVar23 != uVar18);
    }
    iVar15 = (int)uVar25;
    iVar37 = iVar15;
    if ((pqVar39[1] & 0xfffffffd) == 4) {
      iVar37 = iVar15 + 1;
    }
    *(int *)((long)register0x00000008 + -0x1d8) = iVar37;
    if (iVar15 < (int)uVar22) {
      puVar17 = (undefined8 *)((long)register0x00000008 + (uVar25 & 0xffffffff) * 8 + -0x1d8);
      do {
        puVar17 = puVar17 + 1;
        *puVar17 = pqVar39;
        pqVar39 = (qword *)pqVar39[(ulong)*(byte *)((long)pqVar39 + 0xe) + 2];
        uVar1 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar22);
    }
    uVar25 = (ulong)*(byte *)((long)pcVar12 + 0xf);
    uVar18 = (ulong)*(byte *)((long)pcVar12 + 0xe);
    if (6 < (*(byte *)((long)pqVar39 + 0xf) + uVar25) - (*(byte *)((long)pqVar39 + 0xe) + uVar18)) {
      iVar15 = 2;
      iVar37 = 2;
      if ((uint)bVar4 != (uint)bVar5) goto LAB_0055d744;
      goto LAB_0055d99c;
    }
    if ((int)uVar22 < iVar37) {
      iVar37 = 0;
      lVar19 = uVar25 - uVar18;
      bVar6 = *(byte *)((long)pqVar39 + 0xf);
      bVar7 = *(byte *)((long)pqVar39 + 0xe);
    }
    else {
      qVar38 = *pqVar39;
      pqVar10 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar10 + 1) = 4;
      *pqVar10 = qVar38;
      uVar41 = *(undefined8 *)((long)pqVar39 + 0x14);
      uVar40 = *(undefined8 *)((long)pqVar39 + 0xc);
      uVar44 = *(undefined8 *)((long)pqVar39 + 0x24);
      uVar42 = *(undefined8 *)((long)pqVar39 + 0x1c);
      uVar47 = *(undefined8 *)((long)pqVar39 + 0x34);
      uVar46 = *(undefined8 *)((long)pqVar39 + 0x2c);
      *(undefined4 *)((long)pqVar10 + 0x3c) = *(undefined4 *)((long)pqVar39 + 0x3c);
      *(undefined8 *)((long)pqVar10 + 0x34) = uVar47;
      *(undefined8 *)((long)pqVar10 + 0x2c) = uVar46;
      *(undefined8 *)((long)pqVar10 + 0x24) = uVar44;
      *(undefined8 *)((long)pqVar10 + 0x1c) = uVar42;
      *(undefined8 *)((long)pqVar10 + 0x14) = uVar41;
      *(undefined8 *)((long)pqVar10 + 0xc) = uVar40;
      bVar6 = *(byte *)((long)pqVar39 + 0xf);
      if ((uint)*(byte *)((long)pqVar39 + 0xe) != (uint)bVar6) {
        pqVar16 = pqVar39 + (ulong)*(byte *)((long)pqVar39 + 0xe) + 2;
        do {
          piVar3 = (int *)(*pqVar16 + 8);
          do {
            cVar21 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = *piVar3 + 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          pqVar16 = pqVar16 + 1;
        } while (pqVar16 != pqVar39 + (ulong)(uint)bVar6 + 2);
        uVar18 = (ulong)*(byte *)((long)pcVar12 + 0xe);
        uVar25 = (ulong)*(byte *)((long)pcVar12 + 0xf);
      }
      iVar37 = 1;
      lVar19 = uVar25 - uVar18;
      bVar6 = *(byte *)((long)pqVar10 + 0xf);
      bVar7 = *(byte *)((long)pqVar10 + 0xe);
      pqVar39 = pqVar10;
    }
    uVar35 = (ulong)bVar6;
    uVar26 = (ulong)bVar7;
    if (uVar35 != 6) {
      uVar26 = (6 - uVar35) + uVar26;
      *(char *)((long)pqVar39 + 0xf) = '\x06';
      if (uVar26 < 6) {
        uVar31 = 5;
        pqVar10 = pqVar39;
        do {
          pqVar10[7] = pqVar10[uVar35 + 1];
          uVar31 = uVar31 - 1;
          pqVar10 = pqVar10 + -1;
        } while (uVar26 <= uVar31);
      }
    }
    lVar28 = (uVar26 & 0xff) - lVar19;
    *(char *)((long)pqVar39 + 0xe) = (char)lVar28;
    if ((int)uVar25 != (int)uVar18) {
      pqVar10 = (qword *)((long)pcVar12 + (uVar18 + 2) * 8);
      uVar35 = (uVar25 * 8 + uVar18 * -8) - 8;
      pqVar16 = pqVar10;
      if ((0x47 < uVar35) &&
         ("" < (char *)((long)pqVar39 + ((uVar26 & 0xff) * 8 - (long)((long)pcVar12 + uVar25 * 8))))
         ) {
        uVar25 = (uVar35 >> 3) + 1;
        uVar35 = uVar25 & 0x3ffffffffffffffc;
        uVar26 = uVar35;
        pqVar16 = pqVar39 + lVar28;
        pqVar27 = (qword *)((long)pcVar12 + uVar18 * 8);
        do {
          qVar38 = pqVar27[2];
          qVar45 = pqVar27[5];
          qVar43 = pqVar27[4];
          pqVar16[3] = pqVar27[3];
          pqVar16[2] = qVar38;
          pqVar16[5] = qVar45;
          pqVar16[4] = qVar43;
          uVar26 = uVar26 - 4;
          pqVar16 = pqVar16 + 4;
          pqVar27 = pqVar27 + 4;
        } while (uVar26 != 0);
        pqVar16 = pqVar10 + uVar35;
        lVar28 = lVar28 + uVar35;
        if (uVar25 == uVar35) goto LAB_0055d900;
      }
      pqVar27 = pqVar39 + lVar28 + 2;
      do {
        pqVar32 = pqVar16 + 1;
        *pqVar27 = *pqVar16;
        pqVar27 = pqVar27 + 1;
        pqVar16 = pqVar32;
      } while (pqVar32 != pqVar10 + lVar19);
    }
LAB_0055d900:
    pqVar10 = (qword *)((long)pcVar12 + 8);
    *pqVar39 = *pqVar39 + *(qword *)pcVar12;
    if ((*pqVar10 & 0xfffffffd) == 4) {
      __ZdlPv(pcVar12);
    }
    else {
      bVar6 = *(byte *)((long)pcVar12 + 0xf);
      if ((uint)*(byte *)((long)pcVar12 + 0xe) != (uint)bVar6) {
        pqVar16 = (qword *)((long)pcVar12 + ((ulong)*(byte *)((long)pcVar12 + 0xe) + 2) * 8);
        do {
          piVar3 = (int *)(*pqVar16 + 8);
          do {
            cVar21 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = *piVar3 + 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          pqVar16 = pqVar16 + 1;
        } while (pqVar16 != (qword *)((long)pcVar12 + ((ulong)(uint)bVar6 + 2) * 8));
      }
      do {
        qVar38 = *pqVar10;
        cVar21 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
        if (bVar9) {
          *(uint *)pqVar10 = (uint)qVar38 - 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if (((uint)qVar38 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar12);
      }
    }
    pcVar12 = (char *)pqVar39;
    iVar15 = iVar37;
    if (bVar4 != bVar5) {
LAB_0055d744:
      pqVar39 = (qword *)((long)register0x00000008 + -0x1d8);
      FUN_0055b6d0(pqVar39,pqVar14,uVar23,qVar36,pcVar12,iVar15);
      return pqVar39;
    }
LAB_0055d99c:
    pqVar39 = (qword *)pcVar12;
    if (iVar37 != 0) {
      if (iVar37 == 1) {
        pqVar10 = pqVar14 + 1;
        do {
          qVar36 = *pqVar10;
          cVar21 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
          if (bVar9) {
            *(uint *)pqVar10 = (uint)qVar36 - 4;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
        if (((uint)qVar36 & 0xfffffff9) == 0) {
          func_0x0055b598(pqVar14);
        }
      }
      else {
        pqVar39 = &segment_command_00000020.vmsize;
        __Znwm();
        *(undefined4 *)(pqVar39 + 1) = 4;
        *pqVar39 = *pqVar14 + *(qword *)pcVar12;
        bVar4 = *(char *)((long)pcVar12 + 0xd) + 1;
        *(char *)((long)pqVar39 + 0xc) = '\x03';
        *(byte *)((long)pqVar39 + 0xd) = bVar4;
        ((char *)((long)pqVar39 + 0xe))[0] = '\0';
        ((char *)((long)pqVar39 + 0xe))[1] = '\x02';
        pqVar39[2] = (qword)pcVar12;
        pqVar39[3] = (qword)pqVar14;
        if ((0xb < bVar4) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar39 + 0xd))) {
          *(char **)((long)register0x00000008 + -0x1f0) =
               "tree->height() <= CordRepBtree::kMaxHeight";
          *(char **)((long)register0x00000008 + -0x1e8) = "Max height exceeded";
          FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x55daa4);
          (*pcVar8)();
        }
      }
    }
    return pqVar39;
  }
  *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x168) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x160) = unaff_x26;
  *(qword **)((long)register0x00000008 + -0x158) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x24;
  *(undefined1 **)((long)register0x00000008 + -0x148) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x140) = unaff_x22;
  *(qword **)((long)register0x00000008 + -0x138) = pqVar39;
  *(qword **)((long)register0x00000008 + -0x130) = unaff_x20;
  *(qword **)((long)register0x00000008 + -0x128) = pqVar10;
  *(undefined8 *)((long)register0x00000008 + -0x120) =
       *(undefined8 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x118) =
       *(undefined8 *)((long)register0x00000008 + -0x118);
  qVar36 = *pqVar14;
  bVar4 = *(byte *)((long)pcVar12 + 0xd);
  bVar5 = *(byte *)((long)pqVar14 + 0xd);
  uVar22 = (uint)bVar4 - (uint)bVar5;
  uVar23 = (ulong)uVar22;
  pqVar39 = (qword *)pcVar12;
  if ((int)uVar22 < 1) {
    uVar25 = 0;
  }
  else {
    uVar18 = 0;
    do {
      uVar25 = uVar18;
      if ((pqVar39[1] & 0xfffffffd) != 4) break;
      *(qword **)((long)register0x00000008 + uVar18 * 8 + -0x1d0) = pqVar39;
      uVar18 = uVar18 + 1;
      pqVar39 = (qword *)pqVar39[(ulong)*(byte *)((long)pqVar39 + 0xf) + 1];
      uVar25 = uVar23;
    } while (uVar23 != uVar18);
  }
  iVar15 = (int)uVar25;
  iVar37 = iVar15;
  if ((pqVar39[1] & 0xfffffffd) == 4) {
    iVar37 = iVar15 + 1;
  }
  *(int *)((long)register0x00000008 + -0x1d8) = iVar37;
  if (iVar15 < (int)uVar22) {
    puVar17 = (undefined8 *)((long)register0x00000008 + (uVar25 & 0xffffffff) * 8 + -0x1d8);
    do {
      puVar17 = puVar17 + 1;
      *puVar17 = pqVar39;
      pqVar39 = (qword *)pqVar39[(ulong)*(byte *)((long)pqVar39 + 0xf) + 1];
      uVar1 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar22);
  }
  uVar18 = (ulong)*(byte *)((long)pqVar14 + 0xf);
  uVar25 = (ulong)*(byte *)((long)pqVar14 + 0xe);
  if (6 < (*(byte *)((long)pqVar39 + 0xf) + uVar18) - (*(byte *)((long)pqVar39 + 0xe) + uVar25)) {
    iVar37 = 2;
    iVar15 = 2;
    if ((uint)bVar4 != (uint)bVar5) goto LAB_0055d280;
    goto LAB_0055d44c;
  }
  if ((int)uVar22 < iVar37) {
    iVar15 = 0;
    pqVar10 = pqVar39;
  }
  else {
    qVar38 = *pqVar39;
    pqVar10 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar10 + 1) = 4;
    *pqVar10 = qVar38;
    uVar41 = *(undefined8 *)((long)pqVar39 + 0x14);
    uVar40 = *(undefined8 *)((long)pqVar39 + 0xc);
    uVar44 = *(undefined8 *)((long)pqVar39 + 0x24);
    uVar42 = *(undefined8 *)((long)pqVar39 + 0x1c);
    uVar47 = *(undefined8 *)((long)pqVar39 + 0x34);
    uVar46 = *(undefined8 *)((long)pqVar39 + 0x2c);
    *(undefined4 *)((long)pqVar10 + 0x3c) = *(undefined4 *)((long)pqVar39 + 0x3c);
    *(undefined8 *)((long)pqVar10 + 0x34) = uVar47;
    *(undefined8 *)((long)pqVar10 + 0x2c) = uVar46;
    *(undefined8 *)((long)pqVar10 + 0x24) = uVar44;
    *(undefined8 *)((long)pqVar10 + 0x1c) = uVar42;
    *(undefined8 *)((long)pqVar10 + 0x14) = uVar41;
    *(undefined8 *)((long)pqVar10 + 0xc) = uVar40;
    bVar6 = *(byte *)((long)pqVar39 + 0xf);
    if ((uint)*(byte *)((long)pqVar39 + 0xe) != (uint)bVar6) {
      pqVar16 = pqVar39 + (ulong)*(byte *)((long)pqVar39 + 0xe) + 2;
      do {
        piVar3 = (int *)(*pqVar16 + 8);
        do {
          cVar21 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = *piVar3 + 4;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
        pqVar16 = pqVar16 + 1;
      } while (pqVar16 != pqVar39 + (ulong)(uint)bVar6 + 2);
      uVar25 = (ulong)*(byte *)((long)pqVar14 + 0xe);
      uVar18 = (ulong)*(byte *)((long)pqVar14 + 0xf);
    }
    iVar15 = 1;
  }
  bVar6 = *(byte *)((long)pqVar10 + 0xe);
  uVar35 = (ulong)bVar6;
  bVar7 = *(byte *)((long)pqVar10 + 0xf);
  uVar31 = (ulong)bVar7;
  uVar26 = uVar31;
  if (bVar6 != 0) {
    uVar26 = uVar31 - uVar35;
    *(char *)((long)pqVar10 + 0xe) = '\0';
    *(char *)((long)pqVar10 + 0xf) = (char)uVar26;
    if (bVar7 != bVar6) {
      if (uVar26 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar26 & 6;
        uVar34 = uVar30;
        pqVar39 = pqVar10;
        do {
          pqVar16 = pqVar39 + 2;
          qVar38 = pqVar16[uVar35];
          pqVar39[3] = (pqVar16 + uVar35)[1];
          *pqVar16 = qVar38;
          uVar34 = uVar34 - 2;
          pqVar39 = pqVar16;
        } while (uVar34 != 0);
        if (uVar26 == uVar30) goto LAB_0055d338;
      }
      lVar19 = (uVar30 + uVar35) - uVar31;
      pqVar39 = pqVar10 + uVar30 + 2;
      pqVar16 = pqVar10 + uVar30 + uVar35 + 2;
      do {
        *pqVar39 = *pqVar16;
        bVar9 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        pqVar39 = pqVar39 + 1;
        pqVar16 = pqVar16 + 1;
      } while (bVar9);
    }
  }
LAB_0055d338:
  cVar21 = (char)uVar26;
  if ((int)uVar18 != (int)uVar25) {
    pqVar39 = pqVar14 + uVar25 + 2;
    uVar26 = uVar26 & 0xffffffff;
    uVar35 = (uVar18 * 8 + uVar25 * -8) - 8;
    pqVar16 = pqVar39;
    if ((uVar35 < 0x48) ||
       (pqVar27 = pqVar10 + uVar26, (ulong)((long)pqVar27 - (long)(pqVar14 + uVar25)) < 0x20)) {
LAB_0055d380:
      uVar35 = uVar26;
      do {
        pqVar27 = pqVar16 + 1;
        uVar26 = uVar35 + 1;
        pqVar10[uVar35 + 2] = *pqVar16;
        pqVar16 = pqVar27;
        uVar35 = uVar26;
      } while (pqVar27 != pqVar39 + (uVar18 - uVar25));
    }
    else {
      uVar35 = (uVar35 >> 3) + 1;
      uVar34 = uVar35 & 0x3ffffffffffffffc;
      uVar26 = uVar34 + uVar26;
      pqVar16 = pqVar39 + uVar34;
      uVar31 = uVar34;
      pqVar32 = pqVar14 + uVar25;
      do {
        qVar38 = pqVar32[2];
        qVar45 = pqVar32[5];
        qVar43 = pqVar32[4];
        pqVar27[3] = pqVar32[3];
        pqVar27[2] = qVar38;
        pqVar27[5] = qVar45;
        pqVar27[4] = qVar43;
        uVar31 = uVar31 - 4;
        pqVar27 = pqVar27 + 4;
        pqVar32 = pqVar32 + 4;
      } while (uVar31 != 0);
      if (uVar35 != uVar34) goto LAB_0055d380;
    }
    cVar21 = (char)uVar26;
  }
  *(char *)((long)pqVar10 + 0xf) = cVar21;
  pqVar39 = pqVar14 + 1;
  *pqVar10 = *pqVar10 + *pqVar14;
  if ((*pqVar39 & 0xfffffffd) == 4) {
    __ZdlPv(pqVar14);
  }
  else {
    bVar6 = *(byte *)((long)pqVar14 + 0xf);
    if ((uint)*(byte *)((long)pqVar14 + 0xe) != (uint)bVar6) {
      pqVar16 = pqVar14 + (ulong)*(byte *)((long)pqVar14 + 0xe) + 2;
      do {
        piVar3 = (int *)(*pqVar16 + 8);
        do {
          cVar21 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = *piVar3 + 4;
            cVar21 = ExclusiveMonitorsStatus();
          }
        } while (cVar21 != '\0');
        pqVar16 = pqVar16 + 1;
      } while (pqVar16 != pqVar14 + (ulong)(uint)bVar6 + 2);
    }
    do {
      qVar38 = *pqVar39;
      cVar21 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pqVar39,0x10);
      if (bVar9) {
        *(uint *)pqVar39 = (uint)qVar38 - 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    if (((uint)qVar38 & 0xfffffff9) == 0) {
      func_0x0055b598(pqVar14);
    }
  }
  pqVar14 = pqVar10;
  iVar37 = iVar15;
  if (bVar4 != bVar5) {
LAB_0055d280:
    pqVar39 = (qword *)((long)register0x00000008 + -0x1d8);
    FUN_0055bdcc(pqVar39,pcVar12,uVar23,qVar36,pqVar14,iVar37);
    return pqVar39;
  }
LAB_0055d44c:
  pqVar39 = pqVar14;
  if (iVar15 != 0) {
    if (iVar15 == 1) {
      pqVar10 = (qword *)((long)pcVar12 + 8);
      do {
        qVar36 = *pqVar10;
        cVar21 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
        if (bVar9) {
          *(uint *)pqVar10 = (uint)qVar36 - 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if (((uint)qVar36 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar12);
      }
    }
    else {
      pqVar39 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar39 + 1) = 4;
      *pqVar39 = *pqVar14 + *(qword *)pcVar12;
      bVar4 = *(char *)((long)pcVar12 + 0xd) + 1;
      *(char *)((long)pqVar39 + 0xc) = '\x03';
      *(byte *)((long)pqVar39 + 0xd) = bVar4;
      ((char *)((long)pqVar39 + 0xe))[0] = '\0';
      ((char *)((long)pqVar39 + 0xe))[1] = '\x02';
      pqVar39[2] = (qword)pcVar12;
      pqVar39[3] = (qword)pqVar14;
      if ((0xb < bVar4) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar39 + 0xd))) {
        *(char **)((long)register0x00000008 + -0x1f0) = "tree->height() <= CordRepBtree::kMaxHeight"
        ;
        *(char **)((long)register0x00000008 + -0x1e8) = "Max height exceeded";
        FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x55d5c0);
        (*pcVar8)();
      }
    }
  }
  return pqVar39;
}



/* Entry: 00559fa8; end: 0055a307;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_00559fa8(byte *param_1,qword *param_2)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  qword *pqVar10;
  qword *pqVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong **ppuVar14;
  qword *pqVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  qword *pqVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  char cVar23;
  uint uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  qword *pqVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  qword *pqVar32;
  ulong *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong **unaff_x20;
  ulong **ppuVar36;
  qword qVar37;
  int iVar38;
  qword qVar39;
  ulong **ppuVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  qword qVar44;
  undefined8 uVar45;
  qword qVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  qword aqStack_1d8 [13];
  ulong **ppuStack_130;
  qword *pqStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong **ppuStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte abStack_c4 [12];
  long alStack_b8 [12];
  long lStack_58;
  
  ppuVar14 = &puStack_100;
  pqVar10 = (qword *)0x0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_100 = (ulong *)0x0;
  uStack_f8 = 0;
  if ((*param_1 & 1) != 0) {
    pqVar10 = *(qword **)(param_1 + 8);
  }
  FUN_0055a308();
  if ((int)pqVar10 == 0) {
    lStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    ppuStack_d8 = (ulong **)0x0;
    uStack_e0 = 0;
    uStack_c8 = 0xffffffff;
    bVar3 = *param_1;
    lVar21 = lStack_d0;
    if ((((long)(char)bVar3 & 1U) == 0) ||
       (puVar25 = *(ulong **)(param_1 + 8), puVar25 == (ulong *)0x0)) {
      ppuVar40 = (ulong **)((ulong)(long)(char)bVar3 >> 1);
      ppuVar14 = (ulong **)0x0;
      unaff_x20 = ppuVar40;
      if ((bVar3 & 1) != 0) goto joined_r0x0055a0f0;
      ppuVar14 = (ulong **)(param_1 + 1);
      goto joined_r0x0055a0f0;
    }
    ppuVar40 = (ulong **)*puVar25;
    ppuStack_d8 = ppuVar40;
    if (ppuVar40 != (ulong **)0x0) {
      bVar3 = *(byte *)((long)puVar25 + 0xc);
      if (bVar3 == 2) {
        puVar25 = (ulong *)puVar25[2];
        bVar3 = *(byte *)((long)puVar25 + 0xc);
      }
      if (bVar3 == 3) {
        uVar17 = (ulong)*(byte *)((long)puVar25 + 0xd);
        uStack_c8 = (uint)*(byte *)((long)puVar25 + 0xd);
        bVar3 = *(byte *)((long)puVar25 + 0xe);
        uVar26 = (ulong)bVar3;
        alStack_b8[uVar17] = (long)puVar25;
        abStack_c4[uVar17] = bVar3;
        puVar33 = puVar25;
        if (uVar17 != 0) {
          do {
            puVar33 = (ulong *)puVar33[uVar26 + 2];
            *(ulong **)(abStack_c4 + uVar17 * 8 + 4) = puVar33;
            uVar26 = (ulong)*(byte *)((long)puVar33 + 0xe);
            abStack_c4[uVar17 - 1] = *(byte *)((long)puVar33 + 0xe);
            bVar9 = uVar17 != 0;
            uVar17 = uVar17 - 1;
          } while (bVar9 && uVar17 != 0);
        }
        puVar33 = *(ulong **)(alStack_b8[0] + uVar26 * 8 + 0x10);
        unaff_x20 = (ulong **)*puVar33;
        lStack_d0 = *puVar25 - (long)unaff_x20;
        bVar3 = *(byte *)((long)puVar33 + 0xc);
        if (bVar3 == 1) {
          uVar17 = puVar33[2];
          puVar33 = (ulong *)puVar33[3];
          bVar3 = *(byte *)((long)puVar33 + 0xc);
        }
        else {
          uVar17 = 0;
        }
        if (bVar3 < 6) {
          uVar26 = *(ulong *)((long)puVar33 + 0x10);
        }
        else {
          uVar26 = (long)puVar33 + 0xd;
        }
        ppuVar14 = (ulong **)(uVar26 + uVar17);
        lVar21 = lStack_d0;
        goto joined_r0x0055a0f0;
      }
      if (bVar3 == 1) {
        uVar17 = puVar25[2];
        puVar33 = (ulong *)puVar25[3];
        ppuVar36 = (ulong **)*puVar25;
        puVar25 = puVar33;
        if (5 < *(byte *)((long)puVar33 + 0xc)) goto LAB_0055a190;
LAB_0055a174:
        uVar26 = puVar25[2];
      }
      else {
        uVar17 = 0;
        ppuVar36 = (ulong **)*puVar25;
        if (bVar3 < 6) goto LAB_0055a174;
LAB_0055a190:
        uVar26 = (long)puVar25 + 0xd;
      }
      ppuVar14 = (ulong **)(uVar26 + uVar17);
      do {
        while( true ) {
          pqVar10 = param_2;
          _memcpy(param_2,ppuVar14,ppuVar36);
          ppuVar40 = (ulong **)((long)ppuVar40 - (long)ppuVar36);
          unaff_x20 = ppuVar36;
          ppuStack_d8 = ppuVar40;
          if (ppuVar40 == (ulong **)0x0) goto LAB_0055a0f4;
          if (((-1 < (int)uStack_c8) && (alStack_b8[uStack_c8] != 0)) && (lVar21 != 0)) break;
          unaff_x20 = (ulong **)0x0;
          ppuVar14 = (ulong **)0x0;
joined_r0x0055a2b8:
          param_2 = (qword *)((long)param_2 + (long)ppuVar36);
joined_r0x0055a0f0:
          ppuVar36 = unaff_x20;
          if (ppuVar40 == (ulong **)0x0) goto LAB_0055a0f4;
        }
        if ((ulong)*(byte *)(alStack_b8[0] + 0xf) - 1 == (ulong)abStack_c4[0]) {
          uVar26 = 0;
          do {
            uVar20 = uVar26;
            if (uStack_c8 == uVar20) {
              puVar25 = (ulong *)0x0;
              unaff_x20 = (ulong **)0x100000cfeedfacf;
              lStack_d0 = lVar21 + -0x100000cfeedfacf;
              bVar3 = 6;
              goto LAB_0055a2dc;
            }
            lVar29 = alStack_b8[uVar20 + 1];
            uVar17 = (ulong)abStack_c4[uVar20 + 1] + 1;
            uVar26 = uVar20 + 1;
          } while (uVar17 == *(byte *)(lVar29 + 0xf));
          abStack_c4[uVar20 + 1] = (byte)uVar17;
          lVar21 = (long)(int)(uVar20 + 1);
          do {
            lVar29 = *(long *)(lVar29 + uVar17 * 8 + 0x10);
            lVar7 = lVar21 + -1;
            alStack_b8[lVar7] = lVar29;
            uVar17 = (ulong)*(byte *)(lVar29 + 0xe);
            abStack_c4[lVar21 + -1] = *(byte *)(lVar29 + 0xe);
            bVar9 = 0 < lVar21;
            lVar21 = lVar7;
          } while (lVar7 != 0 && bVar9);
        }
        else {
          abStack_c4[0] = abStack_c4[0] + 1;
          uVar17 = (ulong)abStack_c4[0];
          lVar29 = alStack_b8[0];
          lStack_d0 = lVar21;
        }
        puVar25 = *(ulong **)(lVar29 + uVar17 * 8 + 0x10);
        unaff_x20 = (ulong **)*puVar25;
        lStack_d0 = lStack_d0 - (long)unaff_x20;
        bVar3 = *(byte *)((long)puVar25 + 0xc);
        if (bVar3 == 1) {
          uVar17 = puVar25[2];
          puVar25 = (ulong *)puVar25[3];
          bVar3 = *(byte *)((long)puVar25 + 0xc);
        }
        else {
LAB_0055a2dc:
          uVar17 = 0;
        }
        lVar21 = lStack_d0;
        if (bVar3 < 6) {
          ppuVar14 = (ulong **)(puVar25[2] + uVar17);
          goto joined_r0x0055a2b8;
        }
        ppuVar14 = (ulong **)((long)puVar25 + uVar17 + 0xd);
        param_2 = (qword *)((long)param_2 + (long)ppuVar36);
        ppuVar36 = unaff_x20;
      } while (ppuVar40 != (ulong **)0x0);
    }
  }
  else {
    pqVar10 = param_2;
    ppuVar14 = (ulong **)puStack_100;
    _memcpy(param_2,puStack_100,uStack_f8);
  }
LAB_0055a0f4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pqVar10;
  }
  ___stack_chk_fail();
  if (*pqVar10 == 0) {
    *ppuVar14 = (ulong *)0x0;
    ppuVar14[1] = (ulong *)0x0;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  bVar3 = *(byte *)((long)pqVar10 + 0xc);
  if (bVar3 == 2) {
    pqVar10 = (qword *)pqVar10[2];
    bVar3 = *(byte *)((long)pqVar10 + 0xc);
  }
  if (5 < bVar3) {
    uVar17 = *pqVar10;
    *ppuVar14 = (ulong *)((long)pqVar10 + 0xd);
    ppuVar14[1] = (ulong *)uVar17;
LAB_0055a330:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar3 != 1) {
    if (bVar3 == 3) {
      if ((*(char *)((long)pqVar10 + 0xd) == '\0') &&
         ((ulong)*(byte *)((long)pqVar10 + 0xf) - (ulong)*(byte *)((long)pqVar10 + 0xe) == 1)) {
        if (ppuVar14 != (ulong **)0x0) {
          puVar25 = (ulong *)pqVar10[(ulong)*(byte *)((long)pqVar10 + 0xe) + 2];
          bVar3 = *(byte *)((long)puVar25 + 0xc);
          if (bVar3 == 1) {
            uVar17 = puVar25[2];
            bVar3 = *(byte *)((long)puVar25[3] + 0xc);
            puVar33 = (ulong *)puVar25[3];
          }
          else {
            uVar17 = 0;
            puVar33 = puVar25;
          }
          uVar26 = *puVar25;
          if (bVar3 < 6) {
            *ppuVar14 = (ulong *)(puVar33[2] + uVar17);
            ppuVar14[1] = (ulong *)uVar26;
            return (qword *)((long)&MACH_HEADER.magic + 1);
          }
          *ppuVar14 = (ulong *)((long)puVar33 + uVar17 + 0xd);
          ppuVar14[1] = (ulong *)uVar26;
          return (qword *)((long)&MACH_HEADER.magic + 1);
        }
        goto LAB_0055a330;
      }
    }
    else if (bVar3 == 5) {
      uVar17 = *pqVar10;
      *ppuVar14 = (ulong *)pqVar10[2];
      ppuVar14[1] = (ulong *)uVar17;
      return (qword *)((long)&MACH_HEADER.magic + 1);
    }
    return (qword *)0x0;
  }
  puVar18 = (undefined8 *)pqVar10[3];
  bVar3 = *(byte *)((long)puVar18 + 0xc);
  if (5 < bVar3) {
    uVar17 = *pqVar10;
    *ppuVar14 = (ulong *)((long)puVar18 + pqVar10[2] + 0xd);
    ppuVar14[1] = (ulong *)uVar17;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar3 != 3) {
    if (bVar3 != 5) {
      return (qword *)0x0;
    }
    uVar17 = *pqVar10;
    *ppuVar14 = (ulong *)(puVar18[2] + pqVar10[2]);
    ppuVar14[1] = (ulong *)uVar17;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pqVar15 = (qword *)pqVar10[2];
  uVar17 = *pqVar10;
  pcStack_108 = FUN_0055a308;
  if (uVar17 == 0) {
    return (qword *)0x0;
  }
  uVar24 = (uint)*(byte *)((long)puVar18 + 0xd);
  do {
    puVar12 = (undefined8 *)puVar18[(ulong)*(byte *)((long)puVar18 + 0xe) + 2];
    plVar22 = (long *)*puVar12;
    if (plVar22 <= pqVar15) {
      puVar18 = puVar18 + (ulong)*(byte *)((long)puVar18 + 0xe) + 3;
      do {
        pqVar15 = (qword *)((long)pqVar15 - (long)plVar22);
        puVar12 = (undefined8 *)*puVar18;
        plVar22 = (long *)*puVar12;
        puVar18 = puVar18 + 1;
      } while (plVar22 <= pqVar15);
    }
    if (plVar22 < (long *)((long)pqVar15 + uVar17)) {
      return (qword *)0x0;
    }
    bVar9 = 0 < (int)uVar24;
    puVar18 = puVar12;
    uVar24 = uVar24 - 1;
  } while (bVar9);
  if (ppuVar14 == (ulong **)0x0) goto LAB_0055db5c;
  if (*(byte *)((long)puVar12 + 0xc) == 1) {
    lVar21 = puVar12[2];
    puVar12 = (undefined8 *)puVar12[3];
    if (5 < *(byte *)((long)puVar12 + 0xc)) goto LAB_0055db3c;
LAB_0055db1c:
    lVar29 = puVar12[2];
  }
  else {
    lVar21 = 0;
    if (*(byte *)((long)puVar12 + 0xc) < 6) goto LAB_0055db1c;
LAB_0055db3c:
    lVar29 = (long)puVar12 + 0xd;
  }
  if (pqVar15 <= plVar22) {
    uVar26 = (long)plVar22 - (long)pqVar15;
    if (uVar17 <= (ulong)((long)plVar22 - (long)pqVar15)) {
      uVar26 = uVar17;
    }
    *ppuVar14 = (ulong *)(lVar29 + lVar21 + (long)pqVar15);
    ppuVar14[1] = (ulong *)uVar26;
LAB_0055db5c:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pcVar13 = "string_view::substr";
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_00435534();
  uStack_118 = 0x55db74;
  if (*(char *)((long)pqVar15 + 0xc) != '\x03') {
    ppuStack_130 = &pqStack_128;
    pqStack_128 = (qword *)pcVar13;
    puStack_120 = (undefined1 *)&puStack_110;
    func_0x0055e638(pqVar15,&ppuStack_130,0x55e534);
    return pqStack_128;
  }
  ppuStack_130 = unaff_x20;
  pqStack_128 = param_2;
  if (*(byte *)((long)pcVar13 + 0xd) < *(byte *)((long)pqVar15 + 0xd)) {
    qVar37 = *(qword *)pcVar13;
    bVar3 = *(byte *)((long)pqVar15 + 0xd);
    bVar4 = *(byte *)((long)pcVar13 + 0xd);
    uVar24 = (uint)bVar3 - (uint)bVar4;
    uVar17 = (ulong)uVar24;
    pqVar10 = pqVar15;
    if ((int)uVar24 < 1) {
      uVar26 = 0;
      puStack_120 = (undefined1 *)&puStack_110;
    }
    else {
      uVar20 = 0;
      puStack_120 = (undefined1 *)&puStack_110;
      do {
        uVar26 = uVar20;
        if ((pqVar10[1] & 0xfffffffd) != 4) break;
        aqStack_1d8[uVar20 + 1] = (qword)pqVar10;
        uVar20 = uVar20 + 1;
        pqVar10 = (qword *)pqVar10[(ulong)*(byte *)((long)pqVar10 + 0xe) + 2];
        uVar26 = uVar17;
      } while (uVar17 != uVar20);
    }
    iVar16 = (int)uVar26;
    aqStack_1d8[0]._0_4_ = iVar16;
    if ((pqVar10[1] & 0xfffffffd) == 4) {
      aqStack_1d8[0]._0_4_ = iVar16 + 1;
    }
    if (iVar16 < (int)uVar24) {
      pqVar11 = aqStack_1d8 + (uVar26 & 0xffffffff);
      do {
        pqVar11 = pqVar11 + 1;
        *pqVar11 = (qword)pqVar10;
        pqVar10 = (qword *)pqVar10[(ulong)*(byte *)((long)pqVar10 + 0xe) + 2];
        uVar1 = (int)uVar26 + 1;
        uVar26 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar24);
    }
    uVar26 = (ulong)*(byte *)((long)pcVar13 + 0xf);
    uVar20 = (ulong)*(byte *)((long)pcVar13 + 0xe);
    if (6 < (*(byte *)((long)pqVar10 + 0xf) + uVar26) - (*(byte *)((long)pqVar10 + 0xe) + uVar20)) {
      iVar38 = 2;
      iVar16 = 2;
      if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d744;
      goto LAB_0055d99c;
    }
    if ((int)uVar24 < (int)aqStack_1d8[0]) {
      iVar16 = 0;
      lVar21 = uVar26 - uVar20;
      bVar5 = *(byte *)((long)pqVar10 + 0xf);
      bVar6 = *(byte *)((long)pqVar10 + 0xe);
    }
    else {
      qVar39 = *pqVar10;
      pqVar11 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar11 + 1) = 4;
      *pqVar11 = qVar39;
      uVar42 = *(undefined8 *)((long)pqVar10 + 0x14);
      uVar41 = *(undefined8 *)((long)pqVar10 + 0xc);
      uVar45 = *(undefined8 *)((long)pqVar10 + 0x24);
      uVar43 = *(undefined8 *)((long)pqVar10 + 0x1c);
      uVar48 = *(undefined8 *)((long)pqVar10 + 0x34);
      uVar47 = *(undefined8 *)((long)pqVar10 + 0x2c);
      *(undefined4 *)((long)pqVar11 + 0x3c) = *(undefined4 *)((long)pqVar10 + 0x3c);
      *(undefined8 *)((long)pqVar11 + 0x34) = uVar48;
      *(undefined8 *)((long)pqVar11 + 0x2c) = uVar47;
      *(undefined8 *)((long)pqVar11 + 0x24) = uVar45;
      *(undefined8 *)((long)pqVar11 + 0x1c) = uVar43;
      *(undefined8 *)((long)pqVar11 + 0x14) = uVar42;
      *(undefined8 *)((long)pqVar11 + 0xc) = uVar41;
      bVar6 = *(byte *)((long)pqVar10 + 0xf);
      if ((uint)*(byte *)((long)pqVar10 + 0xe) != (uint)bVar6) {
        pqVar19 = pqVar10 + (ulong)*(byte *)((long)pqVar10 + 0xe) + 2;
        do {
          piVar2 = (int *)(*pqVar19 + 8);
          do {
            cVar23 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 4;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          pqVar19 = pqVar19 + 1;
        } while (pqVar19 != pqVar10 + (ulong)(uint)bVar6 + 2);
        uVar20 = (ulong)*(byte *)((long)pcVar13 + 0xe);
        uVar26 = (ulong)*(byte *)((long)pcVar13 + 0xf);
      }
      iVar16 = 1;
      lVar21 = uVar26 - uVar20;
      bVar5 = *(byte *)((long)pqVar11 + 0xf);
      bVar6 = *(byte *)((long)pqVar11 + 0xe);
      pqVar10 = pqVar11;
    }
    uVar35 = (ulong)bVar5;
    uVar27 = (ulong)bVar6;
    if (uVar35 != 6) {
      uVar27 = (6 - uVar35) + uVar27;
      *(char *)((long)pqVar10 + 0xf) = '\x06';
      if (uVar27 < 6) {
        uVar31 = 5;
        pqVar11 = pqVar10;
        do {
          pqVar11[7] = pqVar11[uVar35 + 1];
          uVar31 = uVar31 - 1;
          pqVar11 = pqVar11 + -1;
        } while (uVar27 <= uVar31);
      }
    }
    lVar29 = (uVar27 & 0xff) - lVar21;
    *(char *)((long)pqVar10 + 0xe) = (char)lVar29;
    if ((int)uVar26 != (int)uVar20) {
      pqVar11 = (qword *)((long)pcVar13 + (uVar20 + 2) * 8);
      uVar35 = (uVar26 * 8 + uVar20 * -8) - 8;
      pqVar19 = pqVar11;
      if ((0x47 < uVar35) &&
         ("" < (char *)((long)pqVar10 + ((uVar27 & 0xff) * 8 - (long)((long)pcVar13 + uVar26 * 8))))
         ) {
        uVar26 = (uVar35 >> 3) + 1;
        uVar35 = uVar26 & 0x3ffffffffffffffc;
        uVar27 = uVar35;
        pqVar19 = pqVar10 + lVar29;
        pqVar28 = (qword *)((long)pcVar13 + uVar20 * 8);
        do {
          qVar39 = pqVar28[2];
          qVar46 = pqVar28[5];
          qVar44 = pqVar28[4];
          pqVar19[3] = pqVar28[3];
          pqVar19[2] = qVar39;
          pqVar19[5] = qVar46;
          pqVar19[4] = qVar44;
          uVar27 = uVar27 - 4;
          pqVar19 = pqVar19 + 4;
          pqVar28 = pqVar28 + 4;
        } while (uVar27 != 0);
        pqVar19 = pqVar11 + uVar35;
        lVar29 = lVar29 + uVar35;
        if (uVar26 == uVar35) goto LAB_0055d900;
      }
      pqVar28 = pqVar10 + lVar29 + 2;
      do {
        pqVar32 = pqVar19 + 1;
        *pqVar28 = *pqVar19;
        pqVar28 = pqVar28 + 1;
        pqVar19 = pqVar32;
      } while (pqVar32 != pqVar11 + lVar21);
    }
LAB_0055d900:
    pqVar11 = (qword *)((long)pcVar13 + 8);
    *pqVar10 = *pqVar10 + *(qword *)pcVar13;
    if ((*pqVar11 & 0xfffffffd) == 4) {
      __ZdlPv(pcVar13);
    }
    else {
      bVar6 = *(byte *)((long)pcVar13 + 0xf);
      if ((uint)*(byte *)((long)pcVar13 + 0xe) != (uint)bVar6) {
        pqVar19 = (qword *)((long)pcVar13 + ((ulong)*(byte *)((long)pcVar13 + 0xe) + 2) * 8);
        do {
          piVar2 = (int *)(*pqVar19 + 8);
          do {
            cVar23 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 4;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          pqVar19 = pqVar19 + 1;
        } while (pqVar19 != (qword *)((long)pcVar13 + ((ulong)(uint)bVar6 + 2) * 8));
      }
      do {
        qVar39 = *pqVar11;
        cVar23 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
        if (bVar9) {
          *(uint *)pqVar11 = (uint)qVar39 - 4;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      if (((uint)qVar39 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar13);
      }
    }
    pcVar13 = (char *)pqVar10;
    iVar38 = iVar16;
    if (bVar3 != bVar4) {
LAB_0055d744:
      pqVar10 = aqStack_1d8;
      FUN_0055b6d0(pqVar10,pqVar15,uVar17,qVar37,pcVar13,iVar38);
      return pqVar10;
    }
LAB_0055d99c:
    pqVar10 = (qword *)pcVar13;
    if (iVar16 != 0) {
      if (iVar16 == 1) {
        pqVar11 = pqVar15 + 1;
        do {
          qVar37 = *pqVar11;
          cVar23 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
          if (bVar9) {
            *(uint *)pqVar11 = (uint)qVar37 - 4;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (((uint)qVar37 & 0xfffffff9) == 0) {
          func_0x0055b598(pqVar15);
        }
      }
      else {
        pqVar10 = &segment_command_00000020.vmsize;
        __Znwm();
        *(undefined4 *)(pqVar10 + 1) = 4;
        *pqVar10 = *pqVar15 + *(qword *)pcVar13;
        bVar3 = *(char *)((long)pcVar13 + 0xd) + 1;
        *(char *)((long)pqVar10 + 0xc) = '\x03';
        *(byte *)((long)pqVar10 + 0xd) = bVar3;
        ((char *)((long)pqVar10 + 0xe))[0] = '\0';
        ((char *)((long)pqVar10 + 0xe))[1] = '\x02';
        pqVar10[2] = (qword)pcVar13;
        pqVar10[3] = (qword)pqVar15;
        if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar10 + 0xd))) {
          FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x55daa4);
          (*pcVar8)();
        }
      }
    }
    return pqVar10;
  }
  qVar37 = *pqVar15;
  bVar3 = *(byte *)((long)pcVar13 + 0xd);
  bVar4 = *(byte *)((long)pqVar15 + 0xd);
  uVar24 = (uint)bVar3 - (uint)bVar4;
  uVar17 = (ulong)uVar24;
  pqVar10 = (qword *)pcVar13;
  if ((int)uVar24 < 1) {
    uVar26 = 0;
    puStack_120 = (undefined1 *)&puStack_110;
  }
  else {
    uVar20 = 0;
    puStack_120 = (undefined1 *)&puStack_110;
    do {
      uVar26 = uVar20;
      if ((pqVar10[1] & 0xfffffffd) != 4) break;
      aqStack_1d8[uVar20 + 1] = (qword)pqVar10;
      uVar20 = uVar20 + 1;
      pqVar10 = (qword *)pqVar10[(ulong)*(byte *)((long)pqVar10 + 0xf) + 1];
      uVar26 = uVar17;
    } while (uVar17 != uVar20);
  }
  iVar16 = (int)uVar26;
  aqStack_1d8[0]._0_4_ = iVar16;
  if ((pqVar10[1] & 0xfffffffd) == 4) {
    aqStack_1d8[0]._0_4_ = iVar16 + 1;
  }
  if (iVar16 < (int)uVar24) {
    pqVar11 = aqStack_1d8 + (uVar26 & 0xffffffff);
    do {
      pqVar11 = pqVar11 + 1;
      *pqVar11 = (qword)pqVar10;
      pqVar10 = (qword *)pqVar10[(ulong)*(byte *)((long)pqVar10 + 0xf) + 1];
      uVar1 = (int)uVar26 + 1;
      uVar26 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar24);
  }
  uVar20 = (ulong)*(byte *)((long)pqVar15 + 0xf);
  uVar26 = (ulong)*(byte *)((long)pqVar15 + 0xe);
  if (6 < (*(byte *)((long)pqVar10 + 0xf) + uVar20) - (*(byte *)((long)pqVar10 + 0xe) + uVar26)) {
    iVar16 = 2;
    iVar38 = 2;
    if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d280;
    goto LAB_0055d44c;
  }
  if ((int)uVar24 < (int)aqStack_1d8[0]) {
    iVar38 = 0;
    pqVar11 = pqVar10;
  }
  else {
    qVar39 = *pqVar10;
    pqVar11 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar11 + 1) = 4;
    *pqVar11 = qVar39;
    uVar42 = *(undefined8 *)((long)pqVar10 + 0x14);
    uVar41 = *(undefined8 *)((long)pqVar10 + 0xc);
    uVar45 = *(undefined8 *)((long)pqVar10 + 0x24);
    uVar43 = *(undefined8 *)((long)pqVar10 + 0x1c);
    uVar48 = *(undefined8 *)((long)pqVar10 + 0x34);
    uVar47 = *(undefined8 *)((long)pqVar10 + 0x2c);
    *(undefined4 *)((long)pqVar11 + 0x3c) = *(undefined4 *)((long)pqVar10 + 0x3c);
    *(undefined8 *)((long)pqVar11 + 0x34) = uVar48;
    *(undefined8 *)((long)pqVar11 + 0x2c) = uVar47;
    *(undefined8 *)((long)pqVar11 + 0x24) = uVar45;
    *(undefined8 *)((long)pqVar11 + 0x1c) = uVar43;
    *(undefined8 *)((long)pqVar11 + 0x14) = uVar42;
    *(undefined8 *)((long)pqVar11 + 0xc) = uVar41;
    bVar6 = *(byte *)((long)pqVar10 + 0xf);
    if ((uint)*(byte *)((long)pqVar10 + 0xe) != (uint)bVar6) {
      pqVar19 = pqVar10 + (ulong)*(byte *)((long)pqVar10 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar19 + 8);
        do {
          cVar23 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 4;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        pqVar19 = pqVar19 + 1;
      } while (pqVar19 != pqVar10 + (ulong)(uint)bVar6 + 2);
      uVar26 = (ulong)*(byte *)((long)pqVar15 + 0xe);
      uVar20 = (ulong)*(byte *)((long)pqVar15 + 0xf);
    }
    iVar38 = 1;
  }
  bVar6 = *(byte *)((long)pqVar11 + 0xe);
  uVar35 = (ulong)bVar6;
  bVar5 = *(byte *)((long)pqVar11 + 0xf);
  uVar31 = (ulong)bVar5;
  uVar27 = uVar31;
  if (bVar6 != 0) {
    uVar27 = uVar31 - uVar35;
    *(char *)((long)pqVar11 + 0xe) = '\0';
    *(char *)((long)pqVar11 + 0xf) = (char)uVar27;
    if (bVar5 != bVar6) {
      if (uVar27 < 2) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar27 & 6;
        uVar34 = uVar30;
        pqVar10 = pqVar11;
        do {
          pqVar19 = pqVar10 + 2;
          qVar39 = pqVar19[uVar35];
          pqVar10[3] = (pqVar19 + uVar35)[1];
          *pqVar19 = qVar39;
          uVar34 = uVar34 - 2;
          pqVar10 = pqVar19;
        } while (uVar34 != 0);
        if (uVar27 == uVar30) goto LAB_0055d338;
      }
      lVar21 = (uVar30 + uVar35) - uVar31;
      pqVar10 = pqVar11 + uVar30 + 2;
      pqVar19 = pqVar11 + uVar30 + uVar35 + 2;
      do {
        *pqVar10 = *pqVar19;
        bVar9 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        pqVar10 = pqVar10 + 1;
        pqVar19 = pqVar19 + 1;
      } while (bVar9);
    }
  }
LAB_0055d338:
  cVar23 = (char)uVar27;
  if ((int)uVar20 != (int)uVar26) {
    pqVar10 = pqVar15 + uVar26 + 2;
    uVar27 = uVar27 & 0xffffffff;
    uVar35 = (uVar20 * 8 + uVar26 * -8) - 8;
    pqVar19 = pqVar10;
    if ((uVar35 < 0x48) ||
       (pqVar28 = pqVar11 + uVar27, (ulong)((long)pqVar28 - (long)(pqVar15 + uVar26)) < 0x20)) {
LAB_0055d380:
      uVar35 = uVar27;
      do {
        pqVar28 = pqVar19 + 1;
        uVar27 = uVar35 + 1;
        pqVar11[uVar35 + 2] = *pqVar19;
        pqVar19 = pqVar28;
        uVar35 = uVar27;
      } while (pqVar28 != pqVar10 + (uVar20 - uVar26));
    }
    else {
      uVar35 = (uVar35 >> 3) + 1;
      uVar34 = uVar35 & 0x3ffffffffffffffc;
      uVar27 = uVar34 + uVar27;
      pqVar19 = pqVar10 + uVar34;
      uVar31 = uVar34;
      pqVar32 = pqVar15 + uVar26;
      do {
        qVar39 = pqVar32[2];
        qVar46 = pqVar32[5];
        qVar44 = pqVar32[4];
        pqVar28[3] = pqVar32[3];
        pqVar28[2] = qVar39;
        pqVar28[5] = qVar46;
        pqVar28[4] = qVar44;
        uVar31 = uVar31 - 4;
        pqVar28 = pqVar28 + 4;
        pqVar32 = pqVar32 + 4;
      } while (uVar31 != 0);
      if (uVar35 != uVar34) goto LAB_0055d380;
    }
    cVar23 = (char)uVar27;
  }
  *(char *)((long)pqVar11 + 0xf) = cVar23;
  pqVar10 = pqVar15 + 1;
  *pqVar11 = *pqVar11 + *pqVar15;
  if ((*pqVar10 & 0xfffffffd) == 4) {
    __ZdlPv(pqVar15);
  }
  else {
    bVar6 = *(byte *)((long)pqVar15 + 0xf);
    if ((uint)*(byte *)((long)pqVar15 + 0xe) != (uint)bVar6) {
      pqVar19 = pqVar15 + (ulong)*(byte *)((long)pqVar15 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar19 + 8);
        do {
          cVar23 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 4;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        pqVar19 = pqVar19 + 1;
      } while (pqVar19 != pqVar15 + (ulong)(uint)bVar6 + 2);
    }
    do {
      qVar39 = *pqVar10;
      cVar23 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
      if (bVar9) {
        *(uint *)pqVar10 = (uint)qVar39 - 4;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
    if (((uint)qVar39 & 0xfffffff9) == 0) {
      func_0x0055b598(pqVar15);
    }
  }
  pqVar15 = pqVar11;
  iVar16 = iVar38;
  if (bVar3 != bVar4) {
LAB_0055d280:
    pqVar10 = aqStack_1d8;
    FUN_0055bdcc(pqVar10,pcVar13,uVar17,qVar37,pqVar15,iVar16);
    return pqVar10;
  }
LAB_0055d44c:
  pqVar10 = pqVar15;
  if (iVar38 != 0) {
    if (iVar38 == 1) {
      pqVar15 = (qword *)((long)pcVar13 + 8);
      do {
        qVar37 = *pqVar15;
        cVar23 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pqVar15,0x10);
        if (bVar9) {
          *(uint *)pqVar15 = (uint)qVar37 - 4;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
      if (((uint)qVar37 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar13);
      }
    }
    else {
      pqVar10 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar10 + 1) = 4;
      *pqVar10 = *pqVar15 + *(qword *)pcVar13;
      bVar3 = *(char *)((long)pcVar13 + 0xd) + 1;
      *(char *)((long)pqVar10 + 0xc) = '\x03';
      *(byte *)((long)pqVar10 + 0xd) = bVar3;
      ((char *)((long)pqVar10 + 0xe))[0] = '\0';
      ((char *)((long)pqVar10 + 0xe))[1] = '\x02';
      pqVar10[2] = (qword)pcVar13;
      pqVar10[3] = (qword)pqVar15;
      if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar10 + 0xd))) {
        FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x55d5c0);
        (*pcVar8)();
      }
    }
  }
  return pqVar10;
}



/* Entry: 0055a308; end: 0055a46b;  */

qword * FUN_0055a308(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  qword *pqVar9;
  undefined8 *puVar10;
  char *pcVar11;
  qword *pqVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  qword *pqVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  char cVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  qword *pqVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  qword *pqVar30;
  ulong uVar31;
  ulong uVar32;
  qword qVar33;
  int iVar34;
  qword qVar35;
  qword *pqVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  qword qVar40;
  undefined8 uVar41;
  qword qVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  qword aqStack_d8 [13];
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  bVar3 = *(byte *)((long)param_1 + 0xc);
  if (bVar3 == 2) {
    param_1 = (ulong *)param_1[2];
    bVar3 = *(byte *)((long)param_1 + 0xc);
  }
  if (5 < bVar3) {
    uVar14 = *param_1;
    *param_2 = (long)param_1 + 0xd;
    param_2[1] = uVar14;
LAB_0055a330:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar3 != 1) {
    if (bVar3 == 3) {
      if ((*(char *)((long)param_1 + 0xd) == '\0') &&
         ((ulong)*(byte *)((long)param_1 + 0xf) - (ulong)*(byte *)((long)param_1 + 0xe) == 1)) {
        if (param_2 != (ulong *)0x0) {
          puVar22 = (ulong *)param_1[(ulong)*(byte *)((long)param_1 + 0xe) + 2];
          bVar3 = *(byte *)((long)puVar22 + 0xc);
          if (bVar3 == 1) {
            uVar14 = puVar22[2];
            bVar3 = *(byte *)((long)puVar22[3] + 0xc);
            puVar27 = (ulong *)puVar22[3];
          }
          else {
            uVar14 = 0;
            puVar27 = puVar22;
          }
          uVar23 = *puVar22;
          if (bVar3 < 6) {
            *param_2 = puVar27[2] + uVar14;
            param_2[1] = uVar23;
            return (qword *)((long)&MACH_HEADER.magic + 1);
          }
          *param_2 = (long)puVar27 + uVar14 + 0xd;
          param_2[1] = uVar23;
          return (qword *)((long)&MACH_HEADER.magic + 1);
        }
        goto LAB_0055a330;
      }
    }
    else if (bVar3 == 5) {
      uVar14 = *param_1;
      *param_2 = param_1[2];
      param_2[1] = uVar14;
      return (qword *)((long)&MACH_HEADER.magic + 1);
    }
    return (qword *)0x0;
  }
  puVar15 = (undefined8 *)param_1[3];
  bVar3 = *(byte *)((long)puVar15 + 0xc);
  if (5 < bVar3) {
    uVar14 = *param_1;
    *param_2 = (long)puVar15 + param_1[2] + 0xd;
    param_2[1] = uVar14;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  if (bVar3 != 3) {
    if (bVar3 != 5) {
      return (qword *)0x0;
    }
    uVar14 = *param_1;
    *param_2 = puVar15[2] + param_1[2];
    param_2[1] = uVar14;
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pqVar12 = (qword *)param_1[2];
  uVar14 = *param_1;
  if (uVar14 == 0) {
    return (qword *)0x0;
  }
  uVar21 = (uint)*(byte *)((long)puVar15 + 0xd);
  do {
    puVar10 = (undefined8 *)puVar15[(ulong)*(byte *)((long)puVar15 + 0xe) + 2];
    plVar19 = (long *)*puVar10;
    if (plVar19 <= pqVar12) {
      puVar15 = puVar15 + (ulong)*(byte *)((long)puVar15 + 0xe) + 3;
      do {
        pqVar12 = (qword *)((long)pqVar12 - (long)plVar19);
        puVar10 = (undefined8 *)*puVar15;
        plVar19 = (long *)*puVar10;
        puVar15 = puVar15 + 1;
      } while (plVar19 <= pqVar12);
    }
    if (plVar19 < (long *)((long)pqVar12 + uVar14)) {
      return (qword *)0x0;
    }
    bVar8 = 0 < (int)uVar21;
    puVar15 = puVar10;
    uVar21 = uVar21 - 1;
  } while (bVar8);
  if (param_2 == (ulong *)0x0) goto LAB_0055db5c;
  if (*(byte *)((long)puVar10 + 0xc) == 1) {
    lVar18 = puVar10[2];
    puVar10 = (undefined8 *)puVar10[3];
    if (5 < *(byte *)((long)puVar10 + 0xc)) goto LAB_0055db3c;
LAB_0055db1c:
    lVar26 = puVar10[2];
  }
  else {
    lVar18 = 0;
    if (*(byte *)((long)puVar10 + 0xc) < 6) goto LAB_0055db1c;
LAB_0055db3c:
    lVar26 = (long)puVar10 + 0xd;
  }
  if (pqVar12 <= plVar19) {
    uVar23 = (long)plVar19 - (long)pqVar12;
    if (uVar14 <= (ulong)((long)plVar19 - (long)pqVar12)) {
      uVar23 = uVar14;
    }
    *param_2 = (ulong)(lVar26 + lVar18 + (long)pqVar12);
    param_2[1] = uVar23;
LAB_0055db5c:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pcVar11 = "string_view::substr";
  FUN_00435534();
  if (*(char *)((long)pqVar12 + 0xc) != '\x03') {
    func_0x0055e638(pqVar12,&stack0xffffffffffffffd0,0x55e534);
    return (qword *)pcVar11;
  }
  if (*(byte *)((long)pcVar11 + 0xd) < *(byte *)((long)pqVar12 + 0xd)) {
    qVar33 = *(qword *)pcVar11;
    bVar3 = *(byte *)((long)pqVar12 + 0xd);
    bVar4 = *(byte *)((long)pcVar11 + 0xd);
    uVar21 = (uint)bVar3 - (uint)bVar4;
    uVar14 = (ulong)uVar21;
    pqVar36 = pqVar12;
    if ((int)uVar21 < 1) {
      uVar23 = 0;
    }
    else {
      uVar17 = 0;
      do {
        uVar23 = uVar17;
        if ((pqVar36[1] & 0xfffffffd) != 4) break;
        aqStack_d8[uVar17 + 1] = (qword)pqVar36;
        uVar17 = uVar17 + 1;
        pqVar36 = (qword *)pqVar36[(ulong)*(byte *)((long)pqVar36 + 0xe) + 2];
        uVar23 = uVar14;
      } while (uVar14 != uVar17);
    }
    iVar13 = (int)uVar23;
    aqStack_d8[0]._0_4_ = iVar13;
    if ((pqVar36[1] & 0xfffffffd) == 4) {
      aqStack_d8[0]._0_4_ = iVar13 + 1;
    }
    if (iVar13 < (int)uVar21) {
      pqVar9 = aqStack_d8 + (uVar23 & 0xffffffff);
      do {
        pqVar9 = pqVar9 + 1;
        *pqVar9 = (qword)pqVar36;
        pqVar36 = (qword *)pqVar36[(ulong)*(byte *)((long)pqVar36 + 0xe) + 2];
        uVar1 = (int)uVar23 + 1;
        uVar23 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar21);
    }
    uVar23 = (ulong)*(byte *)((long)pcVar11 + 0xf);
    uVar17 = (ulong)*(byte *)((long)pcVar11 + 0xe);
    if (6 < (*(byte *)((long)pqVar36 + 0xf) + uVar23) - (*(byte *)((long)pqVar36 + 0xe) + uVar17)) {
      iVar34 = 2;
      iVar13 = 2;
      if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d744;
      goto LAB_0055d99c;
    }
    if ((int)uVar21 < (int)aqStack_d8[0]) {
      iVar13 = 0;
      lVar18 = uVar23 - uVar17;
      bVar5 = *(byte *)((long)pqVar36 + 0xf);
      bVar6 = *(byte *)((long)pqVar36 + 0xe);
    }
    else {
      qVar35 = *pqVar36;
      pqVar9 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar9 + 1) = 4;
      *pqVar9 = qVar35;
      uVar38 = *(undefined8 *)((long)pqVar36 + 0x14);
      uVar37 = *(undefined8 *)((long)pqVar36 + 0xc);
      uVar41 = *(undefined8 *)((long)pqVar36 + 0x24);
      uVar39 = *(undefined8 *)((long)pqVar36 + 0x1c);
      uVar44 = *(undefined8 *)((long)pqVar36 + 0x34);
      uVar43 = *(undefined8 *)((long)pqVar36 + 0x2c);
      *(undefined4 *)((long)pqVar9 + 0x3c) = *(undefined4 *)((long)pqVar36 + 0x3c);
      *(undefined8 *)((long)pqVar9 + 0x34) = uVar44;
      *(undefined8 *)((long)pqVar9 + 0x2c) = uVar43;
      *(undefined8 *)((long)pqVar9 + 0x24) = uVar41;
      *(undefined8 *)((long)pqVar9 + 0x1c) = uVar39;
      *(undefined8 *)((long)pqVar9 + 0x14) = uVar38;
      *(undefined8 *)((long)pqVar9 + 0xc) = uVar37;
      bVar6 = *(byte *)((long)pqVar36 + 0xf);
      if ((uint)*(byte *)((long)pqVar36 + 0xe) != (uint)bVar6) {
        pqVar16 = pqVar36 + (ulong)*(byte *)((long)pqVar36 + 0xe) + 2;
        do {
          piVar2 = (int *)(*pqVar16 + 8);
          do {
            cVar20 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          pqVar16 = pqVar16 + 1;
        } while (pqVar16 != pqVar36 + (ulong)(uint)bVar6 + 2);
        uVar17 = (ulong)*(byte *)((long)pcVar11 + 0xe);
        uVar23 = (ulong)*(byte *)((long)pcVar11 + 0xf);
      }
      iVar13 = 1;
      lVar18 = uVar23 - uVar17;
      bVar5 = *(byte *)((long)pqVar9 + 0xf);
      bVar6 = *(byte *)((long)pqVar9 + 0xe);
      pqVar36 = pqVar9;
    }
    uVar32 = (ulong)bVar5;
    uVar24 = (ulong)bVar6;
    if (uVar32 != 6) {
      uVar24 = (6 - uVar32) + uVar24;
      *(char *)((long)pqVar36 + 0xf) = '\x06';
      if (uVar24 < 6) {
        uVar29 = 5;
        pqVar9 = pqVar36;
        do {
          pqVar9[7] = pqVar9[uVar32 + 1];
          uVar29 = uVar29 - 1;
          pqVar9 = pqVar9 + -1;
        } while (uVar24 <= uVar29);
      }
    }
    lVar26 = (uVar24 & 0xff) - lVar18;
    *(char *)((long)pqVar36 + 0xe) = (char)lVar26;
    if ((int)uVar23 != (int)uVar17) {
      pqVar9 = (qword *)((long)pcVar11 + (uVar17 + 2) * 8);
      uVar32 = (uVar23 * 8 + uVar17 * -8) - 8;
      pqVar16 = pqVar9;
      if ((0x47 < uVar32) &&
         ("" < (char *)((long)pqVar36 + ((uVar24 & 0xff) * 8 - (long)((long)pcVar11 + uVar23 * 8))))
         ) {
        uVar23 = (uVar32 >> 3) + 1;
        uVar32 = uVar23 & 0x3ffffffffffffffc;
        uVar24 = uVar32;
        pqVar16 = pqVar36 + lVar26;
        pqVar25 = (qword *)((long)pcVar11 + uVar17 * 8);
        do {
          qVar35 = pqVar25[2];
          qVar42 = pqVar25[5];
          qVar40 = pqVar25[4];
          pqVar16[3] = pqVar25[3];
          pqVar16[2] = qVar35;
          pqVar16[5] = qVar42;
          pqVar16[4] = qVar40;
          uVar24 = uVar24 - 4;
          pqVar16 = pqVar16 + 4;
          pqVar25 = pqVar25 + 4;
        } while (uVar24 != 0);
        pqVar16 = pqVar9 + uVar32;
        lVar26 = lVar26 + uVar32;
        if (uVar23 == uVar32) goto LAB_0055d900;
      }
      pqVar25 = pqVar36 + lVar26 + 2;
      do {
        pqVar30 = pqVar16 + 1;
        *pqVar25 = *pqVar16;
        pqVar25 = pqVar25 + 1;
        pqVar16 = pqVar30;
      } while (pqVar30 != pqVar9 + lVar18);
    }
LAB_0055d900:
    pqVar9 = (qword *)((long)pcVar11 + 8);
    *pqVar36 = *pqVar36 + *(qword *)pcVar11;
    if ((*pqVar9 & 0xfffffffd) == 4) {
      __ZdlPv(pcVar11);
    }
    else {
      bVar6 = *(byte *)((long)pcVar11 + 0xf);
      if ((uint)*(byte *)((long)pcVar11 + 0xe) != (uint)bVar6) {
        pqVar16 = (qword *)((long)pcVar11 + ((ulong)*(byte *)((long)pcVar11 + 0xe) + 2) * 8);
        do {
          piVar2 = (int *)(*pqVar16 + 8);
          do {
            cVar20 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar20 = ExclusiveMonitorsStatus();
            }
          } while (cVar20 != '\0');
          pqVar16 = pqVar16 + 1;
        } while (pqVar16 != (qword *)((long)pcVar11 + ((ulong)(uint)bVar6 + 2) * 8));
      }
      do {
        qVar35 = *pqVar9;
        cVar20 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pqVar9,0x10);
        if (bVar8) {
          *(uint *)pqVar9 = (uint)qVar35 - 4;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if (((uint)qVar35 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar11);
      }
    }
    pcVar11 = (char *)pqVar36;
    iVar34 = iVar13;
    if (bVar3 != bVar4) {
LAB_0055d744:
      pqVar36 = aqStack_d8;
      FUN_0055b6d0(pqVar36,pqVar12,uVar14,qVar33,pcVar11,iVar34);
      return pqVar36;
    }
LAB_0055d99c:
    pqVar36 = (qword *)pcVar11;
    if (iVar13 != 0) {
      if (iVar13 == 1) {
        pqVar9 = pqVar12 + 1;
        do {
          qVar33 = *pqVar9;
          cVar20 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pqVar9,0x10);
          if (bVar8) {
            *(uint *)pqVar9 = (uint)qVar33 - 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        if (((uint)qVar33 & 0xfffffff9) == 0) {
          func_0x0055b598(pqVar12);
        }
      }
      else {
        pqVar36 = &segment_command_00000020.vmsize;
        __Znwm();
        *(undefined4 *)(pqVar36 + 1) = 4;
        *pqVar36 = *pqVar12 + *(qword *)pcVar11;
        bVar3 = *(char *)((long)pcVar11 + 0xd) + 1;
        *(char *)((long)pqVar36 + 0xc) = '\x03';
        *(byte *)((long)pqVar36 + 0xd) = bVar3;
        ((char *)((long)pqVar36 + 0xe))[0] = '\0';
        ((char *)((long)pqVar36 + 0xe))[1] = '\x02';
        pqVar36[2] = (qword)pcVar11;
        pqVar36[3] = (qword)pqVar12;
        if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar36 + 0xd))) {
          FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x55daa4);
          (*pcVar7)();
        }
      }
    }
    return pqVar36;
  }
  qVar33 = *pqVar12;
  bVar3 = *(byte *)((long)pcVar11 + 0xd);
  bVar4 = *(byte *)((long)pqVar12 + 0xd);
  uVar21 = (uint)bVar3 - (uint)bVar4;
  uVar14 = (ulong)uVar21;
  pqVar36 = (qword *)pcVar11;
  if ((int)uVar21 < 1) {
    uVar23 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar23 = uVar17;
      if ((pqVar36[1] & 0xfffffffd) != 4) break;
      aqStack_d8[uVar17 + 1] = (qword)pqVar36;
      uVar17 = uVar17 + 1;
      pqVar36 = (qword *)pqVar36[(ulong)*(byte *)((long)pqVar36 + 0xf) + 1];
      uVar23 = uVar14;
    } while (uVar14 != uVar17);
  }
  iVar13 = (int)uVar23;
  aqStack_d8[0]._0_4_ = iVar13;
  if ((pqVar36[1] & 0xfffffffd) == 4) {
    aqStack_d8[0]._0_4_ = iVar13 + 1;
  }
  if (iVar13 < (int)uVar21) {
    pqVar9 = aqStack_d8 + (uVar23 & 0xffffffff);
    do {
      pqVar9 = pqVar9 + 1;
      *pqVar9 = (qword)pqVar36;
      pqVar36 = (qword *)pqVar36[(ulong)*(byte *)((long)pqVar36 + 0xf) + 1];
      uVar1 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar21);
  }
  uVar17 = (ulong)*(byte *)((long)pqVar12 + 0xf);
  uVar23 = (ulong)*(byte *)((long)pqVar12 + 0xe);
  if (6 < (*(byte *)((long)pqVar36 + 0xf) + uVar17) - (*(byte *)((long)pqVar36 + 0xe) + uVar23)) {
    iVar13 = 2;
    iVar34 = 2;
    if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d280;
    goto LAB_0055d44c;
  }
  if ((int)uVar21 < (int)aqStack_d8[0]) {
    iVar34 = 0;
    pqVar9 = pqVar36;
  }
  else {
    qVar35 = *pqVar36;
    pqVar9 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar9 + 1) = 4;
    *pqVar9 = qVar35;
    uVar38 = *(undefined8 *)((long)pqVar36 + 0x14);
    uVar37 = *(undefined8 *)((long)pqVar36 + 0xc);
    uVar41 = *(undefined8 *)((long)pqVar36 + 0x24);
    uVar39 = *(undefined8 *)((long)pqVar36 + 0x1c);
    uVar44 = *(undefined8 *)((long)pqVar36 + 0x34);
    uVar43 = *(undefined8 *)((long)pqVar36 + 0x2c);
    *(undefined4 *)((long)pqVar9 + 0x3c) = *(undefined4 *)((long)pqVar36 + 0x3c);
    *(undefined8 *)((long)pqVar9 + 0x34) = uVar44;
    *(undefined8 *)((long)pqVar9 + 0x2c) = uVar43;
    *(undefined8 *)((long)pqVar9 + 0x24) = uVar41;
    *(undefined8 *)((long)pqVar9 + 0x1c) = uVar39;
    *(undefined8 *)((long)pqVar9 + 0x14) = uVar38;
    *(undefined8 *)((long)pqVar9 + 0xc) = uVar37;
    bVar6 = *(byte *)((long)pqVar36 + 0xf);
    if ((uint)*(byte *)((long)pqVar36 + 0xe) != (uint)bVar6) {
      pqVar16 = pqVar36 + (ulong)*(byte *)((long)pqVar36 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar16 + 8);
        do {
          cVar20 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        pqVar16 = pqVar16 + 1;
      } while (pqVar16 != pqVar36 + (ulong)(uint)bVar6 + 2);
      uVar23 = (ulong)*(byte *)((long)pqVar12 + 0xe);
      uVar17 = (ulong)*(byte *)((long)pqVar12 + 0xf);
    }
    iVar34 = 1;
  }
  bVar6 = *(byte *)((long)pqVar9 + 0xe);
  uVar32 = (ulong)bVar6;
  bVar5 = *(byte *)((long)pqVar9 + 0xf);
  uVar29 = (ulong)bVar5;
  uVar24 = uVar29;
  if (bVar6 != 0) {
    uVar24 = uVar29 - uVar32;
    *(char *)((long)pqVar9 + 0xe) = '\0';
    *(char *)((long)pqVar9 + 0xf) = (char)uVar24;
    if (bVar5 != bVar6) {
      if (uVar24 < 2) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar24 & 6;
        uVar31 = uVar28;
        pqVar36 = pqVar9;
        do {
          pqVar16 = pqVar36 + 2;
          qVar35 = pqVar16[uVar32];
          pqVar36[3] = (pqVar16 + uVar32)[1];
          *pqVar16 = qVar35;
          uVar31 = uVar31 - 2;
          pqVar36 = pqVar16;
        } while (uVar31 != 0);
        if (uVar24 == uVar28) goto LAB_0055d338;
      }
      lVar18 = (uVar28 + uVar32) - uVar29;
      pqVar36 = pqVar9 + uVar28 + 2;
      pqVar16 = pqVar9 + uVar28 + uVar32 + 2;
      do {
        *pqVar36 = *pqVar16;
        bVar8 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        pqVar36 = pqVar36 + 1;
        pqVar16 = pqVar16 + 1;
      } while (bVar8);
    }
  }
LAB_0055d338:
  cVar20 = (char)uVar24;
  if ((int)uVar17 != (int)uVar23) {
    pqVar36 = pqVar12 + uVar23 + 2;
    uVar24 = uVar24 & 0xffffffff;
    uVar32 = (uVar17 * 8 + uVar23 * -8) - 8;
    pqVar16 = pqVar36;
    if ((uVar32 < 0x48) ||
       (pqVar25 = pqVar9 + uVar24, (ulong)((long)pqVar25 - (long)(pqVar12 + uVar23)) < 0x20)) {
LAB_0055d380:
      uVar32 = uVar24;
      do {
        pqVar25 = pqVar16 + 1;
        uVar24 = uVar32 + 1;
        pqVar9[uVar32 + 2] = *pqVar16;
        pqVar16 = pqVar25;
        uVar32 = uVar24;
      } while (pqVar25 != pqVar36 + (uVar17 - uVar23));
    }
    else {
      uVar32 = (uVar32 >> 3) + 1;
      uVar31 = uVar32 & 0x3ffffffffffffffc;
      uVar24 = uVar31 + uVar24;
      pqVar16 = pqVar36 + uVar31;
      uVar29 = uVar31;
      pqVar30 = pqVar12 + uVar23;
      do {
        qVar35 = pqVar30[2];
        qVar42 = pqVar30[5];
        qVar40 = pqVar30[4];
        pqVar25[3] = pqVar30[3];
        pqVar25[2] = qVar35;
        pqVar25[5] = qVar42;
        pqVar25[4] = qVar40;
        uVar29 = uVar29 - 4;
        pqVar25 = pqVar25 + 4;
        pqVar30 = pqVar30 + 4;
      } while (uVar29 != 0);
      if (uVar32 != uVar31) goto LAB_0055d380;
    }
    cVar20 = (char)uVar24;
  }
  *(char *)((long)pqVar9 + 0xf) = cVar20;
  pqVar36 = pqVar12 + 1;
  *pqVar9 = *pqVar9 + *pqVar12;
  if ((*pqVar36 & 0xfffffffd) == 4) {
    __ZdlPv(pqVar12);
  }
  else {
    bVar6 = *(byte *)((long)pqVar12 + 0xf);
    if ((uint)*(byte *)((long)pqVar12 + 0xe) != (uint)bVar6) {
      pqVar16 = pqVar12 + (ulong)*(byte *)((long)pqVar12 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar16 + 8);
        do {
          cVar20 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + 4;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        pqVar16 = pqVar16 + 1;
      } while (pqVar16 != pqVar12 + (ulong)(uint)bVar6 + 2);
    }
    do {
      qVar35 = *pqVar36;
      cVar20 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pqVar36,0x10);
      if (bVar8) {
        *(uint *)pqVar36 = (uint)qVar35 - 4;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (((uint)qVar35 & 0xfffffff9) == 0) {
      func_0x0055b598(pqVar12);
    }
  }
  pqVar12 = pqVar9;
  iVar13 = iVar34;
  if (bVar3 != bVar4) {
LAB_0055d280:
    pqVar36 = aqStack_d8;
    FUN_0055bdcc(pqVar36,pcVar11,uVar14,qVar33,pqVar12,iVar13);
    return pqVar36;
  }
LAB_0055d44c:
  pqVar36 = pqVar12;
  if (iVar34 != 0) {
    if (iVar34 == 1) {
      pqVar12 = (qword *)((long)pcVar11 + 8);
      do {
        qVar33 = *pqVar12;
        cVar20 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
        if (bVar8) {
          *(uint *)pqVar12 = (uint)qVar33 - 4;
          cVar20 = ExclusiveMonitorsStatus();
        }
      } while (cVar20 != '\0');
      if (((uint)qVar33 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar11);
      }
    }
    else {
      pqVar36 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar36 + 1) = 4;
      *pqVar36 = *pqVar12 + *(qword *)pcVar11;
      bVar3 = *(char *)((long)pcVar11 + 0xd) + 1;
      *(char *)((long)pqVar36 + 0xc) = '\x03';
      *(byte *)((long)pqVar36 + 0xd) = bVar3;
      ((char *)((long)pqVar36 + 0xe))[0] = '\0';
      ((char *)((long)pqVar36 + 0xe))[1] = '\x02';
      pqVar36[2] = (qword)pcVar11;
      pqVar36[3] = (qword)pqVar12;
      if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar36 + 0xd))) {
        FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x55d5c0);
        (*pcVar7)();
      }
    }
  }
  return pqVar36;
}



/* Entry: 0055a46c; end: 0055a5ff;  */

undefined1  [16] FUN_0055a46c(long *param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  segment_command *psVar7;
  long lVar8;
  char cVar9;
  char *pcVar10;
  segment_command *psVar11;
  undefined1 auVar12 [16];
  
  if (((long)(char)*param_1 & 1U) == 0) {
    pcVar10 = (char *)((ulong)(long)(char)*param_1 >> 1);
  }
  else {
    pcVar10 = *(char **)param_1[1];
  }
  if (pcVar10 < "") {
    pcVar6 = pcVar10;
    if (pcVar10 < (char *)0x14) {
      pcVar6 = "";
    }
    uVar2 = 0xfffffffffffffff8;
    if ("" < pcVar10) {
      uVar2 = 0xffffffffffffffc0;
    }
    lVar4 = 8;
    if ("" < pcVar10) {
      lVar4 = 0x40;
    }
    psVar11 = (segment_command *)((ulong)(pcVar6 + lVar4 + 0xc) & uVar2);
    psVar7 = psVar11;
    __Znwm();
    *(char **)psVar7 = pcVar10;
    psVar7->segname[0] = '\x04';
    psVar7->segname[1] = '\0';
    psVar7->segname[2] = '\0';
    psVar7->segname[3] = '\0';
    psVar7->segname[4] = '\0';
    psVar7->segname[5] = '\0';
    psVar7->segname[6] = '\0';
    psVar7->segname[7] = '\0';
    bVar5 = (segment_command *)(section_000001f8.sectname + 8) < psVar11;
    lVar4 = 3;
    if (bVar5) {
      lVar4 = 6;
    }
    cVar9 = '\x02';
    if (bVar5) {
      cVar9 = ':';
    }
    psVar7->segname[4] = (char)((ulong)psVar11 >> lVar4) + cVar9;
    pcVar6 = psVar7->segname + 5;
    FUN_00559fa8(param_1,pcVar6);
  }
  else {
    pcVar6 = pcVar10;
    __Znwm();
    FUN_00559fa8(param_1,pcVar6);
    psVar7 = &segment_command_00000020;
    __Znwm();
    psVar7->segname[0] = '\x04';
    psVar7->segname[1] = '\0';
    psVar7->segname[2] = '\0';
    psVar7->segname[3] = '\0';
    *(char **)psVar7 = pcVar10;
    psVar7->segname[4] = '\x05';
    *(char **)(psVar7->segname + 8) = pcVar6;
    psVar7->vmaddr = (qword)FUN_0055a704;
  }
  lVar8 = *param_1;
  lVar4 = lVar8 + -1;
  if (lVar4 != 0) {
    FUN_0055b3ec(lVar4,0xb);
  }
  puVar1 = (uint *)(param_1[1] + 8);
  do {
    uVar3 = *puVar1;
    cVar9 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 - 4;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar3 & 0xfffffff9) == 0) {
    func_0x0055b598();
  }
  param_1[1] = (long)psVar7;
  if (lVar4 != 0) {
    *(segment_command **)(lVar8 + 0x3f) = psVar7;
    FUN_0055b518();
  }
  auVar12._8_8_ = pcVar10;
  auVar12._0_8_ = pcVar6;
  return auVar12;
}



/* Entry: 0055a600; end: 0055a63f;  */

void FUN_0055a600(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 0055a640; end: 0055a703;  */

long * FUN_0055a640(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_0055a6b0;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_0055a6b0:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[1] - param_1[2];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0055a704; end: 0055a737;  */

void FUN_0055a704(long param_1)

{
  if (param_1 != 0) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 0055a738; end: 0055a98f;  */

long FUN_0055a738(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lStack_18;
  
  lStack_18 = 0;
  bVar5 = *(byte *)((long)param_1 + 0xc);
  uVar9 = (uint)bVar5;
  if (bVar5 == 2) {
    lVar6 = 0x20;
    lStack_18 = 0x20;
    param_1 = (long *)param_1[2];
    uVar9 = (uint)*(byte *)((long)param_1 + 0xc);
    uVar11 = (uint)*(byte *)((long)param_1 + 0xc);
    if (4 < uVar9) goto joined_r0x0055a800;
  }
  else {
    lVar6 = 0;
    uVar11 = uVar9;
    if (4 < bVar5) goto joined_r0x0055a800;
  }
  if (uVar9 == 4) {
    uVar12 = (ulong)*(uint *)(param_1 + 3);
    lVar6 = lVar6 + uVar12 * 0x14 + 0x28;
    uVar11 = *(uint *)(param_1 + 2);
    uVar4 = *(uint *)((long)param_1 + 0x14);
    uVar10 = (ulong)uVar4;
    uVar9 = uVar4;
    if (uVar4 <= uVar11) {
      uVar9 = *(uint *)(param_1 + 3);
    }
    if (uVar11 < uVar9) {
      lVar13 = (ulong)uVar9 - (ulong)uVar11;
      plVar8 = param_1 + (ulong)uVar11 + uVar12 + 5;
      do {
        while( true ) {
          plVar7 = (long *)*plVar8;
          bVar5 = *(byte *)((long)plVar7 + 0xc);
          if (bVar5 == 1) {
            lVar6 = lVar6 + 0x20;
            plVar7 = (long *)plVar7[3];
            bVar5 = *(byte *)((long)plVar7 + 0xc);
          }
          uVar9 = (uint)bVar5;
          if (uVar9 < 6) break;
          uVar14 = 6;
          if (0xba < uVar9) {
            uVar14 = 0xc;
          }
          iVar2 = -0xe80;
          if (0xba < uVar9) {
            iVar2 = -0xb8000;
          }
          uVar1 = 3;
          if (0x42 < uVar9) {
            uVar1 = uVar14;
          }
          iVar3 = -0x10;
          if (0x42 < uVar9) {
            iVar3 = iVar2;
          }
          lVar6 = (int)((uVar9 << (ulong)uVar1) + iVar3) + lVar6;
          lVar13 = lVar13 + -1;
          plVar8 = plVar8 + 1;
          if (lVar13 == 0) goto LAB_0055a8f8;
        }
        lVar6 = *plVar7 + 0x28 + lVar6;
        lVar13 = lVar13 + -1;
        plVar8 = plVar8 + 1;
      } while (lVar13 != 0);
    }
LAB_0055a8f8:
    if (uVar11 <= uVar4 - 1) {
      return lVar6;
    }
    plVar8 = param_1 + uVar12 + 5;
    do {
      while( true ) {
        plVar7 = (long *)*plVar8;
        bVar5 = *(byte *)((long)plVar7 + 0xc);
        if (bVar5 == 1) {
          lVar6 = lVar6 + 0x20;
          plVar7 = (long *)plVar7[3];
          bVar5 = *(byte *)((long)plVar7 + 0xc);
        }
        uVar9 = (uint)bVar5;
        if (5 < uVar9) break;
        lVar6 = *plVar7 + 0x28 + lVar6;
        uVar10 = uVar10 - 1;
        plVar8 = plVar8 + 1;
        if (uVar10 == 0) {
          return lVar6;
        }
      }
      uVar11 = 6;
      if (0xba < uVar9) {
        uVar11 = 0xc;
      }
      iVar2 = -0xe80;
      if (0xba < uVar9) {
        iVar2 = -0xb8000;
      }
      uVar4 = 3;
      if (0x42 < uVar9) {
        uVar4 = uVar11;
      }
      iVar3 = -0x10;
      if (0x42 < uVar9) {
        iVar3 = iVar2;
      }
      lVar6 = (int)((uVar9 << (ulong)uVar4) + iVar3) + lVar6;
      uVar10 = uVar10 - 1;
      plVar8 = plVar8 + 1;
    } while (uVar10 != 0);
    return lVar6;
  }
  if (uVar9 == 3) {
    FUN_0055a990(param_1,&lStack_18);
    return lStack_18;
  }
  if (uVar9 != 1) {
    return lVar6;
  }
  param_1 = (long *)param_1[3];
  if (*(byte *)((long)param_1 + 0xc) < 5) {
    return lVar6;
  }
  lVar6 = lVar6 + 0x20;
  uVar11 = (uint)*(byte *)((long)param_1 + 0xc);
joined_r0x0055a800:
  if (5 < uVar11) {
    uVar9 = 6;
    if (0xba < uVar11) {
      uVar9 = 0xc;
    }
    iVar2 = -0xe80;
    if (0xba < uVar11) {
      iVar2 = -0xb8000;
    }
    uVar4 = 3;
    if (0x42 < uVar11) {
      uVar4 = uVar9;
    }
    iVar3 = -0x10;
    if (0x42 < uVar11) {
      iVar3 = iVar2;
    }
    return (int)((uVar11 << (ulong)uVar4) + iVar3) + lVar6;
  }
  return *param_1 + 0x28 + lVar6;
}



/* Entry: 0055a990; end: 0055aab7;  */

void FUN_0055a990(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  lVar12 = *param_2 + 0x40;
  *param_2 = lVar12;
  bVar4 = *(byte *)(param_1 + 0xe);
  uVar10 = (ulong)bVar4;
  bVar5 = *(byte *)(param_1 + 0xf);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (bVar4 != bVar5) {
      puVar7 = (undefined8 *)(param_1 + 0x10 + uVar10 * 8);
      lVar8 = (ulong)bVar5 * 8 + uVar10 * -8;
      do {
        while( true ) {
          plVar11 = (long *)*puVar7;
          bVar4 = *(byte *)((long)plVar11 + 0xc);
          if (bVar4 == 1) {
            lVar12 = lVar12 + 0x20;
            plVar11 = (long *)plVar11[3];
            bVar4 = *(byte *)((long)plVar11 + 0xc);
          }
          uVar6 = (uint)bVar4;
          if (uVar6 < 6) break;
          uVar9 = 6;
          if (0xba < uVar6) {
            uVar9 = 0xc;
          }
          iVar1 = -0xe80;
          if (0xba < uVar6) {
            iVar1 = -0xb8000;
          }
          uVar2 = 3;
          if (0x42 < uVar6) {
            uVar2 = uVar9;
          }
          iVar3 = -0x10;
          if (0x42 < uVar6) {
            iVar3 = iVar1;
          }
          lVar12 = (int)((uVar6 << (ulong)uVar2) + iVar3) + lVar12;
          puVar7 = puVar7 + 1;
          lVar8 = lVar8 + -8;
          if (lVar8 == 0) goto LAB_0055aaa4;
        }
        lVar12 = *plVar11 + 0x28 + lVar12;
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
LAB_0055aaa4:
      *param_2 = lVar12;
      return;
    }
  }
  else if (bVar4 != bVar5) {
    lVar12 = (ulong)bVar5 * 8 + uVar10 * -8;
    puVar7 = (undefined8 *)(param_1 + 0x10 + uVar10 * 8);
    do {
      FUN_0055a990(*puVar7,param_2);
      lVar12 = lVar12 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 0055aab8; end: 0055abcf;  */

void FUN_0055aab8(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  
  if (*param_1 - 1 != 0) {
    FUN_0055abd0(*param_1 - 1);
  }
  uVar5 = 0x538;
  __Znwm();
  FUN_0055aea0();
  *param_1 = uVar5 | 1;
  puVar6 = *(uint **)(uVar5 + 0x20);
  uVar2 = *puVar6;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar6;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *puVar6 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
      goto joined_r0x0055abb0;
    }
  }
  FUN_00777048();
  lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
joined_r0x0055abb0:
  if (lVar7 != 0) {
    *(ulong *)(lVar7 + 0x28) = uVar5;
  }
  *(long *)(uVar5 + 0x30) = lVar7;
  *(ulong *)(*(long *)(uVar5 + 0x20) + 8) = uVar5;
  uVar2 = *puVar6;
  do {
    uVar1 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    FUN_007771d4();
  }
  return;
}



/* Entry: 0055abd0; end: 0055ae57;  */

void FUN_0055abd0(long *param_1)

{
  ulong *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  dword *pdVar9;
  dword *pdVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  
  puVar8 = (uint *)param_1[4];
  uVar4 = *puVar8;
  if ((uVar4 & 1) == 0) {
    do {
      uVar3 = *puVar8;
      if (uVar3 != uVar4) {
        ClearExclusiveLocal();
        break;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar6) {
        *puVar8 = uVar4 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_0055ac08;
  }
  FUN_00777048();
LAB_0055ac08:
  lVar12 = param_1[6];
  lVar14 = param_1[5];
  if (lVar12 != 0) {
    *(long *)(lVar12 + 0x28) = lVar14;
  }
  if (lVar14 == 0) {
    plVar15 = (long *)(param_1[4] + 8);
  }
  else {
    plVar15 = (long *)(lVar14 + 0x30);
  }
  *plVar15 = lVar12;
  uVar4 = *puVar8;
  do {
    uVar3 = *puVar8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *puVar8 = uVar4 & 2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (7 < uVar3) {
    FUN_007771d4();
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((bRam0000000000b69490 & 1) == 0) {
      iVar11 = 0xb69490;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        pdVar9 = &MACH_HEADER.ncmds;
        __Znwm();
        *(undefined8 *)pdVar9 = 0;
        *(undefined8 *)(pdVar9 + 2) = 0;
        pdRam0000000000b69488 = pdVar9;
        ___cxa_guard_release(0xb69490);
      }
    }
    if (*(long *)(pdRam0000000000b69488 + 2) != 0) {
      puVar1 = (ulong *)(param_1 + 7);
      uVar13 = param_1[7];
      if ((uVar13 & 0x19) == 0) {
        do {
          if (*puVar1 != uVar13) {
            ClearExclusiveLocal();
            goto LAB_0055acfc;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar13 | 8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_0055ad54:
        lVar12 = param_1[8];
      }
      else {
LAB_0055acfc:
        iVar11 = iRam0000000000b694c4;
        if (iRam0000000000b694c0 != 0xdd) {
          FUN_00568724(0xb694c0);
          iVar11 = iRam0000000000b694c4;
        }
        do {
          uVar13 = *puVar1;
          if ((uVar13 & 0x11) != 0) break;
          if (((uint)uVar13 >> 3 & 1) == 0) {
            while (*puVar1 == uVar13) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar13 | 8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0055ad54;
            }
            ClearExclusiveLocal();
          }
          iVar7 = iVar11 + -1;
          bVar6 = 0 < iVar11;
          iVar11 = iVar7;
        } while (iVar7 != 0 && bVar6);
        FUN_00776798(puVar1,&UNK_00811348,0,0);
        lVar12 = param_1[8];
      }
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar13 = *puVar1;
      if (((uVar13 ^ 0xc) & 0x18) < ((uVar13 ^ 0xc) & 6)) {
        do {
          if (*puVar1 != uVar13) {
            ClearExclusiveLocal();
            goto LAB_0055adac;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar13 & 0xffffffffffffffd7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      else {
LAB_0055adac:
        FUN_007767f4(puVar1,0);
      }
      if (param_1 == (long *)0x0) {
        return;
      }
      if ((bRam0000000000b69490 & 1) == 0) {
        iVar11 = 0xb69490;
        ___cxa_guard_acquire();
        if (iVar11 != 0) {
          pdVar9 = &MACH_HEADER.ncmds;
          __Znwm();
          *(undefined8 *)pdVar9 = 0;
          *(undefined8 *)(pdVar9 + 2) = 0;
          pdRam0000000000b69488 = pdVar9;
          ___cxa_guard_release(0xb69490);
        }
      }
      pdVar9 = pdRam0000000000b69488;
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        if ((bRam0000000000b69490 & 1) == 0) {
          iVar11 = 0xb69490;
          ___cxa_guard_acquire();
          if (iVar11 != 0) {
            pdVar10 = &MACH_HEADER.ncmds;
            __Znwm();
            *(undefined8 *)pdVar10 = 0;
            *(undefined8 *)(pdVar10 + 2) = 0;
            pdRam0000000000b69488 = pdVar10;
            ___cxa_guard_release(0xb69490);
          }
        }
        if (*(long *)(pdRam0000000000b69488 + 2) != 0) {
          uVar13 = *(ulong *)pdVar9;
          if ((uVar13 & 0x19) == 0) {
            do {
              if (*(ulong *)pdVar9 != uVar13) {
                ClearExclusiveLocal();
                goto LAB_0055ec10;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
              if (bVar6) {
                *(ulong *)pdVar9 = uVar13 | 8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_0055ec68:
            lVar12 = *(long *)(pdVar9 + 2);
          }
          else {
LAB_0055ec10:
            iVar11 = iRam0000000000b694c4;
            if (iRam0000000000b694c0 != 0xdd) {
              FUN_00568724(0xb694c0);
              iVar11 = iRam0000000000b694c4;
            }
            do {
              uVar13 = *(ulong *)pdVar9;
              if ((uVar13 & 0x11) != 0) break;
              if (((uint)uVar13 >> 3 & 1) == 0) {
                while (*(ulong *)pdVar9 == uVar13) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
                  if (bVar6) {
                    *(ulong *)pdVar9 = uVar13 | 8;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_0055ec68;
                }
                ClearExclusiveLocal();
              }
              iVar7 = iVar11 + -1;
              bVar6 = 0 < iVar11;
              iVar11 = iVar7;
            } while (iVar7 != 0 && bVar6);
            FUN_00776798(pdVar9,&UNK_00811348,0,0);
            lVar12 = *(long *)(pdVar9 + 2);
          }
          if (lVar12 != 0) {
            param_1[2] = lVar12;
            *(long **)(lVar12 + 0x18) = param_1;
            *(long **)(pdVar9 + 2) = param_1;
            uVar13 = *(ulong *)pdVar9;
            if (((uVar13 ^ 0xc) & 0x18) < ((uVar13 ^ 0xc) & 6)) {
              while (*(ulong *)pdVar9 == uVar13) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
                if (bVar6) {
                  *(ulong *)pdVar9 = uVar13 & 0xffffffffffffffd7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  return;
                }
              }
              ClearExclusiveLocal();
            }
            FUN_007767f4(pdVar9,0);
            return;
          }
          uVar13 = *(ulong *)pdVar9;
          if (((uVar13 ^ 0xc) & 0x18) < ((uVar13 ^ 0xc) & 6)) {
            do {
              if (*(ulong *)pdVar9 != uVar13) {
                ClearExclusiveLocal();
                goto LAB_0055ed38;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
              if (bVar6) {
                *(ulong *)pdVar9 = uVar13 & 0xffffffffffffffd7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          else {
LAB_0055ed38:
            FUN_007767f4(pdVar9,0);
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0055ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  param_1[8] = 0;
                    /* WARNING: Could not recover jumptable at 0x0055acf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 0055ae58; end: 0055ae9f;  */

void FUN_0055ae58(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  
  if (*param_2 == 1) {
    if (*param_1 - 1 != 0) {
      FUN_0055abd0(*param_1 - 1);
      *param_1 = 1;
    }
    return;
  }
  if (*param_1 - 1 != 0) {
    FUN_0055abd0(*param_1 - 1);
  }
  uVar5 = 0x538;
  __Znwm();
  FUN_0055aea0();
  *param_1 = uVar5 | 1;
  puVar6 = *(uint **)(uVar5 + 0x20);
  uVar2 = *puVar6;
  if ((uVar2 & 1) == 0) {
    do {
      uVar1 = *puVar6;
      if (uVar1 != uVar2) {
        ClearExclusiveLocal();
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar4) {
        *puVar6 = uVar2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
      goto joined_r0x0055abb0;
    }
  }
  FUN_00777048();
  lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + 8);
joined_r0x0055abb0:
  if (lVar7 != 0) {
    *(ulong *)(lVar7 + 0x28) = uVar5;
  }
  *(long *)(uVar5 + 0x30) = lVar7;
  *(ulong *)(*(long *)(uVar5 + 0x20) + 8) = uVar5;
  uVar2 = *puVar6;
  do {
    uVar1 = *puVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar1) {
    FUN_007771d4();
  }
  return;
}



/* Entry: 0055aea0; end: 0055b2f7;  */

undefined8 * FUN_0055aea0(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  dword *pdVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_00a014f0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((bRam0000000000b69490 & 1) == 0) {
    iVar4 = 0xb69490;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      pdVar3 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined8 *)pdVar3 = 0;
      *(undefined8 *)(pdVar3 + 2) = 0;
      pdRam0000000000b69488 = pdVar3;
      ___cxa_guard_release(0xb69490);
    }
  }
  *param_1 = &PTR_FUN_00a014b8;
  param_1[4] = 0xb1e640;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  puVar2 = param_1 + 9;
  FUN_00568b10(puVar2,0x40,1);
  param_1[0x89] = (long)(int)puVar2;
  if (param_3 == 0) {
    iVar4 = 0;
    param_1[0x8a] = 0;
    *(uint *)(param_1 + 0x8b) = param_4;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x450);
    if (lVar5 == 0) {
      lVar7 = param_3 + 0x48;
      puVar8 = (undefined8 *)(param_3 + 0x448);
      lVar5 = *(long *)(param_3 + 0x448);
    }
    else {
      puVar8 = (undefined8 *)(param_3 + 0x450);
      lVar7 = param_3 + 0x248;
    }
    puVar2 = param_1 + 0x49;
    _memcpy(puVar2,lVar7,lVar5 << 3);
    param_1[0x8a] = *puVar8;
    *(uint *)(param_1 + 0x8b) = param_4;
    iVar4 = *(int *)(param_3 + 0x45c);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_3 + 0x458);
    }
  }
  *(int *)((long)param_1 + 0x45c) = iVar4;
  plVar1 = param_1 + 0x8c;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar5 = 0;
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  lVar5 = (long)puVar2 - lVar5;
  if (lVar5 < 0) {
    uVar6 = (ulong)(lVar5 * -1000) % 1000000000;
    lVar7 = -uVar6;
    iVar4 = 0;
    if (uVar6 != 0) {
      iVar4 = (int)lVar7 * 4 + -0x1194d800;
    }
    param_1[0xa5] = (lVar7 >> 0x3d) - (ulong)(lVar5 * -1000) / 1000000000;
    *(int *)(param_1 + 0xa6) = iVar4;
    plVar1[param_4] = plVar1[param_4] + 1;
  }
  else {
    uVar6 = (ulong)(lVar5 * 1000) / 1000000000;
    param_1[0xa5] = uVar6;
    *(int *)(param_1 + 0xa6) = ((int)(lVar5 * 1000) + (int)uVar6 * -1000000000) * 4;
    plVar1[param_4] = plVar1[param_4] + 1;
  }
  if (param_3 != 0) {
    if (*(long *)(param_3 + 0x460) != 0) {
      *plVar1 = *plVar1 + *(long *)(param_3 + 0x460);
    }
    if (*(long *)(param_3 + 0x468) != 0) {
      param_1[0x8d] = param_1[0x8d] + *(long *)(param_3 + 0x468);
    }
    if (*(long *)(param_3 + 0x470) != 0) {
      param_1[0x8e] = param_1[0x8e] + *(long *)(param_3 + 0x470);
    }
    if (*(long *)(param_3 + 0x478) != 0) {
      param_1[0x8f] = param_1[0x8f] + *(long *)(param_3 + 0x478);
    }
    if (*(long *)(param_3 + 0x480) != 0) {
      param_1[0x90] = param_1[0x90] + *(long *)(param_3 + 0x480);
    }
    if (*(long *)(param_3 + 0x488) != 0) {
      param_1[0x91] = param_1[0x91] + *(long *)(param_3 + 0x488);
    }
    if (*(long *)(param_3 + 0x490) != 0) {
      param_1[0x92] = param_1[0x92] + *(long *)(param_3 + 0x490);
    }
    if (*(long *)(param_3 + 0x498) != 0) {
      param_1[0x93] = param_1[0x93] + *(long *)(param_3 + 0x498);
    }
    if (*(long *)(param_3 + 0x4a0) != 0) {
      param_1[0x94] = param_1[0x94] + *(long *)(param_3 + 0x4a0);
    }
    if (*(long *)(param_3 + 0x4a8) != 0) {
      param_1[0x95] = param_1[0x95] + *(long *)(param_3 + 0x4a8);
    }
    if (*(long *)(param_3 + 0x4b0) != 0) {
      param_1[0x96] = param_1[0x96] + *(long *)(param_3 + 0x4b0);
    }
    if (*(long *)(param_3 + 0x4b8) != 0) {
      param_1[0x97] = param_1[0x97] + *(long *)(param_3 + 0x4b8);
    }
    if (*(long *)(param_3 + 0x4c0) != 0) {
      param_1[0x98] = param_1[0x98] + *(long *)(param_3 + 0x4c0);
    }
    if (*(long *)(param_3 + 0x4c8) != 0) {
      param_1[0x99] = param_1[0x99] + *(long *)(param_3 + 0x4c8);
    }
    if (*(long *)(param_3 + 0x4d0) != 0) {
      param_1[0x9a] = param_1[0x9a] + *(long *)(param_3 + 0x4d0);
    }
    if (*(long *)(param_3 + 0x4d8) != 0) {
      param_1[0x9b] = param_1[0x9b] + *(long *)(param_3 + 0x4d8);
    }
    if (*(long *)(param_3 + 0x4e0) != 0) {
      param_1[0x9c] = param_1[0x9c] + *(long *)(param_3 + 0x4e0);
    }
    if (*(long *)(param_3 + 0x4e8) != 0) {
      param_1[0x9d] = param_1[0x9d] + *(long *)(param_3 + 0x4e8);
    }
    if (*(long *)(param_3 + 0x4f0) != 0) {
      param_1[0x9e] = param_1[0x9e] + *(long *)(param_3 + 0x4f0);
    }
    if (*(long *)(param_3 + 0x4f8) != 0) {
      param_1[0x9f] = param_1[0x9f] + *(long *)(param_3 + 0x4f8);
    }
    if (*(long *)(param_3 + 0x500) != 0) {
      param_1[0xa0] = param_1[0xa0] + *(long *)(param_3 + 0x500);
    }
    if (*(long *)(param_3 + 0x508) != 0) {
      param_1[0xa1] = param_1[0xa1] + *(long *)(param_3 + 0x508);
    }
    if (*(long *)(param_3 + 0x510) != 0) {
      param_1[0xa2] = param_1[0xa2] + *(long *)(param_3 + 0x510);
    }
    if (*(long *)(param_3 + 0x518) != 0) {
      param_1[0xa3] = param_1[0xa3] + *(long *)(param_3 + 0x518);
    }
    if (*(long *)(param_3 + 0x520) != 0) {
      param_1[0xa4] = param_1[0xa4] + *(long *)(param_3 + 0x520);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 0055b2f8; end: 0055b36f;  */

undefined8 * FUN_0055b2f8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  dword *pdVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  
  *param_1 = &PTR_FUN_00a014b8;
  if (param_1[8] != 0) {
    puVar1 = (uint *)(param_1[8] + 8);
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
  if (((uint)param_1[7] >> 4 & 1) != 0) {
    FUN_00566dd4(param_1 + 7,0x10,0x40);
  }
  *param_1 = &PTR_FUN_00a014f0;
  if ((bRam0000000000b69490 & 1) == 0) {
    iVar9 = 0xb69490;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      pdVar8 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined8 *)pdVar8 = 0;
      *(undefined8 *)(pdVar8 + 2) = 0;
      pdRam0000000000b69488 = pdVar8;
      ___cxa_guard_release(0xb69490);
    }
  }
  pdVar8 = pdRam0000000000b69488;
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  uVar10 = *(ulong *)pdRam0000000000b69488;
  if ((uVar10 & 0x19) == 0) {
    do {
      if (*(ulong *)pdVar8 != uVar10) {
        ClearExclusiveLocal();
        goto joined_r0x0055e938;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
      if (bVar4) {
        *(ulong *)pdVar8 = uVar10 | 8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
joined_r0x0055e938:
    iVar9 = iRam0000000000b694c4;
    if (iRam0000000000b694c0 != 0xdd) {
      FUN_00568724(0xb694c0);
      iVar9 = iRam0000000000b694c4;
    }
    do {
      uVar10 = *(ulong *)pdVar8;
      if ((uVar10 & 0x11) != 0) break;
      if (((uint)uVar10 >> 3 & 1) == 0) {
        while (*(ulong *)pdVar8 == uVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
          if (bVar4) {
            *(ulong *)pdVar8 = uVar10 | 8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0055e964;
        }
        ClearExclusiveLocal();
      }
      iVar5 = iVar9 + -1;
      bVar4 = 0 < iVar9;
      iVar9 = iVar5;
    } while (iVar5 != 0 && bVar4);
    FUN_00776798(pdVar8,&UNK_00811348,0,0);
  }
LAB_0055e964:
  lVar13 = param_1[2];
  lVar17 = param_1[3];
  if (lVar13 == 0) {
    if (lVar17 == 0) {
      lVar13 = 0;
      plVar12 = (long *)0x0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar18 = (long *)0x0;
      plVar12 = (long *)0x0;
      plVar16 = (long *)0x0;
      do {
        while( true ) {
          if ((*(byte *)(lVar17 + 8) & 1) != 0) {
            lVar13 = param_1[2];
            goto LAB_0055ea68;
          }
          if (plVar18 <= plVar16) break;
          plVar15 = plVar16 + 1;
          *plVar16 = lVar17;
          lVar17 = *(long *)(lVar17 + 0x18);
          plVar16 = plVar15;
          if (lVar17 == 0) goto LAB_0055ea2c;
        }
        lVar13 = (long)plVar16 - (long)plVar12;
        uVar10 = (lVar13 >> 3) + 1;
        if (uVar10 >> 0x3d != 0) {
          FUN_0055ee08();
LAB_0055eb50:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x55eb54);
          (*pcVar6)();
        }
        uVar11 = (long)plVar18 - (long)plVar12 >> 2;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plVar18 - (long)plVar12)) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 >> 0x3d != 0) {
          FUN_0040cee8();
          goto LAB_0055eb50;
        }
        lVar7 = uVar11 << 3;
        __Znwm();
        plVar16 = (long *)(lVar7 + lVar13);
        plVar18 = (long *)(lVar7 + uVar11 * 8);
        plVar14 = plVar16 + -(lVar13 >> 3);
        plVar15 = plVar16 + 1;
        *plVar16 = lVar17;
        _memcpy(plVar14,plVar12,lVar13);
        if (plVar12 != (long *)0x0) {
          __ZdlPv(plVar12);
        }
        lVar17 = *(long *)(lVar17 + 0x18);
        plVar12 = plVar14;
        plVar16 = plVar15;
      } while (lVar17 != 0);
LAB_0055ea2c:
      lVar13 = param_1[2];
    }
LAB_0055ea40:
    *(long *)(pdVar8 + 2) = lVar13;
    uVar10 = *(ulong *)pdVar8;
    plVar16 = plVar15;
    if (((uVar10 ^ 0xc) & 0x18) < ((uVar10 ^ 0xc) & 6)) {
LAB_0055ea84:
      do {
        if (*(ulong *)pdVar8 != uVar10) {
          ClearExclusiveLocal();
          plVar15 = plVar16;
          goto LAB_0055eaa8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pdVar8,0x10);
        if (bVar4) {
          *(ulong *)pdVar8 = uVar10 & 0xffffffffffffffd7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar15 = plVar12;
      } while (cVar3 != '\0');
      goto joined_r0x0055eab8;
    }
  }
  else {
    plVar12 = (long *)0x0;
    plVar15 = (long *)0x0;
    *(long *)(lVar13 + 0x18) = lVar17;
    plVar16 = plVar15;
    if (lVar17 == 0) goto LAB_0055ea40;
LAB_0055ea68:
    *(long *)(lVar17 + 0x10) = lVar13;
    uVar10 = *(ulong *)pdVar8;
    plVar15 = plVar16;
    if (((uVar10 ^ 0xc) & 0x18) < ((uVar10 ^ 0xc) & 6)) goto LAB_0055ea84;
  }
LAB_0055eaa8:
  FUN_007767f4(pdVar8,0);
  plVar16 = plVar15;
  plVar15 = plVar12;
joined_r0x0055eab8:
  for (; plVar12 != plVar16; plVar12 = plVar12 + 1) {
    if ((long *)*plVar12 != (long *)0x0) {
      (**(code **)(*(long *)*plVar12 + 8))();
    }
  }
  if (plVar15 != (long *)0x0) {
    __ZdlPv(plVar15);
  }
  return param_1;
}



/* Entry: 0055b370; end: 0055b3eb;  */

void FUN_0055b370(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_00a014b8;
  if (param_1[8] != 0) {
    puVar1 = (uint *)(param_1[8] + 8);
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 & 0xfffffff9) == 0) {
      func_0x0055b598();
    }
  }
  if (((uint)param_1[7] >> 4 & 1) != 0) {
    FUN_00566dd4(param_1 + 7,0x10,0x40);
  }
  FUN_0055e84c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0055b3ec; end: 0055b517;  */

void FUN_0055b3ec(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  puVar1 = (ulong *)(param_1 + 0x38);
  uVar6 = *(ulong *)(param_1 + 0x38);
  if ((uVar6 & 0x19) == 0) {
    do {
      if (*puVar1 != uVar6) {
        ClearExclusiveLocal();
        goto joined_r0x0055b4b8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
joined_r0x0055b4b8:
    iVar5 = iRam0000000000b694c4;
    if (iRam0000000000b694c0 != 0xdd) {
      FUN_00568724(0xb694c0);
      iVar5 = iRam0000000000b694c4;
    }
    do {
      uVar6 = *puVar1;
      if ((uVar6 & 0x11) != 0) break;
      if (((uint)uVar6 >> 3 & 1) == 0) {
        while (*puVar1 == uVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 | 8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0055b468;
        }
        ClearExclusiveLocal();
      }
      iVar4 = iVar5 + -1;
      bVar3 = 0 < iVar5;
      iVar5 = iVar4;
    } while (iVar4 != 0 && bVar3);
    FUN_00776798(puVar1,&UNK_00811348,0,0);
  }
LAB_0055b468:
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + 1;
  return;
}



/* Entry: 0055b518; end: 0055b6cf;  */

void FUN_0055b518(long *param_1)

{
  ulong *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  dword *pdVar9;
  dword *pdVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = param_1[8];
  puVar1 = (ulong *)(param_1 + 7);
  uVar14 = param_1[7];
  if (((uVar14 ^ 0xc) & 0x18) < ((uVar14 ^ 0xc) & 6)) {
    do {
      if (*puVar1 != uVar14) {
        ClearExclusiveLocal();
        goto LAB_0055b574;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar14 & 0xffffffffffffffd7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
LAB_0055b574:
    FUN_007767f4(puVar1,0);
  }
  if (lVar15 != 0) {
    return;
  }
  puVar8 = (uint *)param_1[4];
  uVar4 = *puVar8;
  if ((uVar4 & 1) == 0) {
    do {
      uVar3 = *puVar8;
      if (uVar3 != uVar4) {
        ClearExclusiveLocal();
        break;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar6) {
        *puVar8 = uVar4 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar3 & 1) == 0) goto LAB_0055ac08;
  }
  FUN_00777048();
LAB_0055ac08:
  lVar15 = param_1[6];
  lVar12 = param_1[5];
  if (lVar15 != 0) {
    *(long *)(lVar15 + 0x28) = lVar12;
  }
  if (lVar12 == 0) {
    plVar13 = (long *)(param_1[4] + 8);
  }
  else {
    plVar13 = (long *)(lVar12 + 0x30);
  }
  *plVar13 = lVar15;
  uVar4 = *puVar8;
  do {
    uVar3 = *puVar8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar6) {
      *puVar8 = uVar4 & 2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (7 < uVar3) {
    FUN_007771d4();
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((bRam0000000000b69490 & 1) == 0) {
      iVar11 = 0xb69490;
      ___cxa_guard_acquire();
      if (iVar11 != 0) {
        pdVar9 = &MACH_HEADER.ncmds;
        __Znwm();
        *(undefined8 *)pdVar9 = 0;
        *(undefined8 *)(pdVar9 + 2) = 0;
        pdRam0000000000b69488 = pdVar9;
        ___cxa_guard_release(0xb69490);
      }
    }
    if (*(long *)(pdRam0000000000b69488 + 2) != 0) {
      puVar1 = (ulong *)(param_1 + 7);
      uVar14 = param_1[7];
      if ((uVar14 & 0x19) == 0) {
        do {
          if (*puVar1 != uVar14) {
            ClearExclusiveLocal();
            goto LAB_0055acfc;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 | 8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_0055ad54:
        lVar15 = param_1[8];
      }
      else {
LAB_0055acfc:
        iVar11 = iRam0000000000b694c4;
        if (iRam0000000000b694c0 != 0xdd) {
          FUN_00568724(0xb694c0);
          iVar11 = iRam0000000000b694c4;
        }
        do {
          uVar14 = *puVar1;
          if ((uVar14 & 0x11) != 0) break;
          if (((uint)uVar14 >> 3 & 1) == 0) {
            while (*puVar1 == uVar14) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar14 | 8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0055ad54;
            }
            ClearExclusiveLocal();
          }
          iVar7 = iVar11 + -1;
          bVar6 = 0 < iVar11;
          iVar11 = iVar7;
        } while (iVar7 != 0 && bVar6);
        FUN_00776798(puVar1,&UNK_00811348,0,0);
        lVar15 = param_1[8];
      }
      if (lVar15 != 0) {
        piVar2 = (int *)(lVar15 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar14 = *puVar1;
      if (((uVar14 ^ 0xc) & 0x18) < ((uVar14 ^ 0xc) & 6)) {
        do {
          if (*puVar1 != uVar14) {
            ClearExclusiveLocal();
            goto LAB_0055adac;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 & 0xffffffffffffffd7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      else {
LAB_0055adac:
        FUN_007767f4(puVar1,0);
      }
      if (param_1 == (long *)0x0) {
        return;
      }
      if ((bRam0000000000b69490 & 1) == 0) {
        iVar11 = 0xb69490;
        ___cxa_guard_acquire();
        if (iVar11 != 0) {
          pdVar9 = &MACH_HEADER.ncmds;
          __Znwm();
          *(undefined8 *)pdVar9 = 0;
          *(undefined8 *)(pdVar9 + 2) = 0;
          pdRam0000000000b69488 = pdVar9;
          ___cxa_guard_release(0xb69490);
        }
      }
      pdVar9 = pdRam0000000000b69488;
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        if ((bRam0000000000b69490 & 1) == 0) {
          iVar11 = 0xb69490;
          ___cxa_guard_acquire();
          if (iVar11 != 0) {
            pdVar10 = &MACH_HEADER.ncmds;
            __Znwm();
            *(undefined8 *)pdVar10 = 0;
            *(undefined8 *)(pdVar10 + 2) = 0;
            pdRam0000000000b69488 = pdVar10;
            ___cxa_guard_release(0xb69490);
          }
        }
        if (*(long *)(pdRam0000000000b69488 + 2) != 0) {
          uVar14 = *(ulong *)pdVar9;
          if ((uVar14 & 0x19) == 0) {
            do {
              if (*(ulong *)pdVar9 != uVar14) {
                ClearExclusiveLocal();
                goto LAB_0055ec10;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
              if (bVar6) {
                *(ulong *)pdVar9 = uVar14 | 8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_0055ec68:
            lVar15 = *(long *)(pdVar9 + 2);
          }
          else {
LAB_0055ec10:
            iVar11 = iRam0000000000b694c4;
            if (iRam0000000000b694c0 != 0xdd) {
              FUN_00568724(0xb694c0);
              iVar11 = iRam0000000000b694c4;
            }
            do {
              uVar14 = *(ulong *)pdVar9;
              if ((uVar14 & 0x11) != 0) break;
              if (((uint)uVar14 >> 3 & 1) == 0) {
                while (*(ulong *)pdVar9 == uVar14) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
                  if (bVar6) {
                    *(ulong *)pdVar9 = uVar14 | 8;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_0055ec68;
                }
                ClearExclusiveLocal();
              }
              iVar7 = iVar11 + -1;
              bVar6 = 0 < iVar11;
              iVar11 = iVar7;
            } while (iVar7 != 0 && bVar6);
            FUN_00776798(pdVar9,&UNK_00811348,0,0);
            lVar15 = *(long *)(pdVar9 + 2);
          }
          if (lVar15 != 0) {
            param_1[2] = lVar15;
            *(long **)(lVar15 + 0x18) = param_1;
            *(long **)(pdVar9 + 2) = param_1;
            uVar14 = *(ulong *)pdVar9;
            if (((uVar14 ^ 0xc) & 0x18) < ((uVar14 ^ 0xc) & 6)) {
              while (*(ulong *)pdVar9 == uVar14) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
                if (bVar6) {
                  *(ulong *)pdVar9 = uVar14 & 0xffffffffffffffd7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  return;
                }
              }
              ClearExclusiveLocal();
            }
            FUN_007767f4(pdVar9,0);
            return;
          }
          uVar14 = *(ulong *)pdVar9;
          if (((uVar14 ^ 0xc) & 0x18) < ((uVar14 ^ 0xc) & 6)) {
            do {
              if (*(ulong *)pdVar9 != uVar14) {
                ClearExclusiveLocal();
                goto LAB_0055ed38;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pdVar9,0x10);
              if (bVar6) {
                *(ulong *)pdVar9 = uVar14 & 0xffffffffffffffd7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          else {
LAB_0055ed38:
            FUN_007767f4(pdVar9,0);
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0055ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  param_1[8] = 0;
                    /* WARNING: Could not recover jumptable at 0x0055acf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 0055b6d0; end: 0055bb33;  */

qword * FUN_0055b6d0(int *param_1,long *param_2,int param_3,long param_4,qword *param_5,int param_6)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  qword *pqVar9;
  char cVar10;
  qword *pqVar11;
  ulong uVar12;
  qword *pqVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  qword qVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_3 != 0) {
    lVar14 = (ulong)(param_3 - 1) + 1;
    piVar15 = param_1 + (ulong)(param_3 - 1) * 2;
    lVar16 = (long)param_3;
    pqVar9 = param_5;
    do {
      pqVar13 = *(qword **)(param_1 + (lVar16 + -1) * 2 + 2);
      param_5 = pqVar13;
      if (param_6 == 1) {
        uVar18 = (ulong)*(byte *)((long)pqVar13 + 0xe);
        if (*param_1 < lVar16) {
          qVar17 = *pqVar13;
          param_5 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          *param_5 = qVar17;
          uVar20 = *(undefined8 *)((long)pqVar13 + 0x14);
          uVar19 = *(undefined8 *)((long)pqVar13 + 0xc);
          uVar22 = *(undefined8 *)((long)pqVar13 + 0x24);
          uVar21 = *(undefined8 *)((long)pqVar13 + 0x1c);
          uVar24 = *(undefined8 *)((long)pqVar13 + 0x34);
          uVar23 = *(undefined8 *)((long)pqVar13 + 0x2c);
          *(undefined4 *)((long)param_5 + 0x3c) = *(undefined4 *)((long)pqVar13 + 0x3c);
          *(undefined8 *)((long)param_5 + 0x34) = uVar24;
          *(undefined8 *)((long)param_5 + 0x2c) = uVar23;
          *(undefined8 *)((long)param_5 + 0x24) = uVar22;
          *(undefined8 *)((long)param_5 + 0x1c) = uVar21;
          *(undefined8 *)((long)param_5 + 0x14) = uVar20;
          *(undefined8 *)((long)param_5 + 0xc) = uVar19;
          bVar5 = *(byte *)((long)pqVar13 + 0xf);
          pqVar11 = pqVar13 + uVar18 + 3;
          if (pqVar11 == pqVar13 + (ulong)bVar5 + 2) {
            param_6 = 1;
          }
          else {
            do {
              piVar3 = (int *)(*pqVar11 + 8);
              do {
                cVar10 = '\x01';
                bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar1) {
                  *piVar3 = *piVar3 + 4;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              pqVar11 = pqVar11 + 1;
            } while (pqVar11 != pqVar13 + (ulong)bVar5 + 2);
            param_6 = 1;
          }
        }
        else {
          puVar2 = (uint *)(pqVar13[uVar18 + 2] + 8);
          do {
            uVar4 = *puVar2;
            cVar10 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar1) {
              *puVar2 = uVar4 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar4 & 0xfffffff9) == 0) {
            func_0x0055b598();
            param_6 = 0;
          }
          else {
            param_6 = 0;
          }
        }
        param_5[uVar18 + 2] = (qword)pqVar9;
        *param_5 = *param_5 + param_4;
      }
      else if (param_6 == 2) {
        bVar5 = *(byte *)((long)pqVar13 + 0xf);
        bVar6 = *(byte *)((long)pqVar13 + 0xe);
        if ((ulong)bVar5 - (ulong)bVar6 < 6) {
          if (*param_1 < lVar16) {
            qVar17 = *pqVar13;
            param_5 = &segment_command_00000020.vmsize;
            __Znwm();
            *(undefined4 *)(param_5 + 1) = 4;
            *param_5 = qVar17;
            uVar20 = *(undefined8 *)((long)pqVar13 + 0x14);
            uVar19 = *(undefined8 *)((long)pqVar13 + 0xc);
            uVar22 = *(undefined8 *)((long)pqVar13 + 0x24);
            uVar21 = *(undefined8 *)((long)pqVar13 + 0x1c);
            uVar24 = *(undefined8 *)((long)pqVar13 + 0x34);
            uVar23 = *(undefined8 *)((long)pqVar13 + 0x2c);
            *(undefined4 *)((long)param_5 + 0x3c) = *(undefined4 *)((long)pqVar13 + 0x3c);
            *(undefined8 *)((long)param_5 + 0x34) = uVar24;
            *(undefined8 *)((long)param_5 + 0x2c) = uVar23;
            *(undefined8 *)((long)param_5 + 0x24) = uVar22;
            *(undefined8 *)((long)param_5 + 0x1c) = uVar21;
            *(undefined8 *)((long)param_5 + 0x14) = uVar20;
            *(undefined8 *)((long)param_5 + 0xc) = uVar19;
            if (bVar6 == bVar5) {
              param_6 = 1;
              bVar5 = *(byte *)((long)param_5 + 0xf);
              bVar6 = *(byte *)((long)param_5 + 0xe);
            }
            else {
              pqVar11 = pqVar13 + (ulong)bVar6 + 2;
              do {
                piVar3 = (int *)(*pqVar11 + 8);
                do {
                  cVar10 = '\x01';
                  bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar1) {
                    *piVar3 = *piVar3 + 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                pqVar11 = pqVar11 + 1;
              } while (pqVar11 != pqVar13 + (ulong)bVar5 + 2);
              param_6 = 1;
              bVar5 = *(byte *)((long)param_5 + 0xf);
              bVar6 = *(byte *)((long)param_5 + 0xe);
            }
          }
          else {
            param_6 = 0;
            bVar5 = *(byte *)((long)pqVar13 + 0xf);
            bVar6 = *(byte *)((long)pqVar13 + 0xe);
          }
          uVar7 = (ulong)bVar5;
          uVar18 = (ulong)bVar6;
          if (uVar7 != 6) {
            uVar18 = (6 - uVar7) + uVar18;
            *(undefined1 *)((long)param_5 + 0xf) = 6;
            if (uVar18 < 6) {
              uVar12 = 5;
              pqVar13 = param_5;
              do {
                pqVar13[7] = pqVar13[uVar7 + 1];
                uVar12 = uVar12 - 1;
                pqVar13 = pqVar13 + -1;
              } while (uVar18 <= uVar12);
            }
          }
          bVar5 = (char)uVar18 - 1;
          *(byte *)((long)param_5 + 0xe) = bVar5;
          param_5[(ulong)bVar5 + 2] = (qword)pqVar9;
          *param_5 = *param_5 + param_4;
        }
        else {
          param_5 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          if (*(char *)((long)pqVar9 + 0xc) == '\x03') {
            cVar10 = *(char *)((long)pqVar9 + 0xd) + '\x01';
          }
          else {
            cVar10 = '\0';
          }
          *param_5 = *pqVar9;
          *(undefined1 *)((long)param_5 + 0xc) = 3;
          *(char *)((long)param_5 + 0xd) = cVar10;
          *(undefined2 *)((long)param_5 + 0xe) = 0x100;
          param_5[2] = (qword)pqVar9;
          param_6 = 2;
        }
      }
      else {
        param_5 = pqVar9;
        if (param_6 == 0) {
          *pqVar13 = *pqVar13 + param_4;
          while (1 < lVar16) {
            pqVar13 = *(qword **)piVar15;
            *pqVar13 = *pqVar13 + param_4;
            lVar14 = lVar14 + -1;
            piVar15 = piVar15 + -2;
            lVar16 = lVar14;
          }
          return pqVar13;
        }
      }
      lVar14 = lVar14 + -1;
      piVar15 = piVar15 + -2;
      bVar1 = 1 < lVar16;
      lVar16 = lVar16 + -1;
      pqVar9 = param_5;
    } while (bVar1);
  }
  if (param_6 != 0) {
    if (param_6 == 1) {
      puVar2 = (uint *)(param_2 + 1);
      do {
        uVar4 = *puVar2;
        cVar10 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar1) {
          *puVar2 = uVar4 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) {
        func_0x0055b598(param_2);
      }
    }
    else {
      pqVar9 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar9 + 1) = 4;
      *pqVar9 = *param_2 + *param_5;
      bVar5 = *(char *)((long)param_5 + 0xd) + 1;
      *(undefined1 *)((long)pqVar9 + 0xc) = 3;
      *(byte *)((long)pqVar9 + 0xd) = bVar5;
      *(undefined2 *)((long)pqVar9 + 0xe) = 0x200;
      pqVar9[2] = (qword)param_5;
      pqVar9[3] = (qword)param_2;
      param_5 = pqVar9;
      if ((0xb < bVar5) && (FUN_0055e064(), param_5 = pqVar9, 0xb < *(byte *)((long)pqVar9 + 0xd)))
      {
        FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x55bae0);
        (*pcVar8)();
      }
    }
  }
  return param_5;
}



/* Entry: 0055bb34; end: 0055bdcb;  */

void FUN_0055bb34(qword *param_1,qword *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  qword *pqVar5;
  qword *pqVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  qword *pqVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  qword qVar19;
  qword qVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int aiStack_b8 [2];
  undefined8 auStack_b0 [12];
  
  bVar1 = *(byte *)((long)param_1 + 0xd);
  uVar18 = (ulong)bVar1;
  qVar19 = *param_2;
  pqVar6 = param_1;
  if (bVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar12 = uVar10;
      if ((pqVar6[1] & 0xfffffffd) != 4) break;
      auStack_b0[uVar10] = pqVar6;
      uVar10 = uVar10 + 1;
      pqVar6 = (qword *)pqVar6[(ulong)*(byte *)((long)pqVar6 + 0xf) + 1];
      uVar12 = uVar18;
    } while (uVar18 != uVar10);
  }
  iVar9 = (int)uVar12;
  aiStack_b8[0] = iVar9;
  if ((pqVar6[1] & 0xfffffffd) == 4) {
    aiStack_b8[0] = iVar9 + 1;
  }
  if (iVar9 < (int)(uint)bVar1) {
    piVar14 = aiStack_b8 + (uVar12 & 0xffffffff) * 2;
    lVar11 = uVar18 - (uVar12 & 0xffffffff);
    do {
      piVar14 = piVar14 + 2;
      *(qword **)piVar14 = pqVar6;
      pqVar6 = (qword *)pqVar6[(ulong)*(byte *)((long)pqVar6 + 0xf) + 1];
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  bVar2 = *(byte *)((long)pqVar6 + 0xf);
  bVar3 = *(byte *)((long)pqVar6 + 0xe);
  if (5 < (ulong)bVar2 - (ulong)bVar3) {
    pqVar5 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar5 + 1) = 4;
    if (*(char *)((long)param_2 + 0xc) == '\x03') {
      cVar8 = *(char *)((long)param_2 + 0xd) + '\x01';
    }
    else {
      cVar8 = '\0';
    }
    *pqVar5 = *param_2;
    *(undefined1 *)((long)pqVar5 + 0xc) = 3;
    *(char *)((long)pqVar5 + 0xd) = cVar8;
    *(undefined2 *)((long)pqVar5 + 0xe) = 0x100;
    pqVar5[2] = (qword)param_2;
    uVar7 = 2;
    goto LAB_0055bd24;
  }
  if ((int)(uint)bVar1 < aiStack_b8[0]) {
    uVar7 = 0;
    pqVar5 = pqVar6;
  }
  else {
    qVar20 = *pqVar6;
    pqVar5 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar5 + 1) = 4;
    *pqVar5 = qVar20;
    uVar21 = *(undefined8 *)((long)pqVar6 + 0x14);
    uVar7 = *(undefined8 *)((long)pqVar6 + 0xc);
    uVar23 = *(undefined8 *)((long)pqVar6 + 0x24);
    uVar22 = *(undefined8 *)((long)pqVar6 + 0x1c);
    uVar25 = *(undefined8 *)((long)pqVar6 + 0x34);
    uVar24 = *(undefined8 *)((long)pqVar6 + 0x2c);
    *(undefined4 *)((long)pqVar5 + 0x3c) = *(undefined4 *)((long)pqVar6 + 0x3c);
    *(undefined8 *)((long)pqVar5 + 0x34) = uVar25;
    *(undefined8 *)((long)pqVar5 + 0x2c) = uVar24;
    *(undefined8 *)((long)pqVar5 + 0x24) = uVar23;
    *(undefined8 *)((long)pqVar5 + 0x1c) = uVar22;
    *(undefined8 *)((long)pqVar5 + 0x14) = uVar21;
    *(undefined8 *)((long)pqVar5 + 0xc) = uVar7;
    if (bVar3 != bVar2) {
      pqVar13 = pqVar6 + (ulong)bVar3 + 2;
      do {
        piVar14 = (int *)(*pqVar13 + 8);
        do {
          cVar8 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar4) {
            *piVar14 = *piVar14 + 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pqVar13 = pqVar13 + 1;
      } while (pqVar13 != pqVar6 + (ulong)bVar2 + 2);
    }
    uVar7 = 1;
  }
  bVar1 = *(byte *)((long)pqVar5 + 0xe);
  uVar15 = (ulong)bVar1;
  uVar10 = (ulong)*(byte *)((long)pqVar5 + 0xf);
  uVar12 = uVar10;
  if (uVar15 != 0) {
    uVar12 = uVar10 - uVar15;
    *(undefined1 *)((long)pqVar5 + 0xe) = 0;
    if (*(byte *)((long)pqVar5 + 0xf) != bVar1) {
      if (uVar12 < 2) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar12 & 6;
        uVar17 = uVar16;
        pqVar6 = pqVar5;
        do {
          pqVar13 = pqVar6 + 2;
          qVar20 = pqVar13[uVar15];
          pqVar6[3] = (pqVar13 + uVar15)[1];
          *pqVar13 = qVar20;
          uVar17 = uVar17 - 2;
          pqVar6 = pqVar13;
        } while (uVar17 != 0);
        if (uVar12 == uVar16) goto LAB_0055bd08;
      }
      lVar11 = (uVar16 + uVar15) - uVar10;
      pqVar6 = pqVar5 + uVar16 + 2;
      pqVar13 = pqVar5 + uVar16 + uVar15 + 2;
      do {
        *pqVar6 = *pqVar13;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        pqVar6 = pqVar6 + 1;
        pqVar13 = pqVar13 + 1;
      } while (bVar4);
    }
  }
LAB_0055bd08:
  *(char *)((long)pqVar5 + 0xf) = (char)uVar12 + '\x01';
  pqVar5[(uVar12 & 0xff) + 2] = (qword)param_2;
  *pqVar5 = *pqVar5 + qVar19;
LAB_0055bd24:
  FUN_0055bdcc(aiStack_b8,param_1,uVar18,qVar19,pqVar5,uVar7);
  return;
}



/* Entry: 0055bdcc; end: 0055cdbf;  */

qword * FUN_0055bdcc(int *param_1,long *param_2,int param_3,long param_4,qword *param_5,int param_6)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  qword *pqVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  qword *pqVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  qword *pqVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  qword qVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (param_3 != 0) {
    lVar18 = (ulong)(param_3 - 1) + 1;
    piVar19 = param_1 + (ulong)(param_3 - 1) * 2;
    pqVar9 = param_5;
    lVar20 = (long)param_3;
    do {
      pqVar17 = *(qword **)(param_1 + (lVar20 + -1) * 2 + 2);
      param_5 = pqVar17;
      if (param_6 == 1) {
        uVar12 = (ulong)*(byte *)((long)pqVar17 + 0xf);
        if (*param_1 < lVar20) {
          qVar21 = *pqVar17;
          param_5 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          *param_5 = qVar21;
          uVar23 = *(undefined8 *)((long)pqVar17 + 0x14);
          uVar22 = *(undefined8 *)((long)pqVar17 + 0xc);
          uVar25 = *(undefined8 *)((long)pqVar17 + 0x24);
          uVar24 = *(undefined8 *)((long)pqVar17 + 0x1c);
          uVar27 = *(undefined8 *)((long)pqVar17 + 0x34);
          uVar26 = *(undefined8 *)((long)pqVar17 + 0x2c);
          *(undefined4 *)((long)param_5 + 0x3c) = *(undefined4 *)((long)pqVar17 + 0x3c);
          *(undefined8 *)((long)param_5 + 0x34) = uVar27;
          *(undefined8 *)((long)param_5 + 0x2c) = uVar26;
          *(undefined8 *)((long)param_5 + 0x24) = uVar25;
          *(undefined8 *)((long)param_5 + 0x1c) = uVar24;
          *(undefined8 *)((long)param_5 + 0x14) = uVar23;
          *(undefined8 *)((long)param_5 + 0xc) = uVar22;
          if (uVar12 - 1 == (ulong)*(byte *)((long)pqVar17 + 0xe)) {
            param_6 = 1;
          }
          else {
            pqVar13 = pqVar17 + (ulong)*(byte *)((long)pqVar17 + 0xe) + 2;
            do {
              piVar2 = (int *)(*pqVar13 + 8);
              do {
                cVar10 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar8) {
                  *piVar2 = *piVar2 + 4;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              pqVar13 = pqVar13 + 1;
            } while (pqVar13 != pqVar17 + uVar12 + 1);
            param_6 = 1;
          }
        }
        else {
          puVar1 = (uint *)(pqVar17[uVar12 + 1] + 8);
          do {
            uVar3 = *puVar1;
            cVar10 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar3 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar3 & 0xfffffff9) == 0) {
            func_0x0055b598();
            param_6 = 0;
          }
          else {
            param_6 = 0;
          }
        }
        param_5[uVar12 + 1] = (qword)pqVar9;
        *param_5 = *param_5 + param_4;
      }
      else if (param_6 == 2) {
        bVar4 = *(byte *)((long)pqVar17 + 0xf);
        bVar5 = *(byte *)((long)pqVar17 + 0xe);
        if ((ulong)bVar4 - (ulong)bVar5 < 6) {
          if (*param_1 < lVar20) {
            qVar21 = *pqVar17;
            param_5 = &segment_command_00000020.vmsize;
            __Znwm();
            *(undefined4 *)(param_5 + 1) = 4;
            *param_5 = qVar21;
            uVar23 = *(undefined8 *)((long)pqVar17 + 0x14);
            uVar22 = *(undefined8 *)((long)pqVar17 + 0xc);
            uVar25 = *(undefined8 *)((long)pqVar17 + 0x24);
            uVar24 = *(undefined8 *)((long)pqVar17 + 0x1c);
            uVar27 = *(undefined8 *)((long)pqVar17 + 0x34);
            uVar26 = *(undefined8 *)((long)pqVar17 + 0x2c);
            *(undefined4 *)((long)param_5 + 0x3c) = *(undefined4 *)((long)pqVar17 + 0x3c);
            *(undefined8 *)((long)param_5 + 0x34) = uVar27;
            *(undefined8 *)((long)param_5 + 0x2c) = uVar26;
            *(undefined8 *)((long)param_5 + 0x24) = uVar25;
            *(undefined8 *)((long)param_5 + 0x1c) = uVar24;
            *(undefined8 *)((long)param_5 + 0x14) = uVar23;
            *(undefined8 *)((long)param_5 + 0xc) = uVar22;
            if (bVar5 == bVar4) {
              param_6 = 1;
              bVar4 = *(byte *)((long)param_5 + 0xe);
              bVar5 = *(byte *)((long)param_5 + 0xf);
            }
            else {
              pqVar13 = pqVar17 + (ulong)bVar5 + 2;
              do {
                piVar2 = (int *)(*pqVar13 + 8);
                do {
                  cVar10 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = *piVar2 + 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                pqVar13 = pqVar13 + 1;
              } while (pqVar13 != pqVar17 + (ulong)bVar4 + 2);
              param_6 = 1;
              bVar4 = *(byte *)((long)param_5 + 0xe);
              bVar5 = *(byte *)((long)param_5 + 0xf);
            }
          }
          else {
            param_6 = 0;
            bVar4 = *(byte *)((long)pqVar17 + 0xe);
            bVar5 = *(byte *)((long)pqVar17 + 0xf);
          }
          uVar12 = (ulong)bVar4;
          uVar6 = (ulong)bVar5;
          uVar11 = uVar6;
          if (uVar12 != 0) {
            uVar11 = uVar6 - uVar12;
            *(undefined1 *)((long)param_5 + 0xe) = 0;
            if (bVar5 != bVar4) {
              pqVar17 = param_5 + 2;
              if (uVar11 < 2) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar11 & 6;
                pqVar13 = pqVar17;
                uVar16 = uVar15;
                do {
                  qVar21 = pqVar13[uVar12];
                  pqVar13[1] = (pqVar13 + uVar12)[1];
                  *pqVar13 = qVar21;
                  uVar16 = uVar16 - 2;
                  pqVar13 = pqVar13 + 2;
                } while (uVar16 != 0);
                if (uVar11 == uVar15) goto LAB_0055c074;
              }
              lVar14 = (uVar15 + uVar12) - uVar6;
              pqVar13 = pqVar17 + uVar15;
              pqVar17 = pqVar17 + uVar15 + uVar12;
              do {
                *pqVar13 = *pqVar17;
                bVar8 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                pqVar13 = pqVar13 + 1;
                pqVar17 = pqVar17 + 1;
              } while (bVar8);
            }
          }
LAB_0055c074:
          *(char *)((long)param_5 + 0xf) = (char)uVar11 + '\x01';
          param_5[(uVar11 & 0xff) + 2] = (qword)pqVar9;
          *param_5 = *param_5 + param_4;
        }
        else {
          param_5 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          if (*(char *)((long)pqVar9 + 0xc) == '\x03') {
            cVar10 = *(char *)((long)pqVar9 + 0xd) + '\x01';
          }
          else {
            cVar10 = '\0';
          }
          *param_5 = *pqVar9;
          *(undefined1 *)((long)param_5 + 0xc) = 3;
          *(char *)((long)param_5 + 0xd) = cVar10;
          *(undefined2 *)((long)param_5 + 0xe) = 0x100;
          param_5[2] = (qword)pqVar9;
          param_6 = 2;
        }
      }
      else {
        param_5 = pqVar9;
        if (param_6 == 0) {
          *pqVar17 = *pqVar17 + param_4;
          while (1 < lVar20) {
            pqVar17 = *(qword **)piVar19;
            *pqVar17 = *pqVar17 + param_4;
            lVar18 = lVar18 + -1;
            piVar19 = piVar19 + -2;
            lVar20 = lVar18;
          }
          return pqVar17;
        }
      }
      lVar18 = lVar18 + -1;
      piVar19 = piVar19 + -2;
      bVar8 = 1 < lVar20;
      pqVar9 = param_5;
      lVar20 = lVar20 + -1;
    } while (bVar8);
  }
  if (param_6 != 0) {
    if (param_6 == 1) {
      puVar1 = (uint *)(param_2 + 1);
      do {
        uVar3 = *puVar1;
        cVar10 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar3 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar3 & 0xfffffff9) == 0) {
        func_0x0055b598(param_2);
      }
    }
    else {
      pqVar9 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar9 + 1) = 4;
      *pqVar9 = *param_5 + *param_2;
      bVar4 = *(char *)((long)param_2 + 0xd) + 1;
      *(undefined1 *)((long)pqVar9 + 0xc) = 3;
      *(byte *)((long)pqVar9 + 0xd) = bVar4;
      *(undefined2 *)((long)pqVar9 + 0xe) = 0x200;
      pqVar9[2] = (qword)param_2;
      pqVar9[3] = (qword)param_5;
      param_5 = pqVar9;
      if ((0xb < bVar4) && (FUN_0055e064(), param_5 = pqVar9, 0xb < *(byte *)((long)pqVar9 + 0xd)))
      {
        FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x55c204);
        (*pcVar7)();
      }
    }
  }
  return param_5;
}



/* Entry: 0055cdc0; end: 0055d0c7;  */

void FUN_0055cdc0(long param_1)

{
  uint *puVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  lVar10 = param_1 + 0x10;
  bVar5 = *(byte *)(param_1 + 0xe);
  uVar12 = (ulong)bVar5;
  bVar6 = *(byte *)(param_1 + 0xf);
  plVar3 = (long *)(lVar10 + (ulong)bVar6 * 8);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (bVar5 == bVar6) goto LAB_0055d094;
    plVar13 = (long *)(lVar10 + uVar12 * 8);
    do {
      lVar10 = *plVar13;
      puVar1 = (uint *)(lVar10 + 8);
      if (*puVar1 == 4) {
LAB_0055ce60:
        bVar5 = *(byte *)(lVar10 + 0xf);
        if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar5) {
          plVar14 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
          do {
            lVar9 = *plVar14;
            puVar1 = (uint *)(lVar9 + 8);
            if (*puVar1 == 4) {
LAB_0055cecc:
              if (*(byte *)(lVar9 + 0xc) < 6) {
                pcVar11 = *(code **)(lVar9 + 0x18);
                if (*(byte *)(lVar9 + 0xc) == 5) {
                  (*pcVar11)();
                  goto LAB_0055ce94;
                }
                pcVar2 = pcVar11 + 8;
                if (*(uint *)pcVar2 != 4) {
                  do {
                    uVar4 = *(uint *)pcVar2;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                    if (bVar8) {
                      *(uint *)pcVar2 = uVar4 - 4;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055ce90;
                }
                if ((byte)pcVar11[0xc] < 6) {
                  (**(code **)(pcVar11 + 0x18))(pcVar11);
                }
                else {
                  __ZdlPv(pcVar11);
                }
              }
LAB_0055ce90:
              __ZdlPv(lVar9);
            }
            else {
              do {
                uVar4 = *puVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar8) {
                  *puVar1 = uVar4 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cecc;
            }
LAB_0055ce94:
            plVar14 = plVar14 + 1;
          } while (plVar14 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar5 * 8));
          if (lVar10 == 0) goto LAB_0055ce28;
        }
        __ZdlPv(lVar10);
      }
      else {
        do {
          uVar4 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar4 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055ce60;
      }
LAB_0055ce28:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    if (bVar5 == bVar6) goto LAB_0055d094;
    plVar13 = (long *)(lVar10 + uVar12 * 8);
    do {
      lVar10 = *plVar13;
      puVar1 = (uint *)(lVar10 + 8);
      if (*puVar1 == 4) {
LAB_0055d02c:
        if (*(byte *)(lVar10 + 0xc) < 6) {
          pcVar11 = *(code **)(lVar10 + 0x18);
          if (*(byte *)(lVar10 + 0xc) == 5) {
            (*pcVar11)();
            goto LAB_0055cff4;
          }
          pcVar2 = pcVar11 + 8;
          if (*(uint *)pcVar2 != 4) {
            do {
              uVar4 = *(uint *)pcVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar8) {
                *(uint *)pcVar2 = uVar4 - 4;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055cff0;
          }
          if ((byte)pcVar11[0xc] < 6) {
            (**(code **)(pcVar11 + 0x18))(pcVar11);
          }
          else {
            __ZdlPv(pcVar11);
          }
        }
LAB_0055cff0:
        __ZdlPv(lVar10);
      }
      else {
        do {
          uVar4 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar4 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055d02c;
      }
LAB_0055cff4:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  else {
    if (bVar5 == bVar6) goto LAB_0055d094;
    plVar13 = (long *)(lVar10 + uVar12 * 8);
    do {
      lVar10 = *plVar13;
      puVar1 = (uint *)(lVar10 + 8);
      if (*puVar1 == 4) {
LAB_0055cf80:
        bVar5 = *(byte *)(lVar10 + 0xf);
        if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar5) {
          plVar14 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
          do {
            puVar1 = (uint *)(*plVar14 + 8);
            if (*puVar1 == 4) {
LAB_0055cfa0:
              FUN_0055cdc0();
            }
            else {
              do {
                uVar4 = *puVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar8) {
                  *puVar1 = uVar4 - 4;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cfa0;
            }
            plVar14 = plVar14 + 1;
          } while (plVar14 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar5 * 8));
          if (lVar10 == 0) goto LAB_0055cf48;
        }
        __ZdlPv(lVar10);
      }
      else {
        do {
          uVar4 = *puVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar4 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cf80;
      }
LAB_0055cf48:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  if (param_1 == 0) {
    return;
  }
LAB_0055d094:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 0055d0c8; end: 0055d167;  */

qword * FUN_0055d0c8(qword *param_1,qword *param_2,qword *param_3)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  qword *pqVar9;
  dword *pdVar10;
  code *pcVar11;
  bool bVar12;
  qword *pqVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  qword *pqVar18;
  long lVar19;
  undefined1 uVar20;
  ulong uVar21;
  ulong uVar22;
  qword *pqVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  qword qVar27;
  int iVar28;
  qword qVar29;
  qword *pqVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  qword qVar34;
  undefined8 uVar35;
  qword qVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  qword aqStack_f8 [13];
  
  uVar26 = param_2[1];
  if (uVar26 < 0x7ffffffffffffff7) {
    qVar27 = *param_2;
    if (uVar26 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar26;
      pqVar30 = param_1;
      if (uVar26 == 0) {
        *(undefined1 *)param_1 = 0;
        return param_2;
      }
    }
    else {
      pdVar10 = &MACH_HEADER.flags;
      if ((dword *)(uVar26 | 7) != (dword *)0x17) {
        pdVar10 = (dword *)(uVar26 | 7);
      }
      pqVar30 = (qword *)((long)pdVar10 + 1);
      __Znwm();
      param_1[1] = uVar26;
      param_1[2] = (ulong)((long)pdVar10 + 1) | 0x8000000000000000;
      *param_1 = (qword)pqVar30;
    }
    pqVar13 = pqVar30;
    _memmove(pqVar30,qVar27,uVar26);
    *(undefined1 *)((long)pqVar30 + uVar26) = 0;
    return pqVar13;
  }
  FUN_0040d740();
  qVar27 = *param_3;
  bVar3 = *(byte *)((long)param_2 + 0xd);
  bVar4 = *(byte *)((long)param_3 + 0xd);
  uVar8 = (uint)bVar3 - (uint)bVar4;
  uVar26 = (ulong)uVar8;
  pqVar30 = param_2;
  if ((int)uVar8 < 1) {
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    do {
      uVar16 = uVar15;
      if ((pqVar30[1] & 0xfffffffd) != 4) break;
      aqStack_f8[uVar15 + 1] = (qword)pqVar30;
      uVar15 = uVar15 + 1;
      pqVar30 = (qword *)pqVar30[(ulong)*(byte *)((long)pqVar30 + 0xf) + 1];
      uVar16 = uVar26;
    } while (uVar26 != uVar15);
  }
  iVar14 = (int)uVar16;
  aqStack_f8[0]._0_4_ = iVar14;
  if ((pqVar30[1] & 0xfffffffd) == 4) {
    aqStack_f8[0]._0_4_ = iVar14 + 1;
  }
  if (iVar14 < (int)uVar8) {
    pqVar13 = aqStack_f8 + (uVar16 & 0xffffffff);
    do {
      pqVar13 = pqVar13 + 1;
      *pqVar13 = (qword)pqVar30;
      pqVar30 = (qword *)pqVar30[(ulong)*(byte *)((long)pqVar30 + 0xf) + 1];
      uVar1 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar8);
  }
  uVar15 = (ulong)*(byte *)((long)param_3 + 0xf);
  uVar16 = (ulong)*(byte *)((long)param_3 + 0xe);
  if (6 < (*(byte *)((long)pqVar30 + 0xf) + uVar15) - (*(byte *)((long)pqVar30 + 0xe) + uVar16)) {
    iVar14 = 2;
    iVar28 = 2;
    if ((uint)bVar3 == (uint)bVar4) goto LAB_0055d44c;
    goto LAB_0055d280;
  }
  if ((int)uVar8 < (int)aqStack_f8[0]) {
    iVar28 = 0;
    pqVar13 = pqVar30;
  }
  else {
    qVar29 = *pqVar30;
    pqVar13 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar13 + 1) = 4;
    *pqVar13 = qVar29;
    uVar32 = *(undefined8 *)((long)pqVar30 + 0x14);
    uVar31 = *(undefined8 *)((long)pqVar30 + 0xc);
    uVar35 = *(undefined8 *)((long)pqVar30 + 0x24);
    uVar33 = *(undefined8 *)((long)pqVar30 + 0x1c);
    uVar38 = *(undefined8 *)((long)pqVar30 + 0x34);
    uVar37 = *(undefined8 *)((long)pqVar30 + 0x2c);
    *(undefined4 *)((long)pqVar13 + 0x3c) = *(undefined4 *)((long)pqVar30 + 0x3c);
    *(undefined8 *)((long)pqVar13 + 0x34) = uVar38;
    *(undefined8 *)((long)pqVar13 + 0x2c) = uVar37;
    *(undefined8 *)((long)pqVar13 + 0x24) = uVar35;
    *(undefined8 *)((long)pqVar13 + 0x1c) = uVar33;
    *(undefined8 *)((long)pqVar13 + 0x14) = uVar32;
    *(undefined8 *)((long)pqVar13 + 0xc) = uVar31;
    bVar5 = *(byte *)((long)pqVar30 + 0xf);
    if ((uint)*(byte *)((long)pqVar30 + 0xe) != (uint)bVar5) {
      pqVar18 = pqVar30 + (ulong)*(byte *)((long)pqVar30 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar18 + 8);
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pqVar18 = pqVar18 + 1;
      } while (pqVar18 != pqVar30 + (ulong)(uint)bVar5 + 2);
      uVar16 = (ulong)*(byte *)((long)param_3 + 0xe);
      uVar15 = (ulong)*(byte *)((long)param_3 + 0xf);
    }
    iVar28 = 1;
  }
  bVar5 = *(byte *)((long)pqVar13 + 0xe);
  uVar17 = (ulong)bVar5;
  bVar6 = *(byte *)((long)pqVar13 + 0xf);
  uVar22 = (ulong)bVar6;
  uVar21 = uVar22;
  if (bVar5 != 0) {
    uVar21 = uVar22 - uVar17;
    *(undefined1 *)((long)pqVar13 + 0xe) = 0;
    *(char *)((long)pqVar13 + 0xf) = (char)uVar21;
    if (bVar6 != bVar5) {
      if (uVar21 < 2) {
        uVar24 = 0;
      }
      else {
        uVar24 = uVar21 & 6;
        uVar25 = uVar24;
        pqVar30 = pqVar13;
        do {
          pqVar18 = pqVar30 + 2;
          qVar29 = pqVar18[uVar17];
          pqVar30[3] = (pqVar18 + uVar17)[1];
          *pqVar18 = qVar29;
          uVar25 = uVar25 - 2;
          pqVar30 = pqVar18;
        } while (uVar25 != 0);
        if (uVar21 == uVar24) goto LAB_0055d338;
      }
      lVar19 = (uVar24 + uVar17) - uVar22;
      pqVar30 = pqVar13 + uVar24 + 2;
      pqVar18 = pqVar13 + uVar24 + uVar17 + 2;
      do {
        *pqVar30 = *pqVar18;
        bVar12 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        pqVar30 = pqVar30 + 1;
        pqVar18 = pqVar18 + 1;
      } while (bVar12);
    }
  }
LAB_0055d338:
  uVar20 = (undefined1)uVar21;
  if ((int)uVar15 != (int)uVar16) {
    pqVar30 = param_3 + uVar16 + 2;
    uVar21 = uVar21 & 0xffffffff;
    uVar17 = (uVar15 * 8 + uVar16 * -8) - 8;
    pqVar18 = pqVar30;
    if ((uVar17 < 0x48) ||
       (pqVar23 = pqVar13 + uVar21, (ulong)((long)pqVar23 - (long)(param_3 + uVar16)) < 0x20)) {
LAB_0055d380:
      uVar17 = uVar21;
      do {
        pqVar23 = pqVar18 + 1;
        uVar21 = uVar17 + 1;
        pqVar13[uVar17 + 2] = *pqVar18;
        pqVar18 = pqVar23;
        uVar17 = uVar21;
      } while (pqVar23 != pqVar30 + (uVar15 - uVar16));
    }
    else {
      uVar17 = (uVar17 >> 3) + 1;
      uVar25 = uVar17 & 0x3ffffffffffffffc;
      uVar21 = uVar25 + uVar21;
      pqVar18 = pqVar30 + uVar25;
      uVar22 = uVar25;
      pqVar9 = param_3 + uVar16;
      do {
        qVar29 = pqVar9[2];
        qVar36 = pqVar9[5];
        qVar34 = pqVar9[4];
        pqVar23[3] = pqVar9[3];
        pqVar23[2] = qVar29;
        pqVar23[5] = qVar36;
        pqVar23[4] = qVar34;
        uVar22 = uVar22 - 4;
        pqVar23 = pqVar23 + 4;
        pqVar9 = pqVar9 + 4;
      } while (uVar22 != 0);
      if (uVar17 != uVar25) goto LAB_0055d380;
    }
    uVar20 = (undefined1)uVar21;
  }
  *(undefined1 *)((long)pqVar13 + 0xf) = uVar20;
  pqVar30 = param_3 + 1;
  *pqVar13 = *pqVar13 + *param_3;
  if ((*pqVar30 & 0xfffffffd) == 4) {
    __ZdlPv(param_3);
  }
  else {
    bVar5 = *(byte *)((long)param_3 + 0xf);
    if ((uint)*(byte *)((long)param_3 + 0xe) != (uint)bVar5) {
      pqVar18 = param_3 + (ulong)*(byte *)((long)param_3 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar18 + 8);
        do {
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pqVar18 = pqVar18 + 1;
      } while (pqVar18 != param_3 + (ulong)(uint)bVar5 + 2);
    }
    do {
      qVar29 = *pqVar30;
      cVar7 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(pqVar30,0x10);
      if (bVar12) {
        *(uint *)pqVar30 = (uint)qVar29 - 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)qVar29 & 0xfffffff9) == 0) {
      func_0x0055b598(param_3);
    }
  }
  param_3 = pqVar13;
  iVar14 = iVar28;
  if (bVar3 == bVar4) {
LAB_0055d44c:
    if (iVar28 == 0) {
      return param_3;
    }
    if (iVar28 == 1) {
      pqVar30 = param_2 + 1;
      do {
        qVar27 = *pqVar30;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(pqVar30,0x10);
        if (bVar12) {
          *(uint *)pqVar30 = (uint)qVar27 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (((uint)qVar27 & 0xfffffff9) != 0) {
        return param_3;
      }
      func_0x0055b598(param_2);
      return param_3;
    }
    pqVar30 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar30 + 1) = 4;
    *pqVar30 = *param_3 + *param_2;
    bVar3 = *(char *)((long)param_2 + 0xd) + 1;
    *(undefined1 *)((long)pqVar30 + 0xc) = 3;
    *(byte *)((long)pqVar30 + 0xd) = bVar3;
    *(undefined2 *)((long)pqVar30 + 0xe) = 0x200;
    pqVar30[2] = (qword)param_2;
    pqVar30[3] = (qword)param_3;
    if (bVar3 < 0xc) {
      return pqVar30;
    }
    FUN_0055e064();
    if (*(byte *)((long)pqVar30 + 0xd) < 0xc) {
      return pqVar30;
    }
    FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x55d5c0);
    (*pcVar11)();
  }
LAB_0055d280:
  pqVar30 = aqStack_f8;
  FUN_0055bdcc(pqVar30,param_2,uVar26,qVar27,param_3,iVar14);
  return pqVar30;
}



/* Entry: 0055d168; end: 0055daa3;  */

qword * FUN_0055d168(qword *param_1,qword *param_2)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  qword *pqVar9;
  code *pcVar10;
  bool bVar11;
  qword *pqVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  qword *pqVar17;
  long lVar18;
  undefined1 uVar19;
  ulong uVar20;
  ulong uVar21;
  qword *pqVar22;
  ulong uVar23;
  ulong uVar24;
  qword qVar25;
  ulong uVar26;
  int iVar27;
  qword qVar28;
  qword *pqVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  qword qVar33;
  undefined8 uVar34;
  qword qVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  qword aqStack_c8 [13];
  
  qVar25 = *param_2;
  bVar3 = *(byte *)((long)param_1 + 0xd);
  bVar4 = *(byte *)((long)param_2 + 0xd);
  uVar8 = (uint)bVar3 - (uint)bVar4;
  uVar26 = (ulong)uVar8;
  pqVar29 = param_1;
  if ((int)uVar8 < 1) {
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar15 = uVar14;
      if ((pqVar29[1] & 0xfffffffd) != 4) break;
      aqStack_c8[uVar14 + 1] = (qword)pqVar29;
      uVar14 = uVar14 + 1;
      pqVar29 = (qword *)pqVar29[(ulong)*(byte *)((long)pqVar29 + 0xf) + 1];
      uVar15 = uVar26;
    } while (uVar26 != uVar14);
  }
  iVar13 = (int)uVar15;
  aqStack_c8[0]._0_4_ = iVar13;
  if ((pqVar29[1] & 0xfffffffd) == 4) {
    aqStack_c8[0]._0_4_ = iVar13 + 1;
  }
  if (iVar13 < (int)uVar8) {
    pqVar12 = aqStack_c8 + (uVar15 & 0xffffffff);
    do {
      pqVar12 = pqVar12 + 1;
      *pqVar12 = (qword)pqVar29;
      pqVar29 = (qword *)pqVar29[(ulong)*(byte *)((long)pqVar29 + 0xf) + 1];
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar8);
  }
  uVar14 = (ulong)*(byte *)((long)param_2 + 0xf);
  uVar15 = (ulong)*(byte *)((long)param_2 + 0xe);
  if (6 < (*(byte *)((long)pqVar29 + 0xf) + uVar14) - (*(byte *)((long)pqVar29 + 0xe) + uVar15)) {
    iVar13 = 2;
    iVar27 = 2;
    if ((uint)bVar3 == (uint)bVar4) goto LAB_0055d44c;
    goto LAB_0055d280;
  }
  if ((int)uVar8 < (int)aqStack_c8[0]) {
    iVar27 = 0;
    pqVar12 = pqVar29;
  }
  else {
    qVar28 = *pqVar29;
    pqVar12 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar12 + 1) = 4;
    *pqVar12 = qVar28;
    uVar31 = *(undefined8 *)((long)pqVar29 + 0x14);
    uVar30 = *(undefined8 *)((long)pqVar29 + 0xc);
    uVar34 = *(undefined8 *)((long)pqVar29 + 0x24);
    uVar32 = *(undefined8 *)((long)pqVar29 + 0x1c);
    uVar37 = *(undefined8 *)((long)pqVar29 + 0x34);
    uVar36 = *(undefined8 *)((long)pqVar29 + 0x2c);
    *(undefined4 *)((long)pqVar12 + 0x3c) = *(undefined4 *)((long)pqVar29 + 0x3c);
    *(undefined8 *)((long)pqVar12 + 0x34) = uVar37;
    *(undefined8 *)((long)pqVar12 + 0x2c) = uVar36;
    *(undefined8 *)((long)pqVar12 + 0x24) = uVar34;
    *(undefined8 *)((long)pqVar12 + 0x1c) = uVar32;
    *(undefined8 *)((long)pqVar12 + 0x14) = uVar31;
    *(undefined8 *)((long)pqVar12 + 0xc) = uVar30;
    bVar5 = *(byte *)((long)pqVar29 + 0xf);
    if ((uint)*(byte *)((long)pqVar29 + 0xe) != (uint)bVar5) {
      pqVar17 = pqVar29 + (ulong)*(byte *)((long)pqVar29 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar17 + 8);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pqVar17 = pqVar17 + 1;
      } while (pqVar17 != pqVar29 + (ulong)(uint)bVar5 + 2);
      uVar15 = (ulong)*(byte *)((long)param_2 + 0xe);
      uVar14 = (ulong)*(byte *)((long)param_2 + 0xf);
    }
    iVar27 = 1;
  }
  bVar5 = *(byte *)((long)pqVar12 + 0xe);
  uVar16 = (ulong)bVar5;
  bVar6 = *(byte *)((long)pqVar12 + 0xf);
  uVar21 = (ulong)bVar6;
  uVar20 = uVar21;
  if (bVar5 != 0) {
    uVar20 = uVar21 - uVar16;
    *(undefined1 *)((long)pqVar12 + 0xe) = 0;
    *(char *)((long)pqVar12 + 0xf) = (char)uVar20;
    if (bVar6 != bVar5) {
      if (uVar20 < 2) {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar20 & 6;
        uVar24 = uVar23;
        pqVar29 = pqVar12;
        do {
          pqVar17 = pqVar29 + 2;
          qVar28 = pqVar17[uVar16];
          pqVar29[3] = (pqVar17 + uVar16)[1];
          *pqVar17 = qVar28;
          uVar24 = uVar24 - 2;
          pqVar29 = pqVar17;
        } while (uVar24 != 0);
        if (uVar20 == uVar23) goto LAB_0055d338;
      }
      lVar18 = (uVar23 + uVar16) - uVar21;
      pqVar29 = pqVar12 + uVar23 + 2;
      pqVar17 = pqVar12 + uVar23 + uVar16 + 2;
      do {
        *pqVar29 = *pqVar17;
        bVar11 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        pqVar29 = pqVar29 + 1;
        pqVar17 = pqVar17 + 1;
      } while (bVar11);
    }
  }
LAB_0055d338:
  uVar19 = (undefined1)uVar20;
  if ((int)uVar14 != (int)uVar15) {
    pqVar29 = param_2 + uVar15 + 2;
    uVar20 = uVar20 & 0xffffffff;
    uVar16 = (uVar14 * 8 + uVar15 * -8) - 8;
    pqVar17 = pqVar29;
    if ((uVar16 < 0x48) ||
       (pqVar22 = pqVar12 + uVar20, (ulong)((long)pqVar22 - (long)(param_2 + uVar15)) < 0x20)) {
LAB_0055d380:
      uVar16 = uVar20;
      do {
        pqVar22 = pqVar17 + 1;
        uVar20 = uVar16 + 1;
        pqVar12[uVar16 + 2] = *pqVar17;
        pqVar17 = pqVar22;
        uVar16 = uVar20;
      } while (pqVar22 != pqVar29 + (uVar14 - uVar15));
    }
    else {
      uVar16 = (uVar16 >> 3) + 1;
      uVar24 = uVar16 & 0x3ffffffffffffffc;
      uVar20 = uVar24 + uVar20;
      pqVar17 = pqVar29 + uVar24;
      uVar21 = uVar24;
      pqVar9 = param_2 + uVar15;
      do {
        qVar28 = pqVar9[2];
        qVar35 = pqVar9[5];
        qVar33 = pqVar9[4];
        pqVar22[3] = pqVar9[3];
        pqVar22[2] = qVar28;
        pqVar22[5] = qVar35;
        pqVar22[4] = qVar33;
        uVar21 = uVar21 - 4;
        pqVar22 = pqVar22 + 4;
        pqVar9 = pqVar9 + 4;
      } while (uVar21 != 0);
      if (uVar16 != uVar24) goto LAB_0055d380;
    }
    uVar19 = (undefined1)uVar20;
  }
  *(undefined1 *)((long)pqVar12 + 0xf) = uVar19;
  pqVar29 = param_2 + 1;
  *pqVar12 = *pqVar12 + *param_2;
  if ((*pqVar29 & 0xfffffffd) == 4) {
    __ZdlPv(param_2);
  }
  else {
    bVar5 = *(byte *)((long)param_2 + 0xf);
    if ((uint)*(byte *)((long)param_2 + 0xe) != (uint)bVar5) {
      pqVar17 = param_2 + (ulong)*(byte *)((long)param_2 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar17 + 8);
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = *piVar2 + 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pqVar17 = pqVar17 + 1;
      } while (pqVar17 != param_2 + (ulong)(uint)bVar5 + 2);
    }
    do {
      qVar28 = *pqVar29;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(pqVar29,0x10);
      if (bVar11) {
        *(uint *)pqVar29 = (uint)qVar28 - 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((uint)qVar28 & 0xfffffff9) == 0) {
      func_0x0055b598(param_2);
    }
  }
  param_2 = pqVar12;
  iVar13 = iVar27;
  if (bVar3 == bVar4) {
LAB_0055d44c:
    if (iVar27 == 0) {
      return param_2;
    }
    if (iVar27 == 1) {
      pqVar29 = param_1 + 1;
      do {
        qVar25 = *pqVar29;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pqVar29,0x10);
        if (bVar11) {
          *(uint *)pqVar29 = (uint)qVar25 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (((uint)qVar25 & 0xfffffff9) != 0) {
        return param_2;
      }
      func_0x0055b598(param_1);
      return param_2;
    }
    pqVar29 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar29 + 1) = 4;
    *pqVar29 = *param_2 + *param_1;
    bVar3 = *(char *)((long)param_1 + 0xd) + 1;
    *(undefined1 *)((long)pqVar29 + 0xc) = 3;
    *(byte *)((long)pqVar29 + 0xd) = bVar3;
    *(undefined2 *)((long)pqVar29 + 0xe) = 0x200;
    pqVar29[2] = (qword)param_1;
    pqVar29[3] = (qword)param_2;
    if (bVar3 < 0xc) {
      return pqVar29;
    }
    FUN_0055e064();
    if (*(byte *)((long)pqVar29 + 0xd) < 0xc) {
      return pqVar29;
    }
    FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x55d5c0);
    (*pcVar10)();
  }
LAB_0055d280:
  pqVar29 = aqStack_c8;
  FUN_0055bdcc(pqVar29,param_1,uVar26,qVar25,param_2,iVar13);
  return pqVar29;
}



/* Entry: 0055daa4; end: 0055dbef;  */

qword * FUN_0055daa4(undefined8 *param_1,qword *param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  qword *pqVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int iVar12;
  qword *pqVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  qword *pqVar17;
  char cVar18;
  uint uVar19;
  ulong uVar20;
  qword *pqVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  qword *pqVar26;
  ulong uVar27;
  ulong uVar28;
  qword qVar29;
  ulong uVar30;
  int iVar31;
  qword qVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  qword qVar36;
  undefined8 uVar37;
  qword qVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  qword aqStack_d8 [13];
  
  if (param_3 == 0) {
    return (qword *)0x0;
  }
  uVar19 = (uint)*(byte *)((long)param_1 + 0xd);
  do {
    puVar10 = (undefined8 *)param_1[(ulong)*(byte *)((long)param_1 + 0xe) + 2];
    pqVar17 = (qword *)*puVar10;
    if (pqVar17 <= param_2) {
      puVar22 = param_1 + (ulong)*(byte *)((long)param_1 + 0xe) + 3;
      do {
        param_2 = (qword *)((long)param_2 - (long)pqVar17);
        puVar10 = (undefined8 *)*puVar22;
        pqVar17 = (qword *)*puVar10;
        puVar22 = puVar22 + 1;
      } while (pqVar17 <= param_2);
    }
    if (pqVar17 < (qword *)((long)param_2 + param_3)) {
      return (qword *)0x0;
    }
    bVar8 = 0 < (int)uVar19;
    param_1 = puVar10;
    uVar19 = uVar19 - 1;
  } while (bVar8);
  if (param_4 == (undefined8 *)0x0) goto LAB_0055db5c;
  if (*(byte *)((long)puVar10 + 0xc) == 1) {
    lVar16 = puVar10[2];
    puVar10 = (undefined8 *)puVar10[3];
    if (*(byte *)((long)puVar10 + 0xc) < 6) goto LAB_0055db1c;
LAB_0055db3c:
    lVar23 = (long)puVar10 + 0xd;
  }
  else {
    lVar16 = 0;
    if (5 < *(byte *)((long)puVar10 + 0xc)) goto LAB_0055db3c;
LAB_0055db1c:
    lVar23 = puVar10[2];
  }
  if (param_2 <= pqVar17) {
    uVar30 = (long)pqVar17 - (long)param_2;
    if (param_3 <= (ulong)((long)pqVar17 - (long)param_2)) {
      uVar30 = param_3;
    }
    *param_4 = (char *)(lVar23 + lVar16 + (long)param_2);
    param_4[1] = uVar30;
LAB_0055db5c:
    return (qword *)((long)&MACH_HEADER.magic + 1);
  }
  pcVar11 = "string_view::substr";
  FUN_00435534();
  if (*(char *)((long)param_2 + 0xc) != '\x03') {
    func_0x0055e638(param_2,&stack0xffffffffffffffd0,0x55e534);
    return (qword *)pcVar11;
  }
  if (*(byte *)((long)pcVar11 + 0xd) < *(byte *)((long)param_2 + 0xd)) {
    qVar29 = *(qword *)pcVar11;
    bVar3 = *(byte *)((long)param_2 + 0xd);
    bVar4 = *(byte *)((long)pcVar11 + 0xd);
    uVar19 = (uint)bVar3 - (uint)bVar4;
    uVar30 = (ulong)uVar19;
    pqVar17 = param_2;
    if ((int)uVar19 < 1) {
      uVar15 = 0;
    }
    else {
      uVar14 = 0;
      do {
        uVar15 = uVar14;
        if ((pqVar17[1] & 0xfffffffd) != 4) break;
        aqStack_d8[uVar14 + 1] = (qword)pqVar17;
        uVar14 = uVar14 + 1;
        pqVar17 = (qword *)pqVar17[(ulong)*(byte *)((long)pqVar17 + 0xe) + 2];
        uVar15 = uVar30;
      } while (uVar30 != uVar14);
    }
    iVar12 = (int)uVar15;
    aqStack_d8[0]._0_4_ = iVar12;
    if ((pqVar17[1] & 0xfffffffd) == 4) {
      aqStack_d8[0]._0_4_ = iVar12 + 1;
    }
    if (iVar12 < (int)uVar19) {
      pqVar9 = aqStack_d8 + (uVar15 & 0xffffffff);
      do {
        pqVar9 = pqVar9 + 1;
        *pqVar9 = (qword)pqVar17;
        pqVar17 = (qword *)pqVar17[(ulong)*(byte *)((long)pqVar17 + 0xe) + 2];
        uVar1 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar19);
    }
    uVar15 = (ulong)*(byte *)((long)pcVar11 + 0xf);
    uVar14 = (ulong)*(byte *)((long)pcVar11 + 0xe);
    if (6 < (*(byte *)((long)pqVar17 + 0xf) + uVar15) - (*(byte *)((long)pqVar17 + 0xe) + uVar14)) {
      iVar31 = 2;
      iVar12 = 2;
      if ((uint)bVar3 == (uint)bVar4) goto LAB_0055d99c;
      goto LAB_0055d744;
    }
    if ((int)uVar19 < (int)aqStack_d8[0]) {
      iVar12 = 0;
      lVar16 = uVar15 - uVar14;
      bVar5 = *(byte *)((long)pqVar17 + 0xf);
      bVar6 = *(byte *)((long)pqVar17 + 0xe);
    }
    else {
      qVar32 = *pqVar17;
      pqVar9 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar9 + 1) = 4;
      *pqVar9 = qVar32;
      uVar34 = *(undefined8 *)((long)pqVar17 + 0x14);
      uVar33 = *(undefined8 *)((long)pqVar17 + 0xc);
      uVar37 = *(undefined8 *)((long)pqVar17 + 0x24);
      uVar35 = *(undefined8 *)((long)pqVar17 + 0x1c);
      uVar40 = *(undefined8 *)((long)pqVar17 + 0x34);
      uVar39 = *(undefined8 *)((long)pqVar17 + 0x2c);
      *(undefined4 *)((long)pqVar9 + 0x3c) = *(undefined4 *)((long)pqVar17 + 0x3c);
      *(undefined8 *)((long)pqVar9 + 0x34) = uVar40;
      *(undefined8 *)((long)pqVar9 + 0x2c) = uVar39;
      *(undefined8 *)((long)pqVar9 + 0x24) = uVar37;
      *(undefined8 *)((long)pqVar9 + 0x1c) = uVar35;
      *(undefined8 *)((long)pqVar9 + 0x14) = uVar34;
      *(undefined8 *)((long)pqVar9 + 0xc) = uVar33;
      bVar5 = *(byte *)((long)pqVar17 + 0xf);
      if ((uint)*(byte *)((long)pqVar17 + 0xe) != (uint)bVar5) {
        pqVar13 = pqVar17 + (ulong)*(byte *)((long)pqVar17 + 0xe) + 2;
        do {
          piVar2 = (int *)(*pqVar13 + 8);
          do {
            cVar18 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          pqVar13 = pqVar13 + 1;
        } while (pqVar13 != pqVar17 + (ulong)(uint)bVar5 + 2);
        uVar14 = (ulong)*(byte *)((long)pcVar11 + 0xe);
        uVar15 = (ulong)*(byte *)((long)pcVar11 + 0xf);
      }
      iVar12 = 1;
      lVar16 = uVar15 - uVar14;
      bVar5 = *(byte *)((long)pqVar9 + 0xf);
      bVar6 = *(byte *)((long)pqVar9 + 0xe);
      pqVar17 = pqVar9;
    }
    uVar28 = (ulong)bVar5;
    uVar20 = (ulong)bVar6;
    if (uVar28 != 6) {
      uVar20 = (6 - uVar28) + uVar20;
      *(char *)((long)pqVar17 + 0xf) = '\x06';
      if (uVar20 < 6) {
        uVar25 = 5;
        pqVar9 = pqVar17;
        do {
          pqVar9[7] = pqVar9[uVar28 + 1];
          uVar25 = uVar25 - 1;
          pqVar9 = pqVar9 + -1;
        } while (uVar20 <= uVar25);
      }
    }
    lVar23 = (uVar20 & 0xff) - lVar16;
    *(char *)((long)pqVar17 + 0xe) = (char)lVar23;
    if ((int)uVar15 != (int)uVar14) {
      pqVar9 = (qword *)((long)pcVar11 + (uVar14 + 2) * 8);
      uVar28 = (uVar15 * 8 + uVar14 * -8) - 8;
      pqVar13 = pqVar9;
      if ((0x47 < uVar28) &&
         ("" < (char *)((long)pqVar17 + ((uVar20 & 0xff) * 8 - (long)((long)pcVar11 + uVar15 * 8))))
         ) {
        uVar15 = (uVar28 >> 3) + 1;
        uVar28 = uVar15 & 0x3ffffffffffffffc;
        uVar20 = uVar28;
        pqVar13 = pqVar17 + lVar23;
        pqVar21 = (qword *)((long)pcVar11 + uVar14 * 8);
        do {
          qVar32 = pqVar21[2];
          qVar38 = pqVar21[5];
          qVar36 = pqVar21[4];
          pqVar13[3] = pqVar21[3];
          pqVar13[2] = qVar32;
          pqVar13[5] = qVar38;
          pqVar13[4] = qVar36;
          uVar20 = uVar20 - 4;
          pqVar13 = pqVar13 + 4;
          pqVar21 = pqVar21 + 4;
        } while (uVar20 != 0);
        pqVar13 = pqVar9 + uVar28;
        lVar23 = lVar23 + uVar28;
        if (uVar15 == uVar28) goto LAB_0055d900;
      }
      pqVar21 = pqVar17 + lVar23 + 2;
      do {
        pqVar26 = pqVar13 + 1;
        *pqVar21 = *pqVar13;
        pqVar21 = pqVar21 + 1;
        pqVar13 = pqVar26;
      } while (pqVar26 != pqVar9 + lVar16);
    }
LAB_0055d900:
    pqVar9 = (qword *)((long)pcVar11 + 8);
    *pqVar17 = *pqVar17 + *(qword *)pcVar11;
    if ((*pqVar9 & 0xfffffffd) == 4) {
      __ZdlPv(pcVar11);
    }
    else {
      bVar5 = *(byte *)((long)pcVar11 + 0xf);
      if ((uint)*(byte *)((long)pcVar11 + 0xe) != (uint)bVar5) {
        pqVar13 = (qword *)((long)pcVar11 + ((ulong)*(byte *)((long)pcVar11 + 0xe) + 2) * 8);
        do {
          piVar2 = (int *)(*pqVar13 + 8);
          do {
            cVar18 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          pqVar13 = pqVar13 + 1;
        } while (pqVar13 != (qword *)((long)pcVar11 + ((ulong)(uint)bVar5 + 2) * 8));
      }
      do {
        qVar32 = *pqVar9;
        cVar18 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pqVar9,0x10);
        if (bVar8) {
          *(uint *)pqVar9 = (uint)qVar32 - 4;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (((uint)qVar32 & 0xfffffff9) == 0) {
        func_0x0055b598(pcVar11);
      }
    }
    pcVar11 = (char *)pqVar17;
    iVar31 = iVar12;
    if (bVar3 == bVar4) {
LAB_0055d99c:
      if (iVar12 == 0) {
        return (qword *)pcVar11;
      }
      if (iVar12 == 1) {
        pqVar17 = param_2 + 1;
        do {
          qVar29 = *pqVar17;
          cVar18 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pqVar17,0x10);
          if (bVar8) {
            *(uint *)pqVar17 = (uint)qVar29 - 4;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if (((uint)qVar29 & 0xfffffff9) != 0) {
          return (qword *)pcVar11;
        }
        func_0x0055b598(param_2);
        return (qword *)pcVar11;
      }
      pqVar17 = &segment_command_00000020.vmsize;
      __Znwm();
      *(undefined4 *)(pqVar17 + 1) = 4;
      *pqVar17 = *param_2 + *(qword *)pcVar11;
      bVar3 = *(char *)((long)pcVar11 + 0xd) + 1;
      *(undefined1 *)((long)pqVar17 + 0xc) = 3;
      *(byte *)((long)pqVar17 + 0xd) = bVar3;
      *(undefined2 *)((long)pqVar17 + 0xe) = 0x200;
      pqVar17[2] = (qword)pcVar11;
      pqVar17[3] = (qword)param_2;
      if (bVar3 < 0xc) {
        return pqVar17;
      }
      FUN_0055e064();
      if (*(byte *)((long)pqVar17 + 0xd) < 0xc) {
        return pqVar17;
      }
      FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x55daa4);
      (*pcVar7)();
    }
LAB_0055d744:
    pqVar17 = aqStack_d8;
    FUN_0055b6d0(pqVar17,param_2,uVar30,qVar29,pcVar11,iVar31);
    return pqVar17;
  }
  qVar29 = *param_2;
  bVar3 = *(byte *)((long)pcVar11 + 0xd);
  bVar4 = *(byte *)((long)param_2 + 0xd);
  uVar19 = (uint)bVar3 - (uint)bVar4;
  uVar30 = (ulong)uVar19;
  pqVar17 = (qword *)pcVar11;
  if ((int)uVar19 < 1) {
    uVar15 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar15 = uVar14;
      if ((pqVar17[1] & 0xfffffffd) != 4) break;
      aqStack_d8[uVar14 + 1] = (qword)pqVar17;
      uVar14 = uVar14 + 1;
      pqVar17 = (qword *)pqVar17[(ulong)*(byte *)((long)pqVar17 + 0xf) + 1];
      uVar15 = uVar30;
    } while (uVar30 != uVar14);
  }
  iVar12 = (int)uVar15;
  aqStack_d8[0]._0_4_ = iVar12;
  if ((pqVar17[1] & 0xfffffffd) == 4) {
    aqStack_d8[0]._0_4_ = iVar12 + 1;
  }
  if (iVar12 < (int)uVar19) {
    pqVar9 = aqStack_d8 + (uVar15 & 0xffffffff);
    do {
      pqVar9 = pqVar9 + 1;
      *pqVar9 = (qword)pqVar17;
      pqVar17 = (qword *)pqVar17[(ulong)*(byte *)((long)pqVar17 + 0xf) + 1];
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar19);
  }
  uVar14 = (ulong)*(byte *)((long)param_2 + 0xf);
  uVar15 = (ulong)*(byte *)((long)param_2 + 0xe);
  if (6 < (*(byte *)((long)pqVar17 + 0xf) + uVar14) - (*(byte *)((long)pqVar17 + 0xe) + uVar15)) {
    iVar12 = 2;
    iVar31 = 2;
    if ((uint)bVar3 == (uint)bVar4) goto LAB_0055d44c;
    goto LAB_0055d280;
  }
  if ((int)uVar19 < (int)aqStack_d8[0]) {
    iVar31 = 0;
    pqVar9 = pqVar17;
  }
  else {
    qVar32 = *pqVar17;
    pqVar9 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar9 + 1) = 4;
    *pqVar9 = qVar32;
    uVar34 = *(undefined8 *)((long)pqVar17 + 0x14);
    uVar33 = *(undefined8 *)((long)pqVar17 + 0xc);
    uVar37 = *(undefined8 *)((long)pqVar17 + 0x24);
    uVar35 = *(undefined8 *)((long)pqVar17 + 0x1c);
    uVar40 = *(undefined8 *)((long)pqVar17 + 0x34);
    uVar39 = *(undefined8 *)((long)pqVar17 + 0x2c);
    *(undefined4 *)((long)pqVar9 + 0x3c) = *(undefined4 *)((long)pqVar17 + 0x3c);
    *(undefined8 *)((long)pqVar9 + 0x34) = uVar40;
    *(undefined8 *)((long)pqVar9 + 0x2c) = uVar39;
    *(undefined8 *)((long)pqVar9 + 0x24) = uVar37;
    *(undefined8 *)((long)pqVar9 + 0x1c) = uVar35;
    *(undefined8 *)((long)pqVar9 + 0x14) = uVar34;
    *(undefined8 *)((long)pqVar9 + 0xc) = uVar33;
    bVar5 = *(byte *)((long)pqVar17 + 0xf);
    if ((uint)*(byte *)((long)pqVar17 + 0xe) != (uint)bVar5) {
      pqVar13 = pqVar17 + (ulong)*(byte *)((long)pqVar17 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar13 + 8);
        do {
          cVar18 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + 4;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        pqVar13 = pqVar13 + 1;
      } while (pqVar13 != pqVar17 + (ulong)(uint)bVar5 + 2);
      uVar15 = (ulong)*(byte *)((long)param_2 + 0xe);
      uVar14 = (ulong)*(byte *)((long)param_2 + 0xf);
    }
    iVar31 = 1;
  }
  bVar5 = *(byte *)((long)pqVar9 + 0xe);
  uVar28 = (ulong)bVar5;
  bVar6 = *(byte *)((long)pqVar9 + 0xf);
  uVar25 = (ulong)bVar6;
  uVar20 = uVar25;
  if (bVar5 != 0) {
    uVar20 = uVar25 - uVar28;
    *(char *)((long)pqVar9 + 0xe) = '\0';
    *(char *)((long)pqVar9 + 0xf) = (char)uVar20;
    if (bVar6 != bVar5) {
      if (uVar20 < 2) {
        uVar24 = 0;
      }
      else {
        uVar24 = uVar20 & 6;
        uVar27 = uVar24;
        pqVar17 = pqVar9;
        do {
          pqVar13 = pqVar17 + 2;
          qVar32 = pqVar13[uVar28];
          pqVar17[3] = (pqVar13 + uVar28)[1];
          *pqVar13 = qVar32;
          uVar27 = uVar27 - 2;
          pqVar17 = pqVar13;
        } while (uVar27 != 0);
        if (uVar20 == uVar24) goto LAB_0055d338;
      }
      lVar16 = (uVar24 + uVar28) - uVar25;
      pqVar17 = pqVar9 + uVar24 + 2;
      pqVar13 = pqVar9 + uVar24 + uVar28 + 2;
      do {
        *pqVar17 = *pqVar13;
        bVar8 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        pqVar17 = pqVar17 + 1;
        pqVar13 = pqVar13 + 1;
      } while (bVar8);
    }
  }
LAB_0055d338:
  cVar18 = (char)uVar20;
  if ((int)uVar14 != (int)uVar15) {
    pqVar17 = param_2 + uVar15 + 2;
    uVar20 = uVar20 & 0xffffffff;
    uVar28 = (uVar14 * 8 + uVar15 * -8) - 8;
    pqVar13 = pqVar17;
    if ((uVar28 < 0x48) ||
       (pqVar21 = pqVar9 + uVar20, (ulong)((long)pqVar21 - (long)(param_2 + uVar15)) < 0x20)) {
LAB_0055d380:
      uVar28 = uVar20;
      do {
        pqVar21 = pqVar13 + 1;
        uVar20 = uVar28 + 1;
        pqVar9[uVar28 + 2] = *pqVar13;
        pqVar13 = pqVar21;
        uVar28 = uVar20;
      } while (pqVar21 != pqVar17 + (uVar14 - uVar15));
    }
    else {
      uVar28 = (uVar28 >> 3) + 1;
      uVar27 = uVar28 & 0x3ffffffffffffffc;
      uVar20 = uVar27 + uVar20;
      pqVar13 = pqVar17 + uVar27;
      uVar25 = uVar27;
      pqVar26 = param_2 + uVar15;
      do {
        qVar32 = pqVar26[2];
        qVar38 = pqVar26[5];
        qVar36 = pqVar26[4];
        pqVar21[3] = pqVar26[3];
        pqVar21[2] = qVar32;
        pqVar21[5] = qVar38;
        pqVar21[4] = qVar36;
        uVar25 = uVar25 - 4;
        pqVar21 = pqVar21 + 4;
        pqVar26 = pqVar26 + 4;
      } while (uVar25 != 0);
      if (uVar28 != uVar27) goto LAB_0055d380;
    }
    cVar18 = (char)uVar20;
  }
  *(char *)((long)pqVar9 + 0xf) = cVar18;
  pqVar17 = param_2 + 1;
  *pqVar9 = *pqVar9 + *param_2;
  if ((*pqVar17 & 0xfffffffd) == 4) {
    __ZdlPv(param_2);
  }
  else {
    bVar5 = *(byte *)((long)param_2 + 0xf);
    if ((uint)*(byte *)((long)param_2 + 0xe) != (uint)bVar5) {
      pqVar13 = param_2 + (ulong)*(byte *)((long)param_2 + 0xe) + 2;
      do {
        piVar2 = (int *)(*pqVar13 + 8);
        do {
          cVar18 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = *piVar2 + 4;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        pqVar13 = pqVar13 + 1;
      } while (pqVar13 != param_2 + (ulong)(uint)bVar5 + 2);
    }
    do {
      qVar32 = *pqVar17;
      cVar18 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pqVar17,0x10);
      if (bVar8) {
        *(uint *)pqVar17 = (uint)qVar32 - 4;
        cVar18 = ExclusiveMonitorsStatus();
      }
    } while (cVar18 != '\0');
    if (((uint)qVar32 & 0xfffffff9) == 0) {
      func_0x0055b598(param_2);
    }
  }
  param_2 = pqVar9;
  iVar12 = iVar31;
  if (bVar3 == bVar4) {
LAB_0055d44c:
    if (iVar31 == 0) {
      return param_2;
    }
    if (iVar31 == 1) {
      pqVar17 = (qword *)((long)pcVar11 + 8);
      do {
        qVar29 = *pqVar17;
        cVar18 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pqVar17,0x10);
        if (bVar8) {
          *(uint *)pqVar17 = (uint)qVar29 - 4;
          cVar18 = ExclusiveMonitorsStatus();
        }
      } while (cVar18 != '\0');
      if (((uint)qVar29 & 0xfffffff9) != 0) {
        return param_2;
      }
      func_0x0055b598(pcVar11);
      return param_2;
    }
    pqVar17 = &segment_command_00000020.vmsize;
    __Znwm();
    *(undefined4 *)(pqVar17 + 1) = 4;
    *pqVar17 = *param_2 + *(qword *)pcVar11;
    bVar3 = *(char *)((long)pcVar11 + 0xd) + 1;
    *(undefined1 *)((long)pqVar17 + 0xc) = 3;
    *(byte *)((long)pqVar17 + 0xd) = bVar3;
    *(undefined2 *)((long)pqVar17 + 0xe) = 0x200;
    pqVar17[2] = (qword)pcVar11;
    pqVar17[3] = (qword)param_2;
    if (bVar3 < 0xc) {
      return pqVar17;
    }
    FUN_0055e064();
    if (*(byte *)((long)pqVar17 + 0xd) < 0xc) {
      return pqVar17;
    }
    FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x55d5c0);
    (*pcVar7)();
  }
LAB_0055d280:
  pqVar17 = aqStack_d8;
  FUN_0055bdcc(pqVar17,pcVar11,uVar30,qVar29,param_2,iVar12);
  return pqVar17;
}



/* Entry: 0055dbf0; end: 0055e063;  */

/* WARNING: Possible PIC construction at 0x0055b6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0055b6c8) */

void FUN_0055dbf0(undefined8 *param_1,long param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  qword *pqVar9;
  char cVar10;
  code *pcVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  byte bVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  long unaff_x19;
  undefined8 *puVar25;
  qword *pqVar26;
  undefined8 unaff_x20;
  long lVar27;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  char *pcVar28;
  undefined8 unaff_x24;
  long *plVar29;
  undefined8 unaff_x25;
  qword qVar30;
  undefined8 unaff_x26;
  qword qVar31;
  long *plVar32;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(param_2 + 8) & 0xfffffffd) == 4;
  }
  lVar8 = param_2 + 0x10;
  bVar18 = *(byte *)(param_2 + 0xe);
  uVar13 = (ulong)bVar18;
  bVar5 = *(byte *)(param_2 + 0xf);
  if (*(char *)(param_2 + 0xd) == '\0') {
    if (bVar18 != bVar5) {
      puVar25 = (undefined8 *)(lVar8 + uVar13 * 8);
      do {
        pqVar26 = (qword *)*puVar25;
        if (bVar7 == false) {
          pqVar9 = pqVar26 + 1;
          do {
            cVar10 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pqVar9,0x10);
            if (bVar6) {
              *(int *)pqVar9 = (int)*pqVar9 + 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        qVar30 = *pqVar26;
        plVar32 = (long *)*param_1;
        uVar14 = (ulong)*(byte *)((long)plVar32 + 0xf);
        bVar18 = *(byte *)((long)plVar32 + 0xe);
        uVar16 = (ulong)bVar18;
        uVar13 = uVar14 - uVar16;
        if (uVar13 < 6) {
          uVar21 = uVar14;
          if ((bVar18 != 0) &&
             (*(undefined1 *)((long)plVar32 + 0xe) = 0, uVar21 = uVar13,
             *(byte *)((long)plVar32 + 0xf) != bVar18)) {
            plVar29 = plVar32 + 2;
            if (uVar13 < 2) {
              uVar20 = 0;
            }
            else {
              uVar20 = uVar13 & 6;
              plVar17 = plVar29;
              uVar23 = uVar20;
              do {
                lVar27 = plVar17[uVar16];
                plVar17[1] = (plVar17 + uVar16)[1];
                *plVar17 = lVar27;
                uVar23 = uVar23 - 2;
                plVar17 = plVar17 + 2;
              } while (uVar23 != 0);
              if (uVar13 == uVar20) goto LAB_0055dd88;
            }
            lVar27 = (uVar20 + uVar16) - uVar14;
            plVar17 = plVar29 + uVar20;
            plVar29 = plVar29 + uVar20 + uVar16;
            do {
              *plVar17 = *plVar29;
              bVar6 = lVar27 != -1;
              lVar27 = lVar27 + 1;
              plVar17 = plVar17 + 1;
              plVar29 = plVar29 + 1;
            } while (bVar6);
          }
LAB_0055dd88:
          *(char *)((long)plVar32 + 0xf) = (char)uVar21 + '\x01';
          plVar32[(uVar21 & 0xff) + 2] = (long)pqVar26;
          *plVar32 = *plVar32 + qVar30;
          lVar27 = 1;
          plVar32 = (long *)param_1[1];
        }
        else {
          pqVar9 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(pqVar9 + 1) = 4;
          if (*(char *)((long)pqVar26 + 0xc) == '\x03') {
            cVar10 = *(char *)((long)pqVar26 + 0xd) + '\x01';
          }
          else {
            cVar10 = '\0';
          }
          qVar31 = *pqVar26;
          *pqVar9 = qVar31;
          *(undefined1 *)((long)pqVar9 + 0xc) = 3;
          pcVar28 = (char *)((long)pqVar9 + 0xd);
          *pcVar28 = cVar10;
          *(undefined2 *)((long)pqVar9 + 0xe) = 0x100;
          pqVar9[2] = (qword)pqVar26;
          *param_1 = pqVar9;
          plVar29 = (long *)param_1[1];
          if (plVar29 == (long *)0x0) {
            lVar27 = 0;
            lVar22 = 1;
LAB_0055def4:
            pqVar26 = &segment_command_00000020.vmsize;
            __Znwm();
            *(undefined4 *)(pqVar26 + 1) = 4;
            *pqVar26 = *plVar32 + qVar31;
            cVar10 = *(char *)((long)plVar32 + 0xd);
            *(undefined1 *)((long)pqVar26 + 0xc) = 3;
            *(char *)((long)pqVar26 + 0xd) = cVar10 + '\x01';
            *(undefined2 *)((long)pqVar26 + 0xe) = 0x200;
            pqVar26[2] = (qword)plVar32;
            pqVar26[3] = (qword)pqVar9;
            param_1[lVar22] = pqVar26;
            lVar27 = lVar27 + 2;
            plVar32 = (long *)param_1[lVar27];
          }
          else {
            pbVar12 = (byte *)((long)plVar29 + 0xf);
            uVar16 = (ulong)*pbVar12;
            pbVar19 = (byte *)((long)plVar29 + 0xe);
            uVar14 = (ulong)*pbVar19;
            uVar13 = uVar16 - uVar14;
            if (uVar13 < 6) {
              lVar27 = 0;
            }
            else {
              lVar22 = 1;
              plVar32 = plVar29;
              pqVar26 = pqVar9;
              puVar15 = param_1 + 2;
              do {
                lVar27 = lVar22;
                pqVar9 = &segment_command_00000020.vmsize;
                __Znwm();
                *(undefined4 *)(pqVar9 + 1) = 4;
                if (*(char *)((long)pqVar26 + 0xc) == '\x03') {
                  cVar10 = *pcVar28 + '\x01';
                }
                else {
                  cVar10 = '\0';
                }
                qVar31 = *pqVar26;
                *pqVar9 = qVar31;
                *(undefined1 *)((long)pqVar9 + 0xc) = 3;
                pcVar28 = (char *)((long)pqVar9 + 0xd);
                *pcVar28 = cVar10;
                *(undefined2 *)((long)pqVar9 + 0xe) = 0x100;
                pqVar9[2] = (qword)pqVar26;
                puVar15[-1] = pqVar9;
                plVar29 = (long *)*puVar15;
                if (plVar29 == (long *)0x0) {
                  lVar22 = lVar27 + 1;
                  goto LAB_0055def4;
                }
                uVar16 = (ulong)*(byte *)((long)plVar29 + 0xf);
                uVar14 = (ulong)*(byte *)((long)plVar29 + 0xe);
                uVar13 = uVar16 - uVar14;
                lVar22 = lVar27 + 1;
                plVar32 = plVar29;
                pqVar26 = pqVar9;
                puVar15 = puVar15 + 1;
              } while (5 < uVar13);
              pbVar12 = (byte *)((long)plVar29 + 0xf);
              pbVar19 = (byte *)((long)plVar29 + 0xe);
            }
            bVar18 = (byte)uVar16;
            if ((int)uVar14 != 0) {
              *pbVar19 = 0;
              if ((int)uVar16 != (int)uVar14) {
                plVar32 = plVar29 + 2;
                if (uVar13 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = uVar13 & 6;
                  plVar17 = plVar32;
                  uVar16 = uVar21;
                  do {
                    lVar22 = plVar17[uVar14];
                    plVar17[1] = (plVar17 + uVar14)[1];
                    *plVar17 = lVar22;
                    uVar16 = uVar16 - 2;
                    plVar17 = plVar17 + 2;
                  } while (uVar16 != 0);
                  if (uVar13 == uVar21) goto LAB_0055e03c;
                }
                lVar22 = uVar13 - uVar21;
                plVar17 = plVar32 + uVar14 + uVar21;
                plVar32 = plVar32 + uVar21;
                do {
                  *plVar32 = *plVar17;
                  lVar22 = lVar22 + -1;
                  plVar17 = plVar17 + 1;
                  plVar32 = plVar32 + 1;
                } while (lVar22 != 0);
              }
LAB_0055e03c:
              bVar18 = (byte)uVar13;
            }
            *pbVar12 = bVar18 + 1;
            plVar29[(ulong)bVar18 + 2] = (long)pqVar9;
            *plVar29 = *plVar29 + qVar30;
            lVar27 = lVar27 + 2;
            plVar32 = (long *)param_1[lVar27];
          }
        }
        if (plVar32 != (long *)0x0) {
          puVar15 = param_1 + lVar27 + 1;
          do {
            *plVar32 = *plVar32 + qVar30;
            plVar32 = (long *)*puVar15;
            puVar15 = puVar15 + 1;
          } while (plVar32 != (long *)0x0);
        }
        puVar25 = puVar25 + 1;
      } while (puVar25 != (undefined8 *)(lVar8 + (ulong)bVar5 * 8));
    }
  }
  else if (bVar18 != bVar5) {
    lVar27 = (ulong)bVar5 * 8 + uVar13 * -8;
    puVar25 = (undefined8 *)(lVar8 + uVar13 * 8);
    do {
      FUN_0055dbf0(param_1,*puVar25,bVar7);
      lVar27 = lVar27 + -8;
      puVar25 = puVar25 + 1;
    } while (lVar27 != 0);
  }
  if (param_3 == 0) {
    return;
  }
  if (bVar7 == false) {
    puVar2 = (uint *)(param_2 + 8);
    do {
      uVar4 = *puVar2;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar4 - 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((uVar4 & 0xfffffff9) != 0) {
      return;
    }
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      unaff_x19 = param_2;
      while (bVar18 = *(byte *)(unaff_x19 + 0xc), bVar18 == 1) {
        unaff_x19 = *(long *)(unaff_x19 + 0x18);
        __ZdlPv();
        puVar2 = (uint *)(unaff_x19 + 8);
        if (*puVar2 != 4) {
          do {
            uVar4 = *puVar2;
            cVar10 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar4 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar4 & 0xfffffff9) != 0) {
            return;
          }
        }
      }
      param_2 = unaff_x19;
      if (3 < bVar18) {
        if (bVar18 == 4) {
          FUN_0055e720(unaff_x19,*(undefined4 *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x14)
                      );
        }
        else if (bVar18 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0055b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x19 + 0x18))();
          return;
        }
        goto code_r0x0077a058;
      }
      if (bVar18 != 2) {
        if (bVar18 != 3) goto code_r0x0077a058;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar8 = unaff_x19 + 0x10;
        bVar18 = *(byte *)(unaff_x19 + 0xe);
        uVar13 = (ulong)bVar18;
        bVar5 = *(byte *)(unaff_x19 + 0xf);
        plVar32 = (long *)(lVar8 + (ulong)bVar5 * 8);
        if (*(char *)(unaff_x19 + 0xd) == '\x01') {
          if (bVar18 == bVar5) goto code_r0x0077a058;
          plVar29 = (long *)(lVar8 + uVar13 * 8);
          goto LAB_0055ce34;
        }
        if (*(char *)(unaff_x19 + 0xd) != '\0') {
          if (bVar18 == bVar5) goto code_r0x0077a058;
          plVar29 = (long *)(lVar8 + uVar13 * 8);
          goto LAB_0055cf54;
        }
        if (bVar18 == bVar5) goto code_r0x0077a058;
        plVar29 = (long *)(lVar8 + uVar13 * 8);
        goto LAB_0055d000;
      }
      param_2 = *(long *)(unaff_x19 + 0x10);
      if (param_2 == 0) break;
      puVar2 = (uint *)(param_2 + 8);
      do {
        uVar4 = *puVar2;
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar4 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar4 & 0xfffffff9) != 0) break;
      unaff_x30 = 0x55b6c8;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    }
    piVar24 = *(int **)(unaff_x19 + 0x18);
    do {
      iVar3 = *piVar24;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar7) {
        *piVar24 = iVar3 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    param_2 = unaff_x19;
    if ((piVar24 != (int *)0x0) && (iVar3 == 1)) {
      FUN_0055a640(piVar24 + 6);
      __ZdlPv(piVar24);
    }
  }
  else if (param_2 == 0) {
    return;
  }
  goto code_r0x0077a058;
LAB_0055ce34:
  do {
    lVar8 = *plVar29;
    puVar2 = (uint *)(lVar8 + 8);
    if (*puVar2 == 4) {
LAB_0055ce60:
      bVar18 = *(byte *)(lVar8 + 0xf);
      if ((uint)*(byte *)(lVar8 + 0xe) != (uint)bVar18) {
        plVar17 = (long *)(lVar8 + 0x10 + (ulong)*(byte *)(lVar8 + 0xe) * 8);
        do {
          lVar27 = *plVar17;
          puVar2 = (uint *)(lVar27 + 8);
          if (*puVar2 == 4) {
LAB_0055cecc:
            if (*(byte *)(lVar27 + 0xc) < 6) {
              pcVar11 = *(code **)(lVar27 + 0x18);
              if (*(byte *)(lVar27 + 0xc) == 5) {
                (*pcVar11)();
                goto LAB_0055ce94;
              }
              pcVar1 = pcVar11 + 8;
              if (*(uint *)pcVar1 != 4) {
                do {
                  uVar4 = *(uint *)pcVar1;
                  cVar10 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
                  if (bVar7) {
                    *(uint *)pcVar1 = uVar4 - 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055ce90;
              }
              if ((byte)pcVar11[0xc] < 6) {
                (**(code **)(pcVar11 + 0x18))(pcVar11);
              }
              else {
                __ZdlPv(pcVar11);
              }
            }
LAB_0055ce90:
            __ZdlPv(lVar27);
          }
          else {
            do {
              uVar4 = *puVar2;
              cVar10 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar4 - 4;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cecc;
          }
LAB_0055ce94:
          plVar17 = plVar17 + 1;
        } while (plVar17 != (long *)(lVar8 + 0x10 + (ulong)(uint)bVar18 * 8));
        if (lVar8 == 0) goto LAB_0055ce28;
      }
      __ZdlPv(lVar8);
    }
    else {
      do {
        uVar4 = *puVar2;
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar4 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055ce60;
    }
LAB_0055ce28:
    plVar29 = plVar29 + 1;
  } while (plVar29 != plVar32);
  goto LAB_0055d090;
LAB_0055d000:
  do {
    lVar8 = *plVar29;
    puVar2 = (uint *)(lVar8 + 8);
    if (*puVar2 == 4) {
LAB_0055d02c:
      if (*(byte *)(lVar8 + 0xc) < 6) {
        pcVar11 = *(code **)(lVar8 + 0x18);
        if (*(byte *)(lVar8 + 0xc) == 5) {
          (*pcVar11)();
          goto LAB_0055cff4;
        }
        pcVar1 = pcVar11 + 8;
        if (*(uint *)pcVar1 != 4) {
          do {
            uVar4 = *(uint *)pcVar1;
            cVar10 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar7) {
              *(uint *)pcVar1 = uVar4 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar4 & 0xfffffff9) != 0) goto LAB_0055cff0;
        }
        if ((byte)pcVar11[0xc] < 6) {
          (**(code **)(pcVar11 + 0x18))(pcVar11);
        }
        else {
          __ZdlPv(pcVar11);
        }
      }
LAB_0055cff0:
      __ZdlPv(lVar8);
    }
    else {
      do {
        uVar4 = *puVar2;
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar4 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055d02c;
    }
LAB_0055cff4:
    plVar29 = plVar29 + 1;
  } while (plVar29 != plVar32);
  goto LAB_0055d090;
LAB_0055cf54:
  do {
    lVar8 = *plVar29;
    puVar2 = (uint *)(lVar8 + 8);
    if (*puVar2 == 4) {
LAB_0055cf80:
      bVar18 = *(byte *)(lVar8 + 0xf);
      if ((uint)*(byte *)(lVar8 + 0xe) != (uint)bVar18) {
        plVar17 = (long *)(lVar8 + 0x10 + (ulong)*(byte *)(lVar8 + 0xe) * 8);
        do {
          puVar2 = (uint *)(*plVar17 + 8);
          if (*puVar2 == 4) {
LAB_0055cfa0:
            FUN_0055cdc0();
          }
          else {
            do {
              uVar4 = *puVar2;
              cVar10 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar4 - 4;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cfa0;
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != (long *)(lVar8 + 0x10 + (ulong)(uint)bVar18 * 8));
        if (lVar8 == 0) goto LAB_0055cf48;
      }
      __ZdlPv(lVar8);
    }
    else {
      do {
        uVar4 = *puVar2;
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar4 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar4 & 0xfffffff9) == 0) goto LAB_0055cf80;
    }
LAB_0055cf48:
    plVar29 = plVar29 + 1;
  } while (plVar29 != plVar32);
LAB_0055d090:
  if (unaff_x19 == 0) {
    return;
  }
code_r0x0077a058:
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0055e064; end: 0055e183;  */

void FUN_0055e064(segment_command *param_1,undefined8 param_2,undefined8 param_3,qword param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  qword *pqVar6;
  qword *pqVar7;
  qword qVar8;
  byte bVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  segment_command *psVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 auStack_130 [13];
  long lStack_c8;
  qword *pqStack_90;
  qword *pqStack_88;
  qword *pqStack_80;
  qword *pqStack_78;
  qword *pqStack_70;
  qword *pqStack_68;
  qword *pqStack_60;
  qword *pqStack_58;
  qword *pqStack_50;
  qword *pqStack_48;
  qword *pqStack_40;
  qword *pqStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar7 = &segment_command_00000020.vmsize;
  __Znwm();
  *(undefined4 *)(pqVar7 + 1) = 4;
  *pqVar7 = 0;
  *(undefined4 *)((long)pqVar7 + 0xc) = 3;
  lStack_30 = 0;
  pqStack_38 = (qword *)0x0;
  pqStack_40 = (qword *)0x0;
  pqStack_48 = (qword *)0x0;
  pqStack_50 = (qword *)0x0;
  pqStack_58 = (qword *)0x0;
  pqStack_60 = (qword *)0x0;
  pqStack_68 = (qword *)0x0;
  pqStack_70 = (qword *)0x0;
  pqStack_78 = (qword *)0x0;
  pqStack_80 = (qword *)0x0;
  pqStack_88 = (qword *)0x0;
  lVar5 = 1;
  pqStack_90 = pqVar7;
  FUN_0055dbf0(&pqStack_90);
  if ((((((pqStack_90 != (qword *)0x0) && (pqVar7 = pqStack_90, pqStack_88 != (qword *)0x0)) &&
        (pqVar7 = pqStack_88, pqStack_80 != (qword *)0x0)) &&
       (((pqVar7 = pqStack_80, pqStack_78 != (qword *)0x0 &&
         (pqVar7 = pqStack_78, pqStack_70 != (qword *)0x0)) &&
        ((pqVar7 = pqStack_70, pqStack_68 != (qword *)0x0 &&
         ((pqVar7 = pqStack_68, pqStack_60 != (qword *)0x0 &&
          (pqVar7 = pqStack_60, pqStack_58 != (qword *)0x0)))))))) &&
      (pqVar7 = pqStack_58, pqStack_50 != (qword *)0x0)) &&
     ((((pqVar7 = pqStack_50, pqStack_48 != (qword *)0x0 &&
        (pqVar7 = pqStack_48, pqStack_40 != (qword *)0x0)) &&
       (pqVar7 = pqStack_40, pqStack_38 != (qword *)0x0)) && (pqVar7 = pqStack_38, lStack_30 != 0)))
     ) {
    pqVar7 = (qword *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar6 = pqVar7;
  if (*(char *)((long)pqVar7 + 0xd) == '\0') {
    uVar13 = 0;
    uVar12 = (uint)pqVar7[1];
  }
  else {
    uVar13 = 0;
    do {
      if ((pqVar6[1] & 0xfffffffd) != 4) goto LAB_0055e2a8;
      auStack_130[uVar13 + 1] = pqVar6;
      uVar13 = uVar13 + 1;
      pqVar6 = (qword *)pqVar6[(ulong)*(byte *)((long)pqVar6 + 0xf) + 1];
    } while (*(char *)((long)pqVar6 + 0xd) != '\0');
    uVar12 = (uint)pqVar6[1];
  }
  if ((((uVar12 & 0xfffffffd) == 4) &&
      (plVar14 = (long *)pqVar6[(ulong)*(byte *)((long)pqVar6 + 0xf) + 1],
      5 < *(byte *)((long)plVar14 + 0xc))) && ((*(uint *)(plVar14 + 1) & 0xfffffffd) == 4)) {
    lVar17 = *plVar14;
    bVar9 = *(byte *)((long)plVar14 + 0xc);
    uVar12 = 6;
    if (0xba < bVar9) {
      uVar12 = 0xc;
    }
    iVar15 = -0xe8d;
    if (0xba < bVar9) {
      iVar15 = -0xb800d;
    }
    uVar2 = 3;
    if (0x42 < bVar9) {
      uVar2 = uVar12;
    }
    iVar3 = -0x1d;
    if (0x42 < bVar9) {
      iVar3 = iVar15;
    }
    if (param_1 <= (segment_command *)((int)(((uint)bVar9 << (ulong)uVar2) + iVar3) - lVar17)) {
      bVar9 = *(byte *)((long)pqVar6 + 0xf);
      pqVar7 = pqVar6;
      if ((ulong)bVar9 - (ulong)*(byte *)((long)pqVar6 + 0xe) == 1) {
        puVar18 = auStack_130 + (uVar13 & 0xffffffff);
        do {
          __ZdlPv(pqVar7);
          iVar15 = (int)uVar13;
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 < 1) {
            pqVar7 = (qword *)0x0;
            goto LAB_0055e2a8;
          }
          pqVar7 = (qword *)*puVar18;
          bVar9 = *(byte *)((long)pqVar7 + 0xf);
          puVar18 = puVar18 + -1;
        } while ((ulong)bVar9 - (ulong)*(byte *)((long)pqVar7 + 0xe) == 1);
      }
      *(byte *)((long)pqVar7 + 0xf) = bVar9 - 1;
      *pqVar7 = *pqVar7 - lVar17;
      if (0 < (int)uVar13) {
        uVar11 = (uVar13 & 0xffffffff) + 1;
        puVar18 = auStack_130 + (uVar13 & 0xffffffff) + 1;
        do {
          puVar18 = puVar18 + -1;
          pqVar7 = (qword *)*puVar18;
          *pqVar7 = *pqVar7 - lVar17;
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
      }
      do {
        if ((ulong)*(byte *)((long)pqVar7 + 0xf) - (ulong)*(byte *)((long)pqVar7 + 0xe) != 1) break;
        cVar10 = *(char *)((long)pqVar7 + 0xd);
        pqVar7 = (qword *)pqVar7[(ulong)*(byte *)((long)pqVar7 + 0xf) + 1];
        __ZdlPv();
      } while (cVar10 != '\0');
    }
  }
LAB_0055e2a8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  qVar8._0_4_ = param_1->cmd;
  qVar8._4_4_ = param_1->cmdsize;
  if (param_4 != qVar8) {
    if (param_4 == 0) {
      pcVar1 = param_1->segname;
      do {
        uVar12 = *(uint *)pcVar1;
        cVar10 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(uint *)pcVar1 = uVar12 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar12 & 0xfffffff9) == 0) {
        func_0x0055b598(param_1);
        param_1 = (segment_command *)0x0;
        plVar14 = (long *)*pqVar7;
        lVar5 = *plVar14;
      }
      else {
        param_1 = (segment_command *)0x0;
        plVar14 = (long *)*pqVar7;
        lVar5 = *plVar14;
      }
      goto joined_r0x0055e454;
    }
    psVar16 = param_1;
    if (param_1->segname[4] == '\x01') {
      psVar16 = (segment_command *)param_1->vmaddr;
      lVar5 = *(long *)(param_1->segname + 8) + lVar5;
      pcVar1 = psVar16->segname;
      do {
        cVar10 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(int *)pcVar1 = *(int *)pcVar1 + 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      pcVar1 = param_1->segname;
      do {
        uVar12 = *(uint *)pcVar1;
        cVar10 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(uint *)pcVar1 = uVar12 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar12 & 0xfffffff9) == 0) {
        func_0x0055b598(param_1);
      }
    }
    param_1 = &segment_command_00000020;
    __Znwm();
    param_1->cmd = (int)param_4;
    param_1->cmdsize = (int)(param_4 >> 0x20);
    param_1->segname[0] = '\0';
    param_1->segname[1] = '\0';
    param_1->segname[2] = '\0';
    param_1->segname[3] = '\0';
    param_1->segname[4] = '\0';
    param_1->segname[5] = '\0';
    param_1->segname[6] = '\0';
    param_1->segname[7] = '\0';
    param_1->segname[0] = '\x04';
    param_1->segname[1] = '\0';
    param_1->segname[2] = '\0';
    param_1->segname[3] = '\0';
    param_1->segname[4] = '\x01';
    *(long *)(param_1->segname + 8) = lVar5;
    param_1->vmaddr = (qword)psVar16;
  }
  plVar14 = (long *)*pqVar7;
  lVar5 = *plVar14;
joined_r0x0055e454:
  if (lVar5 != 0) {
    FUN_0055bb34();
    *(long *)*pqVar7 = lVar5;
    return;
  }
  pqVar7 = &segment_command_00000020.vmsize;
  __Znwm();
  *(undefined4 *)(pqVar7 + 1) = 4;
  if (param_1->segname[4] == '\x03') {
    cVar10 = param_1->segname[5] + '\x01';
  }
  else {
    cVar10 = '\0';
  }
  *pqVar7 = *(qword *)param_1;
  *(undefined1 *)((long)pqVar7 + 0xc) = 3;
  *(char *)((long)pqVar7 + 0xd) = cVar10;
  *(undefined2 *)((long)pqVar7 + 0xe) = 0x100;
  pqVar7[2] = (qword)param_1;
  *plVar14 = (long)pqVar7;
  return;
}



/* Entry: 0055e184; end: 0055e71f;  */

void FUN_0055e184(long *param_1,segment_command *param_2,long param_3,qword param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  qword *pqVar5;
  long *plVar6;
  qword qVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  segment_command *psVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 auStack_a0 [13];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = param_1;
  if (*(char *)((long)param_1 + 0xd) == '\0') {
    uVar12 = 0;
    uVar11 = *(uint *)(param_1 + 1);
  }
  else {
    uVar12 = 0;
    do {
      if ((*(uint *)(plVar6 + 1) & 0xfffffffd) != 4) goto LAB_0055e2a8;
      auStack_a0[uVar12 + 1] = plVar6;
      uVar12 = uVar12 + 1;
      plVar6 = (long *)plVar6[(ulong)*(byte *)((long)plVar6 + 0xf) + 1];
    } while (*(char *)((long)plVar6 + 0xd) != '\0');
    uVar11 = *(uint *)(plVar6 + 1);
  }
  if ((((uVar11 & 0xfffffffd) == 4) &&
      (plVar13 = (long *)plVar6[(ulong)*(byte *)((long)plVar6 + 0xf) + 1],
      5 < *(byte *)((long)plVar13 + 0xc))) && ((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4)) {
    lVar16 = *plVar13;
    bVar8 = *(byte *)((long)plVar13 + 0xc);
    uVar11 = 6;
    if (0xba < bVar8) {
      uVar11 = 0xc;
    }
    iVar14 = -0xe8d;
    if (0xba < bVar8) {
      iVar14 = -0xb800d;
    }
    uVar2 = 3;
    if (0x42 < bVar8) {
      uVar2 = uVar11;
    }
    iVar3 = -0x1d;
    if (0x42 < bVar8) {
      iVar3 = iVar14;
    }
    if (param_2 <= (segment_command *)((int)(((uint)bVar8 << (ulong)uVar2) + iVar3) - lVar16)) {
      bVar8 = *(byte *)((long)plVar6 + 0xf);
      param_1 = plVar6;
      if ((ulong)bVar8 - (ulong)*(byte *)((long)plVar6 + 0xe) == 1) {
        puVar17 = auStack_a0 + (uVar12 & 0xffffffff);
        do {
          __ZdlPv(param_1);
          iVar14 = (int)uVar12;
          uVar12 = (ulong)(iVar14 - 1);
          if (iVar14 < 1) {
            param_1 = (long *)0x0;
            goto LAB_0055e2a8;
          }
          param_1 = (long *)*puVar17;
          bVar8 = *(byte *)((long)param_1 + 0xf);
          puVar17 = puVar17 + -1;
        } while ((ulong)bVar8 - (ulong)*(byte *)((long)param_1 + 0xe) == 1);
      }
      *(byte *)((long)param_1 + 0xf) = bVar8 - 1;
      *param_1 = *param_1 - lVar16;
      if (0 < (int)uVar12) {
        uVar10 = (uVar12 & 0xffffffff) + 1;
        puVar17 = auStack_a0 + (uVar12 & 0xffffffff) + 1;
        do {
          puVar17 = puVar17 + -1;
          param_1 = (long *)*puVar17;
          *param_1 = *param_1 - lVar16;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
      do {
        if ((ulong)*(byte *)((long)param_1 + 0xf) - (ulong)*(byte *)((long)param_1 + 0xe) != 1)
        break;
        cVar9 = *(char *)((long)param_1 + 0xd);
        param_1 = (long *)param_1[(ulong)*(byte *)((long)param_1 + 0xf) + 1];
        __ZdlPv();
      } while (cVar9 != '\0');
    }
  }
LAB_0055e2a8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  qVar7._0_4_ = param_2->cmd;
  qVar7._4_4_ = param_2->cmdsize;
  if (param_4 != qVar7) {
    if (param_4 == 0) {
      pcVar1 = param_2->segname;
      do {
        uVar11 = *(uint *)pcVar1;
        cVar9 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(uint *)pcVar1 = uVar11 - 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar11 & 0xfffffff9) == 0) {
        func_0x0055b598(param_2);
        param_2 = (segment_command *)0x0;
        plVar6 = (long *)*param_1;
        lVar16 = *plVar6;
      }
      else {
        param_2 = (segment_command *)0x0;
        plVar6 = (long *)*param_1;
        lVar16 = *plVar6;
      }
      goto joined_r0x0055e454;
    }
    psVar15 = param_2;
    if (param_2->segname[4] == '\x01') {
      psVar15 = (segment_command *)param_2->vmaddr;
      param_3 = *(long *)(param_2->segname + 8) + param_3;
      pcVar1 = psVar15->segname;
      do {
        cVar9 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(int *)pcVar1 = *(int *)pcVar1 + 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      pcVar1 = param_2->segname;
      do {
        uVar11 = *(uint *)pcVar1;
        cVar9 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(uint *)pcVar1 = uVar11 - 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar11 & 0xfffffff9) == 0) {
        func_0x0055b598(param_2);
      }
    }
    param_2 = &segment_command_00000020;
    __Znwm();
    param_2->cmd = (int)param_4;
    param_2->cmdsize = (int)(param_4 >> 0x20);
    param_2->segname[0] = '\0';
    param_2->segname[1] = '\0';
    param_2->segname[2] = '\0';
    param_2->segname[3] = '\0';
    param_2->segname[4] = '\0';
    param_2->segname[5] = '\0';
    param_2->segname[6] = '\0';
    param_2->segname[7] = '\0';
    param_2->segname[0] = '\x04';
    param_2->segname[1] = '\0';
    param_2->segname[2] = '\0';
    param_2->segname[3] = '\0';
    param_2->segname[4] = '\x01';
    *(long *)(param_2->segname + 8) = param_3;
    param_2->vmaddr = (qword)psVar15;
  }
  plVar6 = (long *)*param_1;
  lVar16 = *plVar6;
joined_r0x0055e454:
  if (lVar16 != 0) {
    FUN_0055bb34();
    *(long *)*param_1 = lVar16;
    return;
  }
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  *(undefined4 *)(pqVar5 + 1) = 4;
  if (param_2->segname[4] == '\x03') {
    cVar9 = param_2->segname[5] + '\x01';
  }
  else {
    cVar9 = '\0';
  }
  *pqVar5 = *(qword *)param_2;
  *(undefined1 *)((long)pqVar5 + 0xc) = 3;
  *(char *)((long)pqVar5 + 0xd) = cVar9;
  *(undefined2 *)((long)pqVar5 + 0xe) = 0x100;
  pqVar5[2] = (qword)param_2;
  *plVar6 = (long)pqVar5;
  return;
}



/* Entry: 0055e720; end: 0055e84b;  */

void FUN_0055e720(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar6 = param_3;
  if (param_3 <= param_2) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  if (param_2 < uVar6) {
    uVar7 = (ulong)param_2;
    do {
      lVar5 = *(long *)(param_1 + 0x28 + (ulong)*(uint *)(param_1 + 0x18) * 8 + uVar7 * 8);
      puVar1 = (uint *)(lVar5 + 8);
      if (*puVar1 == 4) {
LAB_0055e7ac:
        if (*(byte *)(lVar5 + 0xc) < 6) {
          (**(code **)(lVar5 + 0x18))();
        }
        else {
          __ZdlPv();
        }
      }
      else {
        do {
          uVar2 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar2 & 0xfffffff9) == 0) goto LAB_0055e7ac;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != (uint)uVar7);
  }
  if (param_3 - 1 < param_2) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x28 + (ulong)*(uint *)(param_1 + 0x18) * 8 + uVar7 * 8);
      puVar1 = (uint *)(lVar5 + 8);
      if (*puVar1 == 4) {
LAB_0055e824:
        if (*(byte *)(lVar5 + 0xc) < 6) {
          (**(code **)(lVar5 + 0x18))();
        }
        else {
          __ZdlPv();
        }
      }
      else {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar6 & 0xfffffff9) == 0) goto LAB_0055e824;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  return;
}



/* Entry: 0055e84c; end: 0055eb77;  */

undefined8 * FUN_0055e84c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  dword *pdVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  *param_1 = &PTR_FUN_00a014f0;
  if ((bRam0000000000b69490 & 1) == 0) {
    iVar7 = 0xb69490;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      pdVar6 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined8 *)pdVar6 = 0;
      *(undefined8 *)(pdVar6 + 2) = 0;
      pdRam0000000000b69488 = pdVar6;
      ___cxa_guard_release(0xb69490);
    }
  }
  pdVar6 = pdRam0000000000b69488;
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  uVar8 = *(ulong *)pdRam0000000000b69488;
  if ((uVar8 & 0x19) == 0) {
    do {
      if (*(ulong *)pdVar6 != uVar8) {
        ClearExclusiveLocal();
        goto joined_r0x0055e938;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
      if (bVar2) {
        *(ulong *)pdVar6 = uVar8 | 8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
joined_r0x0055e938:
    iVar7 = iRam0000000000b694c4;
    if (iRam0000000000b694c0 != 0xdd) {
      FUN_00568724(0xb694c0);
      iVar7 = iRam0000000000b694c4;
    }
    do {
      uVar8 = *(ulong *)pdVar6;
      if ((uVar8 & 0x11) != 0) break;
      if (((uint)uVar8 >> 3 & 1) == 0) {
        while (*(ulong *)pdVar6 == uVar8) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
          if (bVar2) {
            *(ulong *)pdVar6 = uVar8 | 8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0055e964;
        }
        ClearExclusiveLocal();
      }
      iVar3 = iVar7 + -1;
      bVar2 = 0 < iVar7;
      iVar7 = iVar3;
    } while (iVar3 != 0 && bVar2);
    FUN_00776798(pdVar6,&UNK_00811348,0,0);
  }
LAB_0055e964:
  lVar11 = param_1[2];
  lVar15 = param_1[3];
  if (lVar11 == 0) {
    if (lVar15 == 0) {
      lVar11 = 0;
      plVar10 = (long *)0x0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar16 = (long *)0x0;
      plVar10 = (long *)0x0;
      plVar14 = (long *)0x0;
      do {
        while( true ) {
          if ((*(byte *)(lVar15 + 8) & 1) != 0) {
            lVar11 = param_1[2];
            goto LAB_0055ea68;
          }
          if (plVar16 <= plVar14) break;
          plVar13 = plVar14 + 1;
          *plVar14 = lVar15;
          lVar15 = *(long *)(lVar15 + 0x18);
          plVar14 = plVar13;
          if (lVar15 == 0) goto LAB_0055ea2c;
        }
        lVar11 = (long)plVar14 - (long)plVar10;
        uVar8 = (lVar11 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) {
          FUN_0055ee08();
LAB_0055eb50:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x55eb54);
          (*pcVar4)();
        }
        uVar9 = (long)plVar16 - (long)plVar10 >> 2;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plVar16 - (long)plVar10)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
          FUN_0040cee8();
          goto LAB_0055eb50;
        }
        lVar5 = uVar9 << 3;
        __Znwm();
        plVar14 = (long *)(lVar5 + lVar11);
        plVar16 = (long *)(lVar5 + uVar9 * 8);
        plVar12 = plVar14 + -(lVar11 >> 3);
        plVar13 = plVar14 + 1;
        *plVar14 = lVar15;
        _memcpy(plVar12,plVar10,lVar11);
        if (plVar10 != (long *)0x0) {
          __ZdlPv(plVar10);
        }
        lVar15 = *(long *)(lVar15 + 0x18);
        plVar10 = plVar12;
        plVar14 = plVar13;
      } while (lVar15 != 0);
LAB_0055ea2c:
      lVar11 = param_1[2];
    }
LAB_0055ea40:
    *(long *)(pdVar6 + 2) = lVar11;
    uVar8 = *(ulong *)pdVar6;
    plVar14 = plVar13;
    if (((uVar8 ^ 0xc) & 0x18) < ((uVar8 ^ 0xc) & 6)) {
LAB_0055ea84:
      do {
        if (*(ulong *)pdVar6 != uVar8) {
          ClearExclusiveLocal();
          plVar13 = plVar14;
          goto LAB_0055eaa8;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
        if (bVar2) {
          *(ulong *)pdVar6 = uVar8 & 0xffffffffffffffd7;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar13 = plVar10;
      } while (cVar1 != '\0');
      goto joined_r0x0055eab8;
    }
  }
  else {
    plVar10 = (long *)0x0;
    plVar13 = (long *)0x0;
    *(long *)(lVar11 + 0x18) = lVar15;
    plVar14 = plVar13;
    if (lVar15 == 0) goto LAB_0055ea40;
LAB_0055ea68:
    *(long *)(lVar15 + 0x10) = lVar11;
    uVar8 = *(ulong *)pdVar6;
    plVar13 = plVar14;
    if (((uVar8 ^ 0xc) & 0x18) < ((uVar8 ^ 0xc) & 6)) goto LAB_0055ea84;
  }
LAB_0055eaa8:
  FUN_007767f4(pdVar6,0);
  plVar14 = plVar13;
  plVar13 = plVar10;
joined_r0x0055eab8:
  for (; plVar10 != plVar14; plVar10 = plVar10 + 1) {
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 8))();
    }
  }
  if (plVar13 != (long *)0x0) {
    __ZdlPv(plVar13);
  }
  return param_1;
}



/* Entry: 0055eb78; end: 0055eb7b;  */

undefined8 * FUN_0055eb78(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  dword *pdVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  *param_1 = &PTR_FUN_00a014f0;
  if ((bRam0000000000b69490 & 1) == 0) {
    iVar7 = 0xb69490;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      pdVar6 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined8 *)pdVar6 = 0;
      *(undefined8 *)(pdVar6 + 2) = 0;
      pdRam0000000000b69488 = pdVar6;
      ___cxa_guard_release(0xb69490);
    }
  }
  pdVar6 = pdRam0000000000b69488;
  if (*(char *)(param_1 + 1) != '\x01') {
    return param_1;
  }
  uVar8 = *(ulong *)pdRam0000000000b69488;
  if ((uVar8 & 0x19) == 0) {
    do {
      if (*(ulong *)pdVar6 != uVar8) {
        ClearExclusiveLocal();
        goto joined_r0x0055e938;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
      if (bVar2) {
        *(ulong *)pdVar6 = uVar8 | 8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
joined_r0x0055e938:
    iVar7 = iRam0000000000b694c4;
    if (iRam0000000000b694c0 != 0xdd) {
      FUN_00568724(0xb694c0);
      iVar7 = iRam0000000000b694c4;
    }
    do {
      uVar8 = *(ulong *)pdVar6;
      if ((uVar8 & 0x11) != 0) break;
      if (((uint)uVar8 >> 3 & 1) == 0) {
        while (*(ulong *)pdVar6 == uVar8) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
          if (bVar2) {
            *(ulong *)pdVar6 = uVar8 | 8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0055e964;
        }
        ClearExclusiveLocal();
      }
      iVar3 = iVar7 + -1;
      bVar2 = 0 < iVar7;
      iVar7 = iVar3;
    } while (iVar3 != 0 && bVar2);
    FUN_00776798(pdVar6,&UNK_00811348,0,0);
  }
LAB_0055e964:
  lVar11 = param_1[2];
  lVar15 = param_1[3];
  if (lVar11 == 0) {
    if (lVar15 == 0) {
      lVar11 = 0;
      plVar10 = (long *)0x0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar16 = (long *)0x0;
      plVar10 = (long *)0x0;
      plVar14 = (long *)0x0;
      do {
        while( true ) {
          if ((*(byte *)(lVar15 + 8) & 1) != 0) {
            lVar11 = param_1[2];
            goto LAB_0055ea68;
          }
          if (plVar16 <= plVar14) break;
          plVar13 = plVar14 + 1;
          *plVar14 = lVar15;
          lVar15 = *(long *)(lVar15 + 0x18);
          plVar14 = plVar13;
          if (lVar15 == 0) goto LAB_0055ea2c;
        }
        lVar11 = (long)plVar14 - (long)plVar10;
        uVar8 = (lVar11 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) {
          FUN_0055ee08();
LAB_0055eb50:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x55eb54);
          (*pcVar4)();
        }
        uVar9 = (long)plVar16 - (long)plVar10 >> 2;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plVar16 - (long)plVar10)) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d != 0) {
          FUN_0040cee8();
          goto LAB_0055eb50;
        }
        lVar5 = uVar9 << 3;
        __Znwm();
        plVar14 = (long *)(lVar5 + lVar11);
        plVar16 = (long *)(lVar5 + uVar9 * 8);
        plVar12 = plVar14 + -(lVar11 >> 3);
        plVar13 = plVar14 + 1;
        *plVar14 = lVar15;
        _memcpy(plVar12,plVar10,lVar11);
        if (plVar10 != (long *)0x0) {
          __ZdlPv(plVar10);
        }
        lVar15 = *(long *)(lVar15 + 0x18);
        plVar10 = plVar12;
        plVar14 = plVar13;
      } while (lVar15 != 0);
LAB_0055ea2c:
      lVar11 = param_1[2];
    }
LAB_0055ea40:
    *(long *)(pdVar6 + 2) = lVar11;
    uVar8 = *(ulong *)pdVar6;
    plVar14 = plVar13;
    if (((uVar8 ^ 0xc) & 0x18) < ((uVar8 ^ 0xc) & 6)) {
LAB_0055ea84:
      do {
        if (*(ulong *)pdVar6 != uVar8) {
          ClearExclusiveLocal();
          plVar13 = plVar14;
          goto LAB_0055eaa8;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pdVar6,0x10);
        if (bVar2) {
          *(ulong *)pdVar6 = uVar8 & 0xffffffffffffffd7;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar13 = plVar10;
      } while (cVar1 != '\0');
      goto joined_r0x0055eab8;
    }
  }
  else {
    plVar10 = (long *)0x0;
    plVar13 = (long *)0x0;
    *(long *)(lVar11 + 0x18) = lVar15;
    plVar14 = plVar13;
    if (lVar15 == 0) goto LAB_0055ea40;
LAB_0055ea68:
    *(long *)(lVar15 + 0x10) = lVar11;
    uVar8 = *(ulong *)pdVar6;
    plVar13 = plVar14;
    if (((uVar8 ^ 0xc) & 0x18) < ((uVar8 ^ 0xc) & 6)) goto LAB_0055ea84;
  }
LAB_0055eaa8:
  FUN_007767f4(pdVar6,0);
  plVar14 = plVar13;
  plVar13 = plVar10;
joined_r0x0055eab8:
  for (; plVar10 != plVar14; plVar10 = plVar10 + 1) {
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 8))();
    }
  }
  if (plVar13 != (long *)0x0) {
    __ZdlPv(plVar13);
  }
  return param_1;
}



/* Entry: 0055eb7c; end: 0055eb8f;  */

void FUN_0055eb7c(void)

{
  FUN_0055e84c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0055eb90; end: 0055ee07;  */

void FUN_0055eb90(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  dword *pdVar4;
  dword *pdVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((bRam0000000000b69490 & 1) == 0) {
    iVar6 = 0xb69490;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      pdVar4 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined8 *)pdVar4 = 0;
      *(undefined8 *)(pdVar4 + 2) = 0;
      pdRam0000000000b69488 = pdVar4;
      ___cxa_guard_release(0xb69490);
    }
  }
  pdVar4 = pdRam0000000000b69488;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((bRam0000000000b69490 & 1) == 0) {
      iVar6 = 0xb69490;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        pdVar5 = &MACH_HEADER.ncmds;
        __Znwm();
        *(undefined8 *)pdVar5 = 0;
        *(undefined8 *)(pdVar5 + 2) = 0;
        pdRam0000000000b69488 = pdVar5;
        ___cxa_guard_release(0xb69490);
      }
    }
    if (*(long *)(pdRam0000000000b69488 + 2) != 0) {
      uVar7 = *(ulong *)pdVar4;
      if ((uVar7 & 0x19) == 0) {
        do {
          if (*(ulong *)pdVar4 != uVar7) {
            ClearExclusiveLocal();
            goto LAB_0055ec10;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
          if (bVar2) {
            *(ulong *)pdVar4 = uVar7 | 8;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
LAB_0055ec68:
        lVar8 = *(long *)(pdVar4 + 2);
      }
      else {
LAB_0055ec10:
        iVar6 = iRam0000000000b694c4;
        if (iRam0000000000b694c0 != 0xdd) {
          FUN_00568724(0xb694c0);
          iVar6 = iRam0000000000b694c4;
        }
        do {
          uVar7 = *(ulong *)pdVar4;
          if ((uVar7 & 0x11) != 0) break;
          if (((uint)uVar7 >> 3 & 1) == 0) {
            while (*(ulong *)pdVar4 == uVar7) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
              if (bVar2) {
                *(ulong *)pdVar4 = uVar7 | 8;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_0055ec68;
            }
            ClearExclusiveLocal();
          }
          iVar3 = iVar6 + -1;
          bVar2 = 0 < iVar6;
          iVar6 = iVar3;
        } while (iVar3 != 0 && bVar2);
        FUN_00776798(pdVar4,&UNK_00811348,0,0);
        lVar8 = *(long *)(pdVar4 + 2);
      }
      if (lVar8 != 0) {
        param_1[2] = lVar8;
        *(long **)(lVar8 + 0x18) = param_1;
        *(long **)(pdVar4 + 2) = param_1;
        uVar7 = *(ulong *)pdVar4;
        if (((uVar7 ^ 0xc) & 0x18) < ((uVar7 ^ 0xc) & 6)) {
          while (*(ulong *)pdVar4 == uVar7) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
            if (bVar2) {
              *(ulong *)pdVar4 = uVar7 & 0xffffffffffffffd7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              return;
            }
          }
          ClearExclusiveLocal();
        }
        FUN_007767f4(pdVar4,0);
        return;
      }
      uVar7 = *(ulong *)pdVar4;
      if (((uVar7 ^ 0xc) & 0x18) < ((uVar7 ^ 0xc) & 6)) {
        do {
          if (*(ulong *)pdVar4 != uVar7) {
            ClearExclusiveLocal();
            goto LAB_0055ed38;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
          if (bVar2) {
            *(ulong *)pdVar4 = uVar7 & 0xffffffffffffffd7;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
LAB_0055ed38:
        FUN_007767f4(pdVar4,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0055ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 0055ee08; end: 0055ee1b;  */

void FUN_0055ee08(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = "vector";
  FUN_0040d774();
  piVar5 = *(int **)pcVar4;
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((piVar5 != (int *)0x0) && (iVar1 == 1)) {
    FUN_0055a640(piVar5 + 6);
    __ZdlPv(piVar5);
  }
  return;
}



/* Entry: 0055ee1c; end: 0055ee6b;  */

undefined8 * FUN_0055ee1c(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((piVar4 != (int *)0x0) && (iVar1 == 1)) {
    FUN_0055a640(piVar4 + 6);
    __ZdlPv(piVar4);
  }
  return param_1;
}



/* Entry: 0055ee6c; end: 0055f0f3;  */

void FUN_0055ee6c(byte *param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbStack_88;
  uint uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte bStack_68;
  byte abStack_67 [41];
  undefined2 uStack_3e;
  byte abStack_3c [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)param_2 & 0xff;
  uVar2 = (uint)param_1;
  pbVar6 = param_4;
  pbStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar3 < 7) {
    if (uVar3 < 4) {
      if (uVar3 - 2 < 2) goto LAB_0055ef78;
      FUN_0055f0f4(param_1,param_2,param_3);
      pbVar4 = param_2;
      pbVar6 = param_4;
    }
    else {
      if (uVar3 == 4) {
        pbVar12 = abStack_3c;
        do {
          uVar3 = (uint)param_1;
          pbVar12 = pbVar12 + -1;
          *pbVar12 = (byte)param_1 & 7 | 0x30;
          param_1 = (byte *)(ulong)(uVar3 >> 3 & 0x1f);
        } while (7 < (uVar3 & 0xff));
        goto LAB_0055f028;
      }
      if (uVar3 != 5) {
        uStack_3e = *(ushort *)(&UNK_00814a9b + ((ulong)param_1 & 0xff) * 2);
        pbVar12 = (byte *)((long)&uStack_3e + 1);
        if ((uStack_3e & 0xff) != 0x30) {
          pbVar12 = (byte *)&uStack_3e;
        }
        param_1 = abStack_3c;
        pbStack_70 = param_1 + -(long)pbVar12;
        pbStack_78 = pbVar12;
        goto joined_r0x0055f0bc;
      }
      pbVar12 = &bStack_68;
      param_1 = (byte *)(ulong)(uVar2 & 0xff);
      pbStack_78 = pbVar12;
      func_0x005748b4(param_1,pbVar12);
      pbStack_70 = param_1 + -(long)pbVar12;
      if (((ulong)param_2 & 0xff00) == 0) goto LAB_0055f038;
LAB_0055efbc:
      pbVar6 = (byte *)(ulong)param_3;
      pbVar4 = pbStack_70;
      FUN_0055f330(pbStack_78,pbStack_70,param_2,pbVar6,param_4);
    }
LAB_0055efd0:
    bVar1 = 1;
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 == 7) {
        pbVar12 = abStack_3c;
        do {
          uVar3 = (uint)param_1;
          pbVar12 = pbVar12 + -1;
          *pbVar12 = "0123456789ABCDEF"[(ulong)param_1 & 0xf];
          param_1 = (byte *)(ulong)(uVar3 >> 4 & 0xf);
        } while (0xf < (uVar3 & 0xff));
LAB_0055f028:
        param_1 = abStack_3c;
        pbStack_70 = param_1 + -(long)pbVar12;
        pbStack_78 = pbVar12;
      }
      else {
LAB_0055ef78:
        pbVar12 = &bStack_68;
        pbVar4 = pbVar12;
        if ((int)uVar2 < 0) {
          pbVar4 = abStack_67;
          bStack_68 = 0x2d;
          param_1 = (byte *)(ulong)-uVar2;
        }
        pbStack_78 = pbVar12;
        func_0x005748b4(param_1,pbVar4);
        pbStack_70 = param_1 + -(long)pbVar12;
      }
joined_r0x0055f0bc:
      if (((ulong)param_2 & 0xff00) != 0) goto LAB_0055efbc;
LAB_0055f038:
      pbVar10 = pbStack_70;
      pbVar5 = pbStack_78;
      pbVar4 = pbStack_70;
      if (param_1 != pbVar12) {
        lVar8 = *(long *)(param_4 + 0x18);
        *(byte **)(param_4 + 0x10) = pbStack_70 + *(long *)(param_4 + 0x10);
        if (pbStack_70 < param_4 + (0x420 - lVar8)) {
          pbVar4 = pbStack_78;
          _memcpy(lVar8,pbStack_78,pbStack_70);
          *(byte **)(param_4 + 0x18) = pbVar10 + *(long *)(param_4 + 0x18);
        }
        else {
          pbVar12 = param_4 + 0x20;
          (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pbVar12,lVar8 - (long)pbVar12);
          *(byte **)(param_4 + 0x18) = pbVar12;
          (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pbVar5,pbVar10);
          pbVar4 = pbVar5;
        }
      }
      goto LAB_0055efd0;
    }
    bVar1 = (byte)&pbStack_88;
    FUN_00561f34((double)(int)uVar2);
    pbVar4 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = ((ulong)pbVar4 & ((long)pbVar4 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  uVar11 = 0;
  if (uVar7 != 0) {
    uVar11 = uVar7 - 1;
  }
  if (((long)pbVar4 < 0x200000000) || (((uint)pbVar4 >> 8 & 1) != 0)) {
    pbVar12 = *(byte **)(pbVar6 + 0x18);
    *(long *)(pbVar6 + 0x10) = *(long *)(pbVar6 + 0x10) + 1;
    if (pbVar6 + 0x420 != pbVar12) goto LAB_0055f1ac;
  }
  else {
    pbVar5 = *(byte **)(pbVar6 + 0x18);
    *(ulong *)(pbVar6 + 0x10) = *(long *)(pbVar6 + 0x10) + uVar11;
    pbVar12 = pbVar6 + 0x420;
    uVar14 = (long)pbVar12 - (long)pbVar5;
    uVar7 = uVar11 - uVar14;
    uVar13 = uVar11;
    if (uVar14 <= uVar11 && uVar7 != 0) {
      pbVar10 = pbVar6 + 0x20;
      pbVar9 = pbVar12;
      if (pbVar12 != pbVar5) {
        _memset(pbVar5,0x20,uVar14);
        lVar8 = *(long *)(pbVar6 + 0x18);
        *(byte **)(pbVar6 + 0x18) = (byte *)(lVar8 + uVar14);
        pbVar9 = (byte *)(lVar8 + uVar14);
      }
      (**(code **)(pbVar6 + 8))(*(undefined8 *)pbVar6,pbVar10,(long)pbVar9 - (long)pbVar10);
      *(byte **)(pbVar6 + 0x18) = pbVar10;
      for (; uVar13 = uVar7, pbVar5 = pbVar10, 0x400 < uVar7; uVar7 = uVar7 - 0x400) {
        _memset(pbVar10,0x20,0x400);
        *(byte **)(pbVar6 + 0x18) = pbVar12;
        (**(code **)(pbVar6 + 8))(*(undefined8 *)pbVar6,pbVar10,0x400);
        *(byte **)(pbVar6 + 0x18) = pbVar10;
      }
    }
    _memset(pbVar5,0x20,uVar13);
    pbVar12 = (byte *)(*(long *)(pbVar6 + 0x18) + uVar13);
    *(long *)(pbVar6 + 0x10) = *(long *)(pbVar6 + 0x10) + 1;
    *(byte **)(pbVar6 + 0x18) = pbVar12;
    if (pbVar6 + 0x420 != pbVar12) goto LAB_0055f1ac;
  }
  pbVar12 = pbVar6 + 0x20;
  (**(code **)(pbVar6 + 8))(*(undefined8 *)pbVar6,pbVar12,0x400);
  *(byte **)(pbVar6 + 0x18) = pbVar12;
LAB_0055f1ac:
  pbVar5 = pbVar6 + 0x420;
  *pbVar12 = bVar1;
  pbVar12 = (byte *)(*(long *)(pbVar6 + 0x18) + 1);
  *(byte **)(pbVar6 + 0x18) = pbVar12;
  if ((0x1ffffffff < (long)pbVar4) && (((uint)pbVar4 >> 8 & 1) != 0)) {
    *(ulong *)(pbVar6 + 0x10) = *(long *)(pbVar6 + 0x10) + uVar11;
    uVar7 = (long)pbVar5 - (long)pbVar12;
    if (uVar7 <= uVar11 && uVar11 - uVar7 != 0) {
      pbVar4 = pbVar6 + 0x20;
      pbVar10 = pbVar5;
      if (pbVar5 != pbVar12) {
        _memset(pbVar12,0x20,uVar7);
        lVar8 = *(long *)(pbVar6 + 0x18);
        *(byte **)(pbVar6 + 0x18) = (byte *)(lVar8 + uVar7);
        pbVar10 = (byte *)(lVar8 + uVar7);
      }
      (**(code **)(pbVar6 + 8))(*(undefined8 *)pbVar6,pbVar4,(long)pbVar10 - (long)pbVar4);
      *(byte **)(pbVar6 + 0x18) = pbVar4;
      for (uVar11 = uVar11 - uVar7; pbVar12 = pbVar4, 0x400 < uVar11; uVar11 = uVar11 - 0x400) {
        _memset(pbVar4,0x20,0x400);
        *(byte **)(pbVar6 + 0x18) = pbVar5;
        (**(code **)(pbVar6 + 8))(*(undefined8 *)pbVar6,pbVar4,0x400);
        *(byte **)(pbVar6 + 0x18) = pbVar4;
      }
    }
    _memset(pbVar12,0x20,uVar11);
    *(ulong *)(pbVar6 + 0x18) = *(long *)(pbVar6 + 0x18) + uVar11;
  }
  return;
}



/* Entry: 0055f0f4; end: 0055f32f;  */

void FUN_0055f0f4(undefined1 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar2 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar2 - 1;
  }
  if (((long)param_2 < 0x200000000) || (((uint)param_2 >> 8 & 1) != 0)) {
    puVar6 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + 1;
    if (param_4 + 0x84 != puVar6) goto LAB_0055f1ac;
  }
  else {
    puVar8 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar5;
    puVar6 = param_4 + 0x84;
    uVar9 = (long)puVar6 - (long)puVar8;
    uVar2 = uVar5 - uVar9;
    uVar7 = uVar5;
    if (uVar9 <= uVar5 && uVar2 != 0) {
      puVar1 = param_4 + 4;
      puVar4 = puVar6;
      if (puVar6 != puVar8) {
        _memset(puVar8,0x20,uVar9);
        lVar3 = param_4[3];
        param_4[3] = (undefined8 *)(lVar3 + uVar9);
        puVar4 = (undefined8 *)(lVar3 + uVar9);
      }
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar4 - (long)puVar1);
      param_4[3] = puVar1;
      for (; uVar7 = uVar2, puVar8 = puVar1, 0x400 < uVar2; uVar2 = uVar2 - 0x400) {
        _memset(puVar1,0x20,0x400);
        param_4[3] = puVar6;
        (*(code *)param_4[1])(*param_4,puVar1,0x400);
        param_4[3] = puVar1;
      }
    }
    _memset(puVar8,0x20,uVar7);
    puVar6 = (undefined8 *)(param_4[3] + uVar7);
    param_4[2] = param_4[2] + 1;
    param_4[3] = puVar6;
    if (param_4 + 0x84 != puVar6) goto LAB_0055f1ac;
  }
  puVar6 = param_4 + 4;
  (*(code *)param_4[1])(*param_4,puVar6,0x400);
  param_4[3] = puVar6;
LAB_0055f1ac:
  puVar8 = param_4 + 0x84;
  *(undefined1 *)puVar6 = param_1;
  puVar6 = (undefined8 *)(param_4[3] + 1);
  param_4[3] = puVar6;
  if ((0x1ffffffff < (long)param_2) && (((uint)param_2 >> 8 & 1) != 0)) {
    param_4[2] = param_4[2] + uVar5;
    uVar2 = (long)puVar8 - (long)puVar6;
    if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
      puVar1 = param_4 + 4;
      puVar4 = puVar8;
      if (puVar8 != puVar6) {
        _memset(puVar6,0x20,uVar2);
        lVar3 = param_4[3];
        param_4[3] = (undefined8 *)(lVar3 + uVar2);
        puVar4 = (undefined8 *)(lVar3 + uVar2);
      }
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar4 - (long)puVar1);
      param_4[3] = puVar1;
      for (uVar5 = uVar5 - uVar2; puVar6 = puVar1, 0x400 < uVar5; uVar5 = uVar5 - 0x400) {
        _memset(puVar1,0x20,0x400);
        param_4[3] = puVar8;
        (*(code *)param_4[1])(*param_4,puVar1,0x400);
        param_4[3] = puVar1;
      }
    }
    _memset(puVar6,0x20,uVar5);
    param_4[3] = param_4[3] + uVar5;
  }
  return;
}



/* Entry: 0055f330; end: 0055f8d3;  */

void FUN_0055f330(char *param_1,ulong param_2,ulong param_3,uint param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uStack_68;
  
  uVar8 = (uint)param_3;
  uVar6 = uVar8 >> 8;
  cVar5 = *param_1;
  uVar21 = (ulong)(cVar5 < '1');
  if (cVar5 < '1') {
    param_1 = param_1 + 1;
  }
  uVar13 = param_2 - uVar21;
  uVar15 = 0;
  if (uVar13 <= param_3 >> 0x20) {
    uVar15 = (param_3 >> 0x20) - uVar13;
  }
  bVar7 = (param_3 & 0xfe) == 2;
  uVar20 = (ulong)bVar7;
  pcVar12 = (char *)0x0;
  if (bVar7) {
    pcVar12 = (char *)0x0;
    if ((uVar6 & 4) != 0) {
      pcVar12 = " ";
    }
    pcVar17 = "+";
    uVar11 = 1;
    if ((uVar6 & 2) == 0) {
      pcVar17 = pcVar12;
      uVar11 = (ulong)((uVar6 & 4) >> 2);
    }
    pcVar12 = "-";
    if (cVar5 != '-') {
      pcVar12 = pcVar17;
      uVar20 = uVar11;
    }
  }
  uVar18 = 0;
  uVar11 = 0;
  if (uVar20 <= uVar15) {
    uVar11 = uVar15 - uVar20;
  }
  uVar3 = uVar8 & 0xff;
  bVar7 = true;
  if (uVar3 < 0x12) {
    pcVar17 = (char *)0x0;
    if ((1 << (ulong)(uVar8 & 0x1f) & 0x200c0U) != 0) {
      uVar18 = 0;
      pcVar17 = (char *)0x0;
      if ((uVar3 == 0x11 || (param_3 & 0x800) != 0) && (param_2 != uVar21)) {
        bVar7 = false;
        pcVar17 = "0X";
        if (uVar3 != 7) {
          pcVar17 = "0x";
        }
        uVar18 = 2;
      }
    }
  }
  else {
    pcVar17 = (char *)0x0;
  }
  uVar15 = 0;
  if (uVar18 <= uVar11) {
    uVar15 = uVar11 - uVar18;
  }
  uVar11 = (ulong)param_4;
  if (0x7fffffff < param_4) {
    uVar11 = 1;
  }
  if (((((param_3 & 0xff) == 4) && (((uVar6 & 0xff) >> 3 & 1) != 0)) &&
      ((param_2 == uVar21 || (*param_1 != '0')))) && (uVar11 <= uVar13 + 1)) {
    uVar11 = uVar13 + 1;
  }
  uVar19 = 0;
  if (uVar13 <= uVar11) {
    uVar19 = uVar11 - uVar13;
  }
  uVar11 = 0;
  if (uVar19 <= uVar15) {
    uVar11 = uVar15 - uVar19;
  }
  uVar15 = 0;
  if (-1 < (long)param_3) {
    uVar15 = uVar11;
  }
  uVar11 = uVar15;
  if ((uVar6 & 1) != 0) {
    uVar11 = 0;
  }
  if (((int)param_4 < 0) && (((uVar6 & 0xff) >> 4 & 1) != 0)) {
    uVar19 = uVar11 + uVar19;
    uStack_68 = 0;
    if ((uVar6 & 1) != 0) {
      uStack_68 = uVar15;
    }
  }
  else {
    uStack_68 = 0;
    if ((uVar6 & 1) != 0) {
      uStack_68 = uVar15;
    }
    if (uVar11 != 0) {
      puVar16 = (undefined8 *)param_5[3];
      param_5[2] = param_5[2] + uVar11;
      puVar1 = param_5 + 0x84;
      uVar14 = (long)puVar1 - (long)puVar16;
      if (uVar14 <= uVar11 && uVar11 - uVar14 != 0) {
        puVar2 = param_5 + 4;
        puVar10 = puVar1;
        if (puVar1 != puVar16) {
          _memset(puVar16,0x20,uVar14);
          lVar9 = param_5[3];
          param_5[3] = (undefined8 *)(lVar9 + uVar14);
          puVar10 = (undefined8 *)(lVar9 + uVar14);
        }
        (*(code *)param_5[1])(*param_5,puVar2,(long)puVar10 - (long)puVar2);
        param_5[3] = puVar2;
        for (uVar15 = uVar11 - uVar14; puVar16 = puVar2, 0x400 < uVar15; uVar15 = uVar15 - 0x400) {
          _memset(puVar2,0x20,0x400);
          param_5[3] = puVar1;
          (*(code *)param_5[1])(*param_5,puVar2,0x400);
          param_5[3] = puVar2;
        }
      }
      _memset(puVar16,0x20,uVar15);
      param_5[3] = param_5[3] + uVar15;
    }
  }
  if (uVar20 != 0) {
    pcVar4 = (char *)param_5[3];
    param_5[2] = param_5[2] + 1;
    if ((ulong)((long)param_5 + (0x420 - (long)pcVar4)) < 2) {
      puVar1 = param_5 + 4;
      (*(code *)param_5[1])(*param_5,puVar1,(long)pcVar4 - (long)puVar1);
      param_5[3] = puVar1;
      (*(code *)param_5[1])(*param_5,pcVar12,uVar20);
    }
    else {
      *pcVar4 = *pcVar12;
      param_5[3] = param_5[3] + 1;
    }
  }
  if (!bVar7) {
    lVar9 = param_5[3];
    param_5[2] = param_5[2] + uVar18;
    if (uVar18 < (ulong)((long)param_5 + (0x420 - lVar9))) {
      _memcpy(lVar9,pcVar17,uVar18);
      param_5[3] = param_5[3] + uVar18;
    }
    else {
      puVar1 = param_5 + 4;
      (*(code *)param_5[1])(*param_5,puVar1,lVar9 - (long)puVar1);
      param_5[3] = puVar1;
      (*(code *)param_5[1])(*param_5,pcVar17,uVar18);
    }
  }
  if (uVar19 != 0) {
    puVar16 = (undefined8 *)param_5[3];
    param_5[2] = param_5[2] + uVar19;
    puVar1 = param_5 + 0x84;
    uVar15 = (long)puVar1 - (long)puVar16;
    if (uVar15 <= uVar19 && uVar19 - uVar15 != 0) {
      puVar2 = param_5 + 4;
      puVar10 = puVar1;
      if (puVar1 != puVar16) {
        _memset(puVar16,0x30,uVar15);
        lVar9 = param_5[3];
        param_5[3] = (undefined8 *)(lVar9 + uVar15);
        puVar10 = (undefined8 *)(lVar9 + uVar15);
      }
      (*(code *)param_5[1])(*param_5,puVar2,(long)puVar10 - (long)puVar2);
      param_5[3] = puVar2;
      for (uVar19 = uVar19 - uVar15; puVar16 = puVar2, 0x400 < uVar19; uVar19 = uVar19 - 0x400) {
        _memset(puVar2,0x30,0x400);
        param_5[3] = puVar1;
        (*(code *)param_5[1])(*param_5,puVar2,0x400);
        param_5[3] = puVar2;
      }
    }
    _memset(puVar16,0x30,uVar19);
    param_5[3] = param_5[3] + uVar19;
  }
  if (param_2 != uVar21) {
    lVar9 = param_5[3];
    param_5[2] = param_5[2] + uVar13;
    if (uVar13 < (ulong)((long)param_5 + (0x420 - lVar9))) {
      _memcpy(lVar9,param_1,uVar13);
      param_5[3] = param_5[3] + uVar13;
    }
    else {
      puVar1 = param_5 + 4;
      (*(code *)param_5[1])(*param_5,puVar1,lVar9 - (long)puVar1);
      param_5[3] = puVar1;
      (*(code *)param_5[1])(*param_5,param_1,uVar13);
    }
  }
  if (uStack_68 != 0) {
    puVar16 = (undefined8 *)param_5[3];
    param_5[2] = param_5[2] + uStack_68;
    puVar1 = param_5 + 0x84;
    uVar21 = (long)puVar1 - (long)puVar16;
    if (uVar21 <= uStack_68 && uStack_68 - uVar21 != 0) {
      puVar2 = param_5 + 4;
      puVar10 = puVar1;
      if (puVar1 != puVar16) {
        _memset(puVar16,0x20,uVar21);
        lVar9 = param_5[3];
        param_5[3] = (undefined8 *)(lVar9 + uVar21);
        puVar10 = (undefined8 *)(lVar9 + uVar21);
      }
      (*(code *)param_5[1])(*param_5,puVar2,(long)puVar10 - (long)puVar2);
      param_5[3] = puVar2;
      for (uStack_68 = uStack_68 - uVar21; puVar16 = puVar2, 0x400 < uStack_68;
          uStack_68 = uStack_68 - 0x400) {
        _memset(puVar2,0x20,0x400);
        param_5[3] = puVar1;
        (*(code *)param_5[1])(*param_5,puVar2,0x400);
        param_5[3] = puVar2;
      }
    }
    _memset(puVar16,0x20,uStack_68);
    param_5[3] = param_5[3] + uStack_68;
  }
  return;
}



/* Entry: 0055f8d4; end: 0056061b;  */

/* WARNING: Type propagation algorithm not settling */

byte *******
FUN_0055f8d4(byte *******param_1,byte *******param_2,byte *******param_3,byte *******param_4)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  undefined1 ****ppppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  char *pcVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  ulong uVar15;
  byte ******ppppppbVar16;
  byte *******pppppppbVar17;
  undefined1 *puVar18;
  byte *******pppppppbVar19;
  byte *******unaff_x21;
  byte *******pppppppbVar20;
  ulong uVar21;
  ulong uVar22;
  byte *******unaff_x22;
  ulong uVar23;
  byte *******pppppppbStack_3d8;
  undefined4 uStack_3d0;
  byte *******pppppppbStack_3c8;
  byte *******pppppppbStack_3c0;
  undefined1 uStack_3b8;
  byte ******appppppbStack_3b7 [5];
  undefined1 auStack_38e [2];
  undefined1 auStack_38c [12];
  byte *******pppppppbStack_380;
  ulong uStack_378;
  byte *******pppppppbStack_370;
  byte *******pppppppbStack_368;
  undefined1 ******ppppppuStack_360;
  code *pcStack_358;
  undefined1 *puStack_348;
  byte *******pppppppbStack_340;
  ushort uStack_30e;
  undefined1 auStack_30c [12];
  byte *******pppppppbStack_300;
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  byte *******pppppppbStack_2e8;
  undefined1 *****pppppuStack_2e0;
  undefined8 uStack_2d8;
  byte *******pppppppbStack_2c8;
  undefined4 uStack_2c0;
  byte *******pppppppbStack_2b8;
  byte *******pppppppbStack_2b0;
  byte ******appppppbStack_2a8 [5];
  undefined2 uStack_27e;
  undefined1 auStack_27c [4];
  long lStack_278;
  byte *******pppppppbStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte *******pppppppbStack_258;
  undefined1 ****ppppuStack_250;
  undefined8 uStack_248;
  byte *******pppppppbStack_238;
  undefined4 uStack_230;
  byte *******pppppppbStack_228;
  byte *******pppppppbStack_220;
  undefined1 auStack_218 [42];
  undefined2 uStack_1ee;
  undefined1 auStack_1ec [4];
  long lStack_1e8;
  byte *******pppppppbStack_1e0;
  byte *******pppppppbStack_1d8;
  byte *******pppppppbStack_1d0;
  byte *******pppppppbStack_1c8;
  undefined1 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  byte *******pppppppbStack_1a8;
  undefined4 uStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte ******appppppbStack_188 [5];
  undefined2 uStack_15e;
  undefined1 auStack_15c [4];
  long lStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  byte *******pppppppbStack_118;
  undefined4 uStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  undefined1 auStack_f8 [42];
  undefined2 uStack_ce;
  undefined1 auStack_cc [4];
  long lStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  byte *******pppppppbStack_88;
  undefined4 uStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte ******appppppbStack_68 [5];
  undefined1 auStack_3e [2];
  undefined1 auStack_3c [12];
  
  auStack_3c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_80 = SUB84(param_3,0);
  uVar7 = (uint)param_2 & 0xff;
  pppppppbVar9 = param_4;
  pppppppbStack_88 = param_2;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) {
LAB_0055f9ec:
        unaff_x21 = appppppbStack_68;
        pppppppbStack_78 = unaff_x21;
        func_0x005748b4(param_1,unaff_x21);
        pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
        unaff_x22 = param_3;
        goto joined_r0x0055fa18;
      }
      param_3 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar10 = param_2;
      FUN_0055f0f4((int)(char)param_1);
    }
    else {
      if (uVar7 == 4) {
        unaff_x21 = (byte *******)auStack_3c;
        do {
          uVar7 = (uint)param_1;
          unaff_x21 = (byte *******)((long)unaff_x21 + -1);
          *(byte *)unaff_x21 = (byte)param_1 & 7 | 0x30;
          param_1 = (byte *******)(ulong)(uVar7 >> 3 & 0x1f);
        } while (7 < (uVar7 & 0xff));
        goto LAB_0055fa88;
      }
      if (uVar7 == 5) goto LAB_0055f9ec;
      auStack_3e = *(undefined1 (*) [2])(&UNK_00814a9b + ((ulong)param_1 & 0xffffffff) * 2);
      unaff_x21 = (byte *******)(auStack_3e + 1);
      if (((ushort)auStack_3e & 0xff) != 0x30) {
        unaff_x21 = (byte *******)auStack_3e;
      }
      param_1 = (byte *******)auStack_3c;
      pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
      pppppppbStack_78 = unaff_x21;
      if (((ulong)param_2 & 0xff00) != 0) goto LAB_0055fa1c;
LAB_0055fa98:
      pppppppbVar14 = pppppppbStack_70;
      pppppppbVar13 = pppppppbStack_78;
      pppppppbVar10 = pppppppbStack_70;
      if (param_1 != unaff_x21) {
        param_4[2] = (byte ******)((long)pppppppbStack_70 + (long)param_4[2]);
        unaff_x21 = pppppppbVar14;
        param_2 = pppppppbVar13;
        if (pppppppbStack_70 < (byte *******)((long)param_4 + (0x420 - (long)param_4[3]))) {
          pppppppbVar10 = pppppppbStack_78;
          param_3 = pppppppbStack_70;
          _memcpy();
          param_4[3] = (byte ******)((long)pppppppbVar14 + (long)param_4[3]);
        }
        else {
          unaff_x22 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,unaff_x22,(long)param_4[3] - (long)unaff_x22);
          param_4[3] = (byte ******)unaff_x22;
          pppppppbVar10 = pppppppbVar13;
          param_3 = pppppppbVar14;
          (*(code *)param_4[1])(*param_4);
        }
      }
    }
LAB_0055fa30:
    pppppppbVar13 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 != 7) goto LAB_0055f9ec;
      unaff_x21 = (byte *******)auStack_3c;
      do {
        uVar7 = (uint)param_1;
        unaff_x21 = (byte *******)((long)unaff_x21 + -1);
        *(char *)unaff_x21 = "0123456789ABCDEF"[(ulong)param_1 & 0xf];
        param_1 = (byte *******)(ulong)(uVar7 >> 4 & 0xf);
      } while (0xf < (uVar7 & 0xff));
LAB_0055fa88:
      param_1 = (byte *******)auStack_3c;
      pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
      pppppppbStack_78 = unaff_x21;
joined_r0x0055fa18:
      if (((ulong)param_2 & 0xff00) == 0) goto LAB_0055fa98;
LAB_0055fa1c:
      pppppppbVar9 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar10 = pppppppbStack_70;
      param_3 = param_2;
      FUN_0055f330(pppppppbStack_78);
      goto LAB_0055fa30;
    }
    pppppppbVar13 = (byte *******)&pppppppbStack_88;
    pppppppbVar10 = param_4;
    FUN_00561f34((double)((ulong)param_1 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_3c._4_8_) {
    return pppppppbVar13;
  }
  ___stack_chk_fail();
  uStack_98 = 0x55fb10;
  ppuVar4 = &puStack_a0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_110 = SUB84(param_3,0);
  uVar7 = (uint)pppppppbVar10 & 0xff;
  iVar8 = (int)pppppppbVar13;
  pppppppbVar14 = pppppppbVar9;
  pppppppbStack_118 = pppppppbVar10;
  pppppppbStack_c0 = unaff_x22;
  pppppppbStack_b8 = unaff_x21;
  pppppppbStack_b0 = param_2;
  pppppppbStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) goto LAB_0055fc1c;
      param_3 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar19 = pppppppbVar10;
      FUN_0055f0f4((int)(char)pppppppbVar13);
    }
    else {
      if (uVar7 == 4) {
        pppppppbVar12 = (byte *******)auStack_cc;
        do {
          uVar7 = (uint)pppppppbVar13;
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
          *(byte *)pppppppbVar12 = (byte)pppppppbVar13 & 7 | 0x30;
          pppppppbVar13 = (byte *******)(ulong)(uVar7 >> 3);
        } while (7 < uVar7);
        goto LAB_0055fcd0;
      }
      if (uVar7 != 5) {
        pppppppbVar12 = (byte *******)(auStack_cc + 1);
        do {
          pppppppbVar19 = pppppppbVar12;
          uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar13 & 0xff) * 2);
          *(ushort *)((long)pppppppbVar19 + -3) = uVar2;
          uVar7 = (uint)pppppppbVar13;
          pppppppbVar13 = (byte *******)((ulong)pppppppbVar13 >> 8 & 0xffffff);
          pppppppbVar12 = (byte *******)((long)pppppppbVar19 + -2);
        } while (0xff < uVar7);
        if ((uVar2 & 0xff) != 0x30) {
          pppppppbVar12 = (byte *******)((long)pppppppbVar19 + -3);
        }
        pppppppbStack_100 = (byte *******)((long)auStack_cc - (long)pppppppbVar12);
        pppppppbVar13 = (byte *******)auStack_cc;
        pppppppbStack_108 = pppppppbVar12;
        goto joined_r0x0055fd78;
      }
      pppppppbVar12 = (byte *******)auStack_f8;
      pppppppbStack_108 = pppppppbVar12;
      func_0x005748b4();
      pppppppbStack_100 = (byte *******)((long)pppppppbVar13 - (long)pppppppbVar12);
      unaff_x22 = param_3;
      if (((ulong)pppppppbVar10 & 0xff00) == 0) goto LAB_0055fce0;
LAB_0055fc64:
      pppppppbVar14 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar19 = pppppppbStack_100;
      param_3 = pppppppbVar10;
      FUN_0055f330(pppppppbStack_108);
      unaff_x21 = pppppppbVar12;
    }
LAB_0055fc78:
    pppppppbVar13 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 == 7) {
        pppppppbVar12 = (byte *******)auStack_cc;
        do {
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
          *(char *)pppppppbVar12 = "0123456789ABCDEF"[(ulong)pppppppbVar13 & 0xf];
          uVar7 = (uint)pppppppbVar13;
          pppppppbVar13 = (byte *******)((ulong)pppppppbVar13 >> 4 & 0xfffffff);
        } while (0xf < uVar7);
LAB_0055fcd0:
        pppppppbVar13 = (byte *******)auStack_cc;
        pppppppbStack_100 = (byte *******)((long)pppppppbVar13 - (long)pppppppbVar12);
        pppppppbStack_108 = pppppppbVar12;
      }
      else {
LAB_0055fc1c:
        pppppppbVar12 = (byte *******)auStack_f8;
        if (iVar8 < 0) {
          auStack_f8[0] = 0x2d;
          pppppppbVar13 = (byte *******)(ulong)(uint)-iVar8;
        }
        pppppppbStack_108 = pppppppbVar12;
        func_0x005748b4();
        pppppppbStack_100 = (byte *******)((long)pppppppbVar13 - (long)pppppppbVar12);
        unaff_x22 = param_3;
      }
joined_r0x0055fd78:
      if (((ulong)pppppppbVar10 & 0xff00) != 0) goto LAB_0055fc64;
LAB_0055fce0:
      pppppppbVar17 = pppppppbStack_100;
      pppppppbVar20 = pppppppbStack_108;
      pppppppbVar19 = pppppppbStack_100;
      unaff_x21 = pppppppbVar12;
      if (pppppppbVar13 != pppppppbVar12) {
        pppppppbVar9[2] = (byte ******)((long)pppppppbStack_100 + (long)pppppppbVar9[2]);
        unaff_x21 = pppppppbVar17;
        pppppppbVar10 = pppppppbVar20;
        if (pppppppbStack_100 < (byte *******)((long)pppppppbVar9 + (0x420 - (long)pppppppbVar9[3]))
           ) {
          pppppppbVar19 = pppppppbStack_108;
          param_3 = pppppppbStack_100;
          _memcpy();
          pppppppbVar9[3] = (byte ******)((long)pppppppbVar17 + (long)pppppppbVar9[3]);
        }
        else {
          unaff_x22 = pppppppbVar9 + 4;
          (*(code *)pppppppbVar9[1])
                    (*pppppppbVar9,unaff_x22,(long)pppppppbVar9[3] - (long)unaff_x22);
          pppppppbVar9[3] = (byte ******)unaff_x22;
          pppppppbVar19 = pppppppbVar20;
          param_3 = pppppppbVar17;
          (*(code *)pppppppbVar9[1])(*pppppppbVar9);
        }
      }
      goto LAB_0055fc78;
    }
    pppppppbVar13 = (byte *******)&pppppppbStack_118;
    pppppppbVar19 = pppppppbVar9;
    FUN_00561f34((double)iVar8);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pppppppbVar13;
  }
  ___stack_chk_fail();
  uStack_128 = 0x55fdb0;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_1a0 = SUB84(param_3,0);
  uVar7 = (uint)pppppppbVar19 & 0xff;
  pppppppbVar12 = pppppppbVar14;
  pppppppbStack_1a8 = pppppppbVar19;
  pppppppbStack_150 = unaff_x22;
  pppppppbStack_148 = unaff_x21;
  pppppppbStack_140 = pppppppbVar10;
  pppppppbStack_138 = pppppppbVar9;
  ppuStack_130 = ppuVar4;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) {
LAB_0055fee0:
        pppppppbVar20 = appppppbStack_188;
        pppppppbStack_198 = pppppppbVar20;
        func_0x005748b4();
        pppppppbStack_190 = (byte *******)((long)pppppppbVar13 - (long)pppppppbVar20);
        pppppppbVar17 = pppppppbVar13;
        unaff_x22 = param_3;
        pppppppbVar10 = pppppppbStack_140;
        pppppppbVar9 = pppppppbStack_138;
        ppuVar4 = ppuStack_130;
        goto joined_r0x0055ff0c;
      }
      param_3 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar9 = pppppppbVar19;
      FUN_0055f0f4((int)(char)pppppppbVar13);
    }
    else {
      if (uVar7 == 4) {
        pppppppbVar20 = (byte *******)auStack_15c;
        do {
          uVar7 = (uint)pppppppbVar13;
          pppppppbVar20 = (byte *******)((long)pppppppbVar20 + -1);
          *(byte *)pppppppbVar20 = (byte)pppppppbVar13 & 7 | 0x30;
          pppppppbVar13 = (byte *******)(ulong)(uVar7 >> 3);
        } while (7 < uVar7);
        goto LAB_0055ff7c;
      }
      if (uVar7 == 5) goto LAB_0055fee0;
      pppppppbVar17 = (byte *******)auStack_15c;
      pppppppbVar9 = (byte *******)(auStack_15c + 1);
      do {
        pppppppbVar10 = pppppppbVar9;
        uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar13 & 0xff) * 2);
        *(ushort *)((long)pppppppbVar10 + -3) = uVar2;
        uVar7 = (uint)pppppppbVar13;
        pppppppbVar13 = (byte *******)((ulong)pppppppbVar13 >> 8 & 0xffffff);
        pppppppbVar9 = (byte *******)((long)pppppppbVar10 + -2);
      } while (0xff < uVar7);
      pppppppbVar20 = (byte *******)((long)pppppppbVar10 + -2);
      if ((uVar2 & 0xff) != 0x30) {
        pppppppbVar20 = (byte *******)((long)pppppppbVar10 + -3);
      }
      pppppppbStack_190 = (byte *******)((long)pppppppbVar17 - (long)pppppppbVar20);
      pppppppbStack_198 = pppppppbVar20;
      if (((ulong)pppppppbVar19 & 0xff00) != 0) goto LAB_0055ff10;
LAB_0055ff8c:
      pppppppbVar13 = pppppppbStack_190;
      pppppppbVar10 = pppppppbStack_198;
      pppppppbVar9 = pppppppbStack_190;
      unaff_x21 = pppppppbVar20;
      if (pppppppbVar17 != pppppppbVar20) {
        pppppppbVar14[2] = (byte ******)((long)pppppppbStack_190 + (long)pppppppbVar14[2]);
        unaff_x21 = pppppppbVar13;
        pppppppbVar19 = pppppppbVar10;
        if (pppppppbStack_190 <
            (byte *******)((long)pppppppbVar14 + (0x420 - (long)pppppppbVar14[3]))) {
          pppppppbVar9 = pppppppbStack_198;
          param_3 = pppppppbStack_190;
          _memcpy();
          pppppppbVar14[3] = (byte ******)((long)pppppppbVar13 + (long)pppppppbVar14[3]);
        }
        else {
          unaff_x22 = pppppppbVar14 + 4;
          (*(code *)pppppppbVar14[1])
                    (*pppppppbVar14,unaff_x22,(long)pppppppbVar14[3] - (long)unaff_x22);
          pppppppbVar14[3] = (byte ******)unaff_x22;
          pppppppbVar9 = pppppppbVar10;
          param_3 = pppppppbVar13;
          (*(code *)pppppppbVar14[1])(*pppppppbVar14);
        }
      }
    }
LAB_0055ff24:
    pppppppbVar10 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 != 7) goto LAB_0055fee0;
      pppppppbVar20 = (byte *******)auStack_15c;
      do {
        pppppppbVar20 = (byte *******)((long)pppppppbVar20 + -1);
        *(char *)pppppppbVar20 = "0123456789ABCDEF"[(ulong)pppppppbVar13 & 0xf];
        uVar7 = (uint)pppppppbVar13;
        pppppppbVar13 = (byte *******)((ulong)pppppppbVar13 >> 4 & 0xfffffff);
      } while (0xf < uVar7);
LAB_0055ff7c:
      pppppppbVar17 = (byte *******)auStack_15c;
      pppppppbStack_190 = (byte *******)((long)pppppppbVar17 - (long)pppppppbVar20);
      pppppppbStack_198 = pppppppbVar20;
joined_r0x0055ff0c:
      pppppppbStack_140 = pppppppbVar10;
      pppppppbStack_138 = pppppppbVar9;
      ppuStack_130 = ppuVar4;
      if (((ulong)pppppppbVar19 & 0xff00) == 0) goto LAB_0055ff8c;
LAB_0055ff10:
      pppppppbVar12 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar9 = pppppppbStack_190;
      param_3 = pppppppbVar19;
      FUN_0055f330(pppppppbStack_198);
      unaff_x21 = pppppppbVar20;
      goto LAB_0055ff24;
    }
    pppppppbVar10 = (byte *******)&pppppppbStack_1a8;
    pppppppbVar9 = pppppppbVar14;
    FUN_00561f34((double)((ulong)pppppppbVar13 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pppppppbVar10;
  }
  ___stack_chk_fail();
  uStack_1b8 = 0x560004;
  ppppuVar5 = &pppuStack_1c0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_230 = SUB84(param_3,0);
  uVar7 = (uint)pppppppbVar9 & 0xff;
  pppppppbVar13 = pppppppbVar12;
  pppppppbStack_238 = pppppppbVar9;
  pppppppbStack_1e0 = unaff_x22;
  pppppppbStack_1d8 = unaff_x21;
  pppppppbStack_1d0 = pppppppbVar19;
  pppppppbStack_1c8 = pppppppbVar14;
  pppuStack_1c0 = &ppuStack_130;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) goto LAB_0056010c;
      param_3 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar19 = pppppppbVar9;
      FUN_0055f0f4((int)(char)pppppppbVar10);
    }
    else {
      if (uVar7 == 4) {
        pppppppbVar14 = (byte *******)auStack_1ec;
        do {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + -1);
          *(byte *)pppppppbVar14 = (byte)pppppppbVar10 & 7 | 0x30;
          bVar1 = (byte *******)((long)&MACH_HEADER.cputype + 3) < pppppppbVar10;
          pppppppbVar10 = (byte *******)((ulong)pppppppbVar10 >> 3);
        } while (bVar1);
        goto LAB_005601bc;
      }
      if (uVar7 != 5) {
        pppppppbVar14 = (byte *******)(auStack_1ec + 1);
        do {
          pppppppbVar19 = pppppppbVar14;
          uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar10 & 0xff) * 2);
          *(ushort *)((long)pppppppbVar19 + -3) = uVar2;
          bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < pppppppbVar10;
          pppppppbVar10 = (byte *******)((ulong)pppppppbVar10 >> 8);
          pppppppbVar14 = (byte *******)((long)pppppppbVar19 + -2);
        } while (bVar1);
        if ((uVar2 & 0xff) != 0x30) {
          pppppppbVar14 = (byte *******)((long)pppppppbVar19 + -3);
        }
        pppppppbStack_220 = (byte *******)((long)auStack_1ec - (long)pppppppbVar14);
        pppppppbVar10 = (byte *******)auStack_1ec;
        pppppppbStack_228 = pppppppbVar14;
        goto joined_r0x00560260;
      }
      pppppppbVar14 = (byte *******)auStack_218;
      pppppppbStack_228 = pppppppbVar14;
      func_0x00574ad8();
      pppppppbStack_220 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar14);
      unaff_x22 = param_3;
      if (((ulong)pppppppbVar9 & 0xff00) == 0) goto LAB_005601cc;
LAB_00560154:
      pppppppbVar13 = (byte *******)((ulong)param_3 & 0xffffffff);
      pppppppbVar19 = pppppppbStack_220;
      param_3 = pppppppbVar9;
      FUN_0055f330(pppppppbStack_228);
      unaff_x21 = pppppppbVar14;
    }
LAB_00560168:
    pppppppbVar14 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 == 7) {
        pppppppbVar14 = (byte *******)auStack_1ec;
        do {
          pppppppbVar14 = (byte *******)((long)pppppppbVar14 + -1);
          *(char *)pppppppbVar14 = "0123456789ABCDEF"[(ulong)pppppppbVar10 & 0xf];
          bVar1 = (byte *******)((long)&MACH_HEADER.filetype + 3) < pppppppbVar10;
          pppppppbVar10 = (byte *******)((ulong)pppppppbVar10 >> 4);
        } while (bVar1);
LAB_005601bc:
        pppppppbVar10 = (byte *******)auStack_1ec;
        pppppppbStack_220 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar14);
        pppppppbStack_228 = pppppppbVar14;
      }
      else {
LAB_0056010c:
        pppppppbVar14 = (byte *******)auStack_218;
        if ((long)pppppppbVar10 < 0) {
          auStack_218[0] = 0x2d;
          pppppppbVar10 = (byte *******)-(long)pppppppbVar10;
        }
        pppppppbStack_228 = pppppppbVar14;
        func_0x00574ad8();
        pppppppbStack_220 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar14);
        unaff_x22 = param_3;
      }
joined_r0x00560260:
      if (((ulong)pppppppbVar9 & 0xff00) != 0) goto LAB_00560154;
LAB_005601cc:
      pppppppbVar17 = pppppppbStack_220;
      pppppppbVar20 = pppppppbStack_228;
      pppppppbVar19 = pppppppbStack_220;
      unaff_x21 = pppppppbVar14;
      if (pppppppbVar10 != pppppppbVar14) {
        pppppppbVar12[2] = (byte ******)((long)pppppppbStack_220 + (long)pppppppbVar12[2]);
        unaff_x21 = pppppppbVar17;
        pppppppbVar9 = pppppppbVar20;
        if (pppppppbStack_220 <
            (byte *******)((long)pppppppbVar12 + (0x420 - (long)pppppppbVar12[3]))) {
          pppppppbVar19 = pppppppbStack_228;
          param_3 = pppppppbStack_220;
          _memcpy();
          pppppppbVar12[3] = (byte ******)((long)pppppppbVar17 + (long)pppppppbVar12[3]);
        }
        else {
          unaff_x22 = pppppppbVar12 + 4;
          (*(code *)pppppppbVar12[1])
                    (*pppppppbVar12,unaff_x22,(long)pppppppbVar12[3] - (long)unaff_x22);
          pppppppbVar12[3] = (byte ******)unaff_x22;
          pppppppbVar19 = pppppppbVar20;
          param_3 = pppppppbVar17;
          (*(code *)pppppppbVar12[1])(*pppppppbVar12);
        }
      }
      goto LAB_00560168;
    }
    pppppppbVar14 = (byte *******)&pppppppbStack_238;
    pppppppbVar19 = pppppppbVar12;
    FUN_00561f34((double)(long)pppppppbVar10);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return pppppppbVar14;
  }
  ___stack_chk_fail();
  uStack_248 = 0x560298;
  lStack_278 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_2c0 = SUB84(param_3,0);
  uVar7 = (uint)pppppppbVar19 & 0xff;
  pppppppbVar10 = pppppppbVar13;
  pppppppbStack_2c8 = pppppppbVar19;
  pppppppbStack_270 = unaff_x22;
  pppppppbStack_268 = unaff_x21;
  pppppppbStack_260 = pppppppbVar9;
  pppppppbStack_258 = pppppppbVar12;
  ppppuStack_250 = ppppuVar5;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) {
LAB_005603c0:
        pppppppbVar20 = appppppbStack_2a8;
        pppppppbStack_2b8 = pppppppbVar20;
        func_0x00574ad8();
        pppppppbStack_2b0 = (byte *******)((long)pppppppbVar14 - (long)pppppppbVar20);
        pppppppbVar17 = pppppppbVar14;
        unaff_x22 = param_3;
        pppppppbVar9 = pppppppbStack_260;
        pppppppbVar12 = pppppppbStack_258;
        ppppuVar5 = ppppuStack_250;
        goto joined_r0x005603ec;
      }
      param_3 = (byte *******)((ulong)param_3 & 0xffffffff);
      pcVar11 = (char *)pppppppbVar19;
      FUN_0055f0f4((int)(char)pppppppbVar14);
    }
    else {
      if (uVar7 == 4) {
        pppppppbVar20 = (byte *******)auStack_27c;
        do {
          pppppppbVar20 = (byte *******)((long)pppppppbVar20 + -1);
          *(byte *)pppppppbVar20 = (byte)pppppppbVar14 & 7 | 0x30;
          bVar1 = (byte *******)((long)&MACH_HEADER.cputype + 3) < pppppppbVar14;
          pppppppbVar14 = (byte *******)((ulong)pppppppbVar14 >> 3);
        } while (bVar1);
        goto LAB_00560458;
      }
      if (uVar7 == 5) goto LAB_005603c0;
      pppppppbVar17 = (byte *******)auStack_27c;
      pppppppbVar9 = (byte *******)(auStack_27c + 1);
      do {
        pppppppbVar12 = pppppppbVar9;
        uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar14 & 0xff) * 2);
        *(ushort *)((long)pppppppbVar12 + -3) = uVar2;
        bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < pppppppbVar14;
        pppppppbVar14 = (byte *******)((ulong)pppppppbVar14 >> 8);
        pppppppbVar9 = (byte *******)((long)pppppppbVar12 + -2);
      } while (bVar1);
      pppppppbVar20 = (byte *******)((long)pppppppbVar12 + -2);
      if ((uVar2 & 0xff) != 0x30) {
        pppppppbVar20 = (byte *******)((long)pppppppbVar12 + -3);
      }
      pppppppbStack_2b0 = (byte *******)((long)pppppppbVar17 - (long)pppppppbVar20);
      pppppppbStack_2b8 = pppppppbVar20;
      if (((ulong)pppppppbVar19 & 0xff00) != 0) goto LAB_005603f0;
LAB_00560468:
      pppppppbVar14 = pppppppbStack_2b0;
      pppppppbVar9 = pppppppbStack_2b8;
      pcVar11 = (char *)pppppppbStack_2b0;
      unaff_x21 = pppppppbVar20;
      if (pppppppbVar17 != pppppppbVar20) {
        pppppppbVar13[2] = (byte ******)((long)pppppppbStack_2b0 + (long)pppppppbVar13[2]);
        unaff_x21 = pppppppbVar14;
        pppppppbVar19 = pppppppbVar9;
        if (pppppppbStack_2b0 <
            (byte *******)((long)pppppppbVar13 + (0x420 - (long)pppppppbVar13[3]))) {
          pcVar11 = (char *)pppppppbStack_2b8;
          param_3 = pppppppbStack_2b0;
          _memcpy();
          pppppppbVar13[3] = (byte ******)((long)pppppppbVar14 + (long)pppppppbVar13[3]);
        }
        else {
          unaff_x22 = pppppppbVar13 + 4;
          (*(code *)pppppppbVar13[1])
                    (*pppppppbVar13,unaff_x22,(long)pppppppbVar13[3] - (long)unaff_x22);
          pppppppbVar13[3] = (byte ******)unaff_x22;
          pcVar11 = (char *)pppppppbVar9;
          param_3 = pppppppbVar14;
          (*(code *)pppppppbVar13[1])(*pppppppbVar13);
        }
      }
    }
LAB_00560404:
    pppppppbVar9 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 != 7) goto LAB_005603c0;
      pppppppbVar20 = (byte *******)auStack_27c;
      do {
        pppppppbVar20 = (byte *******)((long)pppppppbVar20 + -1);
        *(char *)pppppppbVar20 = "0123456789ABCDEF"[(ulong)pppppppbVar14 & 0xf];
        bVar1 = (byte *******)((long)&MACH_HEADER.filetype + 3) < pppppppbVar14;
        pppppppbVar14 = (byte *******)((ulong)pppppppbVar14 >> 4);
      } while (bVar1);
LAB_00560458:
      pppppppbVar17 = (byte *******)auStack_27c;
      pppppppbStack_2b0 = (byte *******)((long)pppppppbVar17 - (long)pppppppbVar20);
      pppppppbStack_2b8 = pppppppbVar20;
joined_r0x005603ec:
      pppppppbStack_260 = pppppppbVar9;
      pppppppbStack_258 = pppppppbVar12;
      ppppuStack_250 = ppppuVar5;
      if (((ulong)pppppppbVar19 & 0xff00) == 0) goto LAB_00560468;
LAB_005603f0:
      pppppppbVar10 = (byte *******)((ulong)param_3 & 0xffffffff);
      pcVar11 = (char *)pppppppbStack_2b0;
      param_3 = pppppppbVar19;
      FUN_0055f330(pppppppbStack_2b8);
      unaff_x21 = pppppppbVar20;
      goto LAB_00560404;
    }
    pppppppbVar9 = (byte *******)&pppppppbStack_2c8;
    pcVar11 = (char *)pppppppbVar13;
    FUN_00561f34((double)pppppppbVar14);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_278) {
    return pppppppbVar9;
  }
  ___stack_chk_fail();
  uStack_2d8 = 0x5604e0;
  auStack_30c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar21 = (ulong)pcVar11 & 0xff;
  pppppppbVar14 = pppppppbVar10;
  pppppppbStack_368 = pppppppbVar13;
  pppppppbStack_370 = pppppppbVar19;
  pppppppbStack_300 = unaff_x22;
  pppppppbStack_2f8 = unaff_x21;
  pppppppbStack_2f0 = pppppppbVar19;
  pppppppbStack_2e8 = pppppppbVar13;
  pppppuStack_2e0 = &ppppuStack_250;
  if (uVar21 == 0x11) {
    pppppppbStack_368 = pppppppbVar10;
    if (pppppppbVar9 == (byte *******)0x0) {
      ppppppbVar16 = pppppppbVar10[3];
      pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + 5);
      if ((byte *)((long)pppppppbVar10 + (0x420 - (long)ppppppbVar16)) < (byte *)0x6) {
        pppppppbStack_370 = pppppppbVar10 + 4;
        (*(code *)pppppppbVar10[1])
                  (*pppppppbVar10,pppppppbStack_370,(long)ppppppbVar16 - (long)pppppppbStack_370);
        pppppppbVar10[3] = (byte ******)pppppppbStack_370;
        pcVar11 = "(nil)";
        param_3 = (byte *******)((long)&MACH_HEADER.cputype + 1);
        (*(code *)pppppppbVar10[1])(*pppppppbVar10);
      }
      else {
        *(undefined1 *)((long)ppppppbVar16 + 4) = 0x29;
        *(undefined4 *)ppppppbVar16 = 0x6c696e28;
        pppppppbVar10[3] = (byte ******)((long)pppppppbVar10[3] + 5);
      }
    }
    else {
      pppppppbVar14 = (byte *******)((ulong)param_3 & 0xffffffff);
      puVar6 = auStack_30c + 1;
      do {
        puVar18 = puVar6;
        uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar9 & 0xff) * 2);
        *(ushort *)(puVar18 + -3) = uVar2;
        bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < pppppppbVar9;
        pppppppbVar9 = (byte *******)((ulong)pppppppbVar9 >> 8);
        puVar6 = puVar18 + -2;
      } while (bVar1);
      puStack_348 = puVar18 + -2;
      if ((uVar2 & 0xff) != 0x30) {
        puStack_348 = puVar18 + -3;
      }
      pppppppbVar9 = (byte *******)(auStack_30c + -(long)puStack_348);
      param_3 = (byte *******)pcVar11;
      pppppppbStack_340 = pppppppbVar9;
      FUN_0055f330();
      pcVar11 = (char *)pppppppbVar9;
    }
  }
  pppppppbVar9 = (byte *******)(ulong)(uVar21 == 0x11);
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_30c._4_8_) {
    return pppppppbVar9;
  }
  ___stack_chk_fail();
  if (((ulong)pcVar11 & 0xff) == 0x13) {
    *(int *)pppppppbVar14 = (int)(char)pppppppbVar9;
    return (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  if ((2L << ((ulong)pcVar11 & 0x3f) & 0x1fffaU) == 0) {
    return (byte *******)0x0;
  }
  uStack_3d0 = SUB84(param_3,0);
  pppppppbVar12 = (byte *******)((ulong)param_3 & 0xffffffff);
  uVar3 = (uint)(char)pppppppbVar9;
  pppppppbVar10 = (byte *******)(ulong)uVar3;
  pcStack_358 = FUN_0056061c;
  auStack_38c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar7 = (uint)pcVar11 & 0xff;
  pppppppbVar13 = pppppppbVar14;
  pppppppbStack_3d8 = (byte *******)pcVar11;
  pppppppbStack_380 = unaff_x22;
  uStack_378 = uVar21;
  ppppppuStack_360 = &pppppuStack_2e0;
  if (uVar7 < 7) {
    if (uVar7 < 4) {
      if (uVar7 - 2 < 2) goto LAB_0055ef78;
      FUN_0055f0f4(pppppppbVar10,pcVar11,(ulong)param_3 & 0xffffffff);
      pppppppbVar13 = pppppppbVar14;
    }
    else {
      if (uVar7 == 4) {
        pppppppbVar19 = (byte *******)auStack_38c;
        do {
          uVar7 = (uint)pppppppbVar10;
          pppppppbVar19 = (byte *******)((long)pppppppbVar19 + -1);
          *(byte *)pppppppbVar19 = (byte)pppppppbVar10 & 7 | 0x30;
          pppppppbVar10 = (byte *******)(ulong)(uVar7 >> 3 & 0x1f);
        } while (7 < (uVar7 & 0xff));
        goto LAB_0055f028;
      }
      if (uVar7 != 5) {
        auStack_38e = *(undefined1 (*) [2])(&UNK_00814a9b + ((ulong)pppppppbVar10 & 0xff) * 2);
        pppppppbVar19 = (byte *******)(auStack_38e + 1);
        if (((ushort)auStack_38e & 0xff) != 0x30) {
          pppppppbVar19 = (byte *******)auStack_38e;
        }
        pppppppbVar10 = (byte *******)auStack_38c;
        pppppppbStack_3c0 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar19);
        pppppppbStack_3c8 = pppppppbVar19;
        goto joined_r0x0055f0bc;
      }
      pppppppbVar19 = (byte *******)&uStack_3b8;
      pppppppbVar10 = (byte *******)(ulong)((uint)pppppppbVar9 & 0xff);
      pppppppbStack_3c8 = pppppppbVar19;
      func_0x005748b4(pppppppbVar10,pppppppbVar19);
      pppppppbStack_3c0 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar19);
      if (((ulong)pcVar11 & 0xff00) == 0) goto LAB_0055f038;
LAB_0055efbc:
      pppppppbVar9 = pppppppbStack_3c0;
      FUN_0055f330(pppppppbStack_3c8,pppppppbStack_3c0,pcVar11,pppppppbVar12,pppppppbVar14);
      pcVar11 = (char *)pppppppbVar9;
      pppppppbVar13 = pppppppbVar12;
    }
LAB_0055efd0:
    pppppppbVar9 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar7 - 8) {
      if (uVar7 == 7) {
        pppppppbVar19 = (byte *******)auStack_38c;
        do {
          uVar7 = (uint)pppppppbVar10;
          pppppppbVar19 = (byte *******)((long)pppppppbVar19 + -1);
          *(char *)pppppppbVar19 = "0123456789ABCDEF"[(ulong)pppppppbVar10 & 0xf];
          pppppppbVar10 = (byte *******)(ulong)(uVar7 >> 4 & 0xf);
        } while (0xf < (uVar7 & 0xff));
LAB_0055f028:
        pppppppbVar10 = (byte *******)auStack_38c;
        pppppppbStack_3c0 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar19);
        pppppppbStack_3c8 = pppppppbVar19;
      }
      else {
LAB_0055ef78:
        pppppppbVar19 = (byte *******)&uStack_3b8;
        pppppppbVar9 = pppppppbVar19;
        if ((int)uVar3 < 0) {
          pppppppbVar9 = appppppbStack_3b7;
          uStack_3b8 = 0x2d;
          pppppppbVar10 = (byte *******)(ulong)-uVar3;
        }
        pppppppbStack_3c8 = pppppppbVar19;
        func_0x005748b4(pppppppbVar10,pppppppbVar9);
        pppppppbStack_3c0 = (byte *******)((long)pppppppbVar10 - (long)pppppppbVar19);
      }
joined_r0x0055f0bc:
      if (((ulong)pcVar11 & 0xff00) != 0) goto LAB_0055efbc;
LAB_0055f038:
      pppppppbVar12 = pppppppbStack_3c0;
      pppppppbVar9 = pppppppbStack_3c8;
      pcVar11 = (char *)pppppppbStack_3c0;
      if (pppppppbVar10 != pppppppbVar19) {
        ppppppbVar16 = pppppppbVar14[3];
        pppppppbVar14[2] = (byte ******)((long)pppppppbStack_3c0 + (long)pppppppbVar14[2]);
        if (pppppppbStack_3c0 < (byte *******)((long)pppppppbVar14 + (0x420 - (long)ppppppbVar16)))
        {
          pcVar11 = (char *)pppppppbStack_3c8;
          _memcpy(ppppppbVar16,pppppppbStack_3c8,pppppppbStack_3c0);
          pppppppbVar14[3] = (byte ******)((long)pppppppbVar12 + (long)pppppppbVar14[3]);
        }
        else {
          pppppppbVar10 = pppppppbVar14 + 4;
          (*(code *)pppppppbVar14[1])
                    (*pppppppbVar14,pppppppbVar10,(long)ppppppbVar16 - (long)pppppppbVar10);
          pppppppbVar14[3] = (byte ******)pppppppbVar10;
          (*(code *)pppppppbVar14[1])(*pppppppbVar14,pppppppbVar9,pppppppbVar12);
          pcVar11 = (char *)pppppppbVar9;
        }
      }
      goto LAB_0055efd0;
    }
    pppppppbVar9 = (byte *******)&pppppppbStack_3d8;
    FUN_00561f34((double)(int)uVar3);
    pcVar11 = (char *)pppppppbVar14;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_38c._4_8_) {
    return pppppppbVar9;
  }
  ___stack_chk_fail();
  uVar15 = ((ulong)pcVar11 & ((long)pcVar11 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  uVar21 = 0;
  if (uVar15 != 0) {
    uVar21 = uVar15 - 1;
  }
  if (((long)pcVar11 < 0x200000000) || (((uint)pcVar11 >> 8 & 1) != 0)) {
    pppppppbVar10 = (byte *******)pppppppbVar13[3];
    pppppppbVar13[2] = (byte ******)((long)pppppppbVar13[2] + 1);
    if (pppppppbVar13 + 0x84 != pppppppbVar10) goto LAB_0055f1ac;
  }
  else {
    pppppppbVar14 = (byte *******)pppppppbVar13[3];
    pppppppbVar13[2] = (byte ******)((long)pppppppbVar13[2] + uVar21);
    pppppppbVar10 = pppppppbVar13 + 0x84;
    uVar23 = (long)pppppppbVar10 - (long)pppppppbVar14;
    uVar15 = uVar21 - uVar23;
    uVar22 = uVar21;
    if (uVar23 <= uVar21 && uVar15 != 0) {
      pppppppbVar12 = pppppppbVar13 + 4;
      pppppppbVar19 = pppppppbVar10;
      if (pppppppbVar10 != pppppppbVar14) {
        _memset(pppppppbVar14,0x20,uVar23);
        ppppppbVar16 = pppppppbVar13[3];
        pppppppbVar13[3] = (byte ******)((long)ppppppbVar16 + uVar23);
        pppppppbVar19 = (byte *******)((long)ppppppbVar16 + uVar23);
      }
      (*(code *)pppppppbVar13[1])
                (*pppppppbVar13,pppppppbVar12,(long)pppppppbVar19 - (long)pppppppbVar12);
      pppppppbVar13[3] = (byte ******)pppppppbVar12;
      for (; uVar22 = uVar15, pppppppbVar14 = pppppppbVar12, 0x400 < uVar15; uVar15 = uVar15 - 0x400
          ) {
        _memset(pppppppbVar12,0x20,0x400);
        pppppppbVar13[3] = (byte ******)pppppppbVar10;
        (*(code *)pppppppbVar13[1])(*pppppppbVar13,pppppppbVar12,0x400);
        pppppppbVar13[3] = (byte ******)pppppppbVar12;
      }
    }
    _memset(pppppppbVar14,0x20,uVar22);
    pppppppbVar10 = (byte *******)((long)pppppppbVar13[3] + uVar22);
    pppppppbVar13[2] = (byte ******)((long)pppppppbVar13[2] + 1);
    pppppppbVar13[3] = (byte ******)pppppppbVar10;
    if (pppppppbVar13 + 0x84 != pppppppbVar10) goto LAB_0055f1ac;
  }
  pppppppbVar10 = pppppppbVar13 + 4;
  (*(code *)pppppppbVar13[1])(*pppppppbVar13,pppppppbVar10,0x400);
  pppppppbVar13[3] = (byte ******)pppppppbVar10;
LAB_0055f1ac:
  pppppppbVar14 = pppppppbVar13 + 0x84;
  *(byte *)pppppppbVar10 = (byte)pppppppbVar9;
  pppppppbVar9 = (byte *******)((long)pppppppbVar13[3] + 1);
  pppppppbVar13[3] = (byte ******)pppppppbVar9;
  if ((0x1ffffffff < (long)pcVar11) && (((uint)pcVar11 >> 8 & 1) != 0)) {
    pppppppbVar13[2] = (byte ******)((long)pppppppbVar13[2] + uVar21);
    uVar15 = (long)pppppppbVar14 - (long)pppppppbVar9;
    if (uVar15 <= uVar21 && uVar21 - uVar15 != 0) {
      pppppppbVar10 = pppppppbVar13 + 4;
      pppppppbVar12 = pppppppbVar14;
      if (pppppppbVar14 != pppppppbVar9) {
        _memset(pppppppbVar9,0x20,uVar15);
        ppppppbVar16 = pppppppbVar13[3];
        pppppppbVar13[3] = (byte ******)((long)ppppppbVar16 + uVar15);
        pppppppbVar12 = (byte *******)((long)ppppppbVar16 + uVar15);
      }
      (*(code *)pppppppbVar13[1])
                (*pppppppbVar13,pppppppbVar10,(long)pppppppbVar12 - (long)pppppppbVar10);
      pppppppbVar13[3] = (byte ******)pppppppbVar10;
      for (uVar21 = uVar21 - uVar15; pppppppbVar9 = pppppppbVar10, 0x400 < uVar21;
          uVar21 = uVar21 - 0x400) {
        _memset(pppppppbVar10,0x20,0x400);
        pppppppbVar13[3] = (byte ******)pppppppbVar14;
        (*(code *)pppppppbVar13[1])(*pppppppbVar13,pppppppbVar10,0x400);
        pppppppbVar13[3] = (byte ******)pppppppbVar10;
      }
    }
    _memset(pppppppbVar9,0x20,uVar21);
    pppppppbVar13[3] = (byte ******)((long)pppppppbVar13[3] + uVar21);
  }
  return pppppppbVar9;
}



/* Entry: 0056061c; end: 00560737;  */

byte ** FUN_0056061c(byte param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte **ppbVar1;
  uint uVar2;
  uint uVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte **ppbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte **ppbVar16;
  ulong uVar17;
  byte *pbStack_88;
  uint uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte bStack_68;
  byte abStack_67 [41];
  undefined2 uStack_3e;
  byte abStack_3c [4];
  long lStack_38;
  
  if (((ulong)param_2 & 0xff) == 0x13) {
    *(int *)param_4 = (int)(char)param_1;
    return (byte **)((long)&MACH_HEADER.magic + 1);
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x1fffaU) == 0) {
    return (byte **)0x0;
  }
  pbVar7 = (byte *)(ulong)param_3;
  uVar2 = (uint)(char)param_1;
  pbVar5 = (byte *)(ulong)uVar2;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)param_2 & 0xff;
  pbVar8 = param_4;
  pbStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar3 < 7) {
    if (uVar3 < 4) {
      if (uVar3 - 2 < 2) goto LAB_0055ef78;
      FUN_0055f0f4(pbVar5,param_2,param_3);
      pbVar6 = param_2;
      pbVar8 = param_4;
    }
    else {
      if (uVar3 == 4) {
        pbVar14 = abStack_3c;
        do {
          uVar3 = (uint)pbVar5;
          pbVar14 = pbVar14 + -1;
          *pbVar14 = (byte)pbVar5 & 7 | 0x30;
          pbVar5 = (byte *)(ulong)(uVar3 >> 3 & 0x1f);
        } while (7 < (uVar3 & 0xff));
        goto LAB_0055f028;
      }
      if (uVar3 != 5) {
        uStack_3e = *(ushort *)(&UNK_00814a9b + ((ulong)pbVar5 & 0xff) * 2);
        pbVar14 = (byte *)((long)&uStack_3e + 1);
        if ((uStack_3e & 0xff) != 0x30) {
          pbVar14 = (byte *)&uStack_3e;
        }
        pbVar5 = abStack_3c;
        pbStack_70 = pbVar5 + -(long)pbVar14;
        pbStack_78 = pbVar14;
        goto joined_r0x0055f0bc;
      }
      pbVar14 = &bStack_68;
      pbVar5 = (byte *)(ulong)param_1;
      pbStack_78 = pbVar14;
      func_0x005748b4(pbVar5,pbVar14);
      pbStack_70 = pbVar5 + -(long)pbVar14;
      if (((ulong)param_2 & 0xff00) == 0) goto LAB_0055f038;
LAB_0055efbc:
      pbVar6 = pbStack_70;
      FUN_0055f330(pbStack_78,pbStack_70,param_2,pbVar7,param_4);
      pbVar8 = pbVar7;
    }
LAB_0055efd0:
    ppbVar4 = (byte **)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar3 - 8) {
      if (uVar3 == 7) {
        pbVar14 = abStack_3c;
        do {
          uVar3 = (uint)pbVar5;
          pbVar14 = pbVar14 + -1;
          *pbVar14 = "0123456789ABCDEF"[(ulong)pbVar5 & 0xf];
          pbVar5 = (byte *)(ulong)(uVar3 >> 4 & 0xf);
        } while (0xf < (uVar3 & 0xff));
LAB_0055f028:
        pbVar5 = abStack_3c;
        pbStack_70 = pbVar5 + -(long)pbVar14;
        pbStack_78 = pbVar14;
      }
      else {
LAB_0055ef78:
        pbVar14 = &bStack_68;
        pbVar6 = pbVar14;
        if ((int)uVar2 < 0) {
          pbVar6 = abStack_67;
          bStack_68 = 0x2d;
          pbVar5 = (byte *)(ulong)-uVar2;
        }
        pbStack_78 = pbVar14;
        func_0x005748b4(pbVar5,pbVar6);
        pbStack_70 = pbVar5 + -(long)pbVar14;
      }
joined_r0x0055f0bc:
      if (((ulong)param_2 & 0xff00) != 0) goto LAB_0055efbc;
LAB_0055f038:
      pbVar11 = pbStack_70;
      pbVar7 = pbStack_78;
      pbVar6 = pbStack_70;
      if (pbVar5 != pbVar14) {
        lVar10 = *(long *)(param_4 + 0x18);
        *(byte **)(param_4 + 0x10) = pbStack_70 + *(long *)(param_4 + 0x10);
        if (pbStack_70 < param_4 + (0x420 - lVar10)) {
          pbVar6 = pbStack_78;
          _memcpy(lVar10,pbStack_78,pbStack_70);
          *(byte **)(param_4 + 0x18) = pbVar11 + *(long *)(param_4 + 0x18);
        }
        else {
          pbVar5 = param_4 + 0x20;
          (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pbVar5,lVar10 - (long)pbVar5);
          *(byte **)(param_4 + 0x18) = pbVar5;
          (**(code **)(param_4 + 8))(*(undefined8 *)param_4,pbVar7,pbVar11);
          pbVar6 = pbVar7;
        }
      }
      goto LAB_0055efd0;
    }
    ppbVar4 = &pbStack_88;
    FUN_00561f34((double)(int)uVar2);
    pbVar6 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return ppbVar4;
  }
  ___stack_chk_fail();
  uVar9 = ((ulong)pbVar6 & ((long)pbVar6 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  uVar13 = 0;
  if (uVar9 != 0) {
    uVar13 = uVar9 - 1;
  }
  if (((long)pbVar6 < 0x200000000) || (((uint)pbVar6 >> 8 & 1) != 0)) {
    pbVar5 = *(byte **)(pbVar8 + 0x18);
    *(long *)(pbVar8 + 0x10) = *(long *)(pbVar8 + 0x10) + 1;
    if (pbVar8 + 0x420 != pbVar5) goto LAB_0055f1ac;
  }
  else {
    pbVar7 = *(byte **)(pbVar8 + 0x18);
    *(ulong *)(pbVar8 + 0x10) = *(long *)(pbVar8 + 0x10) + uVar13;
    pbVar5 = pbVar8 + 0x420;
    uVar17 = (long)pbVar5 - (long)pbVar7;
    uVar9 = uVar13 - uVar17;
    uVar15 = uVar13;
    if (uVar17 <= uVar13 && uVar9 != 0) {
      pbVar14 = pbVar8 + 0x20;
      pbVar11 = pbVar5;
      if (pbVar5 != pbVar7) {
        _memset(pbVar7,0x20,uVar17);
        lVar10 = *(long *)(pbVar8 + 0x18);
        *(byte **)(pbVar8 + 0x18) = (byte *)(lVar10 + uVar17);
        pbVar11 = (byte *)(lVar10 + uVar17);
      }
      (**(code **)(pbVar8 + 8))(*(undefined8 *)pbVar8,pbVar14,(long)pbVar11 - (long)pbVar14);
      *(byte **)(pbVar8 + 0x18) = pbVar14;
      for (; uVar15 = uVar9, pbVar7 = pbVar14, 0x400 < uVar9; uVar9 = uVar9 - 0x400) {
        _memset(pbVar14,0x20,0x400);
        *(byte **)(pbVar8 + 0x18) = pbVar5;
        (**(code **)(pbVar8 + 8))(*(undefined8 *)pbVar8,pbVar14,0x400);
        *(byte **)(pbVar8 + 0x18) = pbVar14;
      }
    }
    _memset(pbVar7,0x20,uVar15);
    pbVar5 = (byte *)(*(long *)(pbVar8 + 0x18) + uVar15);
    *(long *)(pbVar8 + 0x10) = *(long *)(pbVar8 + 0x10) + 1;
    *(byte **)(pbVar8 + 0x18) = pbVar5;
    if (pbVar8 + 0x420 != pbVar5) goto LAB_0055f1ac;
  }
  pbVar5 = pbVar8 + 0x20;
  (**(code **)(pbVar8 + 8))(*(undefined8 *)pbVar8,pbVar5,0x400);
  *(byte **)(pbVar8 + 0x18) = pbVar5;
LAB_0055f1ac:
  ppbVar16 = (byte **)(pbVar8 + 0x420);
  *pbVar5 = (byte)ppbVar4;
  ppbVar4 = (byte **)(*(long *)(pbVar8 + 0x18) + 1);
  *(byte ***)(pbVar8 + 0x18) = ppbVar4;
  if ((0x1ffffffff < (long)pbVar6) && (((uint)pbVar6 >> 8 & 1) != 0)) {
    *(ulong *)(pbVar8 + 0x10) = *(long *)(pbVar8 + 0x10) + uVar13;
    uVar9 = (long)ppbVar16 - (long)ppbVar4;
    if (uVar9 <= uVar13 && uVar13 - uVar9 != 0) {
      ppbVar1 = (byte **)(pbVar8 + 0x20);
      ppbVar12 = ppbVar16;
      if (ppbVar16 != ppbVar4) {
        _memset(ppbVar4,0x20,uVar9);
        lVar10 = *(long *)(pbVar8 + 0x18);
        *(byte ***)(pbVar8 + 0x18) = (byte **)(lVar10 + uVar9);
        ppbVar12 = (byte **)(lVar10 + uVar9);
      }
      (**(code **)(pbVar8 + 8))(*(undefined8 *)pbVar8,ppbVar1,(long)ppbVar12 - (long)ppbVar1);
      *(byte ***)(pbVar8 + 0x18) = ppbVar1;
      for (uVar13 = uVar13 - uVar9; ppbVar4 = ppbVar1, 0x400 < uVar13; uVar13 = uVar13 - 0x400) {
        _memset(ppbVar1,0x20,0x400);
        *(byte ***)(pbVar8 + 0x18) = ppbVar16;
        (**(code **)(pbVar8 + 8))(*(undefined8 *)pbVar8,ppbVar1,0x400);
        *(byte ***)(pbVar8 + 0x18) = ppbVar1;
      }
    }
    _memset(ppbVar4,0x20,uVar13);
    *(ulong *)(pbVar8 + 0x18) = *(long *)(pbVar8 + 0x18) + uVar13;
  }
  return ppbVar4;
}



/* Entry: 00560738; end: 00560ccf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00560738(byte *******param_1,byte *******param_2,uint param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  uint extraout_w8;
  uint uVar6;
  byte *******pppppppbVar7;
  byte *******unaff_x20;
  ulong unaff_x21;
  byte *******pppppppbVar8;
  double dVar9;
  byte *******pppppppbStack_88;
  uint uStack_80;
  byte *******pppppppbStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [42];
  undefined2 uStack_3e;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (((ulong)param_2 & 0xff) == 0x13) {
    if ((long)param_1 < -0x7fffffff) {
      param_1 = (byte *******)0xffffffff80000000;
    }
    if (0x7ffffffe < (long)param_1) {
      param_1 = (byte *******)0x7fffffff;
    }
    *(int *)param_4 = (int)param_1;
    goto LAB_005608b4;
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) == 0) {
    param_1 = (byte *******)0x0;
    param_2 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  }
  else {
    unaff_x21 = (ulong)param_3;
    uVar6 = (uint)param_2 & 0xff;
    pppppppbStack_88 = param_2;
    uStack_80 = param_3;
    if (uVar6 < 7) goto LAB_005607d8;
    if (7 < uVar6 - 8) {
      if (uVar6 != 7) goto LAB_00560860;
      pppppppbVar8 = (byte *******)auStack_3c;
      do {
        pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
        *(char *)pppppppbVar8 = "0123456789ABCDEF"[(ulong)param_1 & 0xf];
        bVar1 = param_1 <= (byte *******)((long)&MACH_HEADER.filetype + 3);
        param_1 = (byte *******)((ulong)param_1 >> 4);
        if (bVar1) goto LAB_00560908;
      } while( true );
    }
    dVar9 = (double)(long)param_1;
    param_1 = (byte *******)&pppppppbStack_88;
    FUN_00561f34(dVar9,param_1,param_4);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  }
  do {
    ___stack_chk_fail();
    uVar6 = extraout_w8;
LAB_005607d8:
    if ((int)uVar6 < 4) {
      if (uVar6 - 2 < 2) {
LAB_00560860:
        if ((long)param_1 < 0) {
          auStack_68[0] = 0x2d;
          param_1 = (byte *******)-(long)param_1;
        }
LAB_00560888:
        pppppppbVar8 = (byte *******)auStack_68;
        pppppppbStack_78 = pppppppbVar8;
        func_0x00574ad8();
        uStack_70 = (long)param_1 - (long)pppppppbVar8;
        if (((ulong)param_2 & 0xff00) == 0) goto LAB_00560918;
LAB_005608a0:
        FUN_0055f330(pppppppbStack_78,uStack_70,param_2,unaff_x21,param_4);
        unaff_x20 = param_2;
      }
      else {
        FUN_0055f0f4((int)(char)param_1,param_2,unaff_x21,param_4);
        unaff_x20 = param_2;
      }
    }
    else {
      if (uVar6 == 4) {
        pppppppbVar8 = (byte *******)auStack_3c;
        do {
          pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
          *(byte *)pppppppbVar8 = (byte)param_1 & 7 | 0x30;
          bVar1 = (byte *******)((long)&MACH_HEADER.cputype + 3) < param_1;
          param_1 = (byte *******)((ulong)param_1 >> 3);
        } while (bVar1);
LAB_00560908:
        uStack_70 = (long)auStack_3c - (long)pppppppbVar8;
      }
      else {
        if (uVar6 == 5) goto LAB_00560888;
        pppppppbVar8 = (byte *******)(auStack_3c + 1);
        do {
          pppppppbVar7 = pppppppbVar8;
          uVar4 = *(ushort *)(&UNK_00814a9b + ((ulong)param_1 & 0xff) * 2);
          *(ushort *)((long)pppppppbVar7 + -3) = uVar4;
          bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < param_1;
          param_1 = (byte *******)((ulong)param_1 >> 8);
          pppppppbVar8 = (byte *******)((long)pppppppbVar7 + -2);
        } while (bVar1);
        if ((uVar4 & 0xff) != 0x30) {
          pppppppbVar8 = (byte *******)((long)pppppppbVar7 + -3);
        }
        uStack_70 = (long)auStack_3c - (long)pppppppbVar8;
      }
      param_1 = (byte *******)auStack_3c;
      pppppppbStack_78 = pppppppbVar8;
      if (((ulong)param_2 & 0xff00) != 0) goto LAB_005608a0;
LAB_00560918:
      uVar5 = uStack_70;
      pppppppbVar7 = pppppppbStack_78;
      unaff_x20 = param_2;
      if (param_1 != pppppppbVar8) {
        lVar3 = param_4[3];
        param_4[2] = param_4[2] + uStack_70;
        unaff_x20 = pppppppbVar7;
        unaff_x21 = uVar5;
        if (uStack_70 < (ulong)((long)param_4 + (0x420 - lVar3))) {
          _memcpy(lVar3,pppppppbStack_78,uStack_70);
          param_4[3] = param_4[3] + uVar5;
        }
        else {
          puVar2 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar2,lVar3 - (long)puVar2);
          param_4[3] = puVar2;
          (*(code *)param_4[1])(*param_4,pppppppbVar7,uVar5);
        }
      }
    }
LAB_005608b4:
    param_1 = (byte *******)((long)&MACH_HEADER.magic + 1);
    param_2 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 00560cd0; end: 00560d73;  */

/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_00560cd0(byte *******param_1,byte *******param_2,uint param_3,byte *******param_4)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *******pppppppbVar6;
  char *pcVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  ulong uVar12;
  byte ******ppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  undefined1 *puVar16;
  byte *******pppppppbVar17;
  ulong uVar18;
  byte *******unaff_x21;
  ulong uVar19;
  byte *******unaff_x22;
  ulong uVar20;
  byte *******pppppppbStack_228;
  undefined4 uStack_220;
  byte *******pppppppbStack_218;
  byte *******pppppppbStack_210;
  undefined1 uStack_208;
  byte ******appppppbStack_207 [5];
  undefined1 auStack_1de [2];
  undefined1 auStack_1dc [12];
  byte *******pppppppbStack_1d0;
  ulong uStack_1c8;
  byte *******pppppppbStack_1c0;
  byte *******pppppppbStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined1 *puStack_198;
  byte *******pppppppbStack_190;
  ushort uStack_15e;
  undefined1 auStack_15c [12];
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  byte *******pppppppbStack_118;
  undefined4 uStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte ******appppppbStack_f8 [5];
  undefined2 uStack_ce;
  undefined1 auStack_cc [4];
  long lStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  byte *******pppppppbStack_88;
  uint uStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  undefined1 uStack_68;
  byte ******appppppbStack_67 [5];
  undefined2 uStack_3e;
  undefined1 auStack_3c [4];
  long lStack_38;
  
  if (((ulong)param_2 & 0xff) == 0x13) {
    if ((long)param_1 < -0x7fffffff) {
      param_1 = (byte *******)0xffffffff80000000;
    }
    if (0x7ffffffe < (long)param_1) {
      param_1 = (byte *******)0x7fffffff;
    }
    *(int *)param_4 = (int)param_1;
    return (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  if ((2L << ((ulong)param_2 & 0x3f) & 0x9fffaU) == 0) {
    return (byte *******)0x0;
  }
  pppppppbVar9 = (byte *******)(ulong)param_3;
  puVar4 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = (uint)param_2 & 0xff;
  pppppppbVar11 = param_4;
  pppppppbStack_88 = param_2;
  uStack_80 = param_3;
  if (uVar5 < 7) {
    if (uVar5 < 4) {
      if (uVar5 - 2 < 2) goto LAB_0056010c;
      pppppppbVar17 = (byte *******)(ulong)param_3;
      pppppppbVar6 = param_2;
      pppppppbVar9 = param_4;
      FUN_0055f0f4((int)(char)param_1);
    }
    else {
      if (uVar5 == 4) {
        unaff_x21 = (byte *******)auStack_3c;
        do {
          unaff_x21 = (byte *******)((long)unaff_x21 + -1);
          *(byte *)unaff_x21 = (byte)param_1 & 7 | 0x30;
          bVar1 = (byte *******)((long)&MACH_HEADER.cputype + 3) < param_1;
          param_1 = (byte *******)((ulong)param_1 >> 3);
        } while (bVar1);
        goto LAB_005601bc;
      }
      if (uVar5 != 5) {
        pppppppbVar6 = (byte *******)(auStack_3c + 1);
        do {
          pppppppbVar17 = pppppppbVar6;
          uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)param_1 & 0xff) * 2);
          *(ushort *)((long)pppppppbVar17 + -3) = uVar2;
          bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < param_1;
          param_1 = (byte *******)((ulong)param_1 >> 8);
          pppppppbVar6 = (byte *******)((long)pppppppbVar17 + -2);
        } while (bVar1);
        unaff_x21 = (byte *******)((long)pppppppbVar17 + -2);
        if ((uVar2 & 0xff) != 0x30) {
          unaff_x21 = (byte *******)((long)pppppppbVar17 + -3);
        }
        pppppppbStack_70 = (byte *******)((long)auStack_3c - (long)unaff_x21);
        param_1 = (byte *******)auStack_3c;
        pppppppbStack_78 = unaff_x21;
        goto joined_r0x00560260;
      }
      unaff_x21 = (byte *******)&uStack_68;
      pppppppbStack_78 = unaff_x21;
      func_0x00574ad8(param_1,unaff_x21);
      pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
      unaff_x22 = pppppppbVar9;
      if (((ulong)param_2 & 0xff00) == 0) goto LAB_005601cc;
LAB_00560154:
      pppppppbVar6 = pppppppbStack_70;
      pppppppbVar17 = param_2;
      FUN_0055f330(pppppppbStack_78);
    }
LAB_00560168:
    pppppppbVar11 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar5 - 8) {
      if (uVar5 == 7) {
        unaff_x21 = (byte *******)auStack_3c;
        do {
          unaff_x21 = (byte *******)((long)unaff_x21 + -1);
          *(char *)unaff_x21 = "0123456789ABCDEF"[(ulong)param_1 & 0xf];
          bVar1 = (byte *******)((long)&MACH_HEADER.filetype + 3) < param_1;
          param_1 = (byte *******)((ulong)param_1 >> 4);
        } while (bVar1);
LAB_005601bc:
        param_1 = (byte *******)auStack_3c;
        pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
        pppppppbStack_78 = unaff_x21;
      }
      else {
LAB_0056010c:
        unaff_x21 = (byte *******)&uStack_68;
        pppppppbVar6 = unaff_x21;
        if ((long)param_1 < 0) {
          uStack_68 = 0x2d;
          param_1 = (byte *******)-(long)param_1;
          pppppppbVar6 = appppppbStack_67;
        }
        pppppppbStack_78 = unaff_x21;
        func_0x00574ad8(param_1,pppppppbVar6);
        pppppppbStack_70 = (byte *******)((long)param_1 - (long)unaff_x21);
        unaff_x22 = pppppppbVar9;
      }
joined_r0x00560260:
      if (((ulong)param_2 & 0xff00) != 0) goto LAB_00560154;
LAB_005601cc:
      pppppppbVar8 = pppppppbStack_70;
      pppppppbVar10 = pppppppbStack_78;
      pppppppbVar6 = pppppppbStack_70;
      pppppppbVar17 = pppppppbVar9;
      pppppppbVar9 = pppppppbVar11;
      if (param_1 != unaff_x21) {
        param_4[2] = (byte ******)((long)pppppppbStack_70 + (long)param_4[2]);
        unaff_x21 = pppppppbVar8;
        param_2 = pppppppbVar10;
        if (pppppppbStack_70 < (byte *******)((long)param_4 + (0x420 - (long)param_4[3]))) {
          pppppppbVar6 = pppppppbStack_78;
          pppppppbVar17 = pppppppbStack_70;
          _memcpy();
          param_4[3] = (byte ******)((long)pppppppbVar8 + (long)param_4[3]);
          pppppppbVar9 = pppppppbVar11;
        }
        else {
          unaff_x22 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,unaff_x22,(long)param_4[3] - (long)unaff_x22);
          param_4[3] = (byte ******)unaff_x22;
          pppppppbVar6 = pppppppbVar10;
          pppppppbVar17 = pppppppbVar8;
          (*(code *)param_4[1])(*param_4);
          pppppppbVar9 = pppppppbVar11;
        }
      }
      goto LAB_00560168;
    }
    pppppppbVar11 = (byte *******)&pppppppbStack_88;
    pppppppbVar6 = param_4;
    pppppppbVar10 = param_4;
    FUN_00561f34((double)(long)param_1);
    pppppppbVar17 = pppppppbVar9;
    pppppppbVar9 = pppppppbVar10;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pppppppbVar11;
  }
  ___stack_chk_fail();
  uStack_98 = 0x560298;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_110 = SUB84(pppppppbVar17,0);
  uVar5 = (uint)pppppppbVar6 & 0xff;
  pppppppbVar10 = pppppppbVar9;
  pppppppbStack_118 = pppppppbVar6;
  pppppppbStack_c0 = unaff_x22;
  pppppppbStack_b8 = unaff_x21;
  pppppppbStack_b0 = param_2;
  pppppppbStack_a8 = param_4;
  puStack_a0 = puVar4;
  if (uVar5 < 7) {
    if (uVar5 < 4) {
      if (uVar5 - 2 < 2) {
LAB_005603c0:
        pppppppbVar8 = appppppbStack_f8;
        pppppppbStack_108 = pppppppbVar8;
        func_0x00574ad8();
        pppppppbStack_100 = (byte *******)((long)pppppppbVar11 - (long)pppppppbVar8);
        pppppppbVar14 = pppppppbVar11;
        unaff_x22 = pppppppbVar17;
        puVar4 = puStack_a0;
        goto joined_r0x005603ec;
      }
      pppppppbVar17 = (byte *******)((ulong)pppppppbVar17 & 0xffffffff);
      pcVar7 = (char *)pppppppbVar6;
      FUN_0055f0f4((int)(char)pppppppbVar11);
    }
    else {
      if (uVar5 == 4) {
        pppppppbVar8 = (byte *******)auStack_cc;
        do {
          pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
          *(byte *)pppppppbVar8 = (byte)pppppppbVar11 & 7 | 0x30;
          bVar1 = (byte *******)((long)&MACH_HEADER.cputype + 3) < pppppppbVar11;
          pppppppbVar11 = (byte *******)((ulong)pppppppbVar11 >> 3);
        } while (bVar1);
        goto LAB_00560458;
      }
      if (uVar5 == 5) goto LAB_005603c0;
      pppppppbVar14 = (byte *******)auStack_cc;
      pppppppbVar8 = (byte *******)(auStack_cc + 1);
      do {
        pppppppbVar15 = pppppppbVar8;
        uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar11 & 0xff) * 2);
        *(ushort *)((long)pppppppbVar15 + -3) = uVar2;
        bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < pppppppbVar11;
        pppppppbVar11 = (byte *******)((ulong)pppppppbVar11 >> 8);
        pppppppbVar8 = (byte *******)((long)pppppppbVar15 + -2);
      } while (bVar1);
      if ((uVar2 & 0xff) != 0x30) {
        pppppppbVar8 = (byte *******)((long)pppppppbVar15 + -3);
      }
      pppppppbStack_100 = (byte *******)((long)pppppppbVar14 - (long)pppppppbVar8);
      pppppppbStack_108 = pppppppbVar8;
      if (((ulong)pppppppbVar6 & 0xff00) != 0) goto LAB_005603f0;
LAB_00560468:
      pppppppbVar15 = pppppppbStack_100;
      pppppppbVar11 = pppppppbStack_108;
      pcVar7 = (char *)pppppppbStack_100;
      unaff_x21 = pppppppbVar8;
      if (pppppppbVar14 != pppppppbVar8) {
        pppppppbVar9[2] = (byte ******)((long)pppppppbStack_100 + (long)pppppppbVar9[2]);
        unaff_x21 = pppppppbVar15;
        pppppppbVar6 = pppppppbVar11;
        if (pppppppbStack_100 < (byte *******)((long)pppppppbVar9 + (0x420 - (long)pppppppbVar9[3]))
           ) {
          pcVar7 = (char *)pppppppbStack_108;
          pppppppbVar17 = pppppppbStack_100;
          _memcpy();
          pppppppbVar9[3] = (byte ******)((long)pppppppbVar15 + (long)pppppppbVar9[3]);
        }
        else {
          unaff_x22 = pppppppbVar9 + 4;
          (*(code *)pppppppbVar9[1])
                    (*pppppppbVar9,unaff_x22,(long)pppppppbVar9[3] - (long)unaff_x22);
          pppppppbVar9[3] = (byte ******)unaff_x22;
          pcVar7 = (char *)pppppppbVar11;
          pppppppbVar17 = pppppppbVar15;
          (*(code *)pppppppbVar9[1])(*pppppppbVar9);
        }
      }
    }
LAB_00560404:
    pppppppbVar8 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar5 - 8) {
      if (uVar5 != 7) goto LAB_005603c0;
      pppppppbVar8 = (byte *******)auStack_cc;
      do {
        pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
        *(char *)pppppppbVar8 = "0123456789ABCDEF"[(ulong)pppppppbVar11 & 0xf];
        bVar1 = (byte *******)((long)&MACH_HEADER.filetype + 3) < pppppppbVar11;
        pppppppbVar11 = (byte *******)((ulong)pppppppbVar11 >> 4);
      } while (bVar1);
LAB_00560458:
      pppppppbVar14 = (byte *******)auStack_cc;
      pppppppbStack_100 = (byte *******)((long)pppppppbVar14 - (long)pppppppbVar8);
      pppppppbStack_108 = pppppppbVar8;
joined_r0x005603ec:
      puStack_a0 = puVar4;
      if (((ulong)pppppppbVar6 & 0xff00) == 0) goto LAB_00560468;
LAB_005603f0:
      pppppppbVar10 = (byte *******)((ulong)pppppppbVar17 & 0xffffffff);
      pcVar7 = (char *)pppppppbStack_100;
      pppppppbVar17 = pppppppbVar6;
      FUN_0055f330(pppppppbStack_108);
      unaff_x21 = pppppppbVar8;
      goto LAB_00560404;
    }
    pppppppbVar8 = (byte *******)&pppppppbStack_118;
    pcVar7 = (char *)pppppppbVar9;
    FUN_00561f34((double)pppppppbVar11);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pppppppbVar8;
  }
  ___stack_chk_fail();
  uStack_128 = 0x5604e0;
  auStack_15c._4_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar18 = (ulong)pcVar7 & 0xff;
  pppppppbVar11 = pppppppbVar10;
  pppppppbStack_1b8 = pppppppbVar9;
  pppppppbStack_1c0 = pppppppbVar6;
  pppppppbStack_150 = unaff_x22;
  pppppppbStack_148 = unaff_x21;
  pppppppbStack_140 = pppppppbVar6;
  pppppppbStack_138 = pppppppbVar9;
  ppuStack_130 = &puStack_a0;
  if (uVar18 == 0x11) {
    pppppppbStack_1b8 = pppppppbVar10;
    if (pppppppbVar8 == (byte *******)0x0) {
      ppppppbVar13 = pppppppbVar10[3];
      pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + 5);
      if ((byte *)((long)pppppppbVar10 + (0x420 - (long)ppppppbVar13)) < (byte *)0x6) {
        pppppppbStack_1c0 = pppppppbVar10 + 4;
        (*(code *)pppppppbVar10[1])
                  (*pppppppbVar10,pppppppbStack_1c0,(long)ppppppbVar13 - (long)pppppppbStack_1c0);
        pppppppbVar10[3] = (byte ******)pppppppbStack_1c0;
        pcVar7 = "(nil)";
        pppppppbVar17 = (byte *******)((long)&MACH_HEADER.cputype + 1);
        (*(code *)pppppppbVar10[1])(*pppppppbVar10);
      }
      else {
        *(undefined1 *)((long)ppppppbVar13 + 4) = 0x29;
        *(undefined4 *)ppppppbVar13 = 0x6c696e28;
        pppppppbVar10[3] = (byte ******)((long)pppppppbVar10[3] + 5);
      }
    }
    else {
      pppppppbVar11 = (byte *******)((ulong)pppppppbVar17 & 0xffffffff);
      puVar4 = auStack_15c + 1;
      do {
        puVar16 = puVar4;
        uVar2 = *(ushort *)(&UNK_00814a9b + ((ulong)pppppppbVar8 & 0xff) * 2);
        *(ushort *)(puVar16 + -3) = uVar2;
        bVar1 = (byte *******)((long)&section_000000b8.reserved1 + 3) < pppppppbVar8;
        pppppppbVar8 = (byte *******)((ulong)pppppppbVar8 >> 8);
        puVar4 = puVar16 + -2;
      } while (bVar1);
      puStack_198 = puVar16 + -2;
      if ((uVar2 & 0xff) != 0x30) {
        puStack_198 = puVar16 + -3;
      }
      pppppppbVar9 = (byte *******)(auStack_15c + -(long)puStack_198);
      pppppppbVar17 = (byte *******)pcVar7;
      pppppppbStack_190 = pppppppbVar9;
      FUN_0055f330();
      pcVar7 = (char *)pppppppbVar9;
    }
  }
  pppppppbVar9 = (byte *******)(ulong)(uVar18 == 0x11);
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_15c._4_8_) {
    return pppppppbVar9;
  }
  ___stack_chk_fail();
  if (((ulong)pcVar7 & 0xff) == 0x13) {
    *(int *)pppppppbVar11 = (int)(char)pppppppbVar9;
    return (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  if ((2L << ((ulong)pcVar7 & 0x3f) & 0x1fffaU) == 0) {
    return (byte *******)0x0;
  }
  uStack_220 = SUB84(pppppppbVar17,0);
  pppppppbVar8 = (byte *******)((ulong)pppppppbVar17 & 0xffffffff);
  uVar3 = (uint)(char)pppppppbVar9;
  pppppppbVar6 = (byte *******)(ulong)uVar3;
  pcStack_1a8 = FUN_0056061c;
  auStack_1dc._4_8_ = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar5 = (uint)pcVar7 & 0xff;
  pppppppbVar10 = pppppppbVar11;
  pppppppbStack_228 = (byte *******)pcVar7;
  pppppppbStack_1d0 = unaff_x22;
  uStack_1c8 = uVar18;
  pppuStack_1b0 = &ppuStack_130;
  if (uVar5 < 7) {
    if (uVar5 < 4) {
      if (uVar5 - 2 < 2) goto LAB_0055ef78;
      FUN_0055f0f4(pppppppbVar6,pcVar7,(ulong)pppppppbVar17 & 0xffffffff);
      pppppppbVar10 = pppppppbVar11;
    }
    else {
      if (uVar5 == 4) {
        pppppppbVar17 = (byte *******)auStack_1dc;
        do {
          uVar5 = (uint)pppppppbVar6;
          pppppppbVar17 = (byte *******)((long)pppppppbVar17 + -1);
          *(byte *)pppppppbVar17 = (byte)pppppppbVar6 & 7 | 0x30;
          pppppppbVar6 = (byte *******)(ulong)(uVar5 >> 3 & 0x1f);
        } while (7 < (uVar5 & 0xff));
        goto LAB_0055f028;
      }
      if (uVar5 != 5) {
        auStack_1de = *(undefined1 (*) [2])(&UNK_00814a9b + ((ulong)pppppppbVar6 & 0xff) * 2);
        pppppppbVar17 = (byte *******)(auStack_1de + 1);
        if (((ushort)auStack_1de & 0xff) != 0x30) {
          pppppppbVar17 = (byte *******)auStack_1de;
        }
        pppppppbVar6 = (byte *******)auStack_1dc;
        pppppppbStack_210 = (byte *******)((long)pppppppbVar6 - (long)pppppppbVar17);
        pppppppbStack_218 = pppppppbVar17;
        goto joined_r0x0055f0bc;
      }
      pppppppbVar17 = (byte *******)&uStack_208;
      pppppppbVar6 = (byte *******)(ulong)((uint)pppppppbVar9 & 0xff);
      pppppppbStack_218 = pppppppbVar17;
      func_0x005748b4(pppppppbVar6,pppppppbVar17);
      pppppppbStack_210 = (byte *******)((long)pppppppbVar6 - (long)pppppppbVar17);
      if (((ulong)pcVar7 & 0xff00) == 0) goto LAB_0055f038;
LAB_0055efbc:
      pppppppbVar9 = pppppppbStack_210;
      FUN_0055f330(pppppppbStack_218,pppppppbStack_210,pcVar7,pppppppbVar8,pppppppbVar11);
      pcVar7 = (char *)pppppppbVar9;
      pppppppbVar10 = pppppppbVar8;
    }
LAB_0055efd0:
    pppppppbVar9 = (byte *******)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (7 < uVar5 - 8) {
      if (uVar5 == 7) {
        pppppppbVar17 = (byte *******)auStack_1dc;
        do {
          uVar5 = (uint)pppppppbVar6;
          pppppppbVar17 = (byte *******)((long)pppppppbVar17 + -1);
          *(char *)pppppppbVar17 = "0123456789ABCDEF"[(ulong)pppppppbVar6 & 0xf];
          pppppppbVar6 = (byte *******)(ulong)(uVar5 >> 4 & 0xf);
        } while (0xf < (uVar5 & 0xff));
LAB_0055f028:
        pppppppbVar6 = (byte *******)auStack_1dc;
        pppppppbStack_210 = (byte *******)((long)pppppppbVar6 - (long)pppppppbVar17);
        pppppppbStack_218 = pppppppbVar17;
      }
      else {
LAB_0055ef78:
        pppppppbVar17 = (byte *******)&uStack_208;
        pppppppbVar9 = pppppppbVar17;
        if ((int)uVar3 < 0) {
          pppppppbVar9 = appppppbStack_207;
          uStack_208 = 0x2d;
          pppppppbVar6 = (byte *******)(ulong)-uVar3;
        }
        pppppppbStack_218 = pppppppbVar17;
        func_0x005748b4(pppppppbVar6,pppppppbVar9);
        pppppppbStack_210 = (byte *******)((long)pppppppbVar6 - (long)pppppppbVar17);
      }
joined_r0x0055f0bc:
      if (((ulong)pcVar7 & 0xff00) != 0) goto LAB_0055efbc;
LAB_0055f038:
      pppppppbVar8 = pppppppbStack_210;
      pppppppbVar9 = pppppppbStack_218;
      pcVar7 = (char *)pppppppbStack_210;
      if (pppppppbVar6 != pppppppbVar17) {
        ppppppbVar13 = pppppppbVar11[3];
        pppppppbVar11[2] = (byte ******)((long)pppppppbStack_210 + (long)pppppppbVar11[2]);
        if (pppppppbStack_210 < (byte *******)((long)pppppppbVar11 + (0x420 - (long)ppppppbVar13)))
        {
          pcVar7 = (char *)pppppppbStack_218;
          _memcpy(ppppppbVar13,pppppppbStack_218,pppppppbStack_210);
          pppppppbVar11[3] = (byte ******)((long)pppppppbVar8 + (long)pppppppbVar11[3]);
        }
        else {
          pppppppbVar6 = pppppppbVar11 + 4;
          (*(code *)pppppppbVar11[1])
                    (*pppppppbVar11,pppppppbVar6,(long)ppppppbVar13 - (long)pppppppbVar6);
          pppppppbVar11[3] = (byte ******)pppppppbVar6;
          (*(code *)pppppppbVar11[1])(*pppppppbVar11,pppppppbVar9,pppppppbVar8);
          pcVar7 = (char *)pppppppbVar9;
        }
      }
      goto LAB_0055efd0;
    }
    pppppppbVar9 = (byte *******)&pppppppbStack_228;
    FUN_00561f34((double)(int)uVar3);
    pcVar7 = (char *)pppppppbVar11;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == auStack_1dc._4_8_) {
    return pppppppbVar9;
  }
  ___stack_chk_fail();
  uVar12 = ((ulong)pcVar7 & ((long)pcVar7 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
  uVar18 = 0;
  if (uVar12 != 0) {
    uVar18 = uVar12 - 1;
  }
  if (((long)pcVar7 < 0x200000000) || (((uint)pcVar7 >> 8 & 1) != 0)) {
    pppppppbVar11 = (byte *******)pppppppbVar10[3];
    pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + 1);
    if (pppppppbVar10 + 0x84 != pppppppbVar11) goto LAB_0055f1ac;
  }
  else {
    pppppppbVar6 = (byte *******)pppppppbVar10[3];
    pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + uVar18);
    pppppppbVar11 = pppppppbVar10 + 0x84;
    uVar20 = (long)pppppppbVar11 - (long)pppppppbVar6;
    uVar12 = uVar18 - uVar20;
    uVar19 = uVar18;
    if (uVar20 <= uVar18 && uVar12 != 0) {
      pppppppbVar17 = pppppppbVar10 + 4;
      pppppppbVar8 = pppppppbVar11;
      if (pppppppbVar11 != pppppppbVar6) {
        _memset(pppppppbVar6,0x20,uVar20);
        ppppppbVar13 = pppppppbVar10[3];
        pppppppbVar10[3] = (byte ******)((long)ppppppbVar13 + uVar20);
        pppppppbVar8 = (byte *******)((long)ppppppbVar13 + uVar20);
      }
      (*(code *)pppppppbVar10[1])
                (*pppppppbVar10,pppppppbVar17,(long)pppppppbVar8 - (long)pppppppbVar17);
      pppppppbVar10[3] = (byte ******)pppppppbVar17;
      for (; uVar19 = uVar12, pppppppbVar6 = pppppppbVar17, 0x400 < uVar12; uVar12 = uVar12 - 0x400)
      {
        _memset(pppppppbVar17,0x20,0x400);
        pppppppbVar10[3] = (byte ******)pppppppbVar11;
        (*(code *)pppppppbVar10[1])(*pppppppbVar10,pppppppbVar17,0x400);
        pppppppbVar10[3] = (byte ******)pppppppbVar17;
      }
    }
    _memset(pppppppbVar6,0x20,uVar19);
    pppppppbVar11 = (byte *******)((long)pppppppbVar10[3] + uVar19);
    pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + 1);
    pppppppbVar10[3] = (byte ******)pppppppbVar11;
    if (pppppppbVar10 + 0x84 != pppppppbVar11) goto LAB_0055f1ac;
  }
  pppppppbVar11 = pppppppbVar10 + 4;
  (*(code *)pppppppbVar10[1])(*pppppppbVar10,pppppppbVar11,0x400);
  pppppppbVar10[3] = (byte ******)pppppppbVar11;
LAB_0055f1ac:
  pppppppbVar6 = pppppppbVar10 + 0x84;
  *(byte *)pppppppbVar11 = (byte)pppppppbVar9;
  pppppppbVar11 = (byte *******)((long)pppppppbVar10[3] + 1);
  pppppppbVar10[3] = (byte ******)pppppppbVar11;
  if ((0x1ffffffff < (long)pcVar7) && (((uint)pcVar7 >> 8 & 1) != 0)) {
    pppppppbVar10[2] = (byte ******)((long)pppppppbVar10[2] + uVar18);
    uVar12 = (long)pppppppbVar6 - (long)pppppppbVar11;
    if (uVar12 <= uVar18 && uVar18 - uVar12 != 0) {
      pppppppbVar9 = pppppppbVar10 + 4;
      pppppppbVar17 = pppppppbVar6;
      if (pppppppbVar6 != pppppppbVar11) {
        _memset(pppppppbVar11,0x20,uVar12);
        ppppppbVar13 = pppppppbVar10[3];
        pppppppbVar10[3] = (byte ******)((long)ppppppbVar13 + uVar12);
        pppppppbVar17 = (byte *******)((long)ppppppbVar13 + uVar12);
      }
      (*(code *)pppppppbVar10[1])
                (*pppppppbVar10,pppppppbVar9,(long)pppppppbVar17 - (long)pppppppbVar9);
      pppppppbVar10[3] = (byte ******)pppppppbVar9;
      for (uVar18 = uVar18 - uVar12; pppppppbVar11 = pppppppbVar9, 0x400 < uVar18;
          uVar18 = uVar18 - 0x400) {
        _memset(pppppppbVar9,0x20,0x400);
        pppppppbVar10[3] = (byte ******)pppppppbVar6;
        (*(code *)pppppppbVar10[1])(*pppppppbVar10,pppppppbVar9,0x400);
        pppppppbVar10[3] = (byte ******)pppppppbVar9;
      }
    }
    _memset(pppppppbVar11,0x20,uVar18);
    pppppppbVar10[3] = (byte ******)((long)pppppppbVar10[3] + uVar18);
  }
  return pppppppbVar11;
}



/* Entry: 00560d74; end: 00560edb;  */

ulong * FUN_00560d74(float param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uStack_20;
  undefined4 uStack_18;
  
  if (((param_2 & 0xff) != 0x13) && ((2L << (param_2 & 0x3f) & 0x9fe00U) != 0)) {
    puVar1 = &uStack_20;
    if (((uint)param_2 & 0xff) == 0x12) {
      uStack_20 = CONCAT71((int7)(param_2 >> 8),0xc);
    }
    else {
      uStack_20 = param_2;
      if (((uint)param_2 & 0xf8) != 8) {
        return (ulong *)(undefined1 *)0x0;
      }
    }
    uStack_18 = param_3;
    FUN_00561f34((double)param_1,&uStack_20,param_4);
    return puVar1;
  }
  return (ulong *)(undefined1 *)0x0;
}



/* Entry: 00560edc; end: 0056110f;  */

undefined8 * FUN_00560edc(char *param_1,char *param_2,char *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ushort uStack_4e;
  char acStack_4c [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = param_4;
  if (((ulong)param_2 & 0xff) == 0x11) {
    if (param_1 == (char *)0x0) {
      puVar2 = (undefined4 *)param_4[3];
      param_4[2] = param_4[2] + 5;
      if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
        puVar5 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar5,(long)puVar2 - (long)puVar5);
        param_4[3] = puVar5;
        uVar7 = *param_4;
        pcVar12 = (code *)param_4[1];
        param_1 = "(nil)";
        pcVar9 = "";
LAB_005610d0:
        (*pcVar12)(uVar7);
        param_2 = param_1;
        param_3 = pcVar9;
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x29;
        *puVar2 = 0x6c696e28;
        pcVar9 = (char *)(param_4[3] + 5);
        param_1 = param_2;
LAB_00561070:
        param_4[3] = pcVar9;
        param_2 = param_1;
      }
    }
    else {
      puVar11 = (undefined8 *)((ulong)param_3 & 0xffffffff);
      pcVar9 = acStack_4c + 1;
      do {
        pcVar8 = pcVar9;
        uVar3 = *(ushort *)(&UNK_00814a9b + ((ulong)param_1 & 0xff) * 2);
        *(ushort *)(pcVar8 + -3) = uVar3;
        bVar1 = "" < param_1;
        pcVar9 = pcVar8 + -2;
        param_1 = (char *)((ulong)param_1 >> 8);
      } while (bVar1);
      if ((uVar3 & 0xff) != 0x30) {
        pcVar9 = pcVar8 + -3;
      }
      pcVar9 = acStack_4c + -(long)pcVar9;
      param_3 = param_2;
      FUN_0055f330();
      param_2 = pcVar9;
    }
LAB_005610d4:
    param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    param_1 = param_2;
    pcVar9 = param_3;
  }
  else {
    if (param_1 == (char *)0x0) {
      if (((uint)param_2 >> 8 & 0xff) != 0) {
        param_1 = (char *)0x0;
        pcVar9 = (char *)0x0;
        goto LAB_00561020;
      }
      goto LAB_005610d4;
    }
    if ((int)param_3 < 0) {
      pcVar9 = param_1;
      pcVar8 = param_2;
      _strlen();
    }
    else {
      pcVar8 = (char *)0x0;
      pcVar6 = param_1;
      _memchr();
      pcVar9 = param_1 + ((ulong)param_3 & 0x7fffffff);
      if (pcVar6 != (char *)0x0) {
        pcVar9 = pcVar6;
      }
      pcVar9 = pcVar9 + -(long)param_1;
    }
    if (((uint)param_2 >> 8 & 0xff) == 0) {
      param_2 = pcVar8;
      param_3 = pcVar9;
      if (pcVar9 != (char *)0x0) {
        param_4[2] = pcVar9 + param_4[2];
        if ((char *)((long)param_4 + (0x420 - param_4[3])) <= pcVar9) {
          puVar5 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar5,param_4[3] - (long)puVar5);
          param_4[3] = puVar5;
          uVar7 = *param_4;
          pcVar12 = (code *)param_4[1];
          goto LAB_005610d0;
        }
        _memcpy();
        pcVar9 = pcVar9 + param_4[3];
        goto LAB_00561070;
      }
      goto LAB_005610d4;
    }
LAB_00561020:
    puVar11 = (undefined8 *)((ulong)param_2 >> 0x20);
    FUN_00561c78();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((((ulong)param_1 & 0xff) == 0x13) || ((2L << ((ulong)param_1 & 0x3f) & 0x80004U) == 0)) {
    return (undefined8 *)0x0;
  }
  uVar18 = param_4[1];
  puVar5 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar18 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar5 = param_4;
  }
  uVar4 = (uint)param_1 >> 8;
  if ((uVar4 & 0xff) == 0) {
    if (uVar18 != 0) {
      puVar11[2] = puVar11[2] + uVar18;
      if (uVar18 < (ulong)((long)puVar11 + (0x420 - puVar11[3]))) {
        _memcpy();
        puVar11[3] = puVar11[3] + uVar18;
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      puVar17 = puVar11 + 4;
      (*(code *)puVar11[1])(*puVar11,puVar17,puVar11[3] - (long)puVar17);
      puVar11[3] = puVar17;
      (*(code *)puVar11[1])(*puVar11,puVar5,uVar18);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  uVar10 = (uint)((ulong)param_1 >> 0x20);
  uVar20 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
  uVar16 = uVar18;
  if (((ulong)pcVar9 & 0xffffffff) <= uVar18) {
    uVar16 = (ulong)pcVar9 & 0xffffffff;
  }
  if (-1 < (int)pcVar9) {
    uVar18 = uVar16;
  }
  uVar16 = 0;
  if (uVar18 <= uVar20) {
    uVar16 = uVar20 - uVar18;
  }
  if ((uVar4 & 1) == 0) {
    if (uVar18 < uVar20) {
      puVar19 = (undefined8 *)puVar11[3];
      puVar11[2] = puVar11[2] + uVar16;
      puVar17 = puVar11 + 0x84;
      uVar20 = (long)puVar17 - (long)puVar19;
      if (uVar20 <= uVar16 && uVar16 - uVar20 != 0) {
        puVar15 = puVar11 + 4;
        puVar14 = puVar17;
        if (puVar17 != puVar19) {
          _memset(puVar19,0x20,uVar20);
          lVar13 = puVar11[3];
          puVar11[3] = (undefined8 *)(lVar13 + uVar20);
          puVar14 = (undefined8 *)(lVar13 + uVar20);
        }
        (*(code *)puVar11[1])(*puVar11,puVar15,(long)puVar14 - (long)puVar15);
        puVar11[3] = puVar15;
        for (uVar16 = uVar16 - uVar20; puVar19 = puVar15, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
          _memset(puVar15,0x20,0x400);
          puVar11[3] = puVar17;
          (*(code *)puVar11[1])(*puVar11,puVar15,0x400);
          puVar11[3] = puVar15;
        }
      }
      _memset(puVar19,0x20,uVar16);
      puVar11[3] = puVar11[3] + uVar16;
    }
    if (uVar18 == 0) goto LAB_00561f18;
    lVar13 = puVar11[3];
    puVar11[2] = puVar11[2] + uVar18;
    if ((ulong)((long)puVar11 + (0x420 - lVar13)) <= uVar18) {
      puVar17 = puVar11 + 4;
      (*(code *)puVar11[1])(*puVar11,puVar17,lVar13 - (long)puVar17);
      puVar11[3] = puVar17;
      (*(code *)puVar11[1])(*puVar11,puVar5,uVar18);
      goto LAB_00561f18;
    }
    _memcpy(lVar13,puVar5,uVar18);
  }
  else {
    if (uVar18 != 0) {
      lVar13 = puVar11[3];
      puVar11[2] = puVar11[2] + uVar18;
      if (uVar18 < (ulong)((long)puVar11 + (0x420 - lVar13))) {
        _memcpy(lVar13,puVar5,uVar18);
        puVar11[3] = puVar11[3] + uVar18;
      }
      else {
        puVar17 = puVar11 + 4;
        (*(code *)puVar11[1])(*puVar11,puVar17,lVar13 - (long)puVar17);
        puVar11[3] = puVar17;
        (*(code *)puVar11[1])(*puVar11,puVar5,uVar18);
      }
    }
    if (uVar20 <= uVar18) goto LAB_00561f18;
    puVar17 = (undefined8 *)puVar11[3];
    puVar11[2] = puVar11[2] + uVar16;
    puVar5 = puVar11 + 0x84;
    uVar18 = (long)puVar5 - (long)puVar17;
    if (uVar18 <= uVar16 && uVar16 - uVar18 != 0) {
      puVar19 = puVar11 + 4;
      puVar15 = puVar5;
      if (puVar5 != puVar17) {
        _memset(puVar17,0x20,uVar18);
        lVar13 = puVar11[3];
        puVar11[3] = (undefined8 *)(lVar13 + uVar18);
        puVar15 = (undefined8 *)(lVar13 + uVar18);
      }
      (*(code *)puVar11[1])(*puVar11,puVar19,(long)puVar15 - (long)puVar19);
      puVar11[3] = puVar19;
      for (uVar16 = uVar16 - uVar18; puVar17 = puVar19, 0x400 < uVar16; uVar16 = uVar16 - 0x400) {
        _memset(puVar19,0x20,0x400);
        puVar11[3] = puVar5;
        (*(code *)puVar11[1])(*puVar11,puVar19,0x400);
        puVar11[3] = puVar19;
      }
    }
    _memset(puVar17,0x20,uVar16);
    uVar18 = uVar16;
  }
  puVar11[3] = puVar11[3] + uVar18;
LAB_00561f18:
  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
}


