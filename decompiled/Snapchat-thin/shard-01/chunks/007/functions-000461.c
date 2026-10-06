/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10138c800; end: 10138c827;  */

void FUN_10138c800(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10138c9ec();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 10138c828; end: 10138c85b;  */

ulong FUN_10138c828(ulong param_1)

{
  if (10 < param_1) {
    param_1 = 0xb;
  }
  return param_1;
}



/* Entry: 10138c85c; end: 10138c9eb;  */

ulong FUN_10138c85c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10138c9ec; end: 10138cb3f;  */

/* WARNING: Removing unreachable block (ram,0x00010138cab0) */

undefined1  [16] FUN_10138c9ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112d77400;
  func_0x0001000285a8(0x112d77400,&UNK_10d937228);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,puVar4);
  func_0x00010138d750();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1103a9fe0,&UNK_1103a9fe0,lVar3,puVar4,uVar1);
  if (unaff_x21 == (undefined1 *)0x0) {
    uStack_51 = 0;
    unaff_x21 = &uStack_51;
    func_0x000107c60500(unaff_x21,lVar2);
    uStack_52 = 1;
    puVar4 = &uStack_52;
    func_0x000107c60500(puVar4,lVar2);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = unaff_x21;
  return auVar6;
}



/* Entry: 10138cb40; end: 10138cb43;  */

void FUN_10138cb40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936bb8;
  func_0x000107c61520(&UNK_10d936bb8,&UNK_1103a9b70);
  puRam0000000112d77390 = puVar1;
  return;
}



/* Entry: 10138cb44; end: 10138cb83;  */

void FUN_10138cb44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936bb8;
  func_0x000107c61520(&UNK_10d936bb8,&UNK_1103a9b70);
  puRam0000000112d77390 = puVar1;
  return;
}



/* Entry: 10138cb84; end: 10138cb87;  */

void FUN_10138cb84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936c80;
  func_0x000107c61520(&UNK_10d936c80,&UNK_1103a9c00);
  puRam0000000112d77398 = puVar1;
  return;
}



/* Entry: 10138cb88; end: 10138cbc7;  */

void FUN_10138cb88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936c80;
  func_0x000107c61520(&UNK_10d936c80,&UNK_1103a9c00);
  puRam0000000112d77398 = puVar1;
  return;
}



/* Entry: 10138cbc8; end: 10138cbcb;  */

void FUN_10138cbc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936d48;
  func_0x000107c61520(&UNK_10d936d48,&UNK_1103a9c90);
  puRam0000000112d773a0 = puVar1;
  return;
}



/* Entry: 10138cbcc; end: 10138cc0b;  */

void FUN_10138cbcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936d48;
  func_0x000107c61520(&UNK_10d936d48,&UNK_1103a9c90);
  puRam0000000112d773a0 = puVar1;
  return;
}



/* Entry: 10138cc0c; end: 10138cc0f;  */

void FUN_10138cc0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936e10;
  func_0x000107c61520(&UNK_10d936e10,&UNK_1103a9d20);
  puRam0000000112d773a8 = puVar1;
  return;
}



/* Entry: 10138cc10; end: 10138cc4f;  */

void FUN_10138cc10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936e10;
  func_0x000107c61520(&UNK_10d936e10,&UNK_1103a9d20);
  puRam0000000112d773a8 = puVar1;
  return;
}



/* Entry: 10138cc50; end: 10138cc53;  */

void FUN_10138cc50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936ed8;
  func_0x000107c61520(&UNK_10d936ed8,&UNK_1103a9db0);
  puRam0000000112d773b0 = puVar1;
  return;
}



/* Entry: 10138cc54; end: 10138cc93;  */

void FUN_10138cc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936ed8;
  func_0x000107c61520(&UNK_10d936ed8,&UNK_1103a9db0);
  puRam0000000112d773b0 = puVar1;
  return;
}



/* Entry: 10138cc94; end: 10138cc97;  */

void FUN_10138cc94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936fa0;
  func_0x000107c61520(&UNK_10d936fa0,&UNK_1103a9e40);
  puRam0000000112d773b8 = puVar1;
  return;
}



/* Entry: 10138cc98; end: 10138ccd7;  */

void FUN_10138cc98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d936fa0;
  func_0x000107c61520(&UNK_10d936fa0,&UNK_1103a9e40);
  puRam0000000112d773b8 = puVar1;
  return;
}



/* Entry: 10138ccd8; end: 10138ccdb;  */

void FUN_10138ccd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937068;
  func_0x000107c61520(&UNK_10d937068,&UNK_1103a9ed0);
  puRam0000000112d773c0 = puVar1;
  return;
}



/* Entry: 10138ccdc; end: 10138cd1b;  */

void FUN_10138ccdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937068;
  func_0x000107c61520(&UNK_10d937068,&UNK_1103a9ed0);
  puRam0000000112d773c0 = puVar1;
  return;
}



/* Entry: 10138cd1c; end: 10138d58f;  */

undefined1  [16] FUN_10138cd1c(void)

{
  return ZEXT816(0x1103a9ae0);
}



/* Entry: 10138d590; end: 10138d78f;  */

void FUN_10138d590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d773c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9370d0;
  func_0x000107c61520(&UNK_10d9370d0,&UNK_1103a9ed0);
  puRam0000000112d773c8 = puVar1;
  return;
}



/* Entry: 10138d790; end: 10138d8e7;  */

int FUN_10138d790(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10138d80c;
        goto LAB_10138d7f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10138d7f0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10138d80c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10138d8e8; end: 10138d927;  */

void FUN_10138d8e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9372cc;
  func_0x000107c61520(&UNK_10d9372cc,&UNK_1103a9fe0);
  puRam0000000112d776c0 = puVar1;
  return;
}



/* Entry: 10138d928; end: 10138d92b;  */

void FUN_10138d928(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937264;
  func_0x000107c61520(&UNK_10d937264,&UNK_1103a9fe0);
  puRam0000000112d776c8 = puVar1;
  return;
}



/* Entry: 10138d92c; end: 10138d96b;  */

void FUN_10138d92c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937264;
  func_0x000107c61520(&UNK_10d937264,&UNK_1103a9fe0);
  puRam0000000112d776c8 = puVar1;
  return;
}



/* Entry: 10138d96c; end: 10138d96f;  */

void FUN_10138d96c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93723c;
  func_0x000107c61520(&UNK_10d93723c,&UNK_1103a9fe0);
  puRam0000000112d776d0 = puVar1;
  return;
}



/* Entry: 10138d970; end: 10138d9af;  */

void FUN_10138d970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93723c;
  func_0x000107c61520(&UNK_10d93723c,&UNK_1103a9fe0);
  puRam0000000112d776d0 = puVar1;
  return;
}



/* Entry: 10138d9b0; end: 10138da37;  */

undefined1 FUN_10138d9b0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10138da38; end: 10138da53;  */

undefined1 FUN_10138da38(undefined1 param_1)

{
  return param_1;
}



/* Entry: 10138da54; end: 10138da9b;  */

/* WARNING: Removing unreachable block (ram,0x00010138dae8) */
/* WARNING: Removing unreachable block (ram,0x00010138db14) */

void FUN_10138da54(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined *puVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte **ppbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *pbStack_60;
  ulong uStack_58;
  byte bStack_41;
  
  puVar4 = PTR___ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF_11034e9d0;
  pbVar6 = (byte *)0x112d77020;
  bStack_41 = param_2;
  func_0x0001000285a8(0x112d77020,&UNK_10d936a60);
  pbVar10 = pbVar6;
  (*(code *)puVar4)(&bStack_41);
  if (((uint)pbVar10 & 0xff) == 1) {
    pbVar10 = &bStack_41;
    func_0x000107c604d4();
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = (byte *)((ulong)pbVar10 & 0xffffffffffff);
      pbVar9 = (byte *)((ulong)pbVar6 >> 0x38 & 0xf);
      pbVar3 = pbVar7;
      if (((ulong)pbVar6 & 0x2000000000000000) != 0) {
        pbVar3 = pbVar9;
      }
      if (pbVar3 == (byte *)0x0) {
        func_0x000107c6142c(pbVar6);
      }
      else {
        if (((ulong)pbVar6 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar6 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar10 >> 0x3c & 1) == 0) {
              pbVar7 = pbVar6;
              func_0x000107c60358();
            }
            else {
              pbVar10 = (byte *)(((ulong)pbVar6 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar10 == 0x2b) {
              if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10138de04);
                (*pcVar5)();
              }
              pbVar7 = pbVar7 + -1;
              if (pbVar7 != (byte *)0x0) {
                lVar12 = 0;
                do {
                  pbVar10 = pbVar10 + 1;
                  if (((9 < *pbVar10 - 0x30) ||
                      (lVar11 = lVar12 * 10,
                      SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar12 = lVar11 + uVar1,
                     SCARRY8(lVar11,uVar1))) break;
                  pbVar7 = pbVar7 + -1;
                } while (pbVar7 != (byte *)0x0);
              }
            }
            else if (*pbVar10 == 0x2d) {
              if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10138ddfc);
                (*pcVar5)();
              }
              pbVar7 = pbVar7 + -1;
              if (pbVar7 != (byte *)0x0) {
                lVar12 = 0;
                while( true ) {
                  pbVar10 = pbVar10 + 1;
                  if ((9 < *pbVar10 - 0x30) ||
                     (lVar11 = lVar12 * 10,
                     SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) break;
                  uVar1 = (ulong)(byte)(*pbVar10 - 0x30);
                  lVar12 = lVar11 - uVar1;
                  if ((SBORROW8(lVar11,uVar1)) || (pbVar7 = pbVar7 + -1, pbVar7 == (byte *)0x0))
                  break;
                }
              }
            }
            else if (pbVar7 != (byte *)0x0) {
              lVar12 = 0;
              pbVar3 = pbVar10;
              while (pbVar3 != (byte *)0x0) {
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar11 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f
                    )) || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar12 = lVar11 + uVar1,
                          SCARRY8(lVar11,uVar1))) break;
                pbVar7 = pbVar7 + -1;
                pbVar10 = pbVar10 + 1;
                pbVar3 = pbVar7;
              }
            }
          }
          else {
            pbStack_60 = pbVar10;
            uStack_58 = (ulong)pbVar6 & 0xffffffffffffff;
            uVar2 = (uint)pbVar10 & 0xff;
            if (uVar2 == 0x2b) {
              if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10138de08);
                (*pcVar5)();
              }
              pbVar9 = pbVar9 + -1;
              if (pbVar9 != (byte *)0x0) {
                lVar12 = 0;
                pbVar10 = (byte *)((ulong)&pbStack_60 | 1);
                do {
                  if (((9 < *pbVar10 - 0x30) ||
                      (lVar11 = lVar12 * 10,
                      SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar12 = lVar11 + uVar1,
                     SCARRY8(lVar11,uVar1))) break;
                  pbVar9 = pbVar9 + -1;
                  pbVar10 = pbVar10 + 1;
                } while (pbVar9 != (byte *)0x0);
              }
            }
            else if (uVar2 == 0x2d) {
              if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10138de00);
                (*pcVar5)();
              }
              pbVar9 = pbVar9 + -1;
              if (pbVar9 != (byte *)0x0) {
                lVar12 = 0;
                pbVar10 = (byte *)((ulong)&pbStack_60 | 1);
                while( true ) {
                  if ((9 < *pbVar10 - 0x30) ||
                     (lVar11 = lVar12 * 10,
                     SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)) break;
                  uVar1 = (ulong)(byte)(*pbVar10 - 0x30);
                  lVar12 = lVar11 - uVar1;
                  if ((SBORROW8(lVar11,uVar1)) ||
                     (pbVar9 = pbVar9 + -1, pbVar10 = pbVar10 + 1, pbVar9 == (byte *)0x0)) break;
                }
              }
            }
            else if (pbVar9 != (byte *)0x0) {
              lVar12 = 0;
              ppbVar8 = &pbStack_60;
              while( true ) {
                if ((9 < *(byte *)ppbVar8 - 0x30) ||
                   (lVar11 = lVar12 * 10, SUB168(SEXT816(lVar12) * SEXT816(10),8) != lVar11 >> 0x3f)
                   ) break;
                uVar1 = (ulong)(byte)(*(byte *)ppbVar8 - 0x30);
                lVar12 = lVar11 + uVar1;
                if ((SCARRY8(lVar11,uVar1)) ||
                   (pbVar9 = pbVar9 + -1, ppbVar8 = (byte **)((long)ppbVar8 + 1),
                   pbVar9 == (byte *)0x0)) break;
              }
            }
          }
        }
        else {
          FUN_100edba6c();
        }
        func_0x000107c6142c(pbVar6);
      }
    }
  }
  return;
}



/* Entry: 10138da9c; end: 10138de07;  */

/* WARNING: Removing unreachable block (ram,0x00010138dae8) */
/* WARNING: Removing unreachable block (ram,0x00010138db14) */

void FUN_10138da9c(undefined8 param_1,byte param_2,byte *param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  code *pcVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbStack_60;
  ulong uStack_58;
  byte bStack_41;
  
  bStack_41 = param_2;
  func_0x0001000285a8(param_3,param_4);
  pbVar8 = param_3;
  (*param_5)(&bStack_41);
  if (((uint)pbVar8 & 0xff) == 1) {
    pbVar8 = &bStack_41;
    func_0x000107c604d4();
    if (param_3 != (byte *)0x0) {
      pbVar5 = (byte *)((ulong)pbVar8 & 0xffffffffffff);
      pbVar7 = (byte *)((ulong)param_3 >> 0x38 & 0xf);
      pbVar3 = pbVar5;
      if (((ulong)param_3 & 0x2000000000000000) != 0) {
        pbVar3 = pbVar7;
      }
      if (pbVar3 == (byte *)0x0) {
        func_0x000107c6142c(param_3);
      }
      else {
        if (((ulong)param_3 >> 0x3c & 1) == 0) {
          if (((ulong)param_3 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar8 >> 0x3c & 1) == 0) {
              pbVar5 = param_3;
              func_0x000107c60358();
            }
            else {
              pbVar8 = (byte *)(((ulong)param_3 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar8 == 0x2b) {
              if ((long)pbVar5 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10138de04);
                (*pcVar4)();
              }
              pbVar5 = pbVar5 + -1;
              if (pbVar5 != (byte *)0x0) {
                lVar10 = 0;
                do {
                  pbVar8 = pbVar8 + 1;
                  if (((9 < *pbVar8 - 0x30) ||
                      (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f
                      )) || (uVar1 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 + uVar1,
                            SCARRY8(lVar9,uVar1))) break;
                  pbVar5 = pbVar5 + -1;
                } while (pbVar5 != (byte *)0x0);
              }
            }
            else if (*pbVar8 == 0x2d) {
              if ((long)pbVar5 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10138ddfc);
                (*pcVar4)();
              }
              pbVar5 = pbVar5 + -1;
              if (pbVar5 != (byte *)0x0) {
                lVar10 = 0;
                while( true ) {
                  pbVar8 = pbVar8 + 1;
                  if ((9 < *pbVar8 - 0x30) ||
                     (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)
                     ) break;
                  uVar1 = (ulong)(byte)(*pbVar8 - 0x30);
                  lVar10 = lVar9 - uVar1;
                  if ((SBORROW8(lVar9,uVar1)) || (pbVar5 = pbVar5 + -1, pbVar5 == (byte *)0x0))
                  break;
                }
              }
            }
            else if (pbVar5 != (byte *)0x0) {
              lVar10 = 0;
              pbVar3 = pbVar8;
              while (pbVar3 != (byte *)0x0) {
                if (((9 < *pbVar8 - 0x30) ||
                    (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                   || (uVar1 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 + uVar1,
                      SCARRY8(lVar9,uVar1))) break;
                pbVar5 = pbVar5 + -1;
                pbVar8 = pbVar8 + 1;
                pbVar3 = pbVar5;
              }
            }
          }
          else {
            pbStack_60 = pbVar8;
            uStack_58 = (ulong)param_3 & 0xffffffffffffff;
            uVar2 = (uint)pbVar8 & 0xff;
            if (uVar2 == 0x2b) {
              if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10138de08);
                (*pcVar4)();
              }
              pbVar7 = pbVar7 + -1;
              if (pbVar7 != (byte *)0x0) {
                lVar10 = 0;
                pbVar8 = (byte *)((ulong)&pbStack_60 | 1);
                do {
                  if (((9 < *pbVar8 - 0x30) ||
                      (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f
                      )) || (uVar1 = (ulong)(byte)(*pbVar8 - 0x30), lVar10 = lVar9 + uVar1,
                            SCARRY8(lVar9,uVar1))) break;
                  pbVar7 = pbVar7 + -1;
                  pbVar8 = pbVar8 + 1;
                } while (pbVar7 != (byte *)0x0);
              }
            }
            else if (uVar2 == 0x2d) {
              if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10138de00);
                (*pcVar4)();
              }
              pbVar7 = pbVar7 + -1;
              if (pbVar7 != (byte *)0x0) {
                lVar10 = 0;
                pbVar8 = (byte *)((ulong)&pbStack_60 | 1);
                while( true ) {
                  if ((9 < *pbVar8 - 0x30) ||
                     (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f)
                     ) break;
                  uVar1 = (ulong)(byte)(*pbVar8 - 0x30);
                  lVar10 = lVar9 - uVar1;
                  if ((SBORROW8(lVar9,uVar1)) ||
                     (pbVar7 = pbVar7 + -1, pbVar8 = pbVar8 + 1, pbVar7 == (byte *)0x0)) break;
                }
              }
            }
            else if (pbVar7 != (byte *)0x0) {
              lVar10 = 0;
              ppbVar6 = &pbStack_60;
              while( true ) {
                if ((9 < *(byte *)ppbVar6 - 0x30) ||
                   (lVar9 = lVar10 * 10, SUB168(SEXT816(lVar10) * SEXT816(10),8) != lVar9 >> 0x3f))
                break;
                uVar1 = (ulong)(byte)(*(byte *)ppbVar6 - 0x30);
                lVar10 = lVar9 + uVar1;
                if ((SCARRY8(lVar9,uVar1)) ||
                   (pbVar7 = pbVar7 + -1, ppbVar6 = (byte **)((long)ppbVar6 + 1),
                   pbVar7 == (byte *)0x0)) break;
              }
            }
          }
        }
        else {
          (*param_6)();
        }
        func_0x000107c6142c(param_3);
      }
    }
  }
  return;
}



/* Entry: 10138de08; end: 10138dfab;  */

/* WARNING: Possible PIC construction at 0x00010138dff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138e24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138e08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138e250) */
/* WARNING: Removing unreachable block (ram,0x00010138e258) */
/* WARNING: Removing unreachable block (ram,0x00010138e090) */

undefined1  [16] FUN_10138de08(ulong param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000078;
  
  pbVar6 = (byte *)0xec000000736d5f70;
  pbVar3 = (byte *)0x6d617473656d6974;
  pcVar7 = (char *)(param_1 & 0xff);
  pbVar4 = pbVar3;
  pbVar1 = pbVar6;
  pbVar2 = param_3;
  switch(pcVar7) {
  default:
    pcVar7 = "er provider cannot be nil";
  case (char *)0x1c:
  case (char *)0x2a:
  case (char *)0x84:
  case (char *)0x92:
  case (char *)0xac:
  case (char *)0xba:
  case (char *)0xdf:
  case (char *)0xf2:
    pcVar7 = pcVar7 + 0xfc0;
  case (char *)0xf:
  case (char *)0x23:
  case (char *)0x77:
  case (char *)0x8b:
  case (char *)0x9f:
  case (char *)0xb3:
  case (char *)0xc7:
  case (char *)0xdb:
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xff:
    pcVar7 = pcVar7 + -0x20;
  case (char *)0x1a:
  case (char *)0x82:
  case (char *)0xaa:
  case (char *)0xd2:
  case (char *)0xd4:
    pbVar6 = (byte *)((ulong)pcVar7 | 0x8000000000000000);
    pcVar7 = (char *)0x10;
  case (char *)0x33:
  case (char *)0x9b:
  case (char *)0xc3:
  case (char *)0xfb:
    auVar8._0_8_ = (ulong)pcVar7 | 0xd000000000000001;
    auVar8._8_8_ = pbVar6;
    return auVar8;
  case (char *)0x2:
    pcVar7 = "media_response_request_id";
  case (char *)0xdd:
    auVar11._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000019;
    return auVar11;
  case (char *)0x3:
    pbVar6 = (byte *)0xed000064695f6b63;
    pbVar3 = (byte *)0x61657264;
  case (char *)0x58:
    auVar12._0_8_ = (ulong)pbVar3 & 0xffffffff | 0x61705f6d00000000;
    auVar12._8_8_ = pbVar6;
    return auVar12;
  case (char *)0x4:
  case (char *)0x98:
  case (char *)0xec:
    pbVar6 = (byte *)0x695f;
  case (char *)0xde:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffff0000ffff | 0xeb00000000640000);
    pbVar3 = (byte *)0x6574;
  case (char *)0x5c:
  case (char *)0x8c:
    auVar9._0_8_ = (ulong)pbVar3 & 0xffff | 0x6574616c706d0000;
    auVar9._8_8_ = pbVar6;
    return auVar9;
  case (char *)0x5:
    auVar14._8_8_ = 0x800000010ef39f60;
    auVar14._0_8_ = 0xd000000000000017;
    return auVar14;
  case (char *)0x6:
    pbVar6 = (byte *)0xec00000065637275;
    pbVar3 = (byte *)0x5f6567616d69;
  case (char *)0x68:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0x6f73000000000000);
  case (char *)0x53:
    auVar15._8_8_ = pbVar6;
    auVar15._0_8_ = pbVar3;
    return auVar15;
  case (char *)0x7:
  case (char *)0xd:
  case (char *)0x21:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xb1:
  case (char *)0xc5:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xe9:
  case (char *)0xfd:
    pbVar6 = (byte *)0xeb00000000657079;
    pbVar3 = (byte *)0x745f74706d6f7270;
  case (char *)0x59:
    auVar13._8_8_ = pbVar6;
    auVar13._0_8_ = pbVar3;
    return auVar13;
  case (char *)0x8:
  case (char *)0x4f:
    pbVar6 = (byte *)0xed0000656372756f;
    pbVar3 = (byte *)0x74706d6f7270;
  case (char *)0x4a:
    auVar17._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x735f000000000000;
    auVar17._8_8_ = pbVar6;
    return auVar17;
  case (char *)0x9:
    pbVar3 = (byte *)0x745f74706d6f7270;
    pbVar6 = (byte *)0xed000064695f6261;
  case (char *)0x10:
    auVar10._8_8_ = pbVar6;
    auVar10._0_8_ = pbVar3;
    return auVar10;
  case (char *)0xa:
    pbVar3 = (byte *)0xd000000000000010;
  case (char *)0x40:
    pbVar6 = (byte *)0x800000010ef39f40;
  case (char *)0x1:
  case (char *)0x6e:
    auVar16._8_8_ = pbVar6;
    auVar16._0_8_ = pbVar3;
    return auVar16;
  case (char *)0x11:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (char *)0x26:
  case (char *)0x74:
  case (char *)0x8e:
  case (char *)0xb6:
  case (char *)0xe6:
  case (char *)0xee:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (char *)0xe:
  case (char *)0x22:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xb2:
  case (char *)0xc6:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xea:
  case (char *)0xfe:
    unaff_x19 = (byte *)pcVar7;
  case (char *)0xf8:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    FUN_10138de08();
    *(byte **)unaff_x19 = pbVar3;
    *(byte **)(unaff_x19 + 8) = pbVar6;
  case (char *)0xa0:
    auVar20._8_8_ = pbVar6;
    auVar20._0_8_ = pbVar3;
    return auVar20;
  case (char *)0x12:
  case (char *)0x7a:
  case (char *)0xa2:
  case (char *)0xca:
    pbVar6 = pbVar3;
    FUN_10138ea38();
  case (char *)0x78:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)(0x6d617473656d6974,pbVar6);
    auVar24._8_8_ = pbVar6;
    auVar24._0_8_ = pbVar3;
    return auVar24;
  case (char *)0x30:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (char *)0x20:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (char *)0x5a:
  case (char *)0x27:
  case (char *)0x8f:
  case (char *)0xb7:
  case (char *)0xe7:
  case (char *)0xef:
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    unaff_x19 = pbVar6;
    unaff_x20 = pbVar3;
  case (char *)0xc:
    pbVar6 = unaff_x20;
    pbVar3 = unaff_x19;
    func_0x000107c604c4();
    break;
  case (char *)0x32:
  case (char *)0x9a:
  case (char *)0xc2:
  case (char *)0xfa:
    uVar5 = (ulong)*unaff_x20;
    FUN_10138de08(uVar5);
    auVar21._8_8_ = pbVar6;
    auVar21._0_8_ = uVar5;
    return auVar21;
  case (char *)0x44:
  case (char *)0x4d:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (char *)0x52:
  case (char *)0x71:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (char *)0x46:
  case (char *)0x4b:
  case (char *)0x4e:
  case (char *)0x55:
  case (char *)0xc4:
    param_3 = (byte *)(ulong)*unaff_x20;
    FUN_10138de08(param_3);
    pbVar1 = pbVar6;
    unaff_x19 = pbVar3;
  case (char *)0x70:
    pbVar6 = param_3;
    pbVar3 = pbVar1;
    func_0x000107c5fb58(unaff_x19,pbVar6,pbVar3);
  case (char *)0xb0:
    break;
  case (char *)0x88:
  case (char *)0x24:
    pbVar3 = pbRam6d617473656d6974;
    pbVar6 = pbRam6d617473656d697c;
    FUN_10138e204(pbRam6d617473656d6974,pbRam6d617473656d697c);
    *pcVar7 = (byte)pbVar3;
  case (char *)0x79:
  case (char *)0xa1:
  case (char *)0xc9:
    auVar19._8_8_ = pbVar6;
    auVar19._0_8_ = pbVar3;
    return auVar19;
  case (char *)0xb4:
    auVar22._8_8_ = 0xec000000736d5f70;
    auVar22._0_8_ = 0x6d617473656d6974;
    return auVar22;
  case (char *)0xb5:
  case (char *)0xed:
  case (char *)0x25:
  case (char *)0x8d:
    func_0x000107c606a8();
  case (char *)0x42:
  case (char *)0x49:
  case (char *)0x51:
  case (char *)0x6c:
  case (char *)0x48:
  case (char *)0x69:
    auVar18._8_8_ = pbVar6;
    auVar18._0_8_ = pbVar3;
    return auVar18;
  case (char *)0xc8:
    param_3 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008);
    FUN_10138de08(param_3);
    unaff_x19 = pbVar6;
  case (char *)0x9c:
    pbVar3 = unaff_x19;
    pbVar6 = param_3;
    func_0x000107c5fb58(&stack0x00000008,pbVar6,pbVar3);
    break;
  case (char *)0xe4:
    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000078;
    *(undefined8 *)(unaff_x19 + 8) = in_stack_00000010;
    *(undefined8 *)unaff_x19 = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000020;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
  case (char *)0xdc:
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000030;
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000040;
    *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000038;
    auVar23._8_8_ = 0xec000000736d5f70;
    auVar23._0_8_ = 0x6d617473656d6974;
    return auVar23;
  case (char *)0xfc:
  case (char *)0x31:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
  case (char *)0x99:
  case (char *)0xc1:
  case (char *)0xf9:
    pcVar7 = (char *)&stack0x00000008;
  case (char *)0xc0:
    pbVar4 = (byte *)0x0;
  case (char *)0x45:
  case (char *)0x4c:
  case (char *)0x54:
  case (char *)0x56:
    pbVar3 = unaff_x19;
    func_0x000107c6068c(pcVar7,pbVar4);
    FUN_10138de08(pbVar3);
  case (char *)0x6a:
    param_3 = pbVar3;
  case (char *)0x41:
  case (char *)0x43:
  case (char *)0x50:
  case (char *)0x6f:
    pbVar3 = (byte *)&stack0x00000008;
    pbVar2 = param_3;
    unaff_x19 = pbVar6;
  case (char *)0x6d:
    param_3 = unaff_x19;
    pbVar6 = pbVar2;
    pbVar4 = pbVar3;
    unaff_x19 = param_3;
  case (char *)0x47:
  case (char *)0x6b:
  case (char *)0xd8:
  case (char *)0xe0:
  case (char *)0xe8:
    pbVar3 = unaff_x19;
    func_0x000107c5fb58(pbVar4,pbVar6,param_3);
  case (char *)0xe5:
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pbVar3);
  auVar25._8_8_ = pbVar6;
  auVar25._0_8_ = pbVar3;
  return auVar25;
}



/* Entry: 10138dfac; end: 10138e0fb;  */

void FUN_10138dfac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_10138de08(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10138e0fc; end: 10138e113;  */

void FUN_10138e0fc(void)

{
  undefined1 *unaff_x20;
  
  FUN_10138de08(*unaff_x20);
  return;
}



/* Entry: 10138e114; end: 10138e137;  */

void FUN_10138e114(undefined1 *param_1,undefined1 param_2)

{
  FUN_10138e204();
  *param_1 = param_2;
  return;
}



/* Entry: 10138e138; end: 10138e14f;  */

undefined1  [16] FUN_10138e138(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10138e150; end: 10138e19f;  */

void FUN_10138e150(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10138ea38();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10138e1a0; end: 10138e203;  */

void FUN_10138e1a0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10138e268(&uStack_98);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_50;
    param_1[8] = uStack_58;
    param_1[0xb] = uStack_40;
    param_1[10] = uStack_48;
    param_1[0xd] = uStack_30;
    param_1[0xc] = uStack_38;
    param_1[0xe] = uStack_28;
    param_1[1] = uStack_90;
    *param_1 = uStack_98;
    param_1[3] = uStack_80;
    param_1[2] = uStack_88;
    param_1[5] = uStack_70;
    param_1[4] = uStack_78;
    param_1[7] = uStack_60;
    param_1[6] = uStack_68;
  }
  return;
}



/* Entry: 10138e204; end: 10138e267;  */

ulong FUN_10138e204(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Entry: 10138e268; end: 10138e6a3;  */

/* WARNING: Removing unreachable block (ram,0x00010138e3ac) */
/* WARNING: Removing unreachable block (ram,0x00010138e5ac) */
/* WARNING: Removing unreachable block (ram,0x00010138e51c) */
/* WARNING: Removing unreachable block (ram,0x00010138e46c) */
/* WARNING: Removing unreachable block (ram,0x00010138e418) */
/* WARNING: Removing unreachable block (ram,0x00010138e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010138e574) */
/* WARNING: Removing unreachable block (ram,0x00010138e5ec) */
/* WARNING: Removing unreachable block (ram,0x00010138e3e0) */

void FUN_10138e268(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  long lVar13;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  long lStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  undefined4 uStack_8c;
  long lStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  byte abStack_62 [2];
  byte abStack_58 [3];
  undefined1 uStack_55;
  byte abStack_54 [4];
  
  lVar3 = 0x112d776d8;
  func_0x0001000285a8(0x112d776d8,&UNK_10d937438);
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_d0 - extraout_x8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_10138ea38();
  func_0x000107c606e0(lVar12,&UNK_1103aa1d8,&UNK_1103aa1d8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_7c = 0;
    lVar4 = lVar12;
    FUN_10138da9c(lVar12,0,0x112d776d8,&UNK_10d937438,
                  PTR___ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF_11034e9d0,
                  FUN_100edba6c);
    uStack_8c = 1;
    lVar5 = lVar12;
    lStack_78 = lVar4;
    FUN_10138da9c(lVar12,1,0x112d776d8,&UNK_10d937438,
                  PTR___ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int64VSgAFm_xtKF_11034e9f0
                  ,FUN_100fb6b80);
    abStack_54[3] = 2;
    pbVar6 = abStack_54 + 3;
    lVar4 = lVar3;
    lStack_88 = lVar5;
    func_0x000107c604d4();
    abStack_54[2] = 3;
    pbVar7 = abStack_54 + 2;
    lVar5 = lVar3;
    lStack_a0 = lVar4;
    pbStack_98 = pbVar6;
    func_0x000107c604d4();
    abStack_54[1] = 4;
    pbVar6 = abStack_54 + 1;
    lVar4 = lVar3;
    lStack_b0 = lVar5;
    pbStack_a8 = pbVar7;
    func_0x000107c604d4();
    uStack_55 = 5;
    lStack_c0 = lVar4;
    pbStack_b8 = pbVar6;
    func_0x00010138aeb0();
    puVar8 = &UNK_1103a9b70;
    func_0x000107c604e8(abStack_54,&UNK_1103a9b70,&uStack_55,lVar3,&UNK_1103a9b70,pbVar6);
    uStack_c4 = (uint)abStack_54[0];
    abStack_58[1] = 6;
    func_0x00010138aef0();
    puVar9 = &UNK_1103a9c00;
    func_0x000107c604e8(abStack_58 + 2,&UNK_1103a9c00,abStack_58 + 1,lVar3,&UNK_1103a9c00,puVar8);
    uStack_c8 = (uint)abStack_58[2];
    abStack_62[1] = 7;
    func_0x00010138af30();
    puVar8 = &UNK_1103a9c90;
    func_0x000107c604e8(abStack_58,&UNK_1103a9c90,abStack_62 + 1,lVar3,&UNK_1103a9c90,puVar9);
    uStack_cc = (uint)abStack_58[0];
    uStack_63 = 8;
    func_0x00010138af70();
    func_0x000107c604e8(abStack_62,&UNK_1103a9d20,&uStack_63,lVar3,&UNK_1103a9d20,puVar8);
    uStack_d0 = (uint)abStack_62[0];
    uStack_64 = 9;
    puVar10 = &uStack_64;
    lVar4 = lVar3;
    lStack_70 = lVar13;
    func_0x000107c604d4();
    uStack_65 = 10;
    puVar11 = &uStack_65;
    lVar13 = lVar3;
    func_0x000107c604d4();
    (**(code **)(lStack_70 + 8))(lVar12,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = lStack_78;
    *(char *)(param_1 + 1) = (char)uStack_7c;
    param_1[2] = lStack_88;
    *(char *)(param_1 + 3) = (char)uStack_8c;
    param_1[4] = (long)pbStack_98;
    param_1[5] = lStack_a0;
    param_1[6] = (long)pbStack_a8;
    param_1[7] = lStack_b0;
    param_1[8] = (long)pbStack_b8;
    param_1[9] = lStack_c0;
    *(char *)(param_1 + 10) = (char)uStack_c4;
    *(char *)((long)param_1 + 0x51) = (char)uStack_c8;
    *(char *)((long)param_1 + 0x52) = (char)uStack_cc;
    *(char *)((long)param_1 + 0x53) = (char)uStack_d0;
    param_1[0xb] = (long)puVar10;
    param_1[0xc] = lVar4;
    param_1[0xd] = (long)puVar11;
    param_1[0xe] = lVar13;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10138e6a4; end: 10138e70f;  */

long FUN_10138e6a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10138e710; end: 10138e7b3;  */

undefined8 * FUN_10138e710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 10138e7b4; end: 10138e8bf;  */

undefined8 * FUN_10138e7b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  *(undefined1 *)((long)param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x53);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10138e8c0; end: 10138e95b;  */

undefined8 * FUN_10138e8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar1 = param_2[0xc];
  uVar2 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10138e95c; end: 10138ea37;  */

int FUN_10138e95c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10138ea38; end: 10138ea77;  */

void FUN_10138ea38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937544;
  func_0x000107c61520(&UNK_10d937544,&UNK_1103aa1d8);
  puRam0000000112d776e0 = puVar1;
  return;
}



/* Entry: 10138ea78; end: 10138ebdf;  */

int FUN_10138ea78(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10138eaf4;
        goto LAB_10138ead8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10138ead8:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_10138eaf4:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10138ebe0; end: 10138ec1f;  */

void FUN_10138ebe0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93751c;
  func_0x000107c61520(&UNK_10d93751c,&UNK_1103aa1d8);
  puRam0000000112d776e8 = puVar1;
  return;
}



/* Entry: 10138ec20; end: 10138ec23;  */

void FUN_10138ec20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93747c;
  func_0x000107c61520(&UNK_10d93747c,&UNK_1103aa1d8);
  puRam0000000112d776f0 = puVar1;
  return;
}



/* Entry: 10138ec24; end: 10138ec63;  */

void FUN_10138ec24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93747c;
  func_0x000107c61520(&UNK_10d93747c,&UNK_1103aa1d8);
  puRam0000000112d776f0 = puVar1;
  return;
}



/* Entry: 10138ec64; end: 10138ec67;  */

void FUN_10138ec64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937454;
  func_0x000107c61520(&UNK_10d937454,&UNK_1103aa1d8);
  puRam0000000112d776f8 = puVar1;
  return;
}



/* Entry: 10138ec68; end: 10138eca7;  */

void FUN_10138ec68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d776f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d937454;
  func_0x000107c61520(&UNK_10d937454,&UNK_1103aa1d8);
  puRam0000000112d776f8 = puVar1;
  return;
}



/* Entry: 10138eca8; end: 10138f233;  */

/* WARNING: Possible PIC construction at 0x00010138f058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138f1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138f05c) */
/* WARNING: Removing unreachable block (ram,0x00010138f074) */
/* WARNING: Removing unreachable block (ram,0x00010138f0d8) */
/* WARNING: Removing unreachable block (ram,0x00010138f1f4) */

void FUN_10138eca8(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  ulong *param_6,long param_7,char param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  lVar8 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) goto code_r0x000107c615e8;
  uStack_f0 = param_3;
  if (param_3 == 0) {
    uStack_f0 = uVar1;
    func_0x000107c40f64();
    func_0x000107c61180();
    if (uStack_f0 != 0) {
      uVar3 = uStack_f0;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (uVar4 == param_1 && lVar8 == param_2) {
        func_0x000107c6142c(lVar8);
      }
      else {
        func_0x000107c605b8(uVar4,lVar8,param_1,param_2,0);
        func_0x000107c6142c(lVar8);
        if ((uVar4 & 1) == 0) {
          func_0x000107c61170(uStack_f0);
          goto LAB_10138edb0;
        }
      }
      func_0x000107c61174(uStack_f0);
      goto LAB_10138ee28;
    }
LAB_10138edb0:
    uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c6157c(uVar10);
    func_0x000100075034(FUN_10138f29c,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar10);
    uStack_f0 = 0;
  }
  else {
LAB_10138ee28:
    uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_d0 = uStack_f0;
    puStack_c8 = param_6;
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar3 = uStack_f0;
    func_0x000107c61174(uStack_f0);
    func_0x000107c6157c(uVar10);
    func_0x000100075034(FUN_101390c9c,&uStack_e0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uVar10);
  }
  puVar5 = PTR_PTR_1126e1c40;
  func_0x000107c610f8(PTR_PTR_1126e1c40);
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126e2b98;
  func_0x000107c610f8(PTR_PTR_1126e2b98);
  func_0x000107c453e4();
  uVar3 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c549e0(puVar6);
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x000107c4b3f8(uVar1);
  func_0x000107c61180();
  func_0x000107c55e70(puVar6);
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x000107c4b474(uVar1);
  func_0x000107c61180();
  func_0x000107c59b00(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c4b414(uVar1);
  func_0x000107c55e78(puVar6);
  uVar3 = param_1;
  lVar8 = param_2;
  FUN_101390134();
  if ((uVar3 & 1) != 0) {
    func_0x000107c55e78(puVar6);
  }
  lVar9 = lVar8;
  if (uStack_f0 == 0) {
LAB_10138f0f4:
    uVar7 = (uint)lVar9;
    func_0x000107c525a8(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c40f74(uVar1);
    func_0x000107c55d88(puVar5);
    func_0x000107c59560(puVar5);
    FUN_10138f2d0(param_5);
    func_0x000107c59558(puVar5);
    if (param_6[5] != 1) {
      uStack_d8 = param_6[1];
      uStack_e0 = *param_6;
      puStack_c8 = (ulong *)param_6[3];
      uStack_d0 = param_6[2];
      uStack_c0 = param_6[4];
      uStack_88 = param_6[0xb];
      uStack_90 = param_6[10];
      uStack_78 = param_6[0xd];
      uStack_80 = param_6[0xc];
      uStack_70 = param_6[0xe];
      uStack_a8 = param_6[7];
      uStack_b0 = param_6[6];
      uStack_98 = param_6[9];
      uStack_a0 = param_6[8];
      uVar7 = (uint)&uStack_e0;
      uStack_b8 = param_6[5];
      FUN_101390758(puVar5);
    }
    if ((param_8 != '\x01') && (0 < param_7)) {
      func_0x000107c54c08(puVar5);
      func_0x000107c525c0(puVar5);
    }
    func_0x00010138f3a4();
    if ((uVar7 & 0xff) != 1) {
      func_0x000107c594b4(puVar5);
    }
    func_0x000107c61174(puVar5);
    func_0x000107c4bfb0(lVar2);
    goto code_r0x000107c615e8;
  }
  func_0x000107c61174();
  uVar3 = uStack_f0;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((uVar4 == param_1) && (lVar8 == param_2)) {
    func_0x000107c6142c(lVar8);
  }
  else {
    lVar9 = lVar8;
    func_0x000107c605b8(uVar4,lVar8,param_1,param_2,0);
    func_0x000107c6142c(lVar8);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61170(uStack_f0);
      func_0x000107c61170(uStack_f0);
      goto LAB_10138f0f4;
    }
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (uStack_f0 == 0) {
LAB_10138f014:
    uVar1 = 0;
  }
  else {
    uVar1 = uStack_f0;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(uStack_f0);
    if (uVar1 == 0) goto LAB_10138f014;
  }
  func_0x000107c57b18(puVar6);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(&uStack_e0);
  uVar1 = uStack_e0;
  func_0x000107c44098(uStack_e0);
  func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10138f234; end: 10138f29b;  */

void FUN_10138f234(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  if (*(long *)(param_3 + 0x28) == 1) {
    uVar2 = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_3 + 0x18);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000107c61174(param_2);
  return;
}



/* Entry: 10138f29c; end: 10138f2cf;  */

void FUN_10138f29c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10138f2d0; end: 10138f417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10138f2d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_1130364e8;
  lVar4 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + _DAT_1130364e8,auStack_48,0,0);
  lVar4 = lVar4 + lVar3;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x0001000d224c(&lStack_50);
    func_0x000107c61574(lVar4);
    lVar4 = lStack_50;
    func_0x000107c3d198();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(lStack_50);
    }
    else {
      lVar3 = lVar4;
      func_0x000107c49820();
      uVar1 = 5;
      if (lVar3 != 0x73) {
        uVar1 = param_1;
      }
      uVar2 = 4;
      if (lVar3 != 0x72) {
        uVar2 = uVar1;
      }
      param_1 = 1;
      if (lVar3 != 8) {
        param_1 = uVar2;
      }
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(lVar4);
    }
  }
  return param_1;
}



/* Entry: 10138f418; end: 10138f9bf;  */

/* WARNING: Possible PIC construction at 0x00010138f72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010138f984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010138f730) */
/* WARNING: Removing unreachable block (ram,0x00010138f748) */
/* WARNING: Removing unreachable block (ram,0x00010138f7a8) */
/* WARNING: Removing unreachable block (ram,0x00010138f988) */

void FUN_10138f418(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,long param_7,char param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uStack_498;
  long lStack_488;
  undefined1 auStack_458 [336];
  long alStack_308 [42];
  ulong auStack_1b8 [37];
  undefined8 uStack_90;
  long lStack_88;
  
  cVar1 = *(char *)(param_6 + 0x92);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) goto code_r0x000107c615e8;
  uVar9 = param_3;
  if (param_3 == 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c6157c(uVar12);
    func_0x0001000c74f0(auStack_1b8);
    func_0x000107c61574(uVar12);
    uVar9 = auStack_1b8[0];
  }
  puVar6 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c61174(param_3);
  func_0x000107c453e4(puVar6);
  func_0x000107c610b4(auStack_1b8,param_6,0x149);
  iVar3 = (int)auStack_1b8;
  FUN_1013903cc();
  if (iVar3 == 1) {
    uStack_498 = 0;
    lStack_488 = 0;
LAB_10138f558:
    bVar2 = true;
  }
  else {
    uStack_498 = uStack_90;
    lStack_488 = lStack_88;
    if (cVar1 == '\v') goto LAB_10138f558;
    func_0x00010138da4c();
    bVar2 = false;
  }
  puVar7 = PTR_PTR_1126e2b98;
  func_0x000107c610f8(PTR_PTR_1126e2b98);
  func_0x000107c453e4();
  uVar13 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c549e0(puVar7);
  func_0x000107c61170(uVar13);
  lVar8 = lVar4;
  func_0x000107c4b3f8(lVar4);
  func_0x000107c61180();
  func_0x000107c55e70(puVar7);
  func_0x000107c61170(lVar8);
  lVar8 = lVar4;
  func_0x000107c4b474(lVar4);
  func_0x000107c61180();
  func_0x000107c59b00(puVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c4b414(lVar4);
  func_0x000107c55e78(puVar7);
  uVar13 = param_1;
  lVar8 = param_2;
  FUN_101390134();
  if ((uVar13 & 1) != 0) {
    func_0x000107c55e78(puVar7);
  }
  if (uVar9 == 0) {
LAB_10138f7bc:
    if (lStack_488 != 0) {
      func_0x000107c5fadc(uStack_498);
      func_0x000107c55f08(puVar7);
      func_0x000107c61170(uStack_498);
    }
    if (!bVar2) {
      func_0x000107c57888(puVar7);
    }
    func_0x000107c525a8(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c5fadc(param_1,param_2);
    lVar8 = lVar4;
    func_0x000107c5b3ec(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c59478(puVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c59560(puVar6);
    func_0x000107c40f74(lVar4);
    func_0x000107c55d88(puVar6);
    FUN_10138f2d0(param_5);
    func_0x000107c59558(puVar6);
    func_0x000107c610b4(auStack_458,param_6,0x149);
    iVar3 = (int)auStack_458;
    FUN_1013903cc();
    if (iVar3 != 1) {
      func_0x000107c610b4(alStack_308,auStack_458,0x149);
      FUN_1013909b8(puVar6,alStack_308);
    }
    if ((param_8 != '\x01') && (0 < param_7)) {
      func_0x000107c54c08(puVar6);
      uVar12 = 2;
      func_0x000107c3115c(2);
      func_0x000107c61180();
      func_0x000107c525c0(puVar6);
      func_0x000107c61170(uVar12);
    }
    FUN_10138f9c0(param_6);
    uVar11 = 0;
    FUN_1013903f0();
    lVar8 = param_6;
    func_0x000107c5fc48(param_6);
    func_0x000107c6142c(param_6);
    func_0x000107c59880(puVar6);
    func_0x000107c61170(lVar8);
    func_0x00010138f3a4();
    if ((uVar11 & 0xff) != 1) {
      func_0x000107c594b4(puVar6);
    }
    func_0x000107c4bfb0(lVar5);
    goto code_r0x000107c615e8;
  }
  func_0x000107c61174();
  uVar13 = uVar9;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar10 = uVar13;
  func_0x000107c5faec();
  func_0x000107c61170(uVar13);
  if ((uVar10 == param_1) && (lVar8 == param_2)) {
    func_0x000107c6142c(lVar8);
  }
  else {
    func_0x000107c605b8(uVar10,lVar8,param_1,param_2,0);
    func_0x000107c6142c(lVar8);
    if ((uVar10 & 1) == 0) {
      func_0x000107c61170(uVar9);
      goto LAB_10138f7bc;
    }
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (uVar9 == 0) {
LAB_10138f6e8:
    uVar13 = 0;
  }
  else {
    uVar13 = uVar9;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    if (uVar13 == 0) goto LAB_10138f6e8;
  }
  func_0x000107c57b18(puVar7);
  func_0x000107c61170(uVar13);
  func_0x0001000d224c(alStack_308);
  func_0x000107c44098(alStack_308[0]);
  func_0x000107c61180();
  lVar4 = alStack_308[0];
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 10138f9c0; end: 101390133;  */

undefined * FUN_10138f9c0(long param_1)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long alStack_1d8 [2];
  char cStack_1c8;
  long lStack_110;
  char cStack_108;
  
  cVar2 = *(char *)(param_1 + 0xc0);
  uVar23 = *(undefined8 *)(param_1 + 0xd8);
  cVar3 = *(char *)(param_1 + 0xe0);
  lVar19 = *(long *)(param_1 + 0xe8);
  cVar4 = *(char *)(param_1 + 0xf0);
  uVar22 = *(undefined8 *)(param_1 + 0xf8);
  cVar5 = *(char *)(param_1 + 0x100);
  lVar17 = *(long *)(param_1 + 0x108);
  cVar6 = *(char *)(param_1 + 0x110);
  uVar21 = *(undefined8 *)(param_1 + 0x118);
  cVar7 = *(char *)(param_1 + 0x120);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c6157c(uVar20);
  func_0x0001000c74f0(alStack_1d8);
  func_0x000107c61574(uVar20);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((alStack_1d8[0] != 0) &&
     (func_0x000107c61170(), puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8, cStack_1c8 != '\x01')
     ) {
    puVar10 = PTR_PTR_1126e2ba0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59874();
    func_0x000107c59dcc(puVar10);
    if ((ulong)puVar13 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar13) {
        puVar11 = puVar13;
      }
      func_0x000107c60480(puVar11);
    }
    puVar12 = (undefined *)0x0;
    FUN_1013904a0(0,puVar11 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar18 = (ulong)puVar12 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar18 + 0x10);
    puVar13 = puVar12;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_1013904a0(puVar13,uVar1 + 1,1,puVar12);
      uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar18 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar18 + uVar1 * 8 + 0x20) = puVar10;
  }
  func_0x000107c610b4(alStack_1d8,param_1,0x149);
  uVar14 = (uint)param_1;
  iVar9 = (int)alStack_1d8;
  FUN_1013903cc();
  if (iVar9 != 1) {
    puVar10 = PTR_PTR_1126e2ba0;
    if (cStack_108 != '\x01') {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59874();
      func_0x000107c59dcc(puVar10);
      puVar11 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
        }
        puVar12 = puVar12 + 1;
        puVar11 = (undefined *)0x0;
        FUN_1013904a0(0,puVar12,1,puVar13);
        uVar14 = (uint)puVar12;
        puVar13 = puVar11;
      }
      puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      lVar16 = uVar1 + 1;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        lVar15 = lVar16;
        FUN_1013904a0(puVar11,lVar16,1,puVar13);
        uVar14 = (uint)lVar15;
        puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        puVar13 = puVar11;
      }
      *(long *)(puVar12 + 0x10) = lVar16;
      *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
      puVar10 = PTR_PTR_1126e2ba0;
      if ((cVar3 != '\x01') &&
         (FUN_10139093c(uVar23), puVar10 = PTR_PTR_1126e2ba0, (uVar14 & 0xff) != 1)) {
        if (SCARRY8(lStack_110,(long)puVar11)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10139003c);
          (*pcVar8)();
        }
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59874();
        func_0x000107c59dcc(puVar10);
        puVar11 = puVar13;
        if ((ulong)puVar13 >> 0x3e != 0) {
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
          puVar12 = puVar12 + 1;
          puVar11 = (undefined *)0x0;
          FUN_1013904a0(0,puVar12,1,puVar13);
          uVar14 = (uint)puVar12;
          puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        }
        uVar1 = *(ulong *)(puVar12 + 0x10);
        lVar16 = uVar1 + 1;
        puVar13 = puVar11;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          lVar15 = lVar16;
          FUN_1013904a0(puVar13,lVar16,1,puVar11);
          uVar14 = (uint)lVar15;
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        }
        *(long *)(puVar12 + 0x10) = lVar16;
        *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
        puVar10 = PTR_PTR_1126e2ba0;
      }
    }
    PTR_PTR_1126e2ba0 = puVar10;
    if (cVar4 != '\x01') {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59874();
      func_0x000107c59dcc(puVar10);
      puVar11 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
        }
        puVar12 = puVar12 + 1;
        puVar11 = (undefined *)0x0;
        FUN_1013904a0(0,puVar12,1,puVar13);
        uVar14 = (uint)puVar12;
        puVar13 = puVar11;
      }
      puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      lVar16 = uVar1 + 1;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        lVar15 = lVar16;
        FUN_1013904a0(puVar11,lVar16,1,puVar13);
        uVar14 = (uint)lVar15;
        puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        puVar13 = puVar11;
      }
      *(long *)(puVar12 + 0x10) = lVar16;
      *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
      if ((cVar5 != '\x01') && (FUN_10139093c(uVar22), (uVar14 & 0xff) != 1)) {
        if (SCARRY8(lVar19,(long)puVar11)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101390040);
          (*pcVar8)();
        }
        puVar10 = PTR_PTR_1126e2ba0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59874();
        func_0x000107c59dcc(puVar10);
        puVar11 = puVar13;
        if ((ulong)puVar13 >> 0x3e != 0) {
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
          puVar12 = puVar12 + 1;
          puVar11 = (undefined *)0x0;
          FUN_1013904a0(0,puVar12,1,puVar13);
          uVar14 = (uint)puVar12;
          puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        }
        uVar1 = *(ulong *)(puVar12 + 0x10);
        lVar19 = uVar1 + 1;
        puVar13 = puVar11;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          lVar16 = lVar19;
          FUN_1013904a0(puVar13,lVar19,1,puVar11);
          uVar14 = (uint)lVar16;
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        }
        *(long *)(puVar12 + 0x10) = lVar19;
        *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
      }
    }
    if (cVar6 != '\x01') {
      puVar10 = PTR_PTR_1126e2ba0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59874();
      func_0x000107c59dcc(puVar10);
      puVar11 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
        }
        puVar12 = puVar12 + 1;
        puVar11 = (undefined *)0x0;
        FUN_1013904a0(0,puVar12,1,puVar13);
        uVar14 = (uint)puVar12;
        puVar13 = puVar11;
      }
      puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      lVar19 = uVar1 + 1;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        lVar16 = lVar19;
        FUN_1013904a0(puVar11,lVar19,1,puVar13);
        uVar14 = (uint)lVar16;
        puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        puVar13 = puVar11;
      }
      *(long *)(puVar12 + 0x10) = lVar19;
      *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
      if ((cVar7 != '\x01') && (FUN_10139093c(uVar21), (uVar14 & 0xff) != 1)) {
        if (SCARRY8(lVar17,(long)puVar11)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101390044);
          (*pcVar8)();
        }
        puVar10 = PTR_PTR_1126e2ba0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59874();
        func_0x000107c59dcc(puVar10);
        puVar11 = puVar13;
        if ((ulong)puVar13 >> 0x3e != 0) {
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480(puVar12);
          puVar11 = (undefined *)0x0;
          FUN_1013904a0(0,puVar12 + 1,1,puVar13);
          puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        }
        uVar1 = *(ulong *)(puVar12 + 0x10);
        puVar13 = puVar11;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_1013904a0(puVar13,uVar1 + 1,1,puVar11);
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        }
        *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar10;
      }
    }
    if (cVar2 != '\x01') {
      puVar10 = PTR_PTR_1126e2ba0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59874();
      func_0x000107c59dcc(puVar10);
      puVar11 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar13 < 0)) ||
         (puVar11 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480(puVar12);
        }
        puVar11 = (undefined *)0x0;
        FUN_1013904a0(0,puVar12 + 1,1,puVar13);
      }
      uVar18 = (ulong)puVar11 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar18 + 0x10);
      puVar13 = puVar11;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_1013904a0(puVar13,uVar1 + 1,1,puVar11);
        uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar18 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar18 + uVar1 * 8 + 0x20) = puVar10;
    }
  }
  return puVar13;
}



/* Entry: 101390134; end: 1013901e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101390134(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130364e8;
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + _DAT_1130364e8,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61648();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    func_0x000107c61574(lVar3);
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = uStack_50;
    func_0x000107c499e4(uStack_50);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uStack_50);
  }
  return uVar2;
}



/* Entry: 1013901e8; end: 101390253;  */

void FUN_1013901e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101390254; end: 10139025b;  */

void FUN_101390254(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10139025c; end: 1013902af;  */

undefined8 * FUN_10139025c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1013902b0; end: 1013902f3;  */

undefined8 * FUN_1013902b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1013902f4; end: 10139038b;  */

int FUN_1013902f4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10139038c; end: 1013903cb;  */

void FUN_10139038c(void)

{
  FUN_10138eca8();
  return;
}



/* Entry: 1013903cc; end: 1013903ef;  */

int FUN_1013903cc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1013903f0; end: 101390433;  */

void FUN_1013903f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d778f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e2ba0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d778f8 = puVar1;
  return;
}



/* Entry: 101390434; end: 10139049f;  */

void FUN_101390434(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1013904a0; end: 1013905c7;  */

ulong FUN_1013904a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013905c8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1013905c8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013905c4);
      (*pcVar1)();
    }
    FUN_101390660(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1013905c8; end: 10139065f;  */

code * FUN_1013905c8(long param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    pcVar2 = FUN_1013903f0;
    FUN_101390434(FUN_1013903f0,0x112d77900,&UNK_10daf1770);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(long *)(pcVar2 + 0x10) = param_1;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  return pcVar2;
}



/* Entry: 101390660; end: 101390757;  */

long FUN_101390660(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101390754);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101390758);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1013903f0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1013903f0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101390750);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101390758; end: 10139093b;  */

/* WARNING: Possible PIC construction at 0x000101390794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013907bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013907e4: Changing call to branch */

void FUN_101390758(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c5fadc(uVar2);
    func_0x000107c5647c(param_1);
    goto code_r0x000107c61170;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c5fadc(uVar2);
    func_0x000107c542d0(param_1);
    goto code_r0x000107c61170;
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    func_0x000107c5fadc(uVar2);
    func_0x000107c53d9c(param_1);
    goto code_r0x000107c61170;
  }
  bVar1 = *(byte *)(param_2 + 0x50);
  if (bVar1 < 2) {
    uVar3 = 0;
    if (bVar1 != 0) {
      uVar3 = 1;
    }
LAB_10139080c:
    func_0x000107c54e24(param_1,0,uVar3);
  }
  else if (bVar1 == 2) {
    uVar3 = 2;
    goto LAB_10139080c;
  }
  if ((*(byte *)(param_2 + 0x51) < 4) || (*(byte *)(param_2 + 0x51) - 4 < 2)) {
    func_0x000107c552b4(param_1);
  }
  if (*(char *)(param_2 + 0x52) != '\x02') {
    func_0x000107c5798c(param_1);
  }
  bVar1 = *(byte *)(param_2 + 0x53);
  if ((((bVar1 < 4) || (bVar1 < 6)) || (bVar1 == 6)) || (bVar1 == 7)) {
    func_0x000107c57980(param_1);
  }
  if (*(long *)(param_2 + 0x60) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c5fadc(uVar2);
  func_0x000107c57984(param_1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10139093c; end: 1013909b7;  */

undefined1  [16] FUN_10139093c(double param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
    return ZEXT816(1) << 0x40;
  }
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013909b0);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013909b4);
    (*pcVar1)();
  }
  if (param_1 < 9.223372036854776e+18) {
    auVar2._0_8_ = (ulong)param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013909b8);
  (*pcVar1)();
}



/* Entry: 1013909b8; end: 101390c9b;  */

void FUN_1013909b8(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c5fadc(uVar2);
    func_0x000107c5647c(param_1);
    func_0x000107c61170(uVar2);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c5fadc(uVar2);
    func_0x000107c542d0(param_1);
    func_0x000107c61170(uVar2);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c5fadc(uVar2);
    func_0x000107c59c44(param_1);
    func_0x000107c61170(uVar2);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    func_0x000107c5fadc(uVar2);
    func_0x000107c53d9c(param_1);
    func_0x000107c61170(uVar2);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    func_0x000107c5fadc(uVar2);
    func_0x000107c54664(param_1);
    func_0x000107c61170(uVar2);
  }
  lVar4 = *(long *)(param_2 + 0x140);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x138);
    func_0x000107c5fadc(uVar2);
    func_0x000107c54ee4(param_1);
    func_0x000107c61170(uVar2);
  }
  uVar3 = (uint)lVar4;
  if ((*(byte *)(param_2 + 0x40) < 2) || (*(byte *)(param_2 + 0x40) == 2)) {
    func_0x000107c54e24(param_1);
  }
  if ((*(byte *)(param_2 + 0x41) < 4) || (*(byte *)(param_2 + 0x41) - 4 < 2)) {
    func_0x000107c552b4(param_1);
  }
  if (*(char *)(param_2 + 0x42) != '\x02') {
    func_0x000107c5798c(param_1);
  }
  if ((*(char *)(param_2 + 0x43) != '\b') && (FUN_10138da38(), (uVar3 & 0xff) != 1)) {
    func_0x000107c57980(param_1);
  }
  lVar4 = *(long *)(param_2 + 0x50);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    func_0x000107c5fadc(uVar2);
    func_0x000107c57984(param_1);
    func_0x000107c61170(uVar2);
  }
  uVar3 = (uint)lVar4;
  bVar1 = *(byte *)(param_2 + 0x91);
  if (((bVar1 < 3) || (bVar1 == 3)) || (bVar1 == 4)) {
    func_0x000107c54e2c(param_1);
  }
  if (*(char *)(param_2 + 0x93) != '\x10') {
    func_0x00010138da44();
    func_0x000107c54e1c(param_1);
  }
  if ((*(char *)(param_2 + 0xb0) != '\x01') &&
     (FUN_10139093c(*(undefined8 *)(param_2 + 0xa8)), (uVar3 & 0xff) != 1)) {
    func_0x000107c55acc(param_1);
  }
  if (*(char *)(param_2 + 0x78) != '\x01') {
    func_0x000107c552a0(param_1);
    func_0x000107c5529c(param_1);
  }
  if (*(char *)(param_2 + 0x90) != '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    func_0x000107c55298(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1aa870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setImageResolutionDownscaledHeig_112648440,uVar2);
    return;
  }
  return;
}



/* Entry: 101390c9c; end: 101390cb3;  */

void FUN_101390c9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10138f234(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101390cb4; end: 101390cbb;  */

undefined8 * FUN_101390cb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61174();
  return param_1;
}



/* Entry: 101390cbc; end: 101390e73;  */

void FUN_101390cbc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar3 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar4 = 0x23;
  func_0x0001044e4b78();
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = uVar4;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar5 = 1;
  func_0x000107c602e8();
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101390e74);
      (*pcVar2)();
    }
    uVar4 = *puVar11;
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar5 + 0x38;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60114();
  uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar6 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar6 & 0x3f);
  if ((uVar9 & uVar8) != 0) {
    do {
      uVar8 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8);
      func_0x000107c61174();
      uVar7 = uVar8;
      func_0x000107c60118();
      func_0x000107c61170(uVar8);
      if ((uVar7 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_101390e2c;
      }
      uVar6 = uVar6 + 1 & ~uVar10;
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101390e70);
    (*pcVar2)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
LAB_101390e2c:
  func_0x000107c61588(param_1);
  func_0x000107c61408(puVar11,*(undefined8 *)(param_1 + 0x10),uVar3);
  lRam00000001137ff3c0 = lVar5;
  return;
}



/* Entry: 101390e74; end: 101390e83;  */

undefined1  [16] FUN_101390e74(void)

{
  return ZEXT816(0x1103aa358);
}



/* Entry: 101390e84; end: 101390f13;  */

void FUN_101390e84(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101390f14);
      (*pcVar1)();
    }
    FUN_101390f14(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101390f14; end: 101391783;  */

/* WARNING: Possible PIC construction at 0x000101390f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013910b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013910dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013915f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139187c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139149c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139118c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013911d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013913e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013916c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101391638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101392424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139163c) */
/* WARNING: Removing unreachable block (ram,0x000101391714) */
/* WARNING: Removing unreachable block (ram,0x0001013916c4) */
/* WARNING: Removing unreachable block (ram,0x00010139140c) */
/* WARNING: Removing unreachable block (ram,0x000101391658) */
/* WARNING: Removing unreachable block (ram,0x00010139145c) */
/* WARNING: Removing unreachable block (ram,0x00010139166c) */
/* WARNING: Removing unreachable block (ram,0x0001013913e8) */
/* WARNING: Removing unreachable block (ram,0x000101391628) */
/* WARNING: Removing unreachable block (ram,0x0001013913f4) */
/* WARNING: Removing unreachable block (ram,0x0001013911d4) */
/* WARNING: Removing unreachable block (ram,0x000101391250) */
/* WARNING: Removing unreachable block (ram,0x000101391208) */
/* WARNING: Removing unreachable block (ram,0x000101391388) */
/* WARNING: Removing unreachable block (ram,0x000101391190) */
/* WARNING: Removing unreachable block (ram,0x0001013914a0) */
/* WARNING: Removing unreachable block (ram,0x000101391880) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x0001013915f8) */
/* WARNING: Removing unreachable block (ram,0x00010139173c) */
/* WARNING: Removing unreachable block (ram,0x000101391760) */
/* WARNING: Removing unreachable block (ram,0x000101391594) */
/* WARNING: Removing unreachable block (ram,0x000101391544) */
/* WARNING: Removing unreachable block (ram,0x0001013910e0) */
/* WARNING: Removing unreachable block (ram,0x0001013914b0) */
/* WARNING: Removing unreachable block (ram,0x000101391150) */
/* WARNING: Removing unreachable block (ram,0x0001013914d4) */
/* WARNING: Removing unreachable block (ram,0x0001013910bc) */
/* WARNING: Removing unreachable block (ram,0x00010139148c) */
/* WARNING: Removing unreachable block (ram,0x0001013910c8) */
/* WARNING: Removing unreachable block (ram,0x000101391068) */
/* WARNING: Removing unreachable block (ram,0x000101391004) */
/* WARNING: Removing unreachable block (ram,0x000101391154) */
/* WARNING: Removing unreachable block (ram,0x000101391024) */
/* WARNING: Removing unreachable block (ram,0x000101390f74) */
/* WARNING: Removing unreachable block (ram,0x000101390fc4) */
/* WARNING: Removing unreachable block (ram,0x000101390fb0) */
/* WARNING: Removing unreachable block (ram,0x000101391210) */
/* WARNING: Removing unreachable block (ram,0x000101391780) */
/* WARNING: Removing unreachable block (ram,0x000101391228) */
/* WARNING: Removing unreachable block (ram,0x000101392374) */
/* WARNING: Removing unreachable block (ram,0x0001013923a0) */
/* WARNING: Removing unreachable block (ram,0x0001013923b8) */
/* WARNING: Removing unreachable block (ram,0x000101390fb8) */
/* WARNING: Removing unreachable block (ram,0x000101390fcc) */
/* WARNING: Removing unreachable block (ram,0x000101392428) */

void FUN_101390f14(undefined8 param_1)

{
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101391784; end: 1013918a3; -[_TtC34GenAILensGenerationLoggerApiPlugin35GenAILensGenerationLoggerApiHandler handleRequest:] */

void FUN_101391784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1103aa378;
  func_0x000107c613fc(&UNK_1103aa378,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103aa3a0;
  func_0x000107c613fc(&UNK_1103aa3a0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_50 = FUN_1013918fc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_1103aa3b8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1013918a4; end: 1013918a7; -[_TtC34GenAILensGenerationLoggerApiPlugin35GenAILensGenerationLoggerApiHandler reset] */

void FUN_1013918a4(void)

{
  return;
}



/* Entry: 1013918a8; end: 1013918fb;  */

void FUN_1013918a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013918fc; end: 10139191f;  */

void FUN_1013918fc(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101390f14);
      (*pcVar2)();
    }
    FUN_101390f14(lVar1,param_1);
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101391920; end: 101391a1f;  */

/* WARNING: Removing unreachable block (ram,0x000101391a14) */

undefined1  [16] FUN_101391920(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_101391a20(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_101391a20(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 101391a20; end: 101391c9b;  */

undefined1  [16] FUN_101391a20(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101391c9c);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_101391c8c;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101391c8c;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_101391c70;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101391c8c;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_101391c70:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101391c98);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_101391c8c:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101391c8c;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_101391c70;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 101391c9c; end: 101391ccf;  */

/* WARNING: Possible PIC construction at 0x000101391cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101391cc0) */

void FUN_101391c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 101391cd0; end: 101392017;  */

undefined1  [16] FUN_101391cd0(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte **ppbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  byte *pbStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434();
    uVar12 = 0;
    lVar4 = -0x2fffffffffffffec;
    func_0x000100029284();
    uVar5 = param_1;
    if ((uVar12 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(param_1 + 0x38) + lVar4 * 0x10);
      pbVar8 = (byte *)*puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434(uVar5);
      func_0x000107c6142c(param_1);
      uVar6 = (ulong)pbVar8 & 0xffffffffffff;
      uVar7 = uVar5 >> 0x38 & 0xf;
      uVar12 = uVar6;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar12 = uVar7;
      }
      if (uVar12 != 0) {
        if ((uVar5 >> 0x3c & 1) == 0) {
          if ((uVar5 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar8 >> 0x3c & 1) == 0) {
              uVar6 = uVar5;
              func_0x000107c60358();
            }
            else {
              pbVar8 = (byte *)((uVar5 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar8 == 0x2b) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101392014);
                (*pcVar3)();
              }
              lVar4 = uVar6 - 1;
              if (lVar4 == 0) goto LAB_101391f98;
              pbVar11 = (byte *)0x0;
              do {
                pbVar8 = pbVar8 + 1;
                if (((9 < *pbVar8 - 0x30) ||
                    (lVar10 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar8 - 0x30), pbVar11 = (byte *)(lVar10 + uVar12),
                   SCARRY8(lVar10,uVar12))) goto LAB_101391f98;
                uVar12 = 0;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
            else if (*pbVar8 == 0x2d) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10139200c);
                (*pcVar3)();
              }
              lVar4 = uVar6 - 1;
              if (lVar4 == 0) {
LAB_101391f98:
                uVar12 = 1;
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar11 = (byte *)0x0;
                do {
                  pbVar8 = pbVar8 + 1;
                  if (((9 < *pbVar8 - 0x30) ||
                      (lVar10 = (long)pbVar11 * 10,
                      SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar12 = (ulong)(byte)(*pbVar8 - 0x30), pbVar11 = (byte *)(lVar10 - uVar12),
                     SBORROW8(lVar10,uVar12))) goto LAB_101391f98;
                  uVar12 = 0;
                  lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
              }
            }
            else {
              if (uVar6 == 0) goto LAB_101391f98;
              pbVar11 = (byte *)0x0;
              if (pbVar8 == (byte *)0x0) {
                uVar12 = 0;
              }
              else {
                do {
                  if (((9 < *pbVar8 - 0x30) ||
                      (lVar4 = (long)pbVar11 * 10,
                      SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                     (uVar12 = (ulong)(byte)(*pbVar8 - 0x30), pbVar11 = (byte *)(lVar4 + uVar12),
                     SCARRY8(lVar4,uVar12))) goto LAB_101391f98;
                  uVar12 = 0;
                  uVar6 = uVar6 - 1;
                  pbVar8 = pbVar8 + 1;
                } while (uVar6 != 0);
              }
            }
          }
          else {
            pbStack_40 = pbVar8;
            uStack_38 = uVar5 & 0xffffffffffffff;
            uVar2 = (uint)pbVar8 & 0xff;
            if (uVar2 == 0x2b) {
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101392018);
                (*pcVar3)();
              }
              lVar4 = uVar7 - 1;
              if (lVar4 == 0) goto LAB_101391f98;
              pbVar11 = (byte *)0x0;
              pbVar8 = (byte *)((ulong)&pbStack_40 | 1);
              do {
                if (((9 < *pbVar8 - 0x30) ||
                    (lVar10 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar8 - 0x30), pbVar11 = (byte *)(lVar10 + uVar12),
                   SCARRY8(lVar10,uVar12))) goto LAB_101391f98;
                uVar12 = 0;
                lVar4 = lVar4 + -1;
                pbVar8 = pbVar8 + 1;
              } while (lVar4 != 0);
            }
            else if (uVar2 == 0x2d) {
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101392010);
                (*pcVar3)();
              }
              lVar4 = uVar7 - 1;
              if (lVar4 == 0) goto LAB_101391f98;
              pbVar11 = (byte *)0x0;
              pbVar8 = (byte *)((ulong)&pbStack_40 | 1);
              do {
                if (((9 < *pbVar8 - 0x30) ||
                    (lVar10 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar8 - 0x30), pbVar11 = (byte *)(lVar10 - uVar12),
                   SBORROW8(lVar10,uVar12))) goto LAB_101391f98;
                uVar12 = 0;
                lVar4 = lVar4 + -1;
                pbVar8 = pbVar8 + 1;
              } while (lVar4 != 0);
            }
            else {
              if (uVar7 == 0) goto LAB_101391f98;
              pbVar11 = (byte *)0x0;
              ppbVar9 = &pbStack_40;
              do {
                if (((9 < *(byte *)ppbVar9 - 0x30) ||
                    (lVar4 = (long)pbVar11 * 10,
                    SUB168(SEXT816((long)pbVar11) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*(byte *)ppbVar9 - 0x30),
                   pbVar11 = (byte *)(lVar4 + uVar12), SCARRY8(lVar4,uVar12))) goto LAB_101391f98;
                uVar12 = 0;
                uVar7 = uVar7 - 1;
                ppbVar9 = (byte **)((long)ppbVar9 + 1);
              } while (uVar7 != 0);
            }
          }
        }
        else {
          uVar12 = uVar5;
          FUN_101391920(pbVar8,uVar5,10);
          pbVar11 = pbVar8;
        }
        func_0x000107c6142c(uVar5);
        pbVar8 = (byte *)0x0;
        if (((uint)uVar12 & 0xff) != 1) {
          pbVar8 = pbVar11;
        }
        goto LAB_101391fb8;
      }
    }
    func_0x000107c6142c(uVar5);
  }
  uVar12 = 1;
  pbVar8 = (byte *)0x0;
LAB_101391fb8:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = pbVar8;
  return auVar13;
}



/* Entry: 101392018; end: 10139228b;  */

void FUN_101392018(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101392278);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10139228c);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10139227c);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101392274);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10139228c; end: 10139245b;  */

/* WARNING: Possible PIC construction at 0x00010139233c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101392340) */

void FUN_10139228c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  func_0x000107c48368(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139245c; end: 10139249b;  */

void FUN_10139245c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9373ec;
  func_0x000107c61520(&UNK_10d9373ec,&UNK_1103aa118);
  puRam0000000112d77a30 = puVar1;
  return;
}



/* Entry: 10139249c; end: 1013924db;  */

void FUN_10139249c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  *(undefined8 *)((long)param_1 + 0x141) = 0;
  *(undefined8 *)((long)param_1 + 0x139) = 0;
  return;
}



/* Entry: 1013924dc; end: 10139251b;  */

undefined8 FUN_1013924dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10139251c; end: 10139255b;  */

void FUN_10139251c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d77a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9369dc;
  func_0x000107c61520(&UNK_10d9369dc,&UNK_1103a9900);
  puRam0000000112d77a40 = puVar1;
  return;
}



/* Entry: 10139255c; end: 10139255f;  */

void FUN_10139255c(void)

{
  return;
}



/* Entry: 101392560; end: 101392b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101392560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  
  lVar12 = 0x40;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(long *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  plVar16 = *(long **)(param_2 + _DAT_113074ea0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c40534();
  func_0x000107c61180();
  plVar4 = plVar16;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000100b9a7ec();
  if (plVar4 == (long *)*plVar16 && lVar12 == plVar16[1]) {
    func_0x000107c6142c(lVar12);
    uVar17 = 3;
    uVar15 = 3;
  }
  else {
    func_0x000107c605b8(plVar4,lVar12,(long *)*plVar16,plVar16[1],0);
    func_0x000107c6142c(lVar12);
    bVar3 = ((ulong)plVar4 & 1) == 0;
    uVar17 = 3;
    if (bVar3) {
      uVar17 = 5;
    }
    uVar15 = 3;
    if (bVar3) {
      uVar15 = 1;
    }
  }
  puVar5 = &UNK_1103aa3f0;
  func_0x000107c613fc(&UNK_1103aa3f0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined8 *)(puVar5 + 0x20) = param_5;
  *(undefined8 *)(puVar5 + 0x28) = param_6;
  func_0x0001000285a8(0x112d77a48,&UNK_10d9376c0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  pcVar6 = FUN_101392b2c;
  func_0x0001000bdd8c(FUN_101392b2c,puVar5);
  puVar5 = &UNK_1103aa418;
  func_0x000107c613fc(&UNK_1103aa418,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar6;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  *(undefined8 *)(puVar5 + 0x20) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_101392bc8;
  func_0x0001000bdd8c(FUN_101392bc8,puVar5);
  uVar17 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar15 = 0x101392bd4;
  func_0x0001000cb480(0x101392bd4,0,uVar17);
  uVar17 = uVar15;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar15);
  if (lRam0000000112d77908 != -1) {
    func_0x000107c61568(0x112d77908,FUN_101390cbc);
  }
  uVar15 = uRam00000001137ff3c0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,2,0);
  uVar2 = *(ulong *)(puVar5 + 0x10);
  uVar13 = *(ulong *)(puVar5 + 0x18);
  uVar14 = uVar13 >> 1;
  lVar12 = uVar2 + 1;
  if (uVar14 <= uVar2) {
    func_0x000100403514(1 < uVar13,lVar12,1);
    uVar13 = *(ulong *)(puVar5 + 0x18);
    uVar14 = uVar13 >> 1;
  }
  *(long *)(puVar5 + 0x10) = lVar12;
  *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = 0xd000000000000018;
  *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = 0x800000010ef3a050;
  lVar1 = uVar2 + 2;
  if ((long)uVar14 < lVar1) {
    func_0x000100403514(1 < uVar13,lVar1,1);
  }
  *(long *)(puVar5 + 0x10) = lVar1;
  *(undefined8 *)(puVar5 + lVar12 * 0x10 + 0x20) = 0xd000000000000017;
  *(undefined8 *)(puVar5 + lVar12 * 0x10 + 0x28) = 0x800000010ef3a070;
  puVar8 = puVar5;
  func_0x000100403a6c(puVar5);
  func_0x000107c61574(puVar5);
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar9 = 0;
  func_0x0001044e4d64(0);
  uVar10 = uVar9;
  FUN_100f06a9c();
  func_0x000107c61174(uVar17);
  func_0x000107c5fe08(uVar15,uVar9,uVar10);
  puVar11 = puVar8;
  func_0x000107c5fe08(puVar8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar8);
  func_0x000107c48360(puVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar11);
  uVar15 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 101392b2c; end: 101392b37;  */

/* WARNING: Possible PIC construction at 0x000101392a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101392a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101392b2c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4b254(*(undefined8 *)(unaff_x20 + 0x10),lVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(lVar1 + _DAT_113083868));
  return;
}



/* Entry: 101392b38; end: 101392bc7;  */

/* WARNING: Possible PIC construction at 0x000101392ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101392ba8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101392b38(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130364c8);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130364d8);
  lVar1 = 0;
  func_0x0001013918dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101392bc8; end: 101392bdf;  */

/* WARNING: Possible PIC construction at 0x000101392ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101392ba8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101392bc8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130364c8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130364d8);
  lVar4 = 0;
  func_0x0001013918dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *(undefined8 *)(lVar4 + 0x30) = uVar3;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 101392be0; end: 101392c2b;  */

void FUN_101392be0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101392c2c; end: 101392c37;  */

void FUN_101392c2c(void)

{
  return;
}


