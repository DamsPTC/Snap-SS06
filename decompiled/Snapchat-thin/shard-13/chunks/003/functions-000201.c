/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a395654; end: 10a39570f;  */

void FUN_10a395654(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_10a3c7c48();
  uVar1 = *(undefined8 *)(param_5 + 0x178);
  func_0x00010a3e8e18(&uStack_30,*(undefined8 *)(param_5 + 0x168));
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_10a3e82bc(uVar1,&uStack_40);
  return;
}



/* Entry: 10a395710; end: 10a39577b;  */

void FUN_10a395710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  ppuStack_58 = &PTR_FUN_110c6a8d8;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_40 = &PTR_FUN_110c6a940;
  uStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  func_0x00010a393cf8(param_5,&ppuStack_58);
  return;
}



/* Entry: 10a39577c; end: 10a3957ff;  */

/* WARNING: Possible PIC construction at 0x00010a3957c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a3957cc) */

void FUN_10a39577c(float param_1,float param_2,long param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  puVar1 = &stack0xfffffffffffffff0;
  pppuVar3 = (undefined ***)*param_4;
  if (pppuVar3 == (undefined ***)0x0) {
    uStack_38 = 0;
    ppuStack_58 = &PTR_FUN_110c6a8d8;
    uStack_50 = 0;
    uStack_48 = 0;
    ppuStack_40 = &PTR_FUN_110c6a940;
    uStack_2c = 0;
    uStack_34 = 0;
    pppuVar3 = &ppuStack_58;
    unaff_x30 = 0x10a3957cc;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a394a64();
  if ((*(byte *)(param_3 + 0x219) & 1) == 0) {
    func_0x00010acae698(param_3 + 0x220);
    param_1 = param_1 * 0.5;
    param_2 = param_2 * 0.5;
    bVar2 = ABS(SQRT(param_1 * param_1 + param_2 * param_2)) <= 1e-06;
    uVar6 = NEON_fmov(0x3f800000,4);
    uVar6 = CONCAT44(param_2,param_1) ^
            (CONCAT44(param_2,param_1) ^ uVar6) &
            CONCAT44(-(uint)((int)((uint)bVar2 << 0x1f) < 0),-(uint)((int)((uint)bVar2 << 0x1f) < 0)
                    );
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x24);
    fVar4 = (float)uVar6;
    fVar5 = (float)(uVar6 >> 0x20);
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24);
    *(ulong *)(*(long *)(param_3 + 0x1f0) + 0x24) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) -
                  ((float)((ulong)*(undefined8 *)((long)pppuVar3 + 0x24) >> 0x20) -
                  (float)((ulong)uVar7 >> 0x20)) * fVar5,
                  (float)uVar8 -
                  ((float)*(undefined8 *)((long)pppuVar3 + 0x24) - (float)uVar7) * fVar4);
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x2c);
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c);
    *(ulong *)(*(long *)(param_3 + 0x1f0) + 0x2c) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) -
                  fVar5 * ((float)((ulong)*(undefined8 *)((long)pppuVar3 + 0x2c) >> 0x20) -
                          (float)((ulong)uVar8 >> 0x20)),
                  (float)uVar7 -
                  fVar4 * ((float)*(undefined8 *)((long)pppuVar3 + 0x2c) - (float)uVar8));
  }
  *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x24) = *(undefined8 *)((long)pppuVar3 + 0x24);
  *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x2c) = *(undefined8 *)((long)pppuVar3 + 0x2c);
  return;
}



/* Entry: 10a395800; end: 10a39586b;  */

void FUN_10a395800(undefined8 param_1,undefined8 *param_2)

{
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_38 = 0;
  ppuStack_58 = &PTR_FUN_110c6a8d8;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_40 = &PTR_FUN_110c6a940;
  uStack_2c = param_2[1];
  uStack_34 = *param_2;
  FUN_10a393c18(param_1,&ppuStack_58);
  return;
}



/* Entry: 10a39586c; end: 10a3958ef;  */

void FUN_10a39586c(float param_1,float param_2,long param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  lVar2 = *param_4;
  if (lVar2 != 0) {
    FUN_10a394a64();
    if ((*(byte *)(param_3 + 0x219) & 1) == 0) {
      func_0x00010acae698(param_3 + 0x220);
      param_1 = param_1 * 0.5;
      param_2 = param_2 * 0.5;
      bVar1 = ABS(SQRT(param_1 * param_1 + param_2 * param_2)) <= 1e-06;
      uVar7 = NEON_fmov(0x3f800000,4);
      uVar7 = CONCAT44(param_2,param_1) ^
              (CONCAT44(param_2,param_1) ^ uVar7) &
              CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),
                       -(uint)((int)((uint)bVar1 << 0x1f) < 0));
      uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24);
      fVar3 = (float)uVar7;
      fVar4 = (float)(uVar7 >> 0x20);
      fVar5 = (float)*(undefined8 *)(param_3 + 0x260);
      fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0x260) >> 0x20);
      uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x24);
      *(ulong *)(*(long *)(param_3 + 0x200) + 0x24) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) -
                    (((float)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20) -
                     (float)((ulong)uVar8 >> 0x20)) * fVar4) / fVar6,
                    (float)uVar9 -
                    (((float)*(undefined8 *)(lVar2 + 0x24) - (float)uVar8) * fVar3) / fVar5);
      uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c);
      uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x2c);
      *(ulong *)(*(long *)(param_3 + 0x200) + 0x2c) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) -
                    (fVar4 * ((float)((ulong)*(undefined8 *)(lVar2 + 0x2c) >> 0x20) -
                             (float)((ulong)uVar9 >> 0x20))) / fVar6,
                    (float)uVar8 -
                    (fVar3 * ((float)*(undefined8 *)(lVar2 + 0x2c) - (float)uVar9)) / fVar5);
    }
    *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24) = *(undefined8 *)(lVar2 + 0x24);
    *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c) = *(undefined8 *)(lVar2 + 0x2c);
    return;
  }
  uStack_38 = 0;
  ppuStack_58 = &PTR_FUN_110c6a8d8;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_40 = &PTR_FUN_110c6a940;
  uStack_2c = 0;
  uStack_34 = 0;
  FUN_10a393c18(param_3,&ppuStack_58);
  return;
}



/* Entry: 10a3958f0; end: 10a39598f;  */

void FUN_10a3958f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_10a3c7c48();
  lVar2 = *(long *)(*(long *)(param_1 + 0x168) + 0x188);
  if (lVar2 != 0) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
        if (plVar1 != (long *)0x0) {
          if ((char)plVar1[0x51] == '\x01') {
            return;
          }
          break;
        }
      }
    }
    if (*(long *)(lVar2 + 0x248) != 0) {
      FUN_10a3958f0();
    }
  }
  return;
}



/* Entry: 10a395990; end: 10a395b37;  */

float FUN_10a395990(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_10a394a64();
  lVar1 = *(long *)(param_4 + 0x178);
  if ((*(byte *)(lVar1 + 0x2a) >> 6 & 1) != 0) {
    func_0x00010a3e933c(lVar1);
  }
  fVar2 = param_1 * *(float *)(lVar1 + 0x100) + param_2 * *(float *)(lVar1 + 0x110) +
          param_3 * *(float *)(lVar1 + 0x120) + *(float *)(lVar1 + 0x130);
  fVar3 = fVar2 + fVar2;
  func_0x00010acae698(fVar2,param_1 * *(float *)(lVar1 + 0x104) +
                            param_2 * *(float *)(lVar1 + 0x114) +
                            param_3 * *(float *)(lVar1 + 0x124) + *(float *)(lVar1 + 0x134),
                      param_4 + 0x268);
  return *(float *)(param_4 + 0x2a0) + fVar3 / fVar2;
}



/* Entry: 10a395b38; end: 10a395c2b;  */

undefined1  [16] FUN_10a395b38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if ((*(ushort *)(param_3 + 0x180) >> 4 & 1) == 0) {
    FUN_10a3c7c48();
    uVar1 = *(ulong *)(param_3 + 0x168);
    func_0x00010a42b410();
    uVar3 = param_3;
    FUN_10a395c2c(param_1,param_2);
    if ((uVar1 >> 0x20 & 1) == 0) {
      uVar3 = 0;
      uVar2 = 0;
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar7 = uVar3 >> 0x20;
      fVar6 = (float)uVar3;
      FUN_10a395990(uVar3 & 0xffffffff,uVar7,(int)uVar1,param_3);
      uVar4 = 0;
      uVar3 = 0;
      if (1e+07 < ABS((float)uVar7)) {
        uVar2 = 0;
        uVar5 = 0;
      }
      else {
        uVar2 = 0;
        uVar5 = 0;
        if (ABS(fVar6) <= 1e+07) {
          uVar5 = (uint)fVar6 & 0xffffff00;
          uVar4 = (uint)fVar6 & 0xff;
          uVar3 = uVar7 << 0x20;
          uVar2 = 1;
        }
      }
    }
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  auVar8._0_8_ = uVar3 | (uVar5 | uVar4);
  auVar8._8_8_ = uVar2;
  return auVar8;
}



/* Entry: 10a395c2c; end: 10a395d8b;  */

undefined8
FUN_10a395c2c(float param_1,float param_2,float param_3,float param_4,long param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = param_1;
  fVar8 = param_2;
  func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x178));
  fVar9 = param_3 * fVar7 + fVar8 * param_4;
  fVar6 = -(param_4 * fVar7) + fVar8 * param_3;
  fVar4 = 0.5;
  fVar2 = 0.5 - (fVar7 * fVar7 + fVar8 * fVar8);
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar6 + fVar6;
  fVar11 = fVar2 + fVar2;
  func_0x00010a2cd058(*(undefined8 *)(param_5 + 0x178));
  fVar7 = fVar6;
  fVar3 = param_1;
  fVar5 = param_2;
  FUN_10a42d21c(param_6);
  fVar8 = fVar7;
  FUN_10a42d16c(param_6);
  fVar8 = fVar11 * fVar8 + fVar9 * param_1 + fVar10 * param_2;
  if ((ABS(fVar8) <= 1.1920929e-07) ||
     (fVar8 = (fVar11 * (fVar6 - fVar7) + fVar9 * (fVar2 - fVar3) + fVar10 * (fVar4 - fVar5)) /
              fVar8, fVar8 <= -1e-05)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT44(fVar5 + param_2 * fVar8,fVar3 + param_1 * fVar8);
  }
  return uVar1;
}



/* Entry: 10a395d8c; end: 10a395e43;  */

undefined1  [16] FUN_10a395d8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if ((*(ushort *)(param_3 + 0x180) >> 4 & 1) == 0) {
    FUN_10a3c7c48();
    uVar2 = *(ulong *)(param_3 + 0x168);
    func_0x00010a42b410();
    uVar3 = param_3;
    FUN_10a395c2c(param_1,param_2,param_3);
    bVar1 = (uVar2 >> 0x20 & 1) != 0;
    if (bVar1) {
      uVar4 = uVar3 >> 0x20;
      uVar5 = (uint)uVar3;
      func_0x00010a395a58(uVar3 & 0xffffffff,uVar4,(int)uVar2,param_3);
      uVar6 = uVar5 & 0xffffff00;
      uVar5 = uVar5 & 0xff;
      uVar4 = uVar4 << 0x20;
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    uVar3 = (ulong)bVar1;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar7._0_8_ = uVar4 | (uVar6 | uVar5);
  auVar7._8_8_ = uVar3;
  return auVar7;
}



/* Entry: 10a395e44; end: 10a395f2f;  */

float FUN_10a395e44(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1;
  fVar3 = param_2;
  FUN_10a394a64();
  fVar4 = *(float *)(param_3 + 0x2a0);
  fVar5 = *(float *)(param_3 + 0x2a4);
  func_0x00010acae698(param_3 + 0x268);
  lVar1 = *(long *)(param_3 + 0x178);
  if ((*(byte *)(lVar1 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar1);
  }
  return (param_1 - fVar4) * fVar2 * 0.5 * *(float *)(lVar1 + 0xc0) +
         (param_2 - fVar5) * fVar3 * 0.5 * *(float *)(lVar1 + 0xd0) +
         *(float *)(lVar1 + 0xe0) + *(float *)(lVar1 + 0xf0);
}



/* Entry: 10a395f30; end: 10a39607f;  */

float FUN_10a395f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_10a3c7c48();
  uVar1 = *(undefined8 *)(param_3 + 0x168);
  func_0x00010a42b410(uVar1);
  FUN_10a395e44(param_1,param_2,param_3);
  fVar2 = (float)param_1;
  func_0x00010a42ce48(uVar1);
  return (fVar2 + 1.0) * 0.5;
}



/* Entry: 10a396080; end: 10a3960bf;  */

ulong FUN_10a396080(ulong param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x288) == '\x01') {
    FUN_10a42bae4();
    return param_1;
  }
  pfVar1 = (float *)&UNK_10f652d73;
  FUN_10a00946c();
  uVar2 = 0x10000;
  if (1e-06 <= ABS(pfVar1[2] - param_2[2])) {
    uVar2 = 0;
  }
  uVar3 = 0x100;
  if (1e-06 <= ABS(pfVar1[1] - param_2[1])) {
    uVar3 = 0;
  }
  if (ABS(*pfVar1 - *param_2) < 1e-06) {
    uVar3 = uVar3 + 1;
  }
  return (ulong)(uVar3 | uVar2);
}



/* Entry: 10a3960c0; end: 10a39610b;  */

uint FUN_10a3960c0(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x10000;
  if (1e-06 <= ABS(param_1[2] - param_2[2])) {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if (1e-06 <= ABS(param_1[1] - param_2[1])) {
    uVar2 = 0;
  }
  if (ABS(*param_1 - *param_2) < 1e-06) {
    uVar2 = uVar2 + 1;
  }
  return uVar2 | uVar1;
}



/* Entry: 10a39610c; end: 10a3961f7;  */

void FUN_10a39610c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  
  bVar3 = *(byte *)(param_5 + 0x219);
  fVar5 = param_1;
  fVar7 = param_2;
  func_0x00010acae698(param_5 + 0x220);
  *(float *)(param_5 + 0x28c) = param_1;
  *(float *)(param_5 + 0x290) = param_2;
  *(ulong *)(param_5 + 0x294) = CONCAT44(param_4,param_3);
  uVar4 = (uint)bVar3;
  lVar1 = 0x200;
  if (uVar4 == 0) {
    lVar1 = 0x1f0;
  }
  lVar2 = 0x1f0;
  if (uVar4 == 0) {
    lVar2 = 0x200;
  }
  uVar6 = CONCAT44(fVar7 * 0.5,fVar5 * 0.5);
  uVar8 = CONCAT44(-(uint)((int)((uint)bVar3 << 0x1f) < 0),-(uint)((int)(uVar4 << 0x1f) < 0));
  uVar11 = uVar6 ^ (uVar6 ^ *(ulong *)(param_5 + 0x260)) & uVar8;
  uVar6 = uVar6 ^ (uVar6 ^ *(ulong *)(param_5 + 0x260)) & ~uVar8;
  uVar9 = *(undefined8 *)(*(long *)(param_5 + lVar1) + 0x2c);
  fVar10 = (float)uVar11;
  fVar12 = (float)(uVar11 >> 0x20);
  fVar5 = (float)uVar6;
  fVar7 = (float)(uVar6 >> 0x20);
  *(ulong *)(*(long *)(param_5 + lVar2) + 0x2c) =
       CONCAT44((param_4 - fVar12 * (float)((ulong)uVar9 >> 0x20)) / fVar7,
                (param_3 - fVar10 * (float)uVar9) / fVar5);
  uVar9 = *(undefined8 *)(*(long *)(param_5 + lVar1) + 0x24);
  *(ulong *)(*(long *)(param_5 + lVar2) + 0x24) =
       CONCAT44(((float)((ulong)*(undefined8 *)(param_5 + 0x28c) >> 0x20) -
                fVar12 * (float)((ulong)uVar9 >> 0x20)) / fVar7,
                ((float)*(undefined8 *)(param_5 + 0x28c) - fVar10 * (float)uVar9) / fVar5);
  return;
}



/* Entry: 10a3961f8; end: 10a3962db;  */

void FUN_10a3961f8(float param_1,float param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar9 = param_3;
  fVar2 = param_1;
  fVar4 = param_2;
  FUN_10a3c7c48();
  if (*(int *)(*(long *)(*(long *)(param_4 + 0x170) + 0xa20) + 0x18) < 0x5a) {
    func_0x00010acae6ac(param_4 + 0x268);
    lVar1 = *(long *)(param_4 + 0x178);
    uVar6 = CONCAT44(fVar4,fVar2);
  }
  else {
    lVar1 = *(long *)(param_4 + 0x178);
    uVar6 = *(undefined8 *)(lVar1 + 0x94);
  }
  *(undefined4 *)(param_4 + 0x21c) = param_3;
  uVar3 = *(undefined8 *)(lVar1 + 0x94);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = uVar3;
  uStack_38 = param_3;
  FUN_10a3e8cf0(&uStack_40,*(undefined8 *)(param_4 + 0x168),&uStack_58);
  uStack_4c = (undefined4)uVar3;
  fStack_48 = fVar4;
  uStack_44 = uVar9;
  FUN_10a3e3894(lVar1,&uStack_4c);
  fVar2 = (param_1 - (float)uVar6) / (float)*(undefined8 *)(param_4 + 0x260);
  fVar4 = (param_2 - (float)((ulong)uVar6 >> 0x20)) /
          (float)((ulong)*(undefined8 *)(param_4 + 0x260) >> 0x20);
  uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x200) + 0x2c);
  *(ulong *)(*(long *)(param_4 + 0x200) + 0x2c) =
       CONCAT44(fVar4 + (float)((ulong)uVar6 >> 0x20),fVar2 + (float)uVar6);
  uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x200) + 0x24);
  uVar6 = CONCAT44(fVar4 + (float)((ulong)uVar3 >> 0x20),fVar2 + (float)uVar3);
  *(undefined8 *)(*(long *)(param_4 + 0x200) + 0x24) = uVar6;
  func_0x00010acae698(param_4 + 0x220);
  fVar5 = 0.5;
  fVar13 = (float)uVar6 * 0.5;
  fVar14 = (float)uVar3 * 0.5;
  uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x1f0) + 0x24);
  uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x200) + 0x24);
  fVar8 = (float)*(undefined8 *)(param_4 + 0x260);
  fVar10 = (float)((ulong)*(undefined8 *)(param_4 + 0x260) >> 0x20);
  fVar2 = fVar13 * (float)uVar6 + fVar8 * (float)uVar3;
  fVar4 = fVar14 * (float)((ulong)uVar6 >> 0x20) + fVar10 * (float)((ulong)uVar3 >> 0x20);
  uVar6 = CONCAT44(fVar4,fVar2);
  *(undefined8 *)(param_4 + 0x28c) = uVar6;
  uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x1f0) + 0x2c);
  uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x200) + 0x2c);
  fVar8 = fVar13 * (float)uVar3 + fVar8 * (float)uVar11;
  fVar10 = fVar14 * (float)((ulong)uVar3 >> 0x20) + fVar10 * (float)((ulong)uVar11 >> 0x20);
  *(ulong *)(param_4 + 0x294) = CONCAT44(fVar10,fVar8);
  if (*(int *)(*(long *)(*(long *)(param_4 + 0x170) + 0xa20) + 0x18) < 0x5a) {
    func_0x00010acae6ac(param_4 + 0x268);
    fVar2 = (float)uVar6;
  }
  else {
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar12 = (float)((ulong)uVar6 >> 0x20);
    fVar5 = ((float)*(undefined8 *)(param_4 + 0x210) + (float)uVar6) * 0.5;
    fVar7 = ((float)((ulong)*(undefined8 *)(param_4 + 0x210) >> 0x20) + fVar12) * 0.5;
    fVar2 = fVar8 * fVar5 + fVar2 * ((float)uVar6 - fVar5);
    fVar5 = fVar10 * fVar7 + fVar4 * (fVar12 - fVar7);
  }
  *(undefined8 *)(param_4 + 0x2a0) = *(undefined8 *)(param_4 + 0x210);
  *(undefined8 *)(param_4 + 0x2a8) = *(undefined8 *)(param_4 + 0x260);
  if ((*(byte *)(param_4 + 0x180) >> 3 & 1) == 0) {
    uStack_38 = *(undefined4 *)(param_4 + 0x21c);
    uStack_40 = CONCAT44(fVar5 - fVar14 * (float)((ulong)*(undefined8 *)(param_4 + 600) >> 0x20),
                         fVar2 - fVar13 * (float)*(undefined8 *)(param_4 + 600));
    FUN_10a3e3894(*(undefined8 *)(param_4 + 0x178),&uStack_40);
  }
  return;
}



/* Entry: 10a3962dc; end: 10a39644f;  */

void FUN_10a3962dc(ulong *param_1,float param_2,long param_3,undefined8 *param_4,undefined8 *param_5
                  ,undefined1 *param_6,undefined8 *param_7,undefined8 *param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  uStack_78 = 0x3f800000;
  uVar7 = *param_4;
  uVar8 = *param_5;
  fVar5 = (float)*param_8;
  fVar3 = (float)*param_7;
  fVar9 = fVar5 - fVar3;
  fVar4 = (float)((ulong)*param_8 >> 0x20);
  fVar1 = (float)((ulong)*param_7 >> 0x20);
  fVar10 = fVar4 - fVar1;
  uVar11 = NEON_fmov(0x3f800000,4);
  uVar6 = CONCAT44(fVar10,fVar9) ^
          (CONCAT44(fVar10,fVar9) ^ uVar11) &
          CONCAT44(-(uint)(ABS(fVar4 - fVar1) <= 1e-06),-(uint)(ABS(fVar5 - fVar3) <= 1e-06));
  fVar5 = 1.0;
  if (1e-06 < ABS(*(float *)(param_8 + 1) - *(float *)(param_7 + 1))) {
    fVar5 = *(float *)(param_8 + 1) - *(float *)(param_7 + 1);
  }
  fVar2 = (float)(uVar6 >> 0x20);
  fStack_88 = fVar5 / fVar2;
  fVar1 = (float)uVar6;
  fVar3 = fVar1 / fVar2;
  fVar4 = fVar3;
  if (param_9 != 0) {
    fVar4 = param_2;
  }
  _fStack_90 = CONCAT44(fVar2 / fVar2,fVar4);
  uStack_80 = uVar7;
  fStack_98 = fStack_88;
  FUN_10a425d3c(*param_6,&uStack_80,&fStack_90);
  uVar6 = CONCAT44(fStack_98 / fVar2,param_2 / fVar1);
  fVar1 = (float)-(uint)(ABS(param_2 - fVar9) < 1e-06);
  uVar11 = uVar6 ^ (uVar6 ^ uVar11) & CONCAT44(-(uint)(ABS(fStack_98 - fVar10) < 1e-06),fVar1);
  fVar4 = fVar3;
  fStack_9c = param_2;
  fStack_94 = fVar3;
  FUN_10a425e28(param_6[1],param_6[2],&uStack_80,&fStack_9c);
  fVar2 = (float)uVar6;
  if (0xda < *(int *)(param_3 + 0x18)) {
    fVar1 = fVar1 - (float)uVar11 * (fVar9 * 0.5 + (float)*param_7);
    fVar2 = fVar2 - (float)(uVar11 >> 0x20) * (fVar10 * 0.5 + (float)((ulong)*param_7 >> 0x20));
  }
  *param_1 = uVar11;
  *(float *)(param_1 + 1) = fVar3 / fVar5;
  *(ulong *)((long)param_1 + 0xc) =
       CONCAT44(fVar2 + (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar8 >> 0x20) * -0.5,
                fVar1 + (float)uVar7 * (float)uVar8 * -0.5);
  *(float *)((long)param_1 + 0x14) = fVar4;
  return;
}



/* Entry: 10a396450; end: 10a39650b;  */

void FUN_10a396450(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  
  uVar1 = param_1;
  func_0x00010acae698(param_4);
  uStack_80 = (undefined4)uVar1;
  uStack_7c = param_2;
  FUN_10a3962dc(auStack_78,param_1,param_3,&uStack_80,param_4 + 0x38,param_5 + 0x308,param_6,param_7
                ,param_8);
  FUN_10a425f00(param_5,1);
  uVar1 = *(undefined8 *)(param_5 + 0x300);
  FUN_10a3e814c(uVar1,auStack_78);
  FUN_10a3e3894(uVar1,auStack_6c);
  return;
}



/* Entry: 10a39650c; end: 10a3968e7;  */

void FUN_10a39650c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = (long *)param_2[9];
    plStack_50 = (long *)param_2[8];
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&plStack_50);
    puVar4 = (undefined8 *)((ulong)&plStack_50 | 8);
    pplVar7 = &plStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      pplVar7 = (long **)(param_4 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = *pplVar7;
  }
  plVar12 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar12);
  FUN_10a3b6958(plVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_FUN_110bcf0f8;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (plVar12 != (long *)0x0) {
    if (plVar12[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
    }
    else {
      if (*(long *)(plVar12[6] + 8) != -1) goto LAB_10a396670;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a396670:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar12 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar12 + 0x30) & 0xfffc;
  *(ushort *)(plVar12 + 0x30) = uVar3 | *(ushort *)(plVar12 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar12 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_50 = plVar12;
  plStack_48 = plVar11;
  FUN_10a3c7ce8(param_3,&plStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar9 = param_2[0x3e];
  plVar8 = (long *)0x50;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bcfba8;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 7) = 0;
  plStack_50 = plVar8 + 3;
  *plStack_50 = (long)&PTR_FUN_110c6a8d8;
  plVar8[6] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar8 + 0x3c) = *(undefined8 *)(lVar9 + 0x24);
  *(undefined8 *)((long)plVar8 + 0x44) = *(undefined8 *)(lVar9 + 0x2c);
  plStack_48 = plVar8;
  FUN_10a1ede50(plVar12 + 0x3e,&plStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar9 = param_2[0x40];
  plVar8 = (long *)0x50;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110bcfba8;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 7) = 0;
  plStack_50 = plVar8 + 3;
  *plStack_50 = (long)&PTR_FUN_110c6a8d8;
  plVar8[6] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar8 + 0x3c) = *(undefined8 *)(lVar9 + 0x24);
  *(undefined8 *)((long)plVar8 + 0x44) = *(undefined8 *)(lVar9 + 0x2c);
  plStack_48 = plVar8;
  FUN_10a1ede50(plVar12 + 0x40,&plStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar12[0x42] = param_2[0x42];
  *(undefined1 *)((long)plVar12 + 0x219) = *(undefined1 *)((long)param_2 + 0x219);
  lVar9 = param_2[0x2f];
  func_0x00010a0d8ae0(lVar9);
  FUN_10a395654(*(undefined4 *)(lVar9 + 0x54),*(undefined4 *)(lVar9 + 0x58),
                *(undefined4 *)(lVar9 + 0x5c),*(undefined4 *)(lVar9 + 0x60),plVar12);
  lVar9 = param_2[0x2f];
  func_0x00010a0d8ae0(lVar9);
  func_0x00010a3956a8(*(undefined4 *)(lVar9 + 0x48),*(undefined4 *)(lVar9 + 0x4c),
                      *(undefined4 *)(lVar9 + 0x50),plVar12);
  param_1[1] = (long)plVar11;
  *param_1 = (long)plVar12;
  return;
}



/* Entry: 10a3968e8; end: 10a396937;  */

undefined1  [16] FUN_10a3968e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f652d97;
  return auVar1;
}



/* Entry: 10a396938; end: 10a396c97;  */

void FUN_10a396938(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652d97,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcdb88;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcdb88;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a396c78;
    FUN_10a054dac(param_1,&UNK_10f6523da,FUN_10a3b6cd8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a396c78;
    FUN_10a054dac(param_1,&UNK_10f6523e6,FUN_10a3b6eec,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a396c78;
    FUN_10a054dac(param_1,&UNK_10f6523f2,FUN_10a3b71d4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,8);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a396c78;
    FUN_10a054dac(param_1,&UNK_10f652406,FUN_10a3b741c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"api",FUN_10a3b74f0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f65241a,FUN_10a3b7670,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652d97,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a396c78:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a396c7c);
  (*pcVar6)();
}



/* Entry: 10a396c98; end: 10a396cf3;  */

void FUN_10a396c98(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x28;
  func_0x00010a3a7958(&lStack_28);
  lStack_28 = param_1 + 0x10;
  FUN_10a3a7998(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a396cf4; end: 10a396eeb;  */

undefined8 * FUN_10a396cf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  param_1[0x62] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x65) = 0x100;
  param_1[100] = 0;
  param_1[99] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bca9c0,param_2,param_3);
  *puVar1 = &PTR_FUN_110bca6a8;
  puVar1[2] = &PTR_DAT_110bca808;
  puVar1[7] = &PTR_DAT_110bca860;
  puVar1[0xd] = &PTR_DAT_110bca880;
  puVar1[0x62] = &PTR_DAT_110bca980;
  puVar1[0x16] = &PTR_DAT_110bca8f0;
  puVar1[0x17] = &PTR_DAT_110bca920;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  puVar1[0x47] = 0;
  puVar1[0x46] = 0;
  puVar1[0x49] = 0;
  puVar1[0x48] = 0;
  *(undefined4 *)(puVar1 + 0x4a) = 0x3f800000;
  puVar1[0x4c] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4d] = 0;
  *(undefined4 *)(puVar1 + 0x4f) = 0x3f800000;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x50] = puVar1 + 3;
  param_1[0x51] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x50);
  *(undefined8 *)((long)param_1 + 0x301) = 0;
  *(undefined8 *)((long)param_1 + 0x2f9) = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110bdbc08;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  plVar2 = (long *)param_1[0x3e];
  param_1[0x3e] = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return param_1;
}



/* Entry: 10a396eec; end: 10a396fef;  */

void FUN_10a396eec(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bca6a8;
  param_1[2] = &PTR_DAT_110bca808;
  param_1[7] = &PTR_DAT_110bca860;
  param_1[0xd] = &PTR_DAT_110bca880;
  param_1[0x62] = &PTR_DAT_110bca980;
  param_1[0x16] = &PTR_DAT_110bca8f0;
  param_1[0x17] = &PTR_DAT_110bca920;
  if (param_1[0x5e] != 0) {
    param_1[0x5f] = param_1[0x5e];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x5b;
  func_0x00010a3a7958(&puStack_28);
  puStack_28 = param_1 + 0x58;
  FUN_10a3a7998(&puStack_28);
  func_0x00010a004dac(param_1 + 0x56);
  puStack_28 = param_1 + 0x52;
  FUN_10a3a7a08(&puStack_28);
  func_0x00010a004e5c(param_1 + 0x50);
  func_0x00010a3b7814(param_1 + 0x4b);
  func_0x00010a3b77dc(param_1 + 0x46);
  puStack_28 = param_1 + 0x43;
  FUN_10a3a7a48(&puStack_28);
  func_0x00010a3b772c(param_1 + 0x41);
  func_0x00010a004dac(param_1 + 0x3f);
  plVar1 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a3c59d8(param_1,&PTR_PTR_110bca9c0);
  return;
}



/* Entry: 10a396ff0; end: 10a39702b;  */

void FUN_10a396ff0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bca6a8;
  param_1[2] = &PTR_DAT_110bca808;
  param_1[7] = &PTR_DAT_110bca860;
  param_1[0xd] = &PTR_DAT_110bca880;
  param_1[0x62] = &PTR_DAT_110bca980;
  param_1[0x16] = &PTR_DAT_110bca8f0;
  param_1[0x17] = &PTR_DAT_110bca920;
  if (param_1[0x5e] != 0) {
    param_1[0x5f] = param_1[0x5e];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x5b;
  func_0x00010a3a7958(&puStack_28);
  puStack_28 = param_1 + 0x58;
  FUN_10a3a7998(&puStack_28);
  func_0x00010a004dac(param_1 + 0x56);
  puStack_28 = param_1 + 0x52;
  FUN_10a3a7a08(&puStack_28);
  func_0x00010a004e5c(param_1 + 0x50);
  func_0x00010a3b7814(param_1 + 0x4b);
  func_0x00010a3b77dc(param_1 + 0x46);
  puStack_28 = param_1 + 0x43;
  FUN_10a3a7a48(&puStack_28);
  func_0x00010a3b772c(param_1 + 0x41);
  func_0x00010a004dac(param_1 + 0x3f);
  plVar1 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a3c59d8(param_1,&PTR_PTR_110bca9c0);
  return;
}



/* Entry: 10a39702c; end: 10a3970b7;  */

void FUN_10a39702c(void)

{
  FUN_10a396eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3970b8; end: 10a397167;  */

void FUN_10a3970b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a396eec((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a397168; end: 10a3972db;  */

/* WARNING: Removing unreachable block (ram,0x00010a397258) */
/* WARNING: Removing unreachable block (ram,0x00010a397260) */

void FUN_10a397168(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + 0x2b0);
  if (lVar6 == 0) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x170) + 0x870);
    lVar6 = *(long *)(lVar8 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar8 + 0x70);
    lVar6 = *(long *)(lVar6 + 0xb8);
    if ((*(byte *)(lVar6 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3972b4);
      (*pcVar4)();
    }
    plVar7 = *(long **)(lVar6 + 0x50);
    (**(code **)(*plVar7 + 0x148))(&uStack_48,plVar7);
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110b174d8;
    puVar5[3] = plVar7;
    *(undefined4 *)(puVar5 + 4) = 7;
    puVar5[5] = uStack_48;
    uStack_48 = 0;
    *(undefined8 **)(param_2 + 0x2b0) = puVar5 + 3;
    plVar7 = *(long **)(param_2 + 0x2b8);
    *(undefined8 **)(param_2 + 0x2b8) = puVar5;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar8 + 0x70);
    lVar6 = *(long *)(param_2 + 0x2b0);
  }
  lVar8 = *(long *)(param_2 + 0x2b8);
  *param_1 = lVar6;
  param_1[1] = lVar8;
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a3972dc; end: 10a3975ab;  */

bool FUN_10a3972dc(ulong param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (((param_3 == 0x19) &&
      (((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x7470697263532e74) &&
       param_2[2] == 0x6e656e6f706d6f43) && (char)param_2[3] == 't')) ||
     (uVar7 = param_1, func_0x00010a3c52dc(param_1,param_2,param_3), (uVar7 & 1) != 0)) {
    bVar6 = true;
  }
  else {
    lStack_40 = *(long *)(param_1 + 0x208);
    if ((lStack_40 == 0) || (*(long *)(lStack_40 + 0xf0) == 0)) {
      for (plVar10 = *(long **)(param_1 + 0x2d8); plVar10 != *(long **)(param_1 + 0x2e0);
          plVar10 = plVar10 + 4) {
        if ((*plVar10 != 0) && (*(long *)(*plVar10 + 0xf0) != 0)) goto LAB_10a397374;
      }
      bVar6 = false;
    }
    else {
LAB_10a397374:
      plStack_38 = *(long **)(param_1 + 0x210);
      if (plStack_38 != (long *)0x0) {
        plVar10 = plStack_38 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(long *)(param_1 + 0x2d8) != *(long *)(param_1 + 0x2e0)) {
        FUN_10a3975b4(&lStack_40);
      }
      lVar11 = *(long *)(lStack_40 + 0xf0);
      lVar9 = (long)*(char *)(lVar11 + 0xaf);
      if (lVar9 < 0) {
        lVar8 = *(long *)(lVar11 + 0x98);
        lVar9 = *(long *)(lVar11 + 0xa0);
      }
      else {
        lVar8 = lVar11 + 0x98;
      }
      if ((param_3 == lVar9) &&
         (plVar10 = param_2, _memcmp(param_2,lVar8,param_3), (int)plVar10 == 0)) {
        bVar6 = true;
      }
      else {
        FUN_10a464e5c(&lStack_50,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x870),param_2,param_3
                     );
        if ((lStack_50 == 0) || (lVar9 = *(long *)(lStack_50 + 0xf0), lVar9 == 0)) {
          bVar6 = false;
        }
        else {
          lVar11 = *(long *)(lStack_40 + 0xf0);
          if (((*(ulong *)(lVar11 + 0x68) & *(ulong *)(lVar11 + 0x70)) == 0xffffffffffffffff ||
              *(ulong *)(lVar11 + 0x68) != *(ulong *)(lVar9 + 0x68)) ||
              *(ulong *)(lVar11 + 0x70) != *(ulong *)(lVar9 + 0x70)) {
            puVar3 = *(ulong **)(lVar11 + 0x80);
            puVar2 = *(ulong **)(lVar11 + 0x78);
            puVar12 = puVar2;
            for (; (puVar2 != puVar3 &&
                   ((*puVar2 != *(ulong *)(lVar9 + 0x68) ||
                    (puVar12 = puVar2, puVar2[1] != *(ulong *)(lVar9 + 0x70)))));
                puVar2 = puVar2 + 2) {
              puVar12 = puVar3;
            }
            bVar6 = puVar12 != puVar3;
          }
          else if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
            bVar6 = true;
          }
          else {
            plVar10 = (long *)(lStack_40 + 0x128);
            if (*(char *)(lStack_40 + 0x13f) < '\0') {
              plVar10 = (long *)*plVar10;
            }
            bVar6 = true;
            func_0x00010ae06f08(1,2,&UNK_10f652426,&UNK_10f652461,0x73,&UNK_10f6524c0,in_x6,in_x7,
                                plVar10);
          }
        }
        if (plStack_48 != (long *)0x0) {
          plVar10 = plStack_48 + 1;
          do {
            lVar9 = *plVar10;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
      plVar10 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
  }
  return bVar6;
}



/* Entry: 10a3975ac; end: 10a3975b3;  */

bool FUN_10a3975ac(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar7 = param_1 - 0x10;
  if (((param_3 == 0x19) &&
      (((*param_2 == 0x6e656e6f706d6f43 && param_2[1] == 0x7470697263532e74) &&
       param_2[2] == 0x6e656e6f706d6f43) && (char)param_2[3] == 't')) ||
     (func_0x00010a3c52dc(uVar7,param_2,param_3), (uVar7 & 1) != 0)) {
    bVar6 = true;
  }
  else {
    lStack_40 = *(long *)(param_1 + 0x1f8);
    if ((lStack_40 == 0) || (*(long *)(lStack_40 + 0xf0) == 0)) {
      for (plVar10 = *(long **)(param_1 + 0x2c8); plVar10 != *(long **)(param_1 + 0x2d0);
          plVar10 = plVar10 + 4) {
        if ((*plVar10 != 0) && (*(long *)(*plVar10 + 0xf0) != 0)) goto LAB_10a397374;
      }
      bVar6 = false;
    }
    else {
LAB_10a397374:
      plStack_38 = *(long **)(param_1 + 0x200);
      if (plStack_38 != (long *)0x0) {
        plVar10 = plStack_38 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (*(long *)(param_1 + 0x2c8) != *(long *)(param_1 + 0x2d0)) {
        FUN_10a3975b4(&lStack_40);
      }
      lVar11 = *(long *)(lStack_40 + 0xf0);
      lVar9 = (long)*(char *)(lVar11 + 0xaf);
      if (lVar9 < 0) {
        lVar8 = *(long *)(lVar11 + 0x98);
        lVar9 = *(long *)(lVar11 + 0xa0);
      }
      else {
        lVar8 = lVar11 + 0x98;
      }
      if ((param_3 == lVar9) &&
         (plVar10 = param_2, _memcmp(param_2,lVar8,param_3), (int)plVar10 == 0)) {
        bVar6 = true;
      }
      else {
        FUN_10a464e5c(&lStack_50,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x870),param_2,param_3
                     );
        if ((lStack_50 == 0) || (lVar9 = *(long *)(lStack_50 + 0xf0), lVar9 == 0)) {
          bVar6 = false;
        }
        else {
          lVar11 = *(long *)(lStack_40 + 0xf0);
          if (((*(ulong *)(lVar11 + 0x68) & *(ulong *)(lVar11 + 0x70)) == 0xffffffffffffffff ||
              *(ulong *)(lVar11 + 0x68) != *(ulong *)(lVar9 + 0x68)) ||
              *(ulong *)(lVar11 + 0x70) != *(ulong *)(lVar9 + 0x70)) {
            puVar3 = *(ulong **)(lVar11 + 0x80);
            puVar2 = *(ulong **)(lVar11 + 0x78);
            puVar12 = puVar2;
            for (; (puVar2 != puVar3 &&
                   ((*puVar2 != *(ulong *)(lVar9 + 0x68) ||
                    (puVar12 = puVar2, puVar2[1] != *(ulong *)(lVar9 + 0x70)))));
                puVar2 = puVar2 + 2) {
              puVar12 = puVar3;
            }
            bVar6 = puVar12 != puVar3;
          }
          else if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
            bVar6 = true;
          }
          else {
            plVar10 = (long *)(lStack_40 + 0x128);
            if (*(char *)(lStack_40 + 0x13f) < '\0') {
              plVar10 = (long *)*plVar10;
            }
            bVar6 = true;
            func_0x00010ae06f08(1,2,&UNK_10f652426,&UNK_10f652461,0x73,&UNK_10f6524c0,in_x6,in_x7,
                                plVar10);
          }
        }
        if (plStack_48 != (long *)0x0) {
          plVar10 = plStack_48 + 1;
          do {
            lVar9 = *plVar10;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
          }
        }
      }
      plVar10 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
  }
  return bVar6;
}



/* Entry: 10a3975b4; end: 10a39762f;  */

undefined8 * FUN_10a3975b4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a397630; end: 10a3978e7;  */

void FUN_10a397630(long param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_1;
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if ((((param_2 & 0x2b0) != 0) || (3 < *(int *)(param_1 + 0x2a8))) &&
     ((param_2 != 0x10 || ((*(ushort *)(param_1 + 0x180) >> 6 & 1) != 0)))) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x218);
    puVar11 = *(undefined8 **)(param_1 + 0x220);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x2f8);
    lVar6 = *(long *)(param_1 + 0x2f0);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & param_2) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x2f8);
          lVar6 = *(long *)(param_1 + 0x2f0);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & param_2) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a3978e8; end: 10a397993;  */

void FUN_10a3978e8(long *param_1)

{
  (**(code **)(*param_1 + 0x68))(param_1,0);
  return;
}



/* Entry: 10a397994; end: 10a3982fb;  */

code ** FUN_10a397994(code **param_1,code **param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  code **ppcVar10;
  undefined8 uVar11;
  long lVar12;
  code **ppcVar13;
  code **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  code *pcVar14;
  code *unaff_x27;
  long *plVar15;
  undefined **unaff_x28;
  undefined8 auStack_328 [2];
  char cStack_311;
  code *pcStack_310;
  code *apcStack_308 [7];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  code *pcStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 *puStack_2a8;
  long lStack_278;
  undefined **ppuStack_270;
  code **ppcStack_268;
  code **ppcStack_260;
  undefined **ppuStack_258;
  code **ppcStack_250;
  code **ppcStack_248;
  code **ppcStack_240;
  code **ppcStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  code **ppcStack_220;
  code **ppcStack_218;
  code **ppcStack_210;
  code *pcStack_208;
  code **ppcStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  code **ppcStack_1e8;
  undefined8 uStack_1e0;
  undefined7 uStack_1d8;
  char cStack_1d1;
  code **ppcStack_1d0;
  code **ppcStack_1c8;
  undefined7 uStack_1c0;
  char cStack_1b9;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  code **ppcStack_1a0;
  undefined4 uStack_198;
  code *pcStack_170;
  undefined **ppuStack_168;
  code **ppcStack_160;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  code **ppcStack_e0;
  code **ppcStack_d8;
  code **ppcStack_d0;
  code *pcStack_c8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code **ppcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(code **)(param_1[0x3e] + 0x28) = param_1[0x2e];
  func_0x00010a3c7a18();
  (**(code **)(*param_2 + 0x1f8))(param_2,&PTR_DAT_110bca9d8,param_1[0x3e]);
  ppcVar13 = &pcStack_b0;
  pcStack_b0 = FUN_10a3b7cc4;
  ppuStack_a8 = &PTR_FUN_110bcf138;
  uVar11 = 0;
  ppcStack_a0 = param_1;
  FUN_10a3982fc(param_2,&PTR_DAT_110bca9f8,&pcStack_b0,0);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  ppcVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bcaa18);
  pcVar5 = (code *)unaff_x28;
  if ((int)ppcVar10 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bcaa18);
    ppcVar13 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((uint)ppcVar13 != 0) {
      unaff_x22 = (code **)0x0;
      unaff_x23 = &PTR_DAT_110bcec08;
      unaff_x27 = FUN_10a3b820c;
      unaff_x28 = &PTR_FUN_110bcf150;
      unaff_x24 = &PTR_DAT_110bcaa38;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
        (**(code **)(*param_2 + 0xa0))(&ppcStack_1d0,param_2,&PTR_DAT_110bcec08);
        if (cStack_1b9 < '\0') {
          ppcStack_220 = param_1;
          func_0x000107c3192c(&ppcStack_218,ppcStack_1d0,ppcStack_1c8);
        }
        else {
          ppcStack_210 = ppcStack_1c8;
          ppcStack_218 = ppcStack_1d0;
          pcStack_208 = (code *)CONCAT17(cStack_1b9,uStack_1c0);
          ppcStack_220 = param_1;
        }
        pcStack_f0 = FUN_10a3b820c;
        ppuStack_e8 = &PTR_FUN_110bcf150;
        ppcStack_d0 = ppcStack_210;
        ppcStack_d8 = ppcStack_218;
        pcStack_c8 = pcStack_208;
        ppcStack_218 = (code **)0x0;
        ppcStack_210 = (code **)0x0;
        pcStack_208 = (code *)0x0;
        uVar11 = 0;
        ppcStack_e0 = ppcStack_220;
        FUN_10a1f46a0(param_2,&PTR_DAT_110bcaa38,&pcStack_f0,0);
        (*(code *)*ppuStack_e8)(&ppuStack_e8);
        if ((long)pcStack_208 < 0) {
          __ZdlPv(ppcStack_218);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_1b9 < '\0') {
          __ZdlPv(ppcStack_1d0);
        }
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code **)(ulong)uVar1;
      } while ((uint)ppcVar13 != uVar1);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    pcVar5 = (code *)unaff_x28;
  }
  ppcVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bcaa58);
  if ((int)ppcVar10 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bcaa58);
    ppcVar13 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((uint)ppcVar13 != 0) {
      unaff_x22 = (code **)0x0;
      unaff_x24 = &PTR_DAT_110bcaa78;
      unaff_x27 = FUN_10a3b885c;
      unaff_x23 = &PTR_FUN_110bcf168;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
        (**(code **)(*param_2 + 0xa0))(&ppcStack_1d0,param_2,&PTR_DAT_110bcec08);
        (**(code **)(*param_2 + 0xa8))(&ppcStack_1e8,param_2,&PTR_DAT_110bcaa78,&UNK_10f651d0b,0);
        if (cStack_1b9 < '\0') {
          ppcStack_220 = param_1;
          func_0x000107c3192c(&ppcStack_218,ppcStack_1d0,ppcStack_1c8);
        }
        else {
          ppcStack_210 = ppcStack_1c8;
          ppcStack_218 = ppcStack_1d0;
          pcStack_208 = (code *)CONCAT17(cStack_1b9,uStack_1c0);
          ppcStack_220 = param_1;
        }
        if (cStack_1d1 < '\0') {
          func_0x000107c3192c(&ppcStack_200,ppcStack_1e8,uStack_1e0);
        }
        else {
          uStack_1f8 = uStack_1e0;
          ppcStack_200 = ppcStack_1e8;
          lStack_1f0 = CONCAT17(cStack_1d1,uStack_1d8);
        }
        pcStack_130 = FUN_10a3b885c;
        ppuStack_128 = &PTR_FUN_110bcf168;
        puVar6 = (undefined8 *)0x38;
        __Znwm();
        *puVar6 = ppcStack_220;
        puVar6[2] = ppcStack_210;
        puVar6[1] = ppcStack_218;
        puVar6[3] = pcStack_208;
        ppcStack_218 = (code **)0x0;
        ppcStack_210 = (code **)0x0;
        puVar6[5] = uStack_1f8;
        puVar6[4] = ppcStack_200;
        puVar6[6] = lStack_1f0;
        pcStack_208 = (code *)0x0;
        ppcStack_200 = (code **)0x0;
        uStack_1f8 = 0;
        lStack_1f0 = 0;
        uVar11 = 0;
        puStack_120 = puVar6;
        FUN_10a1f46a0(param_2,&PTR_DAT_110bcaa38,&pcStack_130,0);
        (*(code *)*ppuStack_128)(&ppuStack_128);
        if (lStack_1f0 < 0) {
          __ZdlPv(ppcStack_200);
        }
        if ((long)pcStack_208 < 0) {
          __ZdlPv(ppcStack_218);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_1d1 < '\0') {
          __ZdlPv(ppcStack_1e8);
        }
        if (cStack_1b9 < '\0') {
          __ZdlPv(ppcStack_1d0);
        }
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code **)(ulong)uVar1;
        pcVar5 = (code *)&ppcStack_220;
      } while ((uint)ppcVar13 != uVar1);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  ppcVar10 = (code **)0xffffffff;
  ppcVar7 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_s_priority_110bcaa98);
  if ((int)ppcVar7 != -1) {
    *(int *)(param_1 + 0x31) = (int)ppcVar7;
    *(ushort *)(param_1[0x2e] + 0xd1e) = *(ushort *)(param_1[0x2e] + 0xd1e) | 0x10;
  }
  ppcVar7 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bcaab8);
  if ((int)ppcVar7 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bcaab8);
    ppcVar7 = param_2;
    (**(code **)(*param_2 + 0x208))();
    ppcVar13 = (code **)((ulong)ppcVar7 & 0xffffffff);
    unaff_x23 = (undefined **)param_1[0x58];
    if ((code **)((long)param_1[0x5a] - (long)unaff_x23 >> 4) < ppcVar13) {
      unaff_x22 = param_1 + 0x58;
      pcVar14 = param_1[0x59];
      ppcVar10 = unaff_x22;
      ppcVar8 = ppcVar13;
      ppcStack_200 = unaff_x22;
      FUN_10a3a82c8();
      pcVar14 = (code *)((long)ppcVar10 + ((long)pcVar14 - (long)unaff_x23));
      unaff_x27 = (code *)(ppcVar10 + (long)ppcVar8 * 2);
      ppcVar10 = (code **)(param_1[0x59] + -(long)*unaff_x22);
      unaff_x23 = (undefined **)(pcVar14 + -(long)ppcVar10);
      _memcpy(unaff_x23);
      ppcStack_220 = (code **)*unaff_x22;
      *unaff_x22 = (code *)unaff_x23;
      param_1[0x59] = pcVar14;
      pcStack_208 = param_1[0x5a];
      param_1[0x5a] = unaff_x27;
      ppcStack_218 = ppcStack_220;
      ppcStack_210 = ppcStack_220;
      func_0x00010a3a82fc(&ppcStack_220);
      unaff_x24 = (undefined **)&ppcStack_220;
    }
    if ((uint)ppcVar7 != 0) {
      unaff_x22 = (code **)0x0;
      unaff_x24 = &pcStack_170;
      unaff_x23 = &PTR_DAT_110bca9f8;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
        pcStack_170 = FUN_10a3b8ca8;
        ppuStack_168 = &PTR_FUN_110bcf180;
        ppcVar10 = &pcStack_170;
        uVar11 = 0;
        ppcStack_160 = param_1;
        FUN_10a3982fc(param_2,&PTR_DAT_110bca9f8,ppcVar10,0);
        (*(code *)*ppuStack_168)(&ppuStack_168);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code **)(ulong)uVar1;
      } while ((uint)ppcVar7 != uVar1);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  ppuVar9 = &PTR_DAT_110bcaad8;
  ppcVar7 = param_2;
  (**(code **)(*param_2 + 0x200))();
  ppcStack_238 = ppcVar7;
  if ((int)ppcVar7 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bcaad8);
    unaff_x22 = param_2;
    (**(code **)(*param_2 + 0x208))();
    ppcVar13 = (code **)((ulong)unaff_x22 & 0xffffffff);
    ppuVar9 = ppcVar13;
    FUN_10a398508(param_1 + 0x5b);
    if ((int)unaff_x22 != 0) {
      unaff_x22 = (code **)0x0;
      unaff_x24 = &PTR_s_eventType_110bcaaf8;
      pcVar5 = FUN_10a3b8dc8;
      unaff_x23 = &PTR_FUN_110bcf198;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_event_110bcec28);
        (**(code **)(*param_2 + 0xa0))(&ppcStack_220,param_2,&PTR_s_eventType_110bcaaf8);
        ppcVar10 = param_2;
        ppuVar9 = &PTR_DAT_110bcec48;
        (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bcec48);
        if ((int)ppcVar10 == 0) {
          func_0x00010a0fda30();
        }
        else {
          ppcVar10 = param_2;
          ppuVar9 = &PTR_DAT_110bcec48;
          (**(code **)(*param_2 + 0x10))(param_2,&PTR_DAT_110bcec48);
        }
        FUN_10a4630fc(&ppcStack_1d0,*(undefined8 *)(param_1[0x2e] + 0x870),&ppcStack_220,ppcVar10,
                      ppuVar9);
        (**(code **)(*ppcStack_1d0 + 0x70))(ppcStack_1d0,param_1);
        (**(code **)(*param_2 + 0x1e0))(param_2,ppcStack_1d0);
        (**(code **)(*param_2 + 0x220))(param_2);
        pcVar14 = param_1[0x5b];
        if ((code **)((long)param_1[0x5c] - (long)pcVar14 >> 5) <= unaff_x22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3981d8);
          (*pcVar5)();
        }
        if (ppcStack_1c8 != (code **)0x0) {
          ppcVar10 = ppcStack_1c8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
            if (bVar4) {
              *ppcVar10 = *ppcVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar15 = *(long **)(pcVar14 + (long)unaff_x22 * 0x20 + 0x18);
        *(code ***)(pcVar14 + (long)unaff_x22 * 0x20 + 0x18) = ppcStack_1c8;
        *(code ***)(pcVar14 + (long)unaff_x22 * 0x20 + 0x10) = ppcStack_1d0;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
          do {
            lVar12 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
        pcStack_1b0 = FUN_10a3b8dc8;
        ppuStack_1a8 = &PTR_FUN_110bcf198;
        uStack_198 = SUB84(unaff_x22,0);
        ppcVar10 = &pcStack_1b0;
        uVar11 = 0;
        ppuVar9 = &PTR_DAT_110bca9f8;
        ppcStack_1a0 = param_1;
        FUN_10a3982fc(param_2,&PTR_DAT_110bca9f8,ppcVar10,0);
        (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
        (**(code **)(*param_2 + 0x220))(param_2);
        unaff_x27 = (code *)ppcStack_1c8;
        if (ppcStack_1c8 != (code **)0x0) {
          ppcVar7 = ppcStack_1c8 + 1;
          do {
            pcVar14 = *ppcVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppcVar7,0x10);
            if (bVar4) {
              *ppcVar7 = pcVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pcVar14 == (code *)0x0) {
            (**(code **)(*ppcStack_1c8 + 0x10))(ppcStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x27);
          }
        }
        if ((long)ppcStack_210 < 0) {
          __ZdlPv(ppcStack_220);
        }
        unaff_x22 = (code **)((long)unaff_x22 + 1);
      } while (unaff_x22 != ppcVar13);
    }
    (**(code **)(*param_2 + 0x220))();
    ppcStack_238 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppcStack_238;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a8)(ppcVar13 + 1);
  ppcVar7 = ppcStack_238;
  __Unwind_Resume();
  pcStack_228 = FUN_10a3982fc;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_310 = *ppcVar10;
  ppuStack_270 = (undefined **)pcVar5;
  ppcStack_268 = (code **)unaff_x27;
  ppcStack_260 = (code **)unaff_x24;
  ppuStack_258 = unaff_x23;
  ppcStack_250 = unaff_x22;
  ppcStack_248 = ppcVar13;
  ppcStack_240 = param_1;
  puStack_230 = &stack0xfffffffffffffff0;
  (**(code **)(ppcVar10[1] + 0x10))(apcStack_308,ppcVar10 + 1);
  FUN_109ffe064(&uStack_2d0,*ppuVar9,ppuVar9[1]);
  pcStack_2b8 = FUN_10a3b7a08;
  ppuStack_2b0 = &PTR_FUN_110bcfb28;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = pcStack_310;
  (**(code **)(apcStack_308[0] + 0x10))(puVar6 + 1,apcStack_308);
  puVar6[9] = uStack_2c8;
  puVar6[8] = uStack_2d0;
  puVar6[10] = lStack_2c0;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  uStack_2d0 = 0;
  puStack_2a8 = puVar6;
  func_0x000107c2b054(auStack_328,&UNK_10f651d0b);
  (**(code **)(*ppcVar7 + 0x250))(ppcVar7,ppuVar9,&pcStack_2b8,uVar11,auStack_328);
  if (cStack_311 < '\0') {
    __ZdlPv(auStack_328[0]);
  }
  (*(code *)*ppuStack_2b0)(&ppuStack_2b0);
  if (lStack_2c0 < 0) {
    __ZdlPv(uStack_2d0);
  }
  ppcVar10 = apcStack_308;
  (**(code **)apcStack_308[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return ppcVar7;
  }
  ___stack_chk_fail();
  if (cStack_311 < '\0') {
    __ZdlPv(auStack_328[0]);
  }
  (*(code *)*ppuStack_2b0)(&ppuStack_2b0);
  if (lStack_2c0 < 0) {
    __ZdlPv(uStack_2d0);
  }
  (**(code **)apcStack_308[0])(apcStack_308);
  __Unwind_Resume();
  if (*(char *)((long)ppcVar10 + 0x37) < '\0') {
    __ZdlPv(ppcVar10[4]);
  }
  if (*(char *)((long)ppcVar10 + 0x1f) < '\0') {
    __ZdlPv(ppcVar10[1]);
  }
  return ppcVar10;
}



/* Entry: 10a3982fc; end: 10a3984c7;  */

undefined8 **
FUN_10a3982fc(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a3b7a08;
  ppuStack_90 = &PTR_FUN_110bcfb28;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar1 + 1,apuStack_e8);
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(auStack_108,&UNK_10f651d0b);
  (*(code *)(*param_1)[0x4a])(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar2 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  if (*(char *)((long)ppuVar2 + 0x37) < '\0') {
    __ZdlPv(ppuVar2[4]);
  }
  if (*(char *)((long)ppuVar2 + 0x1f) < '\0') {
    __ZdlPv(ppuVar2[1]);
  }
  return ppuVar2;
}



/* Entry: 10a3984c8; end: 10a398507;  */

long FUN_10a3984c8(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a398508; end: 10a398907;  */

void FUN_10a398508(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  plVar13 = (long *)((long)puVar1 - (long)puVar9 >> 5);
  if (plVar13 < param_2) {
    uVar11 = (long)param_2 - (long)plVar13;
    if ((ulong)(param_1[2] - (long)puVar1 >> 5) < uVar11) {
      if ((ulong)param_2 >> 0x3b == 0) {
        uVar4 = param_1[2] - (long)puVar9;
        plVar7 = (long *)((long)uVar4 >> 4);
        if (plVar7 <= param_2) {
          plVar7 = param_2;
        }
        if (0x7fffffffffffffdf < uVar4) {
          plVar7 = (long *)0x7ffffffffffffff;
        }
        if ((ulong)plVar7 >> 0x3b == 0) {
          lVar3 = (long)plVar7 << 5;
          __Znwm();
          lVar6 = lVar3 + ((long)puVar1 - (long)puVar9);
          _bzero(lVar6,uVar11 * 0x20);
          puVar10 = (undefined8 *)(lVar6 + (long)plVar13 * -0x20);
          puVar5 = puVar10;
          puVar8 = puVar9;
          if (puVar9 != puVar1) {
            do {
              uVar14 = *puVar8;
              puVar5[1] = puVar8[1];
              *puVar5 = uVar14;
              *puVar8 = 0;
              puVar8[1] = 0;
              uVar14 = puVar8[2];
              puVar5[3] = puVar8[3];
              puVar5[2] = uVar14;
              puVar8[2] = 0;
              puVar8[3] = 0;
              puVar8 = puVar8 + 4;
              puVar5 = puVar5 + 4;
            } while (puVar8 != puVar1);
            do {
              func_0x00010a3b7784(puVar9 + 2);
              func_0x00010a3b772c(puVar9);
              puVar9 = puVar9 + 4;
            } while (puVar9 != puVar1);
            puVar9 = (undefined8 *)*param_1;
          }
          *param_1 = (long)puVar10;
          param_1[1] = lVar6 + uVar11 * 0x20;
          param_1[2] = lVar3 + (long)plVar7 * 0x20;
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar9);
          return;
        }
      }
      else {
        FUN_10a3a8348();
      }
      func_0x000109ffded8();
      FUN_10a3c7928();
      (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bca9d8,param_1[0x3e]);
      FUN_10a398908(param_2,&PTR_DAT_110bca9f8,param_1 + 0x41,&UNK_10f68f46c,0x11);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bcaa18);
      for (plVar13 = (long *)param_1[0x4d]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bcec08,plVar13 + 2);
        FUN_10a3989b0(param_2,&PTR_DAT_110bcaa38,plVar13 + 5,&UNK_10f651d0b,0);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bcaa58);
      for (plVar13 = (long *)param_1[0x48]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        (**(code **)(*param_2 + 0x10))(param_2);
        FUN_10a00d760(param_2,&PTR_DAT_110bcec08,plVar13 + 2);
        FUN_10a00d760(param_2,&PTR_DAT_110bcaa78,plVar13 + 5);
        FUN_10a398a58(param_2,&PTR_DAT_110bcaa38,plVar13 + 8,&UNK_10f651d0b,0);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      lVar6 = param_1[0x58];
      lVar3 = param_1[0x59];
      if (lVar6 != lVar3) {
        (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bcaab8);
        uVar11 = 1;
        uVar4 = 0;
        do {
          uVar12 = uVar11;
          (**(code **)(*param_2 + 0x10))(param_2);
          if ((ulong)(param_1[0x59] - param_1[0x58] >> 4) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a398908);
            (*pcVar2)();
          }
          FUN_10a398908(param_2,&PTR_DAT_110bca9f8,param_1[0x58] + uVar4 * 0x10,&UNK_10f68f46c,0x11)
          ;
          (**(code **)(*param_2 + 0x20))(param_2);
          uVar11 = (ulong)((int)uVar12 + 1);
          uVar4 = uVar12;
        } while (uVar12 < (ulong)(lVar3 - lVar6 >> 4));
                    /* WARNING: Could not recover jumptable at 0x00010a3988e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x20))(param_2);
        return;
      }
      return;
    }
    _bzero(puVar1,uVar11 * 0x20);
    param_1[1] = (long)(puVar1 + uVar11 * 4);
  }
  else if (param_2 < plVar13) {
    puVar1 = (undefined8 *)param_1[1];
    while (puVar1 != puVar9 + (long)param_2 * 4) {
      func_0x00010a3b7784(puVar1 + -2);
      func_0x00010a3b772c(puVar1 + -4);
      puVar1 = puVar1 + -4;
    }
    param_1[1] = (long)(puVar9 + (long)param_2 * 4);
    return;
  }
  return;
}



/* Entry: 10a398908; end: 10a3989af;  */

void FUN_10a398908(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a3989b0; end: 10a398a57;  */

void FUN_10a3989b0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a398a58; end: 10a398b77;  */

void FUN_10a398a58(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *param_3;
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
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,&uStack_40);
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



/* Entry: 10a398b78; end: 10a398caf;  */

/* WARNING: Possible PIC construction at 0x00010a3c78a4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a398b78(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *******pppppppuVar21;
  code *pcVar22;
  long *aplStack_a8 [3];
  undefined1 auStack_90 [16];
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  long lStack_50;
  long *plStack_48;
  undefined1 uStack_39;
  long *plStack_38;
  
  plVar16 = &lStack_50;
  if (*(int *)(param_1 + 0x2a8) < 2) {
    plStack_48 = (long *)param_2[1];
    lStack_50 = *param_2;
    if (param_2[1] != 0) {
      plVar16 = (long *)(param_2[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a398cb0(param_1,&lStack_50);
    plVar16 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar8 = plStack_48 + 1;
      do {
        lVar11 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    lVar11 = *(long *)(*param_2 + 0xf0);
    if (lVar11 != 0) {
      plVar16 = *(long **)(lVar11 + 0x20);
      if (plVar16 != (long *)0x0) {
        do {
          FUN_10a398d64(param_1,plVar16 + 2,plVar16 + 5);
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        lVar11 = *(long *)(*param_2 + 0xf0);
      }
      for (plVar16 = *(long **)(lVar11 + 0x48); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16)
      {
        plStack_38 = plVar16 + 2;
        lVar11 = param_1 + 600;
        FUN_10a3b7db0(lVar11,plStack_38,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
        func_0x00010a34d270(lVar11 + 0x28,plVar16 + 5);
      }
    }
    return;
  }
  plVar8 = (long *)&UNK_10f6525dd;
  FUN_10a00946c();
  FUN_10a3b772c(&lStack_50);
  __Unwind_Resume();
  pcStack_58 = FUN_10a398cb0;
  lVar11 = *param_2;
  if (lVar11 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar11 + 0x1bc);
  }
  iVar2 = *(int *)((long)plVar8 + 0x18c);
  if (iVar13 == iVar2 && plVar8[0x41] == lVar11) {
    return;
  }
  pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
  FUN_10a39c654(plVar8 + 0x41);
  plVar8[0x29] = 0;
  if (iVar13 == iVar2) {
    return;
  }
  plVar12 = (long *)plVar8[0xe];
  *(int *)((long)plVar8 + 0x18c) = iVar13;
  if ((plVar12 == (long *)0x0) || (plVar12 == plVar8 + 0xe)) {
    plVar12 = (long *)plVar8[0x10];
    if ((plVar12 == (long *)0x0) || (plVar12 == plVar8 + 0x10)) {
      plVar12 = (long *)plVar8[0x12];
      if (plVar12 == (long *)0x0) {
        return;
      }
      if (plVar12 == plVar8 + 0x12) {
        return;
      }
    }
  }
  do {
    plVar12 = plVar8 + 0xe;
    if ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12) {
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        FUN_10a3de8b4(lVar15 + 0x780,plVar8);
      }
    }
    plVar18 = plVar8 + 0x10;
    if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar18 != plVar18) {
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        func_0x00010a3de904(lVar15 + 0x7b8,plVar8);
      }
    }
    plVar20 = plVar8 + 0x12;
    if ((long *)*plVar20 != (long *)0x0 && (long *)*plVar20 != plVar20) {
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        plVar16 = (long *)auStack_90;
        pppppppuVar21 = &pppppppuStack_60;
        pcVar22 = (code *)0x10a3c78a8;
        goto SUB_10a3de954;
      }
    }
    if (((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12) ||
       (((long *)*plVar18 != (long *)0x0 && ((long *)*plVar18 != plVar18)))) {
      *(ushort *)(plVar8 + 0x30) = *(ushort *)(plVar8 + 0x30) | 0x400;
      return;
    }
    plVar12 = (long *)plVar8[0x12];
    uVar1 = 0;
    if (plVar12 != (long *)0x0 && plVar12 != plVar20) {
      uVar1 = 0x400;
    }
    *(ushort *)(plVar8 + 0x30) = uVar1 | *(ushort *)(plVar8 + 0x30) & 0xfbff;
    if (plVar12 != (long *)0x0 && plVar12 != plVar20) {
      return;
    }
  } while ((*(ushort *)(plVar8 + 0x30) >> 10 & 1) != 0);
  if ((*(ushort *)(plVar8 + 0x30) >> 5 & 1) == 0) {
    plVar12 = plVar8;
    (**(code **)(*plVar8 + 0xd8))();
    uVar6 = (uint)plVar12;
  }
  else {
    uVar6 = 0;
  }
  plVar12 = plVar8;
  (**(code **)(*plVar8 + 0xe0))();
  uVar7 = (uint)plVar12;
  plVar12 = plVar8;
  (**(code **)(*plVar8 + 0xe8))();
  uVar14 = (uint)plVar12;
  if (((*(ushort *)(plVar8 + 0x30) >> 4 & 1) == 0) &&
     (((plVar12 = plVar8, (**(code **)(*plVar8 + 0x60))(), (int)plVar12 != 0 &&
       ((*(ushort *)(plVar8[0x2d] + 0x118) & 0x12) == 0)) ||
      (*(int *)(*(long *)(plVar8[0x2e] + 0xa20) + 0x18) < 0x15f)))) {
    plVar12 = (long *)plVar8[0xe];
    if (uVar6 != (plVar12 != (long *)0x0 && plVar12 != plVar8 + 0xe)) {
      if (uVar6 == 0) goto LAB_10a3c6888;
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        FUN_10a3de76c(lVar15 + 0x780,plVar8);
      }
    }
LAB_10a3c6900:
    plVar12 = plVar8 + 0x10;
    if (uVar7 != ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12)) {
      if (uVar7 == 0) goto LAB_10a3c6950;
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        if (*(int *)(lVar15 + 0x7b8) < 1) {
          iVar13 = *(int *)((long)plVar8 + 0x184);
          iVar2 = *(int *)((long)plVar8 + 0x18c);
          puVar10 = *(undefined8 **)(lVar15 + 0x7e0);
          if (*(undefined8 **)(lVar15 + 0x7e0) == (undefined8 *)0x0) {
            puVar17 = (undefined8 *)(lVar15 + 0x7e0);
            puVar19 = (undefined8 *)(lVar15 + 0x7e0);
          }
          else {
            do {
              while( true ) {
                puVar9 = puVar10;
                iVar3 = *(int *)(puVar9 + 4);
                bVar5 = iVar2 < *(int *)((long)puVar9 + 0x24);
                if (iVar13 != iVar3) {
                  bVar5 = iVar3 < iVar13;
                }
                puVar17 = puVar9;
                if (!bVar5) break;
                puVar10 = (undefined8 *)*puVar9;
                puVar19 = puVar9;
                if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_10a3c6b88;
              }
              bVar5 = *(int *)((long)puVar9 + 0x24) < iVar2;
              if (iVar13 != iVar3) {
                bVar5 = iVar13 < iVar3;
              }
              if (!bVar5) goto LAB_10a3c6be0;
              puVar10 = (undefined8 *)puVar9[1];
            } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
            puVar19 = puVar9 + 1;
          }
LAB_10a3c6b88:
          puVar9 = (undefined8 *)0x38;
          __Znwm();
          puVar9[4] = CONCAT44(iVar2,iVar13);
          puVar9[5] = puVar9 + 5;
          puVar9[6] = puVar9 + 5;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = puVar17;
          *puVar19 = puVar9;
          puVar10 = puVar9;
          if (**(long **)(lVar15 + 0x7d8) != 0) {
            *(long *)(lVar15 + 0x7d8) = **(long **)(lVar15 + 0x7d8);
            puVar10 = (undefined8 *)*puVar19;
          }
          func_0x000107c2b058(*(undefined8 *)(lVar15 + 0x7e0),puVar10);
          *(long *)(lVar15 + 0x7e8) = *(long *)(lVar15 + 0x7e8) + 1;
LAB_10a3c6be0:
          puVar10 = (undefined8 *)puVar9[6];
          plVar8[0x10] = (long)(puVar9 + 5);
          plVar8[0x11] = (long)puVar10;
          puVar9[6] = plVar12;
          *puVar10 = plVar12;
        }
        else {
          aplStack_a8[0] = plVar8;
          FUN_10a3f9ca4(lVar15 + 0x7c0,aplStack_a8);
        }
      }
    }
  }
  else {
    plVar12 = (long *)plVar8[0xe];
    if ((plVar12 != (long *)0x0) && (plVar12 != plVar8 + 0xe)) {
      uVar7 = 0;
      uVar14 = 0;
LAB_10a3c6888:
      lVar15 = plVar8[0x2e];
      lVar11 = lVar15;
      FUN_10a3cfa0c();
      if (lVar11 == 0) {
        FUN_10a3de8b4(lVar15 + 0x780,plVar8);
      }
      goto LAB_10a3c6900;
    }
    plVar12 = (long *)plVar8[0x10];
    if ((plVar12 == (long *)0x0) || (plVar12 == plVar8 + 0x10)) {
      plVar12 = (long *)plVar8[0x12];
      if (plVar12 == (long *)0x0) {
        return;
      }
      if (plVar12 == plVar8 + 0x12) {
        return;
      }
      goto LAB_10a3c69d0;
    }
    uVar14 = 0;
LAB_10a3c6950:
    lVar15 = plVar8[0x2e];
    lVar11 = lVar15;
    FUN_10a3cfa0c();
    if (lVar11 == 0) {
      func_0x00010a3de904(lVar15 + 0x7b8,plVar8);
    }
  }
  plVar12 = plVar8 + 0x12;
  if (uVar14 == ((long *)*plVar12 != (long *)0x0 && (long *)*plVar12 != plVar12)) {
    return;
  }
  if (uVar14 != 0) {
    lVar15 = plVar8[0x2e];
    lVar11 = lVar15;
    FUN_10a3cfa0c();
    if (lVar11 != 0) {
      return;
    }
    if (0 < *(int *)(lVar15 + 0x7f0)) {
      aplStack_a8[0] = plVar8;
      FUN_10a3f9ca4(lVar15 + 0x7f8,aplStack_a8);
      return;
    }
    iVar13 = *(int *)((long)plVar8 + 0x184);
    iVar2 = *(int *)((long)plVar8 + 0x18c);
    puVar10 = *(undefined8 **)(lVar15 + 0x818);
    if (*(undefined8 **)(lVar15 + 0x818) == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)(lVar15 + 0x818);
      puVar19 = (undefined8 *)(lVar15 + 0x818);
    }
    else {
      do {
        while( true ) {
          puVar9 = puVar10;
          iVar3 = *(int *)(puVar9 + 4);
          bVar5 = iVar2 < *(int *)((long)puVar9 + 0x24);
          if (iVar13 != iVar3) {
            bVar5 = iVar3 < iVar13;
          }
          puVar17 = puVar9;
          if (!bVar5) break;
          puVar10 = (undefined8 *)*puVar9;
          puVar19 = puVar9;
          if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_10a3c6b10;
        }
        bVar5 = *(int *)((long)puVar9 + 0x24) < iVar2;
        if (iVar13 != iVar3) {
          bVar5 = iVar13 < iVar3;
        }
        if (!bVar5) goto LAB_10a3c6b68;
        puVar10 = (undefined8 *)puVar9[1];
      } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
      puVar19 = puVar9 + 1;
    }
LAB_10a3c6b10:
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    puVar9[4] = CONCAT44(iVar2,iVar13);
    puVar9[5] = puVar9 + 5;
    puVar9[6] = puVar9 + 5;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar17;
    *puVar19 = puVar9;
    puVar10 = puVar9;
    if (**(long **)(lVar15 + 0x810) != 0) {
      *(long *)(lVar15 + 0x810) = **(long **)(lVar15 + 0x810);
      puVar10 = (undefined8 *)*puVar19;
    }
    func_0x000107c2b058(*(undefined8 *)(lVar15 + 0x818),puVar10);
    *(long *)(lVar15 + 0x820) = *(long *)(lVar15 + 0x820) + 1;
LAB_10a3c6b68:
    puVar10 = (undefined8 *)puVar9[6];
    plVar8[0x12] = (long)(puVar9 + 5);
    plVar8[0x13] = (long)puVar10;
    puVar9[6] = plVar12;
    *puVar10 = plVar12;
    return;
  }
LAB_10a3c69d0:
  lVar15 = plVar8[0x2e];
  lVar11 = lVar15;
  FUN_10a3cfa0c();
  pppppppuVar21 = pppppppuStack_60;
  pcVar22 = pcStack_58;
  if (lVar11 != 0) {
    return;
  }
SUB_10a3de954:
  if (*(int *)(lVar15 + 0x7f0) < 1) {
    lVar11 = plVar8[0x12];
    if (lVar11 != 0) {
      plVar16 = (long *)plVar8[0x13];
      *plVar16 = lVar11;
      *(long **)(lVar11 + 8) = plVar16;
      plVar8[0x12] = 0;
      plVar8[0x13] = 0;
    }
    return;
  }
  *(undefined8 ********)((long)plVar16 + -0x10) = pppppppuVar21;
  *(code **)((long)plVar16 + -8) = pcVar22;
  *(long **)((long)plVar16 + -0x18) = plVar8;
  FUN_10a3f9ca4(lVar15 + 0x7f8,(undefined1 *)((long)plVar16 + -0x18));
  return;
}



/* Entry: 10a398cb0; end: 10a398d63;  */

/* WARNING: Possible PIC construction at 0x00010a3c78a4: Changing call to branch */

void FUN_10a398cb0(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *aplStack_58 [3];
  undefined1 auStack_40 [16];
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(lVar10 + 0x1bc);
  }
  iVar3 = *(int *)((long)param_1 + 0x18c);
  if (iVar12 == iVar3 && param_1[0x41] == lVar10) {
    return;
  }
  FUN_10a39c654(param_1 + 0x41);
  param_1[0x29] = 0;
  if (iVar12 == iVar3) {
    return;
  }
  plVar11 = (long *)param_1[0xe];
  *(int *)((long)param_1 + 0x18c) = iVar12;
  if ((plVar11 == (long *)0x0) || (plVar11 == param_1 + 0xe)) {
    plVar11 = (long *)param_1[0x10];
    if ((plVar11 == (long *)0x0) || (plVar11 == param_1 + 0x10)) {
      plVar11 = (long *)param_1[0x12];
      if (plVar11 == (long *)0x0) {
        return;
      }
      if (plVar11 == param_1 + 0x12) {
        return;
      }
    }
  }
  do {
    puVar1 = &stack0xfffffffffffffff0;
    plVar11 = param_1 + 0xe;
    if ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11) {
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        FUN_10a3de8b4(lVar14 + 0x780,param_1);
      }
    }
    plVar16 = param_1 + 0x10;
    if ((long *)*plVar16 != (long *)0x0 && (long *)*plVar16 != plVar16) {
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        func_0x00010a3de904(lVar14 + 0x7b8,param_1);
      }
    }
    plVar18 = param_1 + 0x12;
    if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar18 != plVar18) {
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        unaff_x30 = 0x10a3c78a8;
        register0x00000008 = (BADSPACEBASE *)auStack_40;
        unaff_x29 = puVar1;
        goto SUB_10a3de954;
      }
    }
    if (((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11) ||
       (((long *)*plVar16 != (long *)0x0 && ((long *)*plVar16 != plVar16)))) {
      *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 0x400;
      return;
    }
    plVar11 = (long *)param_1[0x12];
    uVar2 = 0;
    if (plVar11 != (long *)0x0 && plVar11 != plVar18) {
      uVar2 = 0x400;
    }
    *(ushort *)(param_1 + 0x30) = uVar2 | *(ushort *)(param_1 + 0x30) & 0xfbff;
    if (plVar11 != (long *)0x0 && plVar11 != plVar18) {
      return;
    }
  } while ((*(ushort *)(param_1 + 0x30) >> 10 & 1) != 0);
  if ((*(ushort *)(param_1 + 0x30) >> 5 & 1) == 0) {
    plVar11 = param_1;
    (**(code **)(*param_1 + 0xd8))();
    uVar6 = (uint)plVar11;
  }
  else {
    uVar6 = 0;
  }
  plVar11 = param_1;
  (**(code **)(*param_1 + 0xe0))();
  uVar7 = (uint)plVar11;
  plVar11 = param_1;
  (**(code **)(*param_1 + 0xe8))();
  uVar13 = (uint)plVar11;
  if (((*(ushort *)(param_1 + 0x30) >> 4 & 1) == 0) &&
     (((plVar11 = param_1, (**(code **)(*param_1 + 0x60))(), (int)plVar11 != 0 &&
       ((*(ushort *)(param_1[0x2d] + 0x118) & 0x12) == 0)) ||
      (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15f)))) {
    plVar11 = (long *)param_1[0xe];
    if (uVar6 != (plVar11 != (long *)0x0 && plVar11 != param_1 + 0xe)) {
      if (uVar6 == 0) goto LAB_10a3c6888;
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        FUN_10a3de76c(lVar14 + 0x780,param_1);
      }
    }
LAB_10a3c6900:
    plVar11 = param_1 + 0x10;
    if (uVar7 != ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11)) {
      if (uVar7 == 0) goto LAB_10a3c6950;
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        if (*(int *)(lVar14 + 0x7b8) < 1) {
          iVar12 = *(int *)((long)param_1 + 0x184);
          iVar3 = *(int *)((long)param_1 + 0x18c);
          puVar9 = *(undefined8 **)(lVar14 + 0x7e0);
          if (*(undefined8 **)(lVar14 + 0x7e0) == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)(lVar14 + 0x7e0);
            puVar17 = (undefined8 *)(lVar14 + 0x7e0);
          }
          else {
            do {
              while( true ) {
                puVar8 = puVar9;
                iVar4 = *(int *)(puVar8 + 4);
                bVar5 = iVar3 < *(int *)((long)puVar8 + 0x24);
                if (iVar12 != iVar4) {
                  bVar5 = iVar4 < iVar12;
                }
                puVar15 = puVar8;
                if (!bVar5) break;
                puVar9 = (undefined8 *)*puVar8;
                puVar17 = puVar8;
                if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_10a3c6b88;
              }
              bVar5 = *(int *)((long)puVar8 + 0x24) < iVar3;
              if (iVar12 != iVar4) {
                bVar5 = iVar12 < iVar4;
              }
              if (!bVar5) goto LAB_10a3c6be0;
              puVar9 = (undefined8 *)puVar8[1];
            } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
            puVar17 = puVar8 + 1;
          }
LAB_10a3c6b88:
          puVar8 = (undefined8 *)0x38;
          __Znwm();
          puVar8[4] = CONCAT44(iVar3,iVar12);
          puVar8[5] = puVar8 + 5;
          puVar8[6] = puVar8 + 5;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = puVar15;
          *puVar17 = puVar8;
          puVar9 = puVar8;
          if (**(long **)(lVar14 + 0x7d8) != 0) {
            *(long *)(lVar14 + 0x7d8) = **(long **)(lVar14 + 0x7d8);
            puVar9 = (undefined8 *)*puVar17;
          }
          func_0x000107c2b058(*(undefined8 *)(lVar14 + 0x7e0),puVar9);
          *(long *)(lVar14 + 0x7e8) = *(long *)(lVar14 + 0x7e8) + 1;
LAB_10a3c6be0:
          puVar9 = (undefined8 *)puVar8[6];
          param_1[0x10] = (long)(puVar8 + 5);
          param_1[0x11] = (long)puVar9;
          puVar8[6] = plVar11;
          *puVar9 = plVar11;
        }
        else {
          aplStack_58[0] = param_1;
          FUN_10a3f9ca4(lVar14 + 0x7c0,aplStack_58);
        }
      }
    }
  }
  else {
    plVar11 = (long *)param_1[0xe];
    if ((plVar11 != (long *)0x0) && (plVar11 != param_1 + 0xe)) {
      uVar7 = 0;
      uVar13 = 0;
LAB_10a3c6888:
      lVar14 = param_1[0x2e];
      lVar10 = lVar14;
      FUN_10a3cfa0c();
      if (lVar10 == 0) {
        FUN_10a3de8b4(lVar14 + 0x780,param_1);
      }
      goto LAB_10a3c6900;
    }
    plVar11 = (long *)param_1[0x10];
    if ((plVar11 == (long *)0x0) || (plVar11 == param_1 + 0x10)) {
      plVar11 = (long *)param_1[0x12];
      if (plVar11 == (long *)0x0) {
        return;
      }
      if (plVar11 == param_1 + 0x12) {
        return;
      }
      goto LAB_10a3c69d0;
    }
    uVar13 = 0;
LAB_10a3c6950:
    lVar14 = param_1[0x2e];
    lVar10 = lVar14;
    FUN_10a3cfa0c();
    if (lVar10 == 0) {
      func_0x00010a3de904(lVar14 + 0x7b8,param_1);
    }
  }
  plVar11 = param_1 + 0x12;
  if (uVar13 == ((long *)*plVar11 != (long *)0x0 && (long *)*plVar11 != plVar11)) {
    return;
  }
  if (uVar13 != 0) {
    lVar14 = param_1[0x2e];
    lVar10 = lVar14;
    FUN_10a3cfa0c();
    if (lVar10 != 0) {
      return;
    }
    if (0 < *(int *)(lVar14 + 0x7f0)) {
      aplStack_58[0] = param_1;
      FUN_10a3f9ca4(lVar14 + 0x7f8,aplStack_58);
      return;
    }
    iVar12 = *(int *)((long)param_1 + 0x184);
    iVar3 = *(int *)((long)param_1 + 0x18c);
    puVar9 = *(undefined8 **)(lVar14 + 0x818);
    if (*(undefined8 **)(lVar14 + 0x818) == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)(lVar14 + 0x818);
      puVar17 = (undefined8 *)(lVar14 + 0x818);
    }
    else {
      do {
        while( true ) {
          puVar8 = puVar9;
          iVar4 = *(int *)(puVar8 + 4);
          bVar5 = iVar3 < *(int *)((long)puVar8 + 0x24);
          if (iVar12 != iVar4) {
            bVar5 = iVar4 < iVar12;
          }
          puVar15 = puVar8;
          if (!bVar5) break;
          puVar9 = (undefined8 *)*puVar8;
          puVar17 = puVar8;
          if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_10a3c6b10;
        }
        bVar5 = *(int *)((long)puVar8 + 0x24) < iVar3;
        if (iVar12 != iVar4) {
          bVar5 = iVar12 < iVar4;
        }
        if (!bVar5) goto LAB_10a3c6b68;
        puVar9 = (undefined8 *)puVar8[1];
      } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
      puVar17 = puVar8 + 1;
    }
LAB_10a3c6b10:
    puVar8 = (undefined8 *)0x38;
    __Znwm();
    puVar8[4] = CONCAT44(iVar3,iVar12);
    puVar8[5] = puVar8 + 5;
    puVar8[6] = puVar8 + 5;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar15;
    *puVar17 = puVar8;
    puVar9 = puVar8;
    if (**(long **)(lVar14 + 0x810) != 0) {
      *(long *)(lVar14 + 0x810) = **(long **)(lVar14 + 0x810);
      puVar9 = (undefined8 *)*puVar17;
    }
    func_0x000107c2b058(*(undefined8 *)(lVar14 + 0x818),puVar9);
    *(long *)(lVar14 + 0x820) = *(long *)(lVar14 + 0x820) + 1;
LAB_10a3c6b68:
    puVar9 = (undefined8 *)puVar8[6];
    param_1[0x12] = (long)(puVar8 + 5);
    param_1[0x13] = (long)puVar9;
    puVar8[6] = plVar11;
    *puVar9 = plVar11;
    return;
  }
LAB_10a3c69d0:
  lVar14 = param_1[0x2e];
  lVar10 = lVar14;
  FUN_10a3cfa0c();
  if (lVar10 != 0) {
    return;
  }
SUB_10a3de954:
  if (*(int *)(lVar14 + 0x7f0) < 1) {
    lVar10 = param_1[0x12];
    if (lVar10 != 0) {
      plVar11 = (long *)param_1[0x13];
      *plVar11 = lVar10;
      *(long **)(lVar10 + 8) = plVar11;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long **)((long)register0x00000008 + -0x18) = param_1;
  FUN_10a3f9ca4(lVar14 + 0x7f8,(undefined1 *)((long)register0x00000008 + -0x18));
  return;
}



/* Entry: 10a398d64; end: 10a3990e7;  */

void FUN_10a398d64(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar8 = param_1 + 0x230;
  plStack_50 = param_2;
  FUN_10a3b830c(lVar8,param_2,&UNK_10dd5b8f9,&plStack_50,&lStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar8 + 0x28,param_3);
  plVar4 = *(long **)(param_3 + 0x28);
  if (plVar4 == (long *)0x0) {
    plVar9 = *(long **)(param_3 + 0x20);
    if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)
       ) {
      plVar4 = *(long **)(param_3 + 0x18);
      if (plVar4 != (long *)0x0) goto LAB_10a398dd8;
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      goto LAB_10a398e40;
    }
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
LAB_10a398f18:
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    if (*(long *)(param_3 + 0x20) != 0) {
      plVar4 = (long *)(*(long *)(param_3 + 0x20) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar7 = *(long *)(lVar8 + 0x48);
    *(undefined8 *)(lVar8 + 0x48) = uVar10;
    *(undefined8 *)(lVar8 + 0x40) = uVar5;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x00010a34d270(lVar8 + 0x50,(long *)(param_3 + 0x28));
  }
  else {
    plVar9 = *(long **)(param_3 + 0x30);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
LAB_10a398dd8:
    ___dynamic_cast(plVar4,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0);
    if (plVar4 == (long *)0x0) {
      plStack_50 = (long *)0x0;
      plStack_48 = (long *)0x0;
      if (plVar9 == (long *)0x0) goto LAB_10a398f18;
LAB_10a398e40:
      plVar4 = plVar9 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if (plStack_50 == (long *)0x0) goto LAB_10a398f18;
    }
    else {
      plStack_50 = plVar4;
      plStack_48 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10a398e40;
      }
    }
    (**(code **)(*plStack_50 + 0x48))(&lStack_70);
    lStack_60 = lStack_70;
    plStack_58 = plStack_68;
    if (plStack_68 == (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x1f0);
      plStack_78 = (long *)0x0;
    }
    else {
      plVar4 = plStack_68 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      uVar5 = *(undefined8 *)(param_1 + 0x1f0);
      plStack_78 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    lStack_80 = lStack_60;
    func_0x00010a469bc0(uVar5,&lStack_80);
    plVar4 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar9 = plStack_78 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_58;
    lVar7 = lStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar9 = plStack_58 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar6 = *(long *)(lVar8 + 0x48);
    *(long *)(lVar8 + 0x40) = lStack_60;
    *(long **)(lVar8 + 0x48) = plStack_58;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = (long *)(lVar7 + 0x10);
    (**(code **)(*plVar9 + 0x18))();
    if (((ulong)plVar9 & 1) == 0) {
      if (plVar4 != (long *)0x0) {
        plVar9 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = *(long **)(lVar8 + 0x58);
      *(long *)(lVar8 + 0x50) = lVar7;
      *(long **)(lVar8 + 0x58) = plVar4;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 1;
        do {
          lVar8 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar9 = plStack_58 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar9 = plStack_48 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3990e8; end: 10a399173;  */

void FUN_10a3990e8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x170) + 0x870);
  lVar1 = param_2;
  uVar2 = param_3;
  func_0x00010a0fda30();
  FUN_10a4630fc(param_1,uVar3,param_3,lVar1,uVar2);
  (**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,param_2);
  FUN_10a399174(param_2 + 0x218,param_1);
  FUN_10a3c6798(param_2);
  return;
}



/* Entry: 10a399174; end: 10a399287;  */

void FUN_10a399174(undefined **param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  long **pplVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long **pplVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *extraout_x8;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long *plStack_188;
  undefined *puStack_180;
  long *plStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_d0;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < param_1[2]) {
    lVar17 = param_2[1];
    uVar26 = *param_2;
    puVar14[1] = param_2[1];
    *puVar14 = uVar26;
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar14 = puVar14 + 2;
LAB_10a39926c:
    param_1[1] = (undefined *)puVar14;
    return;
  }
  lVar17 = (long)puVar14 - (long)*param_1;
  uVar23 = (lVar17 >> 4) + 1;
  if (uVar23 >> 0x3c == 0) {
    uVar18 = (long)param_1[2] - (long)*param_1;
    uVar20 = (long)uVar18 >> 3;
    if (uVar20 <= uVar23) {
      uVar20 = uVar23;
    }
    if (0x7fffffffffffffef < uVar18) {
      uVar20 = 0xfffffffffffffff;
    }
    puVar13 = param_2;
    ppuStack_38 = param_1;
    FUN_10a3a8280();
    puVar1 = (undefined8 *)(uVar20 + lVar17);
    lVar17 = param_2[1];
    uVar26 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar26;
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar14 = puVar1 + 2;
    puVar21 = (undefined *)((long)puVar1 - ((long)param_1[1] - (long)*param_1));
    _memcpy(puVar21);
    puStack_58 = *param_1;
    *param_1 = puVar21;
    param_1[1] = (undefined *)puVar14;
    puStack_40 = param_1[2];
    param_1[2] = (undefined *)(uVar20 + (long)puVar13 * 0x10);
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    FUN_10a3a83b4(&puStack_58);
    goto LAB_10a39926c;
  }
  FUN_10a3a826c();
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    ppuVar19 = param_1;
    puVar14 = param_2;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_108 = (undefined **)param_1[9];
    ppuStack_110 = (undefined **)param_1[8];
    lVar17 = param_3 + 0x88;
    func_0x00010a35bf90(lVar17,&ppuStack_110);
    plVar9 = (long *)((ulong)&ppuStack_110 | 8);
    pppuVar11 = &ppuStack_110;
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 0x28);
      pppuVar11 = (undefined ***)(lVar17 + 0x20);
    }
    puVar14 = (undefined8 *)*plVar9;
    ppuVar19 = *pppuVar11;
  }
  FUN_10a3b8ecc(&ppuStack_170,param_1[0x2e],ppuVar19,puVar14);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_170 + 0x2a,param_1 + 0x2a);
  uVar2 = (*(ushort *)(param_1 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(ppuStack_170 + 0x30) & 0xfffc;
  *(ushort *)(ppuStack_170 + 0x30) = uVar3 | *(ushort *)(ppuStack_170 + 0x30) & 1 | uVar2;
  *(ushort *)(ppuStack_170 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_1 + 0x30) & 1;
  ppuStack_110 = ppuStack_170;
  ppuStack_108 = ppuStack_168;
  if (ppuStack_168 != (undefined **)0x0) {
    ppuVar19 = ppuStack_168 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar7) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_2,&ppuStack_110);
  ppuVar19 = ppuStack_108;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar12 = ppuStack_108 + 1;
    do {
      puVar21 = *ppuVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar7) {
        *ppuVar12 = puVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar21 == (undefined *)0x0) {
      (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
    }
  }
  puStack_180 = param_1[0x41];
  plStack_178 = (long *)param_1[0x42];
  if (plStack_178 != (long *)0x0) {
    plVar9 = plStack_178 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a398cb0(ppuStack_170,&puStack_180);
  plVar9 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar5 = plStack_178 + 1;
    do {
      lVar17 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  ppuVar19 = ppuStack_170;
  puVar21 = param_1[0x3e];
  FUN_10a469fd8(puVar21,param_3);
  plVar9 = (long *)ppuVar19[0x3e];
  ppuVar19[0x3e] = puVar21;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  ppuVar19 = param_1 + 0x48;
  while (ppuVar19 = (undefined **)*ppuVar19, ppuVar19 != (undefined **)0x0) {
    plStack_188 = (long *)0x0;
    plVar9 = (long *)ppuVar19[9];
    if ((plVar9 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_188 = plVar9, plVar9 == (long *)0x0)) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = ppuVar19[8];
    }
    ppuVar12 = ppuVar19 + 2;
    ppuVar10 = ppuStack_170 + 0x46;
    ppuStack_110 = ppuVar12;
    FUN_10a3b830c(ppuVar10,ppuVar12,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_150);
    if (puVar21 == (undefined *)0x0) {
      plVar9 = (long *)ppuVar10[9];
      ppuVar10[8] = (undefined *)0x0;
      ppuVar10[9] = (undefined *)0x0;
      if (plVar9 != (long *)0x0) {
LAB_10a399680:
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    else if (param_3 == 0) {
      FUN_10a03d13c(&plStack_160,puVar21);
      if (plStack_158 != (long *)0x0) {
        plVar9 = plStack_158 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = *plVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar21 = ppuVar10[9];
      ppuVar10[9] = (undefined *)plStack_158;
      ppuVar10[8] = (undefined *)plStack_160;
      if (puVar21 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_158 != (long *)0x0) {
        plVar9 = plStack_158 + 1;
        do {
          lVar17 = *plVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_10a399668:
        plVar9 = plStack_158;
        if (lVar17 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          goto LAB_10a399680;
        }
      }
    }
    else {
      plVar9 = *(long **)(puVar21 + 0x40);
      plVar5 = *(long **)(puVar21 + 0x48);
      if (*(char *)(param_3 + 0xb8) == '\x01') {
        ppuStack_110 = (undefined **)0x10a3b9188;
        ppuStack_108 = &PTR_FUN_110bcf200;
        ppuStack_100 = ppuVar10 + 8;
        FUN_10a069d9c(param_3,plVar9,plVar5,&ppuStack_110);
        pcVar15 = (code *)*ppuStack_108;
        pppuVar11 = &ppuStack_108;
      }
      else {
        lVar17 = param_3 + 0x88;
        plStack_160 = plVar9;
        plStack_158 = plVar5;
        func_0x00010a35bf90(lVar17,&plStack_160);
        pplVar4 = &plStack_158;
        pplVar8 = &plStack_160;
        if (lVar17 != 0) {
          pplVar4 = (long **)(lVar17 + 0x28);
          pplVar8 = (long **)(lVar17 + 0x20);
        }
        if (plVar9 == *pplVar8 && plVar5 == *pplVar4) {
          FUN_10a03d13c(&plStack_160,puVar21);
          if (plStack_158 != (long *)0x0) {
            plVar9 = plStack_158 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = *plVar9 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puVar21 = ppuVar10[9];
          ppuVar10[9] = (undefined *)plStack_158;
          ppuVar10[8] = (undefined *)plStack_160;
          if (puVar21 != (undefined *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_158 != (long *)0x0) {
            plVar9 = plStack_158 + 1;
            do {
              lVar17 = *plVar9;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_10a399668;
          }
          goto LAB_10a399684;
        }
        ppuStack_150 = (undefined **)FUN_10a3b9248;
        ppuStack_148 = &PTR_FUN_110bcf220;
        ppuStack_140 = ppuVar10 + 8;
        FUN_10a069d9c(param_3,*pplVar8,*pplVar4,&ppuStack_150);
        pcVar15 = (code *)*ppuStack_148;
        pppuVar11 = &ppuStack_148;
      }
      (*pcVar15)(pppuVar11);
    }
LAB_10a399684:
    if (plStack_188 != (long *)0x0) {
      plVar9 = plStack_188 + 1;
      do {
        lVar17 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
      }
    }
    puVar21 = ppuVar19[10];
    ppuVar10 = ppuStack_170 + 0x46;
    ppuStack_110 = ppuVar12;
    FUN_10a3b830c(ppuVar10,ppuVar12,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_150);
    FUN_10a399b54(puVar21,ppuVar10 + 10,param_3);
  }
  ppuVar19 = param_1 + 0x4d;
  while (ppuVar19 = (undefined **)*ppuVar19, ppuVar19 != (undefined **)0x0) {
    ppuStack_110 = ppuVar19 + 2;
    puVar21 = ppuVar19[5];
    ppuVar12 = ppuStack_170 + 0x46;
    FUN_10a3b830c(ppuVar12,ppuStack_110,&UNK_10dd5b8f9,&ppuStack_110,&ppuStack_150);
    FUN_10a399b54(puVar21,ppuVar12 + 10,param_3);
  }
  puVar21 = param_1[0x5c];
  puVar22 = param_1[0x5b];
  uVar23 = (long)puVar21 - (long)puVar22 >> 5;
  FUN_10a398508(ppuStack_170 + 0x5b,uVar23);
  if (puVar21 != puVar22) {
    uVar20 = 0;
    do {
      if ((ulong)((long)param_1[0x5c] - (long)param_1[0x5b] >> 5) <= uVar20) goto LAB_10a399ab0;
      plVar9 = *(long **)(param_1[0x5b] + uVar20 * 0x20 + 0x10);
      (**(code **)(*plVar9 + 0x48))(&plStack_160,plVar9,param_2,param_3);
      (**(code **)(*plStack_160 + 0x50))(&ppuStack_110);
      ppuVar19 = ppuStack_108;
      ppuStack_148 = ppuStack_108;
      ppuStack_150 = ppuStack_110;
      if (ppuStack_108 != (undefined **)0x0) {
        ppuVar12 = ppuStack_108 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar7) {
            *ppuVar12 = *ppuVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuStack_108 != (undefined **)0x0) {
          ppuVar12 = ppuStack_108 + 1;
          do {
            puVar21 = *ppuVar12;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar7) {
              *ppuVar12 = puVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (puVar21 == (undefined *)0x0) {
            (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
          }
        }
      }
      if ((ulong)((long)ppuStack_170[0x5c] - (long)ppuStack_170[0x5b] >> 5) <= uVar20)
      goto LAB_10a399ab0;
      FUN_10a399d98(ppuStack_170[0x5b] + uVar20 * 0x20 + 0x10,&ppuStack_150);
      ppuVar19 = ppuStack_148;
      if (ppuStack_148 != (undefined **)0x0) {
        ppuVar12 = ppuStack_148 + 1;
        do {
          puVar21 = *ppuVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar7) {
            *ppuVar12 = puVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_148 + 0x10))(ppuStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar19);
        }
      }
      plVar9 = plStack_158;
      if (plStack_158 != (long *)0x0) {
        plVar5 = plStack_158 + 1;
        do {
          lVar17 = *plVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *plVar5 = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (((ulong)((long)param_1[0x5c] - (long)param_1[0x5b] >> 5) <= uVar20) ||
         ((ulong)((long)ppuStack_170[0x5c] - (long)ppuStack_170[0x5b] >> 5) <= uVar20))
      goto LAB_10a399ab0;
      FUN_10a399dfc(*(undefined8 *)(param_1[0x5b] + uVar20 * 0x20),
                    ppuStack_170[0x5b] + uVar20 * 0x20,param_3);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar23);
  }
  ppuVar19 = ppuStack_170;
  puVar24 = param_1[0x59];
  puVar25 = param_1[0x58];
  lVar17 = (long)puVar24 - (long)puVar25;
  uVar20 = lVar17 >> 4;
  puVar22 = ppuStack_170[0x59];
  puVar21 = ppuStack_170[0x58];
  uVar23 = (long)puVar22 - (long)puVar21 >> 4;
  if (uVar23 < uVar20) {
    uVar23 = uVar20 - uVar23;
    if ((ulong)((long)ppuStack_170[0x5a] - (long)puVar22 >> 4) < uVar23) {
      if (uVar20 >> 0x3c != 0) goto LAB_10a399aac;
      ppuVar12 = ppuStack_170 + 0x58;
      uVar16 = (long)ppuStack_170[0x5a] - (long)puVar21;
      uVar18 = (long)uVar16 >> 3;
      if (uVar18 <= uVar20) {
        uVar18 = uVar20;
      }
      if (0x7fffffffffffffef < uVar16) {
        uVar18 = 0xfffffffffffffff;
      }
      ppuStack_f0 = ppuVar12;
      FUN_10a3a82c8();
      lVar17 = (long)ppuVar12 + ((long)puVar22 - (long)puVar21);
      _bzero(lVar17,uVar23 * 0x10);
      puVar21 = (undefined *)(lVar17 - ((long)ppuVar19[0x59] - (long)ppuVar19[0x58]));
      _memcpy(puVar21);
      ppuStack_110 = (undefined **)ppuVar19[0x58];
      ppuVar19[0x58] = puVar21;
      ppuVar19[0x59] = (undefined *)(lVar17 + uVar23 * 0x10);
      puStack_f8 = ppuVar19[0x5a];
      ppuVar19[0x5a] = (undefined *)(ppuVar12 + uVar18 * 2);
      ppuStack_108 = ppuStack_110;
      ppuStack_100 = ppuStack_110;
      func_0x00010a3a82fc(&ppuStack_110);
    }
    else {
      _bzero(puVar22,uVar23 * 0x10);
      ppuVar19[0x59] = puVar22 + uVar23 * 0x10;
    }
  }
  else if (uVar20 < uVar23) {
    while (puVar22 != puVar21 + lVar17) {
      puVar22 = puVar22 + -0x10;
      FUN_10a3b772c(puVar22);
    }
    ppuVar19[0x59] = puVar21 + lVar17;
  }
  if (puVar24 != puVar25) {
    lVar17 = 0;
    uVar23 = 0;
    do {
      if (((ulong)((long)param_1[0x59] - (long)param_1[0x58] >> 4) <= uVar23) ||
         ((ulong)((long)ppuStack_170[0x59] - (long)ppuStack_170[0x58] >> 4) <= uVar23))
      goto LAB_10a399ab0;
      FUN_10a399dfc(*(undefined8 *)(param_1[0x58] + lVar17),ppuStack_170[0x58] + lVar17,param_3);
      uVar23 = uVar23 + 1;
      lVar17 = lVar17 + 0x10;
    } while (uVar20 != uVar23);
  }
  extraout_x8[1] = ppuStack_168;
  *extraout_x8 = ppuStack_170;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return;
  }
  ___stack_chk_fail();
LAB_10a399aac:
  FUN_10a3a82b4();
LAB_10a399ab0:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a399ab4);
  (*pcVar15)();
}



/* Entry: 10a399288; end: 10a399b53;  */

void FUN_10a399288(undefined8 *param_1,undefined **param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long **pplVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long *plStack_128;
  undefined *puStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    ppuVar17 = param_2;
    uVar13 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_a8 = (undefined **)param_2[9];
    ppuStack_b0 = (undefined **)param_2[8];
    lVar19 = param_4 + 0x88;
    func_0x00010a35bf90(lVar19,&ppuStack_b0);
    puVar3 = (undefined8 *)((ulong)&ppuStack_b0 | 8);
    pppuVar11 = &ppuStack_b0;
    if (lVar19 != 0) {
      puVar3 = (undefined8 *)(lVar19 + 0x28);
      pppuVar11 = (undefined ***)(lVar19 + 0x20);
    }
    uVar13 = *puVar3;
    ppuVar17 = *pppuVar11;
  }
  FUN_10a3b8ecc(&ppuStack_110,param_2[0x2e],ppuVar17,uVar13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuStack_110 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(ppuStack_110 + 0x30) & 0xfffc;
  *(ushort *)(ppuStack_110 + 0x30) = uVar2 | *(ushort *)(ppuStack_110 + 0x30) & 1 | uVar1;
  *(ushort *)(ppuStack_110 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  ppuStack_b0 = ppuStack_110;
  ppuStack_a8 = ppuStack_108;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar17 = ppuStack_108 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
      if (bVar7) {
        *ppuVar17 = *ppuVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&ppuStack_b0);
  ppuVar17 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar12 = ppuStack_a8 + 1;
    do {
      puVar18 = *ppuVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar7) {
        *ppuVar12 = puVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar18 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    }
  }
  puStack_120 = param_2[0x41];
  plStack_118 = (long *)param_2[0x42];
  if (plStack_118 != (long *)0x0) {
    plVar9 = plStack_118 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a398cb0(ppuStack_110,&puStack_120);
  plVar9 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar5 = plStack_118 + 1;
    do {
      lVar19 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  ppuVar17 = ppuStack_110;
  puVar18 = param_2[0x3e];
  FUN_10a469fd8(puVar18,param_4);
  plVar9 = (long *)ppuVar17[0x3e];
  ppuVar17[0x3e] = puVar18;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  ppuVar17 = param_2 + 0x48;
  while (ppuVar17 = (undefined **)*ppuVar17, ppuVar17 != (undefined **)0x0) {
    plStack_128 = (long *)0x0;
    plVar9 = (long *)ppuVar17[9];
    if ((plVar9 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar9, plVar9 == (long *)0x0)) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = ppuVar17[8];
    }
    ppuVar12 = ppuVar17 + 2;
    ppuVar10 = ppuStack_110 + 0x46;
    ppuStack_b0 = ppuVar12;
    FUN_10a3b830c(ppuVar10,ppuVar12,&UNK_10dd5b8f9,&ppuStack_b0,&ppuStack_f0);
    if (puVar18 == (undefined *)0x0) {
      plVar9 = (long *)ppuVar10[9];
      ppuVar10[8] = (undefined *)0x0;
      ppuVar10[9] = (undefined *)0x0;
      if (plVar9 != (long *)0x0) {
LAB_10a399680:
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    else if (param_4 == 0) {
      FUN_10a03d13c(&plStack_100,puVar18);
      if (plStack_f8 != (long *)0x0) {
        plVar9 = plStack_f8 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = *plVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar18 = ppuVar10[9];
      ppuVar10[9] = (undefined *)plStack_f8;
      ppuVar10[8] = (undefined *)plStack_100;
      if (puVar18 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_f8 != (long *)0x0) {
        plVar9 = plStack_f8 + 1;
        do {
          lVar19 = *plVar9;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_10a399668:
        plVar9 = plStack_f8;
        if (lVar19 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          goto LAB_10a399680;
        }
      }
    }
    else {
      plVar9 = *(long **)(puVar18 + 0x40);
      plVar5 = *(long **)(puVar18 + 0x48);
      if (*(char *)(param_4 + 0xb8) == '\x01') {
        ppuStack_b0 = (undefined **)0x10a3b9188;
        ppuStack_a8 = &PTR_FUN_110bcf200;
        ppuStack_a0 = ppuVar10 + 8;
        FUN_10a069d9c(param_4,plVar9,plVar5,&ppuStack_b0);
        pcVar14 = (code *)*ppuStack_a8;
        pppuVar11 = &ppuStack_a8;
      }
      else {
        lVar19 = param_4 + 0x88;
        plStack_100 = plVar9;
        plStack_f8 = plVar5;
        func_0x00010a35bf90(lVar19,&plStack_100);
        pplVar4 = &plStack_f8;
        pplVar8 = &plStack_100;
        if (lVar19 != 0) {
          pplVar4 = (long **)(lVar19 + 0x28);
          pplVar8 = (long **)(lVar19 + 0x20);
        }
        if (plVar9 == *pplVar8 && plVar5 == *pplVar4) {
          FUN_10a03d13c(&plStack_100,puVar18);
          if (plStack_f8 != (long *)0x0) {
            plVar9 = plStack_f8 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = *plVar9 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puVar18 = ppuVar10[9];
          ppuVar10[9] = (undefined *)plStack_f8;
          ppuVar10[8] = (undefined *)plStack_100;
          if (puVar18 != (undefined *)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_f8 != (long *)0x0) {
            plVar9 = plStack_f8 + 1;
            do {
              lVar19 = *plVar9;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar19 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_10a399668;
          }
          goto LAB_10a399684;
        }
        ppuStack_f0 = (undefined **)FUN_10a3b9248;
        ppuStack_e8 = &PTR_FUN_110bcf220;
        ppuStack_e0 = ppuVar10 + 8;
        FUN_10a069d9c(param_4,*pplVar8,*pplVar4,&ppuStack_f0);
        pcVar14 = (code *)*ppuStack_e8;
        pppuVar11 = &ppuStack_e8;
      }
      (*pcVar14)(pppuVar11);
    }
LAB_10a399684:
    if (plStack_128 != (long *)0x0) {
      plVar9 = plStack_128 + 1;
      do {
        lVar19 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
      }
    }
    puVar18 = ppuVar17[10];
    ppuVar10 = ppuStack_110 + 0x46;
    ppuStack_b0 = ppuVar12;
    FUN_10a3b830c(ppuVar10,ppuVar12,&UNK_10dd5b8f9,&ppuStack_b0,&ppuStack_f0);
    FUN_10a399b54(puVar18,ppuVar10 + 10,param_4);
  }
  ppuVar17 = param_2 + 0x4d;
  while (ppuVar17 = (undefined **)*ppuVar17, ppuVar17 != (undefined **)0x0) {
    ppuStack_b0 = ppuVar17 + 2;
    puVar18 = ppuVar17[5];
    ppuVar12 = ppuStack_110 + 0x46;
    FUN_10a3b830c(ppuVar12,ppuStack_b0,&UNK_10dd5b8f9,&ppuStack_b0,&ppuStack_f0);
    FUN_10a399b54(puVar18,ppuVar12 + 10,param_4);
  }
  puVar18 = param_2[0x5c];
  puVar21 = param_2[0x5b];
  uVar22 = (long)puVar18 - (long)puVar21 >> 5;
  FUN_10a398508(ppuStack_110 + 0x5b,uVar22);
  if (puVar18 != puVar21) {
    uVar23 = 0;
    do {
      if ((ulong)((long)param_2[0x5c] - (long)param_2[0x5b] >> 5) <= uVar23) goto LAB_10a399ab0;
      plVar9 = *(long **)(param_2[0x5b] + uVar23 * 0x20 + 0x10);
      (**(code **)(*plVar9 + 0x48))(&plStack_100,plVar9,param_3,param_4);
      (**(code **)(*plStack_100 + 0x50))(&ppuStack_b0);
      ppuVar17 = ppuStack_a8;
      ppuStack_e8 = ppuStack_a8;
      ppuStack_f0 = ppuStack_b0;
      if (ppuStack_a8 != (undefined **)0x0) {
        ppuVar12 = ppuStack_a8 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar7) {
            *ppuVar12 = *ppuVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar12 = ppuStack_a8 + 1;
          do {
            puVar18 = *ppuVar12;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
            if (bVar7) {
              *ppuVar12 = puVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (puVar18 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
          }
        }
      }
      if ((ulong)((long)ppuStack_110[0x5c] - (long)ppuStack_110[0x5b] >> 5) <= uVar23)
      goto LAB_10a399ab0;
      FUN_10a399d98(ppuStack_110[0x5b] + uVar23 * 0x20 + 0x10,&ppuStack_f0);
      ppuVar17 = ppuStack_e8;
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuVar12 = ppuStack_e8 + 1;
        do {
          puVar18 = *ppuVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar7) {
            *ppuVar12 = puVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (puVar18 == (undefined *)0x0) {
          (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
      plVar9 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar5 = plStack_f8 + 1;
        do {
          lVar19 = *plVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *plVar5 = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (((ulong)((long)param_2[0x5c] - (long)param_2[0x5b] >> 5) <= uVar23) ||
         ((ulong)((long)ppuStack_110[0x5c] - (long)ppuStack_110[0x5b] >> 5) <= uVar23))
      goto LAB_10a399ab0;
      FUN_10a399dfc(*(undefined8 *)(param_2[0x5b] + uVar23 * 0x20),
                    ppuStack_110[0x5b] + uVar23 * 0x20,param_4);
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar22);
  }
  ppuVar17 = ppuStack_110;
  puVar24 = param_2[0x59];
  puVar25 = param_2[0x58];
  lVar19 = (long)puVar24 - (long)puVar25;
  uVar23 = lVar19 >> 4;
  puVar21 = ppuStack_110[0x59];
  puVar18 = ppuStack_110[0x58];
  uVar22 = (long)puVar21 - (long)puVar18 >> 4;
  if (uVar22 < uVar23) {
    uVar22 = uVar23 - uVar22;
    if ((ulong)((long)ppuStack_110[0x5a] - (long)puVar21 >> 4) < uVar22) {
      if (uVar23 >> 0x3c != 0) goto LAB_10a399aac;
      ppuVar12 = ppuStack_110 + 0x58;
      uVar15 = (long)ppuStack_110[0x5a] - (long)puVar18;
      uVar20 = (long)uVar15 >> 3;
      if (uVar20 <= uVar23) {
        uVar20 = uVar23;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar20 = 0xfffffffffffffff;
      }
      ppuStack_90 = ppuVar12;
      FUN_10a3a82c8();
      puVar18 = (undefined *)((long)ppuVar12 + ((long)puVar21 - (long)puVar18));
      _bzero(puVar18,uVar22 * 0x10);
      puVar16 = ppuVar17[0x59];
      puVar21 = ppuVar17[0x58];
      _memcpy(puVar18 + -((long)puVar16 - (long)puVar21));
      ppuStack_b0 = (undefined **)ppuVar17[0x58];
      ppuVar17[0x58] = puVar18 + -((long)puVar16 - (long)puVar21);
      ppuVar17[0x59] = puVar18 + uVar22 * 0x10;
      puStack_98 = ppuVar17[0x5a];
      ppuVar17[0x5a] = (undefined *)(ppuVar12 + uVar20 * 2);
      ppuStack_a8 = ppuStack_b0;
      ppuStack_a0 = ppuStack_b0;
      func_0x00010a3a82fc(&ppuStack_b0);
    }
    else {
      _bzero(puVar21,uVar22 * 0x10);
      ppuVar17[0x59] = puVar21 + uVar22 * 0x10;
    }
  }
  else if (uVar23 < uVar22) {
    while (puVar21 != puVar18 + lVar19) {
      puVar21 = puVar21 + -0x10;
      FUN_10a3b772c(puVar21);
    }
    ppuVar17[0x59] = puVar18 + lVar19;
  }
  if (puVar24 != puVar25) {
    lVar19 = 0;
    uVar22 = 0;
    do {
      if (((ulong)((long)param_2[0x59] - (long)param_2[0x58] >> 4) <= uVar22) ||
         ((ulong)((long)ppuStack_110[0x59] - (long)ppuStack_110[0x58] >> 4) <= uVar22))
      goto LAB_10a399ab0;
      FUN_10a399dfc(*(undefined8 *)(param_2[0x58] + lVar19),ppuStack_110[0x58] + lVar19,param_4);
      uVar22 = uVar22 + 1;
      lVar19 = lVar19 + 0x10;
    } while (uVar23 != uVar22);
  }
  param_1[1] = ppuStack_108;
  *param_1 = ppuStack_110;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a399aac:
  FUN_10a3a82b4();
LAB_10a399ab0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a399ab4);
  (*pcVar14)();
}



/* Entry: 10a399b54; end: 10a399d97;  */

undefined *** FUN_10a399b54(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  code *****pppppcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  code *****pppppcVar9;
  code ****ppppcVar10;
  code ****ppppcVar11;
  code ****ppppcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  code ****ppppcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcStack_d8 = (code ****)FUN_10a3b9308;
  ppuStack_d0 = &PTR_FUN_110bcf240;
  uStack_c8 = param_2;
  if (param_1 == 0) {
    ppppcStack_98 = (code ****)0x0;
    pppppcVar9 = &ppppcStack_98;
    FUN_10a2e9e64(&ppppcStack_d8);
    goto LAB_10a399d00;
  }
  if (param_3 == 0) {
    FUN_10a03d13c(&ppppcStack_98,param_1);
    pppppcVar9 = &ppppcStack_98;
    FUN_10a069fb8(&ppppcStack_d8);
    if (ppuStack_90 == (undefined **)0x0) goto LAB_10a399d00;
    ppuVar7 = ppuStack_90 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar2) {
        *ppuVar7 = puVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_10a399ce4:
    ppuVar7 = ppuStack_90;
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  else {
    pppppcVar5 = *(code ******)(param_1 + 0x40);
    ppuVar7 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      ppppcStack_98 = (code ****)FUN_10a3b9308;
      ppuStack_90 = &PTR_FUN_110bcf240;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,pppppcVar5,ppuVar7,&ppppcStack_98);
      pppppcVar9 = pppppcVar5;
    }
    else {
      lVar3 = param_3 + 0x88;
      ppppcStack_98 = (code ****)pppppcVar5;
      ppuStack_90 = ppuVar7;
      func_0x00010a35bf90(lVar3,&ppppcStack_98);
      pppuVar4 = &ppuStack_90;
      pppppcVar9 = &ppppcStack_98;
      if (lVar3 != 0) {
        pppuVar4 = (undefined ***)(lVar3 + 0x28);
        pppppcVar9 = (code *****)(lVar3 + 0x20);
      }
      ppuVar8 = *pppuVar4;
      pppppcVar9 = (code *****)*pppppcVar9;
      if (pppppcVar5 == pppppcVar9 && ppuVar7 == ppuVar8) {
        FUN_10a03d13c(&ppppcStack_98,param_1);
        pppppcVar9 = &ppppcStack_98;
        FUN_10a069fb8(&ppppcStack_d8);
        if (ppuStack_90 == (undefined **)0x0) goto LAB_10a399d00;
        ppuVar7 = ppuStack_90 + 1;
        do {
          puVar6 = *ppuVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar2) {
            *ppuVar7 = puVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10a399ce4;
      }
      ppppcStack_98 = ppppcStack_d8;
      (*(code *)ppuStack_d0[3])(&ppuStack_90,&ppuStack_d0);
      FUN_10a069d9c(param_3,pppppcVar9,ppuVar8,&ppppcStack_98);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
  }
LAB_10a399d00:
  pppuVar4 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a052384(&ppppcStack_98);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    __Unwind_Resume();
    ppppcVar11 = pppppcVar9[1];
    ppppcVar10 = *pppppcVar9;
    *pppppcVar9 = (code ****)0x0;
    pppppcVar9[1] = (code ****)0x0;
    ppuVar7 = pppuVar4[1];
    pppuVar4[1] = (undefined **)ppppcVar11;
    *pppuVar4 = (undefined **)ppppcVar10;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar8 = ppuVar7 + 1;
      do {
        puVar6 = *ppuVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar2) {
          *ppuVar8 = puVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar6 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 10a399d98; end: 10a399dfb;  */

undefined8 * FUN_10a399d98(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a399dfc; end: 10a39a03f;  */

void FUN_10a399dfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d8 = 0x10a3b94ec;
  ppuStack_d0 = &PTR_FUN_110bcf260;
  uStack_c8 = param_2;
  if (param_1 == 0) {
    lStack_98 = 0;
    FUN_10a2e9e64(&lStack_d8,&lStack_98);
    goto LAB_10a399fa8;
  }
  if (param_3 == 0) {
    FUN_10a3b945c(&lStack_98,param_1);
    FUN_10a3b93d0(&lStack_d8,&lStack_98);
    if (ppuStack_90 == (undefined **)0x0) goto LAB_10a399fa8;
    ppuVar7 = ppuStack_90 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_10a399f8c:
    ppuVar7 = ppuStack_90;
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    ppuVar7 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      lStack_98 = 0x10a3b94ec;
      ppuStack_90 = &PTR_FUN_110bcf260;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,lVar1,ppuVar7,&lStack_98);
    }
    else {
      lVar9 = param_3 + 0x88;
      lStack_98 = lVar1;
      ppuStack_90 = ppuVar7;
      func_0x00010a35bf90(lVar9,&lStack_98);
      pppuVar5 = &ppuStack_90;
      plVar4 = &lStack_98;
      if (lVar9 != 0) {
        pppuVar5 = (undefined ***)(lVar9 + 0x28);
        plVar4 = (long *)(lVar9 + 0x20);
      }
      ppuVar8 = *pppuVar5;
      lVar9 = *plVar4;
      if (lVar1 == lVar9 && ppuVar7 == ppuVar8) {
        FUN_10a3b945c(&lStack_98,param_1);
        FUN_10a3b93d0(&lStack_d8,&lStack_98);
        if (ppuStack_90 == (undefined **)0x0) goto LAB_10a399fa8;
        ppuVar7 = ppuStack_90 + 1;
        do {
          puVar6 = *ppuVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
          if (bVar3) {
            *ppuVar7 = puVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10a399f8c;
      }
      lStack_98 = lStack_d8;
      (*(code *)ppuStack_d0[3])(&ppuStack_90,&ppuStack_d0);
      FUN_10a069d9c(param_3,lVar9,ppuVar8,&lStack_98);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
  }
LAB_10a399fa8:
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a3b772c(&lStack_98);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  ppuVar7 = pppuVar5[1];
  *pppuVar5 = (undefined **)0x0;
  pppuVar5[1] = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar8 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a39a040; end: 10a39a09b;  */

void FUN_10a39a040(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a39a09c; end: 10a39a3c3;  */

void FUN_10a39a09c(long param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar9 = param_1 + 0x230;
  plStack_60 = param_2;
  FUN_10a3b830c(lVar9,param_2,&UNK_10dd5b8f9,&plStack_60,&plStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9 + 0x28,param_3);
  plVar7 = (long *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  lVar6 = *plVar7;
  if (*(long *)(param_3 + 0x20) != 0) {
    plVar4 = (long *)(*(long *)(param_3 + 0x20) + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = *(long *)(lVar9 + 0x48);
  *(undefined8 *)(lVar9 + 0x48) = uVar8;
  *(long *)(lVar9 + 0x40) = lVar6;
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a34d270(lVar9 + 0x50,param_3 + 0x28);
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plVar4 = *(long **)(param_3 + 0x20);
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) ||
     (plVar5 = (long *)*plVar7, plStack_60 = plVar5, plVar5 == (long *)0x0)) {
    if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_10a39a310;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    FUN_10a39a3c4(*(long *)(param_1 + 0x1f8),param_2,&plStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10a39a310;
    plVar7 = plStack_68 + 1;
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    ___dynamic_cast(plVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0);
    if (plVar5 == (long *)0x0) {
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (*(long *)(param_1 + 0x1f8) != 0) {
        FUN_10a39a46c(*(long *)(param_1 + 0x1f8),param_2,plVar7);
      }
    }
    else {
      plVar7 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = plVar5;
      plStack_68 = plVar4;
      if (*(long *)(param_1 + 0x1f8) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x1f0);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_80 = plVar5;
        plStack_78 = plVar4;
        func_0x00010a469bc0(uVar8,&plStack_80);
        plVar7 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar4 = plStack_78 + 1;
          do {
            lVar9 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      else {
        lVar9 = *(long *)(*(long *)(param_1 + 0x170) + 0x870);
        uVar8 = *(undefined8 *)(lVar9 + 0x68);
        __ZNSt3__115recursive_mutex4lockEv(lVar9 + 0x70);
        (**(code **)(*plVar5 + 0x60))(plVar5,param_2,*(undefined8 *)(param_1 + 0x1f8),uVar8);
        uVar8 = *(undefined8 *)(param_1 + 0x1f0);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_90 = plVar5;
        plStack_88 = plVar4;
        func_0x00010a469bc0(uVar8,&plStack_90);
        plVar7 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar4 = plStack_88 + 1;
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar9 + 0x70);
      }
    }
    if (plStack_68 == (long *)0x0) goto LAB_10a39a310;
    plVar7 = plStack_68 + 1;
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = plStack_68;
  if (lVar9 == 0) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a39a310:
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
    do {
      lVar9 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a39a3c4; end: 10a39a46b;  */

void FUN_10a39a3c4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  if (*param_3 == 0) {
    aiStack_30[0] = 1;
  }
  else {
    func_0x0001098849a4(aiStack_30,*param_1,*param_3 + 8);
  }
  FUN_10a3b6bb0(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a39a46c; end: 10a39a4ff;  */

void FUN_10a39a46c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3b95d8(aiStack_30,*param_1,param_3);
  FUN_10a3b6bb0(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a39a500; end: 10a39a54f;  */

void FUN_10a39a500(long param_1)

{
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x280),&PTR_DAT_110bcdb88,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  *(undefined4 *)(param_1 + 0x184) = 0xfffffc18;
  FUN_10a3c7800(param_1);
  *(undefined8 *)(*(long *)(param_1 + 0x1f0) + 0x28) = *(undefined8 *)(param_1 + 0x170);
  return;
}



/* Entry: 10a39a550; end: 10a39a557;  */

void FUN_10a39a550(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x280);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a39a558; end: 10a39b75b;  */

/* WARNING: Removing unreachable block (ram,0x00010a39af18) */
/* WARNING: Removing unreachable block (ram,0x00010a39b248) */

void FUN_10a39a558(long *param_1,long *****param_2)

{
  ulong uVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long ***ppplVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long ***ppplVar22;
  long *plVar23;
  long *plVar24;
  long ****pppplVar25;
  long *plVar26;
  undefined1 auStack_100 [8];
  long ***ppplStack_f8;
  undefined8 *puStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  long ***ppplStack_d8;
  undefined **ppuStack_c8;
  long ****pppplStack_c0;
  long ***ppplStack_b8;
  byte bStack_a9;
  long ****pppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_90;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  
  if ((*(char *)(param_1[0x2e] + 0xd70) == '\x01') && (iVar14 = (int)param_1[0x55], iVar14 < 3)) {
    if (iVar14 < 1) {
      *(undefined4 *)(param_1 + 0x55) = 1;
      lVar11 = *(long *)(param_1[0x2e] + 0x870);
      lVar17 = *(long *)(lVar11 + 0x68);
      __ZNSt3__115recursive_mutex4lockEv(lVar11 + 0x70);
      lVar12 = *(long *)(lVar17 + 0xb8);
      if ((*(byte *)(lVar12 + 0x1e0) & 1) == 0) goto LAB_10a39b57c;
      ppplVar22 = *(long ****)(lVar12 + 0x50);
      pppplVar6 = (long ****)0x18;
      __Znwm();
      *pppplVar6 = ppplVar22;
      *(undefined4 *)(pppplVar6 + 1) = 0;
      puVar7 = (undefined8 *)0x20;
      ppplStack_80 = (long ***)pppplVar6;
      __Znwm();
      *puVar7 = &PTR_FUN_110bcf2e0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = pppplVar6;
      ppplStack_80 = (long ***)0x0;
      plVar23 = (long *)param_1[0x40];
      param_1[0x3f] = (long)pppplVar6;
      param_1[0x40] = (long)puVar7;
      if (plVar23 != (long *)0x0) {
        plVar24 = plVar23 + 1;
        do {
          lVar12 = *plVar24;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar4) {
            *plVar24 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      FUN_10a3b9b54(&ppplStack_80,0);
      puVar7 = (undefined8 *)param_1[0x3f];
      FUN_10a39bfc4(&pppplStack_c0,param_1);
      ppplStack_98 = ppplStack_b8;
      pppplStack_a0 = pppplStack_c0;
      if ((long ****)ppplStack_b8 != (long ****)0x0) {
        pppplVar6 = (long ****)(ppplStack_b8 + 2);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar4) {
            *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3b9c4c(&ppplStack_80,*puVar7,&pppplStack_a0);
      func_0x0001098968d0(puVar7 + 1,&ppplStack_80);
      if ((3 < (int)ppplStack_80) && ((long ****)ppplStack_78 != (long ****)0x0)) {
        (*(code *)**ppplStack_78)();
      }
      if ((long ****)ppplStack_b8 != (long ****)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplStack_b8);
        pppplVar6 = (long ****)(ppplStack_b8 + 1);
        do {
          ppplVar22 = *pppplVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar4) {
            *pppplVar6 = (long ***)((long)ppplVar22 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppplVar22 == (long ***)0x0) {
          (*(code *)(*ppplStack_b8)[2])(ppplStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplStack_b8);
        }
      }
      plVar23 = param_1;
      (**(code **)(*param_1 + 0x90))();
      if ((int)plVar23 != 0) {
        func_0x00010a04a7fc(param_1 + 0x3f,param_1 + 3);
      }
      func_0x000107c2b054(&ppplStack_80,&DAT_10f2f41eb);
      puVar7 = (undefined8 *)param_1[0x3f];
      FUN_10a39bfc4(&iStack_e0,param_1);
      ppplVar22 = ppplStack_d8;
      pppplStack_c0 = (long ****)CONCAT44(uStack_dc,iStack_e0);
      ppplStack_b8 = ppplStack_d8;
      if ((long ****)ppplStack_d8 != (long ****)0x0) {
        pppplVar6 = (long ****)(ppplStack_d8 + 2);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar4) {
            *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a3b9c4c(&pppplStack_a0,*puVar7,&pppplStack_c0);
      param_2 = (long *****)&ppplStack_80;
      FUN_10a3b6bb0(puVar7,param_2,&pppplStack_a0);
      if ((3 < (int)pppplStack_a0) && ((long ****)ppplStack_98 != (long ****)0x0)) {
        (*(code *)**ppplStack_98)();
      }
      if ((long ****)ppplVar22 != (long ****)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
        pppplVar6 = (long ****)(ppplVar22 + 1);
        do {
          ppplVar15 = *pppplVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar4) {
            *pppplVar6 = (long ***)((long)ppplVar15 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppplVar15 == (long ***)0x0) {
          (*(code *)(*ppplVar22)[2])(ppplVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
        }
      }
      for (plVar23 = (long *)param_1[0x4d]; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        ppppplVar8 = (long *****)plVar23[5];
        if (ppppplVar8 != (long *****)0x0) {
          ___dynamic_cast(ppppplVar8,&PTR_DAT_110bf32c0,&PTR_DAT_110c4efd8,0);
          if (ppppplVar8 == (long *****)0x0) {
            pppplStack_c0 = (long ****)0x0;
            ppplStack_b8 = (long ***)0x0;
          }
          else {
            ppplStack_b8 = (long ***)plVar23[6];
            pppplStack_c0 = (long ****)ppppplVar8;
            if ((long ****)ppplStack_b8 != (long ****)0x0) {
              pppplVar6 = (long ****)(ppplStack_b8 + 1);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
                if (bVar4) {
                  *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          FUN_10a3b96f4(&iStack_e0,&pppplStack_a0);
          lVar12 = CONCAT44(uStack_dc,iStack_e0);
          pppplVar6 = ppppplVar8[0x1e];
          pppplVar25 = (long ****)(long)*(char *)((long)pppplVar6 + 0xaf);
          if ((long)pppplVar25 < 0) {
            pppplVar25 = (long ****)pppplVar6[0x14];
            if ((long ****)0x7ffffffffffffff7 < pppplVar25) {
              func_0x000109ffde50();
              goto LAB_10a39b57c;
            }
            pppplVar6 = (long ****)pppplVar6[0x13];
          }
          else {
            pppplVar6 = pppplVar6 + 0x13;
          }
          if (pppplVar25 < (long ****)0x17) {
            uStack_90 = (long ****)CONCAT17((char)pppplVar25,(undefined7)uStack_90);
            ppppplVar9 = &pppplStack_a0;
            if (pppplVar25 != (long ****)0x0) goto LAB_10a39a8ac;
          }
          else {
            ppppplVar8 = (long *****)0x19;
            if (((ulong)pppplVar25 | 7) != 0x17) {
              ppppplVar8 = (long *****)(((ulong)pppplVar25 | 7) + 1);
            }
            ppppplVar9 = ppppplVar8;
            __Znwm();
            uStack_90 = (long ****)((ulong)ppppplVar8 | 0x8000000000000000);
            pppplStack_a0 = (long ****)ppppplVar9;
            ppplStack_98 = (long ***)pppplVar25;
LAB_10a39a8ac:
            _memmove(ppppplVar9,pppplVar6,pppplVar25);
          }
          *(undefined1 *)((long)ppppplVar9 + (long)pppplVar25) = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar12 + 0x50,&pppplStack_a0);
          if ((long)uStack_90 < 0) {
            __ZdlPv(pppplStack_a0);
          }
          lVar12 = param_1[0x3e];
          ppplStack_f8 = ppplStack_d8;
          if ((long ****)ppplStack_d8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_d8 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          func_0x00010a469bc0(lVar12,auStack_100);
          ppplVar22 = ppplStack_f8;
          if ((long ****)ppplStack_f8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_f8 + 1);
            do {
              ppplVar15 = *pppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)ppplVar15 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar15 == (long ***)0x0) {
              (*(code *)(*ppplStack_f8)[2])(ppplStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
            }
          }
          param_2 = (long *****)(plVar23 + 2);
          (**(code **)(*(long *)CONCAT44(uStack_dc,iStack_e0) + 0x60))
                    ((long *)CONCAT44(uStack_dc,iStack_e0),param_2,param_1[0x3f],lVar17);
          ppplVar22 = ppplStack_d8;
          if ((long ****)ppplStack_d8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_d8 + 1);
            do {
              ppplVar15 = *pppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)ppplVar15 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar15 == (long ***)0x0) {
              (*(code *)(*ppplStack_d8)[2])(ppplStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
            }
          }
          ppplVar22 = ppplStack_b8;
          if ((long ****)ppplStack_b8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_b8 + 1);
            do {
              ppplVar15 = *pppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)ppplVar15 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar15 == (long ***)0x0) {
              (*(code *)(*ppplStack_b8)[2])(ppplStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
            }
          }
        }
      }
      if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x10d) {
        plVar23 = (long *)param_1[0x3f];
        func_0x00010a0d77bc(&iStack_e0,param_1[0x2d]);
        pppplStack_c0 = (long ****)CONCAT44(uStack_dc,iStack_e0);
        ppplStack_b8 = ppplStack_d8;
        if ((long ****)ppplStack_d8 != (long ****)0x0) {
          pppplVar6 = (long ****)(ppplStack_d8 + 2);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
            if (bVar4) {
              *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a26f500(&pppplStack_a0,*plVar23,&pppplStack_c0);
        func_0x000109884c0c(&ppuStack_c8,plVar23 + 1,*plVar23);
        param_2 = (long *****)*plVar23;
        (*(code *)(*param_2)[0x17])(&puStack_e8,param_2,&DAT_10f64c8a8,0xb);
        func_0x0001098962e4(&ppuStack_c8,param_2,&puStack_e8,&pppplStack_a0);
        if (puStack_e8 != (undefined8 *)0x0) {
          (**(code **)*puStack_e8)();
        }
        if (ppuStack_c8 != (undefined **)0x0) {
          (**(code **)*ppuStack_c8)();
        }
        if ((3 < (int)pppplStack_a0) && ((long ****)ppplStack_98 != (long ****)0x0)) {
          (*(code *)**ppplStack_98)();
        }
        if ((long ****)ppplStack_b8 != (long ****)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        ppplVar22 = ppplStack_d8;
        if ((long ****)ppplStack_d8 != (long ****)0x0) {
          pppplVar6 = (long ****)(ppplStack_d8 + 1);
          do {
            ppplVar15 = *pppplVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
            if (bVar4) {
              *pppplVar6 = (long ***)((long)ppplVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppplVar15 == (long ***)0x0) {
            (*(code *)(*ppplStack_d8)[2])(ppplStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
          }
        }
      }
      for (plVar23 = (long *)param_1[0x48]; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        pppplVar6 = (long ****)plVar23[9];
        if ((pppplVar6 != (long ****)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_98 = (long ***)pppplVar6,
           pppplVar6 != (long ****)0x0)) {
          ppppplVar8 = (long *****)plVar23[8];
          pppplStack_a0 = (long ****)ppppplVar8;
          if (ppppplVar8 != (long *****)0x0) {
            ___dynamic_cast(ppppplVar8,&PTR_DAT_110bf32c0,&PTR_DAT_110bde410,0);
            if (ppppplVar8 == (long *****)0x0) {
              pppplStack_c0 = (long ****)0x0;
              ppplStack_b8 = (long ***)0x0;
              param_2 = (long *****)(plVar23 + 2);
              FUN_10a39c058(param_1[0x3f],param_2,plVar23 + 8);
            }
            else {
              pppplVar25 = pppplVar6 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppplVar25,0x10);
                if (bVar4) {
                  *pppplVar25 = (long ***)((long)*pppplVar25 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              param_2 = (long *****)(plVar23 + 2);
              pppplStack_c0 = (long ****)ppppplVar8;
              ppplStack_b8 = (long ***)pppplVar6;
              (*(code *)(*ppppplVar8)[0xc])();
              do {
                ppplVar22 = *pppplVar25;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppplVar25,0x10);
                if (bVar4) {
                  *pppplVar25 = (long ***)((long)ppplVar22 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppplVar22 == (long ***)0x0) {
                (*(code *)(*pppplVar6)[2])(pppplVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar6);
              }
            }
            if ((long ****)ppplStack_98 == (long ****)0x0) goto LAB_10a39ac00;
          }
          ppplVar22 = ppplStack_98;
          pppplVar6 = (long ****)(ppplStack_98 + 1);
          do {
            ppplVar15 = *pppplVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
            if (bVar4) {
              *pppplVar6 = (long ***)((long)ppplVar15 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppplVar15 == (long ***)0x0) {
            (*(code *)(*ppplStack_98)[2])(ppplStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
          }
        }
LAB_10a39ac00:
      }
      if (param_1[0x41] != 0) {
        for (plVar23 = *(long **)(param_1[0x41] + 0x110); plVar23 != (long *)0x0;
            plVar23 = (long *)*plVar23) {
          pppplVar6 = (long ****)plVar23[9];
          if ((pppplVar6 != (long ****)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_98 = (long ***)pppplVar6,
             pppplVar6 != (long ****)0x0)) {
            pppplStack_a0 = (long ****)plVar23[8];
            if ((long *****)pppplStack_a0 != (long *****)0x0) {
              param_2 = (long *****)(plVar23 + 2);
              FUN_10a39a46c(param_1[0x3f],param_2,plVar23 + 8);
            }
            pppplVar25 = pppplVar6 + 1;
            do {
              ppplVar22 = *pppplVar25;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar25,0x10);
              if (bVar4) {
                *pppplVar25 = (long ***)((long)ppplVar22 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar22 == (long ***)0x0) {
              (*(code *)(*pppplVar6)[2])(pppplVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar6);
            }
          }
        }
      }
      plVar24 = (long *)param_1[0x5c];
      for (plVar23 = (long *)param_1[0x5b]; plVar23 != plVar24; plVar23 = plVar23 + 4) {
        if (*plVar23 != 0) {
          for (plVar26 = *(long **)(*plVar23 + 0x110); plVar26 != (long *)0x0;
              plVar26 = (long *)*plVar26) {
            pppplVar6 = (long ****)plVar26[9];
            if ((pppplVar6 != (long ****)0x0) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_98 = (long ***)pppplVar6,
               pppplVar6 != (long ****)0x0)) {
              pppplStack_a0 = (long ****)plVar26[8];
              if ((long *****)pppplStack_a0 != (long *****)0x0) {
                param_2 = (long *****)(plVar26 + 2);
                FUN_10a39a46c(param_1[0x3f],param_2,plVar26 + 8);
              }
              pppplVar25 = pppplVar6 + 1;
              do {
                ppplVar22 = *pppplVar25;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppplVar25,0x10);
                if (bVar4) {
                  *pppplVar25 = (long ***)((long)ppplVar22 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppplVar22 == (long ***)0x0) {
                (*(code *)(*pppplVar6)[2])(pppplVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar6);
              }
            }
          }
        }
      }
      plVar24 = (long *)param_1[0x59];
      for (plVar23 = (long *)param_1[0x58]; plVar23 != plVar24; plVar23 = plVar23 + 2) {
        if (*plVar23 != 0) {
          for (plVar26 = *(long **)(*plVar23 + 0x110); plVar26 != (long *)0x0;
              plVar26 = (long *)*plVar26) {
            pppplVar6 = (long ****)plVar26[9];
            if ((pppplVar6 != (long ****)0x0) &&
               (__ZNSt3__119__shared_weak_count4lockEv(), ppplStack_98 = (long ***)pppplVar6,
               pppplVar6 != (long ****)0x0)) {
              pppplStack_a0 = (long ****)plVar26[8];
              if ((long *****)pppplStack_a0 != (long *****)0x0) {
                param_2 = (long *****)(plVar26 + 2);
                FUN_10a39a46c(param_1[0x3f],param_2,plVar26 + 8);
              }
              pppplVar25 = pppplVar6 + 1;
              do {
                ppplVar22 = *pppplVar25;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppplVar25,0x10);
                if (bVar4) {
                  *pppplVar25 = (long ***)((long)ppplVar22 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppplVar22 == (long ***)0x0) {
                (*(code *)(*pppplVar6)[2])(pppplVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar6);
              }
            }
          }
        }
      }
      if (param_1[0x5c] != param_1[0x5b]) {
        uVar18 = 0;
        do {
          __ZNSt3__19to_stringEm(&pppplStack_c0,uVar18);
          ppppplVar8 = &pppplStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (ppppplVar8,0,"event",5);
          ppplStack_98 = (long ***)ppppplVar8[1];
          pppplStack_a0 = *ppppplVar8;
          uStack_90 = ppppplVar8[2];
          ppppplVar8[1] = (long ****)0x0;
          ppppplVar8[2] = (long ****)0x0;
          *ppppplVar8 = (long ****)0x0;
          if ((char)bStack_a9 < '\0') {
            __ZdlPv(pppplStack_c0);
          }
          if ((ulong)(param_1[0x5c] - param_1[0x5b] >> 5) <= uVar18) goto LAB_10a39b57c;
          puVar7 = (undefined8 *)param_1[0x3f];
          lVar12 = param_1[0x5b] + uVar18 * 0x20;
          lVar17 = *(long *)(lVar12 + 0x10);
          ppplStack_b8 = *(long ****)(lVar12 + 0x18);
          uVar10 = *puVar7;
          if ((long ****)ppplStack_b8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_b8 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)*pppplVar6 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppplStack_c0 = (long ****)(long *****)0x0;
          if (lVar17 != 0) {
            pppplStack_c0 = (long ****)(lVar17 + 0x10);
          }
          ppuStack_c8 = &PTR_DAT_110bf6810;
          func_0x000109899de4(&iStack_e0,uVar10,&pppplStack_c0,&ppuStack_c8,0,0);
          ppplVar22 = ppplStack_b8;
          if ((long ****)ppplStack_b8 != (long ****)0x0) {
            pppplVar6 = (long ****)(ppplStack_b8 + 1);
            do {
              ppplVar15 = *pppplVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
              if (bVar4) {
                *pppplVar6 = (long ***)((long)ppplVar15 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar15 == (long ***)0x0) {
              (*(code *)(*ppplStack_b8)[2])(ppplStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar22);
            }
          }
          param_2 = &pppplStack_a0;
          FUN_10a3b6bb0(puVar7,param_2,&iStack_e0);
          if ((3 < iStack_e0) && ((long ****)ppplStack_d8 != (long ****)0x0)) {
            (*(code *)**ppplStack_d8)();
          }
          if ((long)uStack_90 < 0) {
            __ZdlPv(pppplStack_a0);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < (ulong)(param_1[0x5c] - param_1[0x5b] >> 5));
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar11 + 0x70);
      iVar14 = (int)param_1[0x55];
    }
    if (iVar14 < 2) {
      if ((param_1[0x41] == 0) || (*(char *)(param_1[0x41] + 0x1ba) != '\x01')) {
        if ((*(ushort *)(param_1 + 0x30) & 0x17) == 0) {
          *(undefined4 *)(param_1 + 0x55) = 2;
          FUN_10a39b75c(param_1);
          uVar10 = *(undefined8 *)(param_1[0x2e] + 0x870);
          uVar18 = param_1[0x5c] - param_1[0x5b] >> 5;
          lVar11 = param_1[0x5e];
          if ((ulong)(param_1[0x60] - lVar11 >> 3) < uVar18) {
            if (uVar18 >> 0x3d != 0) {
LAB_10a39b4c8:
              FUN_10a3a8794();
              FUN_10a3978e8(param_1);
              ___cxa_rethrow();
LAB_10a39b57c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a39b580);
              (*pcVar5)();
            }
            lVar12 = param_1[0x5f];
            FUN_10a3a87a8();
            lVar12 = uVar18 + (lVar12 - lVar11);
            lVar11 = (long)param_2 * 8;
            param_2 = (long *****)param_1[0x5e];
            lVar20 = lVar12 - (param_1[0x5f] - (long)param_2);
            _memcpy(lVar20);
            lVar17 = param_1[0x5e];
            param_1[0x5e] = lVar20;
            param_1[0x5f] = lVar12;
            param_1[0x60] = uVar18 + lVar11;
            if (lVar17 != 0) {
              __ZdlPv();
            }
          }
          lVar11 = param_1[0x5c];
          lVar12 = param_1[0x5b];
          if (lVar11 != lVar12) {
            lVar17 = 0;
            uVar18 = 0;
            do {
              if (*(long *)(lVar12 + lVar17) != 0) {
                uVar21 = *(undefined8 *)(lVar12 + lVar17 + 0x10);
                puVar7 = (undefined8 *)param_1[0x5f];
                if (puVar7 < (undefined8 *)param_1[0x60]) {
                  puVar19 = puVar7 + 1;
                  *puVar7 = uVar21;
                }
                else {
                  lVar11 = (long)puVar7 - param_1[0x5e];
                  uVar1 = (lVar11 >> 3) + 1;
                  if (uVar1 >> 0x3d != 0) goto LAB_10a39b4c8;
                  uVar13 = param_1[0x60] - param_1[0x5e];
                  uVar16 = (long)uVar13 >> 2;
                  if (uVar16 <= uVar1) {
                    uVar16 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < uVar13) {
                    uVar16 = 0x1fffffffffffffff;
                  }
                  FUN_10a3a87a8();
                  puVar7 = (undefined8 *)(uVar16 + lVar11);
                  puVar19 = puVar7 + 1;
                  *puVar7 = uVar21;
                  lVar12 = (long)puVar7 - (param_1[0x5f] - param_1[0x5e]);
                  _memcpy(lVar12);
                  lVar11 = param_1[0x5e];
                  param_1[0x5e] = lVar12;
                  param_1[0x5f] = (long)puVar19;
                  param_1[0x60] = uVar16 + (long)param_2 * 8;
                  if (lVar11 != 0) {
                    __ZdlPv();
                  }
                }
                param_1[0x5f] = (long)puVar19;
                func_0x000107c2b054(&pppplStack_a0,"event");
                __ZNSt3__19to_stringEm(&pppplStack_c0,uVar18);
                pppplVar6 = (long ****)ppplStack_b8;
                ppppplVar8 = (long *****)pppplStack_c0;
                if (-1 < (char)bStack_a9) {
                  pppplVar6 = (long ****)(ulong)bStack_a9;
                  ppppplVar8 = &pppplStack_c0;
                }
                ppppplVar9 = &pppplStack_a0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppplVar9,ppppplVar8,pppplVar6);
                ppplStack_78 = (long ***)ppppplVar9[1];
                ppplStack_80 = (long ***)*ppppplVar9;
                ppplStack_70 = (long ***)ppppplVar9[2];
                ppppplVar9[1] = (long ****)0x0;
                ppppplVar9[2] = (long ****)0x0;
                *ppppplVar9 = (long ****)0x0;
                if ((char)bStack_a9 < '\0') {
                  __ZdlPv(pppplStack_c0);
                }
                if ((long)uStack_90 < 0) {
                  __ZdlPv(pppplStack_a0);
                }
                if ((ulong)(param_1[0x5c] - param_1[0x5b] >> 5) <= uVar18) goto LAB_10a39b57c;
                param_2 = (long *****)0x1;
                FUN_10a2163b8(*(undefined8 *)(*(long *)(param_1[0x5b] + lVar17) + 0xe0));
                if ((param_2 != (long *****)0x0) &&
                   (pppplVar6 = *param_2, pppplVar6 != (long ****)0x0)) {
                  if ((ulong)(param_1[0x5c] - param_1[0x5b] >> 5) <= uVar18) goto LAB_10a39b57c;
                  lVar11 = *(long *)(param_1[0x5b] + lVar17);
                  lVar12 = (long)*(char *)(lVar11 + 0x13f);
                  if (lVar12 < 0) {
                    lVar12 = *(long *)(lVar11 + 0x130);
                  }
                  pppplVar25 = pppplVar6 + 8;
                  if (lVar12 != 0) {
                    pppplVar25 = (long ****)(lVar11 + 0x128);
                  }
                  if (*(int *)(pppplVar6 + 4) == 1) {
                    if ((*(byte *)(pppplVar6 + 0xb) >> 2 & 1) != 0) {
                      FUN_10a39be38(&pppplStack_a0,param_1[0x3f],&ppplStack_80);
                      goto LAB_10a39b57c;
                    }
                    if ((*(byte *)(pppplVar6 + 0xb) >> 1 & 1) == 0) {
                      FUN_10a39be38(&pppplStack_a0,param_1[0x3f],&ppplStack_80);
                      param_2 = &pppplStack_a0;
                      FUN_10a462aa0(uVar10,param_2,pppplVar6 + 5,pppplVar25,param_1[0x3f]);
                    }
                    else {
                      FUN_10a39be38(&pppplStack_a0,param_1[0x3f],&ppplStack_80);
                      cVar3 = *(char *)((long)pppplVar6 + 0x3f);
                      pppplVar2 = (long ****)pppplVar6[5];
                      if (-1 < (long)cVar3) {
                        pppplVar2 = pppplVar6 + 5;
                      }
                      ppplVar22 = pppplVar6[6];
                      if (-1 < cVar3) {
                        ppplVar22 = (long ***)(long)cVar3;
                      }
                      param_2 = &pppplStack_a0;
                      FUN_10a462c10(uVar10,param_2,pppplVar2,ppplVar22,pppplVar25,param_1[0x3f]);
                    }
                    if ((3 < (int)ppplStack_98) && (uStack_90 != (long ****)0x0)) {
                      (*(code *)**uStack_90)();
                    }
                  }
                }
                lVar11 = param_1[0x5c];
                lVar12 = param_1[0x5b];
              }
              uVar18 = uVar18 + 1;
              lVar17 = lVar17 + 0x20;
            } while (uVar18 < (ulong)(lVar11 - lVar12 >> 5));
          }
          lVar12 = param_1[0x5e];
          lVar17 = param_1[0x5f];
          lVar11 = 0;
          if (lVar17 != lVar12) {
            lVar11 = LZCOUNT(lVar17 - lVar12 >> 3) * -2 + 0x7e;
          }
          FUN_10a3a87dc(lVar12,lVar17,lVar11,1);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x55) = 2;
        FUN_10a39b75c(param_1);
      }
    }
    if ((*(ushort *)(param_1 + 0x30) & 0x17) == 0) {
      *(undefined4 *)(param_1 + 0x55) = 3;
      FUN_10a397630(param_1,0x80);
      plVar23 = (long *)param_1[0x58];
      plVar24 = (long *)param_1[0x59];
      if (plVar23 != plVar24) {
        uVar10 = *(undefined8 *)(param_1[0x2e] + 0x870);
        do {
          if (*plVar23 != 0) {
            (**(code **)(**(long **)(*plVar23 + 0xe0) + 0x90))();
            plVar26 = (long *)0x1;
            FUN_10a2163b8(*(undefined8 *)(*plVar23 + 0xe0));
            if (plVar26 == (long *)0x0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar26;
            }
            lVar12 = *plVar23;
            lVar17 = (long)*(char *)(lVar12 + 0x13f);
            if (lVar17 < 0) {
              lVar17 = *(long *)(lVar12 + 0x130);
            }
            lVar20 = lVar11 + 0x40;
            if (lVar17 != 0) {
              lVar20 = lVar12 + 0x128;
            }
            if ((lVar11 != 0) && (*(int *)(lVar11 + 0x20) == 1)) {
              ppplStack_80 = (long ***)param_1[0x3f];
              ppplStack_78 = ppplStack_80;
              FUN_10a462990(uVar10,lVar11 + 0x28,lVar20,&ppplStack_80,2);
            }
          }
          plVar23 = plVar23 + 2;
        } while (plVar23 != plVar24);
      }
    }
  }
  return;
}



/* Entry: 10a39b75c; end: 10a39b9d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a39b75c(code ****param_1,long *param_2)

{
  long *plVar1;
  code ***pppcVar2;
  code ****ppppcVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  code ****ppppcVar9;
  code ****ppppcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  code ***pppcVar14;
  code **ppcVar15;
  code ****unaff_x19;
  code **ppcVar16;
  undefined8 uVar17;
  code ****unaff_x21;
  code ****unaff_x22;
  code ****ppppcStack_240;
  long *plStack_238;
  code ***apppcStack_230 [7];
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  code ****ppppcStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1b8;
  code **ppcStack_1b0;
  undefined4 auStack_1a8 [2];
  code **ppcStack_1a0;
  undefined4 uStack_198;
  code **ppcStack_190;
  undefined4 uStack_188;
  code **ppcStack_180;
  undefined4 uStack_178;
  code **ppcStack_170;
  undefined4 uStack_168;
  code **ppcStack_160;
  undefined4 uStack_158;
  code **ppcStack_150;
  undefined4 uStack_148;
  code **ppcStack_140;
  undefined4 uStack_138;
  code **ppcStack_130;
  undefined4 uStack_128;
  code **ppcStack_120;
  undefined4 uStack_118;
  long lStack_110;
  code ***pppcStack_90;
  code ***pppcStack_88;
  code ***pppcStack_80;
  code ****ppppcStack_78;
  undefined **ppuStack_70;
  code ****ppppcStack_68;
  code ****ppppcStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar9 = param_1;
  if (param_1[0x41] == (code ***)0x0) goto LAB_10a39b8dc;
  ppcVar16 = param_1[0x2e][0x10e];
  ppppcVar9 = (code ****)param_1[0x41][0x1c];
  param_2 = (long *)0x1;
  FUN_10a2163b8();
  unaff_x19 = param_1;
  if (param_2 == (long *)0x0) goto LAB_10a39b8dc;
  lVar12 = *param_2;
  if (lVar12 == 0) goto LAB_10a39b8dc;
  pppcVar14 = param_1[0x41];
  ppcVar15 = (code **)(long)*(char *)((long)pppcVar14 + 0x13f);
  if ((long)ppcVar15 < 0) {
    ppcVar15 = pppcVar14[0x26];
  }
  pppcVar2 = (code ***)(lVar12 + 0x40);
  if (ppcVar15 != (code **)0x0) {
    pppcVar2 = pppcVar14 + 0x25;
  }
  iVar4 = *(int *)(lVar12 + 0x20);
  pppcStack_88 = param_1[0x44];
  pppcStack_90 = param_1[0x43];
  pppcStack_80 = param_1[0x45];
  param_1[0x45] = (code ***)0x0;
  param_1[0x44] = (code ***)0x0;
  param_1[0x43] = (code ***)0x0;
  unaff_x22 = &pppcStack_90;
  unaff_x21 = (code ****)&ppppcStack_78;
  ppppcStack_78 = (code ****)FUN_10a3b99a0;
  ppuStack_70 = &PTR_FUN_110bcf2b8;
  ppppcStack_68 = param_1;
  ppppcStack_60 = unaff_x22;
  if (iVar4 == 1) {
    plVar11 = (long *)(lVar12 + 0x28);
    bVar5 = *(byte *)(lVar12 + 0x58);
    if (*(char *)((long)pppcVar14 + 0x1ba) == '\x01') {
      if ((bVar5 >> 2 & 1) == 0) {
        if ((bVar5 >> 1 & 1) == 0) {
          FUN_10a462eec(ppcVar16,plVar11,pppcVar2,param_1[0x3f]);
          param_2 = plVar11;
        }
        else {
          cVar6 = *(char *)(lVar12 + 0x3f);
          param_2 = *(long **)(lVar12 + 0x28);
          if (-1 < (long)cVar6) {
            param_2 = plVar11;
          }
          lVar12 = *(long *)(lVar12 + 0x30);
          if (-1 < cVar6) {
            lVar12 = (long)cVar6;
          }
          FUN_10a46304c(ppcVar16,param_2,lVar12,pppcVar2,param_1[0x3f]);
        }
        goto LAB_10a39b8b8;
      }
    }
    else if ((bVar5 >> 2 & 1) == 0) {
      if ((bVar5 >> 1 & 1) == 0) {
        FUN_10a462cdc(ppcVar16,plVar11,pppcVar2,param_1[0x3f]);
        param_2 = plVar11;
      }
      else {
        cVar6 = *(char *)(lVar12 + 0x3f);
        param_2 = *(long **)(lVar12 + 0x28);
        if (-1 < (long)cVar6) {
          param_2 = plVar11;
        }
        lVar12 = *(long *)(lVar12 + 0x30);
        if (-1 < cVar6) {
          lVar12 = (long)cVar6;
        }
        FUN_10a462e3c(ppcVar16,param_2,lVar12,pppcVar2,param_1[0x3f]);
      }
      goto LAB_10a39b8b8;
    }
LAB_10a39b984:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a39b988);
    (*pcVar8)();
  }
LAB_10a39b8b8:
  do {
    FUN_10a044790(&ppppcStack_78);
    (*(code *)*ppuStack_70)(unaff_x21 + 1);
    ppppcVar9 = (code ****)&ppppcStack_78;
    ppppcStack_78 = unaff_x22;
    FUN_10a3a7a48();
LAB_10a39b8dc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 1) {
      FUN_10a044790(&ppppcStack_78);
      (*(code *)*ppuStack_70)(unaff_x21 + 1);
      ppppcStack_78 = &pppcStack_90;
      FUN_10a3a7a48(&ppppcStack_78);
      do {
        __Unwind_Resume();
      } while ((int)param_2 == 0);
      func_0x000104bd46a0();
      lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if (*(char *)(ppppcVar9[0x2e] + 0x1ae) == '\x01') {
        ppppcVar10 = ppppcVar9;
        FUN_10a3c5cc8();
        cVar6 = *(char *)((long)ppppcVar10 + 0xef);
        ppppcVar3 = (code ****)ppppcVar10[0x1b];
        if (-1 < (long)cVar6) {
          ppppcVar3 = ppppcVar10 + 0x1b;
        }
        pppcVar14 = ppppcVar10[0x1c];
        if (-1 < cVar6) {
          pppcVar14 = (code ***)(long)cVar6;
        }
        FUN_10a3a7ab8(apppcStack_230,ppppcVar3,pppcVar14);
        FUN_10a39bce0(ppppcVar9 + 0x52);
        lVar12 = 0;
        pppcVar14 = ppppcVar9[0x2e];
        ppcStack_1b0 = pppcVar14[0x1b1];
        auStack_1a8[0] = 0x400;
        ppcStack_1a0 = pppcVar14[0x1b3];
        uStack_198 = 0x800;
        ppcStack_190 = pppcVar14[0x1b5];
        uStack_188 = 0x1000;
        ppcStack_180 = pppcVar14[0x1b7];
        uStack_178 = 0x2000;
        ppcStack_170 = pppcVar14[0x1b9];
        uStack_168 = 0x4000;
        ppcStack_160 = pppcVar14[0x1bb];
        uStack_158 = 0x8000;
        ppcStack_150 = pppcVar14[0x1bd];
        uStack_148 = 0x10000;
        ppcStack_140 = pppcVar14[0x1bf];
        uStack_138 = 0x20000;
        ppcStack_130 = pppcVar14[0x1c1];
        uStack_128 = 0x40000;
        ppcStack_120 = pppcVar14[0x1c3];
        uStack_118 = 0x80000;
        do {
          uVar17 = *(undefined8 *)((long)auStack_1a8 + lVar12 + -8);
          pcStack_1f8 = FUN_10a3b98c8;
          ppuStack_1f0 = &PTR_DAT_110bcf280;
          plStack_1e0 = (long *)CONCAT44(plStack_1e0._4_4_,
                                         *(undefined4 *)((long)auStack_1a8 + lVar12));
          bStack_1b8 = 1;
          ppppcStack_1e8 = ppppcVar9;
          FUN_10a07ca84(&ppppcStack_240,uVar17,&pcStack_1f8);
          if (3 < (ulong)bStack_1b8) goto LAB_10a39bcdc;
          (*(code *)(&PTR_FUN_110b9a040)[bStack_1b8])(&pcStack_1f8);
          if (plStack_238 != (long *)0x0) {
            plVar11 = plStack_238 + 1;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *plVar11 = *plVar11 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          pcStack_1f8 = FUN_10a3b9920;
          ppuStack_1f0 = &PTR_FUN_110bcf2a0;
          plStack_1e0 = plStack_238;
          ppppcStack_1e8 = ppppcStack_240;
          uStack_1d8 = uVar17;
          func_0x00010a39bd3c(ppppcVar9 + 0x52,&pcStack_1f8);
          FUN_10a044790(&pcStack_1f8);
          (*(code *)*ppuStack_1f0)(&ppuStack_1f0);
          plVar11 = plStack_238;
          if (plStack_238 != (long *)0x0) {
            plVar1 = plStack_238 + 1;
            do {
              lVar13 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_238 + 0x10))(plStack_238);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != 0xa0);
        if (0x91 < *(int *)(ppppcVar9[0x2e][0x144] + 3)) {
          FUN_10a39a558(ppppcVar9);
        }
        ppppcVar9 = apppcStack_230;
        FUN_10a3b78c4(ppppcVar9);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
        return;
      }
      ___stack_chk_fail();
      FUN_10a3b78c4(apppcStack_230);
      __Unwind_Resume(ppppcVar9);
LAB_10a39bcdc:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a39bce0);
      (*pcVar8)();
    }
    ___cxa_begin_catch();
    if ((*(ushort *)((long)unaff_x19[0x2e] + 0xd1e) & 1) == 0) break;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      (*(code *)(*ppppcVar9)[2])();
      param_2 = (long *)0x2;
      func_0x00010ae06f08(1,2,&UNK_10f652426,&UNK_10f652690,0x328,&UNK_10f652639);
    }
    ___cxa_end_catch();
  } while( true );
  FUN_10a3978e8(unaff_x19);
  ___cxa_rethrow();
  goto LAB_10a39b984;
}



/* Entry: 10a39b9d8; end: 10a39bcdf;  */

void FUN_10a39b9d8(undefined1 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined1 auStack_190 [56];
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined1 *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  byte bStack_118;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(param_1 + 0x170) + 0xd70) == '\x01') {
    puVar7 = param_1;
    FUN_10a3c5cc8();
    cVar4 = puVar7[0xef];
    puVar3 = *(undefined8 **)(puVar7 + 0xd8);
    if (-1 < (long)cVar4) {
      puVar3 = (undefined8 *)(puVar7 + 0xd8);
    }
    lVar10 = *(long *)(puVar7 + 0xe0);
    if (-1 < cVar4) {
      lVar10 = (long)cVar4;
    }
    FUN_10a3a7ab8(auStack_190,puVar3,lVar10);
    FUN_10a39bce0(param_1 + 0x290);
    lVar10 = 0;
    lVar8 = *(long *)(param_1 + 0x170);
    uStack_110 = *(undefined8 *)(lVar8 + 0xd88);
    auStack_108[0] = 0x400;
    uStack_100 = *(undefined8 *)(lVar8 + 0xd98);
    uStack_f8 = 0x800;
    uStack_f0 = *(undefined8 *)(lVar8 + 0xda8);
    uStack_e8 = 0x1000;
    uStack_e0 = *(undefined8 *)(lVar8 + 0xdb8);
    uStack_d8 = 0x2000;
    uStack_d0 = *(undefined8 *)(lVar8 + 0xdc8);
    uStack_c8 = 0x4000;
    uStack_c0 = *(undefined8 *)(lVar8 + 0xdd8);
    uStack_b8 = 0x8000;
    uStack_b0 = *(undefined8 *)(lVar8 + 0xde8);
    uStack_a8 = 0x10000;
    uStack_a0 = *(undefined8 *)(lVar8 + 0xdf8);
    uStack_98 = 0x20000;
    uStack_90 = *(undefined8 *)(lVar8 + 0xe08);
    uStack_88 = 0x40000;
    uStack_80 = *(undefined8 *)(lVar8 + 0xe18);
    uStack_78 = 0x80000;
    do {
      uVar9 = *(undefined8 *)((long)auStack_108 + lVar10 + -8);
      pcStack_158 = FUN_10a3b98c8;
      ppuStack_150 = &PTR_DAT_110bcf280;
      plStack_140 = (long *)CONCAT44(plStack_140._4_4_,*(undefined4 *)((long)auStack_108 + lVar10));
      bStack_118 = 1;
      puStack_148 = param_1;
      FUN_10a07ca84(&puStack_1a0,uVar9,&pcStack_158);
      if (3 < (ulong)bStack_118) goto LAB_10a39bcdc;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_118])(&pcStack_158);
      if (plStack_198 != (long *)0x0) {
        plVar1 = plStack_198 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcStack_158 = FUN_10a3b9920;
      ppuStack_150 = &PTR_FUN_110bcf2a0;
      plStack_140 = plStack_198;
      puStack_148 = puStack_1a0;
      uStack_138 = uVar9;
      func_0x00010a39bd3c(param_1 + 0x290,&pcStack_158);
      FUN_10a044790(&pcStack_158);
      (*(code *)*ppuStack_150)(&ppuStack_150);
      plVar1 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar2 = plStack_198 + 1;
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
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0xa0);
    if (0x91 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
      FUN_10a39a558(param_1);
    }
    param_1 = auStack_190;
    FUN_10a3b78c4(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a3b78c4(auStack_190);
  __Unwind_Resume(param_1);
LAB_10a39bcdc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39bce0);
  (*pcVar6)();
}



/* Entry: 10a39bce0; end: 10a39bdd3;  */

void FUN_10a39bce0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    FUN_10a044790(lVar2 + -0x40);
    (*(code *)**(undefined8 **)(lVar2 + -0x38))();
    lVar2 = lVar2 + -0x40;
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a39bdd4; end: 10a39bddb;  */

void FUN_10a39bdd4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined1 auStack_190 [56];
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined1 *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  byte bStack_118;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  puVar8 = (undefined1 *)(param_1 + -0x68);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(param_1 + 0x108) + 0xd70) == '\x01') {
    puVar7 = puVar8;
    FUN_10a3c5cc8();
    cVar4 = puVar7[0xef];
    puVar3 = *(undefined8 **)(puVar7 + 0xd8);
    if (-1 < (long)cVar4) {
      puVar3 = (undefined8 *)(puVar7 + 0xd8);
    }
    lVar11 = *(long *)(puVar7 + 0xe0);
    if (-1 < cVar4) {
      lVar11 = (long)cVar4;
    }
    FUN_10a3a7ab8(auStack_190,puVar3,lVar11);
    FUN_10a39bce0(param_1 + 0x228);
    lVar11 = 0;
    lVar9 = *(long *)(param_1 + 0x108);
    uStack_110 = *(undefined8 *)(lVar9 + 0xd88);
    auStack_108[0] = 0x400;
    uStack_100 = *(undefined8 *)(lVar9 + 0xd98);
    uStack_f8 = 0x800;
    uStack_f0 = *(undefined8 *)(lVar9 + 0xda8);
    uStack_e8 = 0x1000;
    uStack_e0 = *(undefined8 *)(lVar9 + 0xdb8);
    uStack_d8 = 0x2000;
    uStack_d0 = *(undefined8 *)(lVar9 + 0xdc8);
    uStack_c8 = 0x4000;
    uStack_c0 = *(undefined8 *)(lVar9 + 0xdd8);
    uStack_b8 = 0x8000;
    uStack_b0 = *(undefined8 *)(lVar9 + 0xde8);
    uStack_a8 = 0x10000;
    uStack_a0 = *(undefined8 *)(lVar9 + 0xdf8);
    uStack_98 = 0x20000;
    uStack_90 = *(undefined8 *)(lVar9 + 0xe08);
    uStack_88 = 0x40000;
    uStack_80 = *(undefined8 *)(lVar9 + 0xe18);
    uStack_78 = 0x80000;
    do {
      uVar10 = *(undefined8 *)((long)auStack_108 + lVar11 + -8);
      pcStack_158 = FUN_10a3b98c8;
      ppuStack_150 = &PTR_DAT_110bcf280;
      plStack_140 = (long *)CONCAT44(plStack_140._4_4_,*(undefined4 *)((long)auStack_108 + lVar11));
      bStack_118 = 1;
      puStack_148 = puVar8;
      FUN_10a07ca84(&puStack_1a0,uVar10,&pcStack_158);
      if (3 < (ulong)bStack_118) goto LAB_10a39bcdc;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_118])(&pcStack_158);
      if (plStack_198 != (long *)0x0) {
        plVar1 = plStack_198 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pcStack_158 = FUN_10a3b9920;
      ppuStack_150 = &PTR_FUN_110bcf2a0;
      plStack_140 = plStack_198;
      puStack_148 = puStack_1a0;
      uStack_138 = uVar10;
      func_0x00010a39bd3c(param_1 + 0x228,&pcStack_158);
      FUN_10a044790(&pcStack_158);
      (*(code *)*ppuStack_150)(&ppuStack_150);
      plVar1 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar2 = plStack_198 + 1;
        do {
          lVar9 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0xa0);
    if (0x91 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) {
      FUN_10a39a558(puVar8);
    }
    puVar8 = auStack_190;
    FUN_10a3b78c4(puVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a3b78c4(auStack_190);
  __Unwind_Resume(puVar8);
LAB_10a39bcdc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39bce0);
  (*pcVar6)();
}



/* Entry: 10a39bddc; end: 10a39be2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3976a0) */

void FUN_10a39bddc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x92) &&
     (*(int *)(param_1 + 0x2a8) < 4)) {
    FUN_10a39a558(param_1);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 4;
  lVar5 = param_1;
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if (3 < *(int *)(param_1 + 0x2a8)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x218);
    puVar11 = *(undefined8 **)(param_1 + 0x220);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x2f8);
    lVar6 = *(long *)(param_1 + 0x2f0);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & 0x100) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x2f8);
          lVar6 = *(long *)(param_1 + 0x2f0);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & 0x100) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a39be30; end: 10a39be37;  */

/* WARNING: Removing unreachable block (ram,0x00010a3976a0) */

void FUN_10a39be30(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_1 + -0x68;
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0x92) &&
     (*(int *)(param_1 + 0x240) < 4)) {
    FUN_10a39a558(lVar5);
  }
  *(undefined4 *)(param_1 + 0x240) = 4;
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if (3 < *(int *)(param_1 + 0x240)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x1b0);
    puVar11 = *(undefined8 **)(param_1 + 0x1b8);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x290);
    lVar6 = *(long *)(param_1 + 0x288);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & 0x100) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x290);
          lVar6 = *(long *)(param_1 + 0x288);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & 0x100) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a39be38; end: 10a39bfc3;  */

void FUN_10a39be38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar3 = *param_2;
  func_0x000109884c0c(&puStack_58,param_2 + 1,uVar3);
  plVar4 = (long *)*param_2;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0xb8))(&puStack_60,plVar4,puVar2,uVar1);
  (**(code **)(*plVar4 + 0x1a0))(aiStack_50,plVar4,&puStack_58,&puStack_60);
  *param_1 = uVar3;
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



/* Entry: 10a39bfc4; end: 10a39c057;  */

void FUN_10a39bfc4(undefined8 *param_1,long *param_2)

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



/* Entry: 10a39c058; end: 10a39c0eb;  */

void FUN_10a39c058(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3b95d8(aiStack_30,*param_1,param_3);
  FUN_10a3b6bb0(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a39c0ec; end: 10a39c0ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a3976a0) */

void FUN_10a39c0ec(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_1;
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if (3 < *(int *)(param_1 + 0x2a8)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x218);
    puVar11 = *(undefined8 **)(param_1 + 0x220);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x2f8);
    lVar6 = *(long *)(param_1 + 0x2f0);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & 0x40) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x2f8);
          lVar6 = *(long *)(param_1 + 0x2f0);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & 0x40) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a39c100; end: 10a39c32f;  */

void FUN_10a39c100(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x21;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(param_1[0x2e] + 0xd72) & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_1053a6a3c;
      *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110ae9180;
      FUN_10a397630(param_1,0x200);
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
                ((undefined1 *)((long)register0x00000008 + -0x70));
    }
    *(undefined4 *)(param_1 + 0x55) = 0;
    FUN_10a39a040(param_1 + 0x3f);
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x00010a04a7fc(param_1 + 3,(undefined1 *)((long)register0x00000008 + -0x78));
    plVar5 = *(long **)((long)register0x00000008 + -0x70);
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
    puVar8 = (undefined8 *)param_1[0x43];
    puVar6 = (undefined8 *)param_1[0x44];
    if (puVar8 != puVar6) {
      do {
        puVar9 = puVar8 + 2;
        (**(code **)(*(long *)*puVar8 + 0x60))();
        puVar8 = puVar9;
      } while (puVar9 != puVar6);
      puVar6 = (undefined8 *)param_1[0x44];
      puVar8 = (undefined8 *)param_1[0x43];
    }
    while (puVar6 != puVar8) {
      puVar6 = puVar6 + -2;
      func_0x00010a3b7784(puVar6);
    }
    param_1[0x44] = (long)puVar8;
    func_0x00010a3b6a84(param_1 + 0x46);
    lVar4 = param_1[0x59];
    lVar7 = param_1[0x58];
    while (lVar4 != lVar7) {
      lVar4 = lVar4 + -0x10;
      FUN_10a3b772c();
    }
    param_1[0x59] = lVar7;
    unaff_x20 = param_1 + 0x5b;
    unaff_x21 = param_1[0x5b];
    unaff_x22 = param_1[0x5c];
    if (unaff_x21 != unaff_x22) {
      do {
        if (*(long **)(unaff_x21 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x60))();
        }
        unaff_x21 = unaff_x21 + 0x20;
      } while (unaff_x21 != unaff_x22);
      unaff_x21 = *unaff_x20;
    }
    unaff_x19 = unaff_x20;
    FUN_10a3a835c(unaff_x20,unaff_x21);
    param_1[0x5f] = param_1[0x5e];
    if (param_1[0x4e] != 0) {
      unaff_x20 = param_1 + 0x4b;
      unaff_x19 = unaff_x20;
      func_0x00010a3b784c(unaff_x20,param_1[0x4d]);
      param_1[0x4d] = 0;
      lVar4 = param_1[0x4c];
      if (lVar4 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*unaff_x20 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      param_1[0x4e] = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))(unaff_x20 + 1);
    unaff_x30 = FUN_10a39c330;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a39c330; end: 10a39c3ab;  */

void FUN_10a39c330(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(param_1[0x21] + 0xd72) & 1) == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_1053a6a3c;
      *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110ae9180;
      FUN_10a397630(param_1 + -0xd,0x200);
      FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
                ((undefined1 *)((long)register0x00000008 + -0x70));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_10a39a040(param_1 + 0x32);
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x00010a04a7fc(param_1 + -10,(undefined1 *)((long)register0x00000008 + -0x78));
    plVar5 = *(long **)((long)register0x00000008 + -0x70);
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
    puVar8 = (undefined8 *)param_1[0x36];
    puVar6 = (undefined8 *)param_1[0x37];
    if (puVar8 != puVar6) {
      do {
        puVar9 = puVar8 + 2;
        (**(code **)(*(long *)*puVar8 + 0x60))();
        puVar8 = puVar9;
      } while (puVar9 != puVar6);
      puVar6 = (undefined8 *)param_1[0x37];
      puVar8 = (undefined8 *)param_1[0x36];
    }
    while (puVar6 != puVar8) {
      puVar6 = puVar6 + -2;
      func_0x00010a3b7784(puVar6);
    }
    param_1[0x37] = (long)puVar8;
    func_0x00010a3b6a84(param_1 + 0x39);
    lVar4 = param_1[0x4c];
    lVar7 = param_1[0x4b];
    while (lVar4 != lVar7) {
      lVar4 = lVar4 + -0x10;
      FUN_10a3b772c();
    }
    param_1[0x4c] = lVar7;
    unaff_x20 = param_1 + 0x4e;
    unaff_x21 = param_1[0x4e];
    unaff_x22 = param_1[0x4f];
    if (unaff_x21 != unaff_x22) {
      do {
        if (*(long **)(unaff_x21 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x60))();
        }
        unaff_x21 = unaff_x21 + 0x20;
      } while (unaff_x21 != unaff_x22);
      unaff_x21 = *unaff_x20;
    }
    unaff_x19 = unaff_x20;
    FUN_10a3a835c(unaff_x20,unaff_x21);
    param_1[0x52] = param_1[0x51];
    if (param_1[0x41] != 0) {
      unaff_x20 = param_1 + 0x3e;
      unaff_x19 = unaff_x20;
      func_0x00010a3b784c(unaff_x20,param_1[0x40]);
      param_1[0x40] = 0;
      lVar4 = param_1[0x3f];
      if (lVar4 != 0) {
        lVar7 = 0;
        do {
          *(undefined8 *)(*unaff_x20 + lVar7 * 8) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      param_1[0x41] = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))(unaff_x20 + 1);
    unaff_x30 = FUN_10a39c330;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a39c3ac; end: 10a39c4b7;  */

void FUN_10a39c3ac(undefined1 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(undefined **)((long)register0x00000008 + -0x78) = &UNK_1053a6a3c;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110ae9180;
    unaff_x22 = *(undefined8 **)(param_1 + 0x220);
    for (unaff_x21 = *(undefined8 **)(param_1 + 0x218); unaff_x21 != unaff_x22;
        unaff_x21 = unaff_x21 + 2) {
      (**(code **)(*(long *)*unaff_x21 + 0x78))();
    }
    FUN_10a397630(param_1,0x20);
    if (0x91 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
      FUN_10a39a558(param_1);
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    unaff_x30 = FUN_10a39c4b8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x68;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a39c4b8; end: 10a39c4bf;  */

void FUN_10a39c4b8(undefined1 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(undefined **)((long)register0x00000008 + -0x78) = &UNK_1053a6a3c;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110ae9180;
    unaff_x22 = *(undefined8 **)(param_1 + 0x1b8);
    for (unaff_x21 = *(undefined8 **)(param_1 + 0x1b0); unaff_x21 != unaff_x22;
        unaff_x21 = unaff_x21 + 2) {
      (**(code **)(*(long *)*unaff_x21 + 0x78))();
    }
    FUN_10a397630(param_1 + -0x68,0x20);
    if (0x91 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) {
      FUN_10a39a558(param_1 + -0x68);
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    unaff_x30 = FUN_10a39c4b8;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a39c4c0; end: 10a39c57b;  */

void FUN_10a39c4c0(undefined1 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_1053a6a3c;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110ae9180;
    FUN_10a397630(param_1,0x10);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    unaff_x30 = FUN_10a39c57c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x68;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10a39c57c; end: 10a39c583;  */

void FUN_10a39c57c(undefined1 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined **)((long)register0x00000008 + -0x68) = &UNK_1053a6a3c;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110ae9180;
    FUN_10a397630(param_1 + -0x68,0x10);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x60);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x68));
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))
              ((undefined1 *)((long)register0x00000008 + -0x60));
    unaff_x30 = FUN_10a39c57c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10a39c584; end: 10a39c5c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a3976a0) */

void FUN_10a39c584(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  if ((*(byte *)(param_1 + 0x308) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x308) = 1;
    FUN_10a397630(param_1,1);
  }
  lVar5 = param_1;
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if (3 < *(int *)(param_1 + 0x2a8)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x218);
    puVar11 = *(undefined8 **)(param_1 + 0x220);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x2f8);
    lVar6 = *(long *)(param_1 + 0x2f0);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & 8) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x2f8);
          lVar6 = *(long *)(param_1 + 0x2f0);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & 8) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a39c5c4; end: 10a39c5df;  */

/* WARNING: Removing unreachable block (ram,0x00010a3976a0) */

void FUN_10a39c5c4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [56];
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  
  lVar5 = param_1 + -0x68;
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2a0) = 1;
    FUN_10a397630(lVar5,1);
  }
  FUN_10a3c5cc8();
  cVar1 = *(char *)(lVar5 + 0x107);
  plVar8 = (long *)*(long *)(lVar5 + 0xf0);
  if (-1 < (long)cVar1) {
    plVar8 = (long *)(lVar5 + 0xf0);
  }
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (-1 < cVar1) {
    lVar5 = (long)cVar1;
  }
  FUN_10a3a7ab8(auStack_98,plVar8);
  if (3 < *(int *)(param_1 + 0x240)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x870);
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_1 + 0x1b0);
    puVar11 = *(undefined8 **)(param_1 + 0x1b8);
    ppuStack_60 = &puStack_b0;
    uStack_58 = 0;
    lVar6 = (long)puVar11 - (long)puVar9;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 >> 4);
      if ((ulong)puVar4 >> 0x3c != 0) {
        FUN_10a3a826c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3978c8);
        (*pcVar3)();
      }
      FUN_10a3a8280();
      puStack_a0 = puVar4 + lVar5 * 2;
      puStack_a8 = puVar4;
      do {
        lVar5 = puVar9[1];
        uVar12 = *puVar9;
        puStack_a8[1] = puVar9[1];
        *puStack_a8 = uVar12;
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar9 = puVar9 + 2;
        puStack_a8 = puStack_a8 + 2;
        puStack_b0 = puVar4;
      } while (puVar9 != puVar11);
    }
    lVar5 = *(long *)(param_1 + 0x290);
    lVar6 = *(long *)(param_1 + 0x288);
    puVar9 = puStack_b0;
    puVar11 = puStack_a8;
    if (lVar5 != lVar6) {
      uVar10 = 0;
      do {
        plVar8 = *(long **)(lVar6 + uVar10 * 8);
        if ((*(uint *)(plVar8 + 0xb) & 8) != 0) {
          *(undefined1 *)(plVar8 + 10) = 1;
          (**(code **)(*plVar8 + 0x80))(plVar8);
          *(undefined1 *)(plVar8 + 10) = 0;
          lVar5 = *(long *)(param_1 + 0x290);
          lVar6 = *(long *)(param_1 + 0x288);
        }
        uVar10 = uVar10 + 1;
        puVar9 = puStack_b0;
        puVar11 = puStack_a8;
      } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
    }
    for (; puVar4 = puStack_a8, puVar9 != puStack_a8; puVar9 = puVar9 + 2) {
      plVar8 = (long *)*puVar9;
      puStack_a8 = puVar11;
      if ((*(uint *)(plVar8 + 0xb) & 8) != 0) {
        *(undefined1 *)(plVar8 + 10) = 1;
        (**(code **)(*plVar8 + 0x80))(plVar8);
        *(undefined1 *)(plVar8 + 10) = 0;
      }
      puVar11 = puStack_a8;
      puStack_a8 = puVar4;
    }
    puStack_a8 = puVar11;
    FUN_10a462340(uVar7);
    ppuStack_60 = &puStack_b0;
    FUN_10a3a7a48(&ppuStack_60);
  }
  FUN_10a3b78c4(auStack_98);
  return;
}



/* Entry: 10a39c5e0; end: 10a39c653;  */

void FUN_10a39c5e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *(long *)(param_2 + 0x2e0);
  for (lVar1 = *(long *)(param_2 + 0x2d8); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_10a399174(param_1,lVar1 + 0x10);
  }
  return;
}



/* Entry: 10a39c654; end: 10a39c6b7;  */

undefined8 * FUN_10a39c654(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a39c6b8; end: 10a39c74f;  */

void FUN_10a39c6b8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a398cb0(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a39c750; end: 10a39c8bf;  */

undefined8 FUN_10a39c750(void)

{
  return 1;
}



/* Entry: 10a39c8c0; end: 10a39cba7;  */

void FUN_10a39c8c0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652b5a,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcf920;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcf920;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39cb88;
    FUN_10a054dac(param_1,&UNK_10f6526d2,FUN_10a3b9d10,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39cb88;
    FUN_10a054dac(param_1,&UNK_10f6526de,FUN_10a3b9ec8,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39cb88;
    FUN_10a054dac(param_1,&UNK_10f6526ef,FUN_10a3ba0f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39cb88;
    FUN_10a054dac(param_1,&UNK_10f652700,FUN_10a3ba1fc,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652b5a,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a39cb88:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39cb8c);
  (*pcVar6)();
}



/* Entry: 10a39cba8; end: 10a39cc1b;  */

void FUN_10a39cba8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x208));
  plVar1 = (long *)(param_2 + 0x200);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_10a0b4ec0(param_1,plVar1 + 2);
  }
  return;
}



/* Entry: 10a39cc1c; end: 10a39cd13;  */

void FUN_10a39cc1c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  FUN_10a0d09b4(auStack_50);
  lVar5 = param_2 + 0x1f0;
  FUN_10a3ba894(lVar5,uStack_38);
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a0d09b4(auStack_70,param_3);
    param_2 = param_2 + 0x1f0;
    FUN_10a3ba894(param_2,uStack_58);
    if (param_2 == 0) {
      FUN_109ffdddc(&UNK_10f639994);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a39cce0);
      (*pcVar4)();
    }
    lVar5 = *(long *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 10a39cd14; end: 10a39cf4b;  */

void FUN_10a39cd14(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  FUN_10a3ba840(param_1 + 0x1f0);
  ppuVar3 = &PTR_DAT_110bcae10;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar4 != 0) {
    ppuVar3 = &PTR_DAT_110bcae10;
    (**(code **)(*param_2 + 0x210))(param_2);
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar4 != 0) {
      iVar6 = 0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar6);
        (**(code **)(*param_2 + 0xa0))(&uStack_c0,param_2,&PTR_DAT_110bcec08);
        if (cStack_a9 < '\0') {
          func_0x000107c3192c(&uStack_d8,uStack_c0,uStack_b8);
        }
        else {
          uStack_d0 = uStack_b8;
          uStack_d8 = uStack_c0;
          lStack_c8 = CONCAT17(cStack_a9,uStack_b0);
        }
        pcStack_a8 = FUN_10a3ba930;
        ppuStack_a0 = &PTR_FUN_110bcf330;
        uStack_88 = uStack_d0;
        uStack_90 = uStack_d8;
        lStack_80 = lStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        lStack_c8 = 0;
        ppuVar3 = &PTR_DAT_110bcec68;
        lStack_98 = param_1;
        FUN_10a2cd220(param_2,&PTR_DAT_110bcec68,&pcStack_a8,0);
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        if (lStack_c8 < 0) {
          __ZdlPv(uStack_d8);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        if (cStack_a9 < '\0') {
          __ZdlPv(uStack_c0);
        }
        iVar6 = iVar6 + 1;
      } while ((int)plVar4 != iVar6);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  __Unwind_Resume();
  func_0x00010a3c7928();
  plVar5 = (long *)(plVar4[0x41] << 3);
  if ((ulong)plVar4[0x41] >> 0x3d != 0) {
    plVar5 = (long *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  plVar2 = plVar5;
  for (plVar4 = (long *)plVar4[0x40]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    *plVar2 = (long)(plVar4 + 2);
    plVar2 = plVar2 + 1;
  }
  lVar1 = 0;
  if (plVar2 != plVar5) {
    lVar1 = LZCOUNT((long)plVar2 - (long)plVar5 >> 3) * -2 + 0x7e;
  }
  FUN_10a3a95c4(plVar5,plVar2,lVar1,1);
  (**(code **)(*ppuVar3 + 0x18))(ppuVar3,&PTR_DAT_110bcae10);
  for (plVar4 = plVar5; plVar2 != plVar4; plVar4 = plVar4 + 1) {
    (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
    FUN_10a00d760(ppuVar3,&PTR_DAT_110bcec08,*plVar4);
    FUN_10a2cd49c(ppuVar3,&PTR_DAT_110bcec68,*plVar4 + 0x20,&UNK_10f64c61b,0xb);
    (**(code **)(*ppuVar3 + 0x20))(ppuVar3);
  }
  (**(code **)(*ppuVar3 + 0x20))(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(plVar5);
  return;
}



/* Entry: 10a39cf4c; end: 10a39d0b7;  */

void FUN_10a39cf4c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_10a3c7928();
  plVar4 = (long *)(*(ulong *)(param_1 + 0x208) << 3);
  if (*(ulong *)(param_1 + 0x208) >> 0x3d != 0) {
    plVar4 = (long *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  plVar2 = plVar4;
  for (plVar3 = *(long **)(param_1 + 0x200); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    *plVar2 = (long)(plVar3 + 2);
    plVar2 = plVar2 + 1;
  }
  lVar1 = 0;
  if (plVar2 != plVar4) {
    lVar1 = LZCOUNT((long)plVar2 - (long)plVar4 >> 3) * -2 + 0x7e;
  }
  FUN_10a3a95c4(plVar4,plVar2,lVar1,1);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bcae10);
  for (plVar3 = plVar4; plVar2 != plVar3; plVar3 = plVar3 + 1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110bcec08,*plVar3);
    FUN_10a2cd49c(param_2,&PTR_DAT_110bcec68,*plVar3 + 0x20,&UNK_10f64c61b,0xb);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(plVar4);
  return;
}



/* Entry: 10a39d0b8; end: 10a39d16b;  */

long FUN_10a39d0b8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  if (param_2 - param_1 != 0) {
    lVar4 = 0;
    do {
      plVar7 = (long *)(param_1 + lVar4 * 0x30);
      piVar2 = (int *)*plVar7;
      piVar3 = (int *)plVar7[1];
      uVar8 = (long)piVar3 - (long)piVar2 >> 2;
      if (param_4 == 0) {
        lVar10 = 0;
      }
      else {
        iVar9 = 0;
        lVar10 = 0;
        uVar1 = uVar8;
        if (uVar8 < 2) {
          uVar1 = 1;
        }
        do {
          if (piVar3 != piVar2) {
            uVar5 = uVar1;
            piVar6 = piVar2;
            do {
              if (*(int *)(param_3 + lVar10 * 4) == *piVar6) {
                iVar9 = iVar9 + 1;
                break;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 1;
            } while (uVar5 != 0);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != param_4);
        lVar10 = (long)iVar9;
      }
      if ((uVar8 + param_4) - lVar10 <= param_5) {
        return lVar4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (param_2 - param_1 >> 4) * -0x5555555555555555);
  }
  return 0xffffffff;
}



/* Entry: 10a39d16c; end: 10a39dee3;  */

void FUN_10a39d16c(long *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  int *piVar1;
  undefined8 *****pppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *****pppppuVar15;
  code *pcVar16;
  undefined8 *****pppppuVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  ushort *puVar30;
  ulong uVar31;
  ulong uVar32;
  float *pfVar33;
  int *piVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 ****ppppuVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  long lVar41;
  undefined8 *****pppppuVar42;
  long *plVar43;
  int iVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulong uStack_198;
  ulong uStack_168;
  long lStack_160;
  int iStack_140;
  undefined1 auStack_13c [4];
  undefined1 auStack_138 [8];
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint auStack_9c [3];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_2 + 0xec) == 0) {
    uVar9 = *(uint *)(param_2 + 0x130);
    if (uVar9 == 0xffffffff) {
LAB_10a39ddf0:
      FUN_10a00946c(&UNK_10f652735);
    }
    else {
      lVar41 = *(long *)(param_2 + 0xf8);
      uVar27 = (*(long *)(param_2 + 0x100) - lVar41 >> 3) * 0x6db6db6db6db6db7;
      if (uVar27 < uVar9 || uVar27 - uVar9 == 0) goto LAB_10a39de18;
      if (((lVar41 == 0) || (lVar41 = lVar41 + (ulong)uVar9 * 0x38, *(int *)(lVar41 + 0x24) != 5))
         || (*(int *)(lVar41 + 0x28) != 4)) goto LAB_10a39ddf0;
      iVar10 = *(int *)(param_2 + 0xe8);
      lVar20 = *(long *)(param_2 + 0x28);
      FUN_10a0d0194(param_1,&uStack_d0);
      lVar21 = *param_1;
      *(undefined8 *)(lVar21 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
      FUN_10a177570(lVar21 + 0xf0,param_2 + 0xf0);
      lVar21 = *param_1;
      uVar24 = *(undefined8 *)(param_2 + 0x138);
      *(undefined4 *)(lVar21 + 0x140) = *(undefined4 *)(param_2 + 0x140);
      *(undefined8 *)(lVar21 + 0x138) = uVar24;
      lVar21 = *param_1;
      uVar24 = *(undefined8 *)(param_2 + 0x144);
      *(undefined4 *)(lVar21 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
      *(undefined8 *)(lVar21 + 0x144) = uVar24;
      lVar21 = *param_1;
      if (lVar21 != param_2) {
        FUN_10a3aa41c(lVar21 + 0x40,*(long *)(param_2 + 0x40),*(long *)(param_2 + 0x48),
                      (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) *
                      -0x71c71c71c71c71c7);
        lVar21 = *param_1;
      }
      if (lVar21 != param_2) {
        FUN_10a0d8644(lVar21 + 0x58,*(long *)(param_2 + 0x58),*(long *)(param_2 + 0x60),
                      (*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 5) *
                      -0x5555555555555555);
      }
      ppppuStack_e8 = (undefined8 *****)0x0;
      ppppuStack_e0 = (undefined8 *****)0x0;
      ppppuStack_d8 = (undefined8 *****)0x0;
      uVar9 = *(int *)(lVar41 + 0x24) - 1;
      if (uVar9 < 7) {
        iVar18 = *(int *)(&UNK_10e4b1768 + (ulong)uVar9 * 4);
      }
      else {
        iVar18 = 0;
      }
      uVar27 = CONCAT44(0,*(uint *)(param_2 + 0xf0));
      if (*(int *)(lVar41 + 0x28) * iVar18 == 0x10) {
        lStack_160 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(lVar41 + 0x30);
        uStack_168 = uVar27;
      }
      else {
        uStack_168 = 0;
        lStack_160 = 0;
      }
      lVar21 = 1;
      if (iVar10 != 1) {
        lVar21 = 2;
      }
      if (*(uint *)(param_2 + 0xf0) != 0) {
        uVar39 = (ulong)(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28)) >> lVar21;
        uVar22 = uVar39 / 3;
        uVar31 = uVar22 * 3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar31;
        if ((SUB168(auVar13 * auVar14,8) == 0) && (uVar39 < 0xaaaaaaaaaaaaaad)) {
          lVar21 = *(long *)(param_2 + 0x10);
          lVar38 = *(long *)(param_2 + 0x18);
          lVar23 = *param_1;
          lVar25 = *(long *)(lVar23 + 0x10);
          uVar28 = uVar31 * uVar27;
          uVar32 = *(long *)(lVar23 + 0x18) - lVar25;
          if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
            if (uVar28 < uVar32) {
              *(ulong *)(lVar23 + 0x18) = lVar25 + uVar28;
            }
          }
          else {
            func_0x000107c27d58((long *)(lVar23 + 0x10),uVar28 - uVar32);
            lVar23 = *param_1;
          }
          lVar25 = *(long *)(lVar23 + 0x40);
          lVar23 = *(long *)(lVar23 + 0x48);
          FUN_10a0dc020(&uStack_d0,uVar22 * 0x48);
          FUN_10a3aa840(&lStack_100,(lVar23 - lVar25 >> 3) * -0x71c71c71c71c71c7,&uStack_d0);
          if (uStack_d0 != (undefined8 *****)0x0) {
            uStack_c8 = uStack_d0;
            __ZdlPv();
          }
          if (param_4 != (long *)0x0) {
            func_0x0001074287b0(param_4,uVar31);
          }
          if (2 < uVar39) {
            uStack_198 = 0;
            pppppuVar2 = (undefined8 *****)(auStack_13c + 4);
            pppppuVar15 = (undefined8 *****)(auStack_13c + 8);
            uVar9 = 0;
            if (uVar27 != 0) {
              uVar9 = (uint)((ulong)(lVar38 - lVar21) / uVar27);
            }
            do {
              if (iVar10 == 1 && lVar20 != 0) {
                puVar30 = (ushort *)(lVar20 + uStack_198 * 6);
                auStack_9c[0] = (uint)*puVar30;
                auStack_9c[1] = (uint)puVar30[1];
                auStack_9c[2] = (uint)puVar30[2];
              }
              else {
                puVar29 = (uint *)(lVar20 + uStack_198 * 0xc);
                auStack_9c[0] = *puVar29;
                auStack_9c[1] = puVar29[1];
                auStack_9c[2] = puVar29[2];
              }
              if ((uVar9 <= auStack_9c[0] || uVar9 <= auStack_9c[1]) || uVar9 <= auStack_9c[2])
              goto LAB_10a39de1c;
              uVar39 = 0;
              lVar21 = 0;
              do {
                iVar18 = 0;
                pfVar33 = (float *)(lStack_160 + uStack_168 * auStack_9c[lVar21]);
                fVar45 = *pfVar33;
                fVar47 = pfVar33[1];
                fVar48 = pfVar33[2];
                fVar49 = pfVar33[3];
                do {
                  fVar50 = fVar45;
                  if (iVar18 == 1) {
                    fVar50 = fVar47;
                  }
                  fVar51 = fVar48;
                  if (iVar18 != 2) {
                    fVar51 = fVar50;
                  }
                  fVar50 = fVar49;
                  if (iVar18 != 3) {
                    fVar50 = fVar51;
                  }
                  if (fVar50 != 0.0) {
                    fVar50 = fVar49;
                    if (((iVar18 != 3) && (fVar50 = fVar48, iVar18 != 2)) &&
                       (fVar50 = fVar45, iVar18 == 1)) {
                      fVar50 = fVar47;
                    }
                    uVar19 = (uint)uVar39;
                    if (0xc < uVar19) goto LAB_10a39de34;
                    piVar34 = (int *)&uStack_d0;
                    piVar1 = piVar34 + uVar39;
                    if (uVar19 == 0) {
LAB_10a39d618:
                      if (piVar34 != piVar1) goto LAB_10a39d628;
                    }
                    else {
                      lVar38 = uVar39 << 2;
                      piVar34 = (int *)&uStack_d0;
                      do {
                        if (*piVar34 == (int)fVar50) goto LAB_10a39d618;
                        piVar34 = piVar34 + 1;
                        lVar38 = lVar38 + -4;
                      } while (lVar38 != 0);
                    }
                    *piVar1 = (int)fVar50;
                    uVar39 = (ulong)(uVar19 + 1);
                  }
LAB_10a39d628:
                  iVar18 = iVar18 + 1;
                } while (iVar18 != 4);
                lVar21 = lVar21 + 1;
              } while (lVar21 != 3);
              lVar21 = *param_1;
              plVar43 = (long *)param_1[1];
              if (plVar43 == (long *)0x0) {
                uVar24 = *(undefined8 *)(lVar21 + 0x88);
                FUN_10a39d0b8(uVar24,*(undefined8 *)(lVar21 + 0x90),&uStack_d0,(long)(int)uVar39,
                              param_3);
                iVar18 = (int)uVar24;
              }
              else {
                plVar36 = plVar43 + 1;
                do {
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar12) {
                    *plVar36 = *plVar36 + 1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                uVar24 = *(undefined8 *)(lVar21 + 0x88);
                FUN_10a39d0b8(uVar24,*(undefined8 *)(lVar21 + 0x90),&uStack_d0,(long)(int)uVar39,
                              param_3);
                iVar18 = (int)uVar24;
                do {
                  lVar21 = *plVar36;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar12) {
                    *plVar36 = lVar21 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (lVar21 == 0) {
                  (**(code **)(*plVar43 + 0x10))(plVar43);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar43);
                }
              }
              if (iVar18 == -1) {
                if (ppppuStack_e0 < ppppuStack_d8) {
                  pppppuVar26 = (undefined8 *****)(ppppuStack_e0 + 3);
                  *ppppuStack_e0 = (undefined8 ****)0x0;
                  ppppuStack_e0[1] = (undefined8 ****)0x0;
                  ppppuStack_e0[2] = (undefined8 ****)0x0;
                }
                else {
                  lVar21 = (long)ppppuStack_e0 - (long)ppppuStack_e8;
                  uVar39 = (lVar21 >> 3) * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar39) goto LAB_10a39de30;
                  lVar38 = (long)ppppuStack_d8 - (long)ppppuStack_e8 >> 3;
                  uVar28 = lVar38 * 0x5555555555555556;
                  if (uVar28 < uVar39 || uVar28 - uVar39 == 0) {
                    uVar28 = uVar39;
                  }
                  if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                    uVar28 = 0xaaaaaaaaaaaaaaa;
                  }
                  ppppuStack_110 = &ppppuStack_e8;
                  if (uVar28 == 0) {
                    pppppuVar17 = (undefined8 *****)0x0;
                  }
                  else {
                    pppppuVar17 = &ppppuStack_e8;
                    FUN_10a3aa908();
                  }
                  puVar3 = (undefined8 *)((long)pppppuVar17 + lVar21);
                  pppppuVar26 = (undefined8 *****)(puVar3 + 3);
                  *puVar3 = 0;
                  puVar3[1] = 0;
                  puVar3[2] = 0;
                  pppppuVar42 = (undefined8 *****)
                                ((long)puVar3 - ((long)ppppuStack_e0 - (long)ppppuStack_e8));
                  _memcpy(pppppuVar42);
                  ppppuStack_120 = ppppuStack_e8;
                  ppppuStack_118 = ppppuStack_d8;
                  ppppuStack_130 = ppppuStack_e8;
                  ppppuStack_128 = ppppuStack_e8;
                  ppppuStack_e8 = pppppuVar42;
                  ppppuStack_e0 = pppppuVar26;
                  ppppuStack_d8 = pppppuVar17 + uVar28 * 3;
                  func_0x00010937ce88(&ppppuStack_130);
                }
                ppppuStack_118 = (undefined8 ****)0x0;
                ppppuStack_120 = (undefined8 ****)0x0;
                uStack_108 = 0;
                ppppuStack_110 = (undefined8 ****)0x0;
                ppppuStack_128 = (undefined8 ****)0x0;
                ppppuStack_130 = (undefined8 ****)0x0;
                ppppuStack_e0 = pppppuVar26;
                FUN_10a39dee4(*param_1 + 0x88,&ppppuStack_130);
                lVar21 = *(long *)(*param_1 + 0x88);
                lVar38 = *(long *)(*param_1 + 0x90);
                if (ppppuStack_118 != (undefined8 ****)0x0) {
                  ppppuStack_110 = ppppuStack_118;
                  __ZdlPv();
                }
                if (ppppuStack_130 != (undefined8 ****)0x0) {
                  ppppuStack_128 = ppppuStack_130;
                  __ZdlPv();
                }
                iVar18 = (int)((ulong)(lVar38 - lVar21) >> 4) * -0x55555555 + -1;
              }
              lVar21 = *(long *)(*param_1 + 0x88);
              uVar39 = (*(long *)(*param_1 + 0x90) - lVar21 >> 4) * -0x5555555555555555;
              if (uVar39 < (ulong)(long)iVar18 || uVar39 - (long)iVar18 == 0) goto LAB_10a39de34;
              plVar43 = (long *)(lVar21 + (long)iVar18 * 0x30);
              lVar21 = 0;
              do {
                iVar44 = 0;
                ppppuStack_130 = (undefined8 ****)((ulong)ppppuStack_130 & 0xffffffff00000000);
                auStack_138 = (undefined1  [8])0x0;
                uVar19 = auStack_9c[lVar21];
                uVar39 = (ulong)uVar19;
                auStack_13c = (undefined1  [4])0x0;
                pfVar33 = (float *)(lStack_160 + uStack_168 * uVar39);
                fVar45 = *pfVar33;
                fVar47 = pfVar33[1];
                fVar48 = pfVar33[2];
                fVar49 = pfVar33[3];
                do {
                  if (iVar44 == 3) {
                    auStack_13c = (undefined1  [4])fVar49;
                    fVar50 = fVar49;
                  }
                  else if (iVar44 == 2) {
                    auStack_138._0_4_ = fVar48;
                    fVar50 = fVar48;
                  }
                  else if (iVar44 == 1) {
                    auStack_138._4_4_ = fVar47;
                    fVar50 = fVar47;
                  }
                  else {
                    ppppuStack_130 = (undefined8 ****)CONCAT44(ppppuStack_130._4_4_,fVar45);
                    fVar50 = fVar45;
                  }
                  if (fVar50 == 0.0) {
                    pppppuVar17 = &ppppuStack_130;
                    if (iVar44 == 1) {
                      pppppuVar17 = pppppuVar15;
                    }
                    pppppuVar26 = pppppuVar2;
                    if (iVar44 != 2) {
                      pppppuVar26 = pppppuVar17;
                    }
                    pppppuVar17 = (undefined8 *****)auStack_13c;
                    if (iVar44 != 3) {
                      pppppuVar17 = pppppuVar26;
                    }
LAB_10a39d938:
                    *(undefined4 *)pppppuVar17 = 0;
                  }
                  else {
                    pppppuVar17 = &ppppuStack_130;
                    if (iVar44 == 1) {
                      pppppuVar17 = pppppuVar15;
                    }
                    pppppuVar26 = pppppuVar2;
                    if (iVar44 != 2) {
                      pppppuVar26 = pppppuVar17;
                    }
                    pppppuVar17 = (undefined8 *****)auStack_13c;
                    if (iVar44 != 3) {
                      pppppuVar17 = pppppuVar26;
                    }
                    iVar40 = (int)*(float *)pppppuVar17;
                    lVar38 = plVar43[1] - *plVar43;
                    if (lVar38 != 0) {
                      uVar28 = 0;
                      do {
                        if (*(int *)(*plVar43 + uVar28 * 4) == iVar40) {
                          if ((int)uVar28 != -1) goto LAB_10a39d968;
                          break;
                        }
                        uVar28 = uVar28 + 1;
                      } while (lVar38 >> 2 != uVar28);
                    }
                    iStack_140 = iVar40;
                    FUN_10a1b210c(plVar43,&iStack_140);
                    uVar28 = (ulong)((int)((ulong)(plVar43[1] - *plVar43) >> 2) - 1);
LAB_10a39d968:
                    pppppuVar17 = &ppppuStack_130;
                    if (iVar44 == 1) {
                      pppppuVar17 = pppppuVar15;
                    }
                    pppppuVar26 = pppppuVar2;
                    if (iVar44 != 2) {
                      pppppuVar26 = pppppuVar17;
                    }
                    pppppuVar17 = (undefined8 *****)auStack_13c;
                    if (iVar44 != 3) {
                      pppppuVar17 = pppppuVar26;
                    }
                    if (*(float *)pppppuVar17 - (float)iVar40 <= 0.0) {
                      if (iVar44 == 3) {
                        pppppuVar17 = (undefined8 *****)auStack_13c;
                      }
                      else if (iVar44 == 2) {
                        pppppuVar17 = (undefined8 *****)(auStack_13c + 4);
                      }
                      else if (iVar44 == 1) {
                        pppppuVar17 = (undefined8 *****)(auStack_13c + 8);
                      }
                      else {
                        pppppuVar17 = &ppppuStack_130;
                      }
                      goto LAB_10a39d938;
                    }
                    if (iVar44 == 3) {
                      pppppuVar26 = (undefined8 *****)auStack_13c;
                    }
                    else if (iVar44 == 2) {
                      pppppuVar26 = (undefined8 *****)(auStack_13c + 4);
                    }
                    else if (iVar44 == 1) {
                      pppppuVar26 = (undefined8 *****)(auStack_13c + 8);
                    }
                    else {
                      pppppuVar26 = &ppppuStack_130;
                    }
                    *(float *)pppppuVar26 =
                         (*(float *)pppppuVar17 - (float)iVar40) + (float)(int)uVar28;
                  }
                  iVar44 = iVar44 + 1;
                } while (iVar44 != 4);
                uVar28 = lVar21 + uStack_198 * 3;
                if (param_4 != (long *)0x0) {
                  if ((ulong)(param_4[1] - *param_4 >> 2) <= uVar28) {
                    FUN_10a3aab70();
                    goto LAB_10a39de34;
                  }
                  *(uint *)(*param_4 + uVar28 * 4) = uVar19;
                }
                _memcpy(*(long *)(*param_1 + 0x10) + uVar28 * uVar27,
                        *(long *)(param_2 + 0x10) + uVar39 * uVar27);
                lVar38 = *param_1;
                if (*(long *)(lVar38 + 0x48) != *(long *)(lVar38 + 0x40)) {
                  lVar25 = 0;
                  uVar32 = 0;
                  lVar23 = 0x38;
                  do {
                    uVar35 = (lStack_f8 - lStack_100 >> 3) * -0x5555555555555555;
                    if ((uVar35 < uVar32 || uVar35 - uVar32 == 0) ||
                       (uVar35 = (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) *
                                 -0x71c71c71c71c71c7, uVar35 < uVar32 || uVar35 - uVar32 == 0))
                    goto LAB_10a39de34;
                    puVar3 = (undefined8 *)(*(long *)(lStack_100 + lVar25) + uVar28 * 0x18);
                    plVar36 = *(long **)(*(long *)(param_2 + 0x40) + lVar23);
                    lVar6 = *plVar36;
                    if ((ulong)(plVar36[1] - lVar6) < uVar39 * 0x18 + 0x18) {
                      *puVar3 = 0;
                      puVar3[1] = 0;
                      puVar3[2] = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)(lVar6 + uVar39 * 0x18);
                      uVar46 = puVar4[1];
                      uVar24 = *puVar4;
                      puVar3[2] = puVar4[2];
                      puVar3[1] = uVar46;
                      *puVar3 = uVar24;
                    }
                    uVar32 = uVar32 + 1;
                    uVar35 = (*(long *)(lVar38 + 0x48) - *(long *)(lVar38 + 0x40) >> 3) *
                             -0x71c71c71c71c71c7;
                    lVar23 = lVar23 + 0x48;
                    lVar25 = lVar25 + 0x18;
                  } while (uVar32 <= uVar35 && uVar35 - uVar32 != 0);
                }
                puVar5 = (undefined4 *)
                         (*(long *)(lVar38 + 0x10) +
                         (ulong)*(uint *)(lVar41 + 0x30) + uVar28 * uVar27);
                *puVar5 = ppppuStack_130._0_4_;
                puVar5[1] = auStack_138._4_4_;
                puVar5[2] = auStack_138._0_4_;
                puVar5[3] = auStack_13c;
                lVar21 = lVar21 + 1;
              } while (lVar21 != 3);
              uVar39 = ((long)ppppuStack_e0 - (long)ppppuStack_e8 >> 3) * -0x5555555555555555;
              if (uVar39 < (ulong)(long)iVar18 || uVar39 - (long)iVar18 == 0) goto LAB_10a39de34;
              ppppuStack_130 = (undefined8 ****)CONCAT44(ppppuStack_130._4_4_,(int)uStack_198);
              FUN_109febd04(ppppuStack_e8 + (long)iVar18 * 3,&ppppuStack_130);
              uStack_198 = uStack_198 + 1;
            } while (uStack_198 != uVar22);
          }
          lVar20 = *param_1;
          lVar41 = *(long *)(lVar20 + 0x40);
          if (*(long *)(lVar20 + 0x48) != lVar41) {
            lVar38 = 0;
            lVar21 = 0;
            uVar27 = 0;
            do {
              uVar39 = (lStack_f8 - lStack_100 >> 3) * -0x5555555555555555;
              if (uVar39 < uVar27 || uVar39 - uVar27 == 0) goto LAB_10a39de34;
              FUN_10a0d3194(lVar41 + lVar21,lStack_100 + lVar38);
              uVar27 = uVar27 + 1;
              lVar20 = *param_1;
              lVar41 = *(long *)(lVar20 + 0x40);
              lVar21 = lVar21 + 0x48;
              lVar38 = lVar38 + 0x18;
            } while (uVar27 < (ulong)((*(long *)(lVar20 + 0x48) - lVar41 >> 3) * -0x71c71c71c71c71c7
                                     ));
          }
          *(undefined4 *)(lVar20 + 0xe8) = 1;
          uVar9 = *(uint *)(lVar20 + 0xf0);
          if (uVar9 == 0) {
            lVar41 = 2;
          }
          else {
            uVar27 = 0;
            if ((ulong)uVar9 != 0) {
              uVar27 = (ulong)(*(long *)(lVar20 + 0x18) - *(long *)(lVar20 + 0x10)) / (ulong)uVar9;
            }
            lVar41 = 2;
            if ((uVar27 & 0xffff0000) != 0) {
              *(undefined4 *)(lVar20 + 0xe8) = 2;
              lVar41 = 4;
            }
          }
          lVar21 = *(long *)(lVar20 + 0x28);
          uVar31 = uVar31 * lVar41;
          uVar27 = *(long *)(lVar20 + 0x30) - lVar21;
          if (uVar31 < uVar27 || uVar31 - uVar27 == 0) {
            if (uVar31 < uVar27) {
              *(ulong *)(lVar20 + 0x30) = lVar21 + uVar31;
            }
          }
          else {
            func_0x000107c27d58((long *)(lVar20 + 0x28),uVar31 - uVar27);
          }
          if (param_5 != (long *)0x0) {
            func_0x0001074287b0(param_5,uVar22);
          }
          if (ppppuStack_e0 != ppppuStack_e8) {
            uVar27 = 0;
            uVar31 = 0;
            iVar10 = (int)lVar41 * 3;
            do {
              ppppuVar7 = (undefined8 ****)ppppuStack_e8[uVar27 * 3];
              ppppuVar8 = (undefined8 ****)(ppppuStack_e8 + uVar27 * 3)[1];
              lVar20 = *param_1;
              iVar18 = (int)uVar31;
              if (ppppuVar7 != ppppuVar8) {
                lVar21 = *(long *)(lVar20 + 0x28);
                iVar44 = *(int *)(lVar20 + 0xe8);
                uVar9 = iVar10 * iVar18;
                ppppuVar37 = ppppuVar7;
                do {
                  lVar38 = 0;
                  uVar19 = uVar9;
                  do {
                    lVar23 = lVar38 + (ulong)(uint)(*(int *)ppppuVar37 * 3);
                    if (iVar44 == 1) {
                      *(short *)(lVar21 + (ulong)uVar19) = (short)lVar23;
                    }
                    else {
                      *(int *)(lVar21 + (ulong)uVar19) = (int)lVar23;
                    }
                    lVar38 = lVar38 + 1;
                    uVar19 = uVar19 + (int)lVar41;
                  } while (lVar38 != 3);
                  if (param_5 != (long *)0x0) {
                    if ((ulong)(param_5[1] - *param_5 >> 2) <= uVar31) {
                      FUN_10a3aab70();
                      goto LAB_10a39de34;
                    }
                    *(int *)(*param_5 + uVar31 * 4) = *(int *)ppppuVar37;
                  }
                  uVar31 = (ulong)((int)uVar31 + 1);
                  ppppuVar37 = (undefined8 ****)((long)ppppuVar37 + 4);
                  uVar9 = uVar9 + iVar10;
                } while (ppppuVar37 != ppppuVar8);
              }
              uStack_d0 = (undefined8 *****)
                          CONCAT44((int)((ulong)((long)ppppuVar8 - (long)ppppuVar7) >> 2) * 3,
                                   iVar18 * 3);
              uStack_c8 = (undefined8 *****)((ulong)uStack_c8 & 0xffffffff00000000);
              uVar22 = (*(long *)(lVar20 + 0x90) - *(long *)(lVar20 + 0x88) >> 4) *
                       -0x5555555555555555;
              if (uVar22 < uVar27 || uVar22 - uVar27 == 0) goto LAB_10a39de34;
              FUN_10a0d3a24(*(long *)(lVar20 + 0x88) + uVar27 * 0x30 + 0x18,&uStack_d0,
                            (long)&uStack_c8 + 4,1);
              uVar27 = (ulong)((int)uVar27 + 1);
              uVar22 = ((long)ppppuStack_e0 - (long)ppppuStack_e8 >> 3) * -0x5555555555555555;
            } while (uVar27 <= uVar22 && uVar22 - uVar27 != 0);
          }
          lVar41 = *param_1;
          if ((*(long *)(lVar41 + 0x70) == *(long *)(lVar41 + 0x78)) &&
             (*(long *)(lVar41 + 0x58) != *(long *)(lVar41 + 0x60))) {
            FUN_10ab4a600();
          }
          uStack_d0 = (undefined8 *****)&lStack_100;
          func_0x00010a131c58(&uStack_d0);
          uStack_d0 = &ppppuStack_e8;
          func_0x00010a1f4bf4(&uStack_d0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
            return;
          }
          ___stack_chk_fail();
LAB_10a39de30:
          FUN_10a3aa8f4();
          goto LAB_10a39de34;
        }
      }
    }
    FUN_10a00946c(&UNK_10f652750);
  }
  else {
    FUN_10a00946c(&UNK_10f65270b);
LAB_10a39de18:
    FUN_10ab725fc();
LAB_10a39de1c:
    FUN_10a00946c(&UNK_10f652796);
  }
LAB_10a39de34:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a39de38);
  (*pcVar16)();
}



/* Entry: 10a39dee4; end: 10a39df33;  */

void FUN_10a39dee4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a3aaa74(uVar1);
    lVar2 = uVar1 + 0x30;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a3aa94c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a39df34; end: 10a39df73;  */

long * FUN_10a39df34(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a39df74; end: 10a39e60b;  */

undefined ** FUN_10a39df74(undefined8 *param_1,code *param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  ushort uVar2;
  ushort uVar3;
  long **pplVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined **ppuVar13;
  ulong uVar14;
  code **ppcVar15;
  code *pcVar16;
  undefined *puVar17;
  code **ppcVar18;
  ulong uVar19;
  undefined8 *puVar20;
  code **unaff_x20;
  long *plVar21;
  code **ppcVar22;
  code *pcVar23;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined7 uStack_130;
  char cStack_129;
  code **ppcStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  code **ppcStack_e0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code **ppcStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    pcVar16 = param_2;
    ppuVar13 = param_3;
    func_0x00010a0fda30();
  }
  else {
    unaff_x20 = &pcStack_b0;
    ppuStack_a8 = *(undefined ***)(param_2 + 0x48);
    pcStack_b0 = *(code **)(param_2 + 0x40);
    lVar12 = param_4 + 0x88;
    func_0x00010a35bf90(lVar12,&pcStack_b0);
    puVar20 = (undefined8 *)((ulong)unaff_x20 | 8);
    ppcVar15 = unaff_x20;
    if (lVar12 != 0) {
      puVar20 = (undefined8 *)(lVar12 + 0x28);
      ppcVar15 = (code **)(lVar12 + 0x20);
    }
    ppuVar13 = (undefined **)*puVar20;
    pcVar16 = *ppcVar15;
  }
  FUN_10a0d7dd4(&pcStack_110,*(undefined8 *)(param_2 + 0x170),pcVar16,ppuVar13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pcStack_110 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(pcStack_110 + 0x180) & 0xfffc;
  *(ushort *)(pcStack_110 + 0x180) = uVar3 | *(ushort *)(pcStack_110 + 0x180) & 1 | uVar2;
  *(ushort *)(pcStack_110 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  pcStack_b0 = pcStack_110;
  ppuStack_a8 = ppuStack_108;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar13 = ppuStack_108 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar7) {
        *ppuVar13 = *ppuVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&pcStack_b0);
  ppuVar13 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_a8 + 1;
    do {
      puVar17 = *ppuVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar7) {
        *ppuVar1 = puVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_3 = ppuVar13;
    }
  }
  if (pcStack_110 != param_2) {
    *(undefined4 *)(pcStack_110 + 0x210) = *(undefined4 *)(param_2 + 0x210);
    param_3 = (undefined **)(pcStack_110 + 0x1f0);
    FUN_10a3ba2b0(param_3,*(undefined8 *)(param_2 + 0x200),0);
  }
  plVar21 = *(long **)(param_2 + 0x200);
  if (plVar21 != (long *)0x0) {
    do {
      FUN_10a3aab84(&ppuStack_140,plVar21 + 2);
      ppuStack_148 = (undefined **)0x0;
      if ((ppuStack_118 == (undefined **)0x0) ||
         (ppuStack_148 = ppuStack_118, __ZNSt3__119__shared_weak_count4lockEv(), lVar12 = lStack_120
         , ppuStack_148 == (undefined **)0x0)) {
        lVar12 = 0;
      }
      pcVar16 = pcStack_110;
      ppcVar15 = ppcStack_128;
      ppuVar13 = (undefined **)(pcStack_110 + 0x1f0);
      ppcVar22 = *(code ***)(pcStack_110 + 0x1f8);
      if (ppcVar22 != (code **)0x0) {
        uVar14 = (long)ppcVar22 - 1;
        if (((ulong)ppcVar22 & uVar14) == 0) {
          unaff_x20 = (code **)(uVar14 & (ulong)ppcStack_128);
        }
        else {
          unaff_x20 = ppcStack_128;
          if (ppcVar22 <= ppcStack_128) {
            uVar19 = 0;
            if (ppcVar22 != (code **)0x0) {
              uVar19 = (ulong)ppcStack_128 / (ulong)ppcVar22;
            }
            unaff_x20 = (code **)((long)ppcStack_128 - uVar19 * (long)ppcVar22);
          }
        }
        if (*(undefined8 **)(*ppuVar13 + (long)unaff_x20 * 8) != (undefined8 *)0x0) {
          for (pcVar23 = (code *)**(undefined8 **)(*ppuVar13 + (long)unaff_x20 * 8);
              pcVar23 != (code *)0x0; pcVar23 = *(code **)pcVar23) {
            ppcVar18 = *(code ***)(pcVar23 + 8);
            if (ppcVar18 == ppcStack_128) {
              if (*(code ***)(pcVar23 + 0x28) == ppcStack_128) goto LAB_10a39e32c;
            }
            else {
              if (((ulong)ppcVar22 & uVar14) == 0) {
                ppcVar18 = (code **)((ulong)ppcVar18 & uVar14);
              }
              else if (ppcVar22 <= ppcVar18) {
                uVar19 = 0;
                if (ppcVar22 != (code **)0x0) {
                  uVar19 = (ulong)ppcVar18 / (ulong)ppcVar22;
                }
                ppcVar18 = (code **)((long)ppcVar18 - uVar19 * (long)ppcVar22);
              }
              if (ppcVar18 != unaff_x20) break;
            }
          }
        }
      }
      pcVar23 = (code *)0x40;
      __Znwm();
      ppcStack_a0 = (code **)0x0;
      *(undefined8 *)pcVar23 = 0;
      *(code ***)(pcVar23 + 8) = ppcVar15;
      pcStack_b0 = pcVar23;
      ppuStack_a8 = ppuVar13;
      if (cStack_129 < '\0') {
        func_0x000107c3192c(pcVar23 + 0x10,ppuStack_140,uStack_138);
        ppcVar18 = ppcStack_128;
      }
      else {
        *(undefined8 *)(pcVar23 + 0x18) = uStack_138;
        *(undefined ***)(pcVar23 + 0x10) = ppuStack_140;
        *(ulong *)(pcVar23 + 0x20) = CONCAT17(cStack_129,uStack_130);
        ppcVar18 = ppcVar15;
      }
      *(undefined8 *)(pcVar23 + 0x30) = 0;
      *(undefined8 *)(pcVar23 + 0x38) = 0;
      *(code ***)(pcVar23 + 0x28) = ppcVar18;
      ppcStack_a0 = (code **)CONCAT71(ppcStack_a0._1_7_,1);
      if ((ppcVar22 == (code **)0x0) ||
         (*(float *)(pcVar16 + 0x210) * (float)ppcVar22 < (float)(*(long *)(pcVar16 + 0x208) + 1)))
      {
        if (ppcVar22 < (code **)0x3) {
          uVar14 = 1;
        }
        else {
          uVar14 = (ulong)(((ulong)ppcVar22 & (long)ppcVar22 - 1U) != 0);
        }
        uVar14 = uVar14 | (long)ppcVar22 << 1;
        uVar19 = (ulong)((float)(*(long *)(pcVar16 + 0x208) + 1) / *(float *)(pcVar16 + 0x210));
        if (uVar14 <= uVar19) {
          uVar14 = uVar19;
        }
        FUN_10a0d7b40(ppuVar13,uVar14);
        ppcVar22 = *(code ***)(pcVar16 + 0x1f8);
        if (((ulong)ppcVar22 & (long)ppcVar22 - 1U) == 0) {
          unaff_x20 = (code **)((long)ppcVar22 - 1U & (ulong)ppcVar15);
        }
        else {
          unaff_x20 = ppcVar15;
          if (ppcVar22 <= ppcVar15) {
            uVar14 = 0;
            if (ppcVar22 != (code **)0x0) {
              uVar14 = (ulong)ppcVar15 / (ulong)ppcVar22;
            }
            unaff_x20 = (code **)((long)ppcVar15 - uVar14 * (long)ppcVar22);
          }
        }
      }
      puVar17 = *ppuVar13;
      puVar20 = *(undefined8 **)(puVar17 + (long)unaff_x20 * 8);
      if (puVar20 == (undefined8 *)0x0) {
        *(undefined8 *)pcStack_b0 = *(undefined8 *)(pcVar16 + 0x200);
        *(code **)(pcVar16 + 0x200) = pcStack_b0;
        *(code **)(puVar17 + (long)unaff_x20 * 8) = pcVar16 + 0x200;
        if (*(long *)pcStack_b0 != 0) {
          ppcVar15 = *(code ***)(*(long *)pcStack_b0 + 8);
          if (((ulong)ppcVar22 & (long)ppcVar22 - 1U) == 0) {
            ppcVar15 = (code **)((ulong)ppcVar15 & (long)ppcVar22 - 1U);
          }
          else if (ppcVar22 <= ppcVar15) {
            uVar14 = 0;
            if (ppcVar22 != (code **)0x0) {
              uVar14 = (ulong)ppcVar15 / (ulong)ppcVar22;
            }
            ppcVar15 = (code **)((long)ppcVar15 - uVar14 * (long)ppcVar22);
          }
          *(code **)(*ppuVar13 + (long)ppcVar15 * 8) = pcStack_b0;
        }
      }
      else {
        *(undefined8 *)pcStack_b0 = *puVar20;
        *puVar20 = pcStack_b0;
      }
      *(long *)(pcVar16 + 0x208) = *(long *)(pcVar16 + 0x208) + 1;
      pcVar23 = pcStack_b0;
LAB_10a39e32c:
      if (lVar12 == 0) {
        plVar9 = *(long **)(pcVar23 + 0x38);
        *(undefined8 *)(pcVar23 + 0x30) = 0;
        *(undefined8 *)(pcVar23 + 0x38) = 0;
        if (plVar9 != (long *)0x0) {
LAB_10a39e4d8:
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      else if (param_4 == 0) {
        func_0x00010a0d77bc(&lStack_100,lVar12);
        if (plStack_f8 != (long *)0x0) {
          plVar9 = plStack_f8 + 2;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = *plVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        lVar12 = *(long *)(pcVar23 + 0x38);
        *(long **)(pcVar23 + 0x38) = plStack_f8;
        *(long *)(pcVar23 + 0x30) = lStack_100;
        if (lVar12 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plStack_f8 != (long *)0x0) {
          plVar9 = plStack_f8 + 1;
          do {
            lVar12 = *plVar9;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *plVar9 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_10a39e4c0:
          plVar9 = plStack_f8;
          if (lVar12 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            goto LAB_10a39e4d8;
          }
        }
      }
      else {
        unaff_x20 = (code **)(pcVar23 + 0x30);
        lVar5 = *(long *)(lVar12 + 0x40);
        plVar9 = *(long **)(lVar12 + 0x48);
        if (*(char *)(param_4 + 0xb8) == '\x01') {
          pcStack_b0 = FUN_10a3baa30;
          ppuStack_a8 = &PTR_FUN_110bcf348;
          ppcStack_a0 = unaff_x20;
          FUN_10a2fd56c(param_4,lVar5,plVar9,&pcStack_b0);
          pcVar16 = (code *)*ppuStack_a8;
          pppuVar11 = &ppuStack_a8;
        }
        else {
          lVar10 = param_4 + 0x88;
          lStack_100 = lVar5;
          plStack_f8 = plVar9;
          func_0x00010a35bf90(lVar10,&lStack_100);
          pplVar4 = &plStack_f8;
          plVar8 = &lStack_100;
          if (lVar10 != 0) {
            pplVar4 = (long **)(lVar10 + 0x28);
            plVar8 = (long *)(lVar10 + 0x20);
          }
          if (lVar5 == *plVar8 && plVar9 == *pplVar4) {
            func_0x00010a0d77bc(&lStack_100,lVar12);
            if (plStack_f8 != (long *)0x0) {
              plVar9 = plStack_f8 + 2;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar7) {
                  *plVar9 = *plVar9 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            lVar12 = *(long *)(pcVar23 + 0x38);
            *(long **)(pcVar23 + 0x38) = plStack_f8;
            *(long *)(pcVar23 + 0x30) = lStack_100;
            if (lVar12 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plStack_f8 != (long *)0x0) {
              plVar9 = plStack_f8 + 1;
              do {
                lVar12 = *plVar9;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar7) {
                  *plVar9 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              goto LAB_10a39e4c0;
            }
            goto LAB_10a39e4dc;
          }
          pcStack_f0 = FUN_10a3baaf0;
          ppuStack_e8 = &PTR_FUN_110bcf368;
          ppcStack_e0 = unaff_x20;
          FUN_10a2fd56c(param_4,*plVar8,*pplVar4,&pcStack_f0);
          pcVar16 = (code *)*ppuStack_e8;
          pppuVar11 = &ppuStack_e8;
        }
        (*pcVar16)(pppuVar11);
      }
LAB_10a39e4dc:
      if (ppuStack_148 != (undefined **)0x0) {
        ppuVar13 = ppuStack_148 + 1;
        do {
          puVar17 = *ppuVar13;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar7) {
            *ppuVar13 = puVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*ppuStack_148 + 0x10))(ppuStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_148);
        }
      }
      param_3 = ppuStack_118;
      if (ppuStack_118 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (cStack_129 < '\0') {
        param_3 = ppuStack_140;
        __ZdlPv();
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  param_1[1] = ppuStack_108;
  *param_1 = pcStack_110;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010a0d8a14(&pcStack_110);
  __Unwind_Resume();
  if (param_3[5] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((char)*(code *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  return param_3;
}



/* Entry: 10a39e60c; end: 10a39e647;  */

undefined8 * FUN_10a39e60c(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a39e648; end: 10a39e957;  */

undefined1  [16] FUN_10a39e648(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f652de9;
  return auVar1;
}



/* Entry: 10a39e958; end: 10a39ec5f;  */

void FUN_10a39e958(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652de9,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcdd20;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcdd20;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6527d4,FUN_10a3babb0,FUN_10a3bac68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6389e8,FUN_10a3bae00,FUN_10a3baebc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6527dc,FUN_10a3bafa8,FUN_10a3bb064);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6527e8,FUN_10a3bb1c0,FUN_10a3bb27c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6527f4,FUN_10a3bb334,FUN_10a3bb3f0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652de9,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39ec44);
  (*pcVar6)();
}



/* Entry: 10a39ec60; end: 10a39eee7;  */

void FUN_10a39ec60(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652df8,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcdd38;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcdd38;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6527d4,FUN_10a3bb4a8,FUN_10a3bb560);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652803,FUN_10a3bb6f8,FUN_10a3bb7b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65280f,FUN_10a3bb910,FUN_10a3bb9cc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652df8,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39eecc);
  (*pcVar6)();
}



/* Entry: 10a39eee8; end: 10a39efcf;  */

void FUN_10a39eee8(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a39efd0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6527d4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  FUN_10a3bbb80();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65281a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  func_0x00010a3bbe28(param_1,&puStack_98);
  FUN_10a3bc030(param_1);
  return;
}



/* Entry: 10a39efd0; end: 10a39f0a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a39f068) */

undefined1  [16] FUN_10a39efd0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f652e0a,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3bba84(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a39f0a8; end: 10a39f15b;  */

void FUN_10a39f0a8(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f651d0b;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a39f15c(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6527d4;
  puStack_70 = &UNK_10f651d0b;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  FUN_10a3bc1e8();
  FUN_10a3bc458(param_1);
  return;
}



/* Entry: 10a39f15c; end: 10a39f233;  */

/* WARNING: Removing unreachable block (ram,0x00010a39f1f4) */

undefined1  [16] FUN_10a39f15c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f652e18,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3bc0ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a39f234; end: 10a39f2d7;  */

void FUN_10a39f234(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a39f2d8(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6527d4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x93;
  uStack_38 = 0xffffffff;
  puStack_30 = &UNK_10f651d0b;
  uStack_28 = 0;
  FUN_10a3bc610();
  FUN_10a3bc880(param_1);
  return;
}



/* Entry: 10a39f2d8; end: 10a39f3af;  */

/* WARNING: Removing unreachable block (ram,0x00010a39f370) */

undefined1  [16] FUN_10a39f2d8(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f652e27,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3bc514(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a39f3b0; end: 10a39f6e3;  */

void FUN_10a39f3b0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652e34,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcf908;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcf908;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6527d4,FUN_10a3bc93c,FUN_10a3bc9f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f652829,FUN_10a3bcb70,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f652838,FUN_10a3bcca4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65284a,FUN_10a3bcdd8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f652858,FUN_10a3bcf0c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f652867,FUN_10a3bd040,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652e34,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a39f6c8);
  (*pcVar6)();
}



/* Entry: 10a39f6e4; end: 10a39f72f;  */

undefined8 * FUN_10a39f6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcae40;
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}


