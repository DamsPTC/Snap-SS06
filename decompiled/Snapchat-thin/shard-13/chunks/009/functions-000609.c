/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aed9958; end: 10aed9ac7;  */

ulong FUN_10aed9958(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf62d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010bf62c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10aed4588(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c111ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aed4588(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed9ac8; end: 10aed9bf7;  */

void FUN_10aed9ac8(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed9bf8; end: 10aed9c7f;  */

long * FUN_10aed9bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_38);
    _objc_release(uStack_38);
    return plVar2;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aed9c6c);
  (*pcVar1)();
}



/* Entry: 10aed9c80; end: 10aed9c93;  */

void FUN_10aed9c80(undefined8 param_1,ulong param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed9c94; end: 10aed9cc7;  */

void FUN_10aed9c94(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 10aed9cc8; end: 10aed9ccf;  */

void FUN_10aed9cc8(void)

{
  return;
}



/* Entry: 10aed9cd0; end: 10aed9d07;  */

void FUN_10aed9cd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90328;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aed9d08; end: 10aed9d4b;  */

void FUN_10aed9d08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90328;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aed9d4c; end: 10aed9d87;  */

long FUN_10aed9d4c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90398);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aed9d88; end: 10aed9d93;  */

undefined ** FUN_10aed9d88(void)

{
  return &PTR_DAT_110c90398;
}



/* Entry: 10aed9d94; end: 10aed9e87;  */

void FUN_10aed9d94(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aed9e88; end: 10aed9ecf;  */

int FUN_10aed9e88(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aed9ed0; end: 10aed9fdf;  */

ulong FUN_10aed9ed0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10aed4588(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c099040(param_2);
  uVar7 = param_2;
  func_0x00010c155400(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27e08(param_1,8,uVar7,0);
  func_0x000107c27e08(param_1,6,uVar6,0);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aed9fe0; end: 10aeda923;  */

void FUN_10aed9fe0(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aeda924; end: 10aeda96b;  */

int FUN_10aeda924(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aeda96c; end: 10aeda9ef;  */

int FUN_10aeda96c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar3 = lVar1 + -1;
      FUN_10aeda9f0(param_1,*(undefined4 *)(param_2 + -4 + lVar1 * 4));
      lVar1 = lVar3;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aeda9f0; end: 10aedaa37;  */

int FUN_10aeda9f0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedaa38; end: 10aedaabb;  */

int FUN_10aedaa38(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar3 = lVar1 + -1;
      FUN_10aedaabc(param_1,*(undefined4 *)(param_2 + -4 + lVar1 * 4));
      lVar1 = lVar3;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedaabc; end: 10aedab03;  */

int FUN_10aedaabc(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedab04; end: 10aedab87;  */

int FUN_10aedab04(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar3 = lVar1 + -1;
      FUN_10aedab88(param_1,*(undefined4 *)(param_2 + -4 + lVar1 * 4));
      lVar1 = lVar3;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedab88; end: 10aedabcf;  */

int FUN_10aedab88(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedabd0; end: 10aedac53;  */

int FUN_10aedabd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 != 0) {
    lVar1 = param_3;
    do {
      lVar3 = lVar1 + -1;
      FUN_10aedac54(param_1,*(undefined4 *)(param_2 + -4 + lVar1 * 4));
      lVar1 = lVar3;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedac54; end: 10aedac9b;  */

int FUN_10aedac54(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  func_0x000107c27db4(param_1,4);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce088(param_1,4);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  piVar5 = (int *)(lVar4 + -4);
  *piVar5 = (((iVar1 - iVar2) + iVar3) - param_2) + 4;
  *(int **)(param_1 + 0x30) = piVar5;
  return (*(int *)(param_1 + 0x20) - (int)piVar5) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedac9c; end: 10aedad07;  */

int FUN_10aedac9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3,4);
  func_0x000107c27dc8(param_1,param_3,1);
  func_0x000107c27df4(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x46) = 0;
  func_0x0001001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedad08; end: 10aedad0f;  */

void FUN_10aedad08(void)

{
  return;
}



/* Entry: 10aedad10; end: 10aedad43;  */

void FUN_10aedad10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c903d8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aedad44; end: 10aedad83;  */

void FUN_10aedad44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c903d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aedad84; end: 10aedadbf;  */

long FUN_10aedad84(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90448);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aedadc0; end: 10aedadcb;  */

undefined ** FUN_10aedadc0(void)

{
  return &PTR_DAT_110c90448;
}



/* Entry: 10aedadcc; end: 10aedaddf;  */

void FUN_10aedadcc(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10aedade0; end: 10aedade7;  */

void FUN_10aedade0(void)

{
  return;
}



/* Entry: 10aedade8; end: 10aedae1b;  */

void FUN_10aedade8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90488;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aedae1c; end: 10aedae5b;  */

void FUN_10aedae1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90488;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aedae5c; end: 10aedae97;  */

long FUN_10aedae5c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c904f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aedae98; end: 10aedaea3;  */

undefined ** FUN_10aedae98(void)

{
  return &PTR_DAT_110c904f8;
}



/* Entry: 10aedaea4; end: 10aedb353;  */

long FUN_10aedaea4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_110c90538;
  pcStack_108 = FUN_10aedb354;
  pppuStack_f8 = &ppuStack_110;
  lVar11 = param_2;
  func_0x00010bfc14a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar19 = 0;
  _objc_retain(lVar11);
  lVar5 = lVar11;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  puVar16 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
  if (lVar5 != 0) {
    puVar12 = (undefined4 *)0x0;
    do {
      lVar13 = 0;
      puVar17 = puVar16;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        uVar14 = *(undefined8 *)(lVar13 * 8);
        _objc_retain(uVar14);
        _objc_retain(uVar14);
        uStack_118 = uVar14;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_10aedb278;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar18 < puVar12) {
          *puVar18 = (int)pppuVar6;
          puVar16 = puVar17;
        }
        else {
          lVar15 = (long)puVar18 - (long)puVar17;
          uVar8 = (lVar15 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
            func_0x00010aedb428();
LAB_10aedb278:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10aedb27c);
            (*pcVar4)();
          }
          uVar10 = (long)puVar12 - (long)puVar17 >> 1;
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar12 - (long)puVar17)) {
            uVar10 = 0x3fffffffffffffff;
          }
          if (uVar10 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_10aedb278;
          }
          lVar7 = uVar10 << 2;
          __Znwm();
          puVar18 = (undefined4 *)(lVar7 + lVar15);
          puVar12 = (undefined4 *)(lVar7 + uVar10 * 4);
          puVar16 = puVar18 + -(lVar15 >> 2);
          *puVar18 = (int)pppuVar6;
          _memcpy(puVar16,puVar17,lVar15);
          if (puVar17 != (undefined4 *)0x0) {
            __ZdlPv(puVar17);
          }
        }
        puVar18 = puVar18 + 1;
        _objc_release(uVar14);
        lVar13 = lVar13 + 1;
        puVar17 = puVar16;
      } while (lVar5 != lVar13);
      lVar5 = lVar11;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar11);
  _objc_release(lVar11);
  _objc_release(lVar11);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar9 = 0x20;
LAB_10aedb0e0:
    (**(code **)((long)*pppuStack_f8 + lVar9))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_10aedb0e0;
  }
  lVar9 = param_2;
  func_0x00010bfc1580();
  uVar8 = (long)puVar18 - (long)puVar16;
  puVar12 = (undefined4 *)&UNK_10e534459;
  if (uVar8 != 0) {
    puVar12 = puVar16;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,uVar8,4);
  func_0x000107c27dc8(param_1,uVar8,4);
  if (puVar16 != puVar18) {
    lVar11 = (long)uVar8 >> 2;
    do {
      iVar3 = puVar12[lVar11 + -1];
      func_0x000107c27db4(param_1,4);
      func_0x000107c27dcc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  lVar11 = param_1;
  func_0x000107c27dcc(param_1,uVar8 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x000107c27db0(param_1,4,lVar9,0);
  if ((int)lVar11 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)lVar11) + 4,0);
  }
  uVar8 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x000107c27dc0(param_1,uVar8);
  if (puVar16 != (undefined4 *)0x0) {
    __ZdlPv(puVar16);
  }
  lVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(iVar2);
  _objc_release(iVar2);
  _objc_release(iVar2);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10aedb33c;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar11))();
LAB_10aedb33c:
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(uVar8);
  func_0x00010c08b3c0(uVar8);
  func_0x00010c0b55a0(uVar8);
  *(undefined1 *)(lVar9 + 0x46) = 1;
  iVar3 = *(int *)(lVar9 + 0x20);
  iVar1 = *(int *)(lVar9 + 0x30);
  iVar2 = *(int *)(lVar9 + 0x28);
  func_0x000107c27db8(lVar9,6);
  func_0x000107c27db8(uVar19,0,lVar9,4);
  func_0x000107c27dc0(lVar9,(iVar3 - iVar1) + iVar2);
  _objc_release(uVar8);
  return lVar9;
}



/* Entry: 10aedb354; end: 10aedb413;  */

long FUN_10aedb354(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _objc_retain(param_3);
  func_0x00010c08b3c0(param_3);
  func_0x00010c0b55a0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,6);
  func_0x000107c27db8(param_1,0,param_2,4);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10aedb414; end: 10aedb43b;  */

void FUN_10aedb414(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 10aedb43c; end: 10aedb443;  */

void FUN_10aedb43c(void)

{
  return;
}



/* Entry: 10aedb444; end: 10aedb477;  */

void FUN_10aedb444(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c90538;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aedb478; end: 10aedb4b7;  */

void FUN_10aedb478(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c90538;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aedb4b8; end: 10aedb4f3;  */

long FUN_10aedb4b8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c905a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aedb4f4; end: 10aedb507;  */

undefined ** FUN_10aedb4f4(void)

{
  return &PTR_DAT_110c905a8;
}



/* Entry: 10aedb508; end: 10aedb53b;  */

void FUN_10aedb508(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110c905e8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aedb53c; end: 10aedb57b;  */

void FUN_10aedb53c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110c905e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aedb57c; end: 10aedb5b7;  */

long FUN_10aedb57c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90658);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aedb5b8; end: 10aedb5c3;  */

undefined ** FUN_10aedb5b8(void)

{
  return &PTR_DAT_110c90658;
}



/* Entry: 10aedb5c4; end: 10aedb5d7;  */

void FUN_10aedb5c4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10aedb5d8; end: 10aedb5e7;  */

void FUN_10aedb5d8(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10aedb5e8; end: 10aedb64f;  */

void FUN_10aedb5e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10aed20a4(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aedb650; end: 10aedb8cf;  */

void FUN_10aedb650(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar9 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = lVar4;
    _objc_retainAutorelease(lVar4);
    func_0x00010bf25f00();
    lVar6 = lVar4;
    func_0x00010c08fa60(lVar4);
    uVar10 = uVar9;
    func_0x000107c27df8(uVar9,lVar5,lVar6);
  }
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    lVar6 = lVar5;
    _objc_retainAutorelease(lVar5);
    func_0x00010bf25f00();
    lVar7 = lVar5;
    func_0x00010c08fa60(lVar5);
    uVar11 = uVar9;
    func_0x000107c27df8(uVar9,lVar6,lVar7);
  }
  _objc_release(lVar5);
  lVar6 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    lVar7 = lVar6;
    _objc_retainAutorelease(lVar6);
    func_0x00010bf25f00();
    lVar8 = lVar6;
    func_0x00010c08fa60(lVar6);
    uVar12 = uVar9;
    func_0x000107c27df8(uVar9,lVar7,lVar8);
  }
  _objc_release(lVar6);
  *(undefined1 *)(uVar9 + 0x46) = 1;
  iVar1 = *(int *)(uVar9 + 0x20);
  iVar2 = *(int *)(uVar9 + 0x30);
  iVar3 = *(int *)(uVar9 + 0x28);
  func_0x000107c27de4(uVar9,8,uVar12 & 0xffffffff);
  func_0x000107c27de4(uVar9,6,uVar11 & 0xffffffff);
  func_0x000107c27de4(uVar9,4,uVar10 & 0xffffffff);
  func_0x000107c27dc0(uVar9,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aedb8d0; end: 10aedb8d7;  */

void FUN_10aedb8d0(void)

{
  return;
}



/* Entry: 10aedb8d8; end: 10aedb90b;  */

void FUN_10aedb8d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c906f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aedb90c; end: 10aedb94b;  */

void FUN_10aedb90c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c906f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aedb94c; end: 10aedb987;  */

long FUN_10aedb94c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110c90768);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aedb988; end: 10aedb993;  */

undefined ** FUN_10aedb988(void)

{
  return &PTR_DAT_110c90768;
}



/* Entry: 10aedb994; end: 10aedba5b;  */

void FUN_10aedb994(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c27db4(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10aedba5c; end: 10aedbbc3;  */

/* WARNING: Possible PIC construction at 0x00010aedbae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aedbae8) */

int FUN_10aedba5c(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  func_0x000107c27dc8(param_1,param_3 << 2,4);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + -4 + param_3 * 4);
    func_0x000107c27db4(param_1,4);
    iVar2 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
            iVar2) + 4;
    unaff_x30 = 0x10aedbae8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001001ce088(param_1,4);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar3 - *(long *)(param_1 + 0x38)) < 4) {
    func_0x0001001cde7c(param_1,4);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  piVar4 = (int *)(lVar3 + -4);
  *piVar4 = iVar2;
  *(int **)(param_1 + 0x30) = piVar4;
  return (*(int *)(param_1 + 0x20) - (int)piVar4) + *(int *)(param_1 + 0x28);
}



/* Entry: 10aedbbc4; end: 10aedbc27;  */

undefined ** FUN_10aedbbc4(void)

{
  int iVar1;
  
  if ((bRam0000000113839328 & 1) == 0) {
    iVar1 = 0x13839328;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113313630,0x100000000);
      ___cxa_guard_release(0x113839328);
    }
  }
  return &PTR_PTR_113313630;
}



/* Entry: 10aedbc28; end: 10aedbcaf;  */

void FUN_10aedbc28(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aedbcb0; end: 10aedbd3b;  */

void FUN_10aedbcb0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aedbd3c; end: 10aedbdf7;  */

undefined8 FUN_10aedbd3c(void)

{
  int iVar1;
  
  if ((bRam00000001138393a0 & 1) == 0) {
    iVar1 = 0x138393a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113839338 = 0xe;
      puRam0000000113839340 = &UNK_10f6d5a09;
      uRam0000000113839348 = 0x1010000;
      pcRam0000000113839350 = FUN_10aedbdf8;
      pcRam0000000113839358 = FUN_10aedbe30;
      ppuRam0000000113839330 = &PTR_DAT_110864b98;
      uRam0000000113839370 = 0;
      uRam0000000113839368 = 0;
      uRam0000000113839380 = 0;
      uRam0000000113839378 = 0;
      uRam0000000113839390 = 0;
      uRam0000000113839388 = 0;
      uRam0000000113839398 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x113839330,0x100000000);
      ___cxa_guard_release(0x1138393a0);
    }
  }
  return 0x113839330;
}



/* Entry: 10aedbdf8; end: 10aedbe2f;  */

undefined8 FUN_10aedbdf8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10aedbe30; end: 10aedbe83;  */

undefined8 FUN_10aedbe30(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10aedbe84; end: 10aedbee7;  */

undefined ** FUN_10aedbe84(void)

{
  int iVar1;
  
  if ((bRam00000001138393a8 & 1) == 0) {
    iVar1 = 0x138393a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1133136a0,0x100000000);
      ___cxa_guard_release(0x1138393a8);
    }
  }
  return &PTR_PTR_1133136a0;
}



/* Entry: 10aedbee8; end: 10aedbf6f;  */

void FUN_10aedbee8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0xb) || (puVar1[5] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aedbf70; end: 10aedbffb;  */

void FUN_10aedbf70(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d5440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d5440(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aedbffc; end: 10aedc007; +[SCLensMetadataItemDataModel table] */

undefined * FUN_10aedbffc(void)

{
  return &UNK_10f6d5a1d;
}



/* Entry: 10aedc008; end: 10aedc243; +[SCLensMetadataItemDataModel immutableObjectParse:bufferSize:] */

void FUN_10aedc008(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126de8c0;
  _objc_alloc(PTR_PTR_1126de8c0);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10aedc0f0:
    puVar8 = (undefined *)0x0;
LAB_10aedc0f4:
    uVar9 = 0;
LAB_10aedc0f8:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_10aedc0f0;
    if (*(short *)((long)piVar1 + lVar5 + 6) == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar4 < 9) goto LAB_10aedc0f4;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if (uVar4 < 0xb) goto LAB_10aedc0f8;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0xc < uVar4) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc), uVar6 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      lVar5 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_10aedc100;
    }
  }
  lVar5 = 0;
LAB_10aedc100:
  func_0x000107c2ba68(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024340(puVar3,param_2,puVar7,puVar8,uVar9,puVar10,lVar5);
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aedc244; end: 10aedc267; +[SCLensMetadataItemDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_10aedc244(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10aedc260;
  auVar1._0_8_ = 0x10aedc258;
  return auVar1;
}



/* Entry: 10aedc268; end: 10aedc3ab;  */

undefined1 *
FUN_10aedc268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1127019a8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10aedc3ac; end: 10aedc7c3;  */

void FUN_10aedc3ac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar8,&UNK_10f6d5a3b);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c094540(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126de8c0);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_10aedc6e8;
            puVar8 = PTR_PTR_1126de8c8;
            _objc_alloc(PTR_PTR_1126de8c8);
            puVar2 = puVar3;
            func_0x00010c094540(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf38a80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf9c880(puVar3);
            puVar6 = puVar3;
            func_0x00010c0d5440(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c094fa0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10aedc268(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_10aedc4d8;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de8c0);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126de8c8;
        _objc_alloc(PTR_PTR_1126de8c8);
        puVar2 = puVar3;
        func_0x00010c094540(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf38a80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        puVar6 = puVar3;
        func_0x00010c0d5440(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c094fa0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10aedc268(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_10aedc4d8:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10aedc6f0;
      }
LAB_10aedc6e8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_10aedc6f0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10aedc7c4; end: 10aedc837;  */

void FUN_10aedc7c4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10aedc3ac();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aedc838; end: 10aedcb2f;  */

void FUN_10aedc838(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126de8c8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_10aedc3ac();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126de8c8;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126de8c8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf38a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880(param_1);
      puVar5 = param_1;
      func_0x00010c0d5440(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c094fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10aedc268(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bf38a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010bf9c880();
    *(undefined **)(puVar1 + 0x28) = puVar7;
    puVar7 = param_1;
    func_0x00010c0d5440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c094fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aedcb30; end: 10aedcb97;  */

void FUN_10aedcb30(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126de8c0;
    _objc_alloc(PTR_PTR_1126de8c0);
    func_0x00010c024340();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aedcb98; end: 10aedcbdf; -[SCLensMetadataItemDataModelChangeRequest .cxx_destruct] */

void FUN_10aedcb98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aedcbe0; end: 10aedcbeb; -[SCLensMetadataItemDataModelChangeRequest table] */

undefined * FUN_10aedcbe0(void)

{
  return &UNK_10f6d5a1d;
}



/* Entry: 10aedcbec; end: 10aedcc33; -[SCLensMetadataItemDataModelChangeRequest createTableWithSQLite:] */

void FUN_10aedcbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10e53445a,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10aedcc34; end: 10aedcfbb; -[SCLensMetadataItemDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10aedcc34(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10aedcb30(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aedcfbc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f6d5abf);
    if (lVar6 == 0) goto LAB_10aedcf58;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10aedcf58;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126de8c0);
    func_0x00010c21c9a0(puVar7);
LAB_10aedcf40:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f6d5a86);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126de8c0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10aedcf64;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10aedcf64;
    }
    FUN_10aedcb30(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aedcfbc(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f6d5b05);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126de8c0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10aedcf40;
      }
    }
LAB_10aedcf58:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10aedcf64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aedcfbc; end: 10aedd263;  */

ulong FUN_10aedcfbc(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_68 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c094fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = param_1;
    FUN_10aed20a4(param_1,lVar5);
    _objc_release(lVar5);
    uStack_68 = uStack_68 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_10aedd264(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    lVar7 = lVar5;
    _objc_retainAutorelease(lVar5);
    func_0x00010bf25f00();
    lVar8 = lVar5;
    func_0x00010c08fa60(lVar5);
    uVar10 = param_1;
    func_0x000107c27df8(param_1,lVar7,lVar8);
  }
  _objc_release(lVar5);
  lVar7 = param_2;
  func_0x00010bf9c880(param_2);
  lVar8 = param_2;
  func_0x00010c0d5440(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10aedd264(param_1,lVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27dbc(param_1,8,lVar7,0);
  if (uStack_68 != 0) {
    func_0x000107c27db4(param_1,4);
    func_0x000107c27de0(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_68) + 4,0);
  }
  func_0x000107c27ddc(param_1,10,uVar9 & 0xffffffff);
  func_0x000107c27de4(param_1,6,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar6 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aedd264; end: 10aedd393;  */

undefined8 FUN_10aedd264(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10aedd344;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10aedd344;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10aedd304;
    param_1 = 0;
  }
  else {
LAB_10aedd304:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10aedd344:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aedd394; end: 10aedd3f7;  */

undefined ** FUN_10aedd394(void)

{
  int iVar1;
  
  if ((bRam00000001138393b0 & 1) == 0) {
    iVar1 = 0x138393b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113313710,0x100000000);
      ___cxa_guard_release(0x1138393b0);
    }
  }
  return &PTR_PTR_113313710;
}



/* Entry: 10aedd3f8; end: 10aedd47f;  */

void FUN_10aedd3f8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aedd480; end: 10aedd50b;  */

void FUN_10aedd480(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d53e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aedd50c; end: 10aedd517; +[SCLensFeedDataModel table] */

undefined * FUN_10aedd50c(void)

{
  return &UNK_10f6d5b55;
}



/* Entry: 10aedd518; end: 10aedd96f; +[SCLensFeedDataModel immutableObjectParse:bufferSize:] */

void FUN_10aedd518(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ushort uVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar6 = PTR_PTR_1126de848;
  _objc_alloc(PTR_PTR_1126de848);
  lVar8 = (long)*piVar1;
  uVar9 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar9 < 5) {
    puVar13 = (undefined *)0x0;
LAB_10aedd600:
    iVar7 = (int)lVar8;
    puVar14 = (undefined *)0x0;
LAB_10aedd604:
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - lVar8))[2];
    if (uVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar12 = -lVar8;
    if (uVar9 < 7) goto LAB_10aedd600;
    uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 6);
    if (uVar11 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      lVar12 = -lVar8;
      uVar9 = *(ushort *)((long)piVar1 - lVar8);
    }
    iVar7 = (int)lVar8;
    if ((uVar9 < 9) || (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar12 + 8), uVar11 == 0))
    goto LAB_10aedd604;
    puVar2 = (uint *)((long)piVar1 + uVar11);
    uVar4 = *puVar2;
    puVar15 = PTR_PTR_1126de860;
    _objc_alloc(PTR_PTR_1126de860);
    piVar3 = (int *)((long)puVar2 + (ulong)uVar4);
    puVar10 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar9 = *puVar10;
    uVar18 = 0;
    if ((((uVar9 < 5) || (uVar9 < 7)) || (uVar9 < 9)) || (uVar9 < 0xb)) {
      uVar20 = 0;
    }
    else {
      uVar21 = 0;
      if ((ulong)puVar10[5] != 0) {
        uVar18 = *(undefined4 *)((long)piVar3 + (ulong)puVar10[5]);
      }
      uVar20 = uVar21;
      if (((0xc < uVar9) && (0xe < uVar9)) &&
         ((0x10 < uVar9 && ((uVar20 = 0, 0x12 < uVar9 && (uVar20 = uVar21, (ulong)puVar10[9] != 0)))
          ))) {
        uVar20 = *(undefined4 *)((long)piVar3 + (ulong)puVar10[9]);
      }
    }
    func_0x00010c04ad80(uVar18,uVar20);
    iVar7 = *piVar1;
  }
  uVar9 = *(ushort *)((long)piVar1 - (long)iVar7);
  if (uVar9 < 0xb) {
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar1 - (long)iVar7))[5];
    if (uVar11 == 0) {
      puVar16 = (undefined *)0x0;
      lVar8 = (long)iVar7;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar11);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)*piVar1;
      uVar9 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    if (0xc < uVar9) {
      uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xc);
      if (uVar11 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar11);
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = -(long)*piVar1;
        uVar9 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if (uVar9 < 0xf) {
        bVar5 = false;
        uVar19 = 0;
      }
      else {
        uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xe);
        if (uVar11 == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((long)piVar1 + uVar11) != '\0';
        }
        uVar19 = 0;
        if ((0x10 < uVar9) &&
           (uVar11 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x10), uVar19 = 0, uVar11 != 0)) {
          uVar19 = *(undefined8 *)((long)piVar1 + uVar11);
        }
      }
      goto LAB_10aedd6c8;
    }
  }
  puVar17 = (undefined *)0x0;
  bVar5 = false;
  uVar19 = 0;
LAB_10aedd6c8:
  func_0x00010c02dde0(uVar19,puVar6,param_2,puVar13,puVar14,puVar15,puVar16,puVar17,bVar5);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aedd970; end: 10aedd993; +[SCLensFeedDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_10aedd970(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10aedd98c;
  auVar1._0_8_ = 0x10aedd984;
  return auVar1;
}



/* Entry: 10aedd994; end: 10aeddb17;  */

undefined1 *
FUN_10aedd994(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1127019b0;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_9;
      *(undefined8 *)((long)plVar1 + 0x40) = param_1;
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10aeddb18; end: 10aeddf93;  */

void FUN_10aeddb18(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0d53e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar9,&UNK_10f6d5b6b);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0d53e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar9,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar9;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar9;
            _sqlite3_column_int64(puVar9,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126de848);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_10aeddea0;
            puVar9 = PTR_PTR_1126de8d0;
            _objc_alloc(PTR_PTR_1126de8d0);
            puVar2 = puVar3;
            func_0x00010c0d53e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c121e80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c130180(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf85d80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bfe5b40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010bf69d40(puVar3);
            func_0x00010c08a700(puVar3);
            FUN_10aedd994(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
            param_1 = puVar3;
            goto LAB_10aeddc68;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126de848);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126de8d0;
        _objc_alloc(PTR_PTR_1126de8d0);
        puVar2 = puVar3;
        func_0x00010c0d53e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c121e80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c130180(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf85d80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bfe5b40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bf69d40(puVar3);
        func_0x00010c08a700(puVar3);
        FUN_10aedd994(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
        param_1 = puVar3;
LAB_10aeddc68:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_10aeddea8;
      }
LAB_10aeddea0:
      param_1 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10aeddea8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10aeddf94; end: 10aede007;  */

void FUN_10aeddf94(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_10aeddb18();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10aede008; end: 10aede37b;  */

void FUN_10aede008(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126de8d0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_10aeddb18();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar8 = PTR_PTR_1126de8d0;
    _objc_retain(param_2);
    _objc_opt_self(puVar8);
    puVar8 = PTR_PTR_1126de8d0;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c0d53e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c121e80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c130180(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010bfe5b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010bf69d40(param_2);
      func_0x00010c08a700(param_2);
      FUN_10aedd994(puVar8,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar8 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar8 = param_2;
    func_0x00010c0d53e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010c121e80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010c130180(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bfe5b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bf69d40();
    puVar1[0x14] = (char)puVar8;
    func_0x00010c08a700(param_2);
    *(undefined8 *)(puVar1 + 0x40) = param_1;
    _objc_retain(puVar1);
    puVar8 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10aede37c; end: 10aede3eb;  */

void FUN_10aede37c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126de848;
    _objc_alloc(PTR_PTR_1126de848);
    func_0x00010c02dde0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aede3ec; end: 10aede43f; -[SCLensFeedDataModelChangeRequest .cxx_destruct] */

void FUN_10aede3ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10aede440; end: 10aede44b; -[SCLensFeedDataModelChangeRequest table] */

undefined * FUN_10aede440(void)

{
  return &UNK_10f6d5b55;
}



/* Entry: 10aede44c; end: 10aede493; -[SCLensFeedDataModelChangeRequest createTableWithSQLite:] */

void FUN_10aede44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10e5344e5,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10aede494; end: 10aede81b; -[SCLensFeedDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10aede494(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10aede37c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aede81c(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f6d5be4);
    if (lVar6 == 0) goto LAB_10aede7b8;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10aede7b8;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126de848);
    func_0x00010c21c9a0(puVar7);
LAB_10aede7a0:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f6d5bb3);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126de848);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10aede7c4;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10aede7c4;
    }
    FUN_10aede37c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10aede81c(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f6d5c27);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126de848);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10aede7a0;
      }
    }
LAB_10aede7b8:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10aede7c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10aede81c; end: 10aedec13;  */

ulong FUN_10aede81c(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c130180();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar13 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010c130180();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar13 = uVar5;
    func_0x00010c2480c0();
    uVar6 = uVar5;
    func_0x00010c0ed100();
    uVar7 = uVar5;
    func_0x00010bf4dac0(uVar5);
    func_0x00010c0852a0(uVar5);
    uVar8 = uVar5;
    func_0x00010c2902c0();
    uVar9 = uVar5;
    func_0x00010c2902e0(uVar5);
    uVar10 = uVar5;
    func_0x00010c097520(uVar5);
    func_0x00010c097500(uVar5);
    *(undefined1 *)(param_2 + 0x46) = 1;
    iVar1 = *(int *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x30);
    iVar3 = *(int *)(param_2 + 0x28);
    func_0x000107c27e18(param_2,0x12);
    func_0x000107c27de0(param_2,0x10,uVar10,0);
    func_0x000107c27e18(param_1,0,param_2,10);
    func_0x000107c27de0(param_2,8,uVar7,0);
    func_0x000107c27de0(param_2,6,uVar6 & 0xffffffff,0);
    func_0x000107c27de0(param_2,4,uVar13 & 0xffffffff,0);
    func_0x000107c27dec(param_2,0xe,uVar9,0);
    func_0x000107c27dec(param_2,0xc,uVar8 & 0xffffffff,0);
    uVar13 = param_2;
    func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
    _objc_release(uVar5);
    _objc_release(uVar5);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_10aedec14(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c121e80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_10aedec14(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_10aedec14(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  FUN_10aedec14(param_2,uVar10);
  uVar12 = param_3;
  func_0x00010bf69d40(param_3);
  func_0x00010c08a700(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x000107c27db8(param_2,0x10);
  func_0x000107c27ddc(param_2,0xc,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_2,10,uVar9 & 0xffffffff);
  if (uVar13 != 0) {
    func_0x000107c27db4(param_2,4);
    func_0x000107c27de0(param_2,8,
                        (((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) +
                         *(int *)(param_2 + 0x28)) - (int)uVar13) + 4,0);
  }
  func_0x000107c27ddc(param_2,6,(int)uVar7);
  func_0x000107c27ddc(param_2,4,uVar5 & 0xffffffff);
  func_0x000107c27dec(param_2,0xe,uVar12,0);
  func_0x000107c27dc0(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10aedec14; end: 10aeded43;  */

undefined8 FUN_10aedec14(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10aedecf4;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x000107c27df0(param_1,pcVar1,pcVar2);
    goto LAB_10aedecf4;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10aedecb4;
    param_1 = 0;
  }
  else {
LAB_10aedecb4:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c27df0(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10aedecf4:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10aeded44; end: 10aededfb;  */

undefined8 FUN_10aeded44(void)

{
  int iVar1;
  
  if ((bRam0000000113839428 & 1) == 0) {
    iVar1 = 0x13839428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138393c0 = 0xe;
      puRam00000001138393c8 = &UNK_10f6d5c74;
      uRam00000001138393d0 = 0x10001;
      pcRam00000001138393d8 = FUN_10aededfc;
      pcRam00000001138393e0 = FUN_10aedee34;
      ppuRam00000001138393b8 = &PTR_DAT_110864c08;
      uRam00000001138393f8 = 0;
      uRam00000001138393f0 = 0;
      uRam0000000113839408 = 0;
      uRam0000000113839400 = 0;
      uRam0000000113839418 = 0;
      uRam0000000113839410 = 0;
      uRam0000000113839420 = 0;
      ___cxa_atexit(&DAT_1050797f4,0x1138393b8,0x100000000);
      ___cxa_guard_release(0x113839428);
    }
  }
  return 0x1138393b8;
}



/* Entry: 10aededfc; end: 10aedee33;  */

undefined4 FUN_10aededfc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}


