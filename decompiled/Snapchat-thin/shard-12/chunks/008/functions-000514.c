/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097c4918; end: 1097c4963;  */

void FUN_1097c4918(long param_1)

{
  long *plVar1;
  
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  plVar1 = *(long **)(param_1 + 0x170);
  if ((*(code **)(*plVar1 + 0xd0) != (code *)0x0) &&
     ((**(code **)(*plVar1 + 0xd0))(), (int)plVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x17c) = 1;
  }
  return;
}



/* Entry: 1097c4964; end: 1097c4987;  */

undefined8 FUN_1097c4964(void)

{
  return 1;
}



/* Entry: 1097c4988; end: 1097c4a43;  */

void FUN_1097c4988(long param_1,uint param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  
  func_0x0001097f6fa4(param_1,param_5);
  if ((param_2 - 0xb < 0x12) || ((param_2 < 10 && ((1 << (ulong)(param_2 & 0x1f) & 0x2e4U) != 0))))
  {
    FUN_1097e601c(param_3,auStack_50,*(byte *)(*(long *)(param_1 + 0x170) + 0x30) >> 5 & 1);
    func_0x0001097ed458(param_5,auStack_50);
  }
  if (param_4 != (undefined *)0x0) {
    puVar1 = &UNK_10dffe9b0;
    if (param_4 != (undefined *)0x11386a1e0) {
      puVar1 = param_4;
    }
    func_0x0001097ed458(param_5,puVar1);
  }
  return;
}



/* Entry: 1097c4a44; end: 1097c4fe3;  */

int FUN_1097c4a44(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  ulong uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_64;
  
  plVar10 = *(long **)(param_2 + 0x80);
  plVar9 = plVar10 + 0x21;
  while (plVar9 = (long *)*plVar9, plVar9 != plVar10 + 0x21) {
    if ((undefined *)plVar9[-0x23] == &UNK_110b11048) {
      return 0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x170);
  FUN_1097c3a40(lVar4,*(undefined4 *)(param_1 + 0x1d8));
  iVar3 = *(int *)(lVar4 + 0x1c);
  if (iVar3 != 0) {
    iVar8 = 0;
    goto LAB_1097c4d84;
  }
  puVar5 = (undefined *)0x1;
  _calloc(1,0x178);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &DAT_10dffecb8;
  }
  else {
    FUN_1097f6418();
    *(long *)(puVar5 + 0x170) = lVar4;
    func_0x0001097f6298(plVar10,puVar5,0);
  }
  uStack_c8 = *(undefined8 *)(param_2 + 0x50);
  uStack_d0 = *(undefined8 *)(param_2 + 0x48);
  uStack_b8 = *(undefined8 *)(param_2 + 0x60);
  uStack_c0 = *(undefined8 *)(param_2 + 0x58);
  uStack_a8 = *(undefined8 *)(param_2 + 0x70);
  uStack_b0 = *(undefined8 *)(param_2 + 0x68);
  FUN_1097d95c8(&uStack_d0);
  FUN_1097c3b24(lVar4,&uStack_d0);
  (**(code **)(*plVar10 + 0x38))(plVar10,0);
  iVar8 = *(int *)(param_2 + 0x38);
  if (*(int *)(param_1 + 0x1d8) == 0) {
LAB_1097c4b74:
    plVar9 = *(long **)(param_1 + 0x170);
    uVar2 = 0;
    if (*(code **)(*plVar9 + 0xe0) == (code *)0x0) {
LAB_1097c4bb8:
      uStack_64 = uVar2;
      lStack_98 = param_2 + 0x48;
      bVar1 = *(int *)(param_1 + 0x1d8) == 0;
      uStack_80 = (uint)(iVar8 - 1U < 2);
      if (bVar1) {
        uStack_74 = 0;
      }
      else {
        uStack_74 = *param_4;
      }
      uStack_6c = 0;
      uStack_70 = 0;
      uStack_7c = (ulong)!bVar1;
      uStack_88 = 0;
      uStack_a0 = 0;
      plVar9 = plVar10;
      lStack_90 = lVar4;
      FUN_1097eae14(plVar10,&uStack_a0);
      iVar3 = (int)plVar9;
      if (iVar3 != 0) goto LAB_1097c4d64;
      plVar9 = *(long **)(param_1 + 0x170);
      if (*(code **)(*plVar9 + 0xe0) != (code *)0x0) {
        if (*(int *)(param_1 + 0x1d8) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *param_4;
        }
        (**(code **)(*plVar9 + 0xe0))(plVar9,param_2,uVar7,param_5,0);
        iVar3 = (int)plVar9;
        if (iVar3 != 0) goto LAB_1097c4d64;
      }
      if ((((*(byte *)((long)plVar10 + 0x15) >> 5 & 1) == 0) ||
          (plVar9 = plVar10, FUN_1097f6b4c(), (int)plVar9 != 0)) &&
         (plVar9 = plVar10, func_0x0001097f6fa4(plVar10,&uStack_a0), (int)plVar9 != 0)) {
        iVar3 = (int)((ulong)uStack_a0 >> 0x20);
        uStack_e0 = CONCAT44(iVar3 << 8,(int)uStack_a0 << 8);
        uStack_d8 = CONCAT44(((int)((ulong)lStack_98 >> 0x20) + iVar3) * 0x100,
                             ((int)lStack_98 + (int)uStack_a0) * 0x100);
        FUN_1097d9534(&uStack_d0,&uStack_e0,0);
        func_0x0001097ed40c(&uStack_e0,&uStack_a0);
        lVar6 = lVar4;
        func_0x0001097c4de4(lVar4,&uStack_a0,0);
        iVar3 = (int)lVar6;
        if ((iVar3 != 0x68) && (iVar3 != 0)) goto LAB_1097c4d64;
      }
      if (*(int *)(lVar4 + 0x17c) != 0) {
        *(undefined4 *)(param_1 + 0x17c) = 1;
        func_0x0001097eec1c(param_1 + 0x188,lVar4 + 0x188);
      }
      if (*(int *)(lVar4 + 0x180) == 0) {
        iVar8 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x180) = 1;
        func_0x0001097eec1c(param_1 + 0x1a8,lVar4 + 0x1a8);
        iVar8 = 0;
        if (*(int *)(lVar4 + 0x180) != 0) {
          iVar8 = 0x68;
        }
      }
      if (*(int *)(param_2 + 0x38) != 0) {
        iVar3 = 0;
        param_3[1] = 0xffffff00ffffff;
        *param_3 = 0xff800000ff800000;
        goto LAB_1097c4d74;
      }
      iVar3 = (int)lVar4 + 0x1e8;
      FUN_1097d95c8();
      FUN_1097d9534(lVar4 + 0x1e8,lVar4 + 0x1c8,0);
      func_0x0001097ed40c(lVar4 + 0x1c8,param_3);
    }
    else {
      if (*(int *)(param_1 + 0x1d8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_4;
      }
      (**(code **)(*plVar9 + 0xe0))(plVar9,param_2,uVar7,param_5,1);
      iVar3 = (int)plVar9;
      uVar2 = (uint)(iVar3 == 0x69);
      if (iVar3 == 0x69 || iVar3 == 0) goto LAB_1097c4bb8;
LAB_1097c4d64:
      iVar8 = 0;
    }
    if ((*(int *)(param_1 + 0x1d8) != 0) && (iVar3 != 0)) {
      FUN_1097eab38(plVar10,*param_4);
    }
  }
  else {
    plVar9 = plVar10;
    FUN_1097eaa38(plVar10,param_4);
    iVar3 = (int)plVar9;
    if (iVar3 == 0) goto LAB_1097c4b74;
    iVar8 = 0;
  }
LAB_1097c4d74:
  FUN_1097f68f0(puVar5);
  func_0x0001097f61ac(puVar5);
LAB_1097c4d84:
  func_0x0001097f61ac(lVar4);
  if (iVar3 == 0) {
    return iVar8;
  }
  return iVar3;
}



/* Entry: 1097c4fe4; end: 1097c50e3;  */

undefined8 FUN_1097c4fe4(void)

{
  return 0;
}



/* Entry: 1097c50e4; end: 1097c53ff;  */

/* WARNING: Possible PIC construction at 0x0001097c5370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097c5374) */
/* WARNING: Removing unreachable block (ram,0x0001097c53b0) */
/* WARNING: Removing unreachable block (ram,0x0001097c537c) */
/* WARNING: Removing unreachable block (ram,0x0001097c5380) */
/* WARNING: Removing unreachable block (ram,0x0001097c53ac) */
/* WARNING: Removing unreachable block (ram,0x0001097c53b4) */

ulong FUN_1097c50e4(double param_1,double param_2,double param_3,double param_4,double param_5,
                   ulong param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  ulong uVar2;
  double *pdVar3;
  long lVar4;
  ulong unaff_x19;
  uint *puVar5;
  undefined8 unaff_x20;
  uint uVar6;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [48];
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar2 = param_6;
  if ((0.0 <= param_4 * param_4) &&
     (dVar7 = param_5 * param_5, 0.0 <= dVar7 && *(int *)(param_6 + 4) == 0)) {
    dVar10 = param_2;
    dStack_a8 = param_1;
    do {
      dVar12 = param_5 - param_4;
      if (411774.83229132136 < dVar12) {
        _fmod(dVar12,0x401921fb54442d18);
        dVar10 = 6.283185307179586;
        _fmod();
        dVar7 = param_4 + 411774.83229132136;
        param_5 = dVar7 + dVar12;
        dVar12 = param_5 - param_4;
      }
      if (dVar12 <= 3.141592653589793) {
        if (param_5 == param_4) {
          ___sincos_stret(param_4);
          dVar7 = dStack_a8 + dVar10 * param_3;
          param_2 = param_2 + param_4 * param_3;
          goto SUB_10980170c;
        }
        (**(code **)(*(long *)(param_6 + 0x20) + 0x140))(param_6,auStack_a0);
        if (*(int *)(param_6 + 4) == 0) {
          (**(code **)(*(long *)(param_6 + 0x20) + 0x108))(param_6);
        }
        else {
          dVar7 = 0.1;
        }
        dVar8 = param_3;
        FUN_1097d98f8(auStack_a0);
        pdVar3 = (double *)&UNK_10dffcc08;
        lVar4 = 0xb;
        goto LAB_1097c5278;
      }
      dVar7 = dVar12 * 0.5 + param_4;
      if ((int)param_7 == 0) {
        uVar2 = param_6;
        dVar10 = param_2;
        FUN_1097c50e4(dStack_a8,param_2,param_3,param_4,dVar7,param_6,0);
        param_4 = dVar7;
      }
      else {
        param_7 = 1;
        uVar2 = param_6;
        dVar10 = param_2;
        FUN_1097c50e4(dStack_a8,param_2,param_3,dVar7,param_5,param_6,1);
        param_5 = dVar7;
      }
    } while ((0.0 <= param_4 * param_4) &&
            (dVar7 = param_5 * param_5, 0.0 <= dVar7 && *(int *)(param_6 + 4) == 0));
  }
  return uVar2;
  while( true ) {
    pdVar3 = pdVar3 + 2;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
LAB_1097c5278:
    dStack_b8 = param_2;
    dStack_b0 = param_3;
    if (*pdVar3 < dVar7 / dVar8) {
      dVar11 = pdVar3[-1];
      goto LAB_1097c5328;
    }
  }
  unaff_x22 = 0xb;
  do {
    uVar6 = (uint)unaff_x22;
    unaff_x22 = (ulong)(uVar6 + 1);
    dVar11 = 3.141592653589793 / (double)unaff_x22;
    dVar9 = dVar11 * 0.25;
    ___sincos_stret();
    _pow();
    if (0x3e5 < uVar6) break;
    dVar10 = dVar10 * dVar10;
  } while (dVar7 / dVar8 < (dVar9 * 0.07407407407407407) / dVar10);
LAB_1097c5328:
  unaff_x21 = (ulong)(uint)(int)(ABS(dVar12) / dVar11);
  dVar7 = -(dVar12 / (double)(int)(ABS(dVar12) / dVar11));
  if ((int)param_7 != 1) {
    param_5 = param_4;
  }
  ___sincos_stret(param_5,dVar7);
  dVar7 = dStack_a8 + dVar7 * dStack_b0;
  param_2 = dStack_b8 + param_5 * dStack_b0;
  unaff_x30 = 0x1097c5374;
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x19 = param_6;
  unaff_x20 = param_7;
  unaff_x29 = puVar1;
SUB_10980170c:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar5 = (uint *)(param_6 + 4);
  if (*puVar5 == 0) {
    (**(code **)(*(long *)(param_6 + 0x20) + 0x1a8))(dVar7,param_2);
    if ((uint)param_6 != 0) {
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      _pthread_mutex_lock(0x1132e0448);
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        *puVar5 = (uint)param_6;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar6;
    }
  }
  return param_6;
}



/* Entry: 1097c5400; end: 1097c54af;  */

ulong FUN_1097c5400(double param_1,double param_2,double param_3,double param_4,double param_5,
                   ulong param_6)

{
  uint uVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = param_4;
  dVar6 = param_2;
  ___sincos_stret(param_4);
  dVar7 = param_3 * dVar6;
  dVar4 = param_5;
  ___sincos_stret(param_5);
  dVar5 = (param_5 - param_4) * 0.25;
  _tan(dVar5);
  dVar5 = dVar5 * 1.3333333333333333;
  puVar2 = (uint *)(param_6 + 4);
  if (*puVar2 == 0) {
    (**(code **)(*(long *)(param_6 + 0x20) + 0x1b8))
              ((param_1 + dVar7) - param_3 * dVar3 * dVar5,param_2 + param_3 * dVar3 + dVar7 * dVar5
               ,param_1 + param_3 * dVar6 + param_3 * dVar4 * dVar5,
               (param_2 + param_3 * dVar4) - param_3 * dVar6 * dVar5);
    if ((uint)param_6 != 0) {
      _pthread_mutex_lock(0x1132e0448);
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        *puVar2 = (uint)param_6;
      }
      _pthread_mutex_unlock(0x1132e0448);
      return (ulong)uVar1;
    }
  }
  return param_6;
}



/* Entry: 1097c54b0; end: 1097c5543;  */

undefined8 FUN_1097c54b0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = param_1[1] + param_2;
  uVar4 = 1;
  if ((-1 < (int)uVar1) && (!CARRY4(param_1[1],param_2))) {
    uVar2 = *param_1;
    if (uVar2 < uVar1) {
      uVar3 = uVar2 << 1;
      if (uVar2 == 0) {
        uVar3 = 1;
      }
      do {
        uVar6 = uVar3;
        uVar3 = uVar6 << 1;
      } while (uVar6 < uVar1);
      *param_1 = uVar6;
      lVar5 = *(long *)(param_1 + 4);
      _realloc(lVar5,(ulong)param_1[2] * (ulong)uVar6);
      if (lVar5 == 0) {
        *param_1 = uVar2;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        *(long *)(param_1 + 4) = lVar5;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 1097c5544; end: 1097c5573;  */

void FUN_1097c5544(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 4) == 0)) {
    lVar1 = 0;
    uVar2 = (ulong)*(uint *)(param_1 + 8);
  }
  else {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10) + uVar2 * param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_3,lVar1,uVar2);
  return;
}



/* Entry: 1097c5574; end: 1097c5633;  */

long FUN_1097c5574(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1097c54b0(param_1,param_3);
  if ((int)lVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar1 + (int)param_3;
    _memcpy(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * (ulong)uVar1,param_2,
            (ulong)*(uint *)(param_1 + 8) * (param_3 & 0xffffffff));
  }
  return lVar2;
}



/* Entry: 1097c5634; end: 1097c5787;  */

void FUN_1097c5634(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = 0;
  if (param_3 != 0) {
    lStack_38 = param_2;
  }
  lStack_28 = 0;
  if (param_3 != 0) {
    lStack_28 = param_4;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 4);
  lStack_30 = param_3;
  if (*(uint *)(param_1 + 4) != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    plVar1 = (long *)0x0;
    do {
      if (*plVar4 == param_2) {
        if (((code *)plVar4[2] != (code *)0x0) && (plVar4[1] != 0)) {
          (*(code *)plVar4[2])();
        }
        goto LAB_1097c56c0;
      }
      plVar2 = plVar1;
      if ((param_3 != 0) && (plVar2 = plVar4, plVar4[1] != 0)) {
        plVar2 = plVar1;
      }
      plVar4 = plVar4 + 3;
      uVar3 = uVar3 - 1;
      plVar1 = plVar2;
    } while (uVar3 != 0);
    plVar4 = plVar2;
    if (plVar2 != (long *)0x0) {
LAB_1097c56c0:
      plVar4[2] = lStack_28;
      plVar4[1] = lStack_30;
      *plVar4 = lStack_38;
      return;
    }
  }
  if (param_3 != 0) {
    FUN_1097c5574(param_1,&lStack_38,1);
  }
  return;
}



/* Entry: 1097c5788; end: 1097c57df;  */

int FUN_1097c5788(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  _pthread_mutex_lock(0x1132e0448);
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    *param_1 = param_3;
  }
  _pthread_mutex_unlock(0x1132e0448);
  return iVar1;
}



/* Entry: 1097c57e0; end: 1097c586b;  */

void FUN_1097c57e0(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar3 = param_2;
  do {
    uVar2 = uVar3 * 10;
    uVar4 = uVar2 / 0xd;
    if (uVar2 / 0xd < 2) {
      uVar4 = 1;
    }
    uVar3 = 0xb;
    if (0x19 < uVar2 - 0x75) {
      uVar3 = uVar4;
    }
    bVar1 = 1 < uVar3;
    uVar5 = (ulong)(param_2 - uVar3);
    plVar6 = param_1;
    uVar4 = uVar3;
    if (param_2 - uVar3 != 0) {
      do {
        lVar7 = *plVar6;
        if (*(int *)(param_1[uVar4] + 0x50) < *(int *)(lVar7 + 0x50)) {
          *plVar6 = param_1[uVar4];
          param_1[uVar4] = lVar7;
          bVar1 = true;
        }
        uVar5 = uVar5 - 1;
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar5 != 0);
    }
  } while (bVar1);
  return;
}



/* Entry: 1097c586c; end: 1097c5b1f;  */

undefined1 * FUN_1097c586c(long *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined1 auStack_110 [192];
  
  param_1[-1] = 0;
  plStack_198 = param_1 + -2;
  *plStack_198 = 0;
  param_1[param_2] = 0;
  puStack_190 = &uStack_168;
  plStack_140 = (long *)0x0;
  ppuStack_160 = &puStack_190;
  uStack_170 = 0;
  uStack_178 = 0x80000000;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_150 = 0x7fffffff;
  uStack_148 = 0;
  uStack_128 = 0x7fffffff00000000;
  uStack_130 = 0x8000000080000000;
  uStack_11c = 0;
  puVar6 = auStack_110;
  plStack_1a0 = param_1;
  puStack_138 = puStack_190;
  uStack_120 = param_3;
  uStack_118 = param_4;
  _setjmp();
  if ((int)puVar6 != 0) {
    return puVar6;
  }
  plVar11 = (long *)*plStack_1a0;
  iVar8 = (int)plVar11[10];
  iVar7 = (int)uStack_130;
  plStack_1a0 = plStack_1a0 + 1;
  do {
    uVar5 = (uint)puVar6;
    if (iVar8 == iVar7) {
      iVar7 = (int)uStack_130;
    }
    else {
      lVar10 = plStack_198[1];
      while (lVar10 != 0) {
        iVar8 = *(int *)(lVar10 + 0x54);
        uVar5 = (uint)puVar6;
        if ((int)plVar11[10] <= iVar8) break;
        if (iVar8 != (int)uStack_130) {
          if (uVar5 != 0) {
            FUN_1097c5eb0(&plStack_1a0);
            iVar8 = *(int *)(lVar10 + 0x54);
          }
          uStack_130 = CONCAT44(uStack_130._4_4_,iVar8);
          uVar5 = 0;
        }
        uVar4 = (uint)&plStack_1a0;
        FUN_1097c6128(&plStack_1a0,lVar10);
        uVar5 = uVar4 | uVar5;
        puVar6 = (undefined1 *)(ulong)uVar5;
        lVar10 = plStack_198[1];
      }
      if (uVar5 != 0) {
        FUN_1097c5eb0(&plStack_1a0);
      }
      iVar7 = (int)plVar11[10];
      uStack_130 = CONCAT44(uStack_130._4_4_,iVar7);
    }
    iVar9 = (int)uStack_128;
    uVar5 = uStack_128._4_4_;
    do {
      plVar12 = plVar11;
      if (plStack_140 != (long *)0x0) {
        plStack_140[1] = (long)(plVar12 + 5);
      }
      plVar12[5] = (long)plStack_140;
      plVar12[6] = (long)plVar12;
      *plVar12 = (long)(plVar12 + 5);
      plVar12[1] = 0;
      uVar4 = *(uint *)(plVar12 + 3);
      if ((int)uVar4 < (int)uVar5) {
        uStack_128 = (ulong)uVar4 << 0x20;
        uVar5 = uVar4;
      }
      iVar1 = iVar9 + 1;
      if (iVar9 == 0) {
        lVar10 = 1;
      }
      else {
        iVar8 = *(int *)((long)plVar12 + 0x54);
        iVar9 = iVar1;
        do {
          iVar3 = iVar9 >> 1;
          if (*(int *)(plStack_198[iVar3] + 0x54) <= iVar8) break;
          plStack_198[iVar9] = plStack_198[iVar3];
          iVar9 = iVar3;
        } while (iVar3 != 1);
        lVar10 = (long)iVar9;
      }
      plStack_198[lVar10] = (long)plVar12;
      plVar2 = plStack_1a0 + 1;
      plVar11 = (long *)*plStack_1a0;
      plStack_1a0 = plVar2;
      plStack_140 = plVar12;
      if (plVar11 == (long *)0x0) {
        uStack_128 = CONCAT44(uStack_128._4_4_,iVar1);
        lVar10 = plStack_198[1];
        if (lVar10 != 0) {
          uVar5 = 1;
          do {
            iVar8 = *(int *)(lVar10 + 0x54);
            if (iVar8 != (int)uStack_130) {
              if (uVar5 != 0) {
                FUN_1097c5eb0(&plStack_1a0);
                iVar8 = *(int *)(lVar10 + 0x54);
              }
              uStack_130 = CONCAT44(uStack_130._4_4_,iVar8);
              uVar5 = 0;
            }
            uVar4 = (uint)&plStack_1a0;
            FUN_1097c6128(&plStack_1a0,lVar10);
            uVar5 = uVar4 | uVar5;
            lVar10 = plStack_198[1];
          } while (lVar10 != 0);
        }
        return (undefined1 *)0x0;
      }
      iVar8 = (int)plVar11[10];
      iVar9 = iVar1;
    } while (iVar7 == iVar8);
    uStack_128 = CONCAT44(uStack_128._4_4_,iVar1);
    puVar6 = (undefined1 *)0x1;
  } while( true );
}



/* Entry: 1097c5b20; end: 1097c5eaf;  */

undefined8 * FUN_1097c5b20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *unaff_x22;
  long *plVar21;
  undefined8 *unaff_x23;
  byte bVar22;
  int iVar23;
  ulong uVar24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_1188;
  undefined8 *puStack_1180;
  ulong uStack_1178;
  ulong uStack_1170;
  undefined8 *puStack_1168;
  undefined8 *puStack_1160;
  undefined8 *puStack_1158;
  undefined8 uStack_1150;
  undefined8 *puStack_1148;
  undefined1 *puStack_1140;
  code *pcStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 auStack_928 [26];
  undefined8 auStack_858 [253];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = &uStack_1130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)((long)param_1 + 0x24);
  uVar24 = (ulong)uVar2;
  if (uVar2 == 1) {
    if (param_1 == param_3) {
      piVar9 = (int *)param_1[7];
      iVar7 = *piVar9;
      if (piVar9[2] < iVar7) {
        puVar12 = (undefined8 *)0x0;
        *piVar9 = piVar9[2];
        piVar9[2] = iVar7;
        goto LAB_1097c5e50;
      }
    }
    else {
      uStack_1128 = ((undefined8 *)param_1[7])[1];
      uStack_1130 = *(undefined8 *)param_1[7];
      iVar7 = (int)uStack_1130;
      if ((int)uStack_1128 < (int)uStack_1130) {
        uVar15 = (ulong)uStack_1130 >> 0x20;
        uStack_1130 = CONCAT44((int)uVar15,(int)uStack_1128);
        uVar15 = (ulong)uStack_1128 >> 0x20;
        uStack_1128 = CONCAT44((int)uVar15,iVar7);
      }
      FUN_1097c916c(param_3);
      FUN_1097c8e80(param_3,0,&uStack_1130);
      param_1 = param_3;
    }
  }
  else {
    if (uVar2 != 0) {
      unaff_x26 = param_1 + 6;
      unaff_x23 = (undefined8 *)0x7fffffff;
      uVar6 = 0x80000000;
      puVar12 = unaff_x26;
      do {
        uVar15 = (ulong)*(uint *)(puVar12 + 2);
        if (0 < (int)*(uint *)(puVar12 + 2)) {
          puVar17 = (uint *)(puVar12[1] + 4);
          uVar5 = uVar6;
          do {
            uVar6 = *puVar17;
            uVar1 = uVar6;
            if ((int)(uint)unaff_x23 <= (int)uVar6) {
              uVar1 = (uint)unaff_x23;
            }
            unaff_x23 = (undefined8 *)(ulong)uVar1;
            if ((int)uVar6 <= (int)uVar5) {
              uVar6 = uVar5;
            }
            uVar15 = uVar15 - 1;
            puVar17 = puVar17 + 4;
            uVar5 = uVar6;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)0x0);
      iVar7 = (int)unaff_x23 >> 8;
      iVar8 = ((int)uVar6 >> 8) - iVar7;
      uVar6 = iVar8 + 1;
      unaff_x25 = (ulong)uVar6;
      unaff_x20 = param_2;
      if ((int)uVar6 < (int)uVar2) {
        if (iVar8 < 0x100) {
LAB_1097c5c6c:
          _bzero(puVar19,-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | unaff_x25 << 3);
          unaff_x21 = puVar19;
          goto LAB_1097c5c78;
        }
        puVar19 = (undefined8 *)(unaff_x25 << 3);
        _malloc();
        unaff_x21 = puVar19;
        if (puVar19 != (undefined8 *)0x0) goto LAB_1097c5c6c;
LAB_1097c5ea4:
        puVar12 = (undefined8 *)0x1;
        param_1 = puVar19;
      }
      else {
        unaff_x21 = (undefined8 *)0x0;
LAB_1097c5c78:
        if ((int)uVar2 < 0x18) {
          puVar19 = auStack_858;
          puVar12 = auStack_928;
        }
        else {
          puVar19 = (undefined8 *)(uVar24 * 0x60 | 0x18);
          _malloc();
          if (puVar19 == (undefined8 *)0x0) {
            if (unaff_x21 != &uStack_1130) {
              puVar19 = unaff_x21;
              _free();
            }
            goto LAB_1097c5ea4;
          }
          puVar12 = puVar19 + uVar24 * 0xb;
        }
        uVar24 = 0;
        unaff_x23 = puVar12 + 2;
        do {
          uVar2 = *(uint *)(unaff_x26 + 2);
          if (0 < (int)uVar2) {
            lVar18 = 0;
            iVar23 = (int)uVar24;
            plVar16 = unaff_x23 + iVar23;
            piVar9 = (int *)(unaff_x26[1] + 8);
            uVar24 = (ulong)(iVar23 + uVar2);
            do {
              iVar4 = piVar9[-2];
              iVar3 = *piVar9;
              plVar20 = (long *)((long)puVar19 + lVar18 + (long)iVar23 * 0x58);
              lVar14 = 0x18;
              if (iVar3 <= iVar4) {
                lVar14 = 0x40;
              }
              *(int *)((long)plVar20 + lVar14) = iVar4;
              plVar21 = plVar20 + 4;
              if (iVar3 <= iVar4) {
                plVar21 = plVar20 + 9;
              }
              *(undefined4 *)plVar21 = 1;
              lVar14 = 0x40;
              if (iVar3 <= iVar4) {
                lVar14 = 0x18;
              }
              *(int *)((long)plVar20 + lVar14) = iVar3;
              plVar21 = plVar20 + 9;
              if (iVar3 <= iVar4) {
                plVar21 = plVar20 + 4;
              }
              *(undefined4 *)plVar21 = 0xffffffff;
              plVar20[2] = 0;
              plVar20[7] = 0;
              iVar3 = piVar9[-1];
              *(int *)(plVar20 + 10) = iVar3;
              *(int *)((long)plVar20 + 0x54) = piVar9[1];
              plVar21 = plVar16;
              if (unaff_x21 != (undefined8 *)0x0) {
                plVar21 = unaff_x21 + ((iVar3 >> 8) - iVar7);
                *plVar20 = *plVar21;
              }
              piVar9 = piVar9 + 4;
              *plVar21 = (long)plVar20;
              plVar16 = plVar16 + 1;
              lVar18 = lVar18 + 0x58;
            } while ((ulong)uVar2 * 0x58 - lVar18 != 0);
          }
          unaff_x26 = (undefined8 *)*unaff_x26;
        } while (unaff_x26 != (undefined8 *)0x0);
        unaff_x26 = (undefined8 *)0x0;
        if (unaff_x21 == (undefined8 *)0x0) {
          FUN_1097c57e0(unaff_x23,uVar24);
        }
        else {
          if (iVar8 < 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            puVar10 = (undefined8 *)0x2;
            do {
              plVar16 = (long *)unaff_x21[uVar24];
              if (plVar16 != (long *)0x0) {
                lVar18 = 0;
                iVar7 = (int)puVar10;
                do {
                  puVar12[iVar7 + lVar18] = plVar16;
                  plVar16 = (long *)*plVar16;
                  lVar18 = lVar18 + 1;
                } while (plVar16 != (long *)0x0);
                puVar10 = (undefined8 *)(lVar18 + ((ulong)puVar10 & 0xffffffff));
                unaff_x26 = puVar10;
                if (iVar7 + 1 < (int)puVar10) {
                  FUN_1097c57e0(puVar12 + iVar7);
                }
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != unaff_x25);
            uVar24 = (ulong)((int)puVar10 - 2);
          }
          if (unaff_x21 != &uStack_1130) {
            _free(unaff_x21);
          }
        }
        FUN_1097c916c(param_3);
        puVar12 = unaff_x23;
        FUN_1097c586c(unaff_x23,uVar24,param_2,param_3);
        param_1 = puVar12;
        unaff_x22 = puVar19;
        if (puVar19 != auStack_858) {
          param_1 = puVar19;
          _free();
        }
      }
      goto LAB_1097c5e50;
    }
    FUN_1097c916c();
    param_1 = param_3;
  }
  puVar12 = (undefined8 *)0x0;
LAB_1097c5e50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_1138 = FUN_1097c5eb0;
  iVar7 = *(int *)(param_1 + 0xe);
  puVar19 = param_1;
  if (*(int *)((long)param_1 + 0x74) != iVar7) {
    puVar19 = (undefined8 *)0x0;
    puStack_1180 = unaff_x26;
    uStack_1178 = unaff_x25;
    uStack_1170 = uVar24;
    puStack_1168 = unaff_x23;
    puStack_1160 = unaff_x22;
    puStack_1158 = unaff_x21;
    uStack_1150 = unaff_x20;
    puStack_1148 = puVar12;
    puStack_1140 = &stack0xfffffffffffffff0;
    if (param_1[0xc] != 0) {
      iVar8 = *(int *)((long)param_1 + 0x7c);
      puVar12 = (undefined8 *)param_1[0xd];
      puVar19 = puVar12;
      if (iVar8 < *(int *)(puVar12 + 3)) {
        do {
          puVar12 = (undefined8 *)puVar12[1];
        } while (iVar8 < *(int *)(puVar12 + 3));
        puVar19 = (undefined8 *)*puVar12;
      }
      else {
        do {
          puVar12 = puVar19;
          puVar19 = (undefined8 *)*puVar12;
        } while (*(int *)(puVar19 + 3) < iVar8);
      }
      FUN_1097c638c(param_1[0xc],0xffffffff,&uStack_1188);
      FUN_1097c6448(puVar19,uStack_1188);
      *puVar12 = puVar19;
      uVar11 = param_1[0xc];
      param_1[0xc] = 0;
      param_1[0xd] = uVar11;
      *(undefined4 *)((long)param_1 + 0x7c) = 0x7fffffff;
    }
    plVar20 = (long *)param_1[2];
    plVar16 = param_1 + 7;
    if (plVar20 != plVar16) {
      if (*(int *)(param_1 + 0x10) != 0) {
LAB_1097c5f6c:
        bVar22 = 0;
        plVar21 = plVar20;
        do {
          plVar21 = (long *)*plVar21;
          if (plVar21[2] == 0) {
            if (!(bool)(bVar22 & 1)) {
LAB_1097c5f84:
              iVar8 = (int)plVar21[3];
              if (iVar8 != *(int *)(*plVar21 + 0x18)) goto LAB_1097c5fb8;
            }
          }
          else {
            puVar19 = param_1;
            FUN_1097c62e0(param_1,plVar21,iVar7);
            if (bVar22 == 0) goto LAB_1097c5f84;
          }
          bVar22 = bVar22 + 1;
        } while( true );
      }
      do {
        iVar8 = (int)plVar20[4];
        lVar18 = plVar20[3];
        for (plVar21 = (long *)*plVar20; (int)plVar21[3] == (int)lVar18; plVar21 = (long *)*plVar21)
        {
          lVar14 = plVar21[2];
          if (lVar14 != 0) {
            *(undefined4 *)((long)plVar20 + 0x1c) = *(undefined4 *)((long)plVar21 + 0x1c);
            plVar20[2] = lVar14;
            plVar21[2] = 0;
          }
          iVar8 = (int)plVar21[4] + iVar8;
        }
        if (iVar8 == 0) {
          if (plVar20[2] != 0) {
            puVar19 = param_1;
            FUN_1097c62e0(param_1,plVar20,iVar7);
          }
        }
        else {
          do {
            plVar13 = plVar21;
            if (plVar13[2] != 0) {
              puVar19 = param_1;
              FUN_1097c62e0(param_1,plVar13,iVar7);
            }
            plVar21 = (long *)*plVar13;
            iVar8 = (int)plVar13[4] + iVar8;
          } while ((iVar8 != 0) || (iVar23 = (int)plVar13[3], iVar23 == (int)plVar21[3]));
          plVar21 = (long *)plVar20[2];
          if (plVar21 != plVar13) {
            if (plVar21 == (long *)0x0) {
LAB_1097c60c4:
              if ((int)plVar20[3] == iVar23) goto LAB_1097c60d8;
              *(int *)((long)plVar20 + 0x1c) = iVar7;
            }
            else if ((int)plVar21[3] != iVar23) {
              puVar19 = param_1;
              FUN_1097c62e0(param_1,plVar20,iVar7);
              iVar23 = (int)plVar13[3];
              goto LAB_1097c60c4;
            }
            plVar20[2] = (long)plVar13;
          }
LAB_1097c60d8:
          plVar21 = (long *)*plVar13;
        }
        plVar20 = plVar21;
      } while (plVar20 != plVar16);
LAB_1097c6104:
      *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_1 + 0xe);
    }
  }
  return puVar19;
LAB_1097c5fb8:
  plVar13 = (long *)plVar20[2];
  if (plVar13 == plVar21) goto LAB_1097c5ffc;
  if (plVar13 == (long *)0x0) {
LAB_1097c5fe8:
    if ((int)plVar20[3] == iVar8) goto LAB_1097c5ffc;
    *(int *)((long)plVar20 + 0x1c) = iVar7;
  }
  else if ((int)plVar13[3] != iVar8) {
    puVar19 = param_1;
    FUN_1097c62e0(param_1,plVar20,iVar7);
    iVar8 = (int)plVar21[3];
    goto LAB_1097c5fe8;
  }
  plVar20[2] = (long)plVar21;
LAB_1097c5ffc:
  plVar20 = (long *)*plVar21;
  if (plVar20 == plVar16) goto LAB_1097c6104;
  goto LAB_1097c5f6c;
}



/* Entry: 1097c5eb0; end: 1097c6127;  */

void FUN_1097c5eb0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  undefined8 uStack_58;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x74) != iVar2) {
    if (*(long *)(param_1 + 0x60) != 0) {
      iVar4 = *(int *)(param_1 + 0x7c);
      puVar9 = *(undefined8 **)(param_1 + 0x68);
      puVar10 = puVar9;
      if (iVar4 < *(int *)(puVar9 + 3)) {
        do {
          puVar9 = (undefined8 *)puVar9[1];
        } while (iVar4 < *(int *)(puVar9 + 3));
        puVar10 = (undefined8 *)*puVar9;
      }
      else {
        do {
          puVar9 = puVar10;
          puVar10 = (undefined8 *)*puVar9;
        } while (*(int *)(puVar10 + 3) < iVar4);
      }
      FUN_1097c638c(*(long *)(param_1 + 0x60),0xffffffff,&uStack_58);
      FUN_1097c6448(puVar10,uStack_58);
      *puVar9 = puVar10;
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = uVar6;
      *(undefined4 *)(param_1 + 0x7c) = 0x7fffffff;
    }
    plVar11 = *(long **)(param_1 + 0x10);
    plVar1 = (long *)(param_1 + 0x38);
    if (plVar11 != plVar1) {
      if (*(int *)(param_1 + 0x80) != 0) {
LAB_1097c5f6c:
        bVar13 = 0;
        plVar12 = plVar11;
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12[2] == 0) {
            if (!(bool)(bVar13 & 1)) {
LAB_1097c5f84:
              iVar4 = (int)plVar12[3];
              if (iVar4 != *(int *)(*plVar12 + 0x18)) goto LAB_1097c5fb8;
            }
          }
          else {
            FUN_1097c62e0(param_1,plVar12,iVar2);
            if (bVar13 == 0) goto LAB_1097c5f84;
          }
          bVar13 = bVar13 + 1;
        } while( true );
      }
      do {
        iVar4 = (int)plVar11[4];
        lVar3 = plVar11[3];
        for (plVar12 = (long *)*plVar11; (int)plVar12[3] == (int)lVar3; plVar12 = (long *)*plVar12)
        {
          lVar8 = plVar12[2];
          if (lVar8 != 0) {
            *(undefined4 *)((long)plVar11 + 0x1c) = *(undefined4 *)((long)plVar12 + 0x1c);
            plVar11[2] = lVar8;
            plVar12[2] = 0;
          }
          iVar4 = (int)plVar12[4] + iVar4;
        }
        if (iVar4 == 0) {
          if (plVar11[2] != 0) {
            FUN_1097c62e0(param_1,plVar11,iVar2);
          }
        }
        else {
          do {
            plVar7 = plVar12;
            if (plVar7[2] != 0) {
              FUN_1097c62e0(param_1,plVar7,iVar2);
            }
            plVar12 = (long *)*plVar7;
            iVar4 = (int)plVar7[4] + iVar4;
          } while ((iVar4 != 0) || (iVar5 = (int)plVar7[3], iVar5 == (int)plVar12[3]));
          plVar12 = (long *)plVar11[2];
          if (plVar12 != plVar7) {
            if (plVar12 == (long *)0x0) {
LAB_1097c60c4:
              if ((int)plVar11[3] == iVar5) goto LAB_1097c60d8;
              *(int *)((long)plVar11 + 0x1c) = iVar2;
            }
            else if ((int)plVar12[3] != iVar5) {
              FUN_1097c62e0(param_1,plVar11,iVar2);
              iVar5 = (int)plVar7[3];
              goto LAB_1097c60c4;
            }
            plVar11[2] = (long)plVar7;
          }
LAB_1097c60d8:
          plVar12 = (long *)*plVar7;
        }
        plVar11 = plVar12;
      } while (plVar11 != plVar1);
LAB_1097c6104:
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    }
  }
  return;
LAB_1097c5fb8:
  plVar7 = (long *)plVar11[2];
  if (plVar7 == plVar12) goto LAB_1097c5ffc;
  if (plVar7 == (long *)0x0) {
LAB_1097c5fe8:
    if ((int)plVar11[3] == iVar4) goto LAB_1097c5ffc;
    *(int *)((long)plVar11 + 0x1c) = iVar2;
  }
  else if ((int)plVar7[3] != iVar4) {
    FUN_1097c62e0(param_1,plVar11,iVar2);
    iVar4 = (int)plVar12[3];
    goto LAB_1097c5fe8;
  }
  plVar11[2] = (long)plVar12;
LAB_1097c5ffc:
  plVar11 = (long *)*plVar12;
  if (plVar11 == plVar1) goto LAB_1097c6104;
  goto LAB_1097c5f6c;
}



/* Entry: 1097c6128; end: 1097c62df;  */

bool FUN_1097c6128(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_2[1] + 0x20) == (int)param_2[4])) {
    bVar4 = (long *)*param_2 != param_2 + 5;
  }
  else {
    bVar4 = true;
  }
  lVar5 = param_2[2];
  if (lVar5 != 0) {
    lVar7 = *param_2;
    if (*(int *)(lVar7 + 0x18) == (int)param_2[3]) {
      *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    else {
      FUN_1097c62e0(param_1,param_2,*(undefined4 *)(param_1 + 0x70));
    }
  }
  plVar8 = (long *)param_2[1];
  plVar6 = *(long **)(param_1 + 0x68);
  if (*(long **)(param_1 + 0x68) == param_2) {
    *(long **)(param_1 + 0x68) = plVar8;
    plVar6 = plVar8;
  }
  lVar5 = *param_2;
  *plVar8 = lVar5;
  *(long **)(lVar5 + 8) = plVar8;
  plVar8 = param_2 + 5;
  lVar5 = param_2[7];
  if (lVar5 != 0) {
    lVar7 = param_2[5];
    if (*(int *)(lVar7 + 0x18) == (int)param_2[8]) {
      *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)((long)param_2 + 0x44);
      *(long *)(lVar7 + 0x10) = lVar5;
    }
    else {
      FUN_1097c62e0(param_1,plVar8,*(undefined4 *)(param_1 + 0x70));
      plVar6 = *(long **)(param_1 + 0x68);
    }
  }
  plVar9 = (long *)param_2[6];
  if (plVar6 == plVar8) {
    *(long **)(param_1 + 0x68) = plVar9;
  }
  lVar5 = *plVar8;
  *plVar9 = lVar5;
  *(long **)(lVar5 + 8) = plVar9;
  lVar5 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x78);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 0x78) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + (long)iVar2 * 8);
    if (iVar2 < 3) {
      lVar11 = 1;
    }
    else {
      iVar1 = *(int *)(lVar7 + 0x54);
      iVar12 = 2;
      iVar10 = 1;
      do {
        iVar14 = iVar3;
        if ((iVar12 != iVar3) &&
           (iVar14 = (int)((long)iVar12 | 1U),
           *(int *)(*(long *)(lVar5 + (long)iVar12 * 8) + 0x54) <=
           *(int *)(*(long *)(lVar5 + ((long)iVar12 | 1U) * 8) + 0x54))) {
          iVar14 = iVar12;
        }
        lVar13 = *(long *)(lVar5 + (long)iVar14 * 8);
        lVar11 = (long)iVar10;
        if (iVar1 <= *(int *)(lVar13 + 0x54)) goto LAB_1097c62c8;
        *(long *)(lVar5 + lVar11 * 8) = lVar13;
        iVar12 = iVar14 * 2;
        iVar10 = iVar14;
      } while (iVar12 < iVar2);
      lVar11 = (long)iVar14;
    }
LAB_1097c62c8:
    *(long *)(lVar5 + lVar11 * 8) = lVar7;
  }
  return bVar4;
}



/* Entry: 1097c62e0; end: 1097c638b;  */

ulong FUN_1097c62e0(ulong param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  undefined8 uStack_78;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_2c = *(int *)(param_2 + 0x1c);
  iStack_24 = (int)param_3;
  uVar1 = param_1;
  if (iStack_2c < iStack_24) {
    if (*(int *)(param_1 + 0x84) == 0) {
      uStack_30 = *(undefined4 *)(param_2 + 0x18);
      uStack_28 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18);
      uVar5 = *(ulong *)(param_1 + 0x88);
      param_3 = (undefined8 *)&uStack_30;
      FUN_1097c8e80(uVar5,0);
      uVar4 = (uint)uVar5;
      uVar1 = uVar5;
    }
    else {
      uStack_30 = *(undefined4 *)(param_2 + 0x18);
      uStack_40 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18);
      uVar1 = *(ulong *)(param_1 + 0x88);
      iStack_3c = iStack_2c;
      uStack_38 = uStack_40;
      iStack_34 = iStack_24;
      uStack_28 = uStack_30;
      FUN_1097fef80(uVar1,iStack_2c,param_3,&uStack_30,&uStack_40);
      uVar4 = **(uint **)(param_1 + 0x88);
      uVar5 = (ulong)uVar4;
    }
    if (uVar4 != 0) {
      uVar4 = (uint)uVar5;
      puVar2 = (ulong *)(param_1 + 0x90);
      _longjmp();
      puVar6 = (ulong *)*puVar2;
      if (puVar6 == (ulong *)0x0) {
        uVar1 = 0;
        *param_3 = puVar2;
      }
      else {
        uVar1 = *puVar6;
        if ((int)puVar6[3] < (int)puVar2[3]) {
          *param_3 = puVar6;
          uVar5 = puVar2[1];
          *puVar6 = (ulong)puVar2;
          puVar6[1] = uVar5;
          puVar2[1] = (ulong)puVar6;
          puVar6 = puVar2;
        }
        else {
          *param_3 = puVar2;
        }
        *puVar6 = 0;
        if ((uVar4 != 0) && (uVar1 != 0)) {
          uVar7 = 1;
          uVar5 = uVar1;
          do {
            FUN_1097c638c(uVar5,uVar7 - 1,&uStack_78);
            uVar3 = *param_3;
            FUN_1097c6448(uVar3,uStack_78);
            *param_3 = uVar3;
            if (uVar4 <= uVar7) {
              return uVar5;
            }
            uVar7 = uVar7 + 1;
            uVar1 = 0;
          } while (uVar5 != 0);
        }
      }
      return uVar1;
    }
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  return uVar1;
}



/* Entry: 1097c638c; end: 1097c6447;  */

long FUN_1097c638c(long *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    lVar4 = 0;
    *param_3 = param_1;
  }
  else {
    lVar4 = *plVar2;
    if ((int)plVar2[3] < (int)param_1[3]) {
      *param_3 = plVar2;
      lVar3 = param_1[1];
      *plVar2 = (long)param_1;
      plVar2[1] = lVar3;
      param_1[1] = (long)plVar2;
      plVar2 = param_1;
    }
    else {
      *param_3 = param_1;
    }
    *plVar2 = 0;
    if ((param_2 != 0) && (lVar4 != 0)) {
      uVar5 = 1;
      lVar3 = lVar4;
      do {
        FUN_1097c638c(lVar3,uVar5 - 1,&uStack_38);
        uVar1 = *param_3;
        FUN_1097c6448(uVar1,uStack_38);
        *param_3 = uVar1;
        if (param_2 <= uVar5) {
          return lVar3;
        }
        uVar5 = uVar5 + 1;
        lVar4 = 0;
      } while (lVar3 != 0);
    }
  }
  return lVar4;
}



/* Entry: 1097c6448; end: 1097c64d3;  */

long * FUN_1097c6448(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  plVar4 = (long *)param_1[1];
  iVar5 = (int)param_1[3];
  iVar6 = (int)param_2[3];
  plVar3 = param_1;
  if (iVar5 <= iVar6) goto LAB_1097c646c;
  param_2[1] = (long)plVar4;
  plVar1 = param_1;
  plVar2 = param_2;
  plVar3 = param_2;
  do {
    if (iVar5 < iVar6) {
      plVar1[1] = (long)plVar4;
      *plVar4 = (long)plVar1;
      param_2 = plVar2;
      while( true ) {
        iVar5 = (int)plVar1[3];
        param_1 = plVar1;
LAB_1097c646c:
        if (iVar6 < iVar5) break;
        plVar1 = (long *)*param_1;
        plVar4 = param_1;
        if (plVar1 == (long *)0x0) {
          param_2[1] = (long)param_1;
          *param_1 = (long)param_2;
          return plVar3;
        }
      }
      param_2[1] = (long)plVar4;
      *plVar4 = (long)param_2;
    }
    else {
      param_2 = (long *)*plVar2;
      param_1 = plVar1;
      plVar4 = plVar2;
      if (param_2 == (long *)0x0) {
        plVar1[1] = (long)plVar2;
        *plVar2 = (long)plVar1;
        return plVar3;
      }
    }
    iVar6 = (int)param_2[3];
    plVar1 = param_1;
    plVar2 = param_2;
  } while( true );
}



/* Entry: 1097c64d4; end: 1097c668b;  */

int * FUN_1097c64d4(int *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  int *piVar20;
  byte bVar21;
  long *plVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_2030 [1360];
  int aiStack_af0 [172];
  int aiStack_840 [510];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  piVar25 = aiStack_2030;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_1[0xd];
  uVar23 = (ulong)uVar19;
  if (uVar19 == 0) {
    piVar20 = (int *)0x0;
  }
  else {
    if ((int)uVar19 < 0x2b) {
      if ((int)uVar19 < 1) {
        param_1 = aiStack_af0;
        uVar10 = 0;
        param_4 = 0;
        uVar23 = param_2;
        param_5 = param_3;
        FUN_1097c668c();
        param_2 = uVar10;
        param_3 = uVar23;
        piVar20 = param_1;
        goto LAB_1097c6640;
      }
      piVar9 = aiStack_840;
      piVar20 = aiStack_af0;
    }
    else {
      piVar9 = (int *)(uVar23 * 0xc0 | 8);
      uVar10 = param_2;
      uVar12 = param_3;
      _malloc();
      if (piVar9 == (int *)0x0) {
        param_1 = piVar9;
        param_2 = uVar10;
        param_3 = uVar12;
        piVar20 = (int *)0x1;
        goto LAB_1097c6640;
      }
      piVar20 = piVar9 + uVar23 * 0xc;
      piVar25 = piVar20 + uVar23 * 4 + 2;
    }
    uVar10 = 0;
    lVar16 = 0;
    piVar14 = piVar20 + 2;
    puVar18 = *(undefined8 **)(param_1 + 0x10);
    do {
      uVar27 = puVar18[1];
      uVar26 = *puVar18;
      uVar28 = *(undefined8 *)((long)puVar18 + 0xc);
      *(undefined8 *)(piVar25 + 5) = *(undefined8 *)((long)puVar18 + 0x14);
      *(undefined8 *)(piVar25 + 3) = uVar28;
      *(undefined8 *)(piVar25 + 2) = uVar27;
      *(undefined8 *)piVar25 = uVar26;
      puVar2 = (undefined4 *)((long)piVar9 + lVar16);
      piVar25[10] = 0;
      piVar25[0xb] = 0;
      piVar25[0xc] = 0;
      piVar25[0xd] = 0;
      piVar25[8] = 0;
      piVar25[9] = 0;
      *(undefined4 **)(piVar14 + -2) = puVar2;
      uVar3 = *(undefined4 *)((long)puVar18 + 0x14);
      puVar2[2] = *(undefined4 *)(puVar18 + 2);
      *(int **)(puVar2 + 4) = piVar25;
      puVar2[6] = 1;
      *(undefined4 **)piVar14 = puVar2 + 6;
      uVar5 = *(undefined4 *)puVar18;
      *puVar2 = 0;
      puVar2[1] = uVar5;
      lVar16 = lVar16 + 0x30;
      puVar2[7] = uVar5;
      puVar2[8] = uVar3;
      *(int **)(puVar2 + 10) = piVar25;
      piVar25 = piVar25 + 0x10;
      uVar10 = (ulong)((int)uVar10 + 2);
      piVar14 = piVar14 + 4;
      puVar18 = (undefined8 *)((long)puVar18 + 0x1c);
    } while (uVar23 * 0x30 - lVar16 != 0);
    param_4 = 0;
    uVar23 = param_2;
    param_5 = param_3;
    FUN_1097c668c();
    param_1 = piVar20;
    param_2 = uVar10;
    param_3 = uVar23;
    if (piVar9 != aiStack_840) {
      _free();
      param_1 = piVar9;
      param_2 = uVar10;
      param_3 = uVar23;
    }
  }
LAB_1097c6640:
  iVar11 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return piVar20;
  }
  ___stack_chk_fail();
  uVar23 = param_2;
  do {
    uVar6 = (int)uVar23 * 10;
    uVar19 = uVar6 / 0xd;
    if (uVar6 / 0xd < 2) {
      uVar19 = 1;
    }
    uVar7 = 0xb;
    if (0x19 < uVar6 - 0x75) {
      uVar7 = uVar19;
    }
    uVar23 = (ulong)uVar7;
    bVar13 = 1 < uVar7;
    uVar7 = (int)param_2 - uVar7;
    uVar10 = (ulong)uVar7;
    piVar25 = param_1;
    uVar12 = uVar23;
    if (uVar7 != 0) {
      do {
        piVar20 = *(int **)piVar25;
        piVar9 = *(int **)(param_1 + uVar12 * 2);
        iVar8 = piVar20[2] - piVar9[2];
        if ((piVar20[2] - piVar9[2] == 0) &&
           (iVar8 = piVar20[1] - piVar9[1], piVar20[1] - piVar9[1] == 0)) {
          iVar8 = *piVar20 - *piVar9;
          if (*piVar20 - *piVar9 == 0) {
            iVar8 = (int)((ulong)((long)piVar20 - (long)piVar9) >> 3) * -0x55555555;
          }
        }
        if (0 < iVar8) {
          *(int **)piVar25 = piVar9;
          *(int **)(param_1 + uVar12 * 2) = piVar20;
          bVar13 = true;
        }
        uVar10 = uVar10 - 1;
        piVar25 = piVar25 + 2;
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar10 != 0);
    }
  } while (bVar13);
  (param_1 + (long)(int)param_2 * 2)[0] = 0;
  (param_1 + (long)(int)param_2 * 2)[1] = 0;
  piVar25 = *(int **)param_1;
  if (piVar25 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar8 = -0x80000000;
  piVar20 = (int *)0x0;
  piVar9 = (int *)0x0;
LAB_1097c67a4:
  if (piVar25[2] != iVar8) {
    piVar14 = piVar20;
    if (iVar11 == 0) {
      while (piVar14 != (int *)0x0) {
        plVar22 = (long *)(piVar14 + 0xc);
        iVar4 = piVar14[6];
        piVar24 = *(int **)(piVar14 + 10);
        if (*plVar22 == 0) {
          piVar15 = piVar24;
          if (piVar24 == (int *)0x0) break;
          do {
            if (*(long *)(piVar15 + 0xc) != 0) {
              if (*piVar14 == *piVar15) {
                lVar16 = *(long *)(piVar15 + 0xc);
                *(undefined8 *)(piVar14 + 0xe) = *(undefined8 *)(piVar15 + 0xe);
                *plVar22 = lVar16;
                *(long *)(piVar15 + 0xc) = 0;
              }
              break;
            }
            piVar1 = piVar15 + 10;
            piVar15 = *(int **)piVar1;
          } while (*(int **)piVar1 != (int *)0x0);
        }
        do {
          do {
            piVar15 = piVar24;
            if (piVar15 == (int *)0x0) {
              bVar13 = true;
              goto LAB_1097c693c;
            }
            if ((*(long *)(piVar15 + 0xc) != 0) &&
               (piVar24 = piVar15, FUN_1097c6b70(piVar15,iVar8,param_4,param_5), (int)piVar24 != 0))
            {
              return piVar24;
            }
            piVar24 = *(int **)(piVar15 + 10);
            iVar4 = piVar15[6] + iVar4;
          } while (iVar4 != 0);
          bVar13 = false;
          if (piVar24 == (int *)0x0) goto LAB_1097c693c;
        } while (*piVar15 == *piVar24);
        bVar13 = false;
LAB_1097c693c:
        piVar24 = (int *)*plVar22;
        if (piVar24 == piVar15) {
          if (bVar13) break;
        }
        else {
          if (piVar24 == (int *)0x0) {
            if (bVar13) break;
LAB_1097c6988:
            if (*piVar14 == *piVar15) goto LAB_1097c69a0;
            piVar14[0xe] = iVar8;
          }
          else {
            if (bVar13) goto LAB_1097c69b4;
            if (*piVar24 != *piVar15) {
              piVar24 = piVar14;
              FUN_1097c6b70(piVar14,iVar8,param_4,param_5);
              if ((int)piVar24 != 0) {
                return piVar24;
              }
              goto LAB_1097c6988;
            }
          }
          *plVar22 = (long)piVar15;
        }
LAB_1097c69a0:
        piVar14 = *(int **)(piVar15 + 10);
      }
    }
    else {
      while (piVar14 != (int *)0x0) {
        piVar24 = *(int **)(piVar14 + 10);
        if (piVar24 != (int *)0x0) {
          bVar21 = 0;
          piVar15 = piVar24;
          do {
            if ((*(long *)(piVar15 + 0xc) != 0) &&
               (piVar24 = piVar15, FUN_1097c6b70(piVar15,iVar8,param_4,param_5), (int)piVar24 != 0))
            {
              return piVar24;
            }
            piVar24 = *(int **)(piVar15 + 10);
            if (!(bool)(bVar21 & 1)) {
              bVar13 = false;
              if (piVar24 == (int *)0x0) goto LAB_1097c681c;
              if (*piVar15 != *piVar24) {
                bVar13 = false;
                goto LAB_1097c681c;
              }
            }
            bVar21 = bVar21 + 1;
            piVar15 = piVar24;
          } while (piVar24 != (int *)0x0);
        }
        bVar13 = true;
        piVar15 = piVar24;
LAB_1097c681c:
        piVar24 = *(int **)(piVar14 + 0xc);
        if (piVar24 == piVar15) {
          if (bVar13) break;
        }
        else {
          if (piVar24 == (int *)0x0) {
            if (bVar13) break;
LAB_1097c6868:
            if (*piVar14 == *piVar15) goto LAB_1097c6880;
            piVar14[0xe] = iVar8;
          }
          else {
            if (bVar13) goto LAB_1097c69b4;
            if (*piVar24 != *piVar15) {
              piVar24 = piVar14;
              FUN_1097c6b70(piVar14,iVar8,param_4,param_5);
              if ((int)piVar24 != 0) {
                return piVar24;
              }
              goto LAB_1097c6868;
            }
          }
          *(int **)(piVar14 + 0xc) = piVar15;
        }
LAB_1097c6880:
        piVar14 = *(int **)(piVar15 + 10);
      }
    }
    goto LAB_1097c69cc;
  }
  goto LAB_1097c69d4;
LAB_1097c69b4:
  FUN_1097c6b70(piVar14,iVar8,param_4,param_5);
  if ((int)piVar14 != 0) {
    return piVar14;
  }
LAB_1097c69cc:
  iVar8 = piVar25[2];
LAB_1097c69d4:
  if (*piVar25 == 1) {
    piVar15 = *(int **)(piVar25 + 4);
    lVar16 = *(long *)(piVar15 + 8);
    piVar14 = *(int **)(piVar15 + 10);
    piVar24 = piVar14;
    if (lVar16 != 0) {
      *(int **)(lVar16 + 0x28) = piVar14;
      piVar24 = piVar20;
    }
    if (piVar14 != (int *)0x0) {
      *(long *)(piVar14 + 8) = lVar16;
    }
    if ((piVar9 == piVar15) && (piVar9 = piVar14, *(int **)(piVar15 + 8) != (int *)0x0)) {
      piVar9 = *(int **)(piVar15 + 8);
    }
    piVar25 = *(int **)(piVar25 + 4);
    piVar14 = piVar9;
    if ((*(long *)(piVar25 + 0xc) != 0) &&
       (FUN_1097c6b70(piVar25,iVar8,param_4,param_5), (int)piVar25 != 0)) {
      return piVar25;
    }
  }
  else {
    piVar14 = piVar9;
    piVar24 = piVar20;
    if ((*piVar25 == 0) &&
       (piVar14 = *(int **)(piVar25 + 4), piVar24 = piVar14, piVar9 != (int *)0x0)) {
      iVar4 = *piVar14;
      iVar17 = *piVar9 - iVar4;
      if (iVar17 == 0) {
        iVar17 = piVar14[5] - piVar9[5];
      }
      if (iVar17 < 0) {
        do {
          while( true ) {
            piVar25 = piVar9;
            piVar9 = *(int **)(piVar25 + 10);
            if (piVar9 == (int *)0x0) {
              *(int **)(piVar25 + 10) = piVar14;
              *(int **)(piVar14 + 8) = piVar25;
              piVar14[10] = 0;
              piVar14[0xb] = 0;
              piVar24 = piVar20;
              goto LAB_1097c6b40;
            }
            if (*piVar9 == iVar4) break;
            if (-1 < *piVar9 - iVar4) goto LAB_1097c6b28;
          }
        } while (piVar14[5] - piVar9[5] < 0);
LAB_1097c6b28:
        *(int **)(piVar25 + 10) = piVar14;
        *(int **)(piVar14 + 8) = piVar25;
        *(int **)(piVar14 + 10) = piVar9;
        *(int **)(piVar9 + 8) = piVar14;
        piVar24 = piVar20;
      }
      else {
        if (iVar17 == 0) {
          lVar16 = *(long *)(piVar9 + 10);
          *(int **)(piVar14 + 8) = piVar9;
          *(long *)(piVar14 + 10) = lVar16;
          if (lVar16 != 0) {
            *(int **)(lVar16 + 0x20) = piVar14;
          }
        }
        else {
          do {
            piVar25 = piVar9;
            piVar9 = *(int **)(piVar25 + 8);
            if (piVar9 == (int *)0x0) {
              *(int **)(piVar25 + 8) = piVar14;
              piVar14[8] = 0;
              piVar14[9] = 0;
              *(int **)(piVar14 + 10) = piVar25;
              goto LAB_1097c6b40;
            }
            iVar17 = *piVar9 - iVar4;
            if (iVar17 == 0) {
              iVar17 = piVar14[5] - piVar9[5];
            }
          } while (0 < iVar17);
          *(int **)(piVar25 + 8) = piVar14;
          *(int **)(piVar14 + 8) = piVar9;
          *(int **)(piVar14 + 10) = piVar25;
        }
        *(int **)(piVar9 + 10) = piVar14;
        piVar24 = piVar20;
      }
    }
  }
LAB_1097c6b40:
  param_1 = param_1 + 2;
  piVar25 = *(int **)param_1;
  piVar20 = piVar24;
  piVar9 = piVar14;
  if (piVar25 == (int *)0x0) {
    return (int *)0x0;
  }
  goto LAB_1097c67a4;
}



/* Entry: 1097c668c; end: 1097c6b6f;  */

void FUN_1097c668c(undefined8 *param_1,uint param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  byte bVar15;
  long *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  
  uVar9 = param_2;
  do {
    uVar3 = uVar9 * 10;
    uVar11 = uVar3 / 0xd;
    if (uVar3 / 0xd < 2) {
      uVar11 = 1;
    }
    uVar9 = 0xb;
    if (0x19 < uVar3 - 0x75) {
      uVar9 = uVar11;
    }
    bVar5 = 1 < uVar9;
    uVar12 = (ulong)(param_2 - uVar9);
    puVar13 = param_1;
    uVar11 = uVar9;
    if (param_2 - uVar9 != 0) {
      do {
        piVar19 = (int *)*puVar13;
        piVar14 = (int *)param_1[uVar11];
        iVar4 = piVar19[2] - piVar14[2];
        if ((piVar19[2] - piVar14[2] == 0) &&
           (iVar4 = piVar19[1] - piVar14[1], piVar19[1] - piVar14[1] == 0)) {
          iVar4 = *piVar19 - *piVar14;
          if (*piVar19 - *piVar14 == 0) {
            iVar4 = (int)((ulong)((long)piVar19 - (long)piVar14) >> 3) * -0x55555555;
          }
        }
        if (0 < iVar4) {
          *puVar13 = piVar14;
          param_1[uVar11] = piVar19;
          bVar5 = true;
        }
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar12 != 0);
    }
  } while (bVar5);
  param_1[(int)param_2] = 0;
  piVar19 = (int *)*param_1;
  if (piVar19 == (int *)0x0) {
    return;
  }
  iVar4 = -0x80000000;
  piVar14 = (int *)0x0;
  piVar18 = (int *)0x0;
LAB_1097c67a4:
  if (piVar19[2] != iVar4) {
    piVar6 = piVar14;
    if (param_3 == 0) {
      while (piVar6 != (int *)0x0) {
        plVar16 = (long *)(piVar6 + 0xc);
        iVar2 = piVar6[6];
        piVar17 = *(int **)(piVar6 + 10);
        if (*plVar16 == 0) {
          piVar7 = piVar17;
          if (piVar17 == (int *)0x0) break;
          do {
            if (*(long *)(piVar7 + 0xc) != 0) {
              if (*piVar6 == *piVar7) {
                lVar8 = *(long *)(piVar7 + 0xc);
                *(undefined8 *)(piVar6 + 0xe) = *(undefined8 *)(piVar7 + 0xe);
                *plVar16 = lVar8;
                *(long *)(piVar7 + 0xc) = 0;
              }
              break;
            }
            piVar1 = piVar7 + 10;
            piVar7 = *(int **)piVar1;
          } while (*(int **)piVar1 != (int *)0x0);
        }
        do {
          do {
            piVar7 = piVar17;
            if (piVar7 == (int *)0x0) {
              bVar5 = true;
              goto LAB_1097c693c;
            }
            if ((*(long *)(piVar7 + 0xc) != 0) &&
               (piVar17 = piVar7, FUN_1097c6b70(piVar7,iVar4,param_4,param_5), (int)piVar17 != 0)) {
              return;
            }
            piVar17 = *(int **)(piVar7 + 10);
            iVar2 = piVar7[6] + iVar2;
          } while (iVar2 != 0);
          bVar5 = false;
          if (piVar17 == (int *)0x0) goto LAB_1097c693c;
        } while (*piVar7 == *piVar17);
        bVar5 = false;
LAB_1097c693c:
        piVar17 = (int *)*plVar16;
        if (piVar17 == piVar7) {
          if (bVar5) break;
        }
        else {
          if (piVar17 == (int *)0x0) {
            if (bVar5) break;
LAB_1097c6988:
            if (*piVar6 == *piVar7) goto LAB_1097c69a0;
            piVar6[0xe] = iVar4;
          }
          else {
            if (bVar5) goto LAB_1097c69b4;
            if (*piVar17 != *piVar7) {
              piVar17 = piVar6;
              FUN_1097c6b70(piVar6,iVar4,param_4,param_5);
              if ((int)piVar17 != 0) {
                return;
              }
              goto LAB_1097c6988;
            }
          }
          *plVar16 = (long)piVar7;
        }
LAB_1097c69a0:
        piVar6 = *(int **)(piVar7 + 10);
      }
    }
    else {
      while (piVar6 != (int *)0x0) {
        piVar17 = *(int **)(piVar6 + 10);
        if (piVar17 != (int *)0x0) {
          bVar15 = 0;
          piVar7 = piVar17;
          do {
            if ((*(long *)(piVar7 + 0xc) != 0) &&
               (piVar17 = piVar7, FUN_1097c6b70(piVar7,iVar4,param_4,param_5), (int)piVar17 != 0)) {
              return;
            }
            piVar17 = *(int **)(piVar7 + 10);
            if (!(bool)(bVar15 & 1)) {
              bVar5 = false;
              if (piVar17 == (int *)0x0) goto LAB_1097c681c;
              if (*piVar7 != *piVar17) {
                bVar5 = false;
                goto LAB_1097c681c;
              }
            }
            bVar15 = bVar15 + 1;
            piVar7 = piVar17;
          } while (piVar17 != (int *)0x0);
        }
        bVar5 = true;
        piVar7 = piVar17;
LAB_1097c681c:
        piVar17 = *(int **)(piVar6 + 0xc);
        if (piVar17 == piVar7) {
          if (bVar5) break;
        }
        else {
          if (piVar17 == (int *)0x0) {
            if (bVar5) break;
LAB_1097c6868:
            if (*piVar6 == *piVar7) goto LAB_1097c6880;
            piVar6[0xe] = iVar4;
          }
          else {
            if (bVar5) goto LAB_1097c69b4;
            if (*piVar17 != *piVar7) {
              piVar17 = piVar6;
              FUN_1097c6b70(piVar6,iVar4,param_4,param_5);
              if ((int)piVar17 != 0) {
                return;
              }
              goto LAB_1097c6868;
            }
          }
          *(int **)(piVar6 + 0xc) = piVar7;
        }
LAB_1097c6880:
        piVar6 = *(int **)(piVar7 + 10);
      }
    }
    goto LAB_1097c69cc;
  }
  goto LAB_1097c69d4;
LAB_1097c69b4:
  FUN_1097c6b70(piVar6,iVar4,param_4,param_5);
  if ((int)piVar6 != 0) {
    return;
  }
LAB_1097c69cc:
  iVar4 = piVar19[2];
LAB_1097c69d4:
  if (*piVar19 == 1) {
    piVar7 = *(int **)(piVar19 + 4);
    lVar8 = *(long *)(piVar7 + 8);
    piVar6 = *(int **)(piVar7 + 10);
    piVar17 = piVar6;
    if (lVar8 != 0) {
      *(int **)(lVar8 + 0x28) = piVar6;
      piVar17 = piVar14;
    }
    if (piVar6 != (int *)0x0) {
      *(long *)(piVar6 + 8) = lVar8;
    }
    if ((piVar18 == piVar7) && (piVar18 = piVar6, *(int **)(piVar7 + 8) != (int *)0x0)) {
      piVar18 = *(int **)(piVar7 + 8);
    }
    lVar8 = *(long *)(piVar19 + 4);
    piVar6 = piVar18;
    if ((*(long *)(lVar8 + 0x30) != 0) &&
       (FUN_1097c6b70(lVar8,iVar4,param_4,param_5), (int)lVar8 != 0)) {
      return;
    }
  }
  else {
    piVar6 = piVar18;
    piVar17 = piVar14;
    if ((*piVar19 == 0) &&
       (piVar6 = *(int **)(piVar19 + 4), piVar17 = piVar6, piVar18 != (int *)0x0)) {
      iVar2 = *piVar6;
      iVar10 = *piVar18 - iVar2;
      if (iVar10 == 0) {
        iVar10 = piVar6[5] - piVar18[5];
      }
      if (iVar10 < 0) {
        do {
          while( true ) {
            piVar19 = piVar18;
            piVar18 = *(int **)(piVar19 + 10);
            if (piVar18 == (int *)0x0) {
              *(int **)(piVar19 + 10) = piVar6;
              *(int **)(piVar6 + 8) = piVar19;
              piVar6[10] = 0;
              piVar6[0xb] = 0;
              piVar17 = piVar14;
              goto LAB_1097c6b40;
            }
            if (*piVar18 == iVar2) break;
            if (-1 < *piVar18 - iVar2) goto LAB_1097c6b28;
          }
        } while (piVar6[5] - piVar18[5] < 0);
LAB_1097c6b28:
        *(int **)(piVar19 + 10) = piVar6;
        *(int **)(piVar6 + 8) = piVar19;
        *(int **)(piVar6 + 10) = piVar18;
        *(int **)(piVar18 + 8) = piVar6;
        piVar17 = piVar14;
      }
      else {
        if (iVar10 == 0) {
          lVar8 = *(long *)(piVar18 + 10);
          *(int **)(piVar6 + 8) = piVar18;
          *(long *)(piVar6 + 10) = lVar8;
          if (lVar8 != 0) {
            *(int **)(lVar8 + 0x20) = piVar6;
          }
        }
        else {
          do {
            piVar19 = piVar18;
            piVar18 = *(int **)(piVar19 + 8);
            if (piVar18 == (int *)0x0) {
              *(int **)(piVar19 + 8) = piVar6;
              piVar6[8] = 0;
              piVar6[9] = 0;
              *(int **)(piVar6 + 10) = piVar19;
              goto LAB_1097c6b40;
            }
            iVar10 = *piVar18 - iVar2;
            if (iVar10 == 0) {
              iVar10 = piVar6[5] - piVar18[5];
            }
          } while (0 < iVar10);
          *(int **)(piVar19 + 8) = piVar6;
          *(int **)(piVar6 + 8) = piVar18;
          *(int **)(piVar6 + 10) = piVar19;
        }
        *(int **)(piVar18 + 10) = piVar6;
        piVar17 = piVar14;
      }
    }
  }
LAB_1097c6b40:
  param_1 = param_1 + 1;
  piVar19 = (int *)*param_1;
  piVar14 = piVar17;
  piVar18 = piVar6;
  if (piVar19 == (int *)0x0) {
    return;
  }
  goto LAB_1097c67a4;
}



/* Entry: 1097c6b70; end: 1097c6bf7;  */

void FUN_1097c6b70(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_2c = param_1[0xe];
  iStack_24 = (int)param_2;
  if (iStack_2c < iStack_24) {
    if (param_3 == 0) {
      uStack_30 = *param_1;
      uStack_28 = **(undefined4 **)(param_1 + 0xc);
      FUN_1097c8e80(param_4,0,&uStack_30);
    }
    else {
      FUN_1097fef80(param_4,iStack_2c,param_2,param_1,*(undefined8 *)(param_1 + 0xc));
    }
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 1097c6bf8; end: 1097c767f;  */

/* WARNING: Type propagation algorithm not settling */

int FUN_1097c6bf8(int *param_1,int *******param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *piVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  ulong unaff_x20;
  int *piVar21;
  int *******pppppppiVar22;
  long lVar23;
  ulong uVar24;
  int *******pppppppiVar25;
  int iVar26;
  int *******pppppppiVar27;
  ulong uVar28;
  uint uVar29;
  int *******pppppppiVar30;
  int *piVar31;
  int ******ppppppiVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  int *piStack_2f60;
  int *******pppppppiStack_2f58;
  int aiStack_2f50 [128];
  int aiStack_2d50 [48];
  int aiStack_2c90 [506];
  int *******pppppppiStack_24a8;
  undefined8 *puStack_24a0;
  undefined8 uStack_2498;
  uint uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined1 *puStack_2478;
  undefined1 auStack_2470 [1000];
  undefined8 uStack_2088;
  undefined1 *puStack_2080;
  undefined1 auStack_2078 [8];
  undefined8 uStack_2070;
  int *piStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)((long)param_2 + 0x34);
  pppppppiVar30 = (int *******)(ulong)uVar3;
  pppppppiVar27 = param_2;
  if (uVar3 == 0) {
    iVar26 = 0;
    piVar14 = param_1;
    goto LAB_1097c761c;
  }
  if (*(int *)(param_2 + 6) == 0) {
    piVar14 = (int *)0x0;
  }
  else {
    pppppppiStack_2f58._0_4_ = *(int *)(param_2 + 3) >> 8;
    iVar6 = *(int *)(param_2 + 4);
    iVar26 = -(-iVar6 >> 8);
    if (0 < iVar6) {
      iVar26 = (iVar6 - 1U >> 8) + 1;
    }
    unaff_x20 = (ulong)(uint)(iVar26 - (int)pppppppiStack_2f58);
    if (iVar26 - (int)pppppppiStack_2f58 < 0x41) {
      piVar14 = aiStack_2f50;
    }
    else {
      piVar14 = (int *)(unaff_x20 << 3);
      _malloc();
      if (piVar14 == (int *)0x0) {
        iVar26 = 1;
        goto LAB_1097c761c;
      }
    }
    pppppppiVar27 = (int *******)(unaff_x20 << 3);
    _bzero(piVar14);
  }
  if ((int)uVar3 < 0x18) {
    if (0 < (int)uVar3) {
      piVar20 = aiStack_2d50;
      piStack_2f60 = aiStack_2c90;
      goto LAB_1097c6d04;
    }
    bVar5 = 0;
    piVar20 = aiStack_2d50;
    piStack_2f60 = aiStack_2c90;
    pppppppiVar30 = (int *******)0x0;
    if (piVar14 != (int *)0x0) goto LAB_1097c6dac;
LAB_1097c6e54:
    pppppppiVar27 = pppppppiVar30;
    iVar26 = (int)pppppppiVar27;
    func_0x0001097c76dc(piVar20);
LAB_1097c6e60:
    pppppppiStack_2f58 = (int *******)0x0;
    pppppppiVar30 = (int *******)0x0;
    (piVar20 + (long)iVar26 * 2)[0] = 0;
    (piVar20 + (long)iVar26 * 2)[1] = 0;
    uVar3 = 1;
    if (param_3 == 0) {
      uVar3 = 0xffffffff;
    }
    pppppppiStack_24a8 = (int *******)0x0;
    puStack_24a0 = &uStack_2488;
    uStack_2498 = 0;
    uStack_2490 = 0x20;
    uStack_2488 = 0;
    uStack_2480 = 0x3e8000003e8;
    puStack_2478 = auStack_2470;
    uStack_2088 = 0x40000000000;
    puStack_2080 = auStack_2078;
    uStack_2070 = 0;
    iVar26 = -0x80000000;
    pppppppiVar25 = (int *******)0x0;
    piStack_78 = piVar20;
LAB_1097c6ed4:
    do {
      do {
        do {
          pppppppiVar22 = *(int ********)(puStack_2080 + 8);
          pppppppiVar13 = *(int ********)piStack_78;
          if (pppppppiVar22 == (int *******)0x0) {
LAB_1097c7040:
            piStack_78 = piStack_78 + 2;
            pppppppiVar22 = pppppppiVar13;
joined_r0x0001097c704c:
            if (pppppppiVar22 == (int *******)0x0) goto joined_r0x0001097c75b8;
          }
          else {
            if (pppppppiVar13 != (int *******)0x0) {
              iVar6 = *(int *)(pppppppiVar13 + 1) - *(int *)(pppppppiVar22 + 1);
              if ((*(int *)(pppppppiVar13 + 1) - *(int *)(pppppppiVar22 + 1) == 0) &&
                 (iVar6 = *(int *)((long)pppppppiVar13 + 4) - *(int *)((long)pppppppiVar22 + 4),
                 iVar6 == 0)) {
                iVar6 = *(int *)pppppppiVar13 - *(int *)pppppppiVar22;
                if (*(int *)pppppppiVar13 - *(int *)pppppppiVar22 == 0) {
                  iVar6 = (int)((ulong)((long)pppppppiVar13 - (long)pppppppiVar22) >> 2) *
                          -0x55555555;
                }
              }
              if (iVar6 < 0) goto LAB_1097c7040;
            }
            iVar15 = (int)uStack_2088;
            lVar23 = (long)(int)uStack_2088;
            iVar6 = (int)uStack_2088 + -1;
            uStack_2088 = CONCAT44(uStack_2088._4_4_,iVar6);
            if (iVar6 != 0) {
              piVar14 = *(int **)(puStack_2080 + lVar23 * 8);
              if (iVar15 < 3) {
                lVar23 = 1;
              }
              else {
                iVar4 = piVar14[2];
                iVar17 = 2;
                iVar16 = 1;
                do {
                  iVar18 = iVar6;
                  if (iVar17 != iVar6) {
                    piVar20 = *(int **)(puStack_2080 + ((long)iVar17 | 1U) * 8);
                    puVar8 = *(uint **)(puStack_2080 + (long)iVar17 * 8);
                    pppppppiVar27 = (int *******)(ulong)puVar8[2];
                    iVar19 = piVar20[2] - puVar8[2];
                    if (iVar19 == 0) {
                      pppppppiVar27 = (int *******)(ulong)puVar8[1];
                      iVar19 = piVar20[1] - puVar8[1];
                      if (iVar19 == 0) {
                        pppppppiVar27 = (int *******)(ulong)*puVar8;
                        iVar19 = *piVar20 - *puVar8;
                        if (iVar19 == 0) {
                          iVar19 = (int)((ulong)((long)piVar20 - (long)puVar8) >> 2) * -0x55555555;
                        }
                      }
                    }
                    iVar18 = (int)((long)iVar17 | 1U);
                    if (-1 < iVar19) {
                      iVar18 = iVar17;
                    }
                  }
                  piVar20 = *(int **)(puStack_2080 + (long)iVar18 * 8);
                  iVar17 = piVar20[2] - iVar4;
                  if ((piVar20[2] - iVar4 == 0) &&
                     (iVar17 = piVar20[1] - piVar14[1], piVar20[1] - piVar14[1] == 0)) {
                    pppppppiVar27 = (int *******)0xaaaaaaab;
                    iVar17 = *piVar20 - *piVar14;
                    if (*piVar20 - *piVar14 == 0) {
                      iVar17 = (int)((ulong)((long)piVar20 - (long)piVar14) >> 2) * -0x55555555;
                    }
                  }
                  lVar23 = (long)iVar16;
                  if (-1 < iVar17) goto LAB_1097c700c;
                  *(int **)(puStack_2080 + lVar23 * 8) = piVar20;
                  iVar17 = iVar18 * 2;
                  iVar16 = iVar18;
                } while (iVar17 < iVar15);
                lVar23 = (long)iVar18;
              }
LAB_1097c700c:
              *(int **)(puStack_2080 + lVar23 * 8) = piVar14;
              goto joined_r0x0001097c704c;
            }
            *(undefined8 *)(puStack_2080 + 8) = 0;
          }
          if (*(int *)(pppppppiVar22 + 1) != iVar26) {
            for (; pppppppiVar30 != (int *******)0x0; pppppppiVar30 = (int *******)pppppppiVar30[5])
            {
              if (pppppppiVar30[7] != (int ******)0x0) {
                pppppppiVar27 = (int *******)(ulong)*(uint *)(pppppppiVar30 + 8);
                if ((int)*(uint *)(pppppppiVar30 + 8) < *(int *)((long)pppppppiVar30 + 0x14)) {
                  FUN_1097fef80(param_1,pppppppiVar27,*(int *)((long)pppppppiVar30 + 0x14),
                                pppppppiVar30);
                }
                pppppppiVar30[7] = (int ******)0x0;
              }
            }
            if (pppppppiStack_2f58 != (int *******)0x0) {
              uVar29 = 0;
              pppppppiVar30 = pppppppiStack_2f58;
              pppppppiVar13 = pppppppiStack_2f58;
              do {
                if ((pppppppiVar30 != pppppppiVar13) &&
                   (pppppppiVar10 = pppppppiVar30 + 7, *pppppppiVar10 != (int ******)0x0)) {
                  if ((pppppppiVar13[7] == (int ******)0x0) &&
                     (pppppppiVar9 = pppppppiVar13, pppppppiVar27 = pppppppiVar30, FUN_1097c78d8(),
                     (int)pppppppiVar9 != 0)) {
                    ppppppiVar12 = *pppppppiVar10;
                    pppppppiVar13[8] = pppppppiVar30[8];
                    pppppppiVar13[7] = ppppppiVar12;
                  }
                  else {
                    pppppppiVar27 = (int *******)(ulong)*(uint *)(pppppppiVar30 + 8);
                    if ((int)*(uint *)(pppppppiVar30 + 8) < iVar26) {
                      FUN_1097fef80(param_1,pppppppiVar27,iVar26,pppppppiVar30,pppppppiVar30[7]);
                    }
                  }
                  *pppppppiVar10 = (int ******)0x0;
                }
                uVar29 = *(int *)(pppppppiVar30 + 3) + uVar29;
                if (((uVar29 & uVar3) == 0) &&
                   ((pppppppiVar27 = (int *******)pppppppiVar30[5],
                    pppppppiVar27 == (int *******)0x0 ||
                    (pppppppiVar10 = pppppppiVar30, FUN_1097c78d8(), (int)pppppppiVar10 == 0)))) {
                  pppppppiVar10 = (int *******)pppppppiVar13[7];
                  if (pppppppiVar10 != pppppppiVar30) {
                    if (pppppppiVar10 == (int *******)0x0) {
LAB_1097c7168:
                      pppppppiVar10 = pppppppiVar13;
                      pppppppiVar27 = pppppppiVar30;
                      FUN_1097c78d8();
                      if ((int)pppppppiVar10 != 0) goto LAB_1097c7180;
                      *(int *)(pppppppiVar13 + 8) = iVar26;
                    }
                    else {
                      pppppppiVar27 = pppppppiVar30;
                      FUN_1097c78d8();
                      if ((int)pppppppiVar10 == 0) {
                        if (*(int *)(pppppppiVar13 + 8) < iVar26) {
                          FUN_1097fef80(param_1,*(int *)(pppppppiVar13 + 8),iVar26,pppppppiVar13,
                                        pppppppiVar13[7]);
                        }
                        pppppppiVar13[7] = (int ******)0x0;
                        goto LAB_1097c7168;
                      }
                    }
                    pppppppiVar13[7] = (int ******)pppppppiVar30;
                  }
LAB_1097c7180:
                  pppppppiVar13 = (int *******)pppppppiVar30[5];
                }
                pppppppiVar30 = (int *******)pppppppiVar30[5];
              } while (pppppppiVar30 != (int *******)0x0);
            }
            pppppppiVar30 = (int *******)0x0;
            iVar26 = *(int *)(pppppppiVar22 + 1);
          }
          iVar6 = *(int *)pppppppiVar22;
          if (iVar6 == 0) {
            pppppppiVar10 = (int *******)pppppppiVar22[2];
            *pppppppiVar22 = (int ******)pppppppiStack_24a8;
            pppppppiStack_24a8 = pppppppiVar22;
            pppppppiVar27 = (int *******)pppppppiVar10[4];
            pppppppiVar22 = (int *******)pppppppiVar10[5];
            pppppppiVar13 = pppppppiVar22;
            if (pppppppiVar27 != (int *******)0x0) {
              pppppppiVar27[5] = (int ******)pppppppiVar22;
              pppppppiVar13 = pppppppiStack_2f58;
            }
            if (pppppppiVar22 != (int *******)0x0) {
              pppppppiVar22[4] = (int ******)pppppppiVar27;
            }
            if ((pppppppiVar25 == pppppppiVar10) &&
               (pppppppiVar25 = pppppppiVar22, (int *******)pppppppiVar10[4] != (int *******)0x0)) {
              pppppppiVar25 = (int *******)pppppppiVar10[4];
            }
            if (pppppppiVar10[7] != (int ******)0x0) {
              pppppppiVar10[5] = (int ******)pppppppiVar30;
              if (pppppppiVar30 != (int *******)0x0) {
                pppppppiVar30[4] = (int ******)pppppppiVar10;
              }
              pppppppiVar10[4] = (int ******)0x0;
              pppppppiVar30 = pppppppiVar10;
            }
            pppppppiStack_2f58 = pppppppiVar13;
            if ((pppppppiVar27 != (int *******)0x0) && (pppppppiVar22 != (int *******)0x0)) {
              iVar6 = (int)&pppppppiStack_24a8;
              FUN_1097c7a18();
joined_r0x0001097c72c8:
              pppppppiStack_2f58 = pppppppiVar13;
              if (iVar6 != 0) goto LAB_1097c75a8;
            }
            goto LAB_1097c6ed4;
          }
          if (iVar6 == 1) {
            pppppppiVar10 = (int *******)pppppppiVar22[2];
            pppppppiVar9 = (int *******)pppppppiVar22[3];
            *pppppppiVar22 = (int ******)pppppppiStack_24a8;
            pppppppiStack_24a8 = pppppppiVar22;
            if (pppppppiVar9 == (int *******)pppppppiVar10[5]) {
              pppppppiVar27 = (int *******)pppppppiVar10[4];
              ppppppiVar32 = pppppppiVar9[5];
              ppppppiVar12 = ppppppiVar32;
              pppppppiVar13 = pppppppiVar9;
              if (pppppppiVar27 != (int *******)0x0) {
                pppppppiVar27[5] = (int ******)pppppppiVar9;
                ppppppiVar12 = pppppppiVar9[5];
                pppppppiVar13 = pppppppiStack_2f58;
              }
              pppppppiVar22 = pppppppiVar27;
              if (ppppppiVar12 != (int ******)0x0) {
                ppppppiVar12[4] = (int *****)pppppppiVar10;
                pppppppiVar22 = (int *******)pppppppiVar10[4];
              }
              pppppppiVar9[4] = (int ******)pppppppiVar22;
              pppppppiVar10[5] = ppppppiVar12;
              pppppppiVar9[5] = (int ******)pppppppiVar10;
              pppppppiVar10[4] = (int ******)pppppppiVar9;
              if (pppppppiVar27 != (int *******)0x0) {
                iVar6 = (int)&pppppppiStack_24a8;
                FUN_1097c7a18();
                if (iVar6 != 0) goto LAB_1097c75a8;
              }
              pppppppiStack_2f58 = pppppppiVar13;
              if (ppppppiVar32 != (int ******)0x0) {
                pppppppiVar27 = (int *******)&pppppppiStack_24a8;
                FUN_1097c7a18(pppppppiVar27,pppppppiVar10,ppppppiVar32);
                iVar6 = (int)pppppppiVar27;
                pppppppiVar27 = pppppppiVar10;
                goto joined_r0x0001097c72c8;
              }
            }
            goto LAB_1097c6ed4;
          }
        } while (iVar6 != 2);
        pppppppiVar13 = pppppppiVar22 + 2;
        if (pppppppiVar25 == (int *******)0x0) {
          pppppppiVar22[7] = (int ******)0x0;
          pppppppiStack_2f58 = pppppppiVar13;
        }
        else {
          pppppppiVar27 = pppppppiVar25;
          FUN_1097d8ea8(pppppppiVar25,pppppppiVar13,iVar26);
          iVar6 = (int)pppppppiVar27;
          if (iVar6 == 0) {
            iVar6 = *(int *)((long)pppppppiVar22 + 0x24) - *(int *)((long)pppppppiVar25 + 0x14);
          }
          if (iVar6 < 0) {
            do {
              while( true ) {
                pppppppiVar27 = pppppppiVar25;
                pppppppiVar25 = (int *******)pppppppiVar27[5];
                if (pppppppiVar25 == (int *******)0x0) {
                  pppppppiVar27[5] = (int ******)pppppppiVar13;
                  pppppppiVar22[6] = (int ******)pppppppiVar27;
                  pppppppiVar22[7] = (int ******)0x0;
                  goto LAB_1097c73e0;
                }
                pppppppiVar10 = pppppppiVar25;
                FUN_1097d8ea8(pppppppiVar25,pppppppiVar13,iVar26);
                if ((int)pppppppiVar10 == 0) break;
                if (-1 < (int)pppppppiVar10) goto LAB_1097c7394;
              }
            } while (*(int *)((long)pppppppiVar22 + 0x24) - *(int *)((long)pppppppiVar25 + 0x14) < 0
                    );
LAB_1097c7394:
            pppppppiVar27[5] = (int ******)pppppppiVar13;
            pppppppiVar22[6] = (int ******)pppppppiVar27;
            pppppppiVar22[7] = (int ******)pppppppiVar25;
            pppppppiVar25[4] = (int ******)pppppppiVar13;
          }
          else {
            if (iVar6 == 0) {
              ppppppiVar12 = pppppppiVar25[5];
              pppppppiVar22[6] = (int ******)pppppppiVar25;
              pppppppiVar22[7] = ppppppiVar12;
              if (ppppppiVar12 != (int ******)0x0) {
                ppppppiVar12[4] = (int *****)pppppppiVar13;
              }
            }
            else {
              do {
                pppppppiVar27 = pppppppiVar25;
                pppppppiVar25 = (int *******)pppppppiVar27[4];
                if (pppppppiVar25 == (int *******)0x0) {
                  pppppppiVar27[4] = (int ******)pppppppiVar13;
                  pppppppiVar22[6] = (int ******)0x0;
                  pppppppiVar22[7] = (int ******)pppppppiVar27;
                  pppppppiStack_2f58 = pppppppiVar13;
                  goto LAB_1097c73e0;
                }
                pppppppiVar10 = pppppppiVar25;
                FUN_1097d8ea8(pppppppiVar25,pppppppiVar13,iVar26);
                iVar6 = (int)pppppppiVar10;
                if (iVar6 == 0) {
                  iVar6 = *(int *)((long)pppppppiVar22 + 0x24) -
                          *(int *)((long)pppppppiVar25 + 0x14);
                }
              } while (0 < iVar6);
              pppppppiVar27[4] = (int ******)pppppppiVar13;
              pppppppiVar22[6] = (int ******)pppppppiVar25;
              pppppppiVar22[7] = (int ******)pppppppiVar27;
            }
            pppppppiVar25[5] = (int ******)pppppppiVar13;
          }
        }
LAB_1097c73e0:
        uVar29 = *(uint *)((long)pppppppiVar22 + 0x24);
        pppppppiVar10 = pppppppiVar13;
        pppppppiVar27 = (int *******)(ulong)uVar29;
        FUN_1097c7680();
        pppppppiVar25 = pppppppiStack_24a8;
        if (pppppppiStack_24a8 == (int *******)0x0) {
          if (*(uint *)((long)puStack_24a0 + 0xc) < uStack_2490) {
            pppppppiVar25 = (int *******)&pppppppiStack_24a8;
            func_0x0001097cf700();
          }
          else {
            pppppppiVar25 = (int *******)puStack_24a0[2];
            puStack_24a0[2] = (long)pppppppiVar25 + (ulong)uStack_2490;
            *(uint *)((long)puStack_24a0 + 0xc) = *(uint *)((long)puStack_24a0 + 0xc) - uStack_2490;
          }
          if (pppppppiVar25 == (int *******)0x0) goto LAB_1097c75a8;
        }
        else {
          pppppppiStack_24a8 = (int *******)*pppppppiStack_24a8;
        }
        *(int *)pppppppiVar25 = 0;
        pppppppiVar25[2] = (int ******)pppppppiVar13;
        pppppppiVar25[3] = (int ******)0x0;
        *(ulong *)((long)pppppppiVar25 + 4) =
             (ulong)pppppppiVar10 & 0xffffffff | (long)(ulong)uVar29 << 0x20;
        iVar6 = (int)uStack_2088 + 1;
        iVar15 = (int)uStack_2088;
        if (iVar6 == uStack_2088._4_4_) {
          iVar6 = (int)&uStack_2088;
          FUN_1097c7e44();
          if (iVar6 != 0) goto LAB_1097c75a8;
          iVar6 = (int)uStack_2088 + 1;
          iVar15 = (int)uStack_2088;
        }
        uStack_2088 = CONCAT44(uStack_2088._4_4_,iVar6);
        if (iVar15 != 0) {
          iVar15 = *(int *)(pppppppiVar25 + 1);
          do {
            iVar4 = iVar6 >> 1;
            piVar14 = *(int **)(puStack_2080 + (long)iVar4 * 8);
            iVar17 = iVar15 - piVar14[2];
            if ((iVar15 - piVar14[2] == 0) &&
               (iVar17 = *(int *)((long)pppppppiVar25 + 4) - piVar14[1], iVar17 == 0)) {
              iVar17 = *(int *)pppppppiVar25 - *piVar14;
              if (*(int *)pppppppiVar25 - *piVar14 == 0) {
                iVar17 = (int)((ulong)((long)pppppppiVar25 - (long)piVar14) >> 2) * -0x55555555;
              }
            }
          } while ((iVar17 < 0) &&
                  (*(int **)(puStack_2080 + (long)iVar6 * 8) = piVar14, iVar6 = iVar4, iVar4 != 1));
        }
        *(int ********)(puStack_2080 + (long)iVar6 * 8) = pppppppiVar25;
        pppppppiVar27 = pppppppiVar30;
        if (pppppppiVar30 == (int *******)0x0) {
          pppppppiVar30 = (int *******)0x0;
        }
        else {
          do {
            if ((*(int *)(pppppppiVar22 + 4) <= *(int *)((long)pppppppiVar27 + 0x14)) &&
               (pppppppiVar25 = pppppppiVar13, FUN_1097c78d8(pppppppiVar13,pppppppiVar27),
               (int)pppppppiVar25 != 0)) {
              ppppppiVar12 = pppppppiVar27[7];
              pppppppiVar22[10] = pppppppiVar27[8];
              pppppppiVar22[9] = ppppppiVar12;
              pppppppiVar25 = (int *******)pppppppiVar27[5];
              if (pppppppiVar27[4] == (int ******)0x0) {
                pppppppiVar30 = pppppppiVar25;
                pppppppiVar27 = (int *******)0x0;
              }
              else {
                pppppppiVar27[4] = (int ******)pppppppiVar25;
                pppppppiVar27 = pppppppiVar25;
              }
              if (pppppppiVar25 != (int *******)0x0) {
                pppppppiVar25[4] = (int ******)pppppppiVar27;
              }
              break;
            }
            pppppppiVar25 = pppppppiVar27 + 5;
            pppppppiVar27 = (int *******)*pppppppiVar25;
          } while ((int *******)*pppppppiVar25 != (int *******)0x0);
        }
        pppppppiVar27 = (int *******)pppppppiVar22[6];
        ppppppiVar12 = pppppppiVar22[7];
        if (pppppppiVar27 != (int *******)0x0) {
          pppppppiVar25 = (int *******)&pppppppiStack_24a8;
          FUN_1097c7a18(pppppppiVar25,pppppppiVar27,pppppppiVar13);
          if ((int)pppppppiVar25 != 0) goto LAB_1097c75a8;
        }
        pppppppiVar25 = pppppppiVar13;
      } while (ppppppiVar12 == (int ******)0x0);
      pppppppiVar22 = (int *******)&pppppppiStack_24a8;
      pppppppiVar27 = pppppppiVar13;
      FUN_1097c7a18(pppppppiVar22,pppppppiVar13,ppppppiVar12);
    } while ((int)pppppppiVar22 == 0);
LAB_1097c75a8:
    iVar26 = 1;
    goto LAB_1097c75f0;
  }
  piStack_2f60 = (int *)((long)pppppppiVar30 * 0x60 | 8);
  _malloc();
  if (piStack_2f60 != (int *)0x0) {
    piVar20 = piStack_2f60 + (ulong)uVar3 * 0x16;
LAB_1097c6d04:
    lVar23 = 0;
    piVar21 = piStack_2f60;
    pppppppiVar25 = pppppppiVar30;
    piVar31 = piVar20;
    do {
      *piVar21 = 2;
      puVar1 = (undefined8 *)((long)param_2[8] + lVar23);
      uVar29 = *(uint *)(puVar1 + 2);
      pppppppiVar27 = (int *******)(ulong)uVar29;
      piVar21[2] = uVar29;
      puVar7 = puVar1;
      FUN_1097c7680();
      piVar21[1] = (int)puVar7;
      uVar34 = *(undefined8 *)((long)puVar1 + 0x14);
      uVar33 = *(undefined8 *)((long)puVar1 + 0xc);
      uVar35 = *puVar1;
      *(undefined8 *)(piVar21 + 6) = puVar1[1];
      *(undefined8 *)(piVar21 + 4) = uVar35;
      *(undefined8 *)(piVar21 + 9) = uVar34;
      *(undefined8 *)(piVar21 + 7) = uVar33;
      piVar21[0xe] = 0;
      piVar21[0xf] = 0;
      piVar21[0xc] = 0;
      piVar21[0xd] = 0;
      piVar21[0x12] = 0;
      piVar21[0x13] = 0;
      piVar21[0x10] = 0;
      piVar21[0x11] = 0;
      piVar11 = piVar31;
      if (piVar14 != (int *)0x0) {
        piVar11 = piVar14 + (long)(((int)uVar29 >> 8) - (int)pppppppiStack_2f58) * 2;
        *(undefined8 *)(piVar21 + 0xe) = *(undefined8 *)piVar11;
      }
      *(int **)piVar11 = piVar21;
      piVar31 = piVar31 + 2;
      lVar23 = lVar23 + 0x1c;
      piVar21 = piVar21 + 0x16;
      pppppppiVar25 = (int *******)((long)pppppppiVar25 + -1);
    } while (pppppppiVar25 != (int *******)0x0);
    bVar5 = 1;
    if (piVar14 == (int *)0x0) goto LAB_1097c6e54;
LAB_1097c6dac:
    bVar2 = (bool)(bVar5 ^ 1);
    if ((int)unaff_x20 < 1) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar26 = 0;
    }
    else {
      uVar24 = 0;
      uVar28 = 0;
      do {
        lVar23 = *(long *)(piVar14 + uVar24 * 2);
        if (lVar23 != 0) {
          pppppppiVar27 = (int *******)0x0;
          iVar26 = (int)uVar28;
          do {
            *(long *)(piVar20 + (long)iVar26 * 2 + (long)pppppppiVar27 * 2) = lVar23;
            lVar23 = *(long *)(lVar23 + 0x38);
            pppppppiVar27 = (int *******)((long)pppppppiVar27 + 1);
          } while (lVar23 != 0);
          uVar28 = (long)pppppppiVar27 + (uVar28 & 0xffffffff);
          if (iVar26 + 1 < (int)uVar28) {
            func_0x0001097c76dc(piVar20 + (long)iVar26 * 2);
          }
        }
        iVar26 = (int)uVar28;
        uVar24 = uVar24 + 1;
      } while ((uVar24 < (unaff_x20 & 0xffffffff)) && (iVar26 < (int)uVar3));
    }
    if (piVar14 != aiStack_2f50) {
      _free(piVar14);
    }
    goto LAB_1097c6e60;
  }
  iVar26 = 1;
  if (piVar14 == aiStack_2f50) goto LAB_1097c761c;
  goto LAB_1097c7618;
joined_r0x0001097c75b8:
  for (; pppppppiVar30 != (int *******)0x0; pppppppiVar30 = (int *******)pppppppiVar30[5]) {
    if (pppppppiVar30[7] != (int ******)0x0) {
      pppppppiVar27 = (int *******)(ulong)*(uint *)(pppppppiVar30 + 8);
      if ((int)*(uint *)(pppppppiVar30 + 8) < *(int *)((long)pppppppiVar30 + 0x14)) {
        FUN_1097fef80(param_1,pppppppiVar27,*(int *)((long)pppppppiVar30 + 0x14),pppppppiVar30);
      }
      pppppppiVar30[7] = (int ******)0x0;
    }
  }
  iVar26 = *param_1;
LAB_1097c75f0:
  if (puStack_2080 != auStack_2078) {
    _free();
  }
  FUN_1097cf6a0(&pppppppiStack_24a8);
  piVar14 = piStack_2f60;
  if (piStack_2f60 == aiStack_2c90) goto LAB_1097c761c;
LAB_1097c7618:
  _free();
LAB_1097c761c:
  iVar6 = (int)pppppppiVar27;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return iVar26;
  }
  ___stack_chk_fail();
  iVar26 = iVar6 - piVar14[1];
  if (iVar26 == 0) {
    iVar6 = *piVar14;
  }
  else {
    if (piVar14[3] == iVar6) {
      return piVar14[2];
    }
    iVar6 = *piVar14;
    iVar15 = piVar14[3] - piVar14[1];
    if (iVar15 != 0) {
      iVar4 = 0;
      if ((long)iVar15 != 0) {
        iVar4 = (int)((((long)piVar14[2] - (long)iVar6) * (long)iVar26) / (long)iVar15);
      }
      return iVar6 + iVar4;
    }
  }
  return iVar6;
}



/* Entry: 1097c7680; end: 1097c77a3;  */

int FUN_1097c7680(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1[1];
  if (iVar3 == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_1[3] == param_2) {
      return param_1[2];
    }
    iVar1 = *param_1;
    iVar4 = param_1[3] - param_1[1];
    if (iVar4 != 0) {
      iVar2 = 0;
      if ((long)iVar4 != 0) {
        iVar2 = (int)((((long)param_1[2] - (long)iVar1) * (long)iVar3) / (long)iVar4);
      }
      return iVar1 + iVar2;
    }
  }
  return iVar1;
}



/* Entry: 1097c77a4; end: 1097c78d7;  */

undefined4 * FUN_1097c77a4(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_3ec;
  undefined1 *puStack_3e0;
  undefined1 auStack_3d8 [904];
  
  if (param_1[10] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uStack_3ec = 0x2000000000;
    uStack_410 = 0x80000000;
    uStack_418 = 0x800000007fffffff;
    uStack_420 = 0x7fffffff00000000;
    puStack_3e0 = auStack_3d8;
    FUN_1097e9d0c(&uStack_420,*(undefined8 *)(param_1 + 6),param_1[8]);
    if (0 < (int)param_1[10]) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0xc) + lVar3);
        puVar2 = &uStack_420;
        func_0x0001097ea0b0(&uStack_420,puVar1 + 2,*puVar1,puVar1[1],1);
        if ((int)puVar2 != 0) goto LAB_1097c789c;
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0xc) + lVar3);
        puVar2 = &uStack_420;
        func_0x0001097ea0b0(&uStack_420,puVar1 + 6,*puVar1,puVar1[1],0xffffffff);
        if ((int)puVar2 != 0) goto LAB_1097c789c;
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x28;
      } while (lVar4 < (int)param_1[10]);
    }
    *param_1 = 0;
    param_1[10] = 0;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf0 | 1;
    FUN_1097c6bf8(param_1,&uStack_420,param_2);
    puVar2 = (undefined8 *)param_1;
LAB_1097c789c:
    if (puStack_3e0 != auStack_3d8) {
      _free();
    }
  }
  return (undefined4 *)puVar2;
}



/* Entry: 1097c78d8; end: 1097c7a17;  */

ulong FUN_1097c78d8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 == (int *)(*(ulong *)(param_1 + 0xc) & 0xfffffffffffffffe)) {
    return (ulong)((uint)*(ulong *)(param_1 + 0xc) & 1);
  }
  uVar8 = *(ulong *)(param_2 + 0xc);
  if (param_1 == (int *)(uVar8 & 0xfffffffffffffffe)) {
    uVar5 = (ulong)((uint)uVar8 & 1);
    uVar8 = uVar8 & 1;
LAB_1097c7a04:
    *(ulong *)(param_1 + 0xc) = uVar8 | (ulong)param_2;
  }
  else {
    iVar1 = *param_1;
    iVar3 = param_1[1];
    iVar7 = *param_2;
    iVar4 = param_2[1];
    uVar9 = 2;
    if (iVar3 != iVar4) {
      uVar9 = 0;
    }
    iVar2 = param_2[2];
    uVar10 = 8;
    if (param_1[2] != iVar2) {
      uVar10 = 0;
    }
    uVar11 = 0x10;
    if (param_1[3] != param_2[3]) {
      uVar11 = 0;
    }
    uVar10 = uVar10 | uVar11;
    if (iVar1 == iVar7) {
      uVar10 = uVar10 + 1;
    }
    if ((uVar10 | uVar9) == 0x1b) {
      *(ulong *)(param_1 + 0xc) = (ulong)param_2 | 1;
      return 1;
    }
    uVar11 = param_1[2] - iVar1;
    if (uVar11 == 0) {
      if (iVar2 == iVar7) {
LAB_1097c79c0:
        if ((uVar10 | uVar9) == 0) {
          piVar6 = param_1;
          if (iVar3 < iVar4) {
            piVar6 = param_2;
            iVar4 = iVar3;
            iVar7 = iVar1;
          }
          FUN_1097c7ed0(piVar6,iVar4,iVar7);
          uVar5 = (ulong)((int)piVar6 == 0);
          uVar8 = uVar5;
        }
        else {
          uVar5 = (ulong)((uint)(iVar1 == iVar7) & uVar9 >> 1);
          uVar8 = uVar5;
        }
        goto LAB_1097c7a04;
      }
    }
    else if (((iVar2 != iVar7) && (-1 < (int)(iVar2 - iVar7 ^ uVar11))) &&
            ((long)(param_2[3] - iVar4) * (long)(int)uVar11 -
             (long)(param_1[3] - iVar3) * (long)(iVar2 - iVar7) == 0)) goto LAB_1097c79c0;
    uVar5 = 0;
    *(int **)(param_1 + 0xc) = param_2;
  }
  return uVar5;
}



/* Entry: 1097c7a18; end: 1097c7cf7;  */

int * FUN_1097c7a18(int *param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar3 = *param_2;
  iVar4 = param_2[2];
  iVar7 = iVar3;
  if (iVar3 <= iVar4) {
    iVar7 = iVar4;
  }
  iVar5 = *param_3;
  iVar6 = param_3[2];
  iVar8 = iVar5;
  if (iVar6 <= iVar5) {
    iVar8 = iVar6;
  }
  if (iVar7 <= iVar8) {
    return (int *)0x0;
  }
  if (((iVar3 != iVar5) || (iVar4 != iVar6 || param_2[1] != param_3[1])) ||
     (param_2[3] != param_3[3])) {
    uVar9 = iVar6 - iVar5;
    uVar15 = iVar4 - iVar3;
    if (uVar15 == 0) {
      uVar15 = -uVar9;
    }
    else if ((iVar6 != iVar5) && (-1 < (int)(uVar9 ^ uVar15))) {
      lVar16 = ((long)param_3[3] - (long)param_3[1]) * (long)(int)uVar15;
      lVar17 = ((long)param_2[3] - (long)param_2[1]) * (long)(int)uVar9;
      uVar15 = 1;
      if (lVar16 < lVar17) {
        uVar15 = 0xffffffff;
      }
      if (lVar16 - lVar17 == 0) {
        return (int *)0x0;
      }
    }
    if (0 < (int)uVar15) {
      iVar7 = param_2[1];
      lVar20 = (long)iVar7 - (long)param_2[3];
      iVar8 = param_3[1];
      lVar21 = (long)iVar8 - (long)param_3[3];
      lVar17 = (long)(iVar3 - iVar4);
      lVar16 = (long)(iVar5 - iVar6);
      uVar19 = lVar21 * lVar17 - lVar20 * lVar16;
      lVar18 = ((long)iVar8 - (long)iVar7) * lVar16 - lVar21 * (iVar5 - iVar3);
      if ((long)uVar19 < 0) {
        if (lVar18 <= (long)uVar19) {
          return (int *)0x0;
        }
      }
      else if ((long)uVar19 <= lVar18) {
        return (int *)0x0;
      }
      lVar18 = lVar20 * (iVar3 - iVar5) - (long)(iVar3 - iVar4) * (long)(iVar7 - iVar8);
      if ((long)uVar19 < 0) {
        if (lVar18 <= (long)uVar19) {
          return (int *)0x0;
        }
      }
      else if ((long)uVar19 <= lVar18) {
        return (int *)0x0;
      }
      uVar10 = (long)param_2[3] * (long)iVar3 - (long)iVar7 * (long)iVar4;
      uVar22 = (long)param_3[3] * (long)iVar5 - (long)iVar8 * (long)iVar6;
      uVar14 = uVar10;
      FUN_109800ef0();
      uVar11 = uVar22;
      FUN_109800ef0();
      uVar12 = uVar14 - uVar11;
      uVar14 = (lVar16 - lVar17) - (ulong)(uVar14 < uVar11);
      FUN_109800ff4(uVar12,uVar14,uVar19);
      if (uVar14 != uVar19) {
        uVar11 = -uVar14;
        if (-1 < (long)(uVar14 ^ uVar19)) {
          uVar11 = uVar14;
        }
        uVar1 = 0x100000000;
        uVar2 = uVar12;
        if ((long)uVar19 <= (long)(uVar11 * 2)) {
          uVar1 = 0;
          uVar2 = ((long)uVar12 >> 0x3f | 1U) + uVar12;
        }
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar2;
          uVar11 = uVar1;
        }
        FUN_109800ef0();
        FUN_109800ef0();
        uVar14 = uVar10 - uVar22;
        uVar10 = (lVar21 - lVar20) - (ulong)(uVar10 < uVar22);
        FUN_109800ff4(uVar14,uVar10,uVar19);
        if (uVar10 != uVar19) {
          uVar22 = -uVar10;
          if (-1 < (long)(uVar10 ^ uVar19)) {
            uVar22 = uVar10;
          }
          uVar1 = 0x100000000;
          uVar2 = uVar14;
          if ((long)uVar19 <= (long)(uVar22 * 2)) {
            uVar1 = 0;
            uVar2 = ((long)uVar14 >> 0x3f | 1U) + uVar14;
          }
          uVar19 = 0;
          if (uVar10 != 0) {
            uVar14 = uVar2;
            uVar19 = uVar1;
          }
          piVar13 = param_2;
          FUN_1097c7f58(param_2,uVar12 & 0xffffffff | uVar11,uVar14 & 0xffffffff | uVar19);
          if ((int)piVar13 != 0) {
            piVar13 = param_3;
            FUN_1097c7f58(param_3,uVar12 & 0xffffffff | uVar11,uVar14 & 0xffffffff | uVar19);
            if ((int)piVar13 != 0) {
              uStack_68 = (undefined4)uVar12;
              uStack_64 = (undefined4)uVar14;
              FUN_1097c7cf8(param_1,1,param_2,param_3,&uStack_68);
              return param_1;
            }
            return piVar13;
          }
          return piVar13;
        }
      }
    }
  }
  return (int *)0x0;
}



/* Entry: 1097c7cf8; end: 1097c7e43;  */

undefined8
FUN_1097c7cf8(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)param_1;
  if (piVar9 == (int *)0x0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar2 = param_1[6];
    if (*(uint *)(lVar5 + 0xc) < uVar2) {
      piVar9 = param_1;
      func_0x0001097cf700();
    }
    else {
      piVar9 = *(int **)(lVar5 + 0x10);
      *(ulong *)(lVar5 + 0x10) = (long)piVar9 + (ulong)uVar2;
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) - uVar2;
    }
    if (piVar9 != (int *)0x0) goto LAB_1097c7d60;
LAB_1097c7e1c:
    uVar3 = 1;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)piVar9;
LAB_1097c7d60:
    *piVar9 = param_2;
    *(undefined8 *)(piVar9 + 4) = param_3;
    *(undefined8 *)(piVar9 + 6) = param_4;
    *(undefined8 *)(piVar9 + 1) = *param_5;
    iVar6 = param_1[0x108];
    iVar4 = iVar6 + 1;
    if (iVar4 == param_1[0x109]) {
      piVar7 = param_1 + 0x108;
      FUN_1097c7e44();
      if ((int)piVar7 != 0) goto LAB_1097c7e1c;
      iVar6 = param_1[0x108];
      iVar4 = iVar6 + 1;
    }
    lVar5 = *(long *)(param_1 + 0x10a);
    param_1[0x108] = iVar4;
    if (iVar6 != 0) {
      iVar6 = piVar9[2];
      do {
        iVar1 = iVar4 >> 1;
        piVar7 = *(int **)(lVar5 + (long)iVar1 * 8);
        iVar8 = iVar6 - piVar7[2];
        if ((iVar6 - piVar7[2] == 0) && (iVar8 = piVar9[1] - piVar7[1], piVar9[1] - piVar7[1] == 0))
        {
          iVar8 = *piVar9 - *piVar7;
          if (*piVar9 - *piVar7 == 0) {
            iVar8 = (int)((ulong)((long)piVar9 - (long)piVar7) >> 2) * -0x55555555;
          }
        }
      } while ((iVar8 < 0) &&
              (*(int **)(lVar5 + (long)iVar4 * 8) = piVar7, iVar4 = iVar1, iVar1 != 1));
    }
    uVar3 = 0;
    *(int **)(lVar5 + (long)iVar4 * 8) = piVar9;
  }
  return uVar3;
}



/* Entry: 1097c7e44; end: 1097c7ecf;  */

undefined8 FUN_1097c7e44(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = iVar1 << 1;
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == param_1 + 0x10) {
    if (0 < iVar1) {
      lVar3 = (ulong)uVar2 << 3;
      _malloc();
      if (lVar3 != 0) {
        _memcpy();
        goto LAB_1097c7eb0;
      }
    }
  }
  else if ((-1 < iVar1) && (_realloc(lVar3,(ulong)uVar2 << 3), lVar3 != 0)) {
LAB_1097c7eb0:
    *(long *)(param_1 + 8) = lVar3;
    return 0;
  }
  return 1;
}



/* Entry: 1097c7ed0; end: 1097c7f57;  */

uint FUN_1097c7ed0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if ((iVar1 > param_3 && iVar2 != param_3) && (iVar1 <= param_3 || param_3 <= iVar2)) {
    uVar4 = 1;
  }
  else {
    uVar3 = param_3 - iVar1;
    if ((uVar3 != 0 && iVar1 <= param_3) && iVar2 < param_3) {
      return 0xffffffff;
    }
    uVar4 = iVar2 - iVar1;
    if (uVar4 == 0) {
      return -uVar3;
    }
    if ((param_3 != iVar1) && (-1 < (int)(uVar4 ^ uVar3))) {
      lVar6 = ((long)param_2 - (long)param_1[1]) * (long)(int)uVar4;
      lVar5 = ((long)param_1[3] - (long)param_1[1]) * (long)(int)uVar3;
      uVar4 = (uint)(lVar6 - lVar5 != 0 && lVar5 <= lVar6);
      if (lVar6 < lVar5) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  return uVar4;
}



/* Entry: 1097c7f58; end: 1097c800f;  */

bool FUN_1097c7f58(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar6 = (int)param_3;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar5 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) <= iVar6) {
    uVar5 = (uint)(iVar3 == 1);
  }
  uVar1 = 1;
  if (iVar6 <= *(int *)(param_1 + 0x10)) {
    uVar1 = uVar5;
  }
  if (iVar2 < iVar6) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if ((-1 < (int)uVar1) && (iVar3 != 1 || iVar6 < iVar2)) {
      if ((uVar1 == 0) || (iVar2 <= iVar6)) {
        iVar6 = (int)param_2;
        if (uVar1 == 0) {
          FUN_1097c7680();
          bVar4 = (int)param_1 < iVar6 || (int)param_1 <= iVar6 && param_2 >> 0x20 == 1;
        }
        else {
          FUN_1097c7680(param_1,iVar2);
          bVar4 = iVar6 < (int)param_1;
        }
      }
      else {
        bVar4 = true;
      }
    }
  }
  return bVar4;
}



/* Entry: 1097c8010; end: 1097c82cf;  */

undefined8 * FUN_1097c8010(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 auStack_900 [24];
  undefined8 uStack_840;
  undefined8 uStack_838;
  long lStack_58;
  
  puVar7 = auStack_900;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = *(int *)((long)param_1 + 0x24);
  puVar6 = param_3;
  if ((iVar13 == 0) || (iVar10 = *(int *)((long)param_2 + 0x24), iVar10 == 0)) {
    FUN_1097c916c();
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (iVar13 == 1) {
      uStack_838 = ((undefined8 *)param_1[7])[1];
      uStack_840 = *(undefined8 *)param_1[7];
      param_1 = param_2;
    }
    else {
      if (iVar10 != 1) {
        uVar1 = iVar10 + iVar13;
        if ((int)uVar1 < 0x18) {
          puVar3 = &uStack_840;
        }
        else {
          puVar3 = (undefined8 *)((ulong)uVar1 * 0x60 | 8);
          puVar14 = param_2;
          _malloc();
          if (puVar3 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x1;
            param_3 = puVar3;
            param_2 = puVar14;
            goto LAB_1097c80a0;
          }
          puVar7 = puVar3 + (ulong)uVar1 * 0xb;
        }
        puVar14 = (undefined8 *)0x0;
        param_1 = param_1 + 6;
        do {
          uVar1 = *(uint *)(param_1 + 2);
          if (0 < (int)uVar1) {
            lVar15 = 0;
            iVar13 = (int)puVar14;
            piVar4 = (int *)(param_1[1] + 8);
            puVar14 = (undefined8 *)(ulong)(iVar13 + uVar1);
            plVar5 = puVar7 + iVar13;
            do {
              iVar8 = piVar4[-2];
              iVar10 = *piVar4;
              puVar2 = (undefined1 *)((long)puVar3 + lVar15 + (long)iVar13 * 0x58);
              lVar12 = 0x18;
              if (iVar10 <= iVar8) {
                lVar12 = 0x40;
              }
              *(int *)(puVar2 + lVar12) = iVar8;
              lVar12 = 0x24;
              if (iVar10 <= iVar8) {
                lVar12 = 0x4c;
              }
              *(undefined4 *)(puVar2 + lVar12) = 1;
              lVar12 = 0x40;
              if (iVar10 <= iVar8) {
                lVar12 = 0x18;
              }
              *(int *)(puVar2 + lVar12) = iVar10;
              lVar12 = 0x4c;
              if (iVar10 <= iVar8) {
                lVar12 = 0x24;
              }
              *(undefined4 *)(puVar2 + lVar12) = 0xffffffff;
              *(undefined4 *)(puVar2 + 0x20) = 0;
              *(undefined8 *)(puVar2 + 0x10) = 0;
              *(undefined4 *)(puVar2 + 0x48) = 0;
              *(undefined8 *)(puVar2 + 0x38) = 0;
              *(int *)(puVar2 + 0x50) = piVar4[-1];
              *(int *)(puVar2 + 0x54) = piVar4[1];
              *plVar5 = (long)puVar2;
              lVar15 = lVar15 + 0x58;
              piVar4 = piVar4 + 4;
              plVar5 = plVar5 + 1;
            } while ((ulong)uVar1 * 0x58 - lVar15 != 0);
          }
          param_1 = (undefined8 *)*param_1;
        } while (param_1 != (undefined8 *)0x0);
        param_2 = param_2 + 6;
        do {
          uVar1 = *(uint *)(param_2 + 2);
          if (0 < (int)uVar1) {
            lVar15 = 0;
            iVar13 = (int)puVar14;
            piVar4 = (int *)(param_2[1] + 8);
            puVar14 = (undefined8 *)(ulong)(iVar13 + uVar1);
            plVar5 = puVar7 + iVar13;
            do {
              iVar8 = piVar4[-2];
              iVar10 = *piVar4;
              puVar2 = (undefined1 *)((long)puVar3 + lVar15 + (long)iVar13 * 0x58);
              lVar12 = 0x18;
              if (iVar10 <= iVar8) {
                lVar12 = 0x40;
              }
              *(int *)(puVar2 + lVar12) = iVar8;
              lVar12 = 0x24;
              if (iVar10 <= iVar8) {
                lVar12 = 0x4c;
              }
              *(undefined4 *)(puVar2 + lVar12) = 1;
              lVar12 = 0x40;
              if (iVar10 <= iVar8) {
                lVar12 = 0x18;
              }
              *(int *)(puVar2 + lVar12) = iVar10;
              lVar12 = 0x4c;
              if (iVar10 <= iVar8) {
                lVar12 = 0x24;
              }
              *(undefined4 *)(puVar2 + lVar12) = 0xffffffff;
              *(undefined4 *)(puVar2 + 0x20) = 1;
              *(undefined8 *)(puVar2 + 0x10) = 0;
              *(undefined4 *)(puVar2 + 0x48) = 1;
              *(undefined8 *)(puVar2 + 0x38) = 0;
              *(int *)(puVar2 + 0x50) = piVar4[-1];
              *(int *)(puVar2 + 0x54) = piVar4[1];
              *plVar5 = (long)puVar2;
              lVar15 = lVar15 + 0x58;
              piVar4 = piVar4 + 4;
              plVar5 = plVar5 + 1;
            } while ((ulong)uVar1 * 0x58 - lVar15 != 0);
          }
          param_2 = (undefined8 *)*param_2;
        } while (param_2 != (undefined8 *)0x0);
        FUN_1097c916c(param_3);
        puVar6 = param_3;
        FUN_1097c8418();
        param_3 = puVar7;
        param_2 = puVar14;
        if (puVar3 != &uStack_840) {
          _free();
          param_3 = puVar3;
          param_2 = puVar14;
        }
        goto LAB_1097c80a0;
      }
      uStack_838 = ((undefined8 *)param_2[7])[1];
      uStack_840 = *(undefined8 *)param_2[7];
    }
    param_2 = &uStack_840;
    FUN_1097c82d0();
    param_3 = param_1;
    puVar7 = param_1;
  }
LAB_1097c80a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (puVar6 == param_3) {
    iVar13 = 0;
    *(undefined4 *)((long)puVar6 + 0x24) = 0;
    puVar7 = puVar6 + 6;
    do {
      iVar10 = *(int *)(puVar7 + 2);
      if (iVar10 < 1) {
        iVar8 = 0;
      }
      else {
        lVar15 = 0;
        uVar11 = 0;
        uVar9 = 0;
        do {
          lVar12 = puVar7[1];
          puVar3 = (undefined8 *)(lVar12 + lVar15);
          uVar16 = NEON_smax(*puVar3,*param_2,4);
          *puVar3 = uVar16;
          uVar17 = NEON_smin(puVar3[1],param_2[1],4);
          puVar3[1] = uVar17;
          if ((int)uVar16 < (int)uVar17 &&
              (int)((ulong)uVar16 >> 0x20) < (int)((ulong)uVar17 >> 0x20)) {
            if (uVar11 != uVar9) {
              uVar16 = *puVar3;
              puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar9 * 0x10);
              puVar14[1] = puVar3[1];
              *puVar14 = uVar16;
              iVar10 = *(int *)(puVar7 + 2);
            }
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          iVar8 = (int)uVar9;
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar11 < (long)iVar10);
        iVar13 = *(int *)((long)puVar6 + 0x24);
      }
      *(int *)(puVar7 + 2) = iVar8;
      iVar13 = iVar8 + iVar13;
      *(int *)((long)puVar6 + 0x24) = iVar13;
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)0x0);
  }
  else {
    FUN_1097c916c(puVar6);
    puVar6[3] = param_2;
    *(undefined4 *)(puVar6 + 4) = 1;
    uVar16 = *param_2;
    *(undefined8 *)((long)puVar6 + 0xc) = param_2[1];
    *(undefined8 *)((long)puVar6 + 4) = uVar16;
    param_3 = param_3 + 6;
    do {
      if (0 < *(int *)(param_3 + 2)) {
        lVar12 = 0;
        lVar15 = 0;
        do {
          puVar7 = puVar6;
          FUN_1097c8e80(puVar6,0,param_3[1] + lVar12);
          if ((int)puVar7 != 0) {
            return puVar7;
          }
          lVar15 = lVar15 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar15 < *(int *)(param_3 + 2));
      }
      param_3 = (undefined8 *)*param_3;
    } while (param_3 != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1097c82d0; end: 1097c8417;  */

void FUN_1097c82d0(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == param_1) {
    iVar7 = 0;
    *(undefined4 *)(param_3 + 0x24) = 0;
    plVar9 = (long *)(param_3 + 0x30);
    do {
      iVar6 = (int)plVar9[2];
      if (iVar6 < 1) {
        iVar4 = 0;
      }
      else {
        lVar11 = 0;
        uVar8 = 0;
        uVar5 = 0;
        do {
          lVar10 = plVar9[1];
          puVar1 = (undefined8 *)(lVar10 + lVar11);
          uVar12 = NEON_smax(*puVar1,*param_2,4);
          *puVar1 = uVar12;
          uVar13 = NEON_smin(puVar1[1],param_2[1],4);
          puVar1[1] = uVar13;
          if ((int)uVar12 < (int)uVar13 &&
              (int)((ulong)uVar12 >> 0x20) < (int)((ulong)uVar13 >> 0x20)) {
            if (uVar8 != uVar5) {
              uVar12 = *puVar1;
              puVar2 = (undefined8 *)(lVar10 + (long)(int)uVar5 * 0x10);
              puVar2[1] = puVar1[1];
              *puVar2 = uVar12;
              iVar6 = (int)plVar9[2];
            }
            uVar5 = (ulong)((int)uVar5 + 1);
          }
          iVar4 = (int)uVar5;
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((long)uVar8 < (long)iVar6);
        iVar7 = *(int *)(param_3 + 0x24);
      }
      *(int *)(plVar9 + 2) = iVar4;
      iVar7 = iVar4 + iVar7;
      *(int *)(param_3 + 0x24) = iVar7;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  else {
    FUN_1097c916c(param_3);
    *(undefined8 **)(param_3 + 0x18) = param_2;
    *(undefined4 *)(param_3 + 0x20) = 1;
    uVar12 = *param_2;
    *(undefined8 *)(param_3 + 0xc) = param_2[1];
    *(undefined8 *)(param_3 + 4) = uVar12;
    plVar9 = (long *)(param_1 + 0x30);
    do {
      if (0 < (int)plVar9[2]) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          lVar3 = param_3;
          FUN_1097c8e80(param_3,0,plVar9[1] + lVar10);
          if ((int)lVar3 != 0) {
            return;
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar11 < (int)plVar9[2]);
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  return;
}



/* Entry: 1097c8418; end: 1097c88a3;  */

undefined1 * FUN_1097c8418(long *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long unaff_x22;
  long *plVar27;
  long *plVar28;
  undefined8 *puVar29;
  int aiStack_2200 [2];
  long lStack_21f8;
  undefined8 *puStack_21f0;
  undefined8 uStack_21e8;
  undefined1 *puStack_21e0;
  undefined1 *puStack_21d8;
  long lStack_21d0;
  undefined1 *puStack_21c8;
  undefined1 *puStack_21c0;
  ulong uStack_21b8;
  undefined1 *puStack_21b0;
  code *pcStack_21a8;
  long *plStack_21a0;
  undefined8 uStack_2198;
  undefined1 *puStack_2190;
  undefined1 auStack_2188 [8];
  undefined8 uStack_2180;
  undefined8 *apuStack_188 [2];
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_13c;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [192];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = param_2;
  do {
    uVar2 = (int)uVar14 * 10;
    uVar17 = uVar2 / 0xd;
    if (uVar2 / 0xd < 2) {
      uVar17 = 1;
    }
    uVar3 = 0xb;
    if (0x19 < uVar2 - 0x75) {
      uVar3 = uVar17;
    }
    uVar14 = (ulong)uVar3;
    uVar7 = (ulong)(1 < uVar3);
    uVar3 = (int)param_2 - uVar3;
    uVar18 = (ulong)uVar3;
    plVar19 = param_1;
    uVar21 = uVar14;
    if (uVar3 != 0) {
      do {
        lVar24 = *plVar19;
        if (*(int *)(param_1[uVar21] + 0x50) < *(int *)(lVar24 + 0x50)) {
          *plVar19 = param_1[uVar21];
          param_1[uVar21] = lVar24;
          uVar7 = 1;
        }
        uVar18 = uVar18 - 1;
        plVar19 = plVar19 + 1;
        uVar21 = (ulong)((int)uVar21 + 1);
      } while (uVar18 != 0);
    }
  } while ((int)uVar7 != 0);
  param_1[(int)param_2] = 0;
  uStack_170 = 0x80000000;
  ppuStack_158 = apuStack_188;
  uStack_178 = 0;
  uStack_164 = 0;
  apuStack_188[0] = &uStack_160;
  uStack_148 = 0x7fffffff;
  uStack_150 = 0;
  uStack_13c = 0;
  uStack_128 = 0x8000000080000000;
  uStack_2198 = 0x40000000000;
  uStack_2180 = 0;
  puVar4 = auStack_120;
  plStack_21a0 = param_1;
  puStack_2190 = auStack_2188;
  puStack_138 = apuStack_188[0];
  puStack_130 = apuStack_188[0];
  _setjmp();
  if ((int)puVar4 == 0) {
    puVar29 = (undefined8 *)*plStack_21a0;
    plStack_21a0 = plStack_21a0 + 1;
    do {
      if (*(int *)(puVar29 + 10) != (int)uStack_128) {
        unaff_x22 = *(long *)(puStack_2190 + 8);
        while ((unaff_x22 != 0 && (*(int *)(unaff_x22 + 0x54) < *(int *)(puVar29 + 10)))) {
          if (*(int *)(unaff_x22 + 0x54) != (int)uStack_128) {
            FUN_1097c88a4(&plStack_21a0,param_3);
            uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(unaff_x22 + 0x54));
          }
          uVar7 = param_3;
          FUN_1097c8a7c(&plStack_21a0,unaff_x22,param_3);
          unaff_x22 = *(long *)(puStack_2190 + 8);
        }
        FUN_1097c88a4(&plStack_21a0,param_3);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(puVar29 + 10));
      }
      iVar13 = *(int *)(puVar29 + 8);
      puVar11 = puStack_130;
      if (*(int *)(puStack_130 + 3) != iVar13) {
        if (iVar13 < *(int *)(puStack_130 + 3)) {
          do {
            puVar9 = (undefined8 *)puStack_130[1];
            puVar11 = puStack_130;
            if ((*(int *)(puVar9 + 3) <= iVar13) ||
               (puVar15 = (undefined8 *)puVar9[1], puVar11 = puVar9, *(int *)(puVar15 + 3) <= iVar13
               )) break;
            puStack_130 = (undefined8 *)puVar15[1];
            puVar11 = puVar15;
          } while (iVar13 < *(int *)(puStack_130 + 3));
        }
        else {
          do {
            puVar11 = (undefined8 *)*puStack_130;
            if ((iVar13 <= *(int *)(puVar11 + 3)) ||
               (puVar11 = (undefined8 *)*puVar11, iVar13 <= *(int *)(puVar11 + 3))) break;
            puStack_130 = (undefined8 *)*puVar11;
            puVar11 = puStack_130;
          } while (*(int *)(puStack_130 + 3) < iVar13);
        }
      }
      puStack_130 = puVar29 + 5;
      plVar19 = (long *)puVar11[1];
      *plVar19 = (long)puStack_130;
      puVar29[5] = puVar11;
      puVar29[6] = plVar19;
      puVar11[1] = puStack_130;
      iVar8 = *(int *)(puStack_138 + 3);
      if (iVar13 < iVar8) {
        puStack_138 = (undefined8 *)puVar29[6];
        iVar8 = *(int *)(puStack_138 + 3);
      }
      iVar13 = *(int *)(puVar29 + 3);
      puVar11 = puStack_138;
      if (iVar8 != iVar13) {
        if (iVar13 < iVar8) {
          do {
            puVar9 = (undefined8 *)puStack_138[1];
            puVar11 = puStack_138;
            if ((*(int *)(puVar9 + 3) <= iVar13) ||
               (puVar15 = (undefined8 *)puVar9[1], puVar11 = puVar9, *(int *)(puVar15 + 3) <= iVar13
               )) break;
            puStack_138 = (undefined8 *)puVar15[1];
            puVar11 = puVar15;
          } while (iVar13 < *(int *)(puStack_138 + 3));
        }
        else {
          do {
            puVar11 = (undefined8 *)*puStack_138;
            if ((iVar13 <= *(int *)(puVar11 + 3)) ||
               (puVar11 = (undefined8 *)*puVar11, iVar13 <= *(int *)(puVar11 + 3))) break;
            puStack_138 = (undefined8 *)*puVar11;
            puVar11 = puStack_138;
          } while (*(int *)(puStack_138 + 3) < iVar13);
        }
      }
      puVar9 = (undefined8 *)puVar11[1];
      *puVar9 = puVar29;
      *puVar29 = puVar11;
      puVar29[1] = puVar9;
      puVar11[1] = puVar29;
      iVar13 = (int)uStack_2198 + 1;
      iVar8 = (int)uStack_2198;
      puStack_138 = puVar29;
      if (iVar13 == uStack_2198._4_4_) {
        iVar13 = (int)&uStack_2198;
        FUN_1097c8ca0();
        if (iVar13 == 0) {
          puVar5 = auStack_120;
          plVar6 = (long *)0x1;
          _longjmp();
          puStack_21f0 = puVar29;
          uStack_21e8 = 0x2080;
          puStack_21e0 = (undefined1 *)&plStack_21a0;
          puStack_21d8 = auStack_2188;
          lStack_21d0 = unaff_x22;
          puStack_21c8 = (undefined1 *)&plStack_21a0;
          puStack_21c0 = puVar4;
          uStack_21b8 = param_3;
          puStack_21b0 = &stack0xfffffffffffffff0;
          pcStack_21a8 = FUN_1097c88a4;
          lStack_21f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar17 = *(uint *)(puVar5 + 0x2078);
          uVar14 = (ulong)uVar17;
          aiStack_2200[0] = 0;
          aiStack_2200[1] = 0;
          puVar4 = puVar5;
          plVar19 = plVar6;
          if (*(uint *)(puVar5 + 0x207c) == uVar17) goto LAB_1097c8a44;
          plVar27 = *(long **)(puVar5 + 0x2018);
          plVar10 = (long *)(puVar5 + 0x2040);
          if (plVar27 == plVar10) goto LAB_1097c8a44;
          goto LAB_1097c8904;
        }
        iVar13 = (int)uStack_2198 + 1;
        iVar8 = (int)uStack_2198;
      }
      uStack_2198 = CONCAT44(uStack_2198._4_4_,iVar13);
      if (iVar8 != 0) {
        iVar8 = *(int *)((long)puVar29 + 0x54);
        do {
          iVar1 = iVar13 >> 1;
          if (*(int *)(*(long *)(puStack_2190 + (long)iVar1 * 8) + 0x54) <= iVar8) break;
          *(long *)(puStack_2190 + (long)iVar13 * 8) = *(long *)(puStack_2190 + (long)iVar1 * 8);
          iVar13 = iVar1;
        } while (iVar1 != 1);
      }
      *(undefined8 **)(puStack_2190 + (long)iVar13 * 8) = puVar29;
      plVar19 = plStack_21a0 + 1;
      puVar29 = (undefined8 *)*plStack_21a0;
      plStack_21a0 = plVar19;
    } while (puVar29 != (undefined8 *)0x0);
    lVar24 = *(long *)(puStack_2190 + 8);
    while (lVar24 != 0) {
      if (*(int *)(lVar24 + 0x54) != (int)uStack_128) {
        FUN_1097c88a4(&plStack_21a0,param_3);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)(lVar24 + 0x54));
      }
      FUN_1097c8a7c(&plStack_21a0,lVar24,param_3);
      lVar24 = *(long *)(puStack_2190 + 8);
    }
  }
  if (puStack_2190 != auStack_2188) {
    _free();
  }
  return puVar4;
LAB_1097c8904:
  do {
    aiStack_2200[(int)plVar27[4]] = aiStack_2200[(int)plVar27[4]] + *(int *)((long)plVar27 + 0x24);
    plVar28 = plVar27;
    if (aiStack_2200[0] == 0 || aiStack_2200[1] == 0) {
      do {
        plVar27 = (long *)*plVar28;
        if (plVar27 == plVar10) goto LAB_1097c8a3c;
        if (plVar28[2] != 0) {
          puVar4 = puVar5;
          plVar19 = plVar28;
          uVar7 = uVar14;
          FUN_1097c8c30(puVar5,plVar28,uVar14,plVar6);
          plVar27 = (long *)*plVar28;
        }
        aiStack_2200[(int)plVar27[4]] =
             aiStack_2200[(int)plVar27[4]] + *(int *)((long)plVar27 + 0x24);
        plVar28 = plVar27;
      } while (aiStack_2200[0] == 0 || aiStack_2200[1] == 0);
    }
    do {
      plVar27 = (long *)*plVar27;
      if (plVar27[2] != 0) {
        puVar4 = puVar5;
        plVar19 = plVar27;
        uVar7 = uVar14;
        FUN_1097c8c30(puVar5,plVar27,uVar14,plVar6);
      }
      aiStack_2200[(int)plVar27[4]] = aiStack_2200[(int)plVar27[4]] + *(int *)((long)plVar27 + 0x24)
      ;
    } while ((aiStack_2200[0] != 0 && aiStack_2200[1] != 0) ||
            (iVar13 = (int)plVar27[3], iVar13 == *(int *)(*plVar27 + 0x18)));
    plVar12 = (long *)plVar28[2];
    if (plVar12 != plVar27) {
      if (plVar12 == (long *)0x0) {
LAB_1097c8a1c:
        if ((int)plVar28[3] == iVar13) goto LAB_1097c8a30;
        *(uint *)((long)plVar28 + 0x1c) = uVar17;
      }
      else if ((int)plVar12[3] != iVar13) {
        puVar4 = puVar5;
        plVar19 = plVar28;
        uVar7 = uVar14;
        FUN_1097c8c30(puVar5,plVar28,uVar14,plVar6);
        iVar13 = (int)plVar27[3];
        goto LAB_1097c8a1c;
      }
      plVar28[2] = (long)plVar27;
    }
LAB_1097c8a30:
    plVar27 = (long *)*plVar27;
  } while (plVar27 != plVar10);
LAB_1097c8a3c:
  *(undefined4 *)(puVar5 + 0x207c) = *(undefined4 *)(puVar5 + 0x2078);
LAB_1097c8a44:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_21f8) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar24 = plVar19[2];
  plVar6 = (long *)*plVar19;
  puVar5 = puVar4;
  if (lVar24 != 0) {
    if ((int)plVar6[3] == (int)plVar19[3]) {
      *(undefined4 *)((long)plVar6 + 0x1c) = *(undefined4 *)((long)plVar19 + 0x1c);
      plVar6[2] = lVar24;
    }
    else {
      FUN_1097c8c30(puVar4,plVar19,*(undefined4 *)(puVar4 + 0x2078),uVar7);
      plVar6 = (long *)*plVar19;
    }
  }
  plVar10 = *(long **)(puVar4 + 0x2068);
  if (*(long **)(puVar4 + 0x2068) == plVar19) {
    *(long **)(puVar4 + 0x2068) = plVar6;
    plVar10 = plVar6;
  }
  if (*(long **)(puVar4 + 0x2070) == plVar19) {
    *(long **)(puVar4 + 0x2070) = plVar6;
  }
  puVar29 = (undefined8 *)plVar19[1];
  *puVar29 = plVar6;
  *(undefined8 **)(*plVar19 + 8) = puVar29;
  plVar6 = plVar19 + 5;
  lVar24 = *plVar6;
  lVar16 = plVar19[7];
  if (lVar16 != 0) {
    if (*(int *)(lVar24 + 0x18) == (int)plVar19[8]) {
      *(undefined4 *)(lVar24 + 0x1c) = *(undefined4 *)((long)plVar19 + 0x44);
      *(long *)(lVar24 + 0x10) = lVar16;
    }
    else {
      puVar5 = puVar4;
      FUN_1097c8c30(puVar4,plVar6,*(undefined4 *)(puVar4 + 0x2078),uVar7);
      lVar24 = *plVar6;
      plVar10 = *(long **)(puVar4 + 0x2068);
    }
  }
  if (plVar10 == plVar6) {
    *(long *)(puVar4 + 0x2068) = lVar24;
  }
  if (*(long **)(puVar4 + 0x2070) == plVar6) {
    *(long *)(puVar4 + 0x2070) = lVar24;
  }
  plVar6 = (long *)plVar19[6];
  *plVar6 = lVar24;
  *(long **)(plVar19[5] + 8) = plVar6;
  lVar24 = *(long *)(puVar4 + 0x10);
  iVar13 = *(int *)(puVar4 + 8);
  iVar8 = iVar13 + -1;
  *(int *)(puVar4 + 8) = iVar8;
  if (iVar8 == 0) {
    *(undefined8 *)(lVar24 + 8) = 0;
  }
  else {
    lVar16 = *(long *)(lVar24 + (long)iVar13 * 8);
    if (iVar13 < 3) {
      lVar22 = 1;
    }
    else {
      iVar1 = *(int *)(lVar16 + 0x54);
      iVar23 = 2;
      iVar20 = 1;
      do {
        iVar26 = iVar8;
        if ((iVar23 != iVar8) &&
           (iVar26 = (int)((long)iVar23 | 1U),
           *(int *)(*(long *)(lVar24 + (long)iVar23 * 8) + 0x54) <=
           *(int *)(*(long *)(lVar24 + ((long)iVar23 | 1U) * 8) + 0x54))) {
          iVar26 = iVar23;
        }
        lVar25 = *(long *)(lVar24 + (long)iVar26 * 8);
        lVar22 = (long)iVar20;
        if (iVar1 <= *(int *)(lVar25 + 0x54)) goto LAB_1097c8c1c;
        *(long *)(lVar24 + lVar22 * 8) = lVar25;
        iVar23 = iVar26 * 2;
        iVar20 = iVar26;
      } while (iVar23 < iVar13);
      lVar22 = (long)iVar26;
    }
LAB_1097c8c1c:
    *(long *)(lVar24 + lVar22 * 8) = lVar16;
  }
  return puVar5;
}



/* Entry: 1097c88a4; end: 1097c8a7b;  */

void FUN_1097c88a4(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  int aiStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 0x2078);
  uVar16 = (ulong)uVar1;
  aiStack_60[0] = 0;
  aiStack_60[1] = 0;
  lVar9 = param_1;
  plVar4 = param_2;
  if (*(uint *)(param_1 + 0x207c) != uVar1) {
    plVar17 = *(long **)(param_1 + 0x2018);
    plVar8 = (long *)(param_1 + 0x2040);
    if (plVar17 != plVar8) {
      do {
        aiStack_60[(int)plVar17[4]] = aiStack_60[(int)plVar17[4]] + *(int *)((long)plVar17 + 0x24);
        plVar10 = plVar17;
        if (aiStack_60[0] == 0 || aiStack_60[1] == 0) {
          do {
            plVar17 = (long *)*plVar10;
            if (plVar17 == plVar8) goto LAB_1097c8a3c;
            if (plVar10[2] != 0) {
              lVar9 = param_1;
              plVar4 = plVar10;
              param_3 = uVar16;
              FUN_1097c8c30(param_1,plVar10,uVar16,param_2);
              plVar17 = (long *)*plVar10;
            }
            aiStack_60[(int)plVar17[4]] =
                 aiStack_60[(int)plVar17[4]] + *(int *)((long)plVar17 + 0x24);
            plVar10 = plVar17;
          } while (aiStack_60[0] == 0 || aiStack_60[1] == 0);
        }
        do {
          plVar17 = (long *)*plVar17;
          if (plVar17[2] != 0) {
            lVar9 = param_1;
            plVar4 = plVar17;
            param_3 = uVar16;
            FUN_1097c8c30(param_1,plVar17,uVar16,param_2);
          }
          aiStack_60[(int)plVar17[4]] = aiStack_60[(int)plVar17[4]] + *(int *)((long)plVar17 + 0x24)
          ;
        } while ((aiStack_60[0] != 0 && aiStack_60[1] != 0) ||
                (iVar5 = (int)plVar17[3], iVar5 == *(int *)(*plVar17 + 0x18)));
        plVar7 = (long *)plVar10[2];
        if (plVar7 != plVar17) {
          if (plVar7 == (long *)0x0) {
LAB_1097c8a1c:
            if ((int)plVar10[3] == iVar5) goto LAB_1097c8a30;
            *(uint *)((long)plVar10 + 0x1c) = uVar1;
          }
          else if ((int)plVar7[3] != iVar5) {
            lVar9 = param_1;
            plVar4 = plVar10;
            param_3 = uVar16;
            FUN_1097c8c30(param_1,plVar10,uVar16,param_2);
            iVar5 = (int)plVar17[3];
            goto LAB_1097c8a1c;
          }
          plVar10[2] = (long)plVar17;
        }
LAB_1097c8a30:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != plVar8);
LAB_1097c8a3c:
      *(undefined4 *)(param_1 + 0x207c) = *(undefined4 *)(param_1 + 0x2078);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = plVar4[2];
  plVar8 = (long *)*plVar4;
  if (lVar6 != 0) {
    if ((int)plVar8[3] == (int)plVar4[3]) {
      *(undefined4 *)((long)plVar8 + 0x1c) = *(undefined4 *)((long)plVar4 + 0x1c);
      plVar8[2] = lVar6;
    }
    else {
      FUN_1097c8c30(lVar9,plVar4,*(undefined4 *)(lVar9 + 0x2078),param_3);
      plVar8 = (long *)*plVar4;
    }
  }
  plVar17 = *(long **)(lVar9 + 0x2068);
  if (*(long **)(lVar9 + 0x2068) == plVar4) {
    *(long **)(lVar9 + 0x2068) = plVar8;
    plVar17 = plVar8;
  }
  if (*(long **)(lVar9 + 0x2070) == plVar4) {
    *(long **)(lVar9 + 0x2070) = plVar8;
  }
  plVar10 = (long *)plVar4[1];
  *plVar10 = (long)plVar8;
  *(long **)(*plVar4 + 8) = plVar10;
  plVar8 = plVar4 + 5;
  lVar6 = *plVar8;
  lVar11 = plVar4[7];
  if (lVar11 != 0) {
    if (*(int *)(lVar6 + 0x18) == (int)plVar4[8]) {
      *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)((long)plVar4 + 0x44);
      *(long *)(lVar6 + 0x10) = lVar11;
    }
    else {
      FUN_1097c8c30(lVar9,plVar8,*(undefined4 *)(lVar9 + 0x2078),param_3);
      lVar6 = *plVar8;
      plVar17 = *(long **)(lVar9 + 0x2068);
    }
  }
  if (plVar17 == plVar8) {
    *(long *)(lVar9 + 0x2068) = lVar6;
  }
  if (*(long **)(lVar9 + 0x2070) == plVar8) {
    *(long *)(lVar9 + 0x2070) = lVar6;
  }
  plVar8 = (long *)plVar4[6];
  *plVar8 = lVar6;
  *(long **)(plVar4[5] + 8) = plVar8;
  lVar6 = *(long *)(lVar9 + 0x10);
  iVar5 = *(int *)(lVar9 + 8);
  iVar3 = iVar5 + -1;
  *(int *)(lVar9 + 8) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  else {
    lVar9 = *(long *)(lVar6 + (long)iVar5 * 8);
    if (iVar5 < 3) {
      lVar11 = 1;
    }
    else {
      iVar2 = *(int *)(lVar9 + 0x54);
      iVar13 = 2;
      iVar12 = 1;
      do {
        iVar15 = iVar3;
        if ((iVar13 != iVar3) &&
           (iVar15 = (int)((long)iVar13 | 1U),
           *(int *)(*(long *)(lVar6 + (long)iVar13 * 8) + 0x54) <=
           *(int *)(*(long *)(lVar6 + ((long)iVar13 | 1U) * 8) + 0x54))) {
          iVar15 = iVar13;
        }
        lVar14 = *(long *)(lVar6 + (long)iVar15 * 8);
        lVar11 = (long)iVar12;
        if (iVar2 <= *(int *)(lVar14 + 0x54)) goto LAB_1097c8c1c;
        *(long *)(lVar6 + lVar11 * 8) = lVar14;
        iVar13 = iVar15 * 2;
        iVar12 = iVar15;
      } while (iVar13 < iVar5);
      lVar11 = (long)iVar15;
    }
LAB_1097c8c1c:
    *(long *)(lVar6 + lVar11 * 8) = lVar9;
  }
  return;
}



/* Entry: 1097c8a7c; end: 1097c8c2f;  */

void FUN_1097c8a7c(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  lVar4 = param_2[2];
  plVar6 = (long *)*param_2;
  if (lVar4 != 0) {
    if ((int)plVar6[3] == (int)param_2[3]) {
      *(undefined4 *)((long)plVar6 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
      plVar6[2] = lVar4;
    }
    else {
      FUN_1097c8c30(param_1,param_2,*(undefined4 *)(param_1 + 0x2078),param_3);
      plVar6 = (long *)*param_2;
    }
  }
  plVar5 = *(long **)(param_1 + 0x2068);
  if (*(long **)(param_1 + 0x2068) == param_2) {
    *(long **)(param_1 + 0x2068) = plVar6;
    plVar5 = plVar6;
  }
  if (*(long **)(param_1 + 0x2070) == param_2) {
    *(long **)(param_1 + 0x2070) = plVar6;
  }
  plVar7 = (long *)param_2[1];
  *plVar7 = (long)plVar6;
  *(long **)(*param_2 + 8) = plVar7;
  plVar6 = param_2 + 5;
  lVar4 = *plVar6;
  lVar8 = param_2[7];
  if (lVar8 != 0) {
    if (*(int *)(lVar4 + 0x18) == (int)param_2[8]) {
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((long)param_2 + 0x44);
      *(long *)(lVar4 + 0x10) = lVar8;
    }
    else {
      FUN_1097c8c30(param_1,plVar6,*(undefined4 *)(param_1 + 0x2078),param_3);
      lVar4 = *plVar6;
      plVar5 = *(long **)(param_1 + 0x2068);
    }
  }
  if (plVar5 == plVar6) {
    *(long *)(param_1 + 0x2068) = lVar4;
  }
  if (*(long **)(param_1 + 0x2070) == plVar6) {
    *(long *)(param_1 + 0x2070) = lVar4;
  }
  plVar6 = (long *)param_2[6];
  *plVar6 = lVar4;
  *(long **)(param_2[5] + 8) = plVar6;
  lVar4 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 8) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  else {
    lVar8 = *(long *)(lVar4 + (long)iVar2 * 8);
    if (iVar2 < 3) {
      lVar10 = 1;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x54);
      iVar11 = 2;
      iVar9 = 1;
      do {
        iVar13 = iVar3;
        if ((iVar11 != iVar3) &&
           (iVar13 = (int)((long)iVar11 | 1U),
           *(int *)(*(long *)(lVar4 + (long)iVar11 * 8) + 0x54) <=
           *(int *)(*(long *)(lVar4 + ((long)iVar11 | 1U) * 8) + 0x54))) {
          iVar13 = iVar11;
        }
        lVar12 = *(long *)(lVar4 + (long)iVar13 * 8);
        lVar10 = (long)iVar9;
        if (iVar1 <= *(int *)(lVar12 + 0x54)) goto LAB_1097c8c1c;
        *(long *)(lVar4 + lVar10 * 8) = lVar12;
        iVar11 = iVar13 * 2;
        iVar9 = iVar13;
      } while (iVar11 < iVar2);
      lVar10 = (long)iVar13;
    }
LAB_1097c8c1c:
    *(long *)(lVar4 + lVar10 * 8) = lVar8;
  }
  return;
}



/* Entry: 1097c8c30; end: 1097c8c9f;  */

void FUN_1097c8c30(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_2c = *(int *)(param_2 + 0x1c);
  if (iStack_2c < param_3) {
    uStack_30 = *(undefined4 *)(param_2 + 0x18);
    uStack_28 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18);
    iStack_24 = param_3;
    FUN_1097c8e80(param_4,0,&uStack_30);
    if ((int)param_4 != 0) {
      param_1 = param_1 + 0x2080;
      _longjmp(param_1,param_4);
      iVar1 = *(int *)(param_1 + 4);
      uVar2 = iVar1 << 1;
      *(uint *)(param_1 + 4) = uVar2;
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == param_1 + 0x10) {
        if (iVar1 < 1) {
          return;
        }
        lVar3 = (ulong)uVar2 << 3;
        _malloc();
        if (lVar3 == 0) {
          return;
        }
        _memcpy();
      }
      else {
        if (iVar1 < 0) {
          return;
        }
        _realloc(lVar3,(ulong)uVar2 << 3);
        if (lVar3 == 0) {
          return;
        }
      }
      *(long *)(param_1 + 8) = lVar3;
      return;
    }
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 1097c8ca0; end: 1097c8d2b;  */

void FUN_1097c8ca0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = iVar1 << 1;
  *(uint *)(param_1 + 4) = uVar2;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == param_1 + 0x10) {
    if (iVar1 < 1) {
      return;
    }
    lVar3 = (ulong)uVar2 << 3;
    _malloc();
    if (lVar3 == 0) {
      return;
    }
    _memcpy();
  }
  else {
    if (iVar1 < 0) {
      return;
    }
    _realloc(lVar3,(ulong)uVar2 << 3);
    if (lVar3 == 0) {
      return;
    }
  }
  *(long *)(param_1 + 8) = lVar3;
  return;
}



/* Entry: 1097c8d2c; end: 1097c8e7f;  */

void FUN_1097c8d2c(undefined4 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0xc;
  *(undefined4 **)(param_1 + 0xe) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x10) = 0x2000000000;
  param_1[10] = 1;
  if (param_2 != 0) {
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    uVar1 = *(uint *)(param_2 + 0x20);
    *(undefined8 **)(param_1 + 6) = puVar4;
    param_1[8] = uVar1;
    if (uVar1 != 0) {
      uVar10 = *puVar4;
      *(undefined8 *)(param_1 + 3) = puVar4[1];
      *(undefined8 *)(param_1 + 1) = uVar10;
      if (1 < (int)uVar1) {
        iVar3 = param_1[1];
        iVar5 = param_1[2];
        iVar6 = param_1[3];
        iVar7 = param_1[4];
        lVar8 = (ulong)uVar1 - 1;
        piVar9 = (int *)((long)puVar4 + 0x1c);
        do {
          iVar2 = piVar9[-3];
          if (iVar2 < iVar3) {
            param_1[1] = iVar2;
            iVar3 = iVar2;
          }
          iVar2 = piVar9[-2];
          if (iVar2 < iVar5) {
            param_1[2] = iVar2;
            iVar5 = iVar2;
          }
          iVar2 = piVar9[-1];
          if (iVar6 < iVar2) {
            param_1[3] = iVar2;
            iVar6 = iVar2;
          }
          iVar2 = *piVar9;
          if (iVar7 < iVar2) {
            param_1[4] = iVar2;
            iVar7 = iVar2;
          }
          piVar9 = piVar9 + 4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
    return;
  }
  return;
}



/* Entry: 1097c8e80; end: 1097c9043;  */

undefined4 FUN_1097c8e80(undefined4 *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  ulong uStack_60;
  ulong uStack_58;
  
  if (param_2 == 1) {
    piVar16 = (int *)((ulong)&uStack_60 | 4);
    uStack_60 = CONCAT44((int)(*param_3 >> 0x20) + 0x7f,(int)*param_3 + 0x7f) & 0xffffff00ffffff00;
    uStack_58 = CONCAT44((int)(param_3[1] >> 0x20) + 0x7f,(int)param_3[1] + 0x7f) &
                0xffffff00ffffff00;
    iVar20 = (int)(uStack_60 >> 0x20);
    param_3 = &uStack_60;
  }
  else {
    piVar16 = (int *)((long)param_3 + 4);
    iVar20 = *piVar16;
  }
  piVar17 = (int *)((long)param_3 + 0xc);
  iVar14 = *piVar17;
  if (iVar20 != iVar14) {
    iVar6 = (int)*param_3;
    iVar7 = (int)param_3[1];
    if (iVar6 != iVar7) {
      iVar15 = param_1[8];
      if (iVar15 == 0) {
        FUN_1097c9044(param_1,param_3);
LAB_1097c903c:
        return *param_1;
      }
      iVar2 = iVar6;
      if (iVar7 <= iVar6) {
        iVar2 = iVar7;
      }
      iVar3 = iVar6;
      if (iVar6 <= iVar7) {
        iVar3 = iVar7;
      }
      if ((iVar2 < (int)param_1[3]) && ((int)param_1[1] < iVar3)) {
        piVar5 = piVar16;
        if (iVar14 <= iVar20) {
          piVar5 = piVar17;
          piVar17 = piVar16;
        }
        iVar8 = *piVar5;
        if ((iVar8 < (int)param_1[4]) && (iVar9 = *piVar17, (int)param_1[2] < iVar9)) {
          if (0 < iVar15) {
            lVar18 = 0;
            lVar19 = 0;
            do {
              piVar16 = (int *)(*(long *)(param_1 + 6) + lVar18);
              iVar10 = piVar16[2];
              if ((iVar2 < iVar10) && (iVar11 = *piVar16, iVar11 < iVar3)) {
                lVar1 = *(long *)(param_1 + 6) + lVar18;
                iVar12 = *(int *)(lVar1 + 0xc);
                if ((iVar8 < iVar12) && (iVar13 = *(int *)(lVar1 + 4), iVar13 < iVar9)) {
                  iVar4 = iVar2;
                  if (iVar2 <= iVar11) {
                    iVar4 = iVar11;
                  }
                  iStack_6c = iVar8;
                  if (iVar8 <= iVar13) {
                    iStack_6c = iVar13;
                  }
                  iStack_70 = iVar3;
                  if (iVar10 <= iVar3) {
                    iStack_70 = iVar10;
                  }
                  iStack_64 = iVar9;
                  if (iVar12 <= iVar9) {
                    iStack_64 = iVar12;
                  }
                  if (iVar4 < iStack_70 && iStack_6c < iStack_64) {
                    iStack_68 = iVar4;
                    if (iVar20 < iVar14 == iVar6 < iVar7) {
                      iStack_68 = iStack_70;
                      iStack_70 = iVar4;
                    }
                    FUN_1097c9044(param_1,&iStack_70);
                    iVar15 = param_1[8];
                  }
                }
              }
              lVar19 = lVar19 + 1;
              lVar18 = lVar18 + 0x10;
            } while (lVar19 < iVar15);
          }
          goto LAB_1097c903c;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1097c9044; end: 1097c9113;  */

void FUN_1097c9044(int *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  if (*param_1 != 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x12);
  iVar4 = *(int *)(puVar6 + 2);
  if (iVar4 == *(int *)((long)puVar6 + 0x14)) {
    if (iVar4 < 0) {
      *puVar6 = 0;
    }
    else {
      uVar1 = iVar4 << 1;
      puVar3 = (undefined8 *)((ulong)uVar1 << 4 | 0x18);
      _malloc();
      *puVar6 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        iVar4 = 0;
        *(undefined8 **)(param_1 + 0x12) = puVar3;
        *(undefined4 *)(puVar3 + 2) = 0;
        *(uint *)((long)puVar3 + 0x14) = uVar1;
        puVar5 = puVar3 + 3;
        *puVar3 = 0;
        puVar3[1] = puVar5;
        goto LAB_1097c9078;
      }
    }
    *param_1 = 1;
  }
  else {
    puVar5 = (undefined8 *)puVar6[1];
    puVar3 = puVar6;
LAB_1097c9078:
    *(int *)(puVar3 + 2) = iVar4 + 1;
    uVar2 = *(undefined8 *)*param_2;
    (puVar5 + (long)iVar4 * 2)[1] = *(undefined8 *)(*param_2 + 8);
    puVar5[(long)iVar4 * 2] = uVar2;
    param_1[9] = param_1[9] + 1;
    if (param_1[10] != 0) {
      auVar7 = NEON_ext(*param_2,*param_2,8,1);
      param_1[10] = (uint)(((char)*(undefined8 *)*param_2 == '\0' && auVar7[0] == '\0') &&
                          ((char)((ulong)*(undefined8 *)*param_2 >> 0x20) == '\0' &&
                          auVar7[4] == '\0'));
    }
  }
  return;
}



/* Entry: 1097c9114; end: 1097c916b;  */

void FUN_1097c9114(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar1 = (long *)(param_1 + 0x30);
    uVar4 = **(undefined8 **)(param_1 + 0x38);
    uVar5 = (*(undefined8 **)(param_1 + 0x38))[1];
    do {
      uVar2 = (ulong)*(uint *)(plVar1 + 2);
      if (0 < (int)*(uint *)(plVar1 + 2)) {
        puVar3 = (undefined8 *)(plVar1[1] + 8);
        do {
          uVar4 = NEON_smin(puVar3[-1],uVar4,4);
          uVar5 = NEON_smax(*puVar3,uVar5,4);
          puVar3 = puVar3 + 2;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    *param_2 = uVar4;
    param_2[1] = uVar5;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 1097c916c; end: 1097c938b;  */

void FUN_1097c916c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  *(long **)(param_1 + 0x48) = (long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x38) = param_1 + 0x50;
  *(undefined8 *)(param_1 + 0x40) = 0x2000000000;
  *(undefined8 *)(param_1 + 0x24) = 0x100000000;
  return;
}



/* Entry: 1097c938c; end: 1097c948b;  */

void FUN_1097c938c(long *param_1,long param_2)

{
  long lVar1;
  
  if ((ulong)param_1[3] < (ulong)(param_1[4] + param_2)) {
    do {
      lVar1 = *param_1;
      FUN_1097d2b64(lVar1,param_1[1]);
      if (lVar1 == 0) {
        return;
      }
      func_0x0001097c943c(param_1,lVar1);
    } while ((ulong)param_1[3] < (ulong)(param_1[4] + param_2));
  }
  return;
}



/* Entry: 1097c948c; end: 1097c956b;  */

undefined8 FUN_1097c948c(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if ((param_1 != (int *)0x11386a1e0) && (*(long *)(param_1 + 4) == 0)) {
    if ((*param_1 <= *param_2) && (param_2[2] + *param_2 <= param_1[2] + *param_1)) {
      if ((param_1[1] <= param_2[1]) && (param_2[3] + param_2[1] <= param_1[3] + param_1[1])) {
        uVar1 = param_1[8];
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0) {
          return 1;
        }
        if (0 < (int)uVar1) {
          piVar3 = (int *)(*(long *)(param_1 + 6) + 8);
          do {
            if ((((piVar3[-2] <= *param_3) && (piVar3[-1] <= param_3[1])) && (param_3[2] <= *piVar3)
                ) && (param_3[3] <= piVar3[1])) {
              return 1;
            }
            piVar3 = piVar3 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
    }
  }
  return 0;
}



/* Entry: 1097c956c; end: 1097c959f;  */

void FUN_1097c956c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)*param_2;
  iVar2 = (int)((ulong)*param_2 >> 0x20);
  uStack_20 = CONCAT44(iVar2 << 8,iVar1 << 8);
  uStack_18 = CONCAT44(((int)((ulong)param_2[1] >> 0x20) + iVar2) * 0x100,
                       ((int)param_2[1] + iVar1) * 0x100);
  FUN_1097c948c(param_1,param_2,&uStack_20);
  return;
}



/* Entry: 1097c95a0; end: 1097c9803;  */

undefined8
FUN_1097c95a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 auStack_280 [8];
  undefined8 uStack_260;
  undefined4 uStack_258;
  long *plStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  long **pplStack_238;
  undefined1 auStack_230 [512];
  
  auStack_280[0] = 0;
  uStack_260 = 0;
  pplStack_238 = &plStack_250;
  puStack_248 = auStack_230;
  plStack_250 = (long *)0x0;
  uStack_240 = 0x2000000000;
  uStack_258 = 1;
  FUN_1097dbfa4(param_2,param_3,param_4,auStack_280);
  if (((int)param_2 == 0) && (uStack_260._4_4_ != 0)) {
    func_0x0001097c9660(param_1,auStack_280);
    plVar1 = plStack_250;
  }
  else {
    FUN_1097ca284(param_1);
    param_1 = 0x11386a1e0;
    plVar1 = plStack_250;
  }
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    _free();
  }
  return param_1;
}



/* Entry: 1097c9804; end: 1097c987b;  */

void FUN_1097c9804(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  
  if (param_1 != 0x11386a1e0) {
    func_0x0001097ed40c(param_2,auStack_30);
    if (iStack_28 == 0 || iStack_24 == 0) {
      FUN_1097ca284(param_1);
    }
    else {
      FUN_1097c987c(param_1,auStack_30,param_2);
    }
  }
  return;
}



/* Entry: 1097c987c; end: 1097c9b23;  */

undefined8 * FUN_1097c987c(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  short sVar22;
  short sVar24;
  short sVar25;
  undefined1 auVar23 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x1;
    _calloc(1,0x48);
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x11386a1e0;
    }
    param_1[1] = 0xffffff00ffffff;
    *param_1 = 0xff800000ff800000;
  }
  iVar21 = *(int *)(param_1 + 4);
  if (iVar21 == 1) {
    piVar8 = (int *)param_1[3];
    if ((((*(int *)*param_3 <= *piVar8) && (*(int *)(*param_3 + 4) <= piVar8[1])) &&
        (piVar8[2] <= *(int *)(*param_3 + 8))) && (piVar8[3] <= *(int *)(*param_3 + 0xc))) {
      return param_1;
    }
  }
  else {
    if (iVar21 == 0) {
      param_1[3] = (long)param_1 + 0x34;
      uVar5 = *(undefined8 *)*param_3;
      *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)(*param_3 + 8);
      *(undefined8 *)((long)param_1 + 0x34) = uVar5;
      *(undefined4 *)(param_1 + 4) = 1;
      if (param_1[2] == 0) {
        uVar5 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar5;
      }
      else {
        puVar6 = param_1;
        func_0x0001097ed458(param_1,param_2);
        if ((int)puVar6 == 0) goto LAB_1097c9ad8;
        if (param_1[2] != 0) {
          return param_1;
        }
      }
      auVar18 = *param_3;
      auVar20 = NEON_ext(auVar18,auVar18,8,1);
      *(uint *)(param_1 + 6) =
           (uint)((auVar18[0] == '\0' && auVar20[0] == '\0') &&
                 (auVar18[4] == '\0' && auVar20[4] == '\0'));
      return param_1;
    }
    if (iVar21 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_1097c9ad8;
    }
  }
  lVar10 = 0;
  uVar13 = 0;
  uVar9 = 0;
  bVar4 = false;
  do {
    piVar8 = (int *)(param_1[3] + uVar9 * 0x10);
    if (uVar13 != uVar9) {
      puVar6 = (undefined8 *)(param_1[3] + lVar10);
      uVar5 = *puVar6;
      *(undefined8 *)(piVar8 + 2) = puVar6[1];
      *(undefined8 *)piVar8 = uVar5;
    }
    iVar21 = *(int *)*param_3;
    iVar14 = *piVar8;
    if (*piVar8 < iVar21) {
      *piVar8 = iVar21;
      bVar4 = true;
      iVar14 = iVar21;
    }
    iVar21 = *(int *)(*param_3 + 8);
    iVar15 = piVar8[2];
    if (iVar21 < piVar8[2]) {
      piVar8[2] = iVar21;
      bVar4 = true;
      iVar15 = iVar21;
    }
    iVar21 = *(int *)(*param_3 + 4);
    iVar16 = piVar8[1];
    if (piVar8[1] < iVar21) {
      piVar8[1] = iVar21;
      bVar4 = true;
      iVar16 = iVar21;
    }
    iVar21 = *(int *)(*param_3 + 0xc);
    iVar17 = piVar8[3];
    if (iVar21 < piVar8[3]) {
      piVar8[3] = iVar21;
      bVar4 = true;
      iVar17 = iVar21;
    }
    uVar7 = (uint)uVar9;
    if (iVar14 < iVar15 && iVar16 < iVar17) {
      uVar7 = uVar7 + 1;
    }
    uVar9 = (ulong)uVar7;
    uVar13 = uVar13 + 1;
    lVar10 = lVar10 + 0x10;
  } while ((long)uVar13 < (long)*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = uVar7;
  if (uVar7 == 0) {
LAB_1097c9ad8:
    FUN_1097ca284(param_1);
    return (undefined8 *)0x11386a1e0;
  }
  if (!bVar4) {
    return param_1;
  }
  pauVar11 = (undefined1 (*) [16])param_1[3];
  uStack_40 = *(undefined8 *)*pauVar11;
  uStack_38 = *(undefined8 *)(*pauVar11 + 8);
  auVar18 = *pauVar11;
  if (uVar7 != 1) {
    lVar10 = uVar9 - 1;
    auVar20 = auVar18;
    do {
      pauVar12 = pauVar11 + 1;
      iVar21 = (int)((ulong)*(undefined8 *)(pauVar11[1] + 8) >> 0x20);
      sVar22 = -(ushort)((int)((ulong)*(undefined8 *)*pauVar12 >> 0x20) < auVar20._4_4_);
      sVar24 = -(ushort)(auVar20._8_4_ < (int)*(undefined8 *)(pauVar11[1] + 8));
      sVar25 = -(ushort)(auVar20._12_4_ < iVar21);
      auVar19._12_4_ = iVar21;
      auVar19._0_12_ = *(undefined1 (*) [12])*pauVar12;
      auVar23 = NEON_smax(auVar19,auVar20,4);
      auVar1._12_4_ = iVar21;
      auVar1._0_12_ = *(undefined1 (*) [12])*pauVar12;
      auVar19 = NEON_smin(auVar1,auVar20,4);
      auVar2._12_4_ = iVar21;
      auVar2._0_12_ = *(undefined1 (*) [12])*pauVar12;
      auVar3._4_2_ = sVar22;
      auVar3._0_4_ = (int)(short)-(ushort)((int)*(undefined8 *)*pauVar12 < auVar20._0_4_);
      auVar3._6_2_ = sVar22 >> 0xf;
      auVar3._8_2_ = sVar24;
      auVar3._10_2_ = sVar24 >> 0xf;
      auVar3._12_2_ = sVar25;
      auVar3._14_2_ = sVar25 >> 0xf;
      auVar18 = auVar18 ^ (auVar18 ^ auVar2) & auVar3;
      uStack_40 = auVar18._0_8_;
      auVar20._0_8_ = auVar19._0_8_;
      auVar20._8_8_ = auVar23._8_8_;
      lVar10 = lVar10 + -1;
      pauVar11 = pauVar12;
    } while (lVar10 != 0);
    uStack_38 = auVar18._8_8_;
  }
  if (param_1[2] == 0) {
    func_0x0001097ed40c(&uStack_40,param_1);
  }
  else {
    func_0x0001097ed40c(&uStack_40,auStack_50);
    puVar6 = param_1;
    func_0x0001097ed458(param_1,auStack_50);
    if ((int)puVar6 == 0) goto LAB_1097c9ad8;
  }
  if (param_1[5] != 0) {
    FUN_1097eeb3c();
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 1097c9b24; end: 1097c9b8f;  */

undefined8 FUN_1097c9b24(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    *(long *)(param_2 + 0x18) = param_2 + 0x34;
    uVar1 = **(undefined8 **)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x3c) = (*(undefined8 **)(param_1 + 0x38))[1];
    *(undefined8 *)(param_2 + 0x34) = uVar1;
    uVar1 = 1;
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  else {
    func_0x0001097c91d0(param_1,param_2 + 0x20);
    *(long *)(param_2 + 0x18) = param_1;
    if (param_1 == 0) {
      FUN_1097ca284(param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 1097c9b90; end: 1097c9c03;  */

long FUN_1097c9b90(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = 0x11386a1e0;
  if (param_1 != 0x11386a1e0) {
    if ((*(int *)(param_2 + 1) == 0) || (*(int *)((long)param_2 + 0xc) == 0)) {
      FUN_1097ca284();
      lVar1 = 0x11386a1e0;
    }
    else {
      iVar2 = (int)*param_2;
      iVar3 = (int)((ulong)*param_2 >> 0x20);
      uStack_18 = CONCAT44((iVar3 + *(int *)((long)param_2 + 0xc)) * 0x100,
                           (iVar2 + *(int *)(param_2 + 1)) * 0x100);
      uStack_20 = CONCAT44(iVar3 << 8,iVar2 << 8);
      FUN_1097c987c(param_1,param_2,&uStack_20);
      lVar1 = param_1;
    }
  }
  return lVar1;
}



/* Entry: 1097c9c04; end: 1097c9cdb;  */

long FUN_1097c9c04(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0x11386a1e0) {
    return 0x11386a1e0;
  }
  lVar1 = param_1;
  FUN_1097c956c();
  if ((int)lVar1 == 0) {
    FUN_1097ca2ec();
  }
  else {
    param_1 = 0;
  }
  lVar1 = 0x11386a1e0;
  if (param_1 != 0x11386a1e0) {
    if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0xc) == 0)) {
      FUN_1097ca284();
      lVar1 = 0x11386a1e0;
    }
    else {
      FUN_1097c987c();
      lVar1 = param_1;
    }
  }
  return lVar1;
}



/* Entry: 1097c9cdc; end: 1097c9f5b;  */

uint * FUN_1097c9cdc(long param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 auStack_3e8 [904];
  
  if (param_1 == 0x11386a1e0) {
    *(uint **)(param_2 + 0x10) = param_2 + 0x12;
    param_2[0xe] = 0x20;
    param_2[4] = 0x80000000;
    param_2[2] = 0x7fffffff;
    param_2[3] = 0x80000000;
    param_2[0] = 0;
    param_2[1] = 0x7fffffff;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    return (uint *)0x0;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar4 = (ulong)uVar1;
    *param_2 = 0;
    *(uint **)(param_2 + 0x10) = param_2 + 0x12;
    param_2[0xd] = 0;
    param_2[0xe] = 0x20;
    if (0x10 < (int)uVar1) {
      param_2[0xe] = uVar1 << 1;
      lVar6 = (ulong)(uVar1 << 1) * 0x38;
      _malloc();
      *(long *)(param_2 + 0x10) = lVar6;
      if (lVar6 == 0) {
        *param_2 = 1;
        return (uint *)0x1;
      }
    }
    param_2[3] = 0x80000000;
    param_2[4] = 0x80000000;
    param_2[1] = 0x7fffffff;
    param_2[2] = 0x7fffffff;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    if ((int)uVar1 < 1) {
      puVar2 = (uint *)0x0;
    }
    else {
      do {
        FUN_1097e9f2c(param_2,&stack0xffffffffffffffc8,&stack0xffffffffffffffc0,1);
        FUN_1097e9f2c(param_2,&stack0xffffffffffffffc8,&stack0xffffffffffffffc0,1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar2 = (uint *)(ulong)*param_2;
    }
    return puVar2;
  }
  lVar5 = lVar6;
  while (lVar5 = *(long *)(lVar5 + 0x248), lVar5 != 0) {
    if (*(int *)(lVar5 + 0x240) != *(int *)(lVar6 + 0x240)) {
      return (uint *)0x64;
    }
  }
  if (*(int *)(param_1 + 0x20) < 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(uint **)(param_2 + 0x10) = param_2 + 0x12;
    param_2[0xd] = 0;
    param_2[0xe] = 0x20;
    param_2[4] = 0x80000000;
    param_2[2] = 0x7fffffff;
    param_2[3] = 0x80000000;
    param_2[0] = 0;
    param_2[1] = 0x7fffffff;
    FUN_1097e9d0c(param_2,uVar3);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  else {
    *(uint **)(param_2 + 0x10) = param_2 + 0x12;
    param_2[0xe] = 0x20;
    param_2[4] = 0x80000000;
    param_2[2] = 0x7fffffff;
    param_2[3] = 0x80000000;
    param_2[0] = 0;
    param_2[1] = 0x7fffffff;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  *param_3 = *(undefined4 *)(lVar6 + 0x230);
  *param_4 = *(undefined4 *)(lVar6 + 0x240);
  puVar2 = (uint *)(lVar6 + 8);
  FUN_1097dbaa0(*(undefined8 *)(lVar6 + 0x238),puVar2,param_2);
  if (((int)puVar2 == 0) &&
     ((*(int *)(param_1 + 0x20) < 2 ||
      (puVar2 = param_2, FUN_1097e7d8c(param_2,param_3,*(undefined8 *)(param_1 + 0x18)),
      (int)puVar2 == 0)))) {
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    lVar6 = *(long *)(lVar6 + 0x248);
    if (lVar6 != 0) {
      do {
        uStack_3f8 = 0x20;
        uStack_420 = 0x80000000;
        uStack_428 = 0x800000007fffffff;
        uStack_430 = 0x7fffffff00000000;
        uStack_400 = 0;
        uStack_408 = 0;
        puVar2 = (uint *)(lVar6 + 8);
        puStack_3f0 = auStack_3e8;
        FUN_1097dbaa0(*(undefined8 *)(lVar6 + 0x238),puVar2,&uStack_430);
        if ((int)puVar2 != 0) {
          if (puStack_3f0 != auStack_3e8) {
            _free();
          }
          goto LAB_1097c9f3c;
        }
        puVar2 = param_2;
        FUN_1097e71dc(param_2,*param_3,&uStack_430,*(undefined4 *)(lVar6 + 0x230));
        if (puStack_3f0 != auStack_3e8) {
          _free();
        }
        if ((int)puVar2 != 0) goto LAB_1097c9f3c;
        *param_3 = 0;
        lVar6 = *(long *)(lVar6 + 0x248);
      } while (lVar6 != 0);
    }
    return (uint *)0x0;
  }
LAB_1097c9f3c:
  if (*(uint **)(param_2 + 0x10) != param_2 + 0x12) {
    _free();
  }
  return puVar2;
}



/* Entry: 1097c9f5c; end: 1097ca0af;  */

undefined1 * FUN_1097c9f5c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_838 [2048];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar12 = (ulong)uVar3;
  puVar7 = param_1;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0x81) {
      uVar8 = (uint)(*(long *)(param_1 + 0x10) == 0);
      if (0 < (int)uVar3) {
        puVar6 = auStack_838;
        goto LAB_1097c9fcc;
      }
      uVar12 = 0;
      puVar6 = auStack_838;
    }
    else {
      puVar6 = (undefined1 *)(uVar12 << 4);
      _malloc();
      puVar7 = puVar6;
      if (puVar6 == (undefined1 *)0x0) goto LAB_1097ca080;
      uVar8 = (uint)(*(long *)(param_1 + 0x10) == 0);
LAB_1097c9fcc:
      puVar9 = (uint *)(*(long *)(param_1 + 0x18) + 0xc);
      piVar10 = (int *)(puVar6 + 8);
      uVar11 = uVar12;
      do {
        uVar3 = puVar9[-1];
        if (uVar8 != 0) {
          uVar8 = (uint)(((puVar9[-3] | *puVar9 | puVar9[-2] | uVar3) & 0xff) == 0);
        }
        iVar1 = (int)puVar9[-3] >> 8;
        iVar2 = (int)puVar9[-2] >> 8;
        piVar10[-2] = iVar1;
        piVar10[-1] = iVar2;
        iVar4 = -((int)-uVar3 >> 8);
        if (0 < (int)uVar3) {
          iVar4 = (uVar3 - 1 >> 8) + 1;
        }
        uVar3 = *puVar9;
        iVar5 = -((int)-uVar3 >> 8);
        if (0 < (int)uVar3) {
          iVar5 = (uVar3 - 1 >> 8) + 1;
        }
        *piVar10 = iVar4 - iVar1;
        piVar10[1] = iVar5 - iVar2;
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + 4;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    *(uint *)(param_1 + 0x30) = uVar8;
    puVar7 = puVar6;
    FUN_1097ee9ec(puVar6,uVar12);
    *(undefined1 **)(param_1 + 0x28) = puVar7;
    if (puVar6 != auStack_838) {
      _free();
      puVar7 = puVar6;
    }
  }
LAB_1097ca080:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (puVar7 == (undefined1 *)0x0) {
    return (undefined1 *)0x1;
  }
  if (*(int *)(puVar7 + 0x30) == 0) {
    if (*(long *)(puVar7 + 0x10) == 0) {
      if (*(int *)(puVar7 + 0x20) == 0) goto LAB_1097ca0cc;
      if (*(long *)(puVar7 + 0x28) == 0) {
        FUN_1097c9f5c(puVar7);
        return (undefined1 *)(ulong)*(uint *)(puVar7 + 0x30);
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
  else {
LAB_1097ca0cc:
    puVar7 = (undefined1 *)0x1;
  }
  return puVar7;
}



/* Entry: 1097ca0b0; end: 1097ca113;  */

undefined4 FUN_1097ca0b0(long param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) goto LAB_1097ca0cc;
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_1097c9f5c(param_1);
        return *(undefined4 *)(param_1 + 0x30);
      }
    }
    uVar1 = 0;
  }
  else {
LAB_1097ca0cc:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1097ca114; end: 1097ca1f3;  */

undefined8 FUN_1097ca114(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_1097caea4(param_1,-param_3,-param_4);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2;
    FUN_1097f67b0(param_2,3,&UNK_10dffe710,param_1);
  }
  lVar4 = param_1;
  FUN_1097ca0b0();
  lVar2 = 0;
  if ((int)lVar4 != 0) {
    lVar2 = param_1;
  }
  if (((int)uVar5 == 0) && (lVar4 = lVar3, lVar3 != 0)) {
    do {
      uVar5 = param_2;
      FUN_1097f76c8(*(undefined8 *)(lVar4 + 0x238),param_2,3,&UNK_10dffe710,lVar4 + 8,
                    *(undefined4 *)(lVar4 + 0x230),*(undefined4 *)(lVar4 + 0x240),lVar2);
      plVar1 = (long *)(lVar4 + 0x248);
      lVar4 = *plVar1;
    } while ((int)uVar5 == 0 && *plVar1 != 0);
  }
  *(long *)(param_1 + 0x10) = lVar3;
  FUN_1097ca284(param_1);
  return uVar5;
}



/* Entry: 1097ca1f4; end: 1097ca283;  */

void FUN_1097ca1f4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  _pthread_mutex_lock(0x1132e0448);
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  _pthread_mutex_unlock(0x1132e0448);
  if (iVar1 + -1 == 0) {
    piVar2 = *(int **)(param_1 + 0xc);
    while (piVar2 != param_1 + 0xc) {
      piVar2 = *(int **)piVar2;
      _free();
    }
    if (*(long *)(param_1 + 0x92) != 0) {
      FUN_1097ca1f4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1097ca284; end: 1097ca2eb;  */

void FUN_1097ca284(long param_1)

{
  if ((param_1 != 0) && (param_1 != 0x11386a1e0)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1097ca1f4();
    }
    if (*(long *)(param_1 + 0x18) != param_1 + 0x34) {
      _free();
    }
    FUN_1097eeb3c(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1097ca2ec; end: 1097ca577;  */

undefined8 * FUN_1097ca2ec(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_1 == (undefined8 *)0x11386a1e0) {
    return (undefined8 *)0x11386a1e0;
  }
  puVar2 = (undefined8 *)0x1;
  _calloc(1,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0xffffff00ffffff;
    *puVar2 = 0xff800000ff800000;
  }
  piVar5 = (int *)param_1[2];
  if (piVar5 != (int *)0x0) {
    _pthread_mutex_lock(0x1132e0448);
    *piVar5 = *piVar5 + 1;
    _pthread_mutex_unlock(0x1132e0448);
    puVar2[2] = piVar5;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      puVar2[3] = (long)puVar2 + 0x34;
    }
    else {
      if ((int)uVar1 < 1) {
        puVar2[3] = 0;
LAB_1097ca3f0:
        FUN_1097ca284(puVar2);
        return (undefined8 *)0x11386a1e0;
      }
      lVar4 = (ulong)uVar1 << 4;
      _malloc();
      puVar2[3] = lVar4;
      if (lVar4 == 0) goto LAB_1097ca3f0;
    }
    _memcpy();
    *(uint *)(puVar2 + 4) = uVar1;
  }
  uVar3 = *param_1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar3;
  uVar3 = param_1[5];
  FUN_1097eebc0();
  puVar2[5] = uVar3;
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 6);
  return puVar2;
}



/* Entry: 1097ca578; end: 1097ca733;  */

long FUN_1097ca578(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  
  if (param_2 != 0x11386a1e0) {
    if (-1 < (char)param_3[4]) {
      piVar1 = param_3;
      FUN_1097dd72c(param_3,&uStack_70);
      if ((int)piVar1 != 0) {
        if ((int)param_5 == 1) {
          uStack_70 = CONCAT44((int)(uStack_70 >> 0x20) + 0x7f,(int)uStack_70 + 0x7f) &
                      0xffffff00ffffff00;
          uStack_68 = CONCAT44((int)(uStack_68 >> 0x20) + 0x7f,(int)uStack_68 + 0x7f) &
                      0xffffff00ffffff00;
        }
        FUN_1097c9804(param_2,&uStack_70);
        return param_2;
      }
      if (((*(byte *)(param_3 + 4) >> 5 & 1) != 0) &&
         ((((*(byte *)(param_3 + 4) & 3) != 1 || (param_3[2] == *param_3)) ||
          (param_3[3] == param_3[1])))) {
        FUN_1097c95a0(param_2,param_3,param_4,param_5);
        return param_2;
      }
      if (((param_3[5] < param_3[7]) && (param_3[6] < param_3[8])) &&
         ((func_0x0001097ed40c(param_3 + 5,auStack_60), iStack_58 != 0 && (iStack_54 != 0)))) {
        FUN_1097c9b90(param_2,auStack_60);
        if (param_2 == 0x11386a1e0) {
          return 0x11386a1e0;
        }
        puVar2 = (undefined4 *)0x1;
        _calloc(1,0x250);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
          *(undefined8 *)(puVar2 + 0x92) = *(undefined8 *)(param_2 + 0x10);
          *(undefined4 **)(param_2 + 0x10) = puVar2;
          puVar3 = puVar2 + 2;
          FUN_1097dc170(puVar3,param_3);
          if ((int)puVar3 == 0) {
            puVar2[0x8c] = (int)param_4;
            *(undefined8 *)(puVar2 + 0x8e) = param_1;
            puVar2[0x90] = (int)param_5;
            if (*(long *)(param_2 + 0x28) != 0) {
              FUN_1097eeb3c();
              *(undefined8 *)(param_2 + 0x28) = 0;
            }
            *(undefined4 *)(param_2 + 0x30) = 0;
            return param_2;
          }
        }
      }
    }
    FUN_1097ca284(param_2);
  }
  return 0x11386a1e0;
}



/* Entry: 1097ca734; end: 1097ca83b;  */

undefined8 * FUN_1097ca734(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined1 auStack_280 [592];
  
  puVar2 = (undefined8 *)0x11386a1e0;
  if (param_1 == (undefined8 *)0x11386a1e0 || param_2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (param_1 != (undefined8 *)0x0) {
    if ((param_2 != (undefined8 *)0x11386a1e0) &&
       (puVar4 = param_1, func_0x0001097ed458(param_1,param_2), (int)puVar4 != 0)) {
      if (*(int *)(param_2 + 4) != 0) {
        func_0x0001097c8e04(auStack_280,param_2[3]);
        func_0x0001097c9660(param_1,auStack_280);
      }
      if ((param_1 != (undefined8 *)0x11386a1e0) &&
         (lVar5 = param_2[2], puVar2 = param_1, lVar5 != 0)) {
        if (param_1[2] == 0) {
          func_0x0001097c574c(lVar5);
          param_1[2] = lVar5;
        }
        else {
          FUN_1097ca83c(param_1,lVar5);
          puVar2 = param_1;
        }
      }
      if (puVar2[5] != 0) {
        FUN_1097eeb3c();
        puVar2[5] = 0;
      }
      *(undefined4 *)(puVar2 + 6) = 0;
      return puVar2;
    }
    FUN_1097ca284(param_1);
    return (undefined8 *)0x11386a1e0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_2 == (undefined8 *)0x11386a1e0) {
    return (undefined8 *)0x11386a1e0;
  }
  puVar2 = (undefined8 *)0x1;
  _calloc(1,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0xffffff00ffffff;
    *puVar2 = 0xff800000ff800000;
  }
  piVar6 = (int *)param_2[2];
  if (piVar6 != (int *)0x0) {
    _pthread_mutex_lock(0x1132e0448);
    *piVar6 = *piVar6 + 1;
    _pthread_mutex_unlock(0x1132e0448);
    puVar2[2] = piVar6;
  }
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      puVar2[3] = (long)puVar2 + 0x34;
    }
    else {
      if ((int)uVar1 < 1) {
        puVar2[3] = 0;
LAB_1097ca3f0:
        FUN_1097ca284(puVar2);
        return (undefined8 *)0x11386a1e0;
      }
      lVar5 = (ulong)uVar1 << 4;
      _malloc();
      puVar2[3] = lVar5;
      if (lVar5 == 0) goto LAB_1097ca3f0;
    }
    _memcpy();
    *(uint *)(puVar2 + 4) = uVar1;
  }
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  uVar3 = param_2[5];
  FUN_1097eebc0();
  puVar2[5] = uVar3;
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 6);
  return puVar2;
}



/* Entry: 1097ca83c; end: 1097ca96f;  */

long FUN_1097ca83c(long param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  int iStack_58;
  int iStack_54;
  
  if (*(long *)(param_2 + 0x248) != 0) {
    FUN_1097ca83c();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar7 = *(undefined8 *)(param_2 + 0x238);
  iVar3 = *(int *)(param_2 + 0x240);
  piVar1 = (int *)(param_2 + 8);
  if (param_1 != 0x11386a1e0) {
    if (-1 < *(char *)(param_2 + 0x18)) {
      piVar4 = piVar1;
      FUN_1097dd72c(piVar1,&uStack_70);
      if ((int)piVar4 != 0) {
        if (iVar3 == 1) {
          uStack_70 = CONCAT44((int)(uStack_70 >> 0x20) + 0x7f,(int)uStack_70 + 0x7f) &
                      0xffffff00ffffff00;
          uStack_68 = CONCAT44((int)(uStack_68 >> 0x20) + 0x7f,(int)uStack_68 + 0x7f) &
                      0xffffff00ffffff00;
        }
        FUN_1097c9804(param_1,&uStack_70);
        return param_1;
      }
      if (((*(byte *)(param_2 + 0x18) >> 5 & 1) != 0) &&
         ((((*(byte *)(param_2 + 0x18) & 3) != 1 || (*(int *)(param_2 + 0x10) == *piVar1)) ||
          (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0xc))))) {
        FUN_1097c95a0(param_1,piVar1,uVar2,iVar3);
        return param_1;
      }
      if (((*(int *)(param_2 + 0x1c) < *(int *)(param_2 + 0x24)) &&
          (*(int *)(param_2 + 0x20) < *(int *)(param_2 + 0x28))) &&
         ((func_0x0001097ed40c((int *)(param_2 + 0x1c),auStack_60), iStack_58 != 0 &&
          (iStack_54 != 0)))) {
        FUN_1097c9b90(param_1,auStack_60);
        if (param_1 == 0x11386a1e0) {
          return 0x11386a1e0;
        }
        puVar5 = (undefined4 *)0x1;
        _calloc(1,0x250);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 1;
          *(undefined8 *)(puVar5 + 0x92) = *(undefined8 *)(param_1 + 0x10);
          *(undefined4 **)(param_1 + 0x10) = puVar5;
          puVar6 = puVar5 + 2;
          FUN_1097dc170(puVar6,piVar1);
          if ((int)puVar6 == 0) {
            puVar5[0x8c] = uVar2;
            *(undefined8 *)(puVar5 + 0x8e) = uVar7;
            puVar5[0x90] = iVar3;
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_1097eeb3c();
              *(undefined8 *)(param_1 + 0x28) = 0;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            return param_1;
          }
        }
      }
    }
    FUN_1097ca284(param_1);
  }
  return 0x11386a1e0;
}



/* Entry: 1097ca970; end: 1097caa53;  */

long FUN_1097ca970(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(long *)(param_2 + 0x248) != 0) {
    FUN_1097ca970(param_1,*(long *)(param_2 + 0x248),param_3,param_4);
  }
  if (param_1 != 0x11386a1e0) {
    puVar1 = (undefined4 *)0x1;
    _calloc(1,0x250);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      *(undefined8 *)(puVar1 + 0x92) = *(undefined8 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar1;
      puVar2 = puVar1 + 2;
      FUN_1097dc170(puVar2,param_2 + 8);
      if ((int)puVar2 == 0) {
        FUN_1097dd0dc(puVar1 + 2,param_3,param_4);
        puVar1[0x8c] = *(undefined4 *)(param_2 + 0x230);
        *(undefined8 *)(puVar1 + 0x8e) = *(undefined8 *)(param_2 + 0x238);
        puVar1[0x90] = *(undefined4 *)(param_2 + 0x240);
        return param_1;
      }
    }
    FUN_1097ca284(param_1);
  }
  return 0x11386a1e0;
}



/* Entry: 1097caa54; end: 1097cadab;  */

/* WARNING: Type propagation algorithm not settling */

double ******* FUN_1097caa54(double *******param_1,double *******param_2,double *******param_3)

{
  double ******ppppppdVar1;
  double ******ppppppdVar2;
  undefined8 *puVar3;
  double *******pppppppdVar4;
  double *******pppppppdVar5;
  undefined1 *puVar6;
  double ******ppppppdVar7;
  int iVar8;
  double *******pppppppdVar9;
  double *******unaff_x20;
  double *******unaff_x21;
  long *******unaff_x22;
  undefined8 *puVar10;
  long *******ppppppplVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x27;
  long unaff_x28;
  double *****pppppdVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_760 [40];
  double *******apppppppdStack_738 [64];
  long lStack_538;
  long lStack_530;
  undefined8 *puStack_528;
  long *******ppppppplStack_520;
  double *******pppppppdStack_518;
  double *******pppppppdStack_510;
  double *******pppppppdStack_508;
  undefined1 *puStack_500;
  code *pcStack_4f8;
  undefined1 auStack_4e8 [36];
  int iStack_4c4;
  undefined8 auStack_4b8 [68];
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte bStack_288;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [28];
  undefined1 auStack_224 [436];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppdVar4 = param_1;
  pppppppdVar5 = param_2;
  if (param_1 != (double *******)0x0) {
    if (param_1 == (double *******)0x11386a1e0) {
      param_1 = (double *******)0x11386a1e0;
    }
    else {
      unaff_x20 = param_2;
      if (((((double)*param_2 != 1.0) || ((double)param_2[1] != 0.0)) || ((double)param_2[2] != 0.0)
          ) || ((double)param_2[3] != 1.0)) {
        unaff_x21 = (double *******)0x1;
        _calloc(1,0x48);
        if (unaff_x21 != (double *******)0x0) {
          unaff_x21[1] = (double ******)0xffffff00ffffff;
          *unaff_x21 = (double ******)0xff800000ff800000;
        }
        param_3 = (double *******)(ulong)*(uint *)(param_1 + 4);
        if (*(uint *)(param_1 + 4) != 0) {
          func_0x0001097c8e04(auStack_4e8,param_1[3]);
          unaff_x22 = (long *******)&ppppppplStack_270;
          ppppppplStack_270 = unaff_x22;
          ppppppplStack_268 = unaff_x22;
          uStack_258 = 0x3600000000;
          uStack_260 = 0x1b00000000;
          puStack_250 = auStack_240;
          puStack_248 = auStack_224;
          uStack_290 = 0;
          uStack_298 = 0;
          bStack_288 = 0xf2;
          uStack_27c = 0;
          uStack_284 = 0;
          if (iStack_4c4 != 0) {
            puVar10 = auStack_4b8;
            do {
              if (0 < *(int *)(puVar10 + 2)) {
                lVar14 = 0;
                lVar15 = 0;
                do {
                  if ((bStack_288 >> 1 & 1) == 0) {
                    if ((bStack_288 >> 5 & 1) != 0) {
                      uVar13 = 0x20;
                      if (uStack_290._4_4_ != uStack_298._4_4_ && (int)uStack_290 != (int)uStack_298
                         ) {
                        uVar13 = 0;
                      }
                      bStack_288 = ((byte)((uVar13 >> 5) << 6) | 0x9d) & bStack_288 | (byte)uVar13;
                    }
                    bStack_288 = bStack_288 | 2;
                  }
                  unaff_x28 = puVar10[1];
                  unaff_x27 = (undefined8 *)(unaff_x28 + lVar14);
                  uStack_298 = *unaff_x27;
                  bStack_288 = bStack_288 | 1;
                  puVar3 = &uStack_298;
                  uStack_290 = uStack_298;
                  func_0x0001097dc7a0(puVar3,*(undefined4 *)(unaff_x27 + 1),
                                      *(undefined4 *)((long)unaff_x27 + 4));
                  ppppppplVar11 = ppppppplStack_270;
                  if ((int)puVar3 != 0) goto joined_r0x0001097cac5c;
                  unaff_x28 = unaff_x28 + lVar14;
                  puVar3 = &uStack_298;
                  func_0x0001097dc7a0(puVar3,*(undefined4 *)(unaff_x27 + 1),
                                      *(undefined4 *)(unaff_x28 + 0xc));
                  ppppppplVar11 = ppppppplStack_270;
                  if ((int)puVar3 != 0) goto joined_r0x0001097cac5c;
                  puVar3 = &uStack_298;
                  func_0x0001097dc7a0(puVar3,*(undefined4 *)unaff_x27,
                                      *(undefined4 *)(unaff_x28 + 0xc));
                  ppppppplVar11 = ppppppplStack_270;
                  if ((int)puVar3 != 0) goto joined_r0x0001097cac5c;
                  iVar18 = (int)&uStack_298;
                  FUN_1097dcd9c();
                  ppppppplVar11 = ppppppplStack_270;
                  if (iVar18 != 0) goto joined_r0x0001097cac5c;
                  lVar15 = lVar15 + 1;
                  lVar14 = lVar14 + 0x10;
                } while (lVar15 < *(int *)(puVar10 + 2));
              }
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != (undefined8 *)0x0);
          }
          goto LAB_1097cac74;
        }
        goto LAB_1097cacc0;
      }
      iVar17 = (int)(long)(double)param_2[5];
      iVar18 = (int)(long)(double)param_2[4];
      if (iVar17 != 0 || iVar18 != 0) {
        uVar12 = (ulong)*(uint *)(param_1 + 4);
        if (0 < (int)*(uint *)(param_1 + 4)) {
          ppppppdVar7 = param_1[3];
          do {
            ppppppdVar7[1] =
                 (double *****)
                 CONCAT44((int)((ulong)ppppppdVar7[1] >> 0x20) + iVar17 * 0x100,
                          (int)ppppppdVar7[1] + iVar18 * 0x100);
            *ppppppdVar7 = (double *****)
                           CONCAT44((int)((ulong)*ppppppdVar7 >> 0x20) + iVar17 * 0x100,
                                    (int)*ppppppdVar7 + iVar18 * 0x100);
            uVar12 = uVar12 - 1;
            ppppppdVar7 = ppppppdVar7 + 2;
          } while (uVar12 != 0);
        }
        *(int *)param_1 = *(int *)param_1 + iVar18;
        *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + iVar17;
        unaff_x20 = (double *******)param_1[2];
        if (unaff_x20 != (double *******)0x0) {
          param_1[2] = (double ******)0x0;
          param_3 = (double *******)(ulong)(uint)(iVar18 * 0x100);
          pppppppdVar5 = unaff_x20;
          FUN_1097ca970();
          pppppppdVar4 = unaff_x20;
          FUN_1097ca1f4();
        }
      }
    }
  }
  goto LAB_1097cace4;
joined_r0x0001097cac5c:
  while (ppppppplVar11 != unaff_x22) {
    ppppppplVar11 = (long *******)*ppppppplVar11;
    _free();
  }
LAB_1097cac74:
  FUN_1097dd19c(&uStack_298,param_2);
  param_3 = (double *******)0x0;
  FUN_1097ca578(0x3fb999999999999a,unaff_x21,&uStack_298,0,0);
  ppppppplVar11 = ppppppplStack_270;
  while (ppppppplVar11 != unaff_x22) {
    ppppppplVar11 = (long *******)*ppppppplVar11;
    _free();
  }
LAB_1097cacc0:
  pppppppdVar5 = (double *******)param_1[2];
  if (pppppppdVar5 != (double *******)0x0) {
    param_3 = param_2;
    FUN_1097cadac();
  }
  FUN_1097ca284();
  pppppppdVar4 = param_1;
  param_1 = unaff_x21;
LAB_1097cace4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_4f8 = FUN_1097cadac;
  iVar18 = (int)auStack_760;
  puVar6 = auStack_760;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppdVar9 = param_3;
  lStack_530 = unaff_x28;
  puStack_528 = unaff_x27;
  ppppppplStack_520 = unaff_x22;
  pppppppdStack_518 = unaff_x21;
  pppppppdStack_510 = unaff_x20;
  pppppppdStack_508 = param_1;
  puStack_500 = &stack0xfffffffffffffff0;
  if (pppppppdVar5[0x49] != (double ******)0x0) {
    FUN_1097cadac();
  }
  iVar8 = (int)pppppppdVar9;
  iVar17 = (int)pppppppdVar5 + 8;
  FUN_1097dc170();
  if (iVar18 == 0) {
    FUN_1097dd19c(auStack_760,param_3);
    uVar12 = (ulong)*(uint *)(pppppppdVar5 + 0x46);
    FUN_1097ca578(pppppppdVar5[0x47]);
    iVar8 = (int)uVar12;
    iVar17 = (int)puVar6;
    pppppppdVar5 = apppppppdStack_738[0];
    while ((double ********)pppppppdVar5 != apppppppdStack_738) {
      pppppppdVar5 = (double *******)*pppppppdVar5;
      _free();
      iVar8 = (int)uVar12;
      iVar17 = (int)puVar6;
    }
  }
  else {
    FUN_1097ca284();
    pppppppdVar5 = pppppppdVar4;
    pppppppdVar4 = (double *******)0x11386a1e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return pppppppdVar4;
  }
  ___stack_chk_fail();
  if (pppppppdVar5 == (double *******)0x0) {
    return (double *******)0x0;
  }
  if (pppppppdVar5 == (double *******)0x11386a1e0) {
    return (double *******)0x11386a1e0;
  }
  if (iVar8 == 0 && iVar17 == 0) {
    if (pppppppdVar5 == (double *******)0x0) {
      return (double *******)0x0;
    }
    if (pppppppdVar5 == (double *******)0x11386a1e0) {
      return (double *******)0x11386a1e0;
    }
    pppppppdVar4 = (double *******)0x1;
    _calloc(1,0x48);
    if (pppppppdVar4 != (double *******)0x0) {
      pppppppdVar4[1] = (double ******)0xffffff00ffffff;
      *pppppppdVar4 = (double ******)0xff800000ff800000;
    }
    ppppppdVar7 = pppppppdVar5[2];
    if (ppppppdVar7 != (double ******)0x0) {
      _pthread_mutex_lock(0x1132e0448);
      *(int *)ppppppdVar7 = *(int *)ppppppdVar7 + 1;
      _pthread_mutex_unlock(0x1132e0448);
      pppppppdVar4[2] = ppppppdVar7;
    }
    uVar13 = *(uint *)(pppppppdVar5 + 4);
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        pppppppdVar4[3] = (double ******)((long)pppppppdVar4 + 0x34);
      }
      else {
        if ((int)uVar13 < 1) {
          pppppppdVar4[3] = (double ******)0x0;
LAB_1097ca3f0:
          FUN_1097ca284(pppppppdVar4);
          return (double *******)0x11386a1e0;
        }
        ppppppdVar7 = (double ******)((ulong)uVar13 << 4);
        _malloc();
        pppppppdVar4[3] = ppppppdVar7;
        if (ppppppdVar7 == (double ******)0x0) goto LAB_1097ca3f0;
      }
      _memcpy();
      *(uint *)(pppppppdVar4 + 4) = uVar13;
    }
    ppppppdVar7 = *pppppppdVar5;
    pppppppdVar4[1] = pppppppdVar5[1];
    *pppppppdVar4 = ppppppdVar7;
    ppppppdVar7 = pppppppdVar5[5];
    FUN_1097eebc0();
    pppppppdVar4[5] = ppppppdVar7;
    *(int *)(pppppppdVar4 + 6) = *(int *)(pppppppdVar5 + 6);
    return pppppppdVar4;
  }
  pppppppdVar4 = (double *******)0x1;
  _calloc(1,0x48);
  if (pppppppdVar4 == (double *******)0x0) {
    return (double *******)0x11386a1e0;
  }
  pppppppdVar4[1] = (double ******)0xffffff00ffffff;
  *pppppppdVar4 = (double ******)0xff800000ff800000;
  iVar18 = iVar17 * 0x100;
  iVar19 = iVar8 * 0x100;
  uVar13 = *(uint *)(pppppppdVar5 + 4);
  uVar12 = (ulong)uVar13;
  if (uVar13 != 0) {
    if (uVar13 == 1) {
      ppppppdVar7 = (double ******)((long)pppppppdVar4 + 0x34);
      pppppppdVar4[3] = ppppppdVar7;
      uVar12 = 1;
    }
    else {
      if ((int)uVar13 < 1) {
LAB_1097caff8:
        FUN_1097ca284(pppppppdVar4);
        return (double *******)0x11386a1e0;
      }
      ppppppdVar7 = (double ******)(uVar12 << 4);
      _malloc();
      pppppppdVar4[3] = ppppppdVar7;
      if (ppppppdVar7 == (double ******)0x0) goto LAB_1097caff8;
    }
    ppppppdVar1 = pppppppdVar5[3];
    do {
      pppppdVar16 = *ppppppdVar1;
      ppppppdVar7[1] =
           (double *****)
           CONCAT44((int)((ulong)ppppppdVar1[1] >> 0x20) + iVar8 * 0x100,
                    (int)ppppppdVar1[1] + iVar17 * 0x100);
      *ppppppdVar7 = (double *****)
                     CONCAT44((int)((ulong)pppppdVar16 >> 0x20) + iVar19,(int)pppppdVar16 + iVar18);
      uVar12 = uVar12 - 1;
      ppppppdVar7 = ppppppdVar7 + 2;
      ppppppdVar1 = ppppppdVar1 + 2;
    } while (uVar12 != 0);
    *(uint *)(pppppppdVar4 + 4) = uVar13;
  }
  ppppppdVar7 = *pppppppdVar5;
  pppppppdVar4[1] = pppppppdVar5[1];
  *pppppppdVar4 = ppppppdVar7;
  *(int *)pppppppdVar4 = *(int *)pppppppdVar4 + iVar17;
  *(int *)((long)pppppppdVar4 + 4) = *(int *)((long)pppppppdVar4 + 4) + iVar8;
  ppppppdVar7 = pppppppdVar5[2];
  if (ppppppdVar7 == (double ******)0x0) {
    return pppppppdVar4;
  }
  if (ppppppdVar7[0x49] != (double *****)0x0) {
    FUN_1097ca970(pppppppdVar4,ppppppdVar7[0x49],iVar18,iVar19);
  }
  if (pppppppdVar4 != (double *******)0x11386a1e0) {
    ppppppdVar1 = (double ******)0x1;
    _calloc(1,0x250);
    if (ppppppdVar1 != (double ******)0x0) {
      *(undefined4 *)ppppppdVar1 = 1;
      ppppppdVar1[0x49] = (double *****)pppppppdVar4[2];
      pppppppdVar4[2] = ppppppdVar1;
      ppppppdVar2 = ppppppdVar1 + 1;
      FUN_1097dc170(ppppppdVar2,ppppppdVar7 + 1);
      if ((int)ppppppdVar2 == 0) {
        FUN_1097dd0dc(ppppppdVar1 + 1,iVar18,iVar19);
        *(undefined4 *)(ppppppdVar1 + 0x46) = *(undefined4 *)(ppppppdVar7 + 0x46);
        ppppppdVar1[0x47] = ppppppdVar7[0x47];
        *(undefined4 *)(ppppppdVar1 + 0x48) = *(undefined4 *)(ppppppdVar7 + 0x48);
        return pppppppdVar4;
      }
    }
    FUN_1097ca284(pppppppdVar4);
  }
  return (double *******)0x11386a1e0;
}



/* Entry: 1097cadac; end: 1097caea3;  */

int * FUN_1097cadac(int *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_270 [40];
  long alStack_248 [64];
  long lStack_48;
  
  iVar14 = (int)auStack_270;
  puVar8 = auStack_270;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3;
  if (*(long *)(param_2 + 0x248) != 0) {
    FUN_1097cadac();
  }
  iVar10 = (int)uVar2;
  iVar7 = (int)param_2 + 8;
  FUN_1097dc170();
  if (iVar14 == 0) {
    FUN_1097dd19c(auStack_270,param_3);
    uVar13 = (ulong)*(uint *)(param_2 + 0x230);
    FUN_1097ca578(*(undefined8 *)(param_2 + 0x238));
    iVar10 = (int)uVar13;
    iVar7 = (int)puVar8;
    plVar12 = (long *)alStack_248[0];
    while (plVar12 != alStack_248) {
      plVar12 = (long *)*plVar12;
      _free();
      iVar10 = (int)uVar13;
      iVar7 = (int)puVar8;
    }
  }
  else {
    FUN_1097ca284();
    plVar12 = (long *)param_1;
    param_1 = (int *)0x11386a1e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plVar12 == (long *)0x0) {
    return (int *)0x0;
  }
  if (plVar12 == (long *)0x11386a1e0) {
    return (int *)0x11386a1e0;
  }
  if (iVar10 == 0 && iVar7 == 0) {
    if (plVar12 == (long *)0x0) {
      return (int *)0x0;
    }
    if (plVar12 == (long *)0x11386a1e0) {
      return (int *)0x11386a1e0;
    }
    piVar5 = (int *)0x1;
    _calloc(1,0x48);
    if (piVar5 != (int *)0x0) {
      piVar5[2] = 0xffffff;
      piVar5[3] = 0xffffff;
      piVar5[0] = -0x800000;
      piVar5[1] = -0x800000;
    }
    piVar6 = *(int **)((long)plVar12 + 0x10);
    if (piVar6 != (int *)0x0) {
      _pthread_mutex_lock(0x1132e0448);
      *piVar6 = *piVar6 + 1;
      _pthread_mutex_unlock(0x1132e0448);
      *(int **)(piVar5 + 4) = piVar6;
    }
    uVar1 = *(uint *)((long)plVar12 + 0x20);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(int **)(piVar5 + 6) = piVar5 + 0xd;
      }
      else {
        if ((int)uVar1 < 1) {
          piVar5[6] = 0;
          piVar5[7] = 0;
LAB_1097ca3f0:
          FUN_1097ca284(piVar5);
          return (int *)0x11386a1e0;
        }
        lVar9 = (ulong)uVar1 << 4;
        _malloc();
        *(long *)(piVar5 + 6) = lVar9;
        if (lVar9 == 0) goto LAB_1097ca3f0;
      }
      _memcpy();
      piVar5[8] = uVar1;
    }
    uVar2 = *plVar12;
    *(undefined8 *)(piVar5 + 2) = *(undefined8 *)((long)plVar12 + 8);
    *(undefined8 *)piVar5 = uVar2;
    uVar2 = *(undefined8 *)((long)plVar12 + 0x28);
    FUN_1097eebc0();
    *(undefined8 *)(piVar5 + 10) = uVar2;
    piVar5[0xc] = *(int *)((long)plVar12 + 0x30);
    return piVar5;
  }
  piVar5 = (int *)0x1;
  _calloc(1,0x48);
  if (piVar5 == (int *)0x0) {
    return (int *)0x11386a1e0;
  }
  piVar5[2] = 0xffffff;
  piVar5[3] = 0xffffff;
  piVar5[0] = -0x800000;
  piVar5[1] = -0x800000;
  iVar14 = iVar7 * 0x100;
  iVar15 = iVar10 * 0x100;
  uVar1 = *(uint *)((long)plVar12 + 0x20);
  uVar13 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      piVar6 = piVar5 + 0xd;
      *(int **)(piVar5 + 6) = piVar6;
      uVar13 = 1;
    }
    else {
      if ((int)uVar1 < 1) {
LAB_1097caff8:
        FUN_1097ca284(piVar5);
        return (int *)0x11386a1e0;
      }
      piVar6 = (int *)(uVar13 << 4);
      _malloc();
      *(int **)(piVar5 + 6) = piVar6;
      if (piVar6 == (int *)0x0) goto LAB_1097caff8;
    }
    puVar11 = *(undefined8 **)((long)plVar12 + 0x18);
    do {
      uVar2 = *puVar11;
      *(ulong *)(piVar6 + 2) =
           CONCAT44((int)((ulong)puVar11[1] >> 0x20) + iVar10 * 0x100,
                    (int)puVar11[1] + iVar7 * 0x100);
      *(ulong *)piVar6 = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar15,(int)uVar2 + iVar14);
      uVar13 = uVar13 - 1;
      piVar6 = piVar6 + 4;
      puVar11 = puVar11 + 2;
    } while (uVar13 != 0);
    piVar5[8] = uVar1;
  }
  uVar2 = *plVar12;
  *(undefined8 *)(piVar5 + 2) = *(undefined8 *)((long)plVar12 + 8);
  *(undefined8 *)piVar5 = uVar2;
  *piVar5 = *piVar5 + iVar7;
  piVar5[1] = piVar5[1] + iVar10;
  lVar9 = *(long *)((long)plVar12 + 0x10);
  if (lVar9 == 0) {
    return piVar5;
  }
  if (*(long *)(lVar9 + 0x248) != 0) {
    FUN_1097ca970(piVar5,*(long *)(lVar9 + 0x248),iVar14,iVar15);
  }
  if (piVar5 != (int *)0x11386a1e0) {
    puVar3 = (undefined4 *)0x1;
    _calloc(1,0x250);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      *(undefined8 *)(puVar3 + 0x92) = *(undefined8 *)(piVar5 + 4);
      *(undefined4 **)(piVar5 + 4) = puVar3;
      puVar4 = puVar3 + 2;
      FUN_1097dc170(puVar4,lVar9 + 8);
      if ((int)puVar4 == 0) {
        FUN_1097dd0dc(puVar3 + 2,iVar14,iVar15);
        puVar3[0x8c] = *(undefined4 *)(lVar9 + 0x230);
        *(undefined8 *)(puVar3 + 0x8e) = *(undefined8 *)(lVar9 + 0x238);
        puVar3[0x90] = *(undefined4 *)(lVar9 + 0x240);
        return piVar5;
      }
    }
    FUN_1097ca284(piVar5);
  }
  return (int *)0x11386a1e0;
}



/* Entry: 1097caea4; end: 1097cb00b;  */

int * FUN_1097caea4(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  if (param_1 == (undefined8 *)0x0) {
    return (int *)0x0;
  }
  if (param_1 == (undefined8 *)0x11386a1e0) {
    return (int *)0x11386a1e0;
  }
  if (param_3 == 0 && param_2 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      return (int *)0x0;
    }
    if (param_1 == (undefined8 *)0x11386a1e0) {
      return (int *)0x11386a1e0;
    }
    piVar5 = (int *)0x1;
    _calloc(1,0x48);
    if (piVar5 != (int *)0x0) {
      piVar5[2] = 0xffffff;
      piVar5[3] = 0xffffff;
      piVar5[0] = -0x800000;
      piVar5[1] = -0x800000;
    }
    piVar6 = (int *)param_1[2];
    if (piVar6 != (int *)0x0) {
      _pthread_mutex_lock(0x1132e0448);
      *piVar6 = *piVar6 + 1;
      _pthread_mutex_unlock(0x1132e0448);
      *(int **)(piVar5 + 4) = piVar6;
    }
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(int **)(piVar5 + 6) = piVar5 + 0xd;
      }
      else {
        if ((int)uVar1 < 1) {
          piVar5[6] = 0;
          piVar5[7] = 0;
LAB_1097ca3f0:
          FUN_1097ca284(piVar5);
          return (int *)0x11386a1e0;
        }
        lVar7 = (ulong)uVar1 << 4;
        _malloc();
        *(long *)(piVar5 + 6) = lVar7;
        if (lVar7 == 0) goto LAB_1097ca3f0;
      }
      _memcpy();
      piVar5[8] = uVar1;
    }
    uVar2 = *param_1;
    *(undefined8 *)(piVar5 + 2) = param_1[1];
    *(undefined8 *)piVar5 = uVar2;
    uVar2 = param_1[5];
    FUN_1097eebc0();
    *(undefined8 *)(piVar5 + 10) = uVar2;
    piVar5[0xc] = *(int *)(param_1 + 6);
    return piVar5;
  }
  piVar5 = (int *)0x1;
  _calloc(1,0x48);
  if (piVar5 == (int *)0x0) {
    return (int *)0x11386a1e0;
  }
  piVar5[2] = 0xffffff;
  piVar5[3] = 0xffffff;
  piVar5[0] = -0x800000;
  piVar5[1] = -0x800000;
  iVar10 = param_2 * 0x100;
  iVar11 = param_3 * 0x100;
  uVar1 = *(uint *)(param_1 + 4);
  uVar9 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      piVar6 = piVar5 + 0xd;
      *(int **)(piVar5 + 6) = piVar6;
      uVar9 = 1;
    }
    else {
      if ((int)uVar1 < 1) {
LAB_1097caff8:
        FUN_1097ca284(piVar5);
        return (int *)0x11386a1e0;
      }
      piVar6 = (int *)(uVar9 << 4);
      _malloc();
      *(int **)(piVar5 + 6) = piVar6;
      if (piVar6 == (int *)0x0) goto LAB_1097caff8;
    }
    puVar8 = (undefined8 *)param_1[3];
    do {
      uVar2 = *puVar8;
      *(ulong *)(piVar6 + 2) =
           CONCAT44((int)((ulong)puVar8[1] >> 0x20) + param_3 * 0x100,
                    (int)puVar8[1] + param_2 * 0x100);
      *(ulong *)piVar6 = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar11,(int)uVar2 + iVar10);
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 4;
      puVar8 = puVar8 + 2;
    } while (uVar9 != 0);
    piVar5[8] = uVar1;
  }
  uVar2 = *param_1;
  *(undefined8 *)(piVar5 + 2) = param_1[1];
  *(undefined8 *)piVar5 = uVar2;
  *piVar5 = *piVar5 + param_2;
  piVar5[1] = piVar5[1] + param_3;
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    return piVar5;
  }
  if (*(long *)(lVar7 + 0x248) != 0) {
    FUN_1097ca970(piVar5,*(long *)(lVar7 + 0x248),iVar10,iVar11);
  }
  if (piVar5 != (int *)0x11386a1e0) {
    puVar3 = (undefined4 *)0x1;
    _calloc(1,0x250);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 1;
      *(undefined8 *)(puVar3 + 0x92) = *(undefined8 *)(piVar5 + 4);
      *(undefined4 **)(piVar5 + 4) = puVar3;
      puVar4 = puVar3 + 2;
      FUN_1097dc170(puVar4,lVar7 + 8);
      if ((int)puVar4 == 0) {
        FUN_1097dd0dc(puVar3 + 2,iVar10,iVar11);
        puVar3[0x8c] = *(undefined4 *)(lVar7 + 0x230);
        *(undefined8 *)(puVar3 + 0x8e) = *(undefined8 *)(lVar7 + 0x238);
        puVar3[0x90] = *(undefined4 *)(lVar7 + 0x240);
        return piVar5;
      }
    }
    FUN_1097ca284(piVar5);
  }
  return (int *)0x11386a1e0;
}



/* Entry: 1097cb00c; end: 1097cb1df;  */

undefined * FUN_1097cb00c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double *pdVar13;
  ulong uVar14;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  int iStack_64;
  
  if (param_1 == 0) {
    return &UNK_10dffcd08;
  }
  if (param_1 == 0x11386a1e0) {
LAB_1097cb074:
    lVar9 = 0;
    uVar10 = 0;
  }
  else {
    lVar11 = param_1;
    FUN_1097ca0b0();
    if ((int)lVar11 == 0) {
LAB_1097cb1a4:
      return &UNK_10dffcd08;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
      FUN_1097c9f5c(param_1);
      lVar11 = *(long *)(param_1 + 0x28);
      if (lVar11 == 0) goto LAB_1097cb0b8;
    }
    if (*(int *)(lVar11 + 4) != 0) goto LAB_1097cb074;
    if (*(long *)(lVar11 + 0x18) == 0) {
      uVar10 = 1;
LAB_1097cb0c8:
      lVar9 = 1;
      _calloc(1,uVar10 << 5);
      if (lVar9 == 0) goto LAB_1097cb0b8;
      lVar12 = 0;
      pdVar13 = (double *)(lVar9 + 0x10);
      uVar14 = uVar10;
      do {
        if (*(int *)(lVar11 + 4) == 0) {
          lVar2 = lVar11 + 8;
          if (*(long *)(lVar11 + 0x18) != 0) {
            lVar2 = *(long *)(lVar11 + 0x18) + 0x10;
          }
          piVar1 = (int *)(lVar2 + (lVar12 >> 0x1c));
          iVar6 = *piVar1;
          iVar5 = piVar1[1];
          iVar8 = piVar1[2] - iVar6;
          iVar7 = piVar1[3] - iVar5;
        }
        else {
          iVar6 = 0;
          iVar5 = 0;
          iVar8 = 0;
          iVar7 = 0;
        }
        dStack_70 = (double)iVar6;
        dStack_78 = (double)iVar5;
        dStack_80 = (double)(iVar8 + iVar6);
        dStack_88 = (double)(iVar7 + iVar5);
        FUN_1097d06e8(param_2,&dStack_70,&dStack_78,&dStack_80,&dStack_88,&iStack_64);
        pdVar13[-2] = dStack_70;
        pdVar13[-1] = dStack_78;
        *pdVar13 = dStack_80 - dStack_70;
        pdVar13[1] = dStack_88 - dStack_78;
        if (iStack_64 == 0) {
          _free(lVar9);
          goto LAB_1097cb1a4;
        }
        lVar12 = lVar12 + 0x100000000;
        uVar14 = uVar14 - 1;
        pdVar13 = pdVar13 + 4;
      } while (uVar14 != 0);
    }
    else {
      uVar3 = *(uint *)(*(long *)(lVar11 + 0x18) + 8);
      uVar10 = (ulong)uVar3;
      if (uVar3 != 0) {
        if ((int)uVar3 < 0) goto LAB_1097cb0b8;
        goto LAB_1097cb0c8;
      }
      lVar9 = 0;
    }
  }
  puVar4 = (undefined *)0x1;
  _calloc(1,0x18);
  if (puVar4 != (undefined *)0x0) {
    *(long *)(puVar4 + 8) = lVar9;
    *(int *)(puVar4 + 0x10) = (int)uVar10;
    return puVar4;
  }
  _free(lVar9);
LAB_1097cb0b8:
  return &UNK_10dffccf0;
}



/* Entry: 1097cb1e0; end: 1097cb2ef;  */

void FUN_1097cb1e0(double *param_1)

{
  double dVar1;
  
  dVar1 = param_1[3];
  *(short *)(param_1 + 4) = (short)(int)(*param_1 * dVar1 * 65535.0 + 0.5);
  *(short *)((long)param_1 + 0x22) = (short)(int)(dVar1 * param_1[1] * 65535.0 + 0.5);
  *(short *)((long)param_1 + 0x24) = (short)(int)(dVar1 * param_1[2] * 65535.0 + 0.5);
  *(short *)((long)param_1 + 0x26) = (short)(int)(dVar1 * 65535.0 + 0.5);
  return;
}



/* Entry: 1097cb2f0; end: 1097cb45f;  */

undefined8 FUN_1097cb2f0(long *param_1,long param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_1[0x5a] = 0;
  if (param_5 != 0x11386a1e0) {
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    func_0x0001097f6fa4(param_2,(long)param_1 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_1 + 0x2c);
    if (param_5 != 0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_5);
      if ((int)lVar1 == 0) goto LAB_1097cb43c;
    }
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x4c);
    if (param_3 < 0x1d) {
      uVar2 = *(undefined4 *)(&UNK_10dffcd98 + (ulong)param_3 * 4);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar2;
    param_1[0x58] = param_4;
    FUN_1097cb74c(param_4,param_1 + 0x10);
    FUN_1097e601c(param_1 + 0x10,(long)param_1 + 0xc,*(byte *)(param_2 + 0x30) >> 5 & 1);
    uVar3 = *(uint *)((long)param_1 + 0x5c);
    if ((uVar3 >> 2 & 1) != 0) {
      lVar1 = (long)param_1 + 0x3c;
      func_0x0001097ed458(lVar1,(long)param_1 + 0xc);
      if ((int)lVar1 == 0) goto LAB_1097cb43c;
      uVar3 = *(uint *)((long)param_1 + 0x5c);
    }
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x47] = 0x3ff0000000000000;
    *(undefined2 *)((long)param_1 + 0x246) = 0xffff;
    *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_1 + 0x2c);
    lVar1 = 0x4c;
    if (uVar3 != 0) {
      lVar1 = 0x3c;
    }
    FUN_1097c9c04(param_5,(long)param_1 + lVar1);
    param_1[0x5a] = param_5;
    if (param_5 != 0x11386a1e0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_5);
      if ((int)lVar1 != 0) {
        if ((int)param_1[0x16] != 0) {
          FUN_1097e5d98(param_1 + 0x10,(long)param_1 + 0x3c,param_1 + 0xc);
        }
        return 0;
      }
    }
  }
LAB_1097cb43c:
  FUN_1097ca284(param_1[0x5a]);
  param_1[0x5a] = 0;
  return 0x66;
}



/* Entry: 1097cb460; end: 1097cb607;  */

undefined8 FUN_1097cb460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001097ed40c(param_2,&uStack_30);
  piVar5 = (int *)(param_1 + 0x1c);
  if (((((int)uStack_30 == *piVar5) && (uStack_30._4_4_ == *(int *)(param_1 + 0x20))) &&
      ((int)uStack_28 == *(int *)(param_1 + 0x24))) && (uStack_28._4_4_ == *(int *)(param_1 + 0x28))
     ) {
LAB_1097cb5ec:
    uVar2 = 0;
  }
  else {
    func_0x0001097ed458(piVar5,&uStack_30);
    uStack_28 = *(undefined8 *)(param_1 + 0x44);
    uStack_30 = *(undefined8 *)(param_1 + 0x3c);
    lVar4 = param_1 + 0x3c;
    func_0x0001097ed458(lVar4,piVar5);
    if (((int)lVar4 != 0) || ((*(byte *)(param_1 + 0x5c) >> 1 & 1) == 0)) {
      if (((int)uStack_28 == *(int *)(param_1 + 0x44)) &&
         (uStack_28._4_4_ == *(int *)(param_1 + 0x48))) goto LAB_1097cb5ec;
      uVar3 = *(uint *)(param_1 + 0x5c);
      if (uVar3 == 6) {
        *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x44);
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x3c);
        lVar4 = 0x3c;
      }
      else {
        if ((uVar3 >> 1 & 1) != 0) {
          lVar4 = param_1 + 0x4c;
          func_0x0001097ed458(lVar4,piVar5);
          if ((int)lVar4 == 0) goto LAB_1097cb5f4;
          uVar3 = *(uint *)(param_1 + 0x5c);
        }
        lVar4 = 0x4c;
        if (uVar3 != 0) {
          lVar4 = 0x3c;
        }
      }
      puVar6 = *(undefined **)(param_1 + 0x2d0);
      puVar1 = puVar6;
      FUN_1097c9c04(puVar6,param_1 + lVar4);
      *(undefined **)(param_1 + 0x2d0) = puVar1;
      if (puVar6 != puVar1) {
        FUN_1097ca284(puVar6);
        puVar1 = *(undefined **)(param_1 + 0x2d0);
      }
      if (puVar1 != (undefined *)0x11386a1e0) {
        puVar6 = &UNK_10dffe9c0;
        if (puVar1 != (undefined *)0x0) {
          puVar6 = puVar1;
        }
        lVar4 = param_1 + 0x4c;
        func_0x0001097ed458(lVar4,puVar6);
        if ((int)lVar4 != 0) {
          if (*(int *)(param_1 + 0xb0) != 0) {
            FUN_1097e5d98(param_1 + 0x80,param_1 + 0x3c,param_1 + 0x60);
          }
          if ((*(int *)(param_1 + 0x1d0) == 0) ||
             ((FUN_1097e5d98(param_1 + 0x1a0,param_1 + 0x3c,param_1 + 0x70),
              *(int *)(param_1 + 0x78) != 0 && (*(int *)(param_1 + 0x7c) != 0))))
          goto LAB_1097cb5ec;
        }
      }
    }
LAB_1097cb5f4:
    uVar2 = 0x66;
  }
  return uVar2;
}



/* Entry: 1097cb608; end: 1097cb74b;  */

void FUN_1097cb608(long *param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  param_1[0x5a] = 0;
  if (param_6 != 0x11386a1e0) {
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    func_0x0001097f6fa4(param_2,(long)param_1 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_1 + 0x2c);
    if (param_6 != 0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_6);
      if ((int)lVar1 == 0) goto LAB_1097cb728;
    }
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x4c);
    if (param_3 < 0x1d) {
      uVar3 = *(undefined4 *)(&UNK_10dffcd98 + (ulong)param_3 * 4);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar3;
    param_1[0x58] = param_4;
    FUN_1097cb74c(param_4,param_1 + 0x10);
    FUN_1097e601c(param_1 + 0x10,(long)param_1 + 0xc,*(byte *)(param_2 + 0x30) >> 5 & 1);
    if ((*(byte *)((long)param_1 + 0x5c) >> 2 & 1) != 0) {
      lVar1 = (long)param_1 + 0x3c;
      func_0x0001097ed458(lVar1,(long)param_1 + 0xc);
      if ((int)lVar1 == 0) goto LAB_1097cb728;
    }
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x47] = 0x3ff0000000000000;
    *(undefined2 *)((long)param_1 + 0x246) = 0xffff;
    param_1[0x59] = param_5;
    FUN_1097cb74c(param_5,param_1 + 0x34);
    FUN_1097e601c(param_1 + 0x34,(long)param_1 + 0x1c,*(byte *)(param_2 + 0x30) >> 5 & 1);
    plVar2 = param_1;
    func_0x0001097cb7bc(param_1,param_6);
    if ((int)plVar2 != 0x66) {
      return;
    }
  }
LAB_1097cb728:
  FUN_1097ca284(param_1[0x5a]);
  param_1[0x5a] = 0;
  return;
}



/* Entry: 1097cb74c; end: 1097cb8f3;  */

void FUN_1097cb74c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_28;
  
  func_0x0001097e426c(param_2,param_1);
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar1 = param_2;
    FUN_1097e5c58();
    *(int *)(param_2 + 0x34) = (int)lVar1;
    uStack_28 = 0;
    lVar2 = param_2 + 0x48;
    FUN_1097d9970(lVar2,lVar1,(long)&uStack_28 + 4,&uStack_28);
    if ((int)lVar2 != 0) {
      *(double *)(param_2 + 0x68) = (double)uStack_28._4_4_;
      *(double *)(param_2 + 0x70) = (double)(int)uStack_28;
    }
  }
  return;
}



/* Entry: 1097cb8f4; end: 1097cba43;  */

void FUN_1097cb8f4(long *param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  param_1[0x5a] = 0;
  if (param_8 != 0x11386a1e0) {
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    func_0x0001097f6fa4(param_2,(long)param_1 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_1 + 0x2c);
    if (param_8 != 0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_8);
      if ((int)lVar1 == 0) goto LAB_1097cba1c;
    }
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x4c);
    if (param_3 < 0x1d) {
      uVar3 = *(undefined4 *)(&UNK_10dffcd98 + (ulong)param_3 * 4);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar3;
    param_1[0x58] = param_4;
    FUN_1097cb74c(param_4,param_1 + 0x10);
    FUN_1097e601c(param_1 + 0x10,(long)param_1 + 0xc,*(byte *)(param_2 + 0x30) >> 5 & 1);
    if ((*(byte *)((long)param_1 + 0x5c) >> 2 & 1) != 0) {
      lVar1 = (long)param_1 + 0x3c;
      func_0x0001097ed458(lVar1,(long)param_1 + 0xc);
      if ((int)lVar1 == 0) goto LAB_1097cba1c;
    }
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x47] = 0x3ff0000000000000;
    *(undefined2 *)((long)param_1 + 0x246) = 0xffff;
    FUN_1097db8d8(param_5,param_6,param_7,*(byte *)(param_2 + 0x30) >> 5 & 1,(long)param_1 + 0x1c);
    plVar2 = param_1;
    func_0x0001097cb7bc(param_1,param_8);
    if ((int)plVar2 != 0x66) {
      return;
    }
  }
LAB_1097cba1c:
  FUN_1097ca284(param_1[0x5a]);
  param_1[0x5a] = 0;
  return;
}



/* Entry: 1097cba44; end: 1097cbe13;  */

void FUN_1097cba44(long *param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  param_1[0x5a] = 0;
  if (param_6 != 0x11386a1e0) {
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    func_0x0001097f6fa4(param_2,(long)param_1 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_1 + 0x2c);
    if (param_6 != 0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_6);
      if ((int)lVar1 == 0) goto LAB_1097cbb7c;
    }
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x4c);
    if (param_3 < 0x1d) {
      uVar3 = *(undefined4 *)(&UNK_10dffcd98 + (ulong)param_3 * 4);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar3;
    param_1[0x58] = param_4;
    FUN_1097cb74c(param_4,param_1 + 0x10);
    FUN_1097e601c(param_1 + 0x10,(long)param_1 + 0xc,*(byte *)(param_2 + 0x30) >> 5 & 1);
    if ((*(byte *)((long)param_1 + 0x5c) >> 2 & 1) != 0) {
      lVar1 = (long)param_1 + 0x3c;
      func_0x0001097ed458(lVar1,(long)param_1 + 0xc);
      if ((int)lVar1 == 0) goto LAB_1097cbb7c;
    }
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x47] = 0x3ff0000000000000;
    *(undefined2 *)((long)param_1 + 0x246) = 0xffff;
    if ((*(int *)(param_5 + 0x14) < *(int *)(param_5 + 0x1c)) &&
       (*(int *)(param_5 + 0x18) < *(int *)(param_5 + 0x20))) {
      func_0x0001097ed40c((int *)(param_5 + 0x14),(long)param_1 + 0x1c);
    }
    else {
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
    }
    plVar2 = param_1;
    func_0x0001097cb7bc(param_1,param_6);
    if ((int)plVar2 != 0x66) {
      return;
    }
  }
LAB_1097cbb7c:
  FUN_1097ca284(param_1[0x5a]);
  param_1[0x5a] = 0;
  return;
}



/* Entry: 1097cbe14; end: 1097cbfab;  */

long * FUN_1097cbe14(long *param_1,long param_2,uint param_3,long param_4,long *param_5,
                    undefined8 param_6,undefined8 param_7,long param_8,int *param_9)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  param_1[0x5a] = 0;
  if (param_8 == 0x11386a1e0) {
LAB_1097cbf78:
    plVar3 = (long *)0x66;
  }
  else {
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    func_0x0001097f6fa4(param_2,(long)param_1 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_1 + 0x2c);
    if (param_8 != 0) {
      lVar1 = (long)param_1 + 0x4c;
      func_0x0001097ed458(lVar1,param_8);
      if ((int)lVar1 == 0) goto LAB_1097cbf78;
    }
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_1 + 0x4c);
    if (param_3 < 0x1d) {
      uVar2 = *(undefined4 *)(&UNK_10dffcd98 + (ulong)param_3 * 4);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar2;
    param_1[0x58] = param_4;
    FUN_1097cb74c(param_4,param_1 + 0x10);
    FUN_1097e601c(param_1 + 0x10,(long)param_1 + 0xc,*(byte *)(param_2 + 0x30) >> 5 & 1);
    if ((*(byte *)((long)param_1 + 0x5c) >> 2 & 1) != 0) {
      lVar1 = (long)param_1 + 0x3c;
      func_0x0001097ed458(lVar1,(long)param_1 + 0xc);
      if ((int)lVar1 == 0) goto LAB_1097cbf78;
    }
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x47] = 0x3ff0000000000000;
    *(undefined2 *)((long)param_1 + 0x246) = 0xffff;
    plVar3 = param_5;
    FUN_1097f0230(param_5,param_6,param_7,(long)param_1 + 0x1c,param_9);
    if ((int)plVar3 == 0) {
      if ((((param_9 != (int *)0x0) && (*param_9 != 0)) && ((int)param_5[0x13] == 1)) &&
         (((int)param_1[0x16] == 0 && (*(char *)((long)param_1 + 0x127) == -1)))) {
        *param_9 = 0;
      }
      plVar3 = param_1;
      func_0x0001097cb7bc(param_1,param_8);
      if ((int)plVar3 != 0x66) {
        return plVar3;
      }
    }
  }
  FUN_1097ca284(param_1[0x5a]);
  param_1[0x5a] = 0;
  return plVar3;
}



/* Entry: 1097cbfac; end: 1097cc1a3;  */

long FUN_1097cbfac(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if (param_2 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x34);
    uStack_50 = *(undefined8 *)(param_1 + 0x2c);
    uVar1 = *(uint *)(param_1 + 0x5c);
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001097ed458(&uStack_50,param_1 + 0xc);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001097ed458(&uStack_50,param_1 + 0x1c);
    }
    iVar2 = (int)((ulong)uStack_50 >> 0x20);
    uStack_60 = CONCAT44(iVar2 << 8,(int)uStack_50 << 8);
    uStack_58 = CONCAT44(((int)((ulong)uStack_48 >> 0x20) + iVar2) * 0x100,
                         ((int)uStack_48 + (int)uStack_50) * 0x100);
    func_0x0001097ed40c(&uStack_60,auStack_40);
    FUN_1097c948c(param_2,auStack_40,&uStack_60);
    return param_2;
  }
  return 1;
}



/* Entry: 1097cc1a4; end: 1097cc2b7;  */

undefined8 *
FUN_1097cc1a4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,double *param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 auStack_358 [9];
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  if (*(int *)(param_7 + 6) == 0) {
    uVar1 = param_8;
    FUN_1097e6674(param_1,*param_7 * 0.5);
    if ((int)uVar1 < 2) {
      puVar3 = (undefined8 *)0x66;
    }
    else {
      puVar3 = auStack_358;
      FUN_1097cb8f4(puVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_12);
      if ((int)puVar3 == 0) {
        do {
          for (; (code *)param_2[3] == (code *)0x0; param_2 = (undefined8 *)*param_2) {
          }
          puVar3 = param_2;
          (*(code *)param_2[3])
                    (param_1,param_2,auStack_358,param_6,param_7,param_8,param_9,param_10);
          param_2 = (undefined8 *)*param_2;
        } while ((int)puVar3 == 100);
        if (((int)puVar3 == 0) && (lVar2 = *(long *)(param_3 + 0x28), lVar2 != 0)) {
          iStack_80 = iStack_30c;
          iStack_7c = iStack_308;
          iStack_78 = iStack_304 + iStack_30c;
          iStack_74 = iStack_300 + iStack_308;
          FUN_1097cc6fc(lVar2,&iStack_80,1);
          *(long *)(param_3 + 0x28) = lVar2;
        }
        FUN_1097ca284(uStack_88);
      }
    }
    return puVar3;
  }
  puVar3 = auStack_a0;
  FUN_1097f3e34(puVar3,param_7);
  if ((int)puVar3 == 0) {
    uStack_a8 = 0;
    auStack_a0[0] = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0x3ff0000000000000;
    uStack_b0 = 0;
    uStack_d8 = param_12;
    uStack_e0 = param_10;
    FUN_1097cc2b8(param_1,param_2,param_3,param_4,param_5,param_6,auStack_a0,&uStack_d0,&uStack_d0);
    _free(uStack_88);
    puVar3 = param_2;
  }
  return puVar3;
}



/* Entry: 1097cc2b8; end: 1097cc403;  */

undefined8 *
FUN_1097cc2b8(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,double *param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 auStack_358 [9];
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  uVar1 = param_8;
  FUN_1097e6674(param_1,*param_7 * 0.5);
  if ((int)uVar1 < 2) {
    puVar3 = (undefined8 *)0x66;
  }
  else {
    puVar3 = auStack_358;
    FUN_1097cb8f4(puVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_12);
    if ((int)puVar3 == 0) {
      do {
        for (; (code *)param_2[3] == (code *)0x0; param_2 = (undefined8 *)*param_2) {
        }
        puVar3 = param_2;
        (*(code *)param_2[3])(param_1,param_2,auStack_358,param_6,param_7,param_8,param_9,param_10);
        param_2 = (undefined8 *)*param_2;
      } while ((int)puVar3 == 100);
      if (((int)puVar3 == 0) && (lVar2 = *(long *)(param_3 + 0x28), lVar2 != 0)) {
        iStack_80 = iStack_30c;
        iStack_7c = iStack_308;
        iStack_78 = iStack_304 + iStack_30c;
        iStack_74 = iStack_300 + iStack_308;
        FUN_1097cc6fc(lVar2,&iStack_80,1);
        *(long *)(param_3 + 0x28) = lVar2;
      }
      FUN_1097ca284(uStack_88);
    }
  }
  return puVar3;
}



/* Entry: 1097cc404; end: 1097cc4ef;  */

undefined8 *
FUN_1097cc404(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 auStack_348 [9];
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar1 = auStack_348;
  FUN_1097cba44();
  if ((int)puVar1 == 0) {
    do {
      for (; (code *)param_2[4] == (code *)0x0; param_2 = (undefined8 *)*param_2) {
      }
      puVar1 = param_2;
      (*(code *)param_2[4])(param_1,param_2,auStack_348,param_6,param_7,param_8);
      param_2 = (undefined8 *)*param_2;
    } while ((int)puVar1 == 100);
    if (((int)puVar1 == 0) && (lVar2 = *(long *)(param_3 + 0x28), lVar2 != 0)) {
      iStack_70 = iStack_2fc;
      iStack_6c = iStack_2f8;
      iStack_68 = iStack_2f4 + iStack_2fc;
      iStack_64 = iStack_2f0 + iStack_2f8;
      FUN_1097cc6fc(lVar2,&iStack_70,1);
      *(long *)(param_3 + 0x28) = lVar2;
    }
    FUN_1097ca284(uStack_78);
  }
  return puVar1;
}



/* Entry: 1097cc4f0; end: 1097cc5df;  */

undefined8 *
FUN_1097cc4f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uStack_33c;
  undefined8 auStack_338 [9];
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iStack_2e0;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  puVar1 = auStack_338;
  FUN_1097cbe14();
  if ((int)puVar1 == 0) {
    do {
      for (; (code *)param_1[5] == (code *)0x0; param_1 = (undefined8 *)*param_1) {
      }
      puVar1 = param_1;
      (*(code *)param_1[5])(param_1,auStack_338,param_7,param_5,param_6,uStack_33c);
      param_1 = (undefined8 *)*param_1;
    } while ((int)puVar1 == 100);
    if (((int)puVar1 == 0) && (lVar2 = *(long *)(param_2 + 0x28), lVar2 != 0)) {
      iStack_60 = iStack_2ec;
      iStack_5c = iStack_2e8;
      iStack_58 = iStack_2e4 + iStack_2ec;
      iStack_54 = iStack_2e0 + iStack_2e8;
      FUN_1097cc6fc(lVar2,&iStack_60,1);
      *(long *)(param_2 + 0x28) = lVar2;
    }
    FUN_1097ca284(uStack_68);
  }
  return puVar1;
}



/* Entry: 1097cc5e0; end: 1097cc65b;  */

undefined8 FUN_1097cc5e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar5 + 0xc);
  if (iVar1 < 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = iVar1 << 1;
    puVar3 = (undefined8 *)((ulong)uVar2 * 8 + 0x18);
    _malloc();
    uVar4 = 1;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 1;
      *(uint *)((long)puVar3 + 0xc) = uVar2;
      puVar3[2] = 0;
      *(undefined8 **)(lVar5 + 0x10) = puVar3;
      *(undefined8 **)(param_1 + 0x30) = puVar3;
      puVar3[3] = *param_2;
      *puVar3 = puVar3 + 3;
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Entry: 1097cc65c; end: 1097cc6fb;  */

void FUN_1097cc65c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    _free();
  }
  *(long *)(param_1 + 0x18) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 0x20) = 0x4000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long **)(param_1 + 0x30) = (long *)(param_1 + 0x18);
  return;
}



/* Entry: 1097cc6fc; end: 1097cc847;  */

int * FUN_1097cc6fc(int *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x1;
    _calloc(1,0x238);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dffce10;
    }
    else {
      *(int **)(param_1 + 0xc) = param_1 + 6;
      *(int **)(param_1 + 8) = param_1 + 0xe;
      param_1[0xb] = 0x20;
      param_1[5] = 0x20;
    }
  }
  if (*param_1 == 0) {
    uVar2 = param_1[5];
    param_1[4] = param_1[4] + param_3;
    uVar1 = uVar2;
    if ((int)param_3 <= (int)uVar2) {
      uVar1 = param_3;
    }
    _memcpy(*(long *)(*(long *)(param_1 + 0xc) + 8) +
            (long)*(int *)(*(long *)(param_1 + 0xc) + 0x10) * 0x10,param_2,
            -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4);
    iVar3 = param_1[5];
    puVar6 = *(undefined8 **)(param_1 + 0xc);
    *(uint *)(puVar6 + 2) = *(int *)(puVar6 + 2) + uVar1;
    param_1[5] = iVar3 - uVar1;
    if ((int)uVar2 < (int)param_3) {
      param_3 = param_3 - uVar1;
      iVar4 = *(int *)((long)puVar6 + 0x14) * 2;
      iVar3 = (param_3 & 0xffffffc0) + 0x40;
      if ((int)param_3 <= iVar4) {
        iVar3 = iVar4;
      }
      puVar5 = (undefined8 *)(((ulong)(long)iVar3 >> 1) << 5 | 0x18);
      _malloc();
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0001097cc6a8(param_1);
        param_1 = (int *)&UNK_10dffce10;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = puVar5 + 3;
        *(uint *)(puVar5 + 2) = param_3;
        *(int *)((long)puVar5 + 0x14) = iVar3;
        *puVar6 = puVar5;
        *(undefined8 **)(param_1 + 0xc) = puVar5;
        _memcpy(puVar5 + 3,param_2 + (long)(int)uVar1 * 0x10,
                -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4);
        param_1[5] = iVar3 - param_3;
      }
    }
  }
  return param_1;
}



/* Entry: 1097cc848; end: 1097cc9d7;  */

undefined4 * FUN_1097cc848(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,0x5f0);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    *puVar1 = 1;
    puVar1[4] = 0x18;
    *(undefined4 **)(puVar1 + 0xfc) = puVar1 + 0xfc;
    *(undefined4 **)(puVar1 + 0xfe) = puVar1 + 0xfc;
    puVar1[0x101] = 0x1b;
    puVar1[0x103] = 0x36;
    *(undefined4 **)(puVar1 + 0x104) = puVar1 + 0x108;
    *(undefined4 **)(puVar1 + 0x106) = puVar1 + 0x10f;
    *(undefined8 *)(puVar1 + 0xf2) = *(undefined8 *)(puVar1 + 0xf4);
    *(undefined1 *)(puVar1 + 0xf6) = 0xf2;
    puVar2 = puVar1 + 0xc;
    *(undefined **)(puVar1 + 8) = &UNK_110b11138;
    *(undefined4 **)(puVar1 + 10) = puVar2;
    *(undefined4 **)(puVar1 + 0xf0) = puVar1 + 0x7e;
    FUN_1097cf7b0(puVar2,param_1);
    if ((int)puVar2 == 0) {
      return puVar1;
    }
    _free(puVar1);
    uVar3 = (int)puVar2 - 1;
  }
  return (undefined4 *)(&UNK_10e000718 + (ulong)uVar3 * 0x28);
}



/* Entry: 1097cc9d8; end: 1097cc9ff;  */

undefined8 FUN_1097cc9d8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x100);
}



/* Entry: 1097cca00; end: 1097cca53;  */

undefined8 FUN_1097cca00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if ((*(long *)(lVar2 + 0xf8) == 0) && (*(long *)(lVar2 + 0x1c0) != 0)) {
    *(long *)(param_1 + 0x28) = *(long *)(lVar2 + 0x1c0);
    FUN_1097cf9a0(lVar2);
    uVar1 = 0;
    *(undefined8 *)(lVar2 + 0x1c0) = *(undefined8 *)(param_1 + 0x3c0);
    *(long *)(param_1 + 0x3c0) = lVar2;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1097cca54; end: 1097ccbbf;  */

long * FUN_1097cca54(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  plVar2 = (long *)(param_1 + 0x28);
  lVar5 = *(long *)(*plVar2 + 0xe8);
  if (lVar5 == 0x11386a1e0) {
    param_2 = 0;
    FUN_1097d866c(0,0x20028888,0,0,0xffffffff);
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x1c);
    if (*(uint *)(param_2 + 0x1c) != 0) goto LAB_1097ccb94;
  }
  else {
    lVar3 = *(long *)(*plVar2 + 0xf0);
    if (*(uint *)(lVar3 + 0x1c) != 0) {
      return (long *)(ulong)*(uint *)(lVar3 + 0x1c);
    }
    if ((*(byte *)(lVar3 + 0x30) >> 1 & 1) != 0) {
      return (long *)0xc;
    }
    lVar1 = lVar3;
    func_0x0001097f6fa4(lVar3,&uStack_50);
    if (lVar5 != 0) {
      func_0x0001097ed458(&uStack_50,lVar5);
    }
    if ((int)lVar1 == 0) {
      FUN_1097ea924(param_2,0);
      uStack_50 = 0;
    }
    else {
      lVar5 = lVar3;
      FUN_1097f6978(lVar3,param_2,uStack_48,uStack_44,&UNK_10dffcd70);
      param_2 = lVar5;
    }
    plVar4 = (long *)(ulong)*(uint *)(param_2 + 0x1c);
    if (*(uint *)(param_2 + 0x1c) != 0) goto LAB_1097ccb94;
    FUN_1097f7010(*(double *)(lVar3 + 0x88) - (double)(int)uStack_50,
                  *(double *)(lVar3 + 0x90) - (double)uStack_50._4_4_,param_2);
    FUN_1097f66e0(*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x80),param_2);
    FUN_1097dd0dc(param_1 + 0x3c8,(int)uStack_50 * -0x100,uStack_50._4_4_ * -0x100);
  }
  plVar4 = plVar2;
  FUN_1097cfa54(plVar2,param_1 + 0x3c0);
  if ((int)plVar4 == 0) {
    plVar4 = (long *)*plVar2;
    FUN_1097cfbd0(plVar4,param_2);
  }
LAB_1097ccb94:
  FUN_1097f61ac(param_2);
  return plVar4;
}



/* Entry: 1097ccbc0; end: 1097ccd7f;  */

/* WARNING: Removing unreachable block (ram,0x0001097e4540) */

undefined * FUN_1097ccbc0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(*(long *)(param_1 + 0x28) + 0xf8) == 0) {
    puVar3 = &UNK_10dffcd48;
    func_0x0001097e44ac();
    if (*(int *)(puVar3 + 4) == 0) {
      func_0x0001097e4220(puVar3,3);
    }
    return puVar3;
  }
  puVar3 = *(undefined **)(*(long *)(param_1 + 0x28) + 0xf0);
  FUN_1097f6324(puVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar4 + 0x1c0) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(lVar4 + 0x1c0);
    FUN_1097cf9a0(lVar4);
    *(undefined8 *)(lVar4 + 0x1c0) = *(undefined8 *)(param_1 + 0x3c0);
    *(long *)(param_1 + 0x3c0) = lVar4;
    lVar4 = *(long *)(param_1 + 0x28);
  }
  lVar4 = *(long *)(lVar4 + 0xf0);
  puVar1 = puVar3;
  FUN_1097e45dc();
  if (*(int *)(puVar1 + 4) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uStack_58 = *(undefined8 *)(lVar2 + 0x128);
    uStack_60 = *(undefined8 *)(lVar2 + 0x120);
    uStack_48 = *(undefined8 *)(lVar2 + 0x138);
    uStack_50 = *(undefined8 *)(lVar2 + 0x130);
    uStack_38 = *(undefined8 *)(lVar2 + 0x148);
    uStack_40 = *(undefined8 *)(lVar2 + 0x140);
    FUN_1097e51d8(puVar1,&uStack_60);
    FUN_1097dd0dc(param_1 + 0x3c8,(int)(*(double *)(lVar4 + 0x88) - *(double *)(puVar3 + 0x88)) << 8
                  ,(int)(*(double *)(lVar4 + 0x90) - *(double *)(puVar3 + 0x90)) << 8);
  }
  FUN_1097f61ac(puVar3);
  return puVar1;
}



/* Entry: 1097ccd80; end: 1097cce23;  */

ulong FUN_1097ccd80(double param_1,double param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  double dStack_48;
  
  FUN_1097cfcbc(*(undefined8 *)(param_3 + 0x28),&UNK_10dffe5c0);
  FUN_1097e45dc();
  uVar1 = (ulong)*(uint *)(param_4 + 4);
  if (*(uint *)(param_4 + 4) == 0) {
    dStack_50 = -param_1;
    dStack_48 = -param_2;
    uStack_70 = 0x3ff0000000000000;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x3ff0000000000000;
    FUN_1097e51d8(param_4,&uStack_70);
    uVar1 = *(ulong *)(param_3 + 0x28);
    FUN_1097cfcbc(uVar1,param_4);
  }
  FUN_1097e4880(param_4);
  return uVar1;
}



/* Entry: 1097cce24; end: 1097cce2b;  */

int FUN_1097cce24(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    func_0x0001097e482c(param_2);
    FUN_1097e4880(*(undefined8 *)(lVar2 + 0x1b8));
    *(long *)(lVar2 + 0x1b8) = param_2;
    *(undefined8 *)(lVar2 + 0x188) = *(undefined8 *)(lVar2 + 0x158);
    *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(lVar2 + 0x150);
    *(undefined8 *)(lVar2 + 0x198) = *(undefined8 *)(lVar2 + 0x168);
    *(undefined8 *)(lVar2 + 400) = *(undefined8 *)(lVar2 + 0x160);
    *(undefined8 *)(lVar2 + 0x1a8) = *(undefined8 *)(lVar2 + 0x178);
    *(undefined8 *)(lVar2 + 0x1a0) = *(undefined8 *)(lVar2 + 0x170);
  }
  return iVar1;
}



/* Entry: 1097cce2c; end: 1097cce6b;  */

void FUN_1097cce2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(undefined **)(lVar2 + 0x1b8) == &UNK_10dffe5c0) {
    puVar1 = &UNK_10dffcd48;
    func_0x0001097e44ac();
    *(undefined **)(lVar2 + 0x1b8) = puVar1;
  }
  return;
}



/* Entry: 1097cce6c; end: 1097cd007;  */

undefined8 FUN_1097cce6c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18) = param_2;
  return 0;
}



/* Entry: 1097cd008; end: 1097cd023;  */

undefined8 FUN_1097cd008(long param_1)

{
  func_0x0001097d0418(*(undefined8 *)(param_1 + 0x28));
  return 0;
}



/* Entry: 1097cd024; end: 1097cd18b;  */

void FUN_1097cd024(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + 0x128);
  uVar2 = *(undefined8 *)(lVar1 + 0x120);
  uVar4 = *(undefined8 *)(lVar1 + 0x130);
  uVar6 = *(undefined8 *)(lVar1 + 0x148);
  uVar5 = *(undefined8 *)(lVar1 + 0x140);
  param_2[3] = *(undefined8 *)(lVar1 + 0x138);
  param_2[2] = uVar4;
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  return;
}



/* Entry: 1097cd18c; end: 1097cd21f;  */

undefined8 FUN_1097cd18c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x3f0;
  plVar2 = *(long **)(param_1 + 0x3f0);
  while (plVar2 != (long *)lVar1) {
    plVar2 = (long *)*plVar2;
    _free();
  }
  *(long *)(param_1 + 0x3f0) = lVar1;
  *(long *)(param_1 + 0x3f8) = lVar1;
  *(undefined8 *)(param_1 + 0x408) = 0x3600000000;
  *(undefined8 *)(param_1 + 0x400) = 0x1b00000000;
  *(long *)(param_1 + 0x410) = param_1 + 0x420;
  *(long *)(param_1 + 0x418) = param_1 + 0x43c;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3d8) = 0xf2;
  *(undefined8 *)(param_1 + 0x3e4) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  return 0;
}



/* Entry: 1097cd220; end: 1097cd23b;  */

undefined8 FUN_1097cd220(long param_1)

{
  FUN_1097dc6f0(param_1 + 0x3c8);
  return 0;
}



/* Entry: 1097cd23c; end: 1097cd31f;  */

undefined8 FUN_1097cd23c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_30;
  double dStack_28;
  
  lVar2 = *(long *)(param_3 + 0x28);
  dStack_30 = param_2;
  dStack_28 = param_1;
  if (*(int *)(lVar2 + 0x1b0) == 0) {
    FUN_1097d0518(lVar2,&dStack_28,&dStack_30);
    lVar2 = *(long *)(param_3 + 0x28);
  }
  dVar5 = *(double *)(lVar2 + 0x20);
  dVar4 = 8388607.99609375 - dVar5;
  dVar3 = dVar4;
  if ((dStack_28 <= dVar4) && (dVar3 = dStack_28, dStack_28 < dVar5 + -8388608.0)) {
    dVar3 = dVar5 + -8388608.0;
  }
  if ((dStack_30 <= dVar4) && (dVar4 = dStack_30, dStack_30 < dVar5 + -8388608.0)) {
    dVar4 = dVar5 + -8388608.0;
  }
  FUN_1097dc6f0(param_3 + 0x3c8);
  *(byte *)(param_3 + 0x3d8) = *(byte *)(param_3 + 0x3d8) | 1;
  uVar1 = CONCAT44(SUB84(dVar4 + 26388279066624.0,0),SUB84(dVar3 + 26388279066624.0,0));
  *(undefined8 *)(param_3 + 0x3d0) = uVar1;
  *(undefined8 *)(param_3 + 0x3c8) = uVar1;
  return 0;
}



/* Entry: 1097cd320; end: 1097cd37f;  */

undefined8 FUN_1097cd320(double param_1,double param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_3 + 0x28);
  if (*(int *)(lVar3 + 0x1b0) == 0) {
    dVar5 = param_2 * *(double *)(lVar3 + 0x130) + param_1 * *(double *)(lVar3 + 0x120);
    dVar4 = param_2 * *(double *)(lVar3 + 0x138) + param_1 * *(double *)(lVar3 + 0x128);
    lVar3 = *(long *)(lVar3 + 0xf0);
    param_1 = dVar4 * *(double *)(lVar3 + 0x78) + dVar5 * *(double *)(lVar3 + 0x68);
    param_2 = dVar4 * *(double *)(lVar3 + 0x80) + dVar5 * *(double *)(lVar3 + 0x70);
  }
  if ((*(byte *)(param_3 + 0x3d8) & 1) != 0) {
    iVar1 = *(int *)(param_3 + 0x3d0);
    iVar2 = *(int *)(param_3 + 0x3d4);
    FUN_1097dc6f0();
    *(byte *)(param_3 + 0x3d8) = *(byte *)(param_3 + 0x3d8) | 1;
    *(int *)(param_3 + 0x3d0) = iVar1 + SUB84(param_1 + 26388279066624.0,0);
    *(int *)(param_3 + 0x3d4) = iVar2 + SUB84(param_2 + 26388279066624.0,0);
    *(undefined8 *)(param_3 + 0x3c8) = *(undefined8 *)(param_3 + 0x3d0);
    return 0;
  }
  return 4;
}



/* Entry: 1097cd380; end: 1097cd447;  */

void FUN_1097cd380(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_30;
  double dStack_28;
  
  lVar1 = *(long *)(param_3 + 0x28);
  dStack_30 = param_2;
  dStack_28 = param_1;
  if (*(int *)(lVar1 + 0x1b0) == 0) {
    FUN_1097d0518(lVar1,&dStack_28,&dStack_30);
    lVar1 = *(long *)(param_3 + 0x28);
  }
  dVar3 = *(double *)(lVar1 + 0x20);
  dVar2 = 8388607.99609375 - dVar3;
  dVar4 = dVar2;
  if ((dStack_28 <= dVar2) && (dVar4 = dStack_28, dStack_28 < dVar3 + -8388608.0)) {
    dVar4 = dVar3 + -8388608.0;
  }
  if ((dStack_30 <= dVar2) && (dVar2 = dStack_30, dStack_30 < dVar3 + -8388608.0)) {
    dVar2 = dVar3 + -8388608.0;
  }
  func_0x0001097dc7a0(param_3 + 0x3c8,dVar4 + 26388279066624.0,dVar2 + 26388279066624.0);
  return;
}


