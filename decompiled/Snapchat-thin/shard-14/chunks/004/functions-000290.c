/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2188a0; end: 10b21891f;  */

void FUN_10b2188a0(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      iVar1 = *(int *)(param_1 + 0x24);
    }
    else {
      if (param_3 != 1) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x28);
    }
    param_2 = param_2 + iVar1;
  }
  if (*(int *)(param_1 + 0x20) < param_2) {
    if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
      return;
    }
    lVar2 = param_1;
    FUN_10b218700(param_1,param_2);
    if ((int)lVar2 != 0) {
      return;
    }
  }
  else if (param_2 < 0) {
    return;
  }
  *(int *)(param_1 + 0x28) = (int)param_2;
  return;
}



/* Entry: 10b218920; end: 10b218927;  */

undefined8 FUN_10b218920(void)

{
  return 0;
}



/* Entry: 10b218928; end: 10b2189b3;  */

void FUN_10b218928(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_11336c740;
    *(undefined4 *)((long)puVar1 + 0x2c) = 0x1000;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 10b2189b4; end: 10b2189c7;  */

void FUN_10b2189b4(void)

{
  return;
}



/* Entry: 10b2189c8; end: 10b218aa7;  */

/* WARNING: Removing unreachable block (ram,0x00010b218aa0) */

undefined8 FUN_10b2189c8(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 == 0) {
    return 0xffffff9a;
  }
  if ((param_3 & 3) == 1) {
    puVar2 = &UNK_10f73a86c;
  }
  else if ((param_3 >> 2 & 1) == 0) {
    if ((param_3 >> 3 & 1) == 0) {
      return 0xffffff91;
    }
    puVar2 = &UNK_10f73a873;
  }
  else {
    puVar2 = &UNK_10f73a86f;
  }
  _fopen(param_2,puVar2);
  *(long *)(param_1 + 0x18) = param_2;
  if (param_2 == 0) {
    ___error();
    FUN_10b218c30();
    return 0xffffff91;
  }
  if ((param_3 >> 2 & 1) == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _fseeko(uVar1,0);
  if ((int)uVar1 != 0) {
    ___error();
    FUN_10b218c30();
    return 0xffffff8f;
  }
  return uVar1;
}



/* Entry: 10b218aa8; end: 10b218abb;  */

undefined4 FUN_10b218aa8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff91;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b218abc; end: 10b218b4b;  */

undefined8 FUN_10b218abc(undefined8 param_1)

{
  int iVar1;
  long unaff_x19;
  int unaff_w21;
  
  func_0x00010b218c3c();
  _fread();
  if ((int)param_1 < unaff_w21) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    _ferror();
    if (iVar1 != 0) {
      ___error();
      func_0x00010b218c30();
      param_1 = 0xffffff8d;
    }
  }
  return param_1;
}



/* Entry: 10b218b4c; end: 10b218bbb;  */

void FUN_10b218b4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  _ftello();
  if (lVar1 == -1) {
    ___error();
    FUN_10b218c30();
  }
  return;
}



/* Entry: 10b218bbc; end: 10b218bc3;  */

undefined4 FUN_10b218bbc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b218bc4; end: 10b218c2f;  */

void FUN_10b218bc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_11336c7a0;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 10b218c30; end: 10b218c6b;  */

void FUN_10b218c30(undefined4 *param_1)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x10) = *param_1;
  return;
}



/* Entry: 10b218c6c; end: 10b218d33;  */

void FUN_10b218c6c(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x8090) = 0;
  *(undefined8 *)(param_1 + 0x8088) = 0;
  if ((param_3 >> 1 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x80ac);
      goto joined_r0x00010b218d24;
    }
    *(long *)(param_1 + 0x10) = param_1 + 0x80;
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar2 = param_1 + 0x10;
    _inflateInit2_(lVar2,*(undefined4 *)(param_1 + 0x80a4),&UNK_10f45dced,0x70);
    iVar1 = (int)lVar2;
  }
  else {
    *(long *)(param_1 + 0x28) = param_1 + 0x80;
    *(undefined4 *)(param_1 + 0x30) = 0x7fff;
    lVar2 = param_1 + 0x10;
    _deflateInit2_(lVar2,(long)*(char *)(param_1 + 0x80a2),8,*(undefined4 *)(param_1 + 0x80a4),8,0,
                   &UNK_10f45dced,0x70);
    iVar1 = (int)lVar2;
  }
  *(int *)(param_1 + 0x80ac) = iVar1;
joined_r0x00010b218d24:
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x80a0) = 1;
    *(uint *)(param_1 + 0x80a8) = param_3;
  }
  return;
}



/* Entry: 10b218d34; end: 10b218d4b;  */

undefined4 FUN_10b218d34(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x80a0) != '\x01') {
    uVar1 = 0xffffff91;
  }
  return uVar1;
}



/* Entry: 10b218d4c; end: 10b218e5b;  */

ulong FUN_10b218d4c(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar5 = 0x7fff;
  do {
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (0 < *(long *)(param_1 + 0x8098)) {
        iVar2 = (int)lVar5;
        lVar5 = *(long *)(param_1 + 0x8098) - *(long *)(param_1 + 0x8088);
        if (iVar2 <= lVar5) {
          lVar5 = (long)iVar2;
        }
      }
      uVar6 = *(ulong *)(param_1 + 8);
      FUN_10b217bcc(uVar6,param_1 + 0x80,lVar5);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      *(long *)(param_1 + 0x10) = param_1 + 0x80;
      *(int *)(param_1 + 0x18) = (int)uVar6;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = param_1 + 0x10;
    _inflate(uVar3,2);
    iVar2 = (int)uVar3;
    if ((-1 < iVar2) && (*(long *)(param_1 + 0x40) != 0)) {
      uVar3 = 0xfffffffd;
LAB_10b218e38:
      *(int *)(param_1 + 0x80ac) = (int)uVar3;
      return uVar3;
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar4 = (int)*(undefined8 *)(param_1 + 0x38) - (int)uVar8;
    uVar7 = uVar7 + uVar4;
    *(ulong *)(param_1 + 0x8088) = *(long *)(param_1 + 0x8088) + (ulong)((int)uVar6 - uVar1);
    *(ulong *)(param_1 + 0x8090) = *(long *)(param_1 + 0x8090) + (ulong)uVar4;
    if (iVar2 != 0) {
      if (iVar2 != 1) goto LAB_10b218e38;
      goto LAB_10b218e24;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
LAB_10b218e24:
      if (*(uint *)(param_1 + 0x80ac) != 0) {
        uVar7 = *(uint *)(param_1 + 0x80ac);
      }
      return (ulong)uVar7;
    }
  } while( true );
}



/* Entry: 10b218e5c; end: 10b218e9b;  */

undefined8 FUN_10b218e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = (int)param_3;
  FUN_10b218e9c(param_1,0);
  *(long *)(param_1 + 0x8088) = *(long *)(param_1 + 0x8088) + (long)(int)param_3;
  return param_3;
}



/* Entry: 10b218e9c; end: 10b218f4b;  */

void FUN_10b218e9c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  while( true ) {
    if (*(int *)(param_1 + 0x30) == 0) {
      lVar1 = param_1;
      func_0x00010b218fc0();
      if ((int)lVar1 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 0x7fff;
      *(long *)(param_1 + 0x28) = param_1 + 0x80;
      *(undefined4 *)(param_1 + 0x8080) = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_1 + 0x10;
    _deflate(lVar1,param_2);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x38) - (int)uVar3;
    *(int *)(param_1 + 0x8080) = *(int *)(param_1 + 0x8080) + iVar2;
    *(long *)(param_1 + 0x8090) = *(long *)(param_1 + 0x8090) + (long)iVar2;
    iVar2 = (int)lVar1;
    if (iVar2 != 0) break;
    if (((int)param_2 != 4) && (*(int *)(param_1 + 0x18) == 0)) {
      return;
    }
  }
  if (iVar2 == 1) {
    return;
  }
  *(int *)(param_1 + 0x80ac) = iVar2;
  return;
}



/* Entry: 10b218f4c; end: 10b218f5b;  */

undefined8 FUN_10b218f4c(void)

{
  return 0xffffffffffffff8e;
}



/* Entry: 10b218f5c; end: 10b218ffb;  */

undefined4 FUN_10b218f5c(long param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x80a8) >> 1 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x80a8) & 1) != 0) {
      _inflateEnd(param_1 + 0x10);
    }
  }
  else {
    FUN_10b218e9c(param_1,4);
    func_0x00010b218fc0(param_1);
    _deflateEnd(param_1 + 0x10);
  }
  *(undefined1 *)(param_1 + 0x80a0) = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x80ac) != 0) {
    uVar1 = 0xffffff90;
  }
  return uVar1;
}



/* Entry: 10b218ffc; end: 10b2190ab;  */

undefined4 FUN_10b218ffc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80ac);
}



/* Entry: 10b2190ac; end: 10b21912b;  */

void FUN_10b2190ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1;
  _calloc(1,0x80b0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_11336c800;
    *(undefined2 *)((long)puVar1 + 0x80a2) = 0xffff;
    *(undefined4 *)((long)puVar1 + 0x80a4) = 0xfffffff1;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 10b21912c; end: 10b219133;  */

void FUN_10b21912c(void)

{
  return;
}



/* Entry: 10b219134; end: 10b21919b;  */

void FUN_10b219134(long *param_1)

{
  long lVar1;
  
  lVar1 = 1;
  _calloc(1,0x198);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x13d) = 1;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lVar1;
  }
  return;
}



/* Entry: 10b21919c; end: 10b21999b;  */

ulong FUN_10b21919c(long param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  uint uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  *(undefined8 *)(param_1 + 0x100) = param_2;
  FUN_10b218928(param_1 + 0x110);
  if ((param_3 >> 1 & 1) != 0) {
    FUN_10b21b600(*(undefined8 *)(param_1 + 0x110));
    param_2 = *(undefined8 *)(param_1 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x108) = param_2;
  if ((param_3 & 5) == 0) goto LAB_10b2195fc;
  if ((param_3 >> 3 & 1) != 0) goto LAB_10b219530;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  uVar14 = *(ulong *)(param_1 + 0x100);
  uStack_f0 = CONCAT44(uStack_f0._4_4_,0x6054b50);
  uVar13 = uVar14;
  func_0x00010b21b6c0();
  if ((int)uVar13 == 0) {
    uVar13 = uVar14;
    FUN_10b217f6c();
    if (0xfffff < (long)uVar13) {
      uVar13 = 0x100000;
    }
    func_0x00010b2181e4(uVar14,&uStack_f0,4,uVar13,&lStack_108);
    uVar13 = uVar14;
    if ((int)uVar14 == 0) {
      func_0x00010b21b618();
      if ((int)uVar14 == 0) {
        func_0x00010b21b624();
        if ((int)uVar14 != 0) {
          uVar13 = (ulong)(ushort)uStack_124;
          goto LAB_10b219654;
        }
        func_0x00010b21b624();
        uVar13 = (ulong)(ushort)uStack_124;
        *(uint *)(param_1 + 0x140) = uStack_124 & 0xffff;
        if ((int)uVar14 != 0) goto LAB_10b21965c;
        func_0x00010b21b624();
        uVar13 = (ulong)(ushort)uStack_124;
        *(ulong *)(param_1 + 0x180) = uVar13;
        uVar9 = uVar13;
        if ((int)uVar14 == 0) {
          func_0x00010b21b624();
          uVar13 = *(ulong *)(param_1 + 0x180);
          uVar9 = (ulong)(ushort)uStack_124;
        }
      }
      else {
        uVar13 = 0;
LAB_10b219654:
        *(int *)(param_1 + 0x140) = (int)uVar13;
LAB_10b21965c:
        *(ulong *)(param_1 + 0x180) = uVar13;
        uVar9 = uVar13;
      }
      uVar5 = (uint)uVar14;
      if (uVar13 != uVar9) {
        uVar5 = 0xffffff99;
      }
      uVar13 = (ulong)uVar5;
      if ((uVar5 == 0) && (func_0x00010b21b618(), uVar13 = uVar14, (int)uVar14 == 0)) {
        *(ulong *)(param_1 + 0x168) = uStack_120 & 0xffffffff;
        func_0x00010b21b618();
        uVar13 = uVar14;
        if ((int)uVar14 == 0) {
          *(ulong *)(param_1 + 0x160) = uStack_120 & 0xffffffff;
          uVar13 = *(ulong *)(param_1 + 0x100);
          FUN_10b217cd0(uVar13,&uStack_128);
          if ((int)uVar13 == 0) {
            uVar14 = (ulong)(ushort)uStack_128;
            if ((ushort)uStack_128 == 0) goto LAB_10b219718;
            lVar7 = uVar14 + 1;
            _malloc();
            *(long *)(param_1 + 400) = lVar7;
            if (lVar7 != 0) {
              uVar10 = *(undefined8 *)(param_1 + 0x100);
              FUN_10b217bcc(uVar10,lVar7,uVar14);
              *(undefined1 *)
               (*(long *)(param_1 + 400) +
               (ulong)((uint)uVar10 & ((int)(uint)uVar10 >> 0x1f ^ 0xffffffffU))) = 0;
            }
          }
          else {
LAB_10b219718:
            if ((int)uVar13 != 0) goto LAB_10b219250;
          }
          bVar3 = (int)uVar9 == 0xffff;
          if ((bVar3) || (func_0x00010b21b7a8(), bVar3)) {
            uVar12 = *(undefined8 *)(param_1 + 0x100);
            uVar10 = uVar12;
            func_0x00010b21b630(uVar12,lStack_108 + -0x14);
            iVar6 = (int)uVar10;
            if (iVar6 == 0) {
              func_0x00010b21b638();
              if ((((int)lStack_118 != 0x7064b50) || (iVar6 != 0)) ||
                 (func_0x00010b21b638(), iVar6 != 0)) goto LAB_10b21974c;
              uVar10 = uVar12;
              func_0x00010b217d48(uVar12,&uStack_f0);
              iVar6 = (int)uVar10;
              if ((iVar6 != 0) || (func_0x00010b21b638(), lVar7 = uStack_f0, iVar6 != 0))
              goto LAB_10b21974c;
              func_0x00010b21b630(uVar12,uStack_f0);
              iVar6 = (int)uVar12;
              if (iVar6 != 0) goto LAB_10b21974c;
              func_0x00010b21b638();
              uVar4 = (int)lStack_118 == 0x6064b50;
              if ((!(bool)uVar4) || (iVar6 != 0)) goto LAB_10b21974c;
              lStack_108 = lVar7;
              uVar13 = *(ulong *)(param_1 + 0x100);
              func_0x00010b21b630(uVar13,lVar7);
              if (((int)uVar13 == 0) && (func_0x00010b21b618(), (int)uVar13 == 0)) {
                uVar13 = *(ulong *)(param_1 + 0x100);
                func_0x00010b217d48(uVar13,&lStack_110);
                if ((int)uVar13 == 0) {
                  uVar13 = *(ulong *)(param_1 + 0x100);
                  FUN_10b217cd0(uVar13,param_1 + 0x188);
                  if (((((int)uVar13 == 0) && (func_0x00010b21b624(), (int)uVar13 == 0)) &&
                      (func_0x00010b21b618(), (int)uVar13 == 0)) &&
                     (func_0x00010b21b808(), (int)uVar13 == 0)) {
                    uVar13 = *(ulong *)(param_1 + 0x100);
                    func_0x00010b217d48(uVar13,&lStack_100);
                    if ((int)uVar13 == 0) {
                      uVar13 = *(ulong *)(param_1 + 0x100);
                      func_0x00010b217d48(uVar13,&uStack_f8);
                    }
                  }
                }
              }
              func_0x00010b21b814(lStack_100);
              if ((bool)uVar4) {
                *(ulong *)(param_1 + 0x180) = uStack_f8;
              }
              if ((int)uVar13 != 0) goto LAB_10b219250;
              uVar13 = *(ulong *)(param_1 + 0x100);
              func_0x00010b217d40(uVar13,param_1 + 0x168);
              if (*(long *)(param_1 + 0x168) < 0) {
LAB_10b219990:
                uVar13 = 0xffffff99;
                goto LAB_10b219250;
              }
              if ((int)uVar13 != 0) goto LAB_10b219250;
              uVar13 = *(ulong *)(param_1 + 0x100);
              func_0x00010b217d40(uVar13,param_1 + 0x160);
              if (*(long *)(param_1 + 0x160) < 0) goto LAB_10b219990;
              if ((int)uVar13 != 0) goto LAB_10b219250;
              goto LAB_10b21979c;
            }
LAB_10b21974c:
            uVar13 = *(ulong *)(param_1 + 0x180);
            if (((uVar13 != 0xffff && uVar13 == uVar9) &&
                (bVar3 = *(long *)(param_1 + 0x168) == 0xffff, !bVar3)) &&
               (func_0x00010b21b7a8(), !bVar3)) goto LAB_10b219798;
LAB_10b21977c:
            uVar13 = 0xffffff99;
          }
          else {
LAB_10b219798:
            lVar7 = 0;
LAB_10b21979c:
            uVar13 = *(ulong *)(param_1 + 0x100);
            func_0x00010b21b630();
            if ((int)uVar13 == 0) {
              uVar13 = *(ulong *)(param_1 + 0x100);
              piVar1 = (int *)(param_1 + 0x170);
              func_0x00010b217d08(uVar13,piVar1);
              lVar15 = lStack_108;
              if ((int)uVar13 == 0) {
                if (*piVar1 == 0x2014b50) {
                  lVar7 = *(long *)(param_1 + 0x160);
                }
                else {
                  if ((lVar7 == 0) && (0xffffffff < lStack_108)) goto LAB_10b21977c;
                  uVar13 = *(ulong *)(param_1 + 0x100);
                  func_0x00010b21b630(uVar13,lStack_108 - *(long *)(param_1 + 0x168));
                  if (((int)uVar13 != 0) || (func_0x00010b21b808(), (int)uVar13 != 0))
                  goto LAB_10b219250;
                  lVar11 = *(long *)(param_1 + 0x160);
                  lVar7 = lVar11;
                  if (*piVar1 == 0x2014b50) {
                    lVar7 = lVar15 - *(long *)(param_1 + 0x168);
                    *(long *)(param_1 + 0x160) = lVar7;
                    *(long *)(param_1 + 0x148) = lVar7 - lVar11;
                  }
                }
                if (lVar7 <= lVar15) {
                  if (lVar15 < *(long *)(param_1 + 0x168) + lVar7) {
                    *(long *)(param_1 + 0x168) = lVar15 - lVar7;
                  }
                  goto LAB_10b219530;
                }
                goto LAB_10b21977c;
              }
            }
          }
        }
      }
    }
  }
LAB_10b219250:
  if (*(char *)(param_1 + 0x13c) == '\0') {
LAB_10b219578:
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x160);
  }
  else {
    lStack_100 = 0;
    uStack_f8 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_120 = 0;
    lStack_118 = 0;
    uStack_124 = 0x8074b50;
    uStack_128 = 0x4034b50;
    uStack_130 = 0;
    uStack_12c = 0x2014b50;
    uVar14 = *(ulong *)(param_1 + 0x110);
    lVar7 = *(long *)(param_1 + 0x100);
    func_0x00010b218464(lVar7,8,0);
    func_0x00010b21b684();
    if (lVar7 < 0) {
      func_0x00010b21b708(*(undefined8 *)(param_1 + 0x100));
      func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100),0);
    }
    uStack_138 = (uint)(lVar7 >= 0);
    uVar9 = uVar14;
    func_0x00010b217bac();
    if ((int)uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar14;
      FUN_10b21b600();
    }
    FUN_10b218928(&uStack_f8);
    uVar2 = uStack_f8;
    uVar8 = uStack_f8;
    FUN_10b21b600();
    if ((int)uVar9 == 0) {
      uVar8 = *(ulong *)(param_1 + 0x100);
      func_0x00010b21b65c(uVar8,&uStack_128);
      uVar9 = uVar8;
    }
    lVar7 = 0;
    uVar16 = 0;
    bVar3 = false;
    lVar15 = 0;
    while ((int)uVar9 == 0 && !bVar3) {
      func_0x00010b21b684();
      func_0x00010b218448(*(undefined8 *)(param_1 + 0x100),8,&lStack_110);
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar9 = *(ulong *)(param_1 + 0x100);
      FUN_10b219de4(uVar9,1,&uStack_f0,uVar2);
      if ((int)uVar9 != 0) break;
      if (lStack_110 < 0) {
        lStack_110 = 0;
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)lStack_110);
      uStack_a8 = uVar8;
      func_0x00010b21b684();
      if (0 < lStack_c8) {
        func_0x00010b21b674(*(undefined8 *)(param_1 + 0x100));
      }
      bVar3 = false;
      while( true ) {
        uVar10 = *(undefined8 *)(param_1 + 0x100);
        func_0x00010b21b65c(uVar10,&uStack_128);
        if ((int)uVar10 == -0x6b) {
          func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100),uVar9);
          uVar10 = *(undefined8 *)(param_1 + 0x100);
          func_0x00010b21b65c(uVar10,&uStack_12c);
          if ((int)uVar10 == -0x6b) {
            lVar11 = *(long *)(param_1 + 0x100);
            func_0x00010b21b6c0();
            func_0x00010b21b684();
            lStack_108 = lVar11;
          }
          bVar3 = true;
        }
        if (((uStack_f0._4_2_ >> 3 & 1) == 0) && (lVar11 = lStack_108, lStack_c8 != 0))
        goto LAB_10b2194b4;
        uVar10 = *(undefined8 *)(param_1 + 0x100);
        func_0x00010b2181e4(uVar10,&uStack_124,4,0x18,&lStack_100);
        if ((int)uVar10 == 0) break;
        lVar11 = lVar15;
        if ((uStack_f0._4_2_ >> 3 & 1) == 0) goto LAB_10b2194b4;
        lStack_108 = lStack_108 + 1;
        func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100));
      }
      uVar10 = uStack_90;
      FUN_10b21ae88(uStack_90,uStack_b8._2_2_);
      if ((int)uVar10 == 0) {
        uVar16 = 1;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x100);
      FUN_10b21af24(uVar10,uVar16,&uStack_130,&lStack_118,&uStack_120);
      lVar11 = lStack_100;
      if ((int)uVar10 == 0) {
        if ((int)uStack_d0 == 0) {
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uStack_130);
        }
        if (lStack_c8 == 0) {
          lStack_c8 = lStack_118;
        }
        if (uStack_c0 == 0) {
          uStack_c0 = uStack_120;
        }
      }
LAB_10b2194b4:
      lStack_118 = lVar11 - uVar9;
      if (0xffffffff < lStack_118 && (long)uStack_c0 < 0xffffffff) {
        uStack_c0 = 0;
        lStack_c8 = lStack_118;
      }
      uVar9 = uVar14;
      FUN_10b21a5fc(uVar14,&uStack_f0);
      if ((int)uVar9 == 0) {
        lVar7 = lVar7 + 1;
      }
      uVar8 = *(ulong *)(param_1 + 0x100);
      func_0x00010b21b630(uVar8,lStack_108);
      uVar9 = uVar8;
      lVar15 = lVar11;
    }
    func_0x00010b218970(&uStack_f8);
    if (lVar7 == 0) {
      if ((int)uVar9 == 0) goto LAB_10b219530;
    }
    else {
      uVar13 = uVar14;
      FUN_10b217f6c();
      *(int *)(uVar14 + 0x24) = (int)uVar13;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(ulong *)(param_1 + 0x108) = uVar14;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(long *)(param_1 + 0x180) = lVar7;
      *(uint *)(param_1 + 0x140) = uStack_138;
LAB_10b219530:
      uVar13 = 0;
    }
    if (((param_3 >> 2 & 1) == 0) || ((int)uVar13 != 0)) goto LAB_10b219578;
    if (*(long *)(param_1 + 0x168) < 1) {
      uVar13 = *(ulong *)(param_1 + 0x100);
      if (*(int *)(param_1 + 0x170) == 0x6054b50) {
LAB_10b2195c8:
        uVar10 = *(undefined8 *)(param_1 + 0x160);
        uVar12 = 0;
      }
      else {
        uVar10 = 0;
        uVar12 = 2;
      }
      FUN_10b217fcc(uVar13,uVar10,uVar12);
    }
    else {
      uVar13 = *(ulong *)(param_1 + 0x100);
      func_0x00010b21b630(uVar13,*(undefined8 *)(param_1 + 0x160));
      if ((int)uVar13 == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x110);
        func_0x00010b217e70(uVar10,*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x168)
                           );
        if ((int)uVar10 == 0) {
          uVar13 = *(ulong *)(param_1 + 0x100);
          goto LAB_10b2195c8;
        }
        uVar13 = 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x140) != 0) {
      func_0x00010b21b7e8(*(undefined8 *)(param_1 + 0x100));
    }
  }
  if ((int)uVar13 != 0) {
    FUN_10b21999c(param_1);
    return uVar13;
  }
LAB_10b2195fc:
  FUN_10b218928(param_1 + 0x128);
  FUN_10b21b600(*(undefined8 *)(param_1 + 0x128));
  FUN_10b218928(param_1 + 0x130);
  FUN_10b21b600(*(undefined8 *)(param_1 + 0x130));
  *(uint *)(param_1 + 0x138) = param_3;
  return 0;
}



/* Entry: 10b21999c; end: 10b219c9f;  */

ulong FUN_10b21999c(ulong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  uVar8 = param_1;
  if ((*(char *)(param_1 + 0x175) != '\0') && (FUN_10b219ca0(), (int)uVar8 != 0))
  goto LAB_10b219c10;
  iVar2 = (int)uVar8;
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) == 0) {
    uVar8 = 0;
    goto LAB_10b219c10;
  }
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x00010b21b780();
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x140) = (int)uStack_38;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010b218448(uVar4,7,&lStack_40);
  if (((int)uVar4 == 0) && (0 < lStack_40)) {
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010b21b708();
  if ((*(int *)(param_1 + 0x140) != 0) && ((*(byte *)(param_1 + 0x138) >> 2 & 1) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b21b630(uVar4,0);
  }
  func_0x00010b21b684();
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  func_0x00010b21b6c0(*(undefined8 *)(param_1 + 0x110));
  uVar8 = *(ulong *)(param_1 + 0x110);
  FUN_10b217f6c();
  *(ulong *)(param_1 + 0x168) = uVar8 & 0xffffffff;
  func_0x00010b21b630(*(undefined8 *)(param_1 + 0x110),0);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010b217e70(uVar4,*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x168));
  if ((*(long *)(param_1 + 0x168) == 0) && (*(long *)(param_1 + 0x180) != 0)) {
    uVar8 = 0xffffff99;
    goto LAB_10b219c10;
  }
  if ((*(long *)(param_1 + 0x160) < 0xffffffff) && (*(ulong *)(param_1 + 0x180) < 0x10000)) {
LAB_10b219b88:
    if ((int)uVar4 != 0) goto LAB_10b219bd0;
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b217e54(uVar4,0x6054b50);
    iVar2 = (int)uVar4;
    if ((((iVar2 != 0) || (func_0x00010b21b7f0(), iVar2 != 0)) ||
        (func_0x00010b21b7f0(), iVar2 != 0)) ||
       ((func_0x00010b21b68c(), iVar2 != 0 || (func_0x00010b21b68c(), iVar2 != 0))))
    goto LAB_10b219bd0;
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b217e54(uVar4,*(undefined4 *)(param_1 + 0x168));
    if ((int)uVar4 != 0) goto LAB_10b219bd0;
    iVar2 = (int)*(undefined8 *)(param_1 + 0x100);
    func_0x00010b21b6ec(*(undefined8 *)(param_1 + 0x160));
    func_0x00010b217e54();
    bVar1 = iVar2 == 0;
  }
  else {
    func_0x00010b21b684();
    uVar5 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b217e54(uVar5,0x6064b50);
    if ((int)uVar5 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010b217e68(uVar5,0x2c);
      if ((int)uVar5 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x100);
        func_0x00010b217e48(uVar5,*(undefined2 *)(param_1 + 0x188));
        if ((int)uVar5 == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x100);
          func_0x00010b217e48(uVar5,0x2d);
          iVar2 = (int)uVar5;
          if ((((iVar2 == 0) && (func_0x00010b21b714(), iVar2 == 0)) &&
              (func_0x00010b21b714(), iVar2 == 0)) &&
             ((func_0x00010b21b7fc(), iVar2 == 0 && (func_0x00010b21b7fc(), iVar2 == 0)))) {
            uVar5 = *(undefined8 *)(param_1 + 0x100);
            func_0x00010b217e60(uVar5,*(undefined8 *)(param_1 + 0x168));
            if ((int)uVar5 == 0) {
              uVar5 = *(undefined8 *)(param_1 + 0x100);
              func_0x00010b217e60(uVar5,*(undefined8 *)(param_1 + 0x160));
              if ((int)uVar5 == 0) {
                uVar5 = *(undefined8 *)(param_1 + 0x100);
                func_0x00010b217e54(uVar5,0x7064b50);
                iVar2 = (int)uVar5;
                if ((iVar2 == 0) && (func_0x00010b21b714(), iVar2 == 0)) {
                  uVar5 = *(undefined8 *)(param_1 + 0x100);
                  func_0x00010b217e60(uVar5,uVar4);
                  if ((int)uVar5 == 0) {
                    uVar4 = *(undefined8 *)(param_1 + 0x100);
                    func_0x00010b217e54(uVar4,*(int *)(param_1 + 0x140) + 1);
                    goto LAB_10b219b88;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_10b219bd0:
    bVar1 = false;
  }
  lVar6 = *(long *)(param_1 + 400);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    _strlen();
    uVar3 = (uint)lVar6;
    if (0xfffe < (int)uVar3) {
      uVar3 = 0xffff;
    }
  }
  if (bVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b217e48(uVar4,uVar3 & 0xffff);
    if ((int)uVar4 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      FUN_10b217d50(uVar4,*(undefined8 *)(param_1 + 400),uVar3);
      uVar7 = 0;
      if ((uint)uVar4 != uVar3) {
        uVar7 = 0xffffff8d;
      }
      uVar8 = (ulong)uVar7;
      goto LAB_10b219c10;
    }
  }
  uVar8 = 0xffffffff;
LAB_10b219c10:
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_10b2183d0();
    FUN_10b218480(param_1 + 0x110);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    func_0x00010b218970(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    func_0x00010b218970(param_1 + 0x130);
  }
  if (*(long *)(param_1 + 400) != 0) {
    _free();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return uVar8;
}



/* Entry: 10b219ca0; end: 10b219cab;  */

/* WARNING: Removing unreachable block (ram,0x00010b21ada0) */
/* WARNING: Removing unreachable block (ram,0x00010b21b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010b21ad94) */
/* WARNING: Removing unreachable block (ram,0x00010b21adc8) */
/* WARNING: Removing unreachable block (ram,0x00010b21addc) */
/* WARNING: Removing unreachable block (ram,0x00010b21adfc) */
/* WARNING: Removing unreachable block (ram,0x00010b21ae20) */
/* WARNING: Removing unreachable block (ram,0x00010b21ae38) */
/* WARNING: Removing unreachable block (ram,0x00010b21ad88) */

ulong FUN_10b219ca0(ulong param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lStack_48;
  
  uVar7 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    return 0xffffff9a;
  }
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) == 0) {
    lStack_48 = 0;
    if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
      uVar8 = 0xffffff9a;
    }
    else {
      FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
      func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&lStack_48);
      uVar8 = 0;
      if (0 < lStack_48) {
        if (*(char *)(param_1 + 0x176) == '\0') {
          uVar6 = 0;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x20)) {
            uVar6 = 0xffffff97;
          }
          uVar8 = (ulong)uVar6;
        }
        else {
          uVar8 = 0;
        }
      }
      func_0x00010b21b7e0();
    }
    return uVar8;
  }
  lStack_48 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    return 0xffffff9a;
  }
  FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x176) == '\0') {
    uVar7 = *(undefined4 *)(param_1 + 0x178);
  }
  func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x118));
  func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&stack0xffffffffffffffc0);
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x120);
    *(undefined8 *)(uVar8 + 8) = *(undefined8 *)(param_1 + 0x100);
    FUN_10b2183d0();
    func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x120));
    if ((int)uVar8 != 0) goto LAB_10b21b194;
    uVar1 = *(ushort *)(param_1 + 4);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    uVar8 = 0;
    goto LAB_10b21b194;
  }
  if (*(short *)(param_1 + 0x78) == 1) {
LAB_10b21b144:
    bVar2 = true;
  }
  else if (*(short *)(param_1 + 0x78) == 0) {
    if (0xfffffffe < *(long *)(param_1 + 0x48)) goto LAB_10b21b144;
    bVar2 = (0xfffffffe < *(long *)(param_1 + 0x28) || 0xfffffffe < *(long *)(param_1 + 0x30)) ||
            *(long *)(param_1 + 0x30) == 0;
  }
  else {
    bVar2 = false;
  }
  uVar8 = *(ulong *)(param_1 + 0x100);
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar5 = 0xffffffffffffffff;
    uVar4 = uVar7;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_10b21b248(uVar8,bVar2,uVar4,0xffffffffffffffff,uVar5);
LAB_10b21b194:
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  if ((int)uVar8 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x110);
    FUN_10b21a5fc(uVar3,param_1);
    uVar8 = uVar3;
    if ((int)uVar3 == 0) {
      if ((*(ushort *)(param_1 + 4) & 0x2008) == 0) {
        func_0x00010b21b684();
        func_0x00010b21b780();
        uVar8 = param_1;
        func_0x00010b219d50();
        if ((int)uVar8 == 0) {
          uVar8 = *(ulong *)(param_1 + 0x100);
          func_0x00010b21b674(uVar8,0xe);
          if ((int)uVar8 == 0) {
            uVar8 = *(ulong *)(param_1 + 0x100);
            FUN_10b21b300(uVar8,param_1);
          }
        }
        func_0x00010b21b7e8(*(undefined8 *)(param_1 + 0x100));
        func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100),uVar3);
      }
      else {
        uVar8 = 0;
      }
    }
  }
  *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
  func_0x00010b21b7e0();
  return uVar8;
}



/* Entry: 10b219cac; end: 10b219de3;  */

long FUN_10b219cac(long param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  long lVar8;
  long lStack_40;
  long lStack_38;
  
  if (param_3 != 0) {
    return 0xffffff93;
  }
  if (((param_1 == 0) || ((*(byte *)(param_1 + 0x138) & 1) == 0)) ||
     (*(char *)(param_1 + 0x174) == '\0')) {
    return 0xffffff9a;
  }
  lVar4 = param_1;
  func_0x00010b219d50();
  if ((int)lVar4 == 0) {
    func_0x00010b21b728();
  }
  if ((int)lVar4 != 0) {
    if ((int)lVar4 != -0x67) {
      return lVar4;
    }
    if (*(long *)(param_1 + 0x148) < 1) {
      return 0xffffff99;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010b21b630(uVar3,*(undefined8 *)(param_1 + 0x48));
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      return 0xffffff99;
    }
    func_0x00010b21b728();
    if (iVar2 != 0) {
      return 0xffffff99;
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  if (((*(ushort *)(param_1 + 6) & 0xfff7) != 0) || (*(short *)(param_1 + 0x7a) != 0)) {
    return 0xffffff93;
  }
  *(undefined1 *)(param_1 + 0x176) = param_2;
  lVar4 = *(long *)(param_1 + 0x120);
  if (lVar4 == 0) {
    FUN_10b2185bc(param_1 + 0x120);
    lVar4 = *(long *)(param_1 + 0x120);
  }
  func_0x00010b21b768(*(undefined8 *)(param_1 + 0x100));
  if ((int)lVar4 != 0) goto LAB_10b21a5a4;
  if (*(char *)(param_1 + 0x176) == '\0') {
    if (*(short *)(param_1 + 6) != 8) {
      if (*(short *)(param_1 + 6) != 0) {
        lVar4 = 0xffffff9a;
        goto LAB_10b21a5a4;
      }
      goto LAB_10b21a4d8;
    }
    FUN_10b2190ac(param_1 + 0x118);
  }
  else {
LAB_10b21a4d8:
    FUN_10b2185bc(param_1 + 0x118);
  }
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) == 0) {
    if (((*(char *)(param_1 + 0x176) != '\0') || (sVar7 = *(short *)(param_1 + 6), sVar7 == 0)) ||
       ((*(ushort *)(param_1 + 4) & 1) != 0)) {
      lVar8 = *(long *)(param_1 + 0x28);
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x120),2,lVar8);
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010b218448(uVar3,5,&lStack_38);
      lVar4 = lStack_38;
      if ((int)uVar3 != 0) {
        lVar4 = 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010b218448(uVar3,6,&lStack_40);
      lVar1 = lStack_40;
      if ((int)uVar3 != 0) {
        lVar1 = 0;
      }
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x118),2,lVar8 - (lVar4 + lVar1));
      sVar7 = *(short *)(param_1 + 6);
    }
    if ((sVar7 == 0xe) && ((*(ushort *)(param_1 + 4) >> 1 & 1) == 0)) {
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x118),2,*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(param_1 + 0x118);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = 4;
      goto LAB_10b21a590;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    uVar6 = 0;
    uVar5 = 9;
LAB_10b21a590:
    func_0x00010b218464(uVar3,uVar5,uVar6);
  }
  lVar4 = *(long *)(param_1 + 0x118);
  func_0x00010b21b768(*(undefined8 *)(param_1 + 0x120));
  if ((int)lVar4 == 0) {
    *(undefined1 *)(param_1 + 0x175) = 1;
    *(undefined4 *)(param_1 + 0x178) = 0;
    return lVar4;
  }
LAB_10b21a5a4:
  func_0x00010b21b7e0();
  return lVar4;
}



/* Entry: 10b219de4; end: 10b21a467;  */

/* WARNING: Removing unreachable block (ram,0x00010b21a0b0) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0d8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a060) */
/* WARNING: Removing unreachable block (ram,0x00010b21a078) */
/* WARNING: Removing unreachable block (ram,0x00010b21a084) */
/* WARNING: Removing unreachable block (ram,0x00010b21a094) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0a4) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a104) */
/* WARNING: Removing unreachable block (ram,0x00010b21a0fc) */
/* WARNING: Removing unreachable block (ram,0x00010b21a114) */
/* WARNING: Removing unreachable block (ram,0x00010b21a11c) */
/* WARNING: Removing unreachable block (ram,0x00010b21a128) */
/* WARNING: Removing unreachable block (ram,0x00010b21a134) */
/* WARNING: Removing unreachable block (ram,0x00010b21a13c) */
/* WARNING: Removing unreachable block (ram,0x00010b21a144) */
/* WARNING: Removing unreachable block (ram,0x00010b21a150) */
/* WARNING: Removing unreachable block (ram,0x00010b21a158) */
/* WARNING: Removing unreachable block (ram,0x00010b21a160) */
/* WARNING: Removing unreachable block (ram,0x00010b21a16c) */
/* WARNING: Removing unreachable block (ram,0x00010b21a174) */
/* WARNING: Removing unreachable block (ram,0x00010b21a17c) */
/* WARNING: Removing unreachable block (ram,0x00010b21a188) */
/* WARNING: Removing unreachable block (ram,0x00010b21a1fc) */
/* WARNING: Removing unreachable block (ram,0x00010b21a198) */
/* WARNING: Removing unreachable block (ram,0x00010b21a1b0) */
/* WARNING: Removing unreachable block (ram,0x00010b21a1b8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a1e8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a200) */
/* WARNING: Removing unreachable block (ram,0x00010b219f98) */
/* WARNING: Removing unreachable block (ram,0x00010b219fa4) */
/* WARNING: Removing unreachable block (ram,0x00010b219fd4) */
/* WARNING: Removing unreachable block (ram,0x00010b219fe0) */
/* WARNING: Removing unreachable block (ram,0x00010b219ff0) */
/* WARNING: Removing unreachable block (ram,0x00010b219ff8) */
/* WARNING: Removing unreachable block (ram,0x00010b21a004) */
/* WARNING: Removing unreachable block (ram,0x00010b21a014) */
/* WARNING: Removing unreachable block (ram,0x00010b21a01c) */
/* WARNING: Removing unreachable block (ram,0x00010b21a028) */
/* WARNING: Removing unreachable block (ram,0x00010b21a038) */
/* WARNING: Removing unreachable block (ram,0x00010b21a040) */
/* WARNING: Removing unreachable block (ram,0x00010b21a050) */
/* WARNING: Removing unreachable block (ram,0x00010b21a120) */
/* WARNING: Removing unreachable block (ram,0x00010b219fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_10b219de4(byte *param_1,int param_2,undefined8 *param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  byte bStack_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  pbVar3 = param_1;
  func_0x00010b217d08(param_1,&iStack_b0);
  if (((int)pbVar3 == -0x65) || (iStack_b0 == 0x6054b50 || iStack_b0 == 0x6064b50)) {
    pbVar10 = (byte *)0xffffff9c;
  }
  else if (((param_2 == 0) || (iStack_b0 == 0x4034b50)) &&
          ((param_2 != 0 || (iStack_b0 == 0x2014b50)))) {
    pbVar10 = pbVar3;
    if (((int)pbVar3 == 0) &&
       ((param_2 != 0 ||
        (func_0x00010b217cd0(param_1,param_3), pbVar3 = param_1, pbVar10 = param_1,
        (int)param_1 == 0)))) {
      func_0x00010b21b654();
      pbVar3 = pbVar10;
      if (((int)pbVar10 == 0) &&
         ((func_0x00010b21b654(), pbVar3 = pbVar10, (int)pbVar10 == 0 &&
          (func_0x00010b21b654(), pbVar3 = pbVar10, (int)pbVar10 == 0)))) {
        func_0x00010b21b720();
        uStack_90 = 0xffff;
        uStack_8c = 0x50;
        auVar13 = NEON_ushl(ZEXT416(0),_UNK_10dfc0f20,4);
        auVar12 = NEON_ushl(ZEXT816(0),_UNK_10dfc0f30,4);
        bStack_a0 = auVar13[0] & UNK_10dfc0f40;
        bStack_9f = auVar13[1] & UNK_10dfc0f40._1_1_;
        bStack_9e = auVar13[2] & UNK_10dfc0f40._2_1_;
        bStack_9d = auVar13[3] & UNK_10dfc0f40._3_1_;
        bStack_9c = auVar12[4] & UNK_10dfc0f40._4_1_;
        bStack_9b = auVar12[5] & UNK_10dfc0f40._5_1_;
        bStack_9a = auVar12[6] & UNK_10dfc0f40._6_1_;
        bStack_99 = auVar12[7] & UNK_10dfc0f40._7_1_;
        bStack_98 = auVar12[8] & UNK_10dfc0f40._8_1_;
        bStack_97 = auVar12[9] & UNK_10dfc0f40._9_1_;
        bStack_96 = auVar12[10] & UNK_10dfc0f40._10_1_;
        bStack_95 = auVar12[0xb] & UNK_10dfc0f40._11_1_;
        bStack_94 = auVar12[0xc] & UNK_10dfc0f40._12_1_;
        bStack_93 = auVar12[0xd] & UNK_10dfc0f40._13_1_;
        bStack_92 = auVar12[0xe] & UNK_10dfc0f40._14_1_;
        bStack_91 = auVar12[0xf] & UNK_10dfc0f40._15_1_;
        uStack_80 = 0xffffffff;
        pbVar3 = &bStack_a0;
        _mktime();
        param_3[1] = pbVar3;
        if (((int)pbVar10 == 0) && (func_0x00010b21b720(), pbVar10 = pbVar3, (int)pbVar3 == 0)) {
          func_0x00010b21b6fc();
          param_3[5] = 0;
          pbVar10 = pbVar3;
          if ((int)pbVar3 == 0) {
            func_0x00010b21b6fc();
            param_3[6] = 0;
            pbVar10 = pbVar3;
            if (((int)pbVar3 == 0) && (func_0x00010b21b654(), pbVar10 = pbVar3, (int)pbVar3 == 0)) {
              func_0x00010b21b654();
              pbVar10 = pbVar3;
            }
          }
        }
      }
      iVar9 = (int)pbVar10;
      if (param_2 == 0) {
        if ((iVar9 != 0) || (func_0x00010b21b654(), pbVar10 = pbVar3, (int)pbVar3 != 0))
        goto LAB_10b219e74;
        func_0x00010b21b654();
        *(undefined4 *)(param_3 + 8) = 0;
        pbVar10 = pbVar3;
        if (((int)pbVar3 != 0) ||
           ((func_0x00010b21b654(), pbVar10 = pbVar3, (int)pbVar3 != 0 ||
            (func_0x00010b21b720(), pbVar10 = pbVar3, (int)pbVar3 != 0)))) goto LAB_10b219e74;
        func_0x00010b21b6fc();
        param_3[9] = 0;
        iVar9 = (int)pbVar3;
        pbVar10 = pbVar3;
      }
      if ((iVar9 == 0) &&
         (pbVar3 = param_4, func_0x00010b21b630(param_4,0), pbVar10 = pbVar3, (int)pbVar3 == 0)) {
        if (*(short *)(param_3 + 7) == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          func_0x00010b21b6e0();
          pbVar10 = pbVar3;
        }
      }
    }
  }
  else {
    pbVar10 = (byte *)0xffffff99;
  }
LAB_10b219e74:
  func_0x00010b21b60c();
  func_0x00010b21b778();
  pbVar4 = pbVar3;
  if ((int)pbVar10 == 0) {
    if (*(short *)((long)param_3 + 0x3a) == 0) {
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = pbVar3;
      func_0x00010b21b6e0();
      pbVar4 = pbVar10;
    }
  }
  func_0x00010b21b60c();
  func_0x00010b21b778();
  pbVar5 = pbVar4;
  if ((int)pbVar10 == 0) {
    if (*(short *)((long)param_3 + 0x3c) == 0) {
      pbVar10 = (byte *)0x0;
    }
    else {
      pbVar10 = pbVar4;
      func_0x00010b21b6e0();
      pbVar5 = pbVar10;
    }
  }
  func_0x00010b21b60c();
  func_0x00010b21b778();
  pbVar6 = pbVar5;
  func_0x00010b21b60c();
  if ((int)pbVar10 == 0) {
    if (*(short *)((long)param_3 + 0x3a) == 0) {
LAB_10b21a210:
      pbVar10 = (byte *)0x0;
    }
    else {
      func_0x00010b21b820();
      func_0x00010b21b630();
      iVar9 = 0;
      iVar8 = (int)pbVar6;
      pbVar10 = pbVar6;
      while (iVar8 == 0) {
        uVar1 = iVar9 + 4;
        if (*(ushort *)((long)param_3 + 0x3a) < uVar1) goto LAB_10b21a210;
        func_0x00010b21b6d8();
        pbVar10 = pbVar6;
        if (((int)pbVar6 != 0) || (func_0x00010b21b6d8(), pbVar10 = pbVar6, (int)pbVar6 != 0))
        break;
        uVar2 = *(ushort *)((long)param_3 + 0x3a) - uVar1;
        uVar11 = uStack_b8;
        if (uVar2 < uStack_b8) {
          uStack_b8 = uVar2 & 0xffff;
          uVar11 = uVar2;
        }
        if ((uVar11 & 0xffff) == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          pbVar6 = param_4;
          func_0x00010b21b674(param_4,uVar11 & 0xffff);
          pbVar10 = pbVar6;
        }
        iVar9 = uVar1 + (uVar11 & 0xffff);
        iVar8 = (int)pbVar10;
      }
    }
  }
  lVar7 = (long)*(int *)(param_4 + 0x20);
  if ((-1 < *(int *)(param_4 + 0x20)) && (*(long *)(param_4 + 0x18) != 0)) {
    param_3[0xb] = *(long *)(param_4 + 0x18);
  }
  if (((-1 < (long)pbVar3) && ((long)pbVar3 <= lVar7)) && (*(long *)(param_4 + 0x18) != 0)) {
    param_3[0xc] = pbVar3 + *(long *)(param_4 + 0x18);
  }
  if (((-1 < (long)pbVar4) && ((long)pbVar4 <= lVar7)) && (*(long *)(param_4 + 0x18) != 0)) {
    param_3[0xd] = pbVar4 + *(long *)(param_4 + 0x18);
  }
  if (((-1 < (long)pbVar5) && ((long)pbVar5 <= lVar7)) && (*(long *)(param_4 + 0x18) != 0)) {
    param_3[0xe] = pbVar5 + *(long *)(param_4 + 0x18);
  }
  if (param_3[0xb] == 0) {
    param_3[0xb] = "";
  }
  if (param_3[0xc] == 0) {
    *(undefined2 *)((long)param_3 + 0x3a) = 0;
  }
  if (param_3[0xd] == 0) {
    param_3[0xd] = "";
  }
  if (param_3[0xe] == 0) {
    param_3[0xe] = "";
  }
  return pbVar10;
}



/* Entry: 10b21a468; end: 10b21a5fb;  */

long FUN_10b21a468(long param_1,undefined1 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = 0;
  lStack_38 = 0;
  if (((*(ushort *)(param_1 + 6) & 0xfff7) != 0) || (*(short *)(param_1 + 0x7a) != 0)) {
    return 0xffffff93;
  }
  *(undefined1 *)(param_1 + 0x176) = param_2;
  lVar2 = *(long *)(param_1 + 0x120);
  if (lVar2 == 0) {
    FUN_10b2185bc(param_1 + 0x120);
    lVar2 = *(long *)(param_1 + 0x120);
  }
  func_0x00010b21b768(*(undefined8 *)(param_1 + 0x100));
  if ((int)lVar2 != 0) goto LAB_10b21a5a4;
  if (*(char *)(param_1 + 0x176) == '\0') {
    if (*(short *)(param_1 + 6) != 8) {
      if (*(short *)(param_1 + 6) != 0) {
        lVar2 = 0xffffff9a;
        goto LAB_10b21a5a4;
      }
      goto LAB_10b21a4d8;
    }
    FUN_10b2190ac(param_1 + 0x118);
  }
  else {
LAB_10b21a4d8:
    FUN_10b2185bc(param_1 + 0x118);
  }
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) == 0) {
    if (((*(char *)(param_1 + 0x176) != '\0') || (sVar5 = *(short *)(param_1 + 6), sVar5 == 0)) ||
       ((*(ushort *)(param_1 + 4) & 1) != 0)) {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x120),2,lVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010b218448(uVar3,5,&lStack_38);
      lVar2 = lStack_38;
      if ((int)uVar3 != 0) {
        lVar2 = 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      func_0x00010b218448(uVar3,6,&lStack_40);
      lVar1 = lStack_40;
      if ((int)uVar3 != 0) {
        lVar1 = 0;
      }
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x118),2,lVar6 - (lVar2 + lVar1));
      sVar5 = *(short *)(param_1 + 6);
    }
    if ((sVar5 == 0xe) && ((*(ushort *)(param_1 + 4) >> 1 & 1) == 0)) {
      func_0x00010b218464(*(undefined8 *)(param_1 + 0x118),2,*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(param_1 + 0x118);
      lVar2 = *(long *)(param_1 + 0x30);
      uVar4 = 4;
      goto LAB_10b21a590;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    lVar2 = (long)param_3;
    uVar4 = 9;
LAB_10b21a590:
    func_0x00010b218464(uVar3,uVar4,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x118);
  func_0x00010b21b768(*(undefined8 *)(param_1 + 0x120));
  if ((int)lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x175) = 1;
    *(undefined4 *)(param_1 + 0x178) = 0;
    return lVar2;
  }
LAB_10b21a5a4:
  func_0x00010b21b7e0();
  return lVar2;
}



/* Entry: 10b21a5fc; end: 10b21acd3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b21a5fc(long *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  undefined2 uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  long *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined8 *******pppppppuVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b0;
  undefined4 uStack_a4;
  undefined4 auStack_a0 [14];
  long lStack_68;
  
  uStack_a4 = 0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  iVar19 = 8;
  if (*(long *)(param_2 + 0x30) < 0xffffffff) {
    iVar19 = 0;
  }
  iVar12 = iVar19 + 8;
  if (*(long *)(param_2 + 0x28) < 0xffffffff) {
    iVar12 = iVar19;
  }
  iVar19 = iVar12 + 8;
  if (*(long *)(param_2 + 0x48) < 0xffffffff) {
    iVar19 = iVar12;
  }
  sVar3 = *(short *)(param_2 + 0x78);
  if (sVar3 == 1) {
    bVar9 = true;
  }
  else if (sVar3 == 0) {
    bVar9 = iVar19 != 0;
  }
  else {
    bVar9 = false;
    if ((sVar3 == 2) && (iVar19 != 0)) {
      return (long *)0xffffff9a;
    }
  }
  if (*(short *)(param_2 + 0x3a) == 0) {
    pppppppuVar22 = (undefined8 *******)0x0;
  }
  else {
    pppppppuVar16 = &pppppppuStack_b0;
    FUN_10b218928();
    pppppppuVar22 = pppppppuStack_b0;
    uVar4 = *(ushort *)(param_2 + 0x3a);
    pppppppuStack_b0[3] = *(undefined8 *******)(param_2 + 0x60);
    *(uint *)(pppppppuStack_b0 + 4) = (uint)uVar4;
    *(uint *)((long)pppppppuStack_b0 + 0x24) = (uint)uVar4;
    do {
      iVar12 = (int)pppppppuVar16;
      func_0x00010b21b654();
      if ((iVar12 != 0) || (func_0x00010b21b654(), iVar12 != 0)) break;
      pppppppuVar16 = pppppppuVar22;
      func_0x00010b21b674();
    } while ((int)pppppppuVar16 == 0);
  }
  if (((*(long *)(param_2 + 8) == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     (*(long *)(param_2 + 0x18) == 0)) {
    bVar5 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = 0x20;
    bVar5 = 1;
  }
  pcVar13 = *(char **)(param_2 + 0x70);
  if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) {
    uStack_c0 = 0;
  }
  else {
    _strlen();
    uStack_c0 = CONCAT44((int)pcVar13 + 0xc,(int)pcVar13) & 0xffffffff0000ffff;
  }
  plVar24 = param_1;
  func_0x00010b217e54(param_1,0x2014b50);
  iVar12 = (int)plVar24;
  if (((iVar12 == 0) && (func_0x00010b21b66c(), iVar12 == 0)) &&
     ((func_0x00010b21b66c(), iVar12 == 0 &&
      ((func_0x00010b21b66c(), iVar12 == 0 && (func_0x00010b21b66c(), iVar12 == 0)))))) {
    iVar12 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      plVar24 = &lStack_68;
      lStack_68 = *(long *)(param_2 + 8);
      _localtime_r(plVar24,auStack_a0);
      iVar12 = (int)plVar24;
    }
    func_0x00010b21b744();
    if (iVar12 != 0) goto LAB_10b21a88c;
    plVar24 = param_1;
    FUN_10b21b300(param_1,param_2);
    bVar11 = (int)plVar24 == 0;
  }
  else {
LAB_10b21a88c:
    bVar11 = false;
  }
  uVar23 = *(ulong *)(param_2 + 0x58);
  uVar14 = uVar23;
  _strlen();
  iVar12 = 0;
  bVar2 = *(byte *)(param_2 + 1);
  cVar7 = SBORROW4((uint)bVar2,0x13);
  cVar8 = (int)(bVar2 - 0x13) < 0;
  if (bVar2 < 0x14) {
    uVar18 = *(uint *)(param_2 + 0x54);
    uVar20 = 1 << (ulong)(bVar2 & 0x1f);
    if ((uVar20 & 0x82008) != 0) {
      uVar20 = uVar18;
      if (0xffff < uVar18) {
        uVar20 = uVar18 >> 0x10;
      }
LAB_10b21a91c:
      uVar20 = uVar20 & 0xf000;
      cVar7 = SBORROW4(uVar20,0x4000);
      cVar8 = (int)(uVar20 - 0x4000) < 0;
      if (uVar20 == 0x4000) {
        iVar12 = 0;
        bVar2 = *(byte *)(uVar23 + (uVar14 & 0xffff) + -1);
        uVar18 = (uint)bVar2;
        cVar7 = SBORROW4(uVar18,0x2f);
        cVar8 = (int)(uVar18 - 0x2f) < 0;
        if (uVar18 != 0x2f) {
          uVar18 = (uint)bVar2;
          cVar7 = SBORROW4(uVar18,0x5c);
          cVar8 = (int)(uVar18 - 0x5c) < 0;
          if (uVar18 != 0x5c) {
            iVar12 = 1;
          }
          goto LAB_10b21a95c;
        }
      }
      goto LAB_10b21a958;
    }
    cVar8 = false;
    cVar7 = false;
    if ((uVar20 & 0x401) != 0) {
      uVar20 = 0x8000;
      if ((uVar18 & 0x10) != 0) {
        uVar20 = 0x4049;
      }
      if ((uVar18 & 0x400) != 0) {
        uVar20 = 0xa000;
      }
      goto LAB_10b21a91c;
    }
  }
  else {
LAB_10b21a958:
    iVar12 = 0;
  }
LAB_10b21a95c:
  bVar10 = false;
  if (bVar11) {
    uVar18 = (uint)uVar14;
    func_0x00010b21b66c();
    if (uVar18 == 0) {
      func_0x00010b21b66c();
      cVar8 = (int)uVar18 < 0;
      bVar10 = uVar18 == 0;
      cVar7 = '\0';
    }
    else {
      bVar10 = false;
    }
  }
  lVar15 = *(long *)(param_2 + 0x68);
  if (lVar15 == 0) {
    if (bVar10) goto LAB_10b21a9ac;
LAB_10b21a9ec:
    plVar24 = (long *)0xffffffff;
  }
  else {
    _strlen();
    cVar7 = SBORROW4((int)lVar15,0xffff);
    cVar8 = (int)lVar15 + -0xffff < 0;
    if (!bVar10) goto LAB_10b21a9ec;
LAB_10b21a9ac:
    uVar18 = (uint)lVar15;
    func_0x00010b21b66c();
    if ((((uVar18 != 0) || (func_0x00010b21b66c(), uVar18 != 0)) ||
        (func_0x00010b21b66c(), uVar18 != 0)) || (func_0x00010b21b744(), uVar18 != 0))
    goto LAB_10b21a9ec;
    func_0x00010b21b6ec(*(undefined8 *)(param_2 + 0x48));
    func_0x00010b21b744();
    if (uVar18 != 0) goto LAB_10b21a9ec;
    func_0x00010b21b820();
    FUN_10b217d50();
    bVar11 = uVar18 != ((uint)uVar14 & 0xffff);
    uVar18 = 0;
    if (bVar11) {
      uVar18 = 0xffffff8c;
    }
    plVar24 = (long *)(ulong)uVar18;
    iVar1 = 0;
    if (!bVar11) {
      iVar1 = iVar12;
    }
    cVar7 = SBORROW4(iVar1,1);
    cVar8 = iVar1 + -1 < 0;
    if (iVar1 == 1) {
      plVar24 = param_1;
      FUN_10b217db4(param_1,0x2f);
    }
  }
  if (*(short *)(param_2 + 0x3a) != 0) {
    pppppppuVar16 = pppppppuVar22;
    FUN_10b2188a0(pppppppuVar22,0,0);
    while (((iVar12 = (int)pppppppuVar16, (int)plVar24 == 0 && iVar12 == 0 &&
            (func_0x00010b21b654(), iVar12 == 0)) && (func_0x00010b21b654(), iVar12 == 0))) {
      cVar7 = SBORROW4((uint)uStack_a4._2_2_,0xd);
      cVar8 = (int)(uStack_a4._2_2_ - 0xd) < 0;
      if (uStack_a4._2_2_ < 0xe) {
        cVar8 = false;
        cVar7 = false;
        if ((1 << (ulong)(uStack_a4._2_2_ & 0x1f) & 0x2402U) == 0) goto LAB_10b21aa5c;
        pppppppuVar16 = pppppppuVar22;
        func_0x00010b21b674(pppppppuVar22,(undefined2)uStack_a4);
        plVar24 = (long *)0x0;
      }
      else {
LAB_10b21aa5c:
        func_0x00010b21b66c();
        pppppppuVar16 = (undefined8 *******)0x0;
        plVar24 = (long *)0xffffffff;
        if (iVar12 == 0) {
          uVar6 = (undefined2)uStack_a4;
          plVar17 = param_1;
          func_0x00010b217e48(param_1,(undefined2)uStack_a4);
          pppppppuVar16 = (undefined8 *******)0x0;
          if ((int)plVar17 == 0) {
            plVar24 = param_1;
            func_0x00010b217e70(param_1,pppppppuVar22,uVar6);
            pppppppuVar16 = (undefined8 *******)0x0;
          }
        }
      }
    }
    func_0x00010b218970(&pppppppuStack_b0);
  }
  if ((bVar9) && ((int)plVar24 == 0)) {
    plVar24 = param_1;
    FUN_10b21b5c4(param_1,1,iVar19);
    if ((((int)plVar24 == 0) &&
        ((func_0x00010b21b7a8(), cVar8 != cVar7 || (func_0x00010b21b7cc(), (int)plVar24 == 0)))) &&
       ((func_0x00010b21b7a8(), cVar8 != cVar7 || (func_0x00010b21b7cc(), (int)plVar24 == 0)))) {
      func_0x00010b21b7a8();
      if (cVar8 == cVar7) {
        func_0x00010b21b7cc();
      }
      else {
        plVar24 = (long *)0x0;
      }
      goto LAB_10b21ab10;
    }
LAB_10b21abec:
    plVar24 = (long *)0xffffffff;
  }
  else {
LAB_10b21ab10:
    bVar9 = (bool)(bVar5 ^ 1);
    if ((int)plVar24 != 0) {
      bVar9 = true;
    }
    if (!bVar9) {
      plVar24 = param_1;
      FUN_10b21b5c4(param_1,10,uVar21);
      if (((((int)plVar24 != 0) ||
           (plVar24 = param_1, func_0x00010b217e54(param_1,0), (int)plVar24 != 0)) ||
          (plVar24 = param_1, func_0x00010b217e48(param_1,1), (int)plVar24 != 0)) ||
         (((func_0x00010b21b66c(), (int)plVar24 != 0 ||
           (func_0x00010b21b6a8(*(undefined8 *)(param_2 + 8)), (int)plVar24 != 0)) ||
          (func_0x00010b21b6a8(*(undefined8 *)(param_2 + 0x10)), (int)plVar24 != 0))))
      goto LAB_10b21abec;
      func_0x00010b21b6a8(*(undefined8 *)(param_2 + 0x18));
    }
    if (((int)plVar24 == 0) && ((uStack_c0 & 0xffff00000000) != 0)) {
      plVar24 = param_1;
      FUN_10b21b5c4(param_1,0xd,uStack_c0._4_4_ & 0xffff);
      if (((int)plVar24 != 0) ||
         (((func_0x00010b21b744(), (int)plVar24 != 0 || (func_0x00010b21b744(), (int)plVar24 != 0))
          || (func_0x00010b21b7d4(), (int)plVar24 != 0)))) goto LAB_10b21abec;
      func_0x00010b21b7d4();
      if (((int)plVar24 != 0) || ((int)uStack_c0 == 0)) goto LAB_10b21ac88;
      plVar24 = param_1;
      FUN_10b217d50(param_1,*(undefined8 *)(param_2 + 0x70),uStack_c0 & 0xffffffff);
      if ((int)plVar24 != (int)uStack_c0) {
        return (long *)0xffffff8c;
      }
    }
    else {
LAB_10b21ac88:
      if ((int)plVar24 != 0) {
        return plVar24;
      }
    }
    if (*(long *)(param_2 + 0x68) == 0) {
      plVar24 = (long *)0x0;
    }
    else {
      FUN_10b217d50(param_1,*(long *)(param_2 + 0x68),*(undefined2 *)(param_2 + 0x3c));
      uVar18 = 0;
      if ((uint)param_1 != (uint)*(ushort *)(param_2 + 0x3c)) {
        uVar18 = 0xffffff8c;
      }
      plVar24 = (long *)(ulong)uVar18;
    }
  }
  return plVar24;
}



/* Entry: 10b21acd4; end: 10b21ad43;  */

undefined8 FUN_10b21acd4(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffff9a;
  if (((param_1 != 0) && (param_3 != 0)) && (*(char *)(param_1 + 0x175) != '\0')) {
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x118);
      FUN_10b217bcc();
      if (0 < (int)uVar2) {
        uVar1 = *(undefined4 *)(param_1 + 0x178);
        _crc32(uVar1,param_2,uVar2);
        *(undefined4 *)(param_1 + 0x178) = uVar1;
      }
    }
  }
  return uVar2;
}



/* Entry: 10b21ad44; end: 10b21ae87;  */

ulong FUN_10b21ad44(ulong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lStack_48;
  
  lStack_48 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    uVar3 = 0xffffff9a;
  }
  else {
    FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x28);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_1 + 0x30);
    }
    func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&lStack_48);
    uVar3 = 0;
    if (((param_2 != (undefined4 *)0x0 || param_3 != (undefined8 *)0x0) ||
         param_4 != (undefined8 *)0x0) && ((*(ushort *)(param_1 + 4) & 0x2008) == 8)) {
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      FUN_10b21ae88(uVar1,*(undefined2 *)(param_1 + 0xba));
      uVar3 = param_1;
      func_0x00010b219d50();
      if ((int)uVar3 == 0) {
        uVar3 = *(ulong *)(param_1 + 0x100);
        func_0x00010b21b674(uVar3,(ulong)*(ushort *)(param_1 + 0xb8) +
                                  (ulong)*(ushort *)(param_1 + 0xba) + lStack_48 + 0x1e);
        if ((int)uVar3 == 0) {
          uVar3 = *(ulong *)(param_1 + 0x100);
          FUN_10b21af24(uVar3,(int)uVar1 == 0,param_2,param_3,param_4);
        }
      }
    }
    if (((int)uVar3 == 0) && (0 < lStack_48)) {
      if (*(char *)(param_1 + 0x176) == '\0') {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x20)) {
          uVar2 = 0xffffff97;
        }
        uVar3 = (ulong)uVar2;
      }
      else {
        uVar3 = 0;
      }
    }
    func_0x00010b21b7e0();
  }
  return uVar3;
}



/* Entry: 10b21ae88; end: 10b21af23;  */

undefined8 FUN_10b21ae88(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined2 uStack_34;
  short sStack_32;
  
  lStack_40 = 0;
  uVar3 = 0xffffff9a;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_10b218928(&lStack_40);
    lVar1 = lStack_40;
    *(long *)(lStack_40 + 0x18) = param_1;
    *(int *)(lStack_40 + 0x20) = param_2;
    *(int *)(lStack_40 + 0x24) = param_2;
    do {
      lVar2 = lVar1;
      FUN_10b217cd0(lVar1,&sStack_32);
      if (((int)lVar2 != 0) || (lVar2 = lVar1, FUN_10b217cd0(lVar1,&uStack_34), (int)lVar2 != 0))
      break;
      if (sStack_32 == 1) {
        uVar3 = 0;
        goto LAB_10b21af10;
      }
      lVar2 = lVar1;
      func_0x00010b21b674(lVar1,uStack_34);
    } while ((int)lVar2 == 0);
    uVar3 = 0xffffff95;
LAB_10b21af10:
    func_0x00010b218970(&lStack_40);
  }
  return uVar3;
}



/* Entry: 10b21af24; end: 10b21b023;  */

void FUN_10b21af24(undefined8 param_1,int param_2,uint *param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  ulong uVar2;
  uint uStack_44;
  
  func_0x00010b217d08(param_1,&uStack_44);
  iVar1 = (int)param_1;
  if (uStack_44 != 0x8074b50) {
    iVar1 = -0x67;
  }
  if (iVar1 == 0) {
    func_0x00010b21b67c(0,&uStack_44);
    if ((param_3 == (uint *)0x0) || (iVar1 != 0)) {
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      *param_3 = uStack_44;
    }
    if (param_2 == 0) {
      func_0x00010b21b67c();
      uVar2 = (ulong)uStack_44;
    }
    else {
      func_0x00010b21b73c();
      uVar2 = 0;
    }
    if ((param_4 == (ulong *)0x0) || (iVar1 != 0)) {
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      *param_4 = uVar2;
    }
    iVar1 = 0;
    if (param_2 == 0) {
      func_0x00010b21b67c();
      uVar2 = (ulong)uStack_44;
    }
    else {
      func_0x00010b21b73c();
      uVar2 = 0;
    }
    if ((param_5 != (ulong *)0x0) && (iVar1 == 0)) {
      *param_5 = uVar2;
    }
    return;
  }
  return;
}



/* Entry: 10b21b024; end: 10b21b06b;  */

void FUN_10b21b024(long param_1)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_10b218480(param_1 + 0x120);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_10b218480(param_1 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  return;
}



/* Entry: 10b21b06c; end: 10b21b247;  */

long FUN_10b21b06c(long param_1,ulong param_2,long param_3,long param_4)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_40;
  long lStack_38;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    return 0xffffff9a;
  }
  lStack_40 = param_4;
  lStack_38 = param_3;
  FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x176) == '\0') {
    param_2 = (ulong)*(uint *)(param_1 + 0x178);
  }
  if (param_3 < 0) {
    func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x118));
  }
  if (param_4 < 0) {
    func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&lStack_40);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_1 + 0x100);
    FUN_10b2183d0();
    func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x120));
    if ((int)lVar3 != 0) goto LAB_10b21b194;
    uVar1 = *(ushort *)(param_1 + 4);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    lVar3 = 0;
    goto LAB_10b21b194;
  }
  if (*(short *)(param_1 + 0x78) == 1) {
LAB_10b21b144:
    bVar2 = true;
  }
  else if (*(short *)(param_1 + 0x78) == 0) {
    if (0xfffffffe < *(long *)(param_1 + 0x48)) goto LAB_10b21b144;
    bVar2 = (0xfffffffe < *(long *)(param_1 + 0x28) || 0xfffffffe < *(long *)(param_1 + 0x30)) ||
            *(long *)(param_1 + 0x30) == 0;
  }
  else {
    bVar2 = false;
  }
  lVar3 = *(long *)(param_1 + 0x100);
  uVar5 = param_2;
  lVar4 = lStack_40;
  if ((uVar1 >> 0xd & 1) != 0) {
    uVar5 = 0;
    lVar4 = 0;
  }
  FUN_10b21b248(lVar3,bVar2,uVar5,lStack_38,lVar4);
LAB_10b21b194:
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(long *)(param_1 + 0x28) = lStack_38;
  *(long *)(param_1 + 0x30) = lStack_40;
  if ((int)lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x110);
    FUN_10b21a5fc(lVar4,param_1);
    lVar3 = lVar4;
    if ((int)lVar4 == 0) {
      if ((*(ushort *)(param_1 + 4) & 0x2008) == 0) {
        func_0x00010b21b684();
        func_0x00010b21b780();
        lVar3 = param_1;
        func_0x00010b219d50();
        if ((int)lVar3 == 0) {
          lVar3 = *(long *)(param_1 + 0x100);
          func_0x00010b21b674(lVar3,0xe);
          if ((int)lVar3 == 0) {
            lVar3 = *(long *)(param_1 + 0x100);
            FUN_10b21b300(lVar3,param_1);
          }
        }
        func_0x00010b21b7e8(*(undefined8 *)(param_1 + 0x100));
        func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100),lVar4);
      }
      else {
        lVar3 = 0;
      }
    }
  }
  *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
  func_0x00010b21b7e0();
  return lVar3;
}



/* Entry: 10b21b248; end: 10b21b2ff;  */

/* WARNING: Possible PIC construction at 0x00010b21b278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b21b2b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b21b2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b21b2b8) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2bc) */
/* WARNING: Removing unreachable block (ram,0x00010b21b27c) */
/* WARNING: Removing unreachable block (ram,0x00010b21b280) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2a8) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2d8) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2b0) */
/* WARNING: Removing unreachable block (ram,0x00010b217e60) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2e0) */
/* WARNING: Removing unreachable block (ram,0x00010b21b290) */
/* WARNING: Removing unreachable block (ram,0x00010b21b2e4) */

void FUN_10b21b248(ulong param_1)

{
  undefined1 *puVar1;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong in_x4;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong extraout_x9;
  undefined8 uVar10;
  undefined1 *puVar2;
  
  uVar6 = 0x8074b50;
  uVar10 = 0x10b21b27c;
  puVar1 = &stack0xffffffffffffffc0;
  uVar5 = param_1;
  uVar9 = 4;
  while( true ) {
    uVar8 = uVar9;
    puVar2 = puVar1;
    iVar4 = (int)uVar5;
    uVar7 = (ulong)uVar6;
    puVar1 = puVar2 + -0x30;
    uVar6 = (uint)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x20) = param_1;
    *(ulong *)(puVar2 + -0x18) = in_x4;
    *(undefined1 **)(puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)(puVar2 + -8) = uVar10;
    uVar9 = uVar8;
    func_0x00010b21864c();
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8;
    uVar9 = uVar9 & 0xffffffff;
    for (uVar5 = extraout_x9; uVar9 != uVar5; uVar5 = uVar5 + 1) {
      puVar2[uVar5 - 0x30] = (char)uVar7;
      uVar7 = uVar7 >> 8;
    }
    if (uVar7 != 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar1 = 0xff;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_10b217d50();
    bVar3 = iVar4 == (int)uVar8;
    uVar5 = (ulong)-(uint)!bVar3;
    func_0x00010b218628(*(undefined8 *)(puVar2 + -0x28));
    if (bVar3) break;
    uVar10 = 0x10b217e48;
    ___stack_chk_fail();
    puVar1 = puVar2 + -0x30;
    uVar9 = 2;
    in_x4 = uVar8;
    register0x00000008 = (BADSPACEBASE *)puVar2;
  }
  return;
}



/* Entry: 10b21b300; end: 10b21b357;  */

/* WARNING: Possible PIC construction at 0x00010b21b318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b21b32c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b21b31c) */
/* WARNING: Removing unreachable block (ram,0x00010b21b320) */
/* WARNING: Removing unreachable block (ram,0x00010b21b330) */
/* WARNING: Removing unreachable block (ram,0x00010b21b340) */
/* WARNING: Removing unreachable block (ram,0x00010b21b334) */
/* WARNING: Removing unreachable block (ram,0x00010b21b790) */

void FUN_10b21b300(ulong param_1,long param_2)

{
  undefined1 *puVar1;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  ulong extraout_x9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  uVar6 = *(uint *)(param_2 + 0x20);
  uVar11 = 0x10b21b31c;
  puVar2 = &stack0xffffffffffffffe0;
  uVar10 = 4;
  uVar9 = param_1;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar8 = uVar10;
    puVar3 = puVar2;
    iVar5 = (int)param_1;
    uVar7 = (ulong)uVar6;
    puVar2 = puVar3 + -0x30;
    uVar6 = (uint)(puVar3 + -0x30);
    *(long *)(puVar3 + -0x20) = param_2;
    *(ulong *)(puVar3 + -0x18) = uVar9;
    *(undefined1 **)(puVar3 + -0x10) = puVar1 + -0x10;
    *(undefined8 *)(puVar3 + -8) = uVar11;
    uVar9 = uVar8;
    func_0x00010b21864c();
    *(undefined8 *)(puVar3 + -0x28) = extraout_x8;
    uVar9 = uVar9 & 0xffffffff;
    for (uVar10 = extraout_x9; uVar9 != uVar10; uVar10 = uVar10 + 1) {
      puVar3[uVar10 - 0x30] = (char)uVar7;
      uVar7 = uVar7 >> 8;
    }
    if (uVar7 != 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      }
    }
    FUN_10b217d50();
    bVar4 = iVar5 == (int)uVar8;
    param_1 = (ulong)-(uint)!bVar4;
    func_0x00010b218628(*(undefined8 *)(puVar3 + -0x28));
    if (bVar4) break;
    uVar11 = 0x10b217e48;
    ___stack_chk_fail();
    puVar2 = puVar3 + -0x30;
    uVar10 = 2;
    uVar9 = uVar8;
    puVar1 = puVar3;
  }
  return;
}



/* Entry: 10b21b358; end: 10b21b3e3;  */

/* WARNING: Removing unreachable block (ram,0x00010b21ada0) */
/* WARNING: Removing unreachable block (ram,0x00010b21b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010b21ad94) */
/* WARNING: Removing unreachable block (ram,0x00010b21adc8) */
/* WARNING: Removing unreachable block (ram,0x00010b21addc) */
/* WARNING: Removing unreachable block (ram,0x00010b21adfc) */
/* WARNING: Removing unreachable block (ram,0x00010b21ae20) */
/* WARNING: Removing unreachable block (ram,0x00010b21ae38) */
/* WARNING: Removing unreachable block (ram,0x00010b21ad88) */

ulong FUN_10b21b358(ulong param_1,long param_2,ulong param_3)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lStack_48;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    return 0xffffff9a;
  }
  if ((*(byte *)(param_1 + 0x138) >> 1 & 1) == 0) {
    lStack_48 = 0;
    if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
      uVar6 = 0xffffff9a;
    }
    else {
      FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
      func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&lStack_48);
      uVar6 = 0;
      if (0 < lStack_48) {
        if (*(char *)(param_1 + 0x176) == '\0') {
          uVar5 = 0;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x20)) {
            uVar5 = 0xffffff97;
          }
          uVar6 = (ulong)uVar5;
        }
        else {
          uVar6 = 0;
        }
      }
      func_0x00010b21b7e0();
    }
    return uVar6;
  }
  lStack_48 = 0;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x175) == '\0')) {
    return 0xffffff9a;
  }
  FUN_10b2183d0(*(undefined8 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x176) == '\0') {
    param_3 = (ulong)*(uint *)(param_1 + 0x178);
  }
  func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x118));
  if (param_2 < 0) {
    func_0x00010b218448(*(undefined8 *)(param_1 + 0x118),1,&stack0xffffffffffffffc0);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x120);
    *(undefined8 *)(uVar6 + 8) = *(undefined8 *)(param_1 + 0x100);
    FUN_10b2183d0();
    func_0x00010b21b7b4(*(undefined8 *)(param_1 + 0x120));
    if ((int)uVar6 != 0) goto LAB_10b21b194;
    uVar1 = *(ushort *)(param_1 + 4);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    uVar6 = 0;
    goto LAB_10b21b194;
  }
  if (*(short *)(param_1 + 0x78) == 1) {
LAB_10b21b144:
    bVar2 = true;
  }
  else if (*(short *)(param_1 + 0x78) == 0) {
    if (0xfffffffe < *(long *)(param_1 + 0x48)) goto LAB_10b21b144;
    bVar2 = (0xfffffffe < *(long *)(param_1 + 0x28) || 0xfffffffe < *(long *)(param_1 + 0x30)) ||
            *(long *)(param_1 + 0x30) == 0;
  }
  else {
    bVar2 = false;
  }
  uVar6 = *(ulong *)(param_1 + 0x100);
  uVar3 = param_3;
  lVar4 = param_2;
  if ((uVar1 >> 0xd & 1) != 0) {
    uVar3 = 0;
    lVar4 = 0;
  }
  FUN_10b21b248(uVar6,bVar2,uVar3,0xffffffffffffffff,lVar4);
LAB_10b21b194:
  *(int *)(param_1 + 0x20) = (int)param_3;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(long *)(param_1 + 0x30) = param_2;
  if ((int)uVar6 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x110);
    FUN_10b21a5fc(uVar3,param_1);
    uVar6 = uVar3;
    if ((int)uVar3 == 0) {
      if ((*(ushort *)(param_1 + 4) & 0x2008) == 0) {
        func_0x00010b21b684();
        func_0x00010b21b780();
        uVar6 = param_1;
        func_0x00010b219d50();
        if ((int)uVar6 == 0) {
          uVar6 = *(ulong *)(param_1 + 0x100);
          func_0x00010b21b674(uVar6,0xe);
          if ((int)uVar6 == 0) {
            uVar6 = *(ulong *)(param_1 + 0x100);
            FUN_10b21b300(uVar6,param_1);
          }
        }
        func_0x00010b21b7e8(*(undefined8 *)(param_1 + 0x100));
        func_0x00010b21b630(*(undefined8 *)(param_1 + 0x100),uVar3);
      }
      else {
        uVar6 = 0;
      }
    }
  }
  *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
  func_0x00010b21b7e0();
  return uVar6;
}



/* Entry: 10b21b3e4; end: 10b21b437;  */

void FUN_10b21b3e4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x174) = 0;
  func_0x00010b21b708(*(undefined8 *)(param_1 + 0x108));
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010b21b630(uVar1,*(undefined8 *)(param_1 + 0x158));
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    FUN_10b219de4(uVar1,0,param_1,*(undefined8 *)(param_1 + 0x128));
    if ((int)uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x174) = 1;
    }
  }
  return;
}



/* Entry: 10b21b438; end: 10b21b47b;  */

undefined8 FUN_10b21b438(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
    *(undefined1 *)(param_1 + 0x174) = 0;
    func_0x00010b21b708(*(undefined8 *)(param_1 + 0x108));
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010b21b630(uVar1,*(undefined8 *)(param_1 + 0x158));
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x108);
      FUN_10b219de4(uVar1,0,param_1,*(undefined8 *)(param_1 + 0x128));
      if ((int)uVar1 == 0) {
        *(undefined1 *)(param_1 + 0x174) = 1;
      }
    }
    return uVar1;
  }
  return 0xffffff9a;
}



/* Entry: 10b21b47c; end: 10b21b5c3;  */

void FUN_10b21b47c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     ((*(char *)(param_1 + 0x174) == '\0' ||
      ((lVar2 = *(long *)(param_1 + 0x58), lVar2 == 0 || (func_0x00010b21b7c0(), (int)lVar2 != 0))))
     )) {
    lVar2 = param_1;
    FUN_10b21b438();
    iVar1 = (int)lVar2;
    while (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x00010b21b7c0();
      if (iVar1 == 0) {
        return;
      }
      lVar2 = param_1;
      func_0x00010b21b44c();
      iVar1 = (int)lVar2;
    }
  }
  return;
}



/* Entry: 10b21b5c4; end: 10b21b5ff;  */

ulong FUN_10b21b5c4(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong extraout_x9;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  iVar3 = (int)param_1;
  FUN_10b217e48();
  if (iVar3 != 0) {
    return 0xffffffff;
  }
  while( true ) {
    iVar3 = (int)param_1;
    uVar4 = (ulong)param_3 & 0xffffffff;
    uVar5 = 2;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = 2;
    func_0x00010b21864c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    uVar5 = uVar5 & 0xffffffff;
    for (uVar6 = extraout_x9; uVar5 != uVar6; uVar6 = uVar6 + 1) {
      *(char *)((long)register0x00000008 + (uVar6 - 0x30)) = (char)uVar4;
      uVar4 = uVar4 >> 8;
    }
    if (uVar4 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = 0xff;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_10b217d50();
    bVar2 = iVar3 == 2;
    param_1 = (ulong)-(uint)!bVar2;
    func_0x00010b218628(*(undefined8 *)((long)register0x00000008 + -0x28));
    if (bVar2) break;
    unaff_x30 = FUN_10b217e48;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  return param_1;
}



/* Entry: 10b21b600; end: 10b21b82b;  */

/* WARNING: Removing unreachable block (ram,0x00010b2186ec) */

undefined1  [16] FUN_10b21b600(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  *(undefined4 *)(param_1 + 0x10) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar3 = (ulong)uVar1;
  uVar4 = uVar3;
  _malloc();
  if (uVar3 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x18);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      _memcpy(uVar3,uVar5,(long)*(int *)(param_1 + 0x20));
      _free(uVar5);
    }
    uVar2 = 0;
    *(ulong *)(param_1 + 0x18) = uVar3;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 10b21b82c; end: 10b21bbaf;  */

void FUN_10b21b82c(undefined8 param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long *plVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long *unaff_x19;
  long lVar11;
  long lVar12;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010b21c4d8();
  uStack_48 = extraout_x8;
  FUN_10b21bbb0(&plStack_a0);
  lVar4 = *param_2;
  if (lVar4 == 0) {
LAB_10b21b8a0:
    lVar12 = 0;
    lVar4 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
  }
  else {
    lVar12 = param_2[1];
    ___dynamic_cast(lVar4,&PTR_DAT_110cc84f0,&PTR_DAT_110cf00d8,0);
    if (lVar4 == 0) goto LAB_10b21b8a0;
    lStack_b0 = lVar4;
    lStack_a8 = lVar12;
    if (lVar12 != 0) {
      do {
        func_0x00010b21c414();
      } while (extraout_w10 != 0);
    }
  }
  lVar5 = *param_3;
  if (lVar5 != 0) {
    lVar11 = param_3[1];
    ___dynamic_cast(lVar5,&PTR_DAT_110cc8500,&PTR_DAT_110cc8700,0);
    if (lVar5 != 0) {
      lStack_c0 = lVar5;
      lStack_b8 = lVar11;
      if (lVar11 != 0) {
        do {
          func_0x00010b21c414();
        } while (extraout_w10_00 != 0);
      }
      goto LAB_10b21b8f0;
    }
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
LAB_10b21b8f0:
  puVar6 = (undefined8 *)0x90;
  __Znwm();
  plVar9 = puVar6 + 1;
  *plVar9 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc84b0;
  puVar7 = puVar6;
  lStack_90 = lVar4;
  lStack_88 = lVar12;
  if (lVar12 != 0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10_01 != 0);
  }
  puVar6[3] = &PTR_DAT_110cc8470;
  func_0x000107c31444();
  func_0x000107c27c1c(auStack_60,1);
  puVar3 = puStack_50;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_1107ea880;
  puStack_50[1] = 0;
  func_0x000107c278b8(&puStack_78,&UNK_10f73a876);
  func_0x000107c31460(puVar3 + 3,&puStack_78,0,puVar7,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_78);
  puVar7 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  puStack_70 = puVar7;
  puStack_78 = puVar7 + 3;
  func_0x000107c27c24(auStack_60);
  puVar6[4] = &PTR_DAT_110d9a078;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 9) = 0x3f800000;
  puVar6[10] = puVar7 + 3;
  puVar6[0xb] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c27c20(&puStack_78);
  puVar6[3] = &PTR_FUN_110cc83b0;
  puVar6[4] = &PTR_DAT_110cc83f8;
  puVar6[0xd] = lStack_88;
  puVar6[0xc] = lStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10_03 != 0);
  }
  puVar7 = puVar6 + 4;
  lVar4 = param_3[1];
  lVar12 = *param_3;
  puVar6[0xf] = param_3[1];
  puVar6[0xe] = lVar12;
  if (lVar4 != 0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x11] = lStack_98;
  puVar6[0x10] = plStack_a0;
  if (lStack_98 != 0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10_05 != 0);
  }
  func_0x00010b105a58(&lStack_90);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_d0 = puVar6 + 3;
  puStack_c8 = puVar6;
  puStack_78 = puVar7;
  puStack_70 = puVar6;
  (**(code **)(*plStack_a0 + 0x10))(plStack_a0,&puStack_78);
  func_0x00010b21c43c();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_78 = puVar7;
  puStack_70 = puVar6;
  func_0x00010b21c4a0();
  func_0x00010b21c43c();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_78 = puVar7;
  puStack_70 = puVar6;
  func_0x00010b21c4a0();
  func_0x00010b21c43c();
  *unaff_x19 = (long)(puVar6 + 3);
  unaff_x19[1] = (long)puVar6;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  FUN_10b21c318(&puStack_d0);
  func_0x00010b21c2bc(&lStack_c0);
  func_0x00010b21c298(&lStack_b0);
  pplVar8 = &plStack_a0;
  func_0x00010b21c274();
  func_0x00010b21c4ec(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b21c43c();
    FUN_10b21c318(&puStack_d0);
    func_0x00010b21c2bc(&lStack_c0);
    func_0x00010b21c298(&lStack_b0);
    func_0x00010b21c274(&plStack_a0);
    __Unwind_Resume();
    plVar9 = *pplVar8;
    if ((plVar9 == (long *)0x0) ||
       (___dynamic_cast(plVar9,&PTR_DAT_110cc8510,&PTR_DAT_110d997a8,0x40), plVar9 == (long *)0x0))
    {
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = 0;
    }
    else {
      plVar10 = pplVar8[1];
      *extraout_x8_00 = plVar9;
      extraout_x8_00[1] = plVar10;
      if (plVar10 != (long *)0x0) {
        do {
          func_0x00010b21c414();
        } while (extraout_w10_06 != 0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b21bbb0; end: 10b21bc13;  */

void FUN_10b21bbb0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) ||
     (___dynamic_cast(lVar1,&PTR_DAT_110cc8510,&PTR_DAT_110d997a8,0x40), lVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b21c414();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b21bc14; end: 10b21bc87;  */

undefined8 * FUN_10b21bc14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cc83b0;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cc83f8;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b21c424();
  FUN_10b21c274(param_1 + 0xd);
  func_0x00010b105a7c(param_1 + 0xb);
  func_0x00010b105a58(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b21bc88; end: 10b21bc93;  */

undefined8 * FUN_10b21bc88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cc83b0;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cc83f8;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b21c424();
  FUN_10b21c274(param_1 + 0xd);
  func_0x00010b105a7c(param_1 + 0xb);
  func_0x00010b105a58(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b21bc94; end: 10b21bca7;  */

void FUN_10b21bc94(void)

{
  FUN_10b21bc14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21bca8; end: 10b21bcaf;  */

void FUN_10b21bca8(long param_1)

{
  FUN_10b21bc14(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21bcb0; end: 10b21bd5f;  */

void FUN_10b21bcb0(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21be60(auStack_58);
  FUN_10b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x00010b105a58(&uStack_30);
  uStack_28 = *(undefined8 *)(param_2 + 0x60);
  uStack_30 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  func_0x00010b105a7c();
  uStack_28 = *(undefined8 *)(param_2 + 0x70);
  uStack_30 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_10b21c274();
  func_0x00010b21bdac(auStack_58,&uStack_30);
  FUN_10b21c0c8(auStack_58);
  return;
}



/* Entry: 10b21bd60; end: 10b21bdcb;  */

void FUN_10b21bd60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x00010b21c424();
  return;
}



/* Entry: 10b21bdcc; end: 10b21be5f;  */

void FUN_10b21bdcc(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b21c464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b21c12c();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b1059a4(unaff_x19 + 0x18);
  func_0x00010b1059a4((long *)(param_1 + 8));
  return;
}



/* Entry: 10b21be60; end: 10b21be83;  */

void FUN_10b21be60(undefined8 *param_1)

{
  FUN_10b21be84();
  *param_1 = &PTR_FUN_110cc8530;
  return;
}



/* Entry: 10b21be84; end: 10b21bec3;  */

void FUN_10b21be84(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x00010b21c464();
  func_0x00010b21bed8(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x00010b21c414();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b21bec4; end: 10b21bef3;  */

void FUN_10b21bec4(void)

{
  FUN_10b21c0c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21bef4; end: 10b21bef7;  */

void FUN_10b21bef4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b21c464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b21c12c();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b1059a4(unaff_x19 + 0x18);
  func_0x00010b1059a4((long *)(param_1 + 8));
  return;
}



/* Entry: 10b21bef8; end: 10b21bf0b;  */

void FUN_10b21bef8(void)

{
  FUN_10b21c0c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21bf0c; end: 10b21bfbb;  */

undefined1 * FUN_10b21bf0c(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b21c4d8();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_10b21bfbc(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110cc8598;
  puStack_30[1] = 0;
  puStack_30[4] = 0x3cb0b1bb;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[9] = 0;
  puStack_30[10] = 0x32aaaba7;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x13] = 0;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  FUN_10b21c0b8();
  func_0x00010b21c4ec(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b21bfe4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b21bfbc; end: 10b21bfe3;  */

long FUN_10b21bfbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b21bfe4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b21bfe4; end: 10b21c00f;  */

void FUN_10b21bfe4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x19999999999999a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc8598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21c010; end: 10b21c013;  */

void FUN_10b21c010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21c014; end: 10b21c027;  */

void FUN_10b21c014(void)

{
  func_0x00010b21c034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21c028; end: 10b21c047;  */

long FUN_10b21c028(long param_1)

{
  func_0x00010b21c084(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10b21c048; end: 10b21c0b7;  */

long FUN_10b21c048(long param_1)

{
  func_0x00010b21c084(param_1 + 0x80);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x78);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  __ZNSt3__118condition_variableD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10b21c0b8; end: 10b21c0c7;  */

void FUN_10b21c0b8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b21c0c8; end: 10b21c12b;  */

void FUN_10b21c0c8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b21c464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b21c12c();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x00010b1059a4(unaff_x19 + 0x18);
  func_0x00010b1059a4((long *)(param_1 + 8));
  return;
}



/* Entry: 10b21c12c; end: 10b21c1a3;  */

void FUN_10b21c12c(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_10b21c1a4(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 10b21c1a4; end: 10b21c1c3;  */

void FUN_10b21c1a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b21c1c4(param_1,&uStack_18);
  return;
}



/* Entry: 10b21c1c4; end: 10b21c25f;  */

void FUN_10b21c1c4(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b21c444();
  func_0x00010b21c4cc();
  func_0x00010b1059a4(auStack_40);
  func_0x00010b21c424();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  FUN_10b21c260(param_2,alStack_30);
  func_0x00010b21c42c(alStack_30[0]);
  if (param_2 == (long *)0x0) {
    func_0x00010b21c4c0();
  }
  else {
    func_0x00010b21c4b4(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b21c3fc();
  }
  func_0x00010b21c45c();
  return;
}



/* Entry: 10b21c260; end: 10b21c273;  */

void FUN_10b21c260(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x78,*param_1);
  return;
}



/* Entry: 10b21c274; end: 10b21c2df;  */

void FUN_10b21c274(long param_1)

{
  func_0x00010b21c47c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b21c2e0; end: 10b21c2e3;  */

void FUN_10b21c2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc84b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21c2e4; end: 10b21c2f7;  */

void FUN_10b21c2e4(void)

{
  func_0x00010b21c308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21c2f8; end: 10b21c317;  */

void FUN_10b21c2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b21c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b21c318; end: 10b21c35f;  */

void FUN_10b21c318(long param_1)

{
  func_0x00010b21c47c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b21c360; end: 10b21c3fb;  */

void FUN_10b21c360(void)

{
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b21c444();
  func_0x00010b21c4cc();
  func_0x00010b1059a4(auStack_40);
  func_0x00010b21c424();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x38);
  if ((*(byte *)(lStack_30 + 1) & 1) == 0) {
    *(undefined1 *)(lStack_30 + 1) = 1;
  }
  func_0x00010b21c42c();
  if (unaff_x19 == (long *)0x0) {
    func_0x00010b21c4c0();
  }
  else {
    func_0x00010b21c4b4(*(undefined8 *)(*unaff_x19 + 0x10));
    func_0x00010b21c3fc();
  }
  func_0x00010b21c45c();
  return;
}



/* Entry: 10b21c3fc; end: 10b21c4ff;  */

void FUN_10b21c3fc(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010b21c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 10b21c500; end: 10b21c53f;  */

void FUN_10b21c500(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21c540(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b21c98c(&uStack_30);
  return;
}



/* Entry: 10b21c540; end: 10b21c55f;  */

void FUN_10b21c540(void)

{
  undefined1 uStack_11;
  
  FUN_10b21c9b4(&uStack_11);
  return;
}



/* Entry: 10b21c560; end: 10b21c82f;  */

void FUN_10b21c560(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  
  if ((bRam00000001137f4210 & 1) == 0) {
    iVar3 = 0x137f4210;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001137f4218 = 0x1137f4218;
      plRam00000001137f4220 = (long *)0x1137f4218;
      uRam00000001137f4230 = 0x32aaaba7;
      uRam00000001137f4228 = 0;
      uRam00000001137f4240 = 0;
      uRam00000001137f4238 = 0;
      uRam00000001137f4250 = 0;
      uRam00000001137f4248 = 0;
      uRam00000001137f4260 = 0;
      uRam00000001137f4258 = 0;
      uRam00000001137f4268 = 0;
      ___cxa_guard_release(0x1137f4210);
    }
  }
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  uStack_a0 = 0x1137f4230;
  uStack_98 = 1;
  uStack_b4 = param_2;
  __ZNSt3__15mutex4lockEv();
  plVar8 = plRam00000001137f4220;
  if (uRam00000001137f4228 != 0) {
    if (uRam00000001137f4228 >> 0x3c != 0) {
      FUN_10b21c870();
LAB_10b21c7f0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b21c7f4);
      (*pcVar2)();
    }
    FUN_10b21c884(&plStack_78,uRam00000001137f4228,0,&plStack_80);
    plVar7 = (long *)((long)plStack_70 - ((long)plStack_88 - (long)plStack_90));
    _memcpy(plVar7);
    plVar8 = plStack_80;
    plStack_80 = plStack_60;
    plStack_88 = plStack_68;
    plStack_68 = plStack_90;
    plStack_60 = plVar8;
    plStack_78 = plStack_90;
    plStack_70 = plStack_90;
    plStack_90 = plVar7;
    FUN_10b21c8e8(&plStack_78);
    plVar8 = plRam00000001137f4220;
  }
  do {
    if (plVar8 == (long *)0x1137f4218) {
      func_0x000107c2798c(&uStack_a0);
      plVar8 = plStack_88;
      for (plVar7 = plStack_90; plVar7 != plVar8; plVar7 = plVar7 + 2) {
        (**(code **)*plVar7)(&uStack_b4);
      }
      FUN_10b21c838(&plStack_90);
      func_0x00010b21c958(&plStack_90);
      return;
    }
    lStack_b0 = 0;
    lStack_a8 = 0;
    lVar4 = plVar8[3];
    if (((lVar4 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_a8 = lVar4, lVar4 == 0))
       || (lVar10 = plVar8[2], lStack_b0 = lVar10, lVar10 == 0)) {
      lVar4 = *plVar8;
      plVar7 = (long *)plVar8[1];
      *(long **)(lVar4 + 8) = plVar7;
      *plVar7 = lVar4;
      uRam00000001137f4228 = uRam00000001137f4228 - 1;
      if (plVar8[3] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZdlPv(plVar8);
    }
    else {
      if (plStack_88 < plStack_80) {
        *plStack_88 = lVar10;
        plStack_88[1] = lVar4;
        plVar11 = plStack_88 + 2;
        lStack_b0 = 0;
        lStack_a8 = 0;
      }
      else {
        lVar5 = (long)plStack_88 - (long)plStack_90 >> 4;
        uVar1 = lVar5 + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10b21c870();
          goto LAB_10b21c7f0;
        }
        uVar6 = (long)plStack_80 - (long)plStack_90 >> 3;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7fffffffffffffef < (ulong)((long)plStack_80 - (long)plStack_90)) {
          uVar6 = 0xfffffffffffffff;
        }
        FUN_10b21c884(&plStack_78,uVar6,lVar5,&plStack_80);
        *plStack_68 = lVar10;
        plStack_68[1] = lVar4;
        lStack_b0 = 0;
        lStack_a8 = 0;
        plVar11 = plStack_68 + 2;
        plVar9 = (long *)((long)plStack_70 - ((long)plStack_88 - (long)plStack_90));
        _memcpy(plVar9);
        plVar7 = plStack_80;
        plStack_80 = plStack_60;
        plStack_78 = plStack_90;
        plStack_68 = plStack_90;
        plStack_60 = plVar7;
        plStack_70 = plStack_90;
        plStack_90 = plVar9;
        plStack_88 = plVar11;
        FUN_10b21c8e8(&plStack_78);
      }
      plVar7 = (long *)plVar8[1];
      plStack_88 = plVar11;
    }
    func_0x00010b21c930(&lStack_b0);
    plVar8 = plVar7;
  } while( true );
}



/* Entry: 10b21c830; end: 10b21c837;  */

void FUN_10b21c830(void)

{
  return;
}



/* Entry: 10b21c838; end: 10b21c86f;  */

void FUN_10b21c838(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    func_0x00010b21c930();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b21c870; end: 10b21c883;  */

long * FUN_10b21c870(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar3 = plVar2[1];
      while (lVar3 != plVar2[2]) {
        plVar2[2] = plVar2[2] + -0x10;
        func_0x00010b21c930();
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    lVar3 = param_2 << 4;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 0x10;
  *plVar2 = lVar3;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = lVar3 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 10b21c884; end: 10b21c8e7;  */

long * FUN_10b21c884(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x10;
        func_0x00010b21c930();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b21c8e8; end: 10b21c9b3;  */

long * FUN_10b21c8e8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x00010b21c930();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b21c9b4; end: 10b21ca47;  */

undefined1 * FUN_10b21c9b4(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10b21ca48(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110cc8658;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110cc85e8;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010b21cac4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_10b21ca70();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b21ca48; end: 10b21ca6f;  */

long FUN_10b21ca48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b21ca70();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b21ca70; end: 10b21ca8b;  */

void FUN_10b21ca70(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc8658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21ca8c; end: 10b21ca8f;  */

void FUN_10b21ca8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc8658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b21ca90; end: 10b21caa3;  */

void FUN_10b21ca90(void)

{
  func_0x00010b21cab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21caa4; end: 10b21cadb;  */

void FUN_10b21caa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b21caac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b21cadc; end: 10b21cb9f;  */

void FUN_10b21cadc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *aplStack_30 [2];
  
  FUN_10b21bbb0(aplStack_30);
  FUN_10b21cba0(&lStack_40,aplStack_30);
  lStack_50 = 0;
  if (lStack_40 != 0) {
    lStack_50 = lStack_40 + 8;
  }
  lStack_48 = lStack_38;
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*aplStack_30[0] + 0x10))(aplStack_30[0],&lStack_50);
  func_0x00010b21c33c(&lStack_50);
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  lStack_40 = 0;
  lStack_38 = 0;
  func_0x00010b21c2bc(&lStack_40);
  func_0x00010b21c274(aplStack_30);
  return;
}



/* Entry: 10b21cba0; end: 10b21cbc3;  */

void FUN_10b21cba0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b21cdfc(&uStack_11,param_1);
  return;
}



/* Entry: 10b21cbc4; end: 10b21cca7;  */

undefined8 * FUN_10b21cbc4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long lStack_28;
  
  *param_1 = &PTR_DAT_110cc8748;
  uStack_34 = 0;
  puVar4 = param_1;
  func_0x000107c31444();
  func_0x000107c2beb0(&uStack_30,&UNK_10f73a88d,&uStack_34,puVar4);
  param_1[1] = &PTR_DAT_110d9a078;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = lStack_28;
  param_1[7] = uStack_30;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c27c20(&uStack_30);
  *param_1 = &PTR_FUN_110cc86a8;
  param_1[1] = &PTR_DAT_110cc86e0;
  FUN_10b21c540(&uStack_30);
  param_1[10] = lStack_28;
  param_1[9] = uStack_30;
  uStack_30 = 0;
  lStack_28 = 0;
  func_0x00010b21c98c(&uStack_30);
  return param_1;
}



/* Entry: 10b21cca8; end: 10b21cd17;  */

undefined8 * FUN_10b21cca8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cc86a8;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cc86e0;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  FUN_10b106e94(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b21cd18; end: 10b21cd23;  */

undefined8 * FUN_10b21cd18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cc86a8;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cc86e0;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  FUN_10b106e94(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b21cd24; end: 10b21cd37;  */

void FUN_10b21cd24(void)

{
  FUN_10b21cca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21cd38; end: 10b21cd3f;  */

void FUN_10b21cd38(long param_1)

{
  FUN_10b21cca8(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b21cd40; end: 10b21cdc3;  */

void FUN_10b21cd40(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21be60(auStack_58);
  FUN_10b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  FUN_10b106e94(&uStack_30);
  func_0x00010b21bdac(auStack_58,&uStack_30);
  FUN_10b21c0c8(auStack_58);
  return;
}



/* Entry: 10b21cdc4; end: 10b21cdfb;  */

void FUN_10b21cdc4(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21be60(auStack_58);
  FUN_10b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x48);
  uStack_30 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  FUN_10b106e94(&uStack_30);
  func_0x00010b21bdac(auStack_58,&uStack_30);
  FUN_10b21c0c8(auStack_58);
  return;
}


