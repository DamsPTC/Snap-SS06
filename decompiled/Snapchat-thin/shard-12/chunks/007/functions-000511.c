/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10978ed00; end: 10978eddf;  */

void FUN_10978ed00(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*param_5 & 0xffffff,4);
      lVar1 = lVar1 + 4;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10978ede0; end: 10978ee1f;  */

uint FUN_10978ede0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = (uint)lVar2;
  return uVar1 & 0xff000000 | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
}



/* Entry: 10978ee20; end: 10978ef0b;  */

void FUN_10978ee20(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 & 0xff000000 |
                       uVar1 & 0xff00 | uVar1 >> 0x10 & 0xff | (uVar1 & 0xff) << 0x10,4);
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978ef0c; end: 10978ef4b;  */

uint FUN_10978ef0c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = (uint)lVar2;
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff | 0xff000000;
}



/* Entry: 10978ef4c; end: 10978f02b;  */

void FUN_10978ef4c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 & 0xff00 | uVar1 >> 0x10 & 0xff | (uVar1 & 0xff) << 0x10,4);
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978f02c; end: 10978f05f;  */

uint FUN_10978f02c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = ((uint)lVar2 & 0xff00ff00) >> 8 | ((uint)lVar2 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Entry: 10978f060; end: 10978f147;  */

void FUN_10978f060(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
      (**(code **)(param_1 + 0x100))(lVar2,uVar1 >> 0x10 | uVar1 << 0x10,4);
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978f148; end: 10978f18b;  */

uint FUN_10978f148(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = (uint)((ulong)lVar2 >> 8);
  return uVar1 & 0xff00 | (uint)lVar2 >> 0x18 | (uVar1 & 0xff) << 0x10 | 0xff000000;
}



/* Entry: 10978f18c; end: 10978f267;  */

void FUN_10978f18c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar1 = *param_5 & 0xff00ff;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 8 | ((*param_5 & 0xff00) >> 8 | uVar1 << 8) << 0x10,4);
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978f268; end: 10978f29b;  */

uint FUN_10978f268(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  return (uint)lVar1 >> 8 | (uint)lVar1 << 0x18;
}



/* Entry: 10978f29c; end: 10978f377;  */

void FUN_10978f29c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*param_5 >> 0x18 | *param_5 << 8,4);
      lVar1 = lVar1 + 4;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10978f378; end: 10978f3b3;  */

uint FUN_10978f378(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  return (uint)lVar1 >> 8 | 0xff000000;
}



/* Entry: 10978f3b4; end: 10978f4bb;  */

void FUN_10978f3b4(long param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*param_5 << 8,4);
      lVar1 = lVar1 + 4;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10978f4bc; end: 10978f51f;  */

uint FUN_10978f4bc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(uVar3,4);
  uVar1 = (uint)(uVar3 >> 10) & 0xfc;
  uVar2 = (uint)(uVar3 >> 4) & 0xfc;
  return (uVar2 | uVar2 >> 6) << 8 | (uVar1 | uVar1 >> 6) << 0x10 |
         ((uint)uVar3 & 0x3fffffff) >> 4 & 3 | ((uint)uVar3 & 0x3f) << 2 | 0xff000000;
}



/* Entry: 10978f520; end: 10978f597;  */

void FUN_10978f520(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 6 & 0x3f000 | uVar1 >> 4 & 0xfc0 | uVar1 >> 2 & 0x3f,4);
      lVar2 = lVar2 + 4;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10978f598; end: 10978f71f;  */

void FUN_10978f598(long param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (0 < param_4) {
    uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    uVar4 = uVar1;
    do {
      uVar2 = uVar4 + 4;
      (**(code **)(param_1 + 0xf8))(uVar4,4);
      uVar3 = (uint)uVar4;
      *param_5 = uVar3 & 0xff000000 |
                 (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) * 255.0 + 0.5)
                 << 0x10 | (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar3 >> 8 & 0xff) * 4) * 255.0
                                + 0.5) << 8 |
                 (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar3 & 0xff) * 4) * 255.0 + 0.5);
      uVar4 = uVar2;
      param_5 = param_5 + 1;
    } while (uVar2 < uVar1 + (long)param_4 * 4);
  }
  return;
}



/* Entry: 10978f720; end: 10978f807;  */

uint FUN_10978f720(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = (uint)lVar2;
  return uVar1 & 0xff000000 |
         (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) * 255.0 + 0.5) << 0x10
         | (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar1 >> 8 & 0xff) * 4) * 255.0 + 0.5) << 8 |
         (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar1 & 0xff) * 4) * 255.0 + 0.5);
}



/* Entry: 10978f808; end: 10978fab3;  */

void FUN_10978f808(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar7;
  ulong uVar8;
  long lVar6;
  
  if (0 < (int)param_4) {
    uVar8 = (ulong)param_4;
    lVar6 = param_1;
    lVar7 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      uVar3 = (uint)lVar6;
      uVar2 = *param_5;
      func_0x000109793e4c((float)(uVar2 >> 0x10 & 0xff) * 0.003921569);
      uVar4 = uVar3;
      func_0x000109793e4c((float)(uVar2 >> 8 & 0xff) * 0.003921569);
      uVar5 = uVar4;
      func_0x000109793e4c((float)(uVar2 & 0xff) * 0.003921569);
      lVar1 = lVar7 + 4;
      (**(code **)(param_1 + 0x100))(lVar7,uVar2 >> 0x18 | uVar3 << 0x10 | uVar4 << 8 | uVar5,4);
      uVar8 = uVar8 - 1;
      lVar6 = lVar7;
      param_5 = param_5 + 2;
      lVar7 = lVar1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 10978fab4; end: 10978fb93;  */

void FUN_10978fab4(long param_1,ulong param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar4 = (int)param_2;
  iVar6 = param_4 - iVar4;
  if (iVar6 != 0 && iVar4 <= param_4) {
    lVar5 = *(long *)(param_1 + 0xa8) +
            (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) +
            (long)iVar4 + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
    do {
      lVar2 = lVar5;
      (**(code **)(param_1 + 0xf8))(lVar5,1);
      lVar3 = lVar5 + 1;
      (**(code **)(param_1 + 0xf8))(lVar3,1);
      uVar1 = (uint)lVar2 | (int)lVar3 << 8;
      lVar3 = lVar5 + 2;
      (**(code **)(param_1 + 0xf8))(lVar3,1);
      *param_5 = 0x3f800000;
      param_5[1] = *(undefined4 *)
                    (&UNK_10dffa140 + (ulong)((uVar1 | (int)lVar3 << 0x10) >> 0x10 & 0xff) * 4);
      param_5[2] = *(undefined4 *)(&UNK_10dffa140 + (ulong)(uVar1 >> 8 & 0xff) * 4);
      param_5[3] = *(undefined4 *)(&UNK_10dffa140 + (ulong)((uint)lVar2 & 0xff) * 4);
      param_5 = param_5 + 4;
      lVar5 = lVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



/* Entry: 10978fb94; end: 10978fcfb;  */

uint FUN_10978fb94(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)(param_2 * 3);
  lVar2 = lVar4;
  (**(code **)(param_1 + 0xf8))(lVar4,1);
  lVar3 = lVar4 + 1;
  (**(code **)(param_1 + 0xf8))(lVar3,1);
  uVar1 = (uint)lVar2 | (int)lVar3 << 8;
  lVar4 = lVar4 + 2;
  (**(code **)(param_1 + 0xf8))(lVar4,1);
  return (int)(*(float *)(&UNK_10dffa140 + (ulong)((uVar1 | (int)lVar4 << 0x10) >> 0x10 & 0xff) * 4)
               * 255.0 + 0.5) << 0x10 |
         (int)(*(float *)(&UNK_10dffa140 + (ulong)(uVar1 >> 8 & 0xff) * 4) * 255.0 + 0.5) << 8 |
         (int)(*(float *)(&UNK_10dffa140 + (ulong)((uint)lVar2 & 0xff) * 4) * 255.0 + 0.5) |
         0xff000000;
}



/* Entry: 10978fcfc; end: 10978fdeb;  */

void FUN_10978fcfc(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < (int)param_4) {
    lVar5 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)(param_2 * 3);
    uVar6 = (ulong)param_4;
    lVar2 = param_1;
    do {
      uVar1 = *param_5;
      func_0x000109793e4c((float)(uVar1 >> 0x10 & 0xff) * 0.003921569);
      lVar3 = lVar2;
      func_0x000109793e4c((float)(uVar1 >> 8 & 0xff) * 0.003921569);
      lVar4 = lVar3;
      func_0x000109793e4c((float)(uVar1 & 0xff) * 0.003921569);
      (**(code **)(param_1 + 0x100))(lVar5,lVar4,1);
      (**(code **)(param_1 + 0x100))(lVar5 + 1,lVar3,1);
      lVar3 = lVar5 + 2;
      (**(code **)(param_1 + 0x100))(lVar3,lVar2,1);
      lVar5 = lVar5 + 3;
      uVar6 = uVar6 - 1;
      lVar2 = lVar3;
      param_5 = param_5 + 2;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 10978fdec; end: 10978ff57;  */

void FUN_10978fdec(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (0 < (int)param_4) {
    lVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)(param_2 * 3);
    uVar5 = (ulong)param_4;
    puVar6 = (undefined4 *)(param_5 + 8);
    lVar1 = param_1;
    do {
      func_0x000109793e4c(puVar6[-1]);
      lVar2 = lVar1;
      func_0x000109793e4c(*puVar6);
      lVar3 = lVar2;
      func_0x000109793e4c(puVar6[1]);
      (**(code **)(param_1 + 0x100))(lVar4,lVar3,1);
      (**(code **)(param_1 + 0x100))(lVar4 + 1,lVar2,1);
      lVar2 = lVar4 + 2;
      (**(code **)(param_1 + 0x100))(lVar2,lVar1,1);
      lVar4 = lVar4 + 3;
      puVar6 = puVar6 + 4;
      uVar5 = uVar5 - 1;
      lVar1 = lVar2;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 10978ff58; end: 10978ffd3;  */

uint FUN_10978ff58(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)(param_2 * 3);
  lVar1 = lVar3;
  (**(code **)(param_1 + 0xf8))(lVar3,1);
  lVar2 = lVar3 + 1;
  (**(code **)(param_1 + 0xf8))(lVar2,1);
  lVar3 = lVar3 + 2;
  (**(code **)(param_1 + 0xf8))(lVar3,1);
  return (uint)lVar1 | (int)lVar2 << 8 | (int)lVar3 << 0x10 | 0xff000000;
}



/* Entry: 10978ffd4; end: 109790137;  */

void FUN_10978ffd4(long param_1,ulong param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) +
            (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) +
            (long)(int)param_2 + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))(lVar2,uVar1 & 0xff,1);
      (**(code **)(param_1 + 0x100))(lVar2 + 1,uVar1 >> 8 & 0xff,1);
      (**(code **)(param_1 + 0x100))(lVar2 + 2,uVar1 >> 0x10 & 0xff,1);
      lVar2 = lVar2 + 3;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790138; end: 1097901c3;  */

uint FUN_109790138(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)(param_2 * 3);
  lVar2 = lVar4;
  (**(code **)(param_1 + 0xf8))(lVar4,1);
  lVar3 = lVar4 + 1;
  (**(code **)(param_1 + 0xf8))(lVar3,1);
  lVar4 = lVar4 + 2;
  (**(code **)(param_1 + 0xf8))(lVar4,1);
  uVar1 = (int)lVar3 << 8 | (int)lVar4 << 0x10 | (uint)lVar2;
  return uVar1 & 0xff00 | (uint)lVar2 << 0x10 | uVar1 >> 0x10 & 0xff | 0xff000000;
}



/* Entry: 1097901c4; end: 10979026b;  */

void FUN_1097901c4(long param_1,ulong param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) +
            (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) +
            (long)(int)param_2 + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))(lVar2,uVar1 >> 0x10 & 0xff,1);
      (**(code **)(param_1 + 0x100))(lVar2 + 1,uVar1 >> 8 & 0xff,1);
      (**(code **)(param_1 + 0x100))(lVar2 + 2,uVar1 & 0xff,1);
      lVar2 = lVar2 + 3;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10979026c; end: 109790307;  */

void FUN_10979026c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar3 = uVar4;
      (**(code **)(param_1 + 0xf8))(uVar4,2);
      uVar1 = (uint)(uVar3 >> 8) & 0xf8;
      uVar2 = (uint)(uVar3 >> 3) & 0xfc;
      *param_5 = (uVar2 | uVar2 >> 6) << 8 | (uVar1 | uVar1 >> 5) << 0x10 |
                 ((uint)uVar3 & 0x1fffffff) >> 2 & 7 | ((uint)uVar3 & 0x1f) << 3 | 0xff000000;
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 - 1;
      param_5 = param_5 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 109790308; end: 10979036b;  */

uint FUN_109790308(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar3,2);
  uVar1 = (uint)(uVar3 >> 8) & 0xf8;
  uVar2 = (uint)(uVar3 >> 3) & 0xfc;
  return (uVar2 | uVar2 >> 6) << 8 | (uVar1 | uVar1 >> 5) << 0x10 |
         ((uint)uVar3 & 0x1fffffff) >> 2 & 7 | ((uint)uVar3 & 0x1f) << 3 | 0xff000000;
}



/* Entry: 10979036c; end: 10979047b;  */

void FUN_10979036c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 8 & 0xf800 | uVar1 >> 5 & 0x7e0 | uVar1 >> 3 & 0x1f,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10979047c; end: 1097904db;  */

uint FUN_10979047c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(lVar4,2);
  uVar3 = (uint)lVar4;
  uVar1 = uVar3 >> 3 & 0xfc;
  uVar2 = (uint)((ulong)lVar4 >> 8) & 0xf8;
  return (uVar1 | uVar1 >> 6) << 8 | ((uVar3 & 0x1f) << 3 | (uVar3 & 0x1f) >> 2) << 0x10 |
         uVar2 | uVar2 >> 5 | 0xff000000;
}



/* Entry: 1097904dc; end: 109790607;  */

void FUN_1097904dc(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 5 & 0x7e0 | uVar1 >> 0x13 & 0x1f | (uVar1 >> 3 & 0x1f) << 0xb,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790608; end: 10979067f;  */

uint FUN_109790608(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar4,2);
  uVar1 = (uint)(uVar4 >> 8) & 0x80;
  uVar1 = uVar1 | uVar1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar2 = (uint)(uVar4 >> 7) & 0xf8;
  uVar3 = (uint)(uVar4 >> 2) & 0xf8;
  return (uVar2 | uVar2 >> 5) << 0x10 | (uVar1 | uVar1 >> 4) << 0x18 | (uVar3 | uVar3 >> 5) << 8 |
         ((uint)uVar4 & 0x1fffffff) >> 2 & 7 | ((uint)uVar4 & 0x1f) << 3;
}



/* Entry: 109790680; end: 1097907c3;  */

void FUN_109790680(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      auVar7._4_4_ = uVar1;
      auVar7._0_4_ = uVar1;
      auVar7._8_4_ = uVar1;
      auVar7._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar5._8_8_ = 0xfffffffdfffffffa;
      auVar5._0_8_ = 0xfffffff7fffffff0;
      auVar5 = NEON_ushl(auVar7,auVar5,4);
      auVar6._0_6_ = CONCAT15(auVar5[5],(uint5)(ushort)((auVar5[1] & 0x80) << 8)) & 0x7c00ffffffff;
      auVar6._6_2_ = 0;
      auVar6[8] = auVar5[8] & 0xe0;
      auVar6[9] = auVar5[9] & 3;
      auVar6._10_2_ = 0;
      auVar6[0xc] = auVar5[0xc] & 0x1f;
      auVar6._13_3_ = 0;
      auVar7 = NEON_ext(auVar6,auVar6,8,1);
      uVar4 = CONCAT13(auVar7[3],
                       CONCAT12(auVar7[2],CONCAT11(auVar5[1] & 0x80 | auVar7[1],auVar7[0])));
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar4 | (uint)(CONCAT17(auVar7[7],
                                               CONCAT16(auVar7[6],
                                                        CONCAT15(auVar5[5] & 0x7c | auVar7[5],
                                                                 CONCAT14(auVar7[4],uVar4)))) >>
                                     0x20),2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097907c4; end: 109790827;  */

uint FUN_1097907c4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar3,2);
  uVar1 = (uint)(uVar3 >> 7) & 0xf8;
  uVar2 = (uint)(uVar3 >> 2) & 0xf8;
  return (uVar2 | uVar2 >> 5) << 8 | (uVar1 | uVar1 >> 5) << 0x10 |
         ((uint)uVar3 & 0x1fffffff) >> 2 & 7 | ((uint)uVar3 & 0x1f) << 3 | 0xff000000;
}



/* Entry: 109790828; end: 10979094b;  */

void FUN_109790828(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 9 & 0x7c00 | uVar1 >> 6 & 0x3e0 | uVar1 >> 3 & 0x1f,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10979094c; end: 1097909bf;  */

uint FUN_10979094c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar5,2);
  uVar1 = (uint)(uVar5 >> 8) & 0x80;
  uVar1 = uVar1 | uVar1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar4 = (uint)uVar5;
  uVar2 = uVar4 >> 2 & 0xf8;
  uVar3 = (uint)(uVar5 >> 7) & 0xf8;
  return ((uVar4 & 0x1f) << 3 | (uVar4 & 0x1f) >> 2) << 0x10 | (uVar1 | uVar1 >> 4) << 0x18 |
         (uVar2 | uVar2 >> 5) << 8 | uVar3 | uVar3 >> 5;
}



/* Entry: 1097909c0; end: 109790b17;  */

void FUN_1097909c0(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar5;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      auVar6._4_4_ = uVar1;
      auVar6._0_4_ = uVar1;
      auVar6._8_4_ = uVar1;
      auVar6._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar7._8_8_ = 0x700000006;
      auVar7._0_8_ = 0x1300000010;
      auVar9._8_8_ = 0xfffffff9fffffffa;
      auVar9._0_8_ = 0xffffffedfffffff0;
      auVar9 = NEON_ushl(auVar6,auVar9,4);
      auVar7 = NEON_ushl(auVar6,auVar7,4);
      auVar8._0_5_ = CONCAT14(auVar9[4],(uint)(ushort)((auVar9[1] & 0x80) << 8)) & 0x1f00ffffff;
      auVar8._5_3_ = 0;
      auVar8[8] = auVar9[8] & 0xe0;
      auVar8[9] = auVar9[9] & 3;
      auVar8._10_3_ = 0;
      auVar8[0xd] = auVar7[0xd] & 0x7c;
      auVar8._14_2_ = 0;
      auVar7 = NEON_ext(auVar8,auVar8,8,1);
      uVar4 = CONCAT13(auVar7[3],
                       CONCAT12(auVar7[2],CONCAT11(auVar9[1] & 0x80 | auVar7[1],auVar7[0])));
      uVar5 = CONCAT17(auVar7[7],
                       CONCAT16(auVar7[6],
                                CONCAT15(auVar7[5],CONCAT14(auVar9[4] & 0x1f | auVar7[4],uVar4))));
      (**(code **)(param_1 + 0x100))
                (uVar5,auVar7._0_8_,0x1300000010,lVar2,uVar4 | (uint)((ulong)uVar5 >> 0x20),2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790b18; end: 109790b77;  */

uint FUN_109790b18(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar4,2);
  uVar3 = (uint)uVar4;
  uVar1 = uVar3 >> 2 & 0xf8;
  uVar2 = (uint)(uVar4 >> 7) & 0xf8;
  return (uVar1 | uVar1 >> 5) << 8 | ((uVar3 & 0x1f) << 3 | (uVar3 & 0x1f) >> 2) << 0x10 |
         uVar2 | uVar2 >> 5 | 0xff000000;
}



/* Entry: 109790b78; end: 109790c97;  */

void FUN_109790b78(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 6 & 0x3e0 | uVar1 >> 0x13 & 0x1f | (uVar1 >> 3 & 0x1f) << 10,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790c98; end: 109790d03;  */

uint FUN_109790c98(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar3,2);
  uVar1 = (uint)(uVar3 >> 8);
  uVar2 = (uint)uVar3;
  return ((uint)(uVar3 >> 4) & 0xf0 | uVar2 & 0xf00) << 0xc |
         (uVar1 & 0xfffff0 | (uVar1 & 0xffffff) >> 4 & 0xf) << 0x18 |
         (uVar2 & 0xf0 | (uVar2 & 0xf0) >> 4) << 8 | uVar2 & 0xf | (uVar2 & 0xf) << 4;
}



/* Entry: 109790d04; end: 109790e47;  */

void FUN_109790d04(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      auVar7._4_4_ = uVar1;
      auVar7._0_4_ = uVar1;
      auVar7._8_4_ = uVar1;
      auVar7._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar5._8_8_ = 0xfffffffcfffffff8;
      auVar5._0_8_ = 0xfffffff4fffffff0;
      auVar5 = NEON_ushl(auVar7,auVar5,4);
      auVar6._0_6_ = CONCAT15(auVar5[5],(uint5)(ushort)((auVar5[1] & 0xf0) << 8)) & 0xf00ffffffff;
      auVar6._6_2_ = 0;
      auVar6[8] = auVar5[8] & 0xf0;
      auVar6._9_3_ = 0;
      auVar6[0xc] = auVar5[0xc] & 0xf;
      auVar6._13_3_ = 0;
      auVar7 = NEON_ext(auVar6,auVar6,8,1);
      uVar4 = CONCAT13(auVar7[3],
                       CONCAT12(auVar7[2],CONCAT11(auVar5[1] & 0xf0 | auVar7[1],auVar7[0])));
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar4 | (uint)(CONCAT17(auVar7[7],
                                               CONCAT16(auVar7[6],
                                                        CONCAT15(auVar5[5] & 0xf | auVar7[5],
                                                                 CONCAT14(auVar7[4],uVar4)))) >>
                                     0x20),2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790e48; end: 109790eab;  */

uint FUN_109790e48(long param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(uVar2,2);
  uVar1 = (uint)uVar2;
  return ((uint)(uVar2 >> 4) & 0xf0 | uVar1 & 0xf00) << 0xc |
         (uVar1 & 0xf0 | (uVar1 & 0xf0) >> 4) << 8 | uVar1 & 0xf | (uVar1 & 0xf) << 4 | 0xff000000;
}



/* Entry: 109790eac; end: 109790fbb;  */

void FUN_109790eac(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 0xc & 0xf00 | uVar1 >> 8 & 0xf0 | uVar1 >> 4 & 0xf,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109790fbc; end: 10979101b;  */

uint FUN_109790fbc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(lVar3,2);
  uVar1 = (uint)((ulong)lVar3 >> 8);
  uVar2 = (uint)lVar3;
  return ((uVar2 & 0xf) << 4 | uVar2 & 0xf) << 0x10 |
         (uVar1 & 0xfffff0 | (uVar1 & 0xffffff) >> 4 & 0xf) << 0x18 |
         (uVar2 & 0xf0 | (uVar2 & 0xf0) >> 4) << 8 | (uVar2 & 0xf00 | uVar2 >> 4 & 0xff) >> 4;
}



/* Entry: 10979101c; end: 10979116b;  */

void FUN_10979101c(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar5;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      auVar6._4_4_ = uVar1;
      auVar6._0_4_ = uVar1;
      auVar6._8_4_ = uVar1;
      auVar6._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar7._8_8_ = 0x400000008;
      auVar7._0_8_ = 0x1400000010;
      auVar9._8_8_ = 0xfffffffcfffffff8;
      auVar9._0_8_ = 0xffffffecfffffff0;
      auVar9 = NEON_ushl(auVar6,auVar9,4);
      auVar7 = NEON_ushl(auVar6,auVar7,4);
      auVar8._0_5_ = CONCAT14(auVar9[4],(uint)(ushort)((auVar9[1] & 0xf0) << 8)) & 0xf00ffffff;
      auVar8._5_3_ = 0;
      auVar8[8] = auVar9[8] & 0xf0;
      auVar8._9_4_ = 0;
      auVar8[0xd] = auVar7[0xd] & 0xf;
      auVar8._14_2_ = 0;
      auVar7 = NEON_ext(auVar8,auVar8,8,1);
      uVar4 = CONCAT13(auVar7[3],
                       CONCAT12(auVar7[2],CONCAT11(auVar9[1] & 0xf0 | auVar7[1],auVar7[0])));
      uVar5 = CONCAT17(auVar7[7],
                       CONCAT16(auVar7[6],
                                CONCAT15(auVar7[5],CONCAT14(auVar9[4] & 0xf | auVar7[4],uVar4))));
      (**(code **)(param_1 + 0x100))
                (uVar5,auVar7._0_8_,0x1400000010,lVar2,uVar4 | (uint)((ulong)uVar5 >> 0x20),2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10979116c; end: 1097911c3;  */

uint FUN_10979116c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 2;
  (**(code **)(param_1 + 0xf8))(lVar2,2);
  uVar1 = (uint)lVar2;
  return (uVar1 & 0xf0 | (uVar1 & 0xf0) >> 4) << 8 | ((uVar1 & 0xf) << 4 | uVar1 & 0xf) << 0x10 |
         (uVar1 & 0xf00 | uVar1 >> 4 & 0xff) >> 4 | 0xff000000;
}



/* Entry: 1097911c4; end: 1097912ab;  */

void FUN_1097911c4(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 8 & 0xf0 | uVar1 >> 0x14 & 0xf | (uVar1 >> 4 & 0xf) << 8,2);
      lVar2 = lVar2 + 2;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097912ac; end: 1097912df;  */

int FUN_1097912ac(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(lVar1,1);
  return (int)lVar1 << 0x18;
}



/* Entry: 1097912e0; end: 1097913fb;  */

void FUN_1097912e0(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*(undefined1 *)(param_5 + 3),1);
      lVar1 = lVar1 + 1;
      param_5 = param_5 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1097913fc; end: 109791473;  */

uint FUN_1097913fc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(uVar3,1);
  uVar2 = (uint)uVar3;
  uVar1 = (uVar2 & 3) << 4 | (uVar2 & 3) << 6;
  return ((uVar2 & 0xe0) >> 3 | uVar2 >> 6 & 3 | uVar2 & 0xe0) << 0x10 |
         (uVar2 & 0x1c | (uVar2 & 0x1fffffff) >> 3 & 3 | ((uint)(uVar3 >> 2) & 7) << 5) << 8 |
         uVar1 | uVar1 >> 4 | 0xff000000;
}



/* Entry: 109791474; end: 1097914eb;  */

void FUN_109791474(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar1 >> 0x10 & 0xe0 | uVar1 >> 0xb & 0x1c | uVar1 >> 6 & 3,1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097914ec; end: 1097915cf;  */

void FUN_1097914ec(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    lVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      lVar2 = lVar3;
      (**(code **)(param_1 + 0xf8))(lVar3,1);
      uVar1 = (uint)lVar2;
      uVar5 = NEON_ushl(CONCAT44(uVar1,uVar1),0x200000005,4);
      uVar5 = uVar5 & 0xe0000000e0;
      uVar6 = NEON_ushl(uVar5,0xfffffffdfffffffa,4);
      uVar7 = NEON_ushl(uVar5,0xfffffffafffffffd,4);
      uVar6 = NEON_ushl(CONCAT17((byte)((ulong)uVar6 >> 0x38) | (byte)((ulong)uVar7 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar6 >> 0x30) |
                                          (byte)((ulong)uVar7 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar6 >> 0x28) |
                                                   (byte)((ulong)uVar7 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar6 >> 0x20) |
                                                            (byte)((ulong)uVar7 >> 0x20) |
                                                            (byte)(uVar5 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar6 >> 0x18) |
                                                                     (byte)((ulong)uVar7 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar6 >>
                                                                                    0x10) |
                                                                              (byte)((ulong)uVar7 >>
                                                                                    0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar6 >> 8) | (byte)((ulong)uVar7 >> 8),
                                                  (byte)uVar6 | (byte)uVar7 | (byte)uVar5))))))),
                        0x800000010,4);
      uVar1 = uVar1 & 0xc0 | (uVar1 & 0xc0) >> 2;
      *param_5 = CONCAT13((byte)((ulong)uVar6 >> 0x18) | (byte)((ulong)uVar6 >> 0x38),
                          CONCAT12((byte)((ulong)uVar6 >> 0x10) | (byte)((ulong)uVar6 >> 0x30),
                                   CONCAT11((byte)((ulong)uVar6 >> 8) | (byte)((ulong)uVar6 >> 0x28)
                                            ,(byte)uVar6 | (byte)((ulong)uVar6 >> 0x20)))) |
                 uVar1 >> 4 | uVar1 | 0xff000000;
      lVar3 = lVar3 + 1;
      uVar4 = uVar4 - 1;
      param_5 = param_5 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 1097915d0; end: 109791663;  */

uint FUN_1097915d0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(lVar2,1);
  uVar1 = (uint)lVar2;
  uVar3 = NEON_ushl(CONCAT44(uVar1,uVar1),0x200000005,4);
  uVar3 = uVar3 & 0xe0000000e0;
  uVar4 = NEON_ushl(uVar3,0xfffffffdfffffffa,4);
  uVar5 = NEON_ushl(uVar3,0xfffffffafffffffd,4);
  uVar4 = NEON_ushl(CONCAT17((byte)((ulong)uVar4 >> 0x38) | (byte)((ulong)uVar5 >> 0x38),
                             CONCAT16((byte)((ulong)uVar4 >> 0x30) | (byte)((ulong)uVar5 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar4 >> 0x28) |
                                               (byte)((ulong)uVar5 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                                        (byte)((ulong)uVar5 >> 0x20) |
                                                        (byte)(uVar3 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar4 >> 0x18) |
                                                                 (byte)((ulong)uVar5 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar4 >>
                                                                                0x10) |
                                                                          (byte)((ulong)uVar5 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar4 >> 8) | (byte)((ulong)uVar5 >> 8),
                                                  (byte)uVar4 | (byte)uVar5 | (byte)uVar3))))))),
                    0x800000010,4);
  uVar1 = uVar1 & 0xc0 | (uVar1 & 0xc0) >> 2;
  return CONCAT13((byte)((ulong)uVar4 >> 0x18) | (byte)((ulong)uVar4 >> 0x38),
                  CONCAT12((byte)((ulong)uVar4 >> 0x10) | (byte)((ulong)uVar4 >> 0x30),
                           CONCAT11((byte)((ulong)uVar4 >> 8) | (byte)((ulong)uVar4 >> 0x28),
                                    (byte)uVar4 | (byte)((ulong)uVar4 >> 0x20)))) | uVar1 >> 4 |
         uVar1 | 0xff000000;
}



/* Entry: 109791664; end: 1097916d7;  */

void FUN_109791664(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))(lVar2,uVar1 & 0xc0 | uVar1 >> 10 & 0x38 | uVar1 >> 0x15 & 7,1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097916d8; end: 1097917ab;  */

void FUN_1097916d8(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar9;
  undefined8 uVar8;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    lVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      lVar3 = lVar4;
      (**(code **)(param_1 + 0xf8))(lVar4,1);
      uVar2 = (uint)lVar3;
      uVar1 = uVar2 & 0xc0 | (uVar2 & 0xc0) >> 2;
      uVar7 = NEON_ushl(CONCAT44(uVar2,uVar2),0x400000002,4);
      uVar6 = (uint)(uVar7 & 0xc0000000c0);
      uVar9 = (uint)((uVar7 & 0xc0000000c0) >> 0x20);
      uVar6 = uVar6 + (uVar6 >> 2);
      uVar9 = uVar9 + (uVar9 >> 2);
      uVar8 = NEON_ushl(CONCAT44(uVar9 + (uVar9 >> 4),uVar6 + (uVar6 >> 4)),0x800000010,4);
      uVar2 = (uVar2 & 3) << 4 | (uVar2 & 3) << 6;
      *param_5 = (uint)uVar8 | (uVar1 | uVar1 >> 4) << 0x18 | uVar2 | uVar2 >> 4 |
                 (uint)((ulong)uVar8 >> 0x20);
      lVar4 = lVar4 + 1;
      uVar5 = uVar5 - 1;
      param_5 = param_5 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 1097917ac; end: 109791837;  */

uint FUN_1097917ac(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar7;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(lVar3,1);
  uVar2 = (uint)lVar3;
  uVar1 = uVar2 & 0xc0 | (uVar2 & 0xc0) >> 2;
  uVar5 = NEON_ushl(CONCAT44(uVar2,uVar2),0x400000002,4);
  uVar4 = (uint)(uVar5 & 0xc0000000c0);
  uVar7 = (uint)((uVar5 & 0xc0000000c0) >> 0x20);
  uVar4 = uVar4 + (uVar4 >> 2);
  uVar7 = uVar7 + (uVar7 >> 2);
  uVar6 = NEON_ushl(CONCAT44(uVar7 + (uVar7 >> 4),uVar4 + (uVar4 >> 4)),0x800000010,4);
  uVar2 = (uVar2 & 3) << 4 | (uVar2 & 3) << 6;
  return (uint)uVar6 | (uVar1 | uVar1 >> 4) << 0x18 | uVar2 | uVar2 >> 4 |
         (uint)((ulong)uVar6 >> 0x20);
}



/* Entry: 109791838; end: 1097918df;  */

void FUN_109791838(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      auVar8._4_4_ = uVar1;
      auVar8._0_4_ = uVar1;
      auVar8._8_4_ = uVar1;
      auVar8._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar6._8_8_ = 0xfffffffafffffff4;
      auVar6._0_8_ = 0xffffffeeffffffe8;
      auVar6 = NEON_ushl(auVar8,auVar6,4);
      bVar4 = auVar6[0] & 0xc0;
      auVar7._0_5_ = CONCAT14(auVar6[4],(uint)bVar4) & 0x3000ffffff;
      auVar7._5_3_ = 0;
      auVar7[8] = auVar6[8] & 0xc;
      auVar7._9_3_ = 0;
      auVar7[0xc] = auVar6[0xc] & 3;
      auVar7._13_3_ = 0;
      auVar8 = NEON_ext(auVar7,auVar7,8,1);
      uVar5 = CONCAT13(auVar8[3],CONCAT12(auVar8[2],CONCAT11(auVar8[1],bVar4 | auVar8[0])));
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar5 | (uint)(CONCAT17(auVar8[7],
                                               CONCAT16(auVar8[6],
                                                        CONCAT15(auVar8[5],
                                                                 CONCAT14(auVar6[4] & 0x30 |
                                                                          auVar8[4],uVar5)))) >>
                                     0x20),1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097918e0; end: 1097919bb;  */

void FUN_1097918e0(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar9;
  undefined8 uVar8;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar3 = uVar4;
      (**(code **)(param_1 + 0xf8))(uVar4,1);
      uVar2 = (uint)uVar3;
      uVar1 = uVar2 & 0xc0 | (uVar2 & 0xc0) >> 2;
      uVar7 = NEON_ushl(CONCAT44(uVar2,uVar2),0x400000006,4);
      uVar6 = (uint)(uVar7 & 0xc0000000c0);
      uVar9 = (uint)((uVar7 & 0xc0000000c0) >> 0x20);
      uVar6 = uVar6 + (uVar6 >> 2);
      uVar9 = uVar9 + (uVar9 >> 2);
      uVar8 = NEON_ushl(CONCAT44(uVar9 + (uVar9 >> 4),uVar6 + (uVar6 >> 4)),0x800000010,4);
      uVar2 = uVar2 & 0x30 | ((uint)(uVar3 >> 4) & 3) << 6;
      *param_5 = (uint)uVar8 | (uVar1 | uVar1 >> 4) << 0x18 | uVar2 | uVar2 >> 4 |
                 (uint)((ulong)uVar8 >> 0x20);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
      param_5 = param_5 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 1097919bc; end: 109791a4f;  */

uint FUN_1097919bc(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar7;
  undefined8 uVar6;
  
  uVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(uVar3,1);
  uVar2 = (uint)uVar3;
  uVar1 = uVar2 & 0xc0 | (uVar2 & 0xc0) >> 2;
  uVar5 = NEON_ushl(CONCAT44(uVar2,uVar2),0x400000006,4);
  uVar4 = (uint)(uVar5 & 0xc0000000c0);
  uVar7 = (uint)((uVar5 & 0xc0000000c0) >> 0x20);
  uVar4 = uVar4 + (uVar4 >> 2);
  uVar7 = uVar7 + (uVar7 >> 2);
  uVar6 = NEON_ushl(CONCAT44(uVar7 + (uVar7 >> 4),uVar4 + (uVar4 >> 4)),0x800000010,4);
  uVar2 = uVar2 & 0x30 | ((uint)(uVar3 >> 4) & 3) << 6;
  return (uint)uVar6 | (uVar1 | uVar1 >> 4) << 0x18 | uVar2 | uVar2 >> 4 |
         (uint)((ulong)uVar6 >> 0x20);
}



/* Entry: 109791a50; end: 109791b6b;  */

void FUN_109791a50(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      auVar8._4_4_ = uVar1;
      auVar8._0_4_ = uVar1;
      auVar8._8_4_ = uVar1;
      auVar8._12_4_ = uVar1;
      param_5 = param_5 + 1;
      auVar6._8_8_ = 0xfffffffefffffff4;
      auVar6._0_8_ = 0xffffffeaffffffe8;
      auVar6 = NEON_ushl(auVar8,auVar6,4);
      bVar4 = auVar6[0] & 0xc0;
      auVar7._0_5_ = CONCAT14(auVar6[4],(uint)bVar4) & 0x300ffffff;
      auVar7._5_3_ = 0;
      auVar7[8] = auVar6[8] & 0xc;
      auVar7._9_3_ = 0;
      auVar7[0xc] = auVar6[0xc] & 0x30;
      auVar7._13_3_ = 0;
      auVar8 = NEON_ext(auVar7,auVar7,8,1);
      uVar5 = CONCAT13(auVar8[3],CONCAT12(auVar8[2],CONCAT11(auVar8[1],bVar4 | auVar8[0])));
      (**(code **)(param_1 + 0x100))
                (lVar2,uVar5 | (uint)(CONCAT17(auVar8[7],
                                               CONCAT16(auVar8[6],
                                                        CONCAT15(auVar8[5],
                                                                 CONCAT14(auVar6[4] & 3 | auVar8[4],
                                                                          uVar5)))) >> 0x20),1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109791b6c; end: 109791bb3;  */

undefined4 FUN_109791b6c(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(uVar1,1);
  return *(undefined4 *)(*(long *)(param_1 + 0x98) + (uVar1 & 0xffffffff) * 4 + 4);
}



/* Entry: 109791bb4; end: 109791cb3;  */

void FUN_109791bb4(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,*(undefined1 *)
                        (*(long *)(param_1 + 0x98) +
                         ((ulong)(uVar1 >> 9 & 0x7c00 | uVar1 >> 6 & 0x3e0) |
                         (ulong)(uVar1 >> 3) & 0x1f) + 0x404),1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109791cb4; end: 109791cfb;  */

undefined4 FUN_109791cb4(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(uVar1,1);
  return *(undefined4 *)(*(long *)(param_1 + 0x98) + (uVar1 & 0xffffffff) * 4 + 4);
}



/* Entry: 109791cfc; end: 109791da3;  */

void FUN_109791cfc(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      uVar1 = *param_5;
      (**(code **)(param_1 + 0x100))
                (lVar2,*(undefined1 *)
                        (*(long *)(param_1 + 0x98) +
                         (ulong)((uVar1 & 0xff) * 0x3a + (uVar1 >> 8 & 0xff) * 0x12d +
                                 (uVar1 >> 0x10 & 0xff) * 0x99 >> 2) + 0x404),1);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109791da4; end: 109791e13;  */

void FUN_109791da4(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = (ulong)param_4;
    lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      lVar1 = lVar2;
      (**(code **)(param_1 + 0xf8))(lVar2,1);
      *param_5 = ((uint)lVar1 & 0xf) << 0x18 | (uint)lVar1 << 0x1c;
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109791e14; end: 109791e4b;  */

uint FUN_109791e14(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 + (long)param_2
  ;
  (**(code **)(param_1 + 0xf8))(lVar1,1);
  return ((uint)lVar1 & 0xf) << 0x18 | (uint)lVar1 << 0x1c;
}



/* Entry: 109791e4c; end: 109791eb7;  */

void FUN_109791e4c(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2;
    do {
      (**(code **)(param_1 + 0x100))(lVar1,*param_5 >> 0x1c,1);
      lVar1 = lVar1 + 1;
      uVar2 = uVar2 - 1;
      param_5 = param_5 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109791eb8; end: 109791f43;  */

void FUN_109791eb8(long param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xb8);
    uVar5 = param_2 << 2;
    do {
      lVar3 = lVar4 + (long)(iVar1 * param_3) * 4 + (long)(param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(lVar3,1);
      uVar2 = (uint)lVar3 >> (ulong)(uVar5 & 4);
      *param_5 = (uVar2 & 0xf) << 0x18 | uVar2 << 0x1c;
      uVar5 = uVar5 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109791f44; end: 109791f93;  */

uint FUN_109791f44(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(lVar2,1);
  uVar1 = (uint)lVar2 >> (ulong)((param_2 & 1) << 2);
  return (uVar1 & 0xf) << 0x18 | uVar1 << 0x1c;
}



/* Entry: 109791f94; end: 10979203b;  */

void FUN_109791f94(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar5 = *param_5;
      lVar1 = lVar7 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar3 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar2 = (uint)lVar6 & 0xf0 | uVar5 >> 0x1c;
      if ((param_2 & 1) != 0) {
        uVar2 = (uint)lVar6 & 0xf | (uVar5 >> 0x1c) << 4;
      }
      (*pcVar3)(lVar1,uVar2,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 10979203c; end: 109792117;  */

void FUN_10979203c(long param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < param_4) {
    lVar6 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    do {
      uVar5 = lVar6 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar5,1);
      uVar3 = (uint)uVar5 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar3 = (uint)(uVar5 >> 4) & 0xfffffff;
      }
      uVar1 = (uVar3 & 8) << 3 | (uVar3 >> 3 & 1) << 7;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar2 = (uVar3 & 6) << 3 | (uVar3 >> 1 & 3) << 6;
      uVar3 = (uVar3 & 1) << 6 | (uVar3 & 1) << 7;
      uVar3 = uVar3 | uVar3 >> 2;
      *param_5 = uVar3 | (uVar2 | uVar2 >> 4) << 8 | (uVar1 | uVar1 >> 4) << 0x10 | uVar3 >> 4 |
                 0xff000000;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792118; end: 1097921bf;  */

uint FUN_109792118(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar4,1);
  uVar3 = (uint)uVar4 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)(uVar4 >> 4) & 0xfffffff;
  }
  uVar1 = (uVar3 & 8) << 3 | (uVar3 >> 3 & 1) << 7;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar2 = (uVar3 & 6) << 3 | (uVar3 >> 1 & 3) << 6;
  uVar3 = (uVar3 & 1) << 6 | (uVar3 & 1) << 7;
  uVar3 = uVar3 | uVar3 >> 2;
  return uVar3 | (uVar2 | uVar2 >> 4) << 8 | (uVar1 | uVar1 >> 4) << 0x10 | uVar3 >> 4 | 0xff000000;
}



/* Entry: 1097921c0; end: 109792273;  */

void FUN_1097921c0(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar5 = *param_5;
      uVar5 = uVar5 >> 0x14 & 8 | uVar5 >> 0xd & 6 | uVar5 >> 7 & 1;
      lVar1 = lVar7 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar3 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar2 = (uint)lVar6 & 0xf0 | uVar5;
      if ((param_2 & 1) != 0) {
        uVar2 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar3)(lVar1,uVar2,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792274; end: 10979234f;  */

void FUN_109792274(long param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < param_4) {
    lVar6 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    do {
      uVar5 = lVar6 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar5,1);
      uVar3 = (uint)uVar5 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar3 = (uint)(uVar5 >> 4) & 0xfffffff;
      }
      uVar1 = (uVar3 & 1) << 6 | (uVar3 & 1) << 7;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar2 = (uVar3 & 6) << 3 | (uVar3 >> 1 & 3) << 6;
      uVar3 = (uVar3 & 8) << 3 | (uVar3 >> 3 & 1) << 7;
      uVar3 = uVar3 | uVar3 >> 2;
      *param_5 = uVar3 | (uVar2 | uVar2 >> 4) << 8 | (uVar1 | uVar1 >> 4) << 0x10 | uVar3 >> 4 |
                 0xff000000;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792350; end: 1097923f7;  */

uint FUN_109792350(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar4,1);
  uVar3 = (uint)uVar4 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)(uVar4 >> 4) & 0xfffffff;
  }
  uVar1 = (uVar3 & 1) << 6 | (uVar3 & 1) << 7;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar2 = (uVar3 & 6) << 3 | (uVar3 >> 1 & 3) << 6;
  uVar3 = (uVar3 & 8) << 3 | (uVar3 >> 3 & 1) << 7;
  uVar3 = uVar3 | uVar3 >> 2;
  return uVar3 | (uVar2 | uVar2 >> 4) << 8 | (uVar1 | uVar1 >> 4) << 0x10 | uVar3 >> 4 | 0xff000000;
}



/* Entry: 1097923f8; end: 1097924b3;  */

void FUN_1097923f8(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar4 = *param_5;
      uVar5 = uVar4 >> 0xd & 6 | uVar4 >> 0x17 & 1 | uVar4 >> 4 & 8;
      lVar1 = lVar7 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar2 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar4 = (uint)lVar6 & 0xf0 | uVar5;
      if ((param_2 & 1) != 0) {
        uVar4 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar2)(lVar1,uVar4,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 1097924b4; end: 1097925c7;  */

void FUN_1097924b4(long param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar8;
  undefined8 uVar7;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xb8);
    do {
      uVar6 = lVar4 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar6,1);
      uVar5 = (uint)uVar6 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar5 = (uint)(uVar6 >> 4) & 0xfffffff;
      }
      uVar1 = (uVar5 & 2) << 5 | (uVar5 >> 1 & 1) << 7;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar2 = (uVar5 & 1) << 6 | (uVar5 & 1) << 7;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar6 = NEON_ushl(CONCAT44(uVar5,uVar5),0x500000004,4);
      uVar5 = (uint)(uVar6 & 0x8000000080);
      uVar8 = (uint)((uVar6 & 0x8000000080) >> 0x20);
      uVar5 = uVar5 + (uVar5 >> 1);
      uVar8 = uVar8 + (uVar8 >> 1);
      uVar5 = uVar5 + (uVar5 >> 2);
      uVar8 = uVar8 + (uVar8 >> 2);
      uVar7 = NEON_ushl(CONCAT44(uVar8 + (uVar8 >> 4),uVar5 + (uVar5 >> 4)),0x1000000018,4);
      *param_5 = CONCAT13((byte)((ulong)uVar7 >> 0x18) | (byte)((ulong)uVar7 >> 0x38),
                          CONCAT12((byte)((ulong)uVar7 >> 0x10) | (byte)((ulong)uVar7 >> 0x30),
                                   CONCAT11((byte)((ulong)uVar7 >> 8) |
                                            (byte)uVar1 | (byte)(uVar1 >> 4) |
                                            (byte)((ulong)uVar7 >> 0x28),
                                            (byte)uVar7 |
                                            (byte)((ulong)uVar7 >> 0x20) | (byte)(uVar2 >> 4)))) |
                 uVar2;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 1097925c8; end: 109792697;  */

uint FUN_1097925c8(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar6;
  undefined8 uVar5;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar4,1);
  uVar3 = (uint)uVar4 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)(uVar4 >> 4) & 0xfffffff;
  }
  uVar1 = (uVar3 & 2) << 5 | (uVar3 >> 1 & 1) << 7;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar2 = (uVar3 & 1) << 6 | (uVar3 & 1) << 7;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar4 = NEON_ushl(CONCAT44(uVar3,uVar3),0x500000004,4);
  uVar3 = (uint)(uVar4 & 0x8000000080);
  uVar6 = (uint)((uVar4 & 0x8000000080) >> 0x20);
  uVar3 = uVar3 + (uVar3 >> 1);
  uVar6 = uVar6 + (uVar6 >> 1);
  uVar3 = uVar3 + (uVar3 >> 2);
  uVar6 = uVar6 + (uVar6 >> 2);
  uVar5 = NEON_ushl(CONCAT44(uVar6 + (uVar6 >> 4),uVar3 + (uVar3 >> 4)),0x1000000018,4);
  return CONCAT13((byte)((ulong)uVar5 >> 0x18) | (byte)((ulong)uVar5 >> 0x38),
                  CONCAT12((byte)((ulong)uVar5 >> 0x10) | (byte)((ulong)uVar5 >> 0x30),
                           CONCAT11((byte)((ulong)uVar5 >> 8) | (byte)uVar1 | (byte)(uVar1 >> 4) |
                                    (byte)((ulong)uVar5 >> 0x28),
                                    (byte)uVar5 | (byte)((ulong)uVar5 >> 0x20) | (byte)(uVar2 >> 4))
                          )) | uVar2;
}



/* Entry: 109792698; end: 10979274f;  */

void FUN_109792698(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar5 = *param_5;
      uVar5 = uVar5 >> 0x1c & 8 | uVar5 >> 0x15 & 4 | uVar5 >> 0xe & 2 | uVar5 >> 7 & 1;
      lVar1 = lVar7 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar3 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar2 = uVar5 | (uint)lVar6 & 0xf0;
      if ((param_2 & 1) != 0) {
        uVar2 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar3)(lVar1,uVar2,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792750; end: 10979286b;  */

void FUN_109792750(long param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar8;
  undefined8 uVar7;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xb8);
    do {
      uVar6 = lVar4 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar6,1);
      uVar5 = (uint)uVar6 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar5 = (uint)(uVar6 >> 4) & 0xfffffff;
      }
      uVar1 = (uVar5 & 2) << 5 | (uVar5 >> 1 & 1) << 7;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar2 = (uVar5 & 4) << 4 | (uVar5 >> 2 & 1) << 7;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar6 = NEON_ushl(CONCAT44(uVar5,uVar5),0x700000004,4);
      uVar5 = (uint)(uVar6 & 0x8000000080);
      uVar8 = (uint)((uVar6 & 0x8000000080) >> 0x20);
      uVar5 = uVar5 + (uVar5 >> 1);
      uVar8 = uVar8 + (uVar8 >> 1);
      uVar5 = uVar5 + (uVar5 >> 2);
      uVar8 = uVar8 + (uVar8 >> 2);
      uVar7 = NEON_ushl(CONCAT44(uVar8 + (uVar8 >> 4),uVar5 + (uVar5 >> 4)),0x1000000018,4);
      *param_5 = CONCAT13((byte)((ulong)uVar7 >> 0x18) | (byte)((ulong)uVar7 >> 0x38),
                          CONCAT12((byte)((ulong)uVar7 >> 0x10) | (byte)((ulong)uVar7 >> 0x30),
                                   CONCAT11((byte)((ulong)uVar7 >> 8) |
                                            (byte)uVar1 | (byte)(uVar1 >> 4) |
                                            (byte)((ulong)uVar7 >> 0x28),
                                            (byte)uVar7 |
                                            (byte)((ulong)uVar7 >> 0x20) | (byte)(uVar2 >> 4)))) |
                 uVar2;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 10979286c; end: 109792943;  */

uint FUN_10979286c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar6;
  undefined8 uVar5;
  
  uVar4 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar4,1);
  uVar3 = (uint)uVar4 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar3 = (uint)(uVar4 >> 4) & 0xfffffff;
  }
  uVar1 = (uVar3 & 2) << 5 | (uVar3 >> 1 & 1) << 7;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar2 = (uVar3 & 4) << 4 | (uVar3 >> 2 & 1) << 7;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar4 = NEON_ushl(CONCAT44(uVar3,uVar3),0x700000004,4);
  uVar3 = (uint)(uVar4 & 0x8000000080);
  uVar6 = (uint)((uVar4 & 0x8000000080) >> 0x20);
  uVar3 = uVar3 + (uVar3 >> 1);
  uVar6 = uVar6 + (uVar6 >> 1);
  uVar3 = uVar3 + (uVar3 >> 2);
  uVar6 = uVar6 + (uVar6 >> 2);
  uVar5 = NEON_ushl(CONCAT44(uVar6 + (uVar6 >> 4),uVar3 + (uVar3 >> 4)),0x1000000018,4);
  return CONCAT13((byte)((ulong)uVar5 >> 0x18) | (byte)((ulong)uVar5 >> 0x38),
                  CONCAT12((byte)((ulong)uVar5 >> 0x10) | (byte)((ulong)uVar5 >> 0x30),
                           CONCAT11((byte)((ulong)uVar5 >> 8) | (byte)uVar1 | (byte)(uVar1 >> 4) |
                                    (byte)((ulong)uVar5 >> 0x28),
                                    (byte)uVar5 | (byte)((ulong)uVar5 >> 0x20) | (byte)(uVar2 >> 4))
                          )) | uVar2;
}



/* Entry: 109792944; end: 109792a0b;  */

void FUN_109792944(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar4 = *param_5;
      uVar5 = uVar4 >> 0x1c & 8 | uVar4 >> 0x17 & 1 | uVar4 >> 0xe & 2 | uVar4 >> 5 & 4;
      lVar1 = lVar7 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar2 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar4 = uVar5 | (uint)lVar6 & 0xf0;
      if ((param_2 & 1) != 0) {
        uVar4 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar2)(lVar1,uVar4,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792a0c; end: 109792a9b;  */

void FUN_109792a0c(long param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar2 = *(int *)(param_1 + 0xb8);
    do {
      uVar3 = lVar4 + (long)(iVar2 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar3,1);
      uVar1 = (uint)uVar3 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar1 = (uint)(uVar3 >> 4) & 0xfffffff;
      }
      *param_5 = *(undefined4 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 4 + 4);
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792a9c; end: 109792afb;  */

undefined4 FUN_109792a9c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar2,1);
  uVar1 = (uint)uVar2 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)(uVar2 >> 4) & 0xfffffff;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 4 + 4);
}



/* Entry: 109792afc; end: 109792bc7;  */

void FUN_109792afc(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar5 = *param_5;
      uVar5 = *(byte *)(*(long *)(param_1 + 0x98) +
                        ((ulong)(uVar5 >> 9 & 0x7c00 | uVar5 >> 6 & 0x3e0) |
                        (ulong)(uVar5 >> 3) & 0x1f) + 0x404) & 0xf;
      lVar1 = lVar7 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar3 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar2 = (uint)lVar6 & 0xf0 | uVar5;
      if ((param_2 & 1) != 0) {
        uVar2 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar3)(lVar1,uVar2,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792bc8; end: 109792c57;  */

void FUN_109792bc8(long param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar2 = *(int *)(param_1 + 0xb8);
    do {
      uVar3 = lVar4 + (long)(iVar2 * param_3) * 4 + (long)((int)param_2 >> 1);
      (**(code **)(param_1 + 0xf8))(uVar3,1);
      uVar1 = (uint)uVar3 & 0xf;
      if ((param_2 & 1) != 0) {
        uVar1 = (uint)(uVar3 >> 4) & 0xfffffff;
      }
      *param_5 = *(undefined4 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 4 + 4);
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792c58; end: 109792cb7;  */

undefined4 FUN_109792c58(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 1);
  (**(code **)(param_1 + 0xf8))(uVar2,1);
  uVar1 = (uint)uVar2 & 0xf;
  if ((param_2 & 1) != 0) {
    uVar1 = (uint)(uVar2 >> 4) & 0xfffffff;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 4 + 4);
}



/* Entry: 109792cb8; end: 109792d97;  */

void FUN_109792cb8(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      uVar5 = *param_5;
      uVar5 = *(byte *)(*(long *)(param_1 + 0x98) +
                        (ulong)((uVar5 & 0xff) * 0x3a + (uVar5 >> 8 & 0xff) * 0x12d +
                                (uVar5 >> 0x10 & 0xff) * 0x99 >> 2) + 0x404) & 0xf;
      lVar1 = lVar7 + (long)(iVar4 * param_3) * 4 + (long)((int)param_2 >> 1);
      pcVar3 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,1);
      uVar2 = (uint)lVar6 & 0xf0 | uVar5;
      if ((param_2 & 1) != 0) {
        uVar2 = (uint)lVar6 & 0xf | uVar5 << 4;
      }
      (*pcVar3)(lVar1,uVar2,1);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792d98; end: 109792e27;  */

void FUN_109792d98(long param_1,uint param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (0 < param_4) {
    lVar4 = *(long *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xb8);
    do {
      lVar3 = lVar4 + (long)(iVar1 * param_3) * 4 + (long)((int)param_2 >> 5) * 4;
      (**(code **)(param_1 + 0xf8))(lVar3,4);
      uVar2 = (uint)lVar3 >> (ulong)(param_2 & 0x1f);
      uVar2 = (uVar2 & 1) << 6 | (uVar2 & 1) << 7;
      uVar2 = uVar2 | uVar2 >> 2;
      *param_5 = (uVar2 | uVar2 >> 4) << 0x18;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792e28; end: 109792e83;  */

int FUN_109792e28(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 5) * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar1 = (uint)lVar2 >> (ulong)(param_2 & 0x1f);
  uVar1 = (uVar1 & 1) << 6 | (uVar1 & 1) << 7;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 | uVar1 >> 4) << 0x18;
}



/* Entry: 109792e84; end: 109792f2b;  */

void FUN_109792e84(long param_1,uint param_2,int param_3,uint param_4,int *param_5)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    lVar7 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xb8);
    uVar8 = (ulong)param_4;
    do {
      iVar4 = *param_5;
      lVar1 = lVar7 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 5) * 4;
      uVar5 = 1 << (ulong)(param_2 & 0x1f);
      pcVar2 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,4);
      (*pcVar2)(lVar1,(uint)lVar6 & (uVar5 ^ 0xffffffff) | uVar5 & iVar4 >> 0x1f,4);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109792f2c; end: 109792fb3;  */

void FUN_109792f2c(long param_1,uint param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_4) {
    lVar3 = *(long *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xb8);
    do {
      lVar2 = lVar3 + (long)(iVar1 * param_3) * 4 + (long)((int)param_2 >> 5) * 4;
      (**(code **)(param_1 + 0xf8))(lVar2,4);
      *param_5 = *(undefined4 *)
                  (*(long *)(param_1 + 0x98) +
                   (ulong)((uint)lVar2 >> (ulong)(param_2 & 0x1f) & 1) * 4 + 4);
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 109792fb4; end: 10979300b;  */

undefined4 FUN_109792fb4(long param_1,uint param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)((int)param_2 >> 5) * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  return *(undefined4 *)
          (*(long *)(param_1 + 0x98) + (ulong)((uint)lVar1 >> (ulong)(param_2 & 0x1f) & 1) * 4 + 4);
}



/* Entry: 10979300c; end: 1097930e7;  */

void FUN_10979300c(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    iVar3 = *(int *)(param_1 + 0xb8);
    lVar7 = *(long *)(param_1 + 0xa8);
    uVar8 = (ulong)param_4;
    do {
      uVar4 = *param_5;
      bVar5 = *(byte *)(*(long *)(param_1 + 0x98) +
                        (ulong)((uVar4 & 0xff) * 0x3a + (uVar4 >> 8 & 0xff) * 0x12d +
                                (uVar4 >> 0x10 & 0xff) * 0x99 >> 2) + 0x404);
      lVar1 = lVar7 + (long)(iVar3 * param_3) * 4 + (long)((int)param_2 >> 5) * 4;
      uVar4 = 1 << (ulong)(param_2 & 0x1f);
      pcVar2 = *(code **)(param_1 + 0x100);
      lVar6 = lVar1;
      (**(code **)(param_1 + 0xf8))(lVar1,4);
      (*pcVar2)(lVar1,(uint)lVar6 & (uVar4 ^ 0xffffffff) | -(bVar5 & 1) & uVar4,4);
      param_2 = param_2 + 1;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 1097930e8; end: 109793197;  */

void FUN_1097930e8(long param_1,int param_2,int param_3,int param_4,float *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  ulong uVar4;
  undefined1 auVar5 [12];
  ulong uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [16];
  
  if (0 < param_4) {
    uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    uVar6 = uVar1;
    do {
      uVar2 = uVar6 + 4;
      (**(code **)(param_1 + 0xf8))(uVar6,4);
      uVar4 = CONCAT44((int)(uVar6 >> 10),(int)(uVar6 >> 0x14)) & 0x3fffff00000fff;
      auVar5._8_4_ = (int)uVar6;
      auVar5._0_8_ = uVar4;
      auVar3._1_11_ = auVar5._1_11_;
      auVar3[0] = (char)uVar4;
      auVar7._0_6_ = CONCAT15((char)(uVar4 >> 8),auVar3._0_5_ << 0x20) & 0x3ffffffffff;
      auVar7._6_2_ = 0;
      auVar7[8] = (undefined1)(uVar4 >> 0x20);
      auVar7[9] = (byte)(uVar4 >> 0x28) & 3;
      auVar7._10_2_ = 0;
      auVar7[0xc] = (undefined1)uVar6;
      auVar7[0xd] = (byte)(uVar6 >> 8) & 3;
      auVar8._4_10_ = auVar7._4_10_;
      auVar8._0_4_ = (uint)(uVar6 >> 0x1e) & 3;
      auVar8._14_2_ = 0;
      auVar8 = NEON_ucvtf(auVar8,4);
      param_5[2] = auVar8._8_4_ * 0.0009775171;
      param_5[3] = auVar8._12_4_ * 0.0009775171;
      *param_5 = auVar8._0_4_ * 0.33333334;
      param_5[1] = auVar8._4_4_ * 0.0009775171;
      uVar6 = uVar2;
      param_5 = param_5 + 4;
    } while (uVar2 < uVar1 + (long)param_4 * 4);
  }
  return;
}



/* Entry: 109793198; end: 10979325b;  */

undefined4
FUN_109793198(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(param_5 + 0xe8))();
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  func_0x0001097c2b44(&uStack_24,&uStack_20,1);
  return uStack_24;
}



/* Entry: 10979325c; end: 109793377;  */

void FUN_10979325c(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  ulong uVar11;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    pfVar3 = (float *)(param_5 + 0xc);
    uVar11 = NEON_fmov(0x3f800000,4);
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      fVar6 = 1.0;
      if (pfVar3[-1] <= 1.0) {
        fVar6 = pfVar3[-1];
      }
      fVar4 = 0.0;
      if (0.0 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar6 = 1.0;
      if (*pfVar3 <= 1.0) {
        fVar6 = *pfVar3;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      uVar7 = *(ulong *)(pfVar3 + -3);
      uVar7 = uVar7 ^ (uVar7 ^ uVar11) &
                      CONCAT44(-(uint)((float)(uVar11 >> 0x20) < (float)(uVar7 >> 0x20)),
                               -(uint)((float)uVar11 < (float)uVar7));
      iVar8 = -(uint)((float)uVar7 < 0.0);
      iVar10 = -(uint)((float)(uVar7 >> 0x20) < 0.0);
      fVar6 = (float)CONCAT13((byte)(uVar7 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                              CONCAT12((byte)(uVar7 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                       CONCAT11((byte)(uVar7 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                                (byte)uVar7 & ~(byte)iVar8)));
      iVar8 = (int)(fVar6 * 4.0);
      iVar10 = (int)((float)(CONCAT17((byte)(uVar7 >> 0x38) & ~(byte)((uint)iVar10 >> 0x18),
                                      CONCAT16((byte)(uVar7 >> 0x30) & ~(byte)((uint)iVar10 >> 0x10)
                                               ,CONCAT15((byte)(uVar7 >> 0x28) &
                                                         ~(byte)((uint)iVar10 >> 8),
                                                         CONCAT14((byte)(uVar7 >> 0x20) &
                                                                  ~(byte)iVar10,fVar6)))) >> 0x20) *
                    1024.0);
      uVar9 = NEON_ushl(CONCAT44(iVar10,iVar8),0xfffffff6fffffffe,4);
      uVar9 = NEON_ushl(CONCAT44(iVar10 - (int)((ulong)uVar9 >> 0x20),iVar8 - (int)uVar9),
                        0x140000001e,4);
      (**(code **)(param_1 + 0x100))
                (lVar1,CONCAT13((byte)((ulong)uVar9 >> 0x38) | (byte)((ulong)uVar9 >> 0x18),
                                CONCAT12((byte)((ulong)uVar9 >> 0x30) | (byte)((ulong)uVar9 >> 0x10)
                                         ,CONCAT11((byte)((ulong)uVar9 >> 0x28) |
                                                   (byte)((ulong)uVar9 >> 8),
                                                   (byte)((ulong)uVar9 >> 0x20) | (byte)uVar9))) |
                       ((int)(fVar4 * 1024.0) - ((uint)(int)(fVar4 * 1024.0) >> 10) & 0xffff) << 10
                       | (int)(fVar5 * 1024.0) - ((uint)(int)(fVar5 * 1024.0) >> 10) & 0xffff,4);
      pfVar3 = pfVar3 + 4;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 4;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109793378; end: 109793447;  */

void FUN_109793378(long param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (0 < param_4) {
    uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    uVar4 = uVar1;
    do {
      uVar2 = uVar4 + 4;
      (**(code **)(param_1 + 0xf8))(uVar4,4);
      uVar3 = (uint)uVar4;
      uVar4 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff6ffffffec,4);
      uVar5 = NEON_ucvtf(uVar4 & 0x3ff000003ff,4);
      *(ulong *)(param_5 + 1) =
           CONCAT44((float)((ulong)uVar5 >> 0x20) * 0.0009775171,(float)uVar5 * 0.0009775171);
      *param_5 = 0x3f800000;
      param_5[3] = (float)(uVar3 & 0x3ff) * 0.0009775171;
      param_5 = param_5 + 4;
      uVar4 = uVar2;
    } while (uVar2 < uVar1 + (long)param_4 * 4);
  }
  return;
}



/* Entry: 109793448; end: 1097934bf;  */

undefined8 FUN_109793448(long param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  uVar2 = NEON_ushl(CONCAT44((int)lVar1,(int)lVar1),0xfffffff6ffffffec,4);
  NEON_ucvtf(uVar2 & 0x3ff000003ff,4);
  return 0x3f800000;
}



/* Entry: 1097934c0; end: 1097935a3;  */

void FUN_1097934c0(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    pfVar5 = (float *)(param_5 + 0xc);
    uVar11 = NEON_fmov(0x3f800000,4);
    lVar3 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      fVar6 = 1.0;
      if (*pfVar5 <= 1.0) {
        fVar6 = *pfVar5;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      uVar8 = *(ulong *)(pfVar5 + -2);
      iVar1 = -(uint)((float)(uVar11 >> 0x20) < (float)(uVar8 >> 0x20));
      uVar8 = uVar8 ^ (uVar8 ^ uVar11) &
                      CONCAT17((char)((uint)iVar1 >> 0x18),
                               CONCAT16((char)((uint)iVar1 >> 0x10),
                                        CONCAT15((char)((uint)iVar1 >> 8),
                                                 CONCAT14((char)iVar1,
                                                          -(uint)((float)uVar11 < (float)uVar8)))));
      iVar1 = -(uint)((float)uVar8 < 0.0);
      iVar2 = -(uint)((float)(uVar8 >> 0x20) < 0.0);
      uVar9 = NEON_fcvtzu(CONCAT17((byte)(uVar8 >> 0x38) & ~(byte)((uint)iVar2 >> 0x18),
                                   CONCAT16((byte)(uVar8 >> 0x30) & ~(byte)((uint)iVar2 >> 0x10),
                                            CONCAT15((byte)(uVar8 >> 0x28) &
                                                     ~(byte)((uint)iVar2 >> 8),
                                                     CONCAT14((byte)(uVar8 >> 0x20) & ~(byte)iVar2,
                                                              CONCAT13((byte)(uVar8 >> 0x18) &
                                                                       ~(byte)((uint)iVar1 >> 0x18),
                                                                       CONCAT12((byte)(uVar8 >> 0x10
                                                                                      ) & ~(byte)((
                                                  uint)iVar1 >> 0x10),
                                                  CONCAT11((byte)(uVar8 >> 8) &
                                                           ~(byte)((uint)iVar1 >> 8),
                                                           (byte)uVar8 & ~(byte)iVar1))))))),10,4);
      uVar10 = (uint)((ulong)uVar9 >> 0x20);
      uVar9 = NEON_ushl(CONCAT44(uVar10 - CONCAT12((byte)((ulong)uVar9 >> 0x3a),
                                                   (short)(uVar10 >> 10)),
                                 (uint)uVar9 -
                                 (uint)CONCAT12((byte)((ulong)uVar9 >> 0x18) >> 2,
                                                (short)((uint)uVar9 >> 10))),0xa00000014,4);
      (**(code **)(param_1 + 0x100))
                (lVar3,(uint)((ulong)uVar9 >> 0x20) & 0x3fffc00 |
                       (uint)uVar9 |
                       (int)(fVar7 * 1024.0) - ((uint)(int)(fVar7 * 1024.0) >> 10) & 0xffff,4);
      pfVar5 = pfVar5 + 4;
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 4;
    } while (uVar4 != 0);
  }
  return;
}


