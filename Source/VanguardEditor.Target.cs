// Copyright Flames of Amaterasu

using UnrealBuildTool;
using System.Collections.Generic;

public class VanguardEditorTarget : TargetRules
{
	public VanguardEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Vanguard" } );
	}
}
